// roc 2007-03 00531980  unit: seg_00530000  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00531980
//
// 00531980  b8186d8900           mov eax, 0x896d18
// 00531985  c3                   ret 
// library rbxgs/util\Debug.cpp (function __catch$?_Osfx@?$basic_ostream@DU?$char_traits@D@std@@@std@@QAEXXZ$0)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Debug.cpp
