// roc 2009-06 0088c230  unit: seg_00880000  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0088c230
//
// 0088c230  6a01                 push 1
// 0088c232  6860548c00           push 0x8c5460
// 0088c237  33c9                 xor ecx, ecx
// 0088c239  68dc7b8d00           push 0x8d7bdc
// 0088c23e  51                   push ecx
// 0088c23f  b8503c6000           mov eax, 0x603c50
// 0088c244  50                   push eax
// 0088c245  b9b0ada400           mov ecx, 0xa4adb0
// 0088c24a  e8a163d7ff           call 0x6025f0
// 0088c24f  6870988900           push 0x899870
// 0088c254  e8a2d8e8ff           call 0x719afb
// 0088c259  59                   pop ecx
// 0088c25a  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??__EgetContentFunctionOld@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
