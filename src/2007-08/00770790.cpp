// roc 2007-08 00770790  unit: seg_00770000  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00770790
//
// 00770790  6a01                 push 1
// 00770792  33c9                 xor ecx, ecx
// 00770794  51                   push ecx
// 00770795  68d0667a00           push 0x7a66d0
// 0077079a  6810617900           push 0x796110
// 0077079f  68c0667a00           push 0x7a66c0
// 007707a4  51                   push ecx
// 007707a5  b880f75300           mov eax, 0x53f780
// 007707aa  50                   push eax
// 007707ab  b950168c00           mov ecx, 0x8c1650
// 007707b0  e8cb05ddff           call 0x540d80
// 007707b5  68c0967700           push 0x7796c0
// 007707ba  e86405ecff           call 0x630d23
// 007707bf  59                   pop ecx
// 007707c0  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??__EfindFirstChild@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
