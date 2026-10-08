// roc 2008-06 007f2f80  unit: seg_007f0000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f2f80
//
// 007f2f80  56                   push esi
// 007f2f81  6a05                 push 5
// 007f2f83  33c9                 xor ecx, ecx
// 007f2f85  51                   push ecx
// 007f2f86  b8205c5600           mov eax, 0x565c20
// 007f2f8b  50                   push eax
// 007f2f8c  33f6                 xor esi, esi
// 007f2f8e  56                   push esi
// 007f2f8f  ba30315600           mov edx, 0x563130
// 007f2f94  52                   push edx
// 007f2f95  68f0e78200           push 0x82e7f0
// 007f2f9a  6808e88200           push 0x82e808
// 007f2f9f  b988459700           mov ecx, 0x974588
// 007f2fa4  e85722d7ff           call 0x565200
// 007f2fa9  6810cc7f00           push 0x7fcc10
// 007f2fae  e8fce7eaff           call 0x6a17af
// 007f2fb3  83c404               add esp, 4
// 007f2fb6  5e                   pop esi
// 007f2fb7  c3                   ret 
// library rbxgs/v8datamodel\DebugSettings.cpp (function ??__Eprop_UnalignedParts@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
