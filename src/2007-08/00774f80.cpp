// roc 2007-08 00774f80  unit: seg_00770000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00774f80
//
// 00774f80  56                   push esi
// 00774f81  6a05                 push 5
// 00774f83  33c9                 xor ecx, ecx
// 00774f85  51                   push ecx
// 00774f86  b8d0d45d00           mov eax, 0x5dd4d0
// 00774f8b  50                   push eax
// 00774f8c  33f6                 xor esi, esi
// 00774f8e  56                   push esi
// 00774f8f  ba60fe5a00           mov edx, 0x5afe60
// 00774f94  52                   push edx
// 00774f95  6898b67900           push 0x79b698
// 00774f9a  68fc7d7b00           push 0x7b7dfc
// 00774f9f  b9c46d8c00           mov ecx, 0x8c6dc4
// 00774fa4  e81780e6ff           call 0x5dcfc0
// 00774fa9  68e0bd7700           push 0x77bde0
// 00774fae  e870bdebff           call 0x630d23
// 00774fb3  83c404               add esp, 4
// 00774fb6  5e                   pop esi
// 00774fb7  c3                   ret 
// library openrbx-client/App\v8datamodel\Feature.cpp (function ??__Eprop_CurrentAngle@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Feature.cpp
