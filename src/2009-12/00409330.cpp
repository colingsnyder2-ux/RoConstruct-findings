// roc 2009-12 00409330  unit: VAuthoringSettings::?$FactoryProduct  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00409330
//
// 00409330  8b442404             mov eax, dword ptr [esp + 4]
// 00409334  6a00                 push 0
// 00409336  689800b000           push 0xb00098
// 0040933b  6840feaf00           push 0xaffe40
// 00409340  6a00                 push 0
// 00409342  50                   push eax
// 00409343  e862b73e00           call 0x7f4aaa
// 00409348  83c414               add esp, 0x14
// 0040934b  f7d8                 neg eax
// 0040934d  1bc0                 sbb eax, eax
// 0040934f  f7d8                 neg eax
// 00409351  c20400               ret 4
// library rbxgs/v8datamodel\GameSettings.cpp (function ?askAddChild@Item@GlobalSettings@RBX@@MBE_NPBVInstance@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/GameSettings.cpp
