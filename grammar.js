module.exports = grammar({
  name: 'tintin',

  rules: {
    source_file: $ => repeat($._command_option),

    _command_option: $ => choice(
      prec(1, $.comment),
      prec(1, field("variable_declaration", alias($.variable_declaration, $.command))),
      $.command,
    ),

    command: $ => seq(
      $._command_name,
      repeat($._block_choice),
      optional($._semicolon),
    ),

    comment: $ => seq(
      /\#[nN][oO][pP]/,
      repeat($._block_choice),
      optional($._semicolon),
    ),

    variable_declaration: $ => seq(
      $._variable_command,
      field("name", $._block_choice),
      field("value", $._block_choice),
      optional($._semicolon),
    ),

    _command_name: $ => seq(
      "#",
      $.command_identifier
    ),

    _variable_command: $ => seq(
      "#",
      alias(choice(
        /[vV][aA][rR]/,
        /[vV][aA][rR][iI][aA][bB][lL][eE]/,
      ), $.command_identifier),
    ),

    command_identifier: _ => /[A-Za-z]+/,

    _block_choice: $ => choice(
      $.block,
      $.word,
      $.variable_reference,
    ),

    block: $ => seq(
      "{",
        choice(
          prec(1, repeat($._command_option)),
          $.string,
        ),
      "}"
    ),

    variable_reference: $ => seq(
      "$",
      $._block_choice,
    ),

    string: _ => /[^\s\#\}][^\}]*/,

    word: _ => /[A-Za-z0-9_]+/,

    _semicolon: _ => ";",
  }
});
