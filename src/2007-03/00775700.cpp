// roc 2007-03 00775700  unit: seg_00770000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00775700
//
// 00775700  6a05                 push 5
// 00775702  6804010000           push 0x104
// 00775707  6888da7b00           push 0x7bda88
// 0077570c  68d4da7b00           push 0x7bdad4
// 00775711  b9ac068c00           mov ecx, 0x8c06ac
// 00775716  e82577e6ff           call 0x5dce40
// 0077571b  6800b87700           push 0x77b800
// 00775720  e88e9aeaff           call 0x61f1b3
// 00775725  59                   pop ecx
// 00775726  c3                   ret 
// library rbxgs/v8datamodel\Gyro.cpp (function ??__E?prop_Force@BodyForce@RBX@@2V?$BoundProp@VVector3@G3D@@$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Gyro.cpp
