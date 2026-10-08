// roc 2007-03 007712c0  unit: seg_00770000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 007712c0
//
// 007712c0  68c0907700           push 0x7790c0
// 007712c5  e8e9deeaff           call 0x61f1b3
// 007712ca  59                   pop ecx
// 007712cb  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__EhelloWorld@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
