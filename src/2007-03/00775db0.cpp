// roc 2007-03 00775db0  unit: seg_00770000  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00775db0
//
// 00775db0  68c40e7c00           push 0x7c0ec4
// 00775db5  6818557900           push 0x795518
// 00775dba  68c00e7c00           push 0x7c0ec0
// 00775dbf  b90c108c00           mov ecx, 0x8c100c
// 00775dc4  e877dde8ff           call 0x603b40
// 00775dc9  6800be7700           push 0x77be00
// 00775dce  e8e093eaff           call 0x61f1b3
// 00775dd3  59                   pop ecx
// 00775dd4  c3                   ret 
// library rbxgs/v8datamodel\Explosion.cpp (function ??__Esignal_Hit@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Explosion.cpp
