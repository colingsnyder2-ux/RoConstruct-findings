// roc 2007-03 007712b0  unit: seg_00770000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 007712b0
//
// 007712b0  68a0907700           push 0x7790a0
// 007712b5  e8f9deeaff           call 0x61f1b3
// 007712ba  59                   pop ecx
// 007712bb  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__EhelloWorld@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
