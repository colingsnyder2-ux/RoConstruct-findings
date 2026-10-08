// roc 2007-03 006765d0  unit: seg_00670000  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006765d0
//
// 006765d0  b87c0e8b00           mov eax, 0x8b0e7c
// 006765d5  c3                   ret 
// library rbxgs/util\Debug.cpp (function __catch$?_Osfx@?$basic_ostream@DU?$char_traits@D@std@@@std@@QAEXXZ$0)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Debug.cpp
