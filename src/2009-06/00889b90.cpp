// roc 2009-06 00889b90  unit: seg_00880000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00889b90
//
// 00889b90  6a01                 push 1
// 00889b92  33c9                 xor ecx, ecx
// 00889b94  51                   push ecx
// 00889b95  51                   push ecx
// 00889b96  b8d0914100           mov eax, 0x4191d0
// 00889b9b  50                   push eax
// 00889b9c  68584e8c00           push 0x8c4e58
// 00889ba1  68e0508d00           push 0x8d50e0
// 00889ba6  b9203da400           mov ecx, 0xa43d20
// 00889bab  e8b056d4ff           call 0x5cf260
// 00889bb0  6810738900           push 0x897310
// 00889bb5  e841ffe8ff           call 0x719afb
// 00889bba  59                   pop ecx
// 00889bbb  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??__Eprop_className@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
