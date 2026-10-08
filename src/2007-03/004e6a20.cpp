// roc 2007-03 004e6a20  unit: seg_004e0000  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004e6a20
//
// 004e6a20  b8d8eb7900           mov eax, 0x79ebd8
// 004e6a25  c3                   ret 
// library rbxgs/util\Debug.cpp (function __catch$?_Osfx@?$basic_ostream@DU?$char_traits@D@std@@@std@@QAEXXZ$0)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Debug.cpp
