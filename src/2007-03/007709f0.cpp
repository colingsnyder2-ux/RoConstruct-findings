// roc 2007-03 007709f0  unit: seg_00770000  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 007709f0
//
// 007709f0  33c9                 xor ecx, ecx
// 007709f2  51                   push ecx
// 007709f3  68a4cf7900           push 0x79cfa4
// 007709f8  51                   push ecx
// 007709f9  b8c0e84900           mov eax, 0x49e8c0
// 007709fe  50                   push eax
// 007709ff  b920918b00           mov ecx, 0x8b9120
// 00770a04  e8b750d3ff           call 0x4a5ac0
// 00770a09  68a0897700           push 0x7789a0
// 00770a0e  e8a0e7eaff           call 0x61f1b3
// 00770a13  59                   pop ecx
// 00770a14  c3                   ret 
// library rbxgs-net/Replicator.cpp (function ??__Eprop_RemotePlayer@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Replicator.cpp
