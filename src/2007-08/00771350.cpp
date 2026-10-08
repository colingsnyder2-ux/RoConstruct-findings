// roc 2007-08 00771350  unit: seg_00770000  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00771350
//
// 00771350  33c9                 xor ecx, ecx
// 00771352  51                   push ecx
// 00771353  68606f7800           push 0x786f60
// 00771358  51                   push ecx
// 00771359  b840745500           mov eax, 0x557440
// 0077135e  50                   push eax
// 0077135f  b970218c00           mov ecx, 0x8c2170
// 00771364  e897b1deff           call 0x55c500
// 00771369  68909b7700           push 0x779b90
// 0077136e  e8b0f9ebff           call 0x630d23
// 00771373  59                   pop ecx
// 00771374  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??__EcloseFunction@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
