// roc 2007-08 00771b60  unit: seg_00770000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00771b60
//
// 00771b60  56                   push esi
// 00771b61  6a05                 push 5
// 00771b63  33c9                 xor ecx, ecx
// 00771b65  51                   push ecx
// 00771b66  b8c0305700           mov eax, 0x5730c0
// 00771b6b  50                   push eax
// 00771b6c  33f6                 xor esi, esi
// 00771b6e  56                   push esi
// 00771b6f  ba90795e00           mov edx, 0x5e7990
// 00771b74  52                   push edx
// 00771b75  6840a87a00           push 0x7aa840
// 00771b7a  684ca87a00           push 0x7aa84c
// 00771b7f  b908278c00           mov ecx, 0x8c2708
// 00771b84  e87713e0ff           call 0x572f00
// 00771b89  6800a07700           push 0x77a000
// 00771b8e  e890f1ebff           call 0x630d23
// 00771b93  83c404               add esp, 4
// 00771b96  5e                   pop esi
// 00771b97  c3                   ret 
// library rbxgs/v8datamodel\Decal.cpp (function ??__E?prop_Specular@Decal@RBX@@2V?$PropDescriptor@VDecal@RBX@@M@Reflection@2@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Decal.cpp
