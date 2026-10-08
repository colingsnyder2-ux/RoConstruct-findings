// roc 2008-06 007f5cf0  unit: seg_007f0000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f5cf0
//
// 007f5cf0  56                   push esi
// 007f5cf1  6a05                 push 5
// 007f5cf3  33c9                 xor ecx, ecx
// 007f5cf5  51                   push ecx
// 007f5cf6  b8d0dd5c00           mov eax, 0x5cddd0
// 007f5cfb  50                   push eax
// 007f5cfc  33f6                 xor esi, esi
// 007f5cfe  56                   push esi
// 007f5cff  ba006f6a00           mov edx, 0x6a6f00
// 007f5d04  52                   push edx
// 007f5d05  6808a38300           push 0x83a308
// 007f5d0a  6888a48300           push 0x83a488
// 007f5d0f  b9b09a9700           mov ecx, 0x979ab0
// 007f5d14  e8d77fddff           call 0x5cdcf0
// 007f5d19  6850ee7f00           push 0x7fee50
// 007f5d1e  e88cbaeaff           call 0x6a17af
// 007f5d23  83c404               add esp, 4
// 007f5d26  5e                   pop esi
// 007f5d27  c3                   ret 
// library rbxgs/v8datamodel\Camera.cpp (function ??__Edesc_cameraType@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp
