// roc 2007-03 007761c0  unit: seg_00770000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 007761c0
//
// 007761c0  68b0bf7700           push 0x77bfb0
// 007761c5  e8e98feaff           call 0x61f1b3
// 007761ca  59                   pop ecx
// 007761cb  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__EhelloWorld@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
