// roc 2007-03 00772100  unit: seg_00770000  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00772100
//
// 00772100  6a01                 push 1
// 00772102  68546a7800           push 0x786a54
// 00772107  33c9                 xor ecx, ecx
// 00772109  68d84b7a00           push 0x7a4bd8
// 0077210e  51                   push ecx
// 0077210f  b870c35500           mov eax, 0x55c370
// 00772114  50                   push eax
// 00772115  b900c48b00           mov ecx, 0x8bc400
// 0077211a  e8a1a4deff           call 0x55c5c0
// 0077211f  68909b7700           push 0x779b90
// 00772124  e88ad0eaff           call 0x61f1b3
// 00772129  59                   pop ecx
// 0077212a  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??__EgetContentFunctionOld@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
