// roc 2007-08 005acb20  unit: RBX::Lighting  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005acb20
//
// 005acb20  8b442404             mov eax, dword ptr [esp + 4]
// 005acb24  6a00                 push 0
// 005acb26  68a4f68900           push 0x89f6a4
// 005acb2b  684c1f8800           push 0x881f4c
// 005acb30  6a00                 push 0
// 005acb32  50                   push eax
// 005acb33  e8fe410800           call 0x630d36
// 005acb38  83c414               add esp, 0x14
// 005acb3b  f7d8                 neg eax
// 005acb3d  1bc0                 sbb eax, eax
// 005acb3f  f7d8                 neg eax
// 005acb41  c20400               ret 4
// library rbxgs/v8datamodel\Lighting.cpp (function ?askAddChild@Lighting@RBX@@MBE_NPBVInstance@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
