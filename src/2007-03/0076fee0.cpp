// roc 2007-03 0076fee0  unit: seg_00760000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0076fee0
//
// 0076fee0  56                   push esi
// 0076fee1  6a05                 push 5
// 0076fee3  33c9                 xor ecx, ecx
// 0076fee5  51                   push ecx
// 0076fee6  b830a34800           mov eax, 0x48a330
// 0076feeb  50                   push eax
// 0076feec  33f6                 xor esi, esi
// 0076feee  56                   push esi
// 0076feef  ba604c4800           mov edx, 0x484c60
// 0076fef4  52                   push edx
// 0076fef5  68e0a77900           push 0x79a7e0
// 0076fefa  68e8a77900           push 0x79a7e8
// 0076feff  b944858b00           mov ecx, 0x8b8544
// 0076ff04  e8b796d1ff           call 0x4895c0
// 0076ff09  68f0807700           push 0x7780f0
// 0076ff0e  e8a0f2eaff           call 0x61f1b3
// 0076ff13  83c404               add esp, 4
// 0076ff16  5e                   pop esi
// 0076ff17  c3                   ret 
// library rbxgs-net/Player.cpp (function ??__Eprop_neutral@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Player.cpp
