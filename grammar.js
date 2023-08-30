module.exports = grammar({
  name: 'tintin',

  rules: {
    source_file: $ => repeat($.command),

    command: $ => seq(
      $._command_name,
      repeat($._block_choice),
      optional($._semicolon),
    ),

    _command_name: $ => seq(
      "#",
      $.command_identifier
    ),

    command_identifier: _ => /[A-Za-z]+/,

    _block_choice: $ => choice(
      $.block,
      $.word,
    ),

    block: $ => seq(
      "{",
        choice(
          prec(1, repeat($.command)),
          $.string,
        ),
      "}"
    ),

    string: _ => /[^\s\#\}][^\}]*/,

    word: _ => /[A-Za-z0-9_]+/,

    _semicolon: _ => ";",
  }
});
