#pragma once
#include "quantum.h"

#define KEYMAP( \
	K000, K001, K002, K003, K004, K005, K006, K007, K008, K009, K010, K011, K012, K013, K014, K015, K016, K017, K018, K019, K020, K021, K022, K023, K024, K025, K026, K027, \
	K100, K101, K102, K103, K104, K105, K106, K107, K108, K109, K110, K111, K112, K113, K114, K115, K116, K117, K118, K119, K120, K121, K122, K123, K124, K125, K126, K127, \
	K200, K201, K202, K203, K204, K205, K206, K207, K208, K209, K210, K211, K212, K213, K214, K215, K216, K217, K218, K219, K220, K221, K222, K223, K224, K225, K226, K227, \
	K300, K301, K302, K303, K304,       K306, K307, K308, K309, K310, K311, K312, K313, K314, K315, K316, K317, K318, K319, K320, K321, K322, K323, K324, K325, K326, K327, \
	K400, K401, K402, K403, K404, K405,       K407, K408, K409, K410, K411, K412, K413, K414, K415, K416, K417, K418, K419, K420,       K422, K423, K424, K425, K426, K427, \
	K500, K501, K502, K503, K504,       K506, K507,       K509, K510, K511, K512, K513, K514, K515, K516, K517, K518, K519, K520, K521,       K523, K524, K525, K526, K527, \
	K600, K601, K602, K603, K604, K605, K606,       K608, K609, K610, K611, K612, K613, K614, K615, K616, K617, K618, K619,       K621, K622, K623, K624, K625, K626, K627, \
	K700, K701, K702, K703, K704, K705, K706, K707, K708,       K710, K711, K712,       K714, K715, K716,       K718, K719, K720, K721, K722, K723, K724, K725, K726, K727  \
) { \
	{ K000,  K001,  K002,  K003,  K004,  K005,  K006,  K007,  K008,  K009,  K010,  K011,  K012,  K013,  K014,  K015,  K016,  K017,  K018,  K019,  K020,  K021,  K022,  K023,  K024,  K025,  K026,  K027 }, \
	{ K100,  K101,  K102,  K103,  K104,  K105,  K106,  K107,  K108,  K109,  K110,  K111,  K112,  K113,  K114,  K115,  K116,  K117,  K118,  K119,  K120,  K121,  K122,  K123,  K124,  K125,  K126,  K127 }, \
	{ K200,  K201,  K202,  K203,  K204,  K205,  K206,  K207,  K208,  K209,  K210,  K211,  K212,  K213,  K214,  K215,  K216,  K217,  K218,  K219,  K220,  K221,  K222,  K223,  K224,  K225,  K226,  K227 }, \
	{ K300,  K301,  K302,  K303,  K304,  KC_NO, K306,  K307,  K308,  K309,  K310,  K311,  K312,  K313,  K314,  K315,  K316,  K317,  K318,  K319,  K320,  K321,  K322,  K323,  K324,  K325,  K326,  K327 }, \
	{ K400,  K401,  K402,  K403,  K404,  K405,  KC_NO, K407,  K408,  K409,  K410,  K411,  K412,  K413,  K414,  K415,  K416,  K417,  K418,  K419,  K420,  KC_NO, K422,  K423,  K424,  K425,  K426,  K427 }, \
	{ K500,  K501,  K502,  K503,  K504,  KC_NO, K506,  K507,  KC_NO, K509,  K510,  K511,  K512,  K513,  K514,  K515,  K516,  K517,  K518,  K519,  K520,  K521,  KC_NO, K523,  K524,  K525,  K526,  K527 }, \
	{ K600,  K601,  K602,  K603,  K604,  K605,  K606,  KC_NO, K608,  K609,  K610,  K611,  K612,  K613,  K614,  K615,  K616,  K617,  K618,  K619,  KC_NO, K621,  K622,  K623,  K624,  K625,  K626,  K627 }, \
	{ K700,  K701,  K702,  K703,  K704,  K705,  K706,  K707,  K708,  KC_NO, K710,  K711,  K712,  KC_NO, K714,  K715,  K716,  KC_NO, K718,  K719,  K720,  K721,  K722,  K723,  K724,  K725,  K726,  K727 }  \
}

#define KEYMAP_SOUTHPAW( \
	K000, K001, K002, K003, K004, K005, K006, K007, K008, K009, K010, K011, K012, K013, K014, K015, K016, K017, K018, K019, K020, K021, K022, K023, K024, K025, K026, K027, \
	K100, K101, K102, K103, K104, K105, K106, K107, K108, K109, K110, K111, K112, K113, K114, K115, K116, K117, K118, K119, K120, K121, K122, K123, K124, K125, K126, K127, \
	K200, K201, K202, K203, K204, K205, K206, K207, K208, K209, K210, K211, K212, K213, K214, K215, K216, K217, K218, K219, K220, K221, K222, K223, K224, K225, K226, K227, \
	K300, K301, K302, K303, K304,       K306, K307, K308, K309, K310, K311, K312, K313, K314, K315, K316, K317, K318, K319, K320, K321, K322, K323, K324, K325, K326, K327, \
	K400, K401, K402, K403, K404, K405,       K407, K408, K409, K410, K411, K412, K413, K414, K415, K416, K417, K418, K419, K420,       K422, K423, K424, K425, K426, K427, \
	K500, K501, K502, K503, K504,       K506, K507,       K509, K510, K511, K512, K513, K514, K515, K516, K517, K518, K519, K520, K521,       K523, K524, K525, K526, K527, \
	K600, K601, K602, K603, K604, K605, K606,       K608, K609, K610, K611, K612, K613, K614, K615, K616, K617, K618, K619,       K621, K622, K623, K624, K625, K626, K627, \
	K700, K701, K702, K703, K704, K705, K706, K707, K708,       K710, K711, K712,       K714, K715, K716,       K718, K719, K720, K721, K722, K723, K724, K725, K726, K727  \
) { \
	{ K000,  K001,  K002,  K003,  K004,  K005,  K006,  K007,  K008,  K009,  K010,  K011,  K012,  K013,  K014,  K015,  K016,  K017,  K018,  K019,  K020,  K021,  K022,  K023,  K024,  K025,  K026,  K027 }, \
	{ K100,  K101,  K102,  K103,  K104,  K105,  K106,  K107,  K108,  K109,  K110,  K111,  K112,  K113,  K114,  K115,  K116,  K117,  K118,  K119,  K120,  K121,  K122,  K123,  K124,  K125,  K126,  K127 }, \
	{ K224,  K225,  K226,  K227,  K204,  K205,  K206,  K207,  K208,  K209,  K210,  K211,  K212,  K213,  K214,  K215,  K216,  K217,  K218,  K219,  K220,  K221,  K222,  K223,  K200,  K201,  K202,  K203 }, \
	{ K324,  K325,  K326,  K327,  K304,  KC_NO, K306,  K307,  K308,  K309,  K310,  K311,  K312,  K313,  K314,  K315,  K316,  K317,  K318,  K319,  K320,  K321,  K322,  K323,  K300,  K301,  K302,  K303 }, \
	{ K424,  K425,  K426,  K427,  K404,  K405,  KC_NO, K407,  K408,  K409,  K410,  K411,  K412,  K413,  K414,  K415,  K416,  K417,  K418,  K419,  K420,  KC_NO, K422,  K423,  K400,  K401,  K402,  K403 }, \
	{ K524,  K525,  K526,  K527,  K504,  KC_NO, K506,  K507,  KC_NO, K509,  K510,  K511,  K512,  K513,  K514,  K515,  K516,  K517,  K518,  K519,  K520,  K521,  KC_NO, K523,  K500,  K501,  K502,  K503 }, \
	{ K624,  K625,  K626,  K627,  K604,  K605,  K606,  KC_NO, K608,  K609,  K610,  K611,  K612,  K613,  K614,  K615,  K616,  K617,  K618,  K619,  KC_NO, K621,  K622,  K623,  K600,  K601,  K602,  K603 }, \
	{ K724,  K725,  K726,  K727,  K704,  K705,  K706,  K707,  K708,  KC_NO, K710,  K711,  K712,  KC_NO, K714,  K715,  K716,  KC_NO, K718,  K719,  K720,  K721,  K722,  K723,  K700,  K701,  K702,  K703 }  \
}
