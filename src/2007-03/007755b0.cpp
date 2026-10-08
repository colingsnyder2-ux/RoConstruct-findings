// roc 2007-03 007755b0  unit: seg_00770000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 007755b0
//
// 007755b0  6a05                 push 5
// 007755b2  6818010000           push 0x118
// 007755b7  6888da7b00           push 0x7bda88
// 007755bc  68b0da7b00           push 0x7bdab0
// 007755c1  b99c058c00           mov ecx, 0x8c059c
// 007755c6  e89574e6ff           call 0x5dca60
// 007755cb  6820b77700           push 0x77b720
// 007755d0  e8de9beaff           call 0x61f1b3
// 007755d5  59                   pop ecx
// 007755d6  c3                   ret 
// library rbxgs/v8datamodel\Gyro.cpp (function ??__E?prop_position@BodyPosition@RBX@@2V?$BoundProp@VVector3@G3D@@$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Gyro.cpp
