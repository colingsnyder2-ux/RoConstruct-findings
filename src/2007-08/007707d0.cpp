// roc 2007-08 007707d0  unit: seg_00770000  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007707d0
//
// 007707d0  6a01                 push 1
// 007707d2  33c9                 xor ecx, ecx
// 007707d4  68dc667a00           push 0x7a66dc
// 007707d9  51                   push ecx
// 007707da  b8e0055400           mov eax, 0x5405e0
// 007707df  50                   push eax
// 007707e0  b918148c00           mov ecx, 0x8c1418
// 007707e5  e83608ddff           call 0x541020
// 007707ea  6830967700           push 0x779630
// 007707ef  e82f05ecff           call 0x630d23
// 007707f4  59                   pop ecx
// 007707f5  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??__Efunc_clone@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
