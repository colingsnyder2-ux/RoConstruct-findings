// roc 2008-06 007f4210  unit: seg_007f0000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f4210
//
// 007f4210  56                   push esi
// 007f4211  6a05                 push 5
// 007f4213  33c9                 xor ecx, ecx
// 007f4215  51                   push ecx
// 007f4216  b8d0865900           mov eax, 0x5986d0
// 007f421b  50                   push eax
// 007f421c  33f6                 xor esi, esi
// 007f421e  56                   push esi
// 007f421f  baf05b4e00           mov edx, 0x4e5bf0
// 007f4224  52                   push edx
// 007f4225  68ac298300           push 0x8329ac
// 007f422a  68c4298300           push 0x8329c4
// 007f422f  b9305f9700           mov ecx, 0x975f30
// 007f4234  e8773fdaff           call 0x5981b0
// 007f4239  6820db7f00           push 0x7fdb20
// 007f423e  e86cd5eaff           call 0x6a17af
// 007f4243  83c404               add esp, 4
// 007f4246  5e                   pop esi
// 007f4247  c3                   ret 
// library rbxgs/v8datamodel\Decal.cpp (function ??__E?prop_Shiny@Decal@RBX@@2V?$PropDescriptor@VDecal@RBX@@M@Reflection@2@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Decal.cpp
