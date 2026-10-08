// roc 2007-03 0040fbd0  unit: seg_00400000  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0040fbd0
//
// 0040fbd0  b834597800           mov eax, 0x785934
// 0040fbd5  c3                   ret 
// library rbxgs/util\Debug.cpp (function __catch$?_Osfx@?$basic_ostream@DU?$char_traits@D@std@@@std@@QAEXXZ$0)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Debug.cpp
