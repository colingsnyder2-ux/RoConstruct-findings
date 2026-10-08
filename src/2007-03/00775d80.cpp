// roc 2007-03 00775d80  unit: seg_00770000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00775d80
//
// 00775d80  6a05                 push 5
// 00775d82  6808010000           push 0x108
// 00775d87  6870a77900           push 0x79a770
// 00775d8c  68acc67a00           push 0x7ac6ac
// 00775d91  b9d40f8c00           mov ecx, 0x8c0fd4
// 00775d96  e8d5d9e8ff           call 0x603770
// 00775d9b  6890bd7700           push 0x77bd90
// 00775da0  e80e94eaff           call 0x61f1b3
// 00775da5  59                   pop ecx
// 00775da6  c3                   ret 
// library rbxgs/v8datamodel\Explosion.cpp (function ??__E?propPosition@Explosion@RBX@@2V?$BoundProp@VVector3@G3D@@$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Explosion.cpp
