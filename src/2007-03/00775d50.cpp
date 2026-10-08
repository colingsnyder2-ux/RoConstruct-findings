// roc 2007-03 00775d50  unit: seg_00770000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00775d50
//
// 00775d50  6a05                 push 5
// 00775d52  6818010000           push 0x118
// 00775d57  6870a77900           push 0x79a770
// 00775d5c  68b00e7c00           push 0x7c0eb0
// 00775d61  b9f00f8c00           mov ecx, 0x8c0ff0
// 00775d66  e835d9e8ff           call 0x6036a0
// 00775d6b  68b0bd7700           push 0x77bdb0
// 00775d70  e83e94eaff           call 0x61f1b3
// 00775d75  59                   pop ecx
// 00775d76  c3                   ret 
// library rbxgs/v8datamodel\Explosion.cpp (function ??__E?propBlastPressure@Explosion@RBX@@2V?$BoundProp@M$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Explosion.cpp
