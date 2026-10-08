// roc 2007-03 00773640  unit: seg_00770000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00773640
//
// 00773640  68d0a27700           push 0x77a2d0
// 00773645  e869bbeaff           call 0x61f1b3
// 0077364a  59                   pop ecx
// 0077364b  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__EhelloWorld@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
