// roc 2007-03 006f1b80  unit: seg_006f0000  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006f1b80
//
// 006f1b80  b8ccae7d00           mov eax, 0x7daecc
// 006f1b85  c3                   ret 
// library rbxgs/util\Debug.cpp (function __catch$?_Osfx@?$basic_ostream@DU?$char_traits@D@std@@@std@@QAEXXZ$0)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Debug.cpp
