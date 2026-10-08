// roc 2007-08 00775df0  unit: seg_00770000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00775df0
//
// 00775df0  56                   push esi
// 00775df1  6a05                 push 5
// 00775df3  33c9                 xor ecx, ecx
// 00775df5  51                   push ecx
// 00775df6  b8809a5f00           mov eax, 0x5f9a80
// 00775dfb  50                   push eax
// 00775dfc  33f6                 xor esi, esi
// 00775dfe  56                   push esi
// 00775dff  ba50fa6f00           mov edx, 0x6ffa50
// 00775e04  52                   push edx
// 00775e05  6898b67900           push 0x79b698
// 00775e0a  681c1e7c00           push 0x7c1e1c
// 00775e0f  b92c7f8c00           mov ecx, 0x8c7f2c
// 00775e14  e87736e8ff           call 0x5f9490
// 00775e19  6830c87700           push 0x77c830
// 00775e1e  e800afebff           call 0x630d23
// 00775e23  83c404               add esp, 4
// 00775e26  5e                   pop esi
// 00775e27  c3                   ret 
// library rbxgs/v8datamodel\DebrisService.cpp (function ??__Eprop_MaxItems@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebrisService.cpp
