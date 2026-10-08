// roc 2007-08 00775790  unit: seg_00770000  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00775790
//
// 00775790  6a01                 push 1
// 00775792  33c9                 xor ecx, ecx
// 00775794  6820fe7b00           push 0x7bfe20
// 00775799  51                   push ecx
// 0077579a  b860b35e00           mov eax, 0x5eb360
// 0077579f  50                   push eax
// 007757a0  b980768c00           mov ecx, 0x8c7680
// 007757a5  e8c699e7ff           call 0x5ef170
// 007757aa  6890c37700           push 0x77c390
// 007757af  e86fb5ebff           call 0x630d23
// 007757b4  59                   pop ecx
// 007757b5  c3                   ret 
// library rbxgs/v8datamodel\Gyro.cpp (function ??__Efunc_getLastForceOld@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Gyro.cpp
