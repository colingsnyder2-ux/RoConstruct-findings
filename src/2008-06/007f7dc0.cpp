// roc 2008-06 007f7dc0  unit: seg_007f0000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f7dc0
//
// 007f7dc0  56                   push esi
// 007f7dc1  6a05                 push 5
// 007f7dc3  33c9                 xor ecx, ecx
// 007f7dc5  51                   push ecx
// 007f7dc6  b8c0b56200           mov eax, 0x62b5c0
// 007f7dcb  50                   push eax
// 007f7dcc  33f6                 xor esi, esi
// 007f7dce  56                   push esi
// 007f7dcf  baa09b6200           mov edx, 0x629ba0
// 007f7dd4  52                   push edx
// 007f7dd5  6890248200           push 0x822490
// 007f7dda  68e45e8400           push 0x845ee4
// 007f7ddf  b9d4bf9700           mov ecx, 0x97bfd4
// 007f7de4  e8972ae3ff           call 0x62a880
// 007f7de9  68f0038000           push 0x8003f0
// 007f7dee  e8bc99eaff           call 0x6a17af
// 007f7df3  83c404               add esp, 4
// 007f7df6  5e                   pop esi
// 007f7df7  c3                   ret 
// library rbxgs/v8datamodel\Explosion.cpp (function ??__EpropBlastRadius@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Explosion.cpp
