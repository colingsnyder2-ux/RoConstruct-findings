// roc 2007-08 007754c0  unit: seg_00770000  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007754c0
//
// 007754c0  6a01                 push 1
// 007754c2  33c9                 xor ecx, ecx
// 007754c4  68d8fd7b00           push 0x7bfdd8
// 007754c9  51                   push ecx
// 007754ca  b820b45e00           mov eax, 0x5eb420
// 007754cf  50                   push eax
// 007754d0  b900778c00           mov ecx, 0x8c7700
// 007754d5  e8e69ae7ff           call 0x5eefc0
// 007754da  6870c37700           push 0x77c370
// 007754df  e83fb8ebff           call 0x630d23
// 007754e4  59                   pop ecx
// 007754e5  c3                   ret 
// library rbxgs/v8datamodel\Gyro.cpp (function ??__E?func_Abort@Rocket@RBX@@2V?$BoundFuncDesc@VRocket@RBX@@$$A6AXXZ$0A@@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Gyro.cpp
