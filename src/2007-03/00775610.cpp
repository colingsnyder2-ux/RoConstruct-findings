// roc 2007-03 00775610  unit: seg_00770000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00775610
//
// 00775610  6a05                 push 5
// 00775612  6804010000           push 0x104
// 00775617  6888da7b00           push 0x7bda88
// 0077561c  6884da7b00           push 0x7bda84
// 00775621  b90c068c00           mov ecx, 0x8c060c
// 00775626  e80575e6ff           call 0x5dcb30
// 0077562b  68a0b77700           push 0x77b7a0
// 00775630  e87e9beaff           call 0x61f1b3
// 00775635  59                   pop ecx
// 00775636  c3                   ret 
// library rbxgs/v8datamodel\Gyro.cpp (function ??__E?prop_kP@BodyGyro@RBX@@2V?$BoundProp@M$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Gyro.cpp
