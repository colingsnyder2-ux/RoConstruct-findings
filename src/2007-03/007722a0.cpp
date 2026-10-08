// roc 2007-03 007722a0  unit: seg_00770000  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 007722a0
//
// 007722a0  33c9                 xor ecx, ecx
// 007722a2  51                   push ecx
// 007722a3  68b8a67a00           push 0x7aa6b8
// 007722a8  51                   push ecx
// 007722a9  b8f03e5500           mov eax, 0x553ef0
// 007722ae  50                   push eax
// 007722af  b998c48b00           mov ecx, 0x8bc498
// 007722b4  e8a7acdeff           call 0x55cf60
// 007722b9  68609a7700           push 0x779a60
// 007722be  e8f0ceeaff           call 0x61f1b3
// 007722c3  59                   pop ecx
// 007722c4  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??__Efunc_ClearUIMessage@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
