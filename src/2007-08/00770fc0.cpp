// roc 2007-08 00770fc0  unit: seg_00770000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00770fc0
//
// 00770fc0  56                   push esi
// 00770fc1  6a05                 push 5
// 00770fc3  33c9                 xor ecx, ecx
// 00770fc5  51                   push ecx
// 00770fc6  b8f04a5400           mov eax, 0x544af0
// 00770fcb  50                   push eax
// 00770fcc  33f6                 xor esi, esi
// 00770fce  56                   push esi
// 00770fcf  ba00844000           mov edx, 0x408400
// 00770fd4  52                   push edx
// 00770fd5  68b46e7a00           push 0x7a6eb4
// 00770fda  68bc6e7a00           push 0x7a6ebc
// 00770fdf  b990188c00           mov ecx, 0x8c1890
// 00770fe4  e82731ddff           call 0x544110
// 00770fe9  68c0987700           push 0x7798c0
// 00770fee  e830fdebff           call 0x630d23
// 00770ff3  83c404               add esp, 4
// 00770ff6  5e                   pop esi
// 00770ff7  c3                   ret 
// library rbxgs/v8datamodel\DebugSettings.cpp (function ??__Eprop_errorReporting@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
