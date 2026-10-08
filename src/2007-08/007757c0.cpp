// roc 2007-08 007757c0  unit: seg_00770000  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007757c0
//
// 007757c0  6a01                 push 1
// 007757c2  33c9                 xor ecx, ecx
// 007757c4  682cfe7b00           push 0x7bfe2c
// 007757c9  51                   push ecx
// 007757ca  b860b35e00           mov eax, 0x5eb360
// 007757cf  50                   push eax
// 007757d0  b9c0758c00           mov ecx, 0x8c75c0
// 007757d5  e89699e7ff           call 0x5ef170
// 007757da  6860c37700           push 0x77c360
// 007757df  e83fb5ebff           call 0x630d23
// 007757e4  59                   pop ecx
// 007757e5  c3                   ret 
// library rbxgs/v8datamodel\Gyro.cpp (function ??__Efunc_getLastForce@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Gyro.cpp
