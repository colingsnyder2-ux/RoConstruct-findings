// roc 2007-03 00775580  unit: seg_00770000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00775580
//
// 00775580  6a05                 push 5
// 00775582  680c010000           push 0x10c
// 00775587  6888da7b00           push 0x7bda88
// 0077558c  68a4da7b00           push 0x7bdaa4
// 00775591  b934078c00           mov ecx, 0x8c0734
// 00775596  e8c574e6ff           call 0x5dca60
// 0077559b  6840b77700           push 0x77b740
// 007755a0  e80e9ceaff           call 0x61f1b3
// 007755a5  59                   pop ecx
// 007755a6  c3                   ret 
// library rbxgs/v8datamodel\Gyro.cpp (function ??__E?prop_maxForce@BodyPosition@RBX@@2V?$BoundProp@VVector3@G3D@@$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Gyro.cpp
