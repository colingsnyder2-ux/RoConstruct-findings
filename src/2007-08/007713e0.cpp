// roc 2007-08 007713e0  unit: seg_00770000  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007713e0
//
// 007713e0  33c9                 xor ecx, ecx
// 007713e2  51                   push ecx
// 007713e3  68548f7a00           push 0x7a8f54
// 007713e8  51                   push ecx
// 007713e9  b820725500           mov eax, 0x557220
// 007713ee  50                   push eax
// 007713ef  b910208c00           mov ecx, 0x8c2010
// 007713f4  e807b1deff           call 0x55c500
// 007713f9  68b09b7700           push 0x779bb0
// 007713fe  e820f9ebff           call 0x630d23
// 00771403  59                   pop ecx
// 00771404  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??__Efunc_SetUIMessageBrickCount@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
