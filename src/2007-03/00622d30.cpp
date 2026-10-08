// roc 2007-03 00622d30  unit: seg_00620000  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00622d30
//
// 00622d30  b818317c00           mov eax, 0x7c3118
// 00622d35  c3                   ret 
// library rbxgs/util\Debug.cpp (function __catch$?_Osfx@?$basic_ostream@DU?$char_traits@D@std@@@std@@QAEXXZ$0)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Debug.cpp
