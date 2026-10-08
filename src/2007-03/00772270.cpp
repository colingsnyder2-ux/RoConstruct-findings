// roc 2007-03 00772270  unit: seg_00770000  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00772270
//
// 00772270  33c9                 xor ecx, ecx
// 00772272  51                   push ecx
// 00772273  68c0a77900           push 0x79a7c0
// 00772278  68aca67a00           push 0x7aa6ac
// 0077227d  51                   push ecx
// 0077227e  b8a03e5500           mov eax, 0x553ea0
// 00772283  50                   push eax
// 00772284  b9c8c48b00           mov ecx, 0x8bc4c8
// 00772289  e8a2addeff           call 0x55d030
// 0077228e  68809b7700           push 0x779b80
// 00772293  e81bcfeaff           call 0x61f1b3
// 00772298  59                   pop ecx
// 00772299  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??__Efunc_SetUIMessage@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
