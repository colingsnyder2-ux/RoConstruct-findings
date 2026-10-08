// roc 2007-03 007722d0  unit: seg_00770000  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 007722d0
//
// 007722d0  33c9                 xor ecx, ecx
// 007722d2  51                   push ecx
// 007722d3  68c8a67a00           push 0x7aa6c8
// 007722d8  51                   push ecx
// 007722d9  b8103f5500           mov eax, 0x553f10
// 007722de  50                   push eax
// 007722df  b9a0c38b00           mov ecx, 0x8bc3a0
// 007722e4  e877acdeff           call 0x55cf60
// 007722e9  68709a7700           push 0x779a70
// 007722ee  e8c0ceeaff           call 0x61f1b3
// 007722f3  59                   pop ecx
// 007722f4  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??__Efunc_SetUIMessageBrickCount@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
