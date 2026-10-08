// roc 2007-08 00774240  unit: seg_00770000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00774240
//
// 00774240  56                   push esi
// 00774241  6a05                 push 5
// 00774243  33c9                 xor ecx, ecx
// 00774245  51                   push ecx
// 00774246  b870fe5a00           mov eax, 0x5afe70
// 0077424b  50                   push eax
// 0077424c  33f6                 xor esi, esi
// 0077424e  56                   push esi
// 0077424f  ba60fe5a00           mov edx, 0x5afe60
// 00774254  52                   push edx
// 00774255  6898b67900           push 0x79b698
// 0077425a  68fc7d7b00           push 0x7b7dfc
// 0077425f  b9e05d8c00           mov ecx, 0x8c5de0
// 00774264  e8a7cae3ff           call 0x5b0d10
// 00774269  6870b67700           push 0x77b670
// 0077426e  e8b0caebff           call 0x630d23
// 00774273  83c404               add esp, 4
// 00774276  5e                   pop esi
// 00774277  c3                   ret 
// library openrbx-client/App\v8datamodel\Feature.cpp (function ??__Eprop_CurrentAngle@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Feature.cpp
