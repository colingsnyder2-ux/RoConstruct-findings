// roc 2007-03 0067b310  unit: seg_00670000  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0067b310
//
// 0067b310  b8dcd37c00           mov eax, 0x7cd3dc
// 0067b315  c3                   ret 
// library rbxgs/util\Debug.cpp (function __catch$?_Osfx@?$basic_ostream@DU?$char_traits@D@std@@@std@@QAEXXZ$0)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Debug.cpp
