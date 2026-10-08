// roc 2007-03 00775730  unit: seg_00770000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00775730
//
// 00775730  6a05                 push 5
// 00775732  6810010000           push 0x110
// 00775737  6888da7b00           push 0x7bda88
// 0077573c  6818567a00           push 0x7a5618
// 00775741  b944068c00           mov ecx, 0x8c0644
// 00775746  e8f576e6ff           call 0x5dce40
// 0077574b  68e0b77700           push 0x77b7e0
// 00775750  e85e9aeaff           call 0x61f1b3
// 00775755  59                   pop ecx
// 00775756  c3                   ret 
// library rbxgs/v8datamodel\Gyro.cpp (function ??__E?prop_location@BodyThrust@RBX@@2V?$BoundProp@VVector3@G3D@@$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Gyro.cpp
