// roc 2007-08 00770f80  unit: seg_00770000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00770f80
//
// 00770f80  56                   push esi
// 00770f81  6a05                 push 5
// 00770f83  33c9                 xor ecx, ecx
// 00770f85  51                   push ecx
// 00770f86  b8c04a5400           mov eax, 0x544ac0
// 00770f8b  50                   push eax
// 00770f8c  33f6                 xor esi, esi
// 00770f8e  56                   push esi
// 00770f8f  ba50285400           mov edx, 0x542850
// 00770f94  52                   push edx
// 00770f95  68b46e7a00           push 0x7a6eb4
// 00770f9a  684c697a00           push 0x7a694c
// 00770f9f  b9c8178c00           mov ecx, 0x8c17c8
// 00770fa4  e8c730ddff           call 0x544070
// 00770fa9  68e0987700           push 0x7798e0
// 00770fae  e870fdebff           call 0x630d23
// 00770fb3  83c404               add esp, 4
// 00770fb6  5e                   pop esi
// 00770fb7  c3                   ret 
// library rbxgs/v8datamodel\DebugSettings.cpp (function ??__Eprop_assertAction@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
