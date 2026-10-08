// roc 2007-03 00775490  unit: seg_00770000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00775490
//
// 00775490  6a05                 push 5
// 00775492  6808010000           push 0x108
// 00775497  6888da7b00           push 0x7bda88
// 0077549c  68303a7800           push 0x783a30
// 007754a1  b928068c00           mov ecx, 0x8c0628
// 007754a6  e8e571e6ff           call 0x5dc690
// 007754ab  6820b87700           push 0x77b820
// 007754b0  e8fe9ceaff           call 0x61f1b3
// 007754b5  59                   pop ecx
// 007754b6  c3                   ret 
// library rbxgs/v8datamodel\Gyro.cpp (function ??__E?prop_kD@BodyGyro@RBX@@2V?$BoundProp@M$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Gyro.cpp
