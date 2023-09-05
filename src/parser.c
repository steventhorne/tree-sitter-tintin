#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 53
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 22
#define ALIAS_COUNT 0
#define TOKEN_COUNT 11
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 5

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
  [aux_sym__variable_command_token1] = "command_identifier",
  [aux_sym__variable_command_token2] = "command_identifier",
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
  [sym_variable_declaration] = "command",
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
  [aux_sym__variable_command_token1] = sym_command_identifier,
  [aux_sym__variable_command_token2] = sym_command_identifier,
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
  [sym_variable_declaration] = sym_command,
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
    .visible = true,
    .named = true,
  },
  [aux_sym__variable_command_token2] = {
    .visible = true,
    .named = true,
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

enum {
  field_variable_declaration = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_variable_declaration] = "variable_declaration",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_variable_declaration, 0, .inherited = true},
  [1] =
    {field_variable_declaration, 0},
  [2] =
    {field_variable_declaration, 0, .inherited = true},
    {field_variable_declaration, 1, .inherited = true},
  [4] =
    {field_variable_declaration, 1, .inherited = true},
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
  [6] = 6,
  [7] = 4,
  [8] = 5,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 13,
  [15] = 11,
  [16] = 9,
  [17] = 10,
  [18] = 12,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 19,
  [23] = 23,
  [24] = 23,
  [25] = 21,
  [26] = 20,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 29,
  [31] = 28,
  [32] = 27,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 34,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 37,
  [41] = 41,
  [42] = 42,
  [43] = 35,
  [44] = 41,
  [45] = 33,
  [46] = 42,
  [47] = 39,
  [48] = 38,
  [49] = 49,
  [50] = 50,
  [51] = 50,
  [52] = 52,
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
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 4},
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
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
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
    [sym_source_file] = STATE(52),
    [sym__command_option] = STATE(48),
    [sym_command] = STATE(48),
    [sym_comment] = STATE(48),
    [sym_variable_declaration] = STATE(40),
    [sym__command_name] = STATE(11),
    [sym__variable_command] = STATE(31),
    [aux_sym_source_file_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_comment_token1] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(13), 1,
      anon_sym_RBRACE,
    ACTIONS(15), 1,
      sym_string,
    STATE(4), 1,
      aux_sym_source_file_repeat1,
    STATE(15), 1,
      sym__command_name,
    STATE(28), 1,
      sym__variable_command,
    STATE(37), 1,
      sym_variable_declaration,
    STATE(38), 3,
      sym__command_option,
      sym_command,
      sym_comment,
  [30] = 9,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      anon_sym_RBRACE,
    ACTIONS(19), 1,
      sym_string,
    STATE(7), 1,
      aux_sym_source_file_repeat1,
    STATE(15), 1,
      sym__command_name,
    STATE(28), 1,
      sym__variable_command,
    STATE(37), 1,
      sym_variable_declaration,
    STATE(38), 3,
      sym__command_option,
      sym_command,
      sym_comment,
  [60] = 8,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      anon_sym_RBRACE,
    STATE(5), 1,
      aux_sym_source_file_repeat1,
    STATE(15), 1,
      sym__command_name,
    STATE(28), 1,
      sym__variable_command,
    STATE(37), 1,
      sym_variable_declaration,
    STATE(38), 3,
      sym__command_option,
      sym_command,
      sym_comment,
  [87] = 8,
    ACTIONS(23), 1,
      aux_sym_comment_token1,
    ACTIONS(26), 1,
      anon_sym_POUND,
    ACTIONS(29), 1,
      anon_sym_RBRACE,
    STATE(5), 1,
      aux_sym_source_file_repeat1,
    STATE(15), 1,
      sym__command_name,
    STATE(28), 1,
      sym__variable_command,
    STATE(37), 1,
      sym_variable_declaration,
    STATE(38), 3,
      sym__command_option,
      sym_command,
      sym_comment,
  [114] = 8,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    STATE(8), 1,
      aux_sym_source_file_repeat1,
    STATE(11), 1,
      sym__command_name,
    STATE(31), 1,
      sym__variable_command,
    STATE(40), 1,
      sym_variable_declaration,
    STATE(48), 3,
      sym__command_option,
      sym_command,
      sym_comment,
  [141] = 8,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(33), 1,
      anon_sym_RBRACE,
    STATE(5), 1,
      aux_sym_source_file_repeat1,
    STATE(15), 1,
      sym__command_name,
    STATE(28), 1,
      sym__variable_command,
    STATE(37), 1,
      sym_variable_declaration,
    STATE(38), 3,
      sym__command_option,
      sym_command,
      sym_comment,
  [168] = 8,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    ACTIONS(35), 1,
      aux_sym_comment_token1,
    ACTIONS(38), 1,
      anon_sym_POUND,
    STATE(8), 1,
      aux_sym_source_file_repeat1,
    STATE(11), 1,
      sym__command_name,
    STATE(31), 1,
      sym__variable_command,
    STATE(40), 1,
      sym_variable_declaration,
    STATE(48), 3,
      sym__command_option,
      sym_command,
      sym_comment,
  [195] = 6,
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
    STATE(14), 3,
      sym__block_choice,
      sym_block,
      aux_sym_command_repeat1,
  [217] = 5,
    ACTIONS(53), 1,
      anon_sym_POUND,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    ACTIONS(58), 1,
      sym_word,
    ACTIONS(51), 3,
      aux_sym_comment_token1,
      anon_sym_RBRACE,
      sym__semicolon,
    STATE(10), 3,
      sym__block_choice,
      sym_block,
      aux_sym_command_repeat1,
  [237] = 6,
    ACTIONS(45), 1,
      anon_sym_LBRACE,
    ACTIONS(63), 1,
      anon_sym_POUND,
    ACTIONS(65), 1,
      sym_word,
    ACTIONS(67), 1,
      sym__semicolon,
    ACTIONS(61), 2,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
    STATE(18), 3,
      sym__block_choice,
      sym_block,
      aux_sym_command_repeat1,
  [259] = 6,
    ACTIONS(71), 1,
      anon_sym_POUND,
    ACTIONS(73), 1,
      anon_sym_LBRACE,
    ACTIONS(75), 1,
      sym_word,
    ACTIONS(77), 1,
      sym__semicolon,
    ACTIONS(69), 2,
      aux_sym_comment_token1,
      anon_sym_RBRACE,
    STATE(10), 3,
      sym__block_choice,
      sym_block,
      aux_sym_command_repeat1,
  [281] = 6,
    ACTIONS(73), 1,
      anon_sym_LBRACE,
    ACTIONS(75), 1,
      sym_word,
    ACTIONS(81), 1,
      anon_sym_POUND,
    ACTIONS(83), 1,
      sym__semicolon,
    ACTIONS(79), 2,
      aux_sym_comment_token1,
      anon_sym_RBRACE,
    STATE(10), 3,
      sym__block_choice,
      sym_block,
      aux_sym_command_repeat1,
  [303] = 6,
    ACTIONS(45), 1,
      anon_sym_LBRACE,
    ACTIONS(81), 1,
      anon_sym_POUND,
    ACTIONS(85), 1,
      sym_word,
    ACTIONS(87), 1,
      sym__semicolon,
    ACTIONS(79), 2,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
    STATE(17), 3,
      sym__block_choice,
      sym_block,
      aux_sym_command_repeat1,
  [325] = 6,
    ACTIONS(63), 1,
      anon_sym_POUND,
    ACTIONS(73), 1,
      anon_sym_LBRACE,
    ACTIONS(89), 1,
      sym_word,
    ACTIONS(91), 1,
      sym__semicolon,
    ACTIONS(61), 2,
      aux_sym_comment_token1,
      anon_sym_RBRACE,
    STATE(12), 3,
      sym__block_choice,
      sym_block,
      aux_sym_command_repeat1,
  [347] = 6,
    ACTIONS(43), 1,
      anon_sym_POUND,
    ACTIONS(73), 1,
      anon_sym_LBRACE,
    ACTIONS(93), 1,
      sym_word,
    ACTIONS(95), 1,
      sym__semicolon,
    ACTIONS(41), 2,
      aux_sym_comment_token1,
      anon_sym_RBRACE,
    STATE(13), 3,
      sym__block_choice,
      sym_block,
      aux_sym_command_repeat1,
  [369] = 5,
    ACTIONS(53), 1,
      anon_sym_POUND,
    ACTIONS(97), 1,
      anon_sym_LBRACE,
    ACTIONS(100), 1,
      sym_word,
    ACTIONS(51), 3,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      sym__semicolon,
    STATE(17), 3,
      sym__block_choice,
      sym_block,
      aux_sym_command_repeat1,
  [389] = 6,
    ACTIONS(45), 1,
      anon_sym_LBRACE,
    ACTIONS(71), 1,
      anon_sym_POUND,
    ACTIONS(85), 1,
      sym_word,
    ACTIONS(103), 1,
      sym__semicolon,
    ACTIONS(69), 2,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
    STATE(17), 3,
      sym__block_choice,
      sym_block,
      aux_sym_command_repeat1,
  [411] = 2,
    ACTIONS(107), 1,
      anon_sym_POUND,
    ACTIONS(105), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      sym_word,
      sym__semicolon,
  [422] = 2,
    ACTIONS(111), 1,
      anon_sym_POUND,
    ACTIONS(109), 5,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_word,
      sym__semicolon,
  [433] = 2,
    ACTIONS(115), 1,
      anon_sym_POUND,
    ACTIONS(113), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      sym_word,
      sym__semicolon,
  [444] = 2,
    ACTIONS(107), 1,
      anon_sym_POUND,
    ACTIONS(105), 5,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_word,
      sym__semicolon,
  [455] = 2,
    ACTIONS(119), 1,
      anon_sym_POUND,
    ACTIONS(117), 5,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_word,
      sym__semicolon,
  [466] = 2,
    ACTIONS(119), 1,
      anon_sym_POUND,
    ACTIONS(117), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      sym_word,
      sym__semicolon,
  [477] = 2,
    ACTIONS(115), 1,
      anon_sym_POUND,
    ACTIONS(113), 5,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_word,
      sym__semicolon,
  [488] = 2,
    ACTIONS(111), 1,
      anon_sym_POUND,
    ACTIONS(109), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      sym_word,
      sym__semicolon,
  [499] = 3,
    ACTIONS(45), 1,
      anon_sym_LBRACE,
    ACTIONS(121), 1,
      sym_word,
    STATE(29), 2,
      sym__block_choice,
      sym_block,
  [510] = 3,
    ACTIONS(45), 1,
      anon_sym_LBRACE,
    ACTIONS(123), 1,
      sym_word,
    STATE(32), 2,
      sym__block_choice,
      sym_block,
  [521] = 3,
    ACTIONS(127), 1,
      anon_sym_POUND,
    ACTIONS(129), 1,
      sym__semicolon,
    ACTIONS(125), 2,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
  [532] = 3,
    ACTIONS(127), 1,
      anon_sym_POUND,
    ACTIONS(131), 1,
      sym__semicolon,
    ACTIONS(125), 2,
      aux_sym_comment_token1,
      anon_sym_RBRACE,
  [543] = 3,
    ACTIONS(45), 1,
      anon_sym_LBRACE,
    ACTIONS(133), 1,
      sym_word,
    STATE(27), 2,
      sym__block_choice,
      sym_block,
  [554] = 3,
    ACTIONS(73), 1,
      anon_sym_LBRACE,
    ACTIONS(135), 1,
      sym_word,
    STATE(30), 2,
      sym__block_choice,
      sym_block,
  [565] = 2,
    ACTIONS(139), 1,
      anon_sym_POUND,
    ACTIONS(137), 2,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
  [573] = 2,
    ACTIONS(81), 1,
      anon_sym_POUND,
    ACTIONS(79), 2,
      aux_sym_comment_token1,
      anon_sym_RBRACE,
  [581] = 2,
    ACTIONS(71), 1,
      anon_sym_POUND,
    ACTIONS(69), 2,
      aux_sym_comment_token1,
      anon_sym_RBRACE,
  [589] = 2,
    ACTIONS(81), 1,
      anon_sym_POUND,
    ACTIONS(79), 2,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
  [597] = 2,
    ACTIONS(143), 1,
      anon_sym_POUND,
    ACTIONS(141), 2,
      aux_sym_comment_token1,
      anon_sym_RBRACE,
  [605] = 2,
    ACTIONS(147), 1,
      anon_sym_POUND,
    ACTIONS(145), 2,
      aux_sym_comment_token1,
      anon_sym_RBRACE,
  [613] = 2,
    ACTIONS(151), 1,
      anon_sym_POUND,
    ACTIONS(149), 2,
      aux_sym_comment_token1,
      anon_sym_RBRACE,
  [621] = 2,
    ACTIONS(143), 1,
      anon_sym_POUND,
    ACTIONS(141), 2,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
  [629] = 2,
    ACTIONS(155), 1,
      anon_sym_POUND,
    ACTIONS(153), 2,
      aux_sym_comment_token1,
      anon_sym_RBRACE,
  [637] = 2,
    ACTIONS(159), 1,
      sym_command_identifier,
    ACTIONS(157), 2,
      aux_sym__variable_command_token1,
      aux_sym__variable_command_token2,
  [645] = 2,
    ACTIONS(71), 1,
      anon_sym_POUND,
    ACTIONS(69), 2,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
  [653] = 2,
    ACTIONS(155), 1,
      anon_sym_POUND,
    ACTIONS(153), 2,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
  [661] = 2,
    ACTIONS(139), 1,
      anon_sym_POUND,
    ACTIONS(137), 2,
      aux_sym_comment_token1,
      anon_sym_RBRACE,
  [669] = 2,
    ACTIONS(161), 1,
      sym_command_identifier,
    ACTIONS(157), 2,
      aux_sym__variable_command_token1,
      aux_sym__variable_command_token2,
  [677] = 2,
    ACTIONS(151), 1,
      anon_sym_POUND,
    ACTIONS(149), 2,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
  [685] = 2,
    ACTIONS(147), 1,
      anon_sym_POUND,
    ACTIONS(145), 2,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
  [693] = 1,
    ACTIONS(163), 2,
      anon_sym_LBRACE,
      sym_word,
  [698] = 1,
    ACTIONS(165), 1,
      anon_sym_RBRACE,
  [702] = 1,
    ACTIONS(167), 1,
      anon_sym_RBRACE,
  [706] = 1,
    ACTIONS(169), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 30,
  [SMALL_STATE(4)] = 60,
  [SMALL_STATE(5)] = 87,
  [SMALL_STATE(6)] = 114,
  [SMALL_STATE(7)] = 141,
  [SMALL_STATE(8)] = 168,
  [SMALL_STATE(9)] = 195,
  [SMALL_STATE(10)] = 217,
  [SMALL_STATE(11)] = 237,
  [SMALL_STATE(12)] = 259,
  [SMALL_STATE(13)] = 281,
  [SMALL_STATE(14)] = 303,
  [SMALL_STATE(15)] = 325,
  [SMALL_STATE(16)] = 347,
  [SMALL_STATE(17)] = 369,
  [SMALL_STATE(18)] = 389,
  [SMALL_STATE(19)] = 411,
  [SMALL_STATE(20)] = 422,
  [SMALL_STATE(21)] = 433,
  [SMALL_STATE(22)] = 444,
  [SMALL_STATE(23)] = 455,
  [SMALL_STATE(24)] = 466,
  [SMALL_STATE(25)] = 477,
  [SMALL_STATE(26)] = 488,
  [SMALL_STATE(27)] = 499,
  [SMALL_STATE(28)] = 510,
  [SMALL_STATE(29)] = 521,
  [SMALL_STATE(30)] = 532,
  [SMALL_STATE(31)] = 543,
  [SMALL_STATE(32)] = 554,
  [SMALL_STATE(33)] = 565,
  [SMALL_STATE(34)] = 573,
  [SMALL_STATE(35)] = 581,
  [SMALL_STATE(36)] = 589,
  [SMALL_STATE(37)] = 597,
  [SMALL_STATE(38)] = 605,
  [SMALL_STATE(39)] = 613,
  [SMALL_STATE(40)] = 621,
  [SMALL_STATE(41)] = 629,
  [SMALL_STATE(42)] = 637,
  [SMALL_STATE(43)] = 645,
  [SMALL_STATE(44)] = 653,
  [SMALL_STATE(45)] = 661,
  [SMALL_STATE(46)] = 669,
  [SMALL_STATE(47)] = 677,
  [SMALL_STATE(48)] = 685,
  [SMALL_STATE(49)] = 693,
  [SMALL_STATE(50)] = 698,
  [SMALL_STATE(51)] = 702,
  [SMALL_STATE(52)] = 706,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 3), SHIFT_REPEAT(16),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 3), SHIFT_REPEAT(46),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 3),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, .production_id = 1),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 3), SHIFT_REPEAT(9),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 3), SHIFT_REPEAT(42),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(2),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(10),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 1),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 2),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 2),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(3),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(17),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, .production_id = 4),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3, .production_id = 4),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__command_name, 2),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__command_name, 2),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 3),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 3),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 4),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 4),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__command_option, 1, .production_id = 2),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__command_option, 1, .production_id = 2),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1, .production_id = 1),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 1, .production_id = 1),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 3),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 3),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variable_command, 2),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [169] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
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
