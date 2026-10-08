// roc 2007-03 0076fd70  unit: seg_00760000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0076fd70
//
// 0076fd70  56                   push esi
// 0076fd71  6a05                 push 5
// 0076fd73  33c9                 xor ecx, ecx
// 0076fd75  51                   push ecx
// 0076fd76  b860a34800           mov eax, 0x48a360
// 0076fd7b  50                   push eax
// 0076fd7c  33f6                 xor esi, esi
// 0076fd7e  56                   push esi
// 0076fd7f  ba704c4800           mov edx, 0x484c70
// 0076fd84  52                   push edx
// 0076fd85  6870a77900           push 0x79a770
// 0076fd8a  6878a77900           push 0x79a778
// 0076fd8f  b928858b00           mov ecx, 0x8b8528
// 0076fd94  e80795d1ff           call 0x4892a0
// 0076fd99  6870817700           push 0x778170
// 0076fd9e  e810f4eaff           call 0x61f1b3
// 0076fda3  83c404               add esp, 4
// 0076fda6  5e                   pop esi
// 0076fda7  c3                   ret 
// library rbxgs-net/Player.cpp (function ??__Eprop_characterAppearance@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Player.cpp
