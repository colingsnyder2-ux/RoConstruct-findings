// roc 2007-08 0076f7b0  unit: seg_00760000  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076f7b0
//
// 0076f7b0  33c9                 xor ecx, ecx
// 0076f7b2  51                   push ecx
// 0076f7b3  68d4e07900           push 0x79e0d4
// 0076f7b8  51                   push ecx
// 0076f7b9  b840614b00           mov eax, 0x4b6140
// 0076f7be  50                   push eax
// 0076f7bf  b9c0ea8b00           mov ecx, 0x8beac0
// 0076f7c4  e8c719d4ff           call 0x4b1190
// 0076f7c9  6890897700           push 0x778990
// 0076f7ce  e85015ecff           call 0x630d23
// 0076f7d3  59                   pop ecx
// 0076f7d4  c3                   ret 
// library rbxgs-net/Replicator.cpp (function ??__Efunc_SendMarker@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Replicator.cpp
