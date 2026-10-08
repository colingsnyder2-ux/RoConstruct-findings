// roc 2007-03 00775670  unit: seg_00770000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00775670
//
// 00775670  6a05                 push 5
// 00775672  6814010000           push 0x114
// 00775677  6888da7b00           push 0x7bda88
// 0077567c  68c8da7b00           push 0x7bdac8
// 00775681  b990068c00           mov ecx, 0x8c0690
// 00775686  e87575e6ff           call 0x5dcc00
// 0077568b  6860b77700           push 0x77b760
// 00775690  e81e9beaff           call 0x61f1b3
// 00775695  59                   pop ecx
// 00775696  c3                   ret 
// library rbxgs/v8datamodel\Gyro.cpp (function ??__E?prop_velocity@BodyVelocity@RBX@@2V?$BoundProp@VVector3@G3D@@$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Gyro.cpp
