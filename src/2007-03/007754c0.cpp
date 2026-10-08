// roc 2007-03 007754c0  unit: seg_00770000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 007754c0
//
// 007754c0  6a05                 push 5
// 007754c2  680c010000           push 0x10c
// 007754c7  6888da7b00           push 0x7bda88
// 007754cc  6890da7b00           push 0x7bda90
// 007754d1  b9f0058c00           mov ecx, 0x8c05f0
// 007754d6  e88572e6ff           call 0x5dc760
// 007754db  6880b87700           push 0x77b880
// 007754e0  e8ce9ceaff           call 0x61f1b3
// 007754e5  59                   pop ecx
// 007754e6  c3                   ret 
// library rbxgs/v8datamodel\Gyro.cpp (function ??__E?prop_maxTorque@BodyGyro@RBX@@2V?$BoundProp@VVector3@G3D@@$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Gyro.cpp
