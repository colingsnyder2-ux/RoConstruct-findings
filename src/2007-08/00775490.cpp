// roc 2007-08 00775490  unit: seg_00770000  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00775490
//
// 00775490  6a01                 push 1
// 00775492  33c9                 xor ecx, ecx
// 00775494  68d0fd7b00           push 0x7bfdd0
// 00775499  51                   push ecx
// 0077549a  b8a0b35e00           mov eax, 0x5eb3a0
// 0077549f  50                   push eax
// 007754a0  b958758c00           mov ecx, 0x8c7558
// 007754a5  e8169be7ff           call 0x5eefc0
// 007754aa  68a0c37700           push 0x77c3a0
// 007754af  e86fb8ebff           call 0x630d23
// 007754b4  59                   pop ecx
// 007754b5  c3                   ret 
// library rbxgs/v8datamodel\Gyro.cpp (function ??__E?func_Fire@Rocket@RBX@@2V?$BoundFuncDesc@VRocket@RBX@@$$A6AXXZ$0A@@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Gyro.cpp
