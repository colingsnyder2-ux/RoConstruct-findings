// roc 2007-03 00777160  unit: seg_00770000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00777160
//
// 00777160  6890c27700           push 0x77c290
// 00777165  e84980eaff           call 0x61f1b3
// 0077716a  59                   pop ecx
// 0077716b  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__EhelloWorld@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
