// roc 2007-03 0064e370  unit: seg_00640000  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0064e370
//
// 0064e370  b8a0018b00           mov eax, 0x8b01a0
// 0064e375  c3                   ret 
// library rbxgs/util\Debug.cpp (function __catch$?_Osfx@?$basic_ostream@DU?$char_traits@D@std@@@std@@QAEXXZ$0)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Debug.cpp
