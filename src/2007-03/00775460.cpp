// roc 2007-03 00775460  unit: seg_00770000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00775460
//
// 00775460  6a05                 push 5
// 00775462  6804010000           push 0x104
// 00775467  6888da7b00           push 0x7bda88
// 0077546c  6884da7b00           push 0x7bda84
// 00775471  b964058c00           mov ecx, 0x8c0564
// 00775476  e81572e6ff           call 0x5dc690
// 0077547b  6840b87700           push 0x77b840
// 00775480  e82e9deaff           call 0x61f1b3
// 00775485  59                   pop ecx
// 00775486  c3                   ret 
// library rbxgs/v8datamodel\Gyro.cpp (function ??__E?prop_kP@BodyGyro@RBX@@2V?$BoundProp@M$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Gyro.cpp
