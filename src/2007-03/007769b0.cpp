// roc 2007-03 007769b0  unit: seg_00770000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 007769b0
//
// 007769b0  68a0c07700           push 0x77c0a0
// 007769b5  e8f987eaff           call 0x61f1b3
// 007769ba  59                   pop ecx
// 007769bb  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__EhelloWorld@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
