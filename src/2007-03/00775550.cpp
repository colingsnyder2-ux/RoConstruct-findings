// roc 2007-03 00775550  unit: seg_00770000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00775550
//
// 00775550  6a05                 push 5
// 00775552  6808010000           push 0x108
// 00775557  6888da7b00           push 0x7bda88
// 0077555c  68303a7800           push 0x783a30
// 00775561  b9d4058c00           mov ecx, 0x8c05d4
// 00775566  e82574e6ff           call 0x5dc990
// 0077556b  68e0b67700           push 0x77b6e0
// 00775570  e83e9ceaff           call 0x61f1b3
// 00775575  59                   pop ecx
// 00775576  c3                   ret 
// library rbxgs/v8datamodel\Gyro.cpp (function ??__E?prop_kD@BodyGyro@RBX@@2V?$BoundProp@M$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Gyro.cpp
