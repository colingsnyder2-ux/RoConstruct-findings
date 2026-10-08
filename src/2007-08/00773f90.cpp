// roc 2007-08 00773f90  unit: seg_00770000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00773f90
//
// 00773f90  56                   push esi
// 00773f91  6a05                 push 5
// 00773f93  33c9                 xor ecx, ecx
// 00773f95  51                   push ecx
// 00773f96  b870fb5a00           mov eax, 0x5afb70
// 00773f9b  50                   push eax
// 00773f9c  33f6                 xor esi, esi
// 00773f9e  56                   push esi
// 00773f9f  ba80ca5a00           mov edx, 0x5aca80
// 00773fa4  52                   push edx
// 00773fa5  6898b67900           push 0x79b698
// 00773faa  68c45d7b00           push 0x7b5dc4
// 00773faf  b9005d8c00           mov ecx, 0x8c5d00
// 00773fb4  e817ace3ff           call 0x5aebd0
// 00773fb9  6880b57700           push 0x77b580
// 00773fbe  e860cdebff           call 0x630d23
// 00773fc3  83c404               add esp, 4
// 00773fc6  5e                   pop esi
// 00773fc7  c3                   ret 
// library rbxgs/v8datamodel\Lighting.cpp (function ??__Eprop_GeographicLatitude@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
