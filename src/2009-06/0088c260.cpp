// roc 2009-06 0088c260  unit: seg_00880000  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0088c260
//
// 0088c260  6a01                 push 1
// 0088c262  6860548c00           push 0x8c5460
// 0088c267  33c9                 xor ecx, ecx
// 0088c269  68e07b8d00           push 0x8d7be0
// 0088c26e  51                   push ecx
// 0088c26f  b8503c6000           mov eax, 0x603c50
// 0088c274  50                   push eax
// 0088c275  b9f0aba400           mov ecx, 0xa4abf0
// 0088c27a  e87163d7ff           call 0x6025f0
// 0088c27f  6830978900           push 0x899730
// 0088c284  e872d8e8ff           call 0x719afb
// 0088c289  59                   pop ecx
// 0088c28a  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??__EgetContentFunction@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
