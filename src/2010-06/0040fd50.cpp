// roc 2010-06 0040fd50  unit: ChatEnter  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0040fd50
//
// 0040fd50  8b442404             mov eax, dword ptr [esp + 4]
// 0040fd54  6a00                 push 0
// 0040fd56  68b0b8b700           push 0xb7b8b0
// 0040fd5b  68408eb700           push 0xb78e40
// 0040fd60  6a00                 push 0
// 0040fd62  50                   push eax
// 0040fd63  e8828e3900           call 0x7a8bea
// 0040fd68  83c414               add esp, 0x14
// 0040fd6b  f7d8                 neg eax
// 0040fd6d  1bc0                 sbb eax, eax
// 0040fd6f  f7d8                 neg eax
// 0040fd71  c20400               ret 4
// library rbxgs/gui\GUI.cpp (function ?askAddChild@GuiItem@RBX@@EBE_NPBVInstance@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp
