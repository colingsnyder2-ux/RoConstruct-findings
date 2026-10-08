// roc 2007-03 0076fea0  unit: seg_00760000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0076fea0
//
// 0076fea0  56                   push esi
// 0076fea1  6a05                 push 5
// 0076fea3  33c9                 xor ecx, ecx
// 0076fea5  51                   push ecx
// 0076fea6  b800a34800           mov eax, 0x48a300
// 0076feab  50                   push eax
// 0076feac  33f6                 xor esi, esi
// 0076feae  56                   push esi
// 0076feaf  ba504c4800           mov edx, 0x484c50
// 0076feb4  52                   push edx
// 0076feb5  68e0a77900           push 0x79a7e0
// 0076feba  68d4a77900           push 0x79a7d4
// 0076febf  b948848b00           mov ecx, 0x8b8448
// 0076fec4  e84796d1ff           call 0x489510
// 0076fec9  6890817700           push 0x778190
// 0076fece  e8e0f2eaff           call 0x61f1b3
// 0076fed3  83c404               add esp, 4
// 0076fed6  5e                   pop esi
// 0076fed7  c3                   ret 
// library rbxgs-net/Player.cpp (function ??__Eprop_teamColor@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Player.cpp
