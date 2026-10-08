// roc 2008-06 007f5e30  unit: seg_007f0000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f5e30
//
// 007f5e30  56                   push esi
// 007f5e31  6a05                 push 5
// 007f5e33  33c9                 xor ecx, ecx
// 007f5e35  51                   push ecx
// 007f5e36  b8d0165d00           mov eax, 0x5d16d0
// 007f5e3b  50                   push eax
// 007f5e3c  33f6                 xor esi, esi
// 007f5e3e  56                   push esi
// 007f5e3f  ba60a64800           mov edx, 0x48a660
// 007f5e44  52                   push edx
// 007f5e45  6890248200           push 0x822490
// 007f5e4a  68f4ae8300           push 0x83aef4
// 007f5e4f  b9f49c9700           mov ecx, 0x979cf4
// 007f5e54  e827afddff           call 0x5d0d80
// 007f5e59  68d0ee7f00           push 0x7feed0
// 007f5e5e  e84cb9eaff           call 0x6a17af
// 007f5e63  83c404               add esp, 4
// 007f5e66  5e                   pop esi
// 007f5e67  c3                   ret 
// library rbxgs/v8datamodel\Hopper.cpp (function ??__Edesc_BinType@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Hopper.cpp
