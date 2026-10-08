// roc 2007-03 006208e0  unit: seg_00620000  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006208e0
//
// 006208e0  83c8ff               or eax, 0xffffffff
// 006208e3  c20400               ret 4
// library rbxgs/util\Log.cpp (function ?overflow@?$basic_streambuf@DU?$char_traits@D@std@@@std@@MAEHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Log.cpp
