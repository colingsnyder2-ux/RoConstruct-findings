// roc 2007-03 00711a00  unit: seg_00710000  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00711a00
//
// 00711a00  b8a8488b00           mov eax, 0x8b48a8
// 00711a05  c3                   ret 
// library rbxgs/util\Debug.cpp (function __catch$?_Osfx@?$basic_ostream@DU?$char_traits@D@std@@@std@@QAEXXZ$0)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Debug.cpp
