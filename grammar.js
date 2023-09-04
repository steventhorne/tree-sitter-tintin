module.exports = grammar({
  name: 'tintin',

  rules: {
    source_file: $ => repeat($._command_option),

    _command_option: $ => choice(
      prec(1, $.comment),
      prec(1, $.variable_declaration),
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
      $._block_choice,
      $._block_choice,
      optional($._semicolon),
    ),

    _command_name: $ => seq(
      "#",
      $.command_identifier
    ),

    _variable_command: $ => seq(
      "#",
      choice(
        /[vV][aA][rR]/,
        /[vV][aA][rR][iI][aA][bB][lL][eE]/,
      ),
    ),

    command_identifier: _ => /[A-Za-z]+/,

    _block_choice: $ => choice(
      $.block,
      $.word,
    ),

    block: $ => seq(
      "{",
        choice(
          prec(1, repeat($._command_option)),
          $.string,
        ),
      "}"
    ),

    string: _ => /[^\s\#\}][^\}]*/,

    word: _ => /[A-Za-z0-9_]+/,

    _semicolon: _ => ";",
  }
});
