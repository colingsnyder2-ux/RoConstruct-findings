// roc 2007-03 00775520  unit: seg_00770000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00775520
//
// 00775520  6a05                 push 5
// 00775522  6804010000           push 0x104
// 00775527  6888da7b00           push 0x7bda88
// 0077552c  6884da7b00           push 0x7bda84
// 00775531  b980058c00           mov ecx, 0x8c0580
// 00775536  e85574e6ff           call 0x5dc990
// 0077553b  6800b77700           push 0x77b700
// 00775540  e86e9ceaff           call 0x61f1b3
// 00775545  59                   pop ecx
// 00775546  c3                   ret 
// library rbxgs/v8datamodel\Gyro.cpp (function ??__E?prop_kP@BodyGyro@RBX@@2V?$BoundProp@M$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Gyro.cpp
