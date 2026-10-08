// roc 2008-06 007f6a10  unit: seg_007f0000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f6a10
//
// 007f6a10  56                   push esi
// 007f6a11  6a05                 push 5
// 007f6a13  33c9                 xor ecx, ecx
// 007f6a15  51                   push ecx
// 007f6a16  b870265e00           mov eax, 0x5e2670
// 007f6a1b  50                   push eax
// 007f6a1c  33f6                 xor esi, esi
// 007f6a1e  56                   push esi
// 007f6a1f  ba90f45d00           mov edx, 0x5df490
// 007f6a24  52                   push edx
// 007f6a25  6890248200           push 0x822490
// 007f6a2a  6864df8300           push 0x83df64
// 007f6a2f  b9f8a99700           mov ecx, 0x97a9f8
// 007f6a34  e8e7a7deff           call 0x5e1220
// 007f6a39  6840f77f00           push 0x7ff740
// 007f6a3e  e86cadeaff           call 0x6a17af
// 007f6a43  83c404               add esp, 4
// 007f6a46  5e                   pop esi
// 007f6a47  c3                   ret 
// library rbxgs/v8datamodel\Lighting.cpp (function ??__Eprop_GeographicLatitude@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
