// roc 2007-08 007756a0  unit: seg_00770000  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007756a0
//
// 007756a0  6a01                 push 1
// 007756a2  33c9                 xor ecx, ecx
// 007756a4  6820fe7b00           push 0x7bfe20
// 007756a9  51                   push ecx
// 007756aa  b830b35e00           mov eax, 0x5eb330
// 007756af  50                   push eax
// 007756b0  b978738c00           mov ecx, 0x8c7378
// 007756b5  e8d699e7ff           call 0x5ef090
// 007756ba  6880c37700           push 0x77c380
// 007756bf  e85fb6ebff           call 0x630d23
// 007756c4  59                   pop ecx
// 007756c5  c3                   ret 
// library rbxgs/v8datamodel\Gyro.cpp (function ??__Efunc_getLastForceOld@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Gyro.cpp
