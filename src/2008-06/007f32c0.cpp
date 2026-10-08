// roc 2008-06 007f32c0  unit: seg_007f0000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f32c0
//
// 007f32c0  56                   push esi
// 007f32c1  6a05                 push 5
// 007f32c3  33c9                 xor ecx, ecx
// 007f32c5  51                   push ecx
// 007f32c6  b820675600           mov eax, 0x566720
// 007f32cb  50                   push eax
// 007f32cc  33f6                 xor esi, esi
// 007f32ce  56                   push esi
// 007f32cf  ba505e5600           mov edx, 0x565e50
// 007f32d4  52                   push edx
// 007f32d5  6890248200           push 0x822490
// 007f32da  682cec8200           push 0x82ec2c
// 007f32df  b9b0489700           mov ecx, 0x9748b0
// 007f32e4  e89730d7ff           call 0x566380
// 007f32e9  68f0cf7f00           push 0x7fcff0
// 007f32ee  e8bce4eaff           call 0x6a17af
// 007f32f3  83c404               add esp, 4
// 007f32f6  5e                   pop esi
// 007f32f7  c3                   ret 
// library rbxgs/v8datamodel\Team.cpp (function ??__Eprop_AutoAssignable@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Team.cpp
