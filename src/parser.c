#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 47
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 22
#define ALIAS_COUNT 0
#define TOKEN_COUNT 11
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum {
  aux_sym_comment_token1 = 1,
  anon_sym_POUND = 2,
  aux_sym__variable_command_token1 = 3,
  aux_sym__variable_command_token2 = 4,
  sym_command_identifier = 5,
  anon_sym_LBRACE = 6,
  anon_sym_RBRACE = 7,
  sym_string = 8,
  sym_word = 9,
  sym__semicolon = 10,
  sym_source_file = 11,
  sym__command_option = 12,
  sym_command = 13,
  sym_comment = 14,
  sym_variable_declaration = 15,
  sym__command_name = 16,
  sym__variable_command = 17,
  sym__block_choice = 18,
  sym_block = 19,
  aux_sym_source_file_repeat1 = 20,
  aux_sym_command_repeat1 = 21,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_POUND] = "#",
  [aux_sym__variable_command_token1] = "_variable_command_token1",
  [aux_sym__variable_command_token2] = "_variable_command_token2",
  [sym_command_identifier] = "command_identifier",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_string] = "string",
  [sym_word] = "word",
  [sym__semicolon] = "_semicolon",
  [sym_source_file] = "source_file",
  [sym__command_option] = "_command_option",
  [sym_command] = "command",
  [sym_comment] = "comment",
  [sym_variable_declaration] = "variable_declaration",
  [sym__command_name] = "_command_name",
  [sym__variable_command] = "_variable_command",
  [sym__block_choice] = "_block_choice",
  [sym_block] = "block",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_command_repeat1] = "command_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [anon_sym_POUND] = anon_sym_POUND,
  [aux_sym__variable_command_token1] = aux_sym__variable_command_token1,
  [aux_sym__variable_command_token2] = aux_sym__variable_command_token2,
  [sym_command_identifier] = sym_command_identifier,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_string] = sym_string,
  [sym_word] = sym_word,
  [sym__semicolon] = sym__semicolon,
  [sym_source_file] = sym_source_file,
  [sym__command_option] = sym__command_option,
  [sym_command] = sym_command,
  [sym_comment] = sym_comment,
  [sym_variable_declaration] = sym_variable_declaration,
  [sym__command_name] = sym__command_name,
  [sym__variable_command] = sym__variable_command,
  [sym__block_choice] = sym__block_choice,
  [sym_block] = sym_block,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_command_repeat1] = aux_sym_command_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__variable_command_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__variable_command_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_command_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_word] = {
    .visible = true,
    .named = true,
  },
  [sym__semicolon] = {
    .visible = false,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__command_option] = {
    .visible = false,
    .named = true,
  },
  [sym_command] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym__command_name] = {
    .visible = false,
    .named = true,
  },
  [sym__variable_command] = {
    .visible = false,
    .named = true,
  },
  [sym__block_choice] = {
    .visible = false,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_command_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 2,
  [4] = 4,
  [5] = 5,
  [6] = 5,
  [7] = 4,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 9,
  [12] = 10,
  [13] = 13,
  [14] = 14,
  [15] = 14,
  [16] = 13,
  [17] = 17,
  [18] = 17,
  [19] = 19,
  [20] = 20,
  [21] = 19,
  [22] = 20,
  [23] = 23,
  [24] = 23,
  [25] = 25,
  [26] = 26,
  [27] = 25,
  [28] = 28,
  [29] = 26,
  [30] = 28,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 36,
  [38] = 31,
  [39] = 34,
  [40] = 32,
  [41] = 35,
  [42] = 33,
  [43] = 43,
  [44] = 44,
  [45] = 44,
  [46] = 46,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(5);
      if (lookahead == '#') ADVANCE(7);
      if (lookahead == ';') ADVANCE(21);
      if (lookahead == '{') ADVANCE(17);
      if (lookahead == '}') ADVANCE(18);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 1:
      if (lookahead == '#') ADVANCE(7);
      if (lookahead == '}') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 2:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(6);
      END_STATE();
    case 4:
      if (eof) ADVANCE(5);
      if (lookahead == '#') ADVANCE(7);
      if (lookahead == ';') ADVANCE(21);
      if (lookahead == '{') ADVANCE(17);
      if (lookahead == '}') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(aux_sym__variable_command_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(11);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(aux_sym__variable_command_token2);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_command_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(15);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_command_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(12);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_command_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(14);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_command_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(9);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_command_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(13);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_command_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(8);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_command_identifier);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_string);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym__semicolon);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 4},
  [10] = {.lex_state = 4},
  [11] = {.lex_state = 4},
  [12] = {.lex_state = 4},
  [13] = {.lex_state = 4},
  [14] = {.lex_state = 4},
  [15] = {.lex_state = 4},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_comment_token1] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [aux_sym__variable_command_token1] = ACTIONS(1),
    [aux_sym__variable_command_token2] = ACTIONS(1),
    [sym_command_identifier] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym__semicolon] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(46),
    [sym__command_option] = STATE(8),
    [sym_command] = STATE(8),
    [sym_comment] = STATE(8),
    [sym_variable_declaration] = STATE(8),
    [sym__command_name] = STATE(16),
    [sym__variable_command] = STATE(25),
    [aux_sym_source_file_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_comment_token1] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(13), 1,
      anon_sym_RBRACE,
    ACTIONS(15), 1,
      sym_string,
    STATE(13), 1,
      sym__command_name,
    STATE(27), 1,
      sym__variable_command,
    STATE(5), 5,
      sym__command_option,
      sym_command,
      sym_comment,
      sym_variable_declaration,
      aux_sym_source_file_repeat1,
  [26] = 7,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      anon_sym_RBRACE,
    ACTIONS(19), 1,
      sym_string,
    STATE(13), 1,
      sym__command_name,
    STATE(27), 1,
      sym__variable_command,
    STATE(6), 5,
      sym__command_option,
      sym_command,
      sym_comment,
      sym_variable_declaration,
      aux_sym_source_file_repeat1,
  [52] = 6,
    ACTIONS(21), 1,
      aux_sym_comment_token1,
    ACTIONS(24), 1,
      anon_sym_POUND,
    ACTIONS(27), 1,
      anon_sym_RBRACE,
    STATE(13), 1,
      sym__command_name,
    STATE(27), 1,
      sym__variable_command,
    STATE(4), 5,
      sym__command_option,
      sym_command,
      sym_comment,
      sym_variable_declaration,
      aux_sym_source_file_repeat1,
  [75] = 6,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(29), 1,
      anon_sym_RBRACE,
    STATE(13), 1,
      sym__command_name,
    STATE(27), 1,
      sym__variable_command,
    STATE(4), 5,
      sym__command_option,
      sym_command,
      sym_comment,
      sym_variable_declaration,
      aux_sym_source_file_repeat1,
  [98] = 6,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_RBRACE,
    STATE(13), 1,
      sym__command_name,
    STATE(27), 1,
      sym__variable_command,
    STATE(4), 5,
      sym__command_option,
      sym_command,
      sym_comment,
      sym_variable_declaration,
      aux_sym_source_file_repeat1,
  [121] = 6,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    ACTIONS(33), 1,
      aux_sym_comment_token1,
    ACTIONS(36), 1,
      anon_sym_POUND,
    STATE(16), 1,
      sym__command_name,
    STATE(25), 1,
      sym__variable_command,
    STATE(7), 5,
      sym__command_option,
      sym_command,
      sym_comment,
      sym_variable_declaration,
      aux_sym_source_file_repeat1,
  [144] = 6,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
    STATE(16), 1,
      sym__command_name,
    STATE(25), 1,
      sym__variable_command,
    STATE(7), 5,
      sym__command_option,
      sym_command,
      sym_comment,
      sym_variable_declaration,
      aux_sym_source_file_repeat1,
  [167] = 6,
    ACTIONS(43), 1,
      anon_sym_POUND,
    ACTIONS(45), 1,
      anon_sym_LBRACE,
    ACTIONS(47), 1,
      sym_word,
    ACTIONS(49), 1,
      sym__semicolon,
    ACTIONS(41), 2,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
    STATE(17), 3,
      sym__block_choice,
      sym_block,
      aux_sym_command_repeat1,
  [189] = 6,
    ACTIONS(45), 1,
      anon_sym_LBRACE,
    ACTIONS(47), 1,
      sym_word,
    ACTIONS(53), 1,
      anon_sym_POUND,
    ACTIONS(55), 1,
      sym__semicolon,
    ACTIONS(51), 2,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
    STATE(17), 3,
      sym__block_choice,
      sym_block,
      aux_sym_command_repeat1,
  [211] = 6,
    ACTIONS(43), 1,
      anon_sym_POUND,
    ACTIONS(57), 1,
      anon_sym_LBRACE,
    ACTIONS(59), 1,
      sym_word,
    ACTIONS(61), 1,
      sym__semicolon,
    ACTIONS(41), 2,
      aux_sym_comment_token1,
      anon_sym_RBRACE,
    STATE(18), 3,
      sym__block_choice,
      sym_block,
      aux_sym_command_repeat1,
  [233] = 6,
    ACTIONS(53), 1,
      anon_sym_POUND,
    ACTIONS(57), 1,
      anon_sym_LBRACE,
    ACTIONS(59), 1,
      sym_word,
    ACTIONS(63), 1,
      sym__semicolon,
    ACTIONS(51), 2,
      aux_sym_comment_token1,
      anon_sym_RBRACE,
    STATE(18), 3,
      sym__block_choice,
      sym_block,
      aux_sym_command_repeat1,
  [255] = 6,
    ACTIONS(57), 1,
      anon_sym_LBRACE,
    ACTIONS(67), 1,
      anon_sym_POUND,
    ACTIONS(69), 1,
      sym_word,
    ACTIONS(71), 1,
      sym__semicolon,
    ACTIONS(65), 2,
      aux_sym_comment_token1,
      anon_sym_RBRACE,
    STATE(11), 3,
      sym__block_choice,
      sym_block,
      aux_sym_command_repeat1,
  [277] = 6,
    ACTIONS(45), 1,
      anon_sym_LBRACE,
    ACTIONS(75), 1,
      anon_sym_POUND,
    ACTIONS(77), 1,
      sym_word,
    ACTIONS(79), 1,
      sym__semicolon,
    ACTIONS(73), 2,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
    STATE(10), 3,
      sym__block_choice,
      sym_block,
      aux_sym_command_repeat1,
  [299] = 6,
    ACTIONS(57), 1,
      anon_sym_LBRACE,
    ACTIONS(75), 1,
      anon_sym_POUND,
    ACTIONS(81), 1,
      sym_word,
    ACTIONS(83), 1,
      sym__semicolon,
    ACTIONS(73), 2,
      aux_sym_comment_token1,
      anon_sym_RBRACE,
    STATE(12), 3,
      sym__block_choice,
      sym_block,
      aux_sym_command_repeat1,
  [321] = 6,
    ACTIONS(45), 1,
      anon_sym_LBRACE,
    ACTIONS(67), 1,
      anon_sym_POUND,
    ACTIONS(85), 1,
      sym_word,
    ACTIONS(87), 1,
      sym__semicolon,
    ACTIONS(65), 2,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
    STATE(9), 3,
      sym__block_choice,
      sym_block,
      aux_sym_command_repeat1,
  [343] = 5,
    ACTIONS(91), 1,
      anon_sym_POUND,
    ACTIONS(93), 1,
      anon_sym_LBRACE,
    ACTIONS(96), 1,
      sym_word,
    ACTIONS(89), 3,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      sym__semicolon,
    STATE(17), 3,
      sym__block_choice,
      sym_block,
      aux_sym_command_repeat1,
  [363] = 5,
    ACTIONS(91), 1,
      anon_sym_POUND,
    ACTIONS(99), 1,
      anon_sym_LBRACE,
    ACTIONS(102), 1,
      sym_word,
    ACTIONS(89), 3,
      aux_sym_comment_token1,
      anon_sym_RBRACE,
      sym__semicolon,
    STATE(18), 3,
      sym__block_choice,
      sym_block,
      aux_sym_command_repeat1,
  [383] = 2,
    ACTIONS(107), 1,
      anon_sym_POUND,
    ACTIONS(105), 5,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_word,
      sym__semicolon,
  [394] = 2,
    ACTIONS(111), 1,
      anon_sym_POUND,
    ACTIONS(109), 5,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_word,
      sym__semicolon,
  [405] = 2,
    ACTIONS(107), 1,
      anon_sym_POUND,
    ACTIONS(105), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      sym_word,
      sym__semicolon,
  [416] = 2,
    ACTIONS(111), 1,
      anon_sym_POUND,
    ACTIONS(109), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      sym_word,
      sym__semicolon,
  [427] = 2,
    ACTIONS(115), 1,
      anon_sym_POUND,
    ACTIONS(113), 5,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_word,
      sym__semicolon,
  [438] = 2,
    ACTIONS(115), 1,
      anon_sym_POUND,
    ACTIONS(113), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      sym_word,
      sym__semicolon,
  [449] = 3,
    ACTIONS(45), 1,
      anon_sym_LBRACE,
    ACTIONS(117), 1,
      sym_word,
    STATE(28), 2,
      sym__block_choice,
      sym_block,
  [460] = 3,
    ACTIONS(121), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym__semicolon,
    ACTIONS(119), 2,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
  [471] = 3,
    ACTIONS(45), 1,
      anon_sym_LBRACE,
    ACTIONS(125), 1,
      sym_word,
    STATE(30), 2,
      sym__block_choice,
      sym_block,
  [482] = 3,
    ACTIONS(45), 1,
      anon_sym_LBRACE,
    ACTIONS(127), 1,
      sym_word,
    STATE(26), 2,
      sym__block_choice,
      sym_block,
  [493] = 3,
    ACTIONS(121), 1,
      anon_sym_POUND,
    ACTIONS(129), 1,
      sym__semicolon,
    ACTIONS(119), 2,
      aux_sym_comment_token1,
      anon_sym_RBRACE,
  [504] = 3,
    ACTIONS(57), 1,
      anon_sym_LBRACE,
    ACTIONS(131), 1,
      sym_word,
    STATE(29), 2,
      sym__block_choice,
      sym_block,
  [515] = 2,
    ACTIONS(135), 1,
      anon_sym_POUND,
    ACTIONS(133), 2,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
  [523] = 2,
    ACTIONS(139), 1,
      anon_sym_POUND,
    ACTIONS(137), 2,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
  [531] = 2,
    ACTIONS(53), 1,
      anon_sym_POUND,
    ACTIONS(51), 2,
      aux_sym_comment_token1,
      anon_sym_RBRACE,
  [539] = 2,
    ACTIONS(43), 1,
      anon_sym_POUND,
    ACTIONS(41), 2,
      aux_sym_comment_token1,
      anon_sym_RBRACE,
  [547] = 2,
    ACTIONS(143), 1,
      sym_command_identifier,
    ACTIONS(141), 2,
      aux_sym__variable_command_token1,
      aux_sym__variable_command_token2,
  [555] = 2,
    ACTIONS(147), 1,
      anon_sym_POUND,
    ACTIONS(145), 2,
      aux_sym_comment_token1,
      anon_sym_RBRACE,
  [563] = 2,
    ACTIONS(147), 1,
      anon_sym_POUND,
    ACTIONS(145), 2,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
  [571] = 2,
    ACTIONS(135), 1,
      anon_sym_POUND,
    ACTIONS(133), 2,
      aux_sym_comment_token1,
      anon_sym_RBRACE,
  [579] = 2,
    ACTIONS(43), 1,
      anon_sym_POUND,
    ACTIONS(41), 2,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
  [587] = 2,
    ACTIONS(139), 1,
      anon_sym_POUND,
    ACTIONS(137), 2,
      aux_sym_comment_token1,
      anon_sym_RBRACE,
  [595] = 2,
    ACTIONS(149), 1,
      sym_command_identifier,
    ACTIONS(141), 2,
      aux_sym__variable_command_token1,
      aux_sym__variable_command_token2,
  [603] = 2,
    ACTIONS(53), 1,
      anon_sym_POUND,
    ACTIONS(51), 2,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
  [611] = 1,
    ACTIONS(151), 2,
      anon_sym_LBRACE,
      sym_word,
  [616] = 1,
    ACTIONS(31), 1,
      anon_sym_RBRACE,
  [620] = 1,
    ACTIONS(29), 1,
      anon_sym_RBRACE,
  [624] = 1,
    ACTIONS(153), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 26,
  [SMALL_STATE(4)] = 52,
  [SMALL_STATE(5)] = 75,
  [SMALL_STATE(6)] = 98,
  [SMALL_STATE(7)] = 121,
  [SMALL_STATE(8)] = 144,
  [SMALL_STATE(9)] = 167,
  [SMALL_STATE(10)] = 189,
  [SMALL_STATE(11)] = 211,
  [SMALL_STATE(12)] = 233,
  [SMALL_STATE(13)] = 255,
  [SMALL_STATE(14)] = 277,
  [SMALL_STATE(15)] = 299,
  [SMALL_STATE(16)] = 321,
  [SMALL_STATE(17)] = 343,
  [SMALL_STATE(18)] = 363,
  [SMALL_STATE(19)] = 383,
  [SMALL_STATE(20)] = 394,
  [SMALL_STATE(21)] = 405,
  [SMALL_STATE(22)] = 416,
  [SMALL_STATE(23)] = 427,
  [SMALL_STATE(24)] = 438,
  [SMALL_STATE(25)] = 449,
  [SMALL_STATE(26)] = 460,
  [SMALL_STATE(27)] = 471,
  [SMALL_STATE(28)] = 482,
  [SMALL_STATE(29)] = 493,
  [SMALL_STATE(30)] = 504,
  [SMALL_STATE(31)] = 515,
  [SMALL_STATE(32)] = 523,
  [SMALL_STATE(33)] = 531,
  [SMALL_STATE(34)] = 539,
  [SMALL_STATE(35)] = 547,
  [SMALL_STATE(36)] = 555,
  [SMALL_STATE(37)] = 563,
  [SMALL_STATE(38)] = 571,
  [SMALL_STATE(39)] = 579,
  [SMALL_STATE(40)] = 587,
  [SMALL_STATE(41)] = 595,
  [SMALL_STATE(42)] = 603,
  [SMALL_STATE(43)] = 611,
  [SMALL_STATE(44)] = 616,
  [SMALL_STATE(45)] = 620,
  [SMALL_STATE(46)] = 624,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(15),
  [24] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(41),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(14),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(35),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 2),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 2),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 1),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(3),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(17),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(2),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(18),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__command_name, 2),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__command_name, 2),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 3),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 3),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 3),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 4),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 4),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 3),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variable_command, 2),
  [153] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_tintin(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
