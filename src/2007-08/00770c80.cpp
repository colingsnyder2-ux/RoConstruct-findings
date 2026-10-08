// roc 2007-08 00770c80  unit: seg_00770000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00770c80
//
// 00770c80  56                   push esi
// 00770c81  6a05                 push 5
// 00770c83  33c9                 xor ecx, ecx
// 00770c85  51                   push ecx
// 00770c86  b880485400           mov eax, 0x544880
// 00770c8b  50                   push eax
// 00770c8c  33f6                 xor esi, esi
// 00770c8e  56                   push esi
// 00770c8f  ba60285400           mov edx, 0x542860
// 00770c94  52                   push edx
// 00770c95  68e06d7a00           push 0x7a6de0
// 00770c9a  68d46d7a00           push 0x7a6dd4
// 00770c9f  b904198c00           mov ecx, 0x8c1904
// 00770ca4  e82733ddff           call 0x543fd0
// 00770ca9  68a0987700           push 0x7798a0
// 00770cae  e87000ecff           call 0x630d23
// 00770cb3  83c404               add esp, 4
// 00770cb6  5e                   pop esi
// 00770cb7  c3                   ret 
// library rbxgs/v8datamodel\DebugSettings.cpp (function ??__Eprop_AnchoredParts@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
