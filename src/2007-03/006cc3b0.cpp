// roc 2007-03 006cc3b0  unit: seg_006c0000  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006cc3b0
//
// 006cc3b0  b8d86c7d00           mov eax, 0x7d6cd8
// 006cc3b5  c3                   ret 
// library rbxgs/util\Debug.cpp (function __catch$?_Osfx@?$basic_ostream@DU?$char_traits@D@std@@@std@@QAEXXZ$0)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Debug.cpp
