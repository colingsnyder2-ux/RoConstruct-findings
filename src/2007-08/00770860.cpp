// roc 2007-08 00770860  unit: seg_00770000  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00770860
//
// 00770860  6a01                 push 1
// 00770862  33c9                 xor ecx, ecx
// 00770864  68f8667a00           push 0x7a66f8
// 00770869  51                   push ecx
// 0077086a  b820f05300           mov eax, 0x53f020
// 0077086f  50                   push eax
// 00770870  b910158c00           mov ecx, 0x8c1510
// 00770875  e8e609ddff           call 0x541260
// 0077087a  6810967700           push 0x779610
// 0077087f  e89f04ecff           call 0x630d23
// 00770884  59                   pop ecx
// 00770885  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??__Efunc_children@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
