// roc 2007-03 0076fd30  unit: seg_00760000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0076fd30
//
// 0076fd30  56                   push esi
// 0076fd31  6a05                 push 5
// 0076fd33  33c9                 xor ecx, ecx
// 0076fd35  51                   push ecx
// 0076fd36  b820a74800           mov eax, 0x48a720
// 0076fd3b  50                   push eax
// 0076fd3c  33f6                 xor esi, esi
// 0076fd3e  56                   push esi
// 0076fd3f  ba20554800           mov edx, 0x485520
// 0076fd44  52                   push edx
// 0076fd45  6870a77900           push 0x79a770
// 0076fd4a  6864a77900           push 0x79a764
// 0076fd4f  b908858b00           mov ecx, 0x8b8508
// 0076fd54  e8c792d1ff           call 0x489020
// 0076fd59  68b0807700           push 0x7780b0
// 0076fd5e  e850f4eaff           call 0x61f1b3
// 0076fd63  83c404               add esp, 4
// 0076fd66  5e                   pop esi
// 0076fd67  c3                   ret 
// library rbxgs-net/Player.cpp (function ??__Eprop_Character@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Player.cpp
