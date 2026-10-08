// roc 2007-03 00772980  unit: seg_00770000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00772980
//
// 00772980  56                   push esi
// 00772981  6a05                 push 5
// 00772983  33c9                 xor ecx, ecx
// 00772985  51                   push ecx
// 00772986  b840195700           mov eax, 0x571940
// 0077298b  50                   push eax
// 0077298c  33f6                 xor esi, esi
// 0077298e  56                   push esi
// 0077298f  bad0424c00           mov edx, 0x4c42d0
// 00772994  52                   push edx
// 00772995  6814bf7a00           push 0x7abf14
// 0077299a  682cbf7a00           push 0x7abf2c
// 0077299f  b910ca8b00           mov ecx, 0x8bca10
// 007729a4  e897eddfff           call 0x571740
// 007729a9  68809d7700           push 0x779d80
// 007729ae  e800c8eaff           call 0x61f1b3
// 007729b3  83c404               add esp, 4
// 007729b6  5e                   pop esi
// 007729b7  c3                   ret 
// library rbxgs/v8datamodel\Decal.cpp (function ??__E?prop_Shiny@Decal@RBX@@2V?$PropDescriptor@VDecal@RBX@@M@Reflection@2@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Decal.cpp
