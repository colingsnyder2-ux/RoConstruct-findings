// roc 2008-06 007f5db0  unit: seg_007f0000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f5db0
//
// 007f5db0  56                   push esi
// 007f5db1  6a05                 push 5
// 007f5db3  33c9                 xor ecx, ecx
// 007f5db5  51                   push ecx
// 007f5db6  b810de5c00           mov eax, 0x5cde10
// 007f5dbb  50                   push eax
// 007f5dbc  33f6                 xor esi, esi
// 007f5dbe  56                   push esi
// 007f5dbf  ba10c45c00           mov edx, 0x5cc410
// 007f5dc4  52                   push edx
// 007f5dc5  6808a38300           push 0x83a308
// 007f5dca  68f4a68300           push 0x83a6f4
// 007f5dcf  b9909a9700           mov ecx, 0x979a90
// 007f5dd4  e88779ddff           call 0x5cd760
// 007f5dd9  6830ee7f00           push 0x7fee30
// 007f5dde  e8ccb9eaff           call 0x6a17af
// 007f5de3  83c404               add esp, 4
// 007f5de6  5e                   pop esi
// 007f5de7  c3                   ret 
// library rbxgs-dll/v8datamodel\Camera.cpp (function ??__EcameraSubjectProp@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-dll v8datamodel/Camera.cpp
