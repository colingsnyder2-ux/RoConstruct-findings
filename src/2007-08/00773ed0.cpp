// roc 2007-08 00773ed0  unit: seg_00770000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00773ed0
//
// 00773ed0  56                   push esi
// 00773ed1  6a05                 push 5
// 00773ed3  33c9                 xor ecx, ecx
// 00773ed5  51                   push ecx
// 00773ed6  b830f65a00           mov eax, 0x5af630
// 00773edb  50                   push eax
// 00773edc  33f6                 xor esi, esi
// 00773ede  56                   push esi
// 00773edf  ba40ca5a00           mov edx, 0x5aca40
// 00773ee4  52                   push edx
// 00773ee5  6840a87a00           push 0x7aa840
// 00773eea  68a05d7b00           push 0x7b5da0
// 00773eef  b9505d8c00           mov ecx, 0x8c5d50
// 00773ef4  e897abe3ff           call 0x5aea90
// 00773ef9  6800b57700           push 0x77b500
// 00773efe  e820ceebff           call 0x630d23
// 00773f03  83c404               add esp, 4
// 00773f06  5e                   pop esi
// 00773f07  c3                   ret 
// library rbxgs/v8datamodel\Lighting.cpp (function ??__Edesc_LightColor@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
