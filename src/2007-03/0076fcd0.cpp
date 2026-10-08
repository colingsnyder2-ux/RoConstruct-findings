// roc 2007-03 0076fcd0  unit: seg_00760000  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0076fcd0
//
// 0076fcd0  33c9                 xor ecx, ecx
// 0076fcd2  51                   push ecx
// 0076fcd3  683ca77900           push 0x79a73c
// 0076fcd8  6844a77900           push 0x79a744
// 0076fcdd  51                   push ecx
// 0076fcde  b8a0624800           mov eax, 0x4862a0
// 0076fce3  50                   push eax
// 0076fce4  b968848b00           mov ecx, 0x8b8468
// 0076fce9  e8d2a0d1ff           call 0x489dc0
// 0076fcee  68c0817700           push 0x7781c0
// 0076fcf3  e8bbf4eaff           call 0x61f1b3
// 0076fcf8  59                   pop ecx
// 0076fcf9  c3                   ret 
// library rbxgs-net/Player.cpp (function ??__Efunc_SetUnder13@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Player.cpp
