// roc 2011-06 00413ff0  unit: ChatEnter  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00413ff0
//
// 00413ff0  8b442404             mov eax, dword ptr [esp + 4]
// 00413ff4  6a00                 push 0
// 00413ff6  6810a5c000           push 0xc0a510
// 00413ffb  68f871c000           push 0xc071f8
// 00414000  6a00                 push 0
// 00414002  50                   push eax
// 00414003  e8e2723f00           call 0x80b2ea
// 00414008  83c414               add esp, 0x14
// 0041400b  f7d8                 neg eax
// 0041400d  1bc0                 sbb eax, eax
// 0041400f  f7d8                 neg eax
// 00414011  c20400               ret 4
// library rbxgs/gui\GUI.cpp (function ?askAddChild@GuiItem@RBX@@EBE_NPBVInstance@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp
