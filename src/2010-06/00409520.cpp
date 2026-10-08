// roc 2010-06 00409520  unit: VAuthoringSettings::?$FactoryProduct  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00409520
//
// 00409520  8b442404             mov eax, dword ptr [esp + 4]
// 00409524  6a00                 push 0
// 00409526  681091b700           push 0xb79110
// 0040952b  68408eb700           push 0xb78e40
// 00409530  6a00                 push 0
// 00409532  50                   push eax
// 00409533  e8b2f63900           call 0x7a8bea
// 00409538  83c414               add esp, 0x14
// 0040953b  f7d8                 neg eax
// 0040953d  1bc0                 sbb eax, eax
// 0040953f  f7d8                 neg eax
// 00409541  c20400               ret 4
// library rbxgs/v8datamodel\GameSettings.cpp (function ?askAddChild@Item@GlobalSettings@RBX@@MBE_NPBVInstance@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/GameSettings.cpp
