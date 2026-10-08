// roc 2007-03 007756d0  unit: seg_00770000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 007756d0
//
// 007756d0  6a05                 push 5
// 007756d2  6804010000           push 0x104
// 007756d7  6888da7b00           push 0x7bda88
// 007756dc  68d4da7b00           push 0x7bdad4
// 007756e1  b9b8058c00           mov ecx, 0x8c05b8
// 007756e6  e8e575e6ff           call 0x5dccd0
// 007756eb  68c0b77700           push 0x77b7c0
// 007756f0  e8be9aeaff           call 0x61f1b3
// 007756f5  59                   pop ecx
// 007756f6  c3                   ret 
// library rbxgs/v8datamodel\Gyro.cpp (function ??__E?prop_Force@BodyForce@RBX@@2V?$BoundProp@VVector3@G3D@@$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Gyro.cpp
