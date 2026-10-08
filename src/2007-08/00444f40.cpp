// roc 2007-08 00444f40  unit: RBX::GlobalSettings::Item  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00444f40
//
// 00444f40  8b442404             mov eax, dword ptr [esp + 4]
// 00444f44  6a00                 push 0
// 00444f46  6804878800           push 0x888704
// 00444f4b  684c1f8800           push 0x881f4c
// 00444f50  6a00                 push 0
// 00444f52  50                   push eax
// 00444f53  e8debd1e00           call 0x630d36
// 00444f58  83c414               add esp, 0x14
// 00444f5b  f7d8                 neg eax
// 00444f5d  1bc0                 sbb eax, eax
// 00444f5f  f7d8                 neg eax
// 00444f61  c20400               ret 4
// library rbxgs/v8datamodel\GameSettings.cpp (function ?askAddChild@Item@GlobalSettings@RBX@@MBE_NPBVInstance@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/GameSettings.cpp
