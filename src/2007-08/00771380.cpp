// roc 2007-08 00771380  unit: seg_00770000  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00771380
//
// 00771380  33c9                 xor ecx, ecx
// 00771382  51                   push ecx
// 00771383  68dcb67900           push 0x79b6dc
// 00771388  68388f7a00           push 0x7a8f38
// 0077138d  51                   push ecx
// 0077138e  b8b0715500           mov eax, 0x5571b0
// 00771393  50                   push eax
// 00771394  b938218c00           mov ecx, 0x8c2138
// 00771399  e832b2deff           call 0x55c5d0
// 0077139e  68d09c7700           push 0x779cd0
// 007713a3  e87bf9ebff           call 0x630d23
// 007713a8  59                   pop ecx
// 007713a9  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??__Efunc_SetUIMessage@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
