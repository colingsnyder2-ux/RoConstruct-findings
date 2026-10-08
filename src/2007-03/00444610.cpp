// roc 2007-03 00444610  unit: seg_00440000  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00444610
//
// 00444610  8b442404             mov eax, dword ptr [esp + 4]
// 00444614  6a00                 push 0
// 00444616  6864758800           push 0x887564
// 0044461b  6864108800           push 0x881064
// 00444620  6a00                 push 0
// 00444622  50                   push eax
// 00444623  e89eab1d00           call 0x61f1c6
// 00444628  83c414               add esp, 0x14
// 0044462b  f7d8                 neg eax
// 0044462d  1bc0                 sbb eax, eax
// 0044462f  f7d8                 neg eax
// 00444631  c20400               ret 4
// library rbxgs/v8datamodel\GameSettings.cpp (function ?askAddChild@Item@GlobalSettings@RBX@@MBE_NPBVInstance@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/GameSettings.cpp
