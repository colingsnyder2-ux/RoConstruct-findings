// roc 2007-03 00773fa0  unit: seg_00770000  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00773fa0
//
// 00773fa0  33c9                 xor ecx, ecx
// 00773fa2  51                   push ecx
// 00773fa3  51                   push ecx
// 00773fa4  b820eb5900           mov eax, 0x59eb20
// 00773fa9  50                   push eax
// 00773faa  51                   push ecx
// 00773fab  6870a77900           push 0x79a770
// 00773fb0  6818347b00           push 0x7b3418
// 00773fb5  b984eb8b00           mov ecx, 0x8beb84
// 00773fba  e8e1a7e2ff           call 0x59e7a0
// 00773fbf  6850aa7700           push 0x77aa50
// 00773fc4  e8eab1eaff           call 0x61f1b3
// 00773fc9  59                   pop ecx
// 00773fca  c3                   ret 
// library rbxgs/v8datamodel\Hopper.cpp (function ??__Edesc_legacyTextureName@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Hopper.cpp
