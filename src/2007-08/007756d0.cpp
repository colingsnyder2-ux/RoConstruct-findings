// roc 2007-08 007756d0  unit: seg_00770000  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007756d0
//
// 007756d0  6a01                 push 1
// 007756d2  33c9                 xor ecx, ecx
// 007756d4  682cfe7b00           push 0x7bfe2c
// 007756d9  51                   push ecx
// 007756da  b830b35e00           mov eax, 0x5eb330
// 007756df  50                   push eax
// 007756e0  b9b0768c00           mov ecx, 0x8c76b0
// 007756e5  e8a699e7ff           call 0x5ef090
// 007756ea  6850c37700           push 0x77c350
// 007756ef  e82fb6ebff           call 0x630d23
// 007756f4  59                   pop ecx
// 007756f5  c3                   ret 
// library rbxgs/v8datamodel\Gyro.cpp (function ??__Efunc_getLastForce@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Gyro.cpp
