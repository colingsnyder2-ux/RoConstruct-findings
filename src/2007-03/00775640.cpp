// roc 2007-03 00775640  unit: seg_00770000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00775640
//
// 00775640  6a05                 push 5
// 00775642  6808010000           push 0x108
// 00775647  6888da7b00           push 0x7bda88
// 0077564c  68a4da7b00           push 0x7bdaa4
// 00775651  b9c8068c00           mov ecx, 0x8c06c8
// 00775656  e8a575e6ff           call 0x5dcc00
// 0077565b  6880b77700           push 0x77b780
// 00775660  e84e9beaff           call 0x61f1b3
// 00775665  59                   pop ecx
// 00775666  c3                   ret 
// library rbxgs/v8datamodel\Gyro.cpp (function ??__E?prop_maxForce@BodyVelocity@RBX@@2V?$BoundProp@VVector3@G3D@@$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Gyro.cpp
