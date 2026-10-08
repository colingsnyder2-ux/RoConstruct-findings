// roc 2008-06 007f7f10  unit: seg_007f0000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f7f10
//
// 007f7f10  56                   push esi
// 007f7f11  6a05                 push 5
// 007f7f13  33c9                 xor ecx, ecx
// 007f7f15  51                   push ecx
// 007f7f16  b8d02f6300           mov eax, 0x632fd0
// 007f7f1b  50                   push eax
// 007f7f1c  33f6                 xor esi, esi
// 007f7f1e  56                   push esi
// 007f7f1f  ba509a6000           mov edx, 0x609a50
// 007f7f24  52                   push edx
// 007f7f25  68b8818400           push 0x8481b8
// 007f7f2a  68b0818400           push 0x8481b0
// 007f7f2f  b9e8ca9700           mov ecx, 0x97cae8
// 007f7f34  e89791e3ff           call 0x6310d0
// 007f7f39  68b0048000           push 0x8004b0
// 007f7f3e  e86c98eaff           call 0x6a17af
// 007f7f43  83c404               add esp, 4
// 007f7f46  5e                   pop esi
// 007f7f47  c3                   ret 
// library rbxgs/v8datamodel\Gyro.cpp (function ??__E?prop_Target@Rocket@RBX@@2V?$RefPropDescriptor@VRocket@RBX@@VPartInstance@2@@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Gyro.cpp
