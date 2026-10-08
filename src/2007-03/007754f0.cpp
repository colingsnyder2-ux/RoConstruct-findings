// roc 2007-03 007754f0  unit: seg_00770000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 007754f0
//
// 007754f0  6a05                 push 5
// 007754f2  6818010000           push 0x118
// 007754f7  6888da7b00           push 0x7bda88
// 007754fc  689cda7b00           push 0x7bda9c
// 00775501  b918078c00           mov ecx, 0x8c0718
// 00775506  e82573e6ff           call 0x5dc830
// 0077550b  6860b87700           push 0x77b860
// 00775510  e89e9ceaff           call 0x61f1b3
// 00775515  59                   pop ecx
// 00775516  c3                   ret 
// library rbxgs/v8datamodel\Gyro.cpp (function ??__E?prop_cframe@BodyGyro@RBX@@2V?$BoundProp@VCoordinateFrame@G3D@@$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Gyro.cpp
