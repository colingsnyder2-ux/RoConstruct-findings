// roc 2007-03 00591400  unit: seg_00590000  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00591400
//
// 00591400  8b442404             mov eax, dword ptr [esp + 4]
// 00591404  6a00                 push 0
// 00591406  68e8d68900           push 0x89d6e8
// 0059140b  6864108800           push 0x881064
// 00591410  6a00                 push 0
// 00591412  50                   push eax
// 00591413  e8aedd0800           call 0x61f1c6
// 00591418  83c414               add esp, 0x14
// 0059141b  f7d8                 neg eax
// 0059141d  1bc0                 sbb eax, eax
// 0059141f  f7d8                 neg eax
// 00591421  c20400               ret 4
// library rbxgs/v8datamodel\Lighting.cpp (function ?askAddChild@Lighting@RBX@@MBE_NPBVInstance@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
