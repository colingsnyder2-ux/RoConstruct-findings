// roc 2008-06 00409e60  unit: RBX::GlobalSettings::Item  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00409e60
//
// 00409e60  8b442404             mov eax, dword ptr [esp + 4]
// 00409e64  6a00                 push 0
// 00409e66  6818949200           push 0x929418
// 00409e6b  687c909200           push 0x92907c
// 00409e70  6a00                 push 0
// 00409e72  50                   push eax
// 00409e73  e84e792900           call 0x6a17c6
// 00409e78  83c414               add esp, 0x14
// 00409e7b  f7d8                 neg eax
// 00409e7d  1bc0                 sbb eax, eax
// 00409e7f  f7d8                 neg eax
// 00409e81  c20400               ret 4
// library rbxgs/v8datamodel\GameSettings.cpp (function ?askAddChild@Item@GlobalSettings@RBX@@MBE_NPBVInstance@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/GameSettings.cpp
