// roc 2009-06 004093b0  unit: VAuthoringSettings::?$FactoryProduct  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004093b0
//
// 004093b0  8b442404             mov eax, dword ptr [esp + 4]
// 004093b4  6a00                 push 0
// 004093b6  6868c09d00           push 0x9dc068
// 004093bb  6840be9d00           push 0x9dbe40
// 004093c0  6a00                 push 0
// 004093c2  50                   push eax
// 004093c3  e8b2083100           call 0x719c7a
// 004093c8  83c414               add esp, 0x14
// 004093cb  f7d8                 neg eax
// 004093cd  1bc0                 sbb eax, eax
// 004093cf  f7d8                 neg eax
// 004093d1  c20400               ret 4
// library rbxgs/v8datamodel\GameSettings.cpp (function ?askAddChild@Item@GlobalSettings@RBX@@MBE_NPBVInstance@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/GameSettings.cpp
