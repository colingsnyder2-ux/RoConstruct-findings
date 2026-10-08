// roc 2007-03 004c2730  unit: seg_004c0000  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004c2730
//
// 004c2730  b8f44d8900           mov eax, 0x894df4
// 004c2735  c3                   ret 
// library rbxgs/util\Debug.cpp (function __catch$?_Osfx@?$basic_ostream@DU?$char_traits@D@std@@@std@@QAEXXZ$0)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Debug.cpp
