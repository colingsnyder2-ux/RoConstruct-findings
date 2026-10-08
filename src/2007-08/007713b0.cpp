// roc 2007-08 007713b0  unit: seg_00770000  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007713b0
//
// 007713b0  33c9                 xor ecx, ecx
// 007713b2  51                   push ecx
// 007713b3  68448f7a00           push 0x7a8f44
// 007713b8  51                   push ecx
// 007713b9  b800725500           mov eax, 0x557200
// 007713be  50                   push eax
// 007713bf  b908218c00           mov ecx, 0x8c2108
// 007713c4  e837b1deff           call 0x55c500
// 007713c9  68a09b7700           push 0x779ba0
// 007713ce  e850f9ebff           call 0x630d23
// 007713d3  59                   pop ecx
// 007713d4  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??__Efunc_ClearUIMessage@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
