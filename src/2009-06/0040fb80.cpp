// roc 2009-06 0040fb80  unit: ChatEnter  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0040fb80
//
// 0040fb80  8b442404             mov eax, dword ptr [esp + 4]
// 0040fb84  6a00                 push 0
// 0040fb86  68c8e79d00           push 0x9de7c8
// 0040fb8b  6840be9d00           push 0x9dbe40
// 0040fb90  6a00                 push 0
// 0040fb92  50                   push eax
// 0040fb93  e8e2a03000           call 0x719c7a
// 0040fb98  83c414               add esp, 0x14
// 0040fb9b  f7d8                 neg eax
// 0040fb9d  1bc0                 sbb eax, eax
// 0040fb9f  f7d8                 neg eax
// 0040fba1  c20400               ret 4
// library rbxgs/gui\GUI.cpp (function ?askAddChild@GuiItem@RBX@@EBE_NPBVInstance@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp
