// roc 2007-03 005e0640  unit: seg_005e0000  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005e0640
//
// 005e0640  b828b48a00           mov eax, 0x8ab428
// 005e0645  c3                   ret 
// library rbxgs/util\Debug.cpp (function __catch$?_Osfx@?$basic_ostream@DU?$char_traits@D@std@@@std@@QAEXXZ$0)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Debug.cpp
