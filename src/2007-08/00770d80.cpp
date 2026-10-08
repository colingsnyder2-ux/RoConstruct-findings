// roc 2007-08 00770d80  unit: seg_00770000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00770d80
//
// 00770d80  56                   push esi
// 00770d81  6a05                 push 5
// 00770d83  33c9                 xor ecx, ecx
// 00770d85  51                   push ecx
// 00770d86  b810495400           mov eax, 0x544910
// 00770d8b  50                   push eax
// 00770d8c  33f6                 xor esi, esi
// 00770d8e  56                   push esi
// 00770d8f  ba90285400           mov edx, 0x542890
// 00770d94  52                   push edx
// 00770d95  68e06d7a00           push 0x7a6de0
// 00770d9a  68206e7a00           push 0x7a6e20
// 00770d9f  b958178c00           mov ecx, 0x8c1758
// 00770da4  e82732ddff           call 0x543fd0
// 00770da9  6820977700           push 0x779720
// 00770dae  e870ffebff           call 0x630d23
// 00770db3  83c404               add esp, 4
// 00770db6  5e                   pop esi
// 00770db7  c3                   ret 
// library rbxgs/v8datamodel\DebugSettings.cpp (function ??__Eprop_UnalignedParts@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
