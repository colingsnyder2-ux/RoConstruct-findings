// roc 2007-03 00773d60  unit: seg_00770000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00773d60
//
// 00773d60  56                   push esi
// 00773d61  6a05                 push 5
// 00773d63  33c9                 xor ecx, ecx
// 00773d65  51                   push ecx
// 00773d66  b800995900           mov eax, 0x599900
// 00773d6b  50                   push eax
// 00773d6c  33f6                 xor esi, esi
// 00773d6e  56                   push esi
// 00773d6f  baa0135900           mov edx, 0x5913a0
// 00773d74  52                   push edx
// 00773d75  6814bf7a00           push 0x7abf14
// 00773d7a  68dc1f7b00           push 0x7b1fdc
// 00773d7f  b9d0e88b00           mov ecx, 0x8be8d0
// 00773d84  e8c73ee2ff           call 0x597c50
// 00773d89  6830a97700           push 0x77a930
// 00773d8e  e820b4eaff           call 0x61f1b3
// 00773d93  83c404               add esp, 4
// 00773d96  5e                   pop esi
// 00773d97  c3                   ret 
// library rbxgs/v8datamodel\Lighting.cpp (function ??__Edesc_LightColor@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
