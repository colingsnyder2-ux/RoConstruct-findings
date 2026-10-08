// roc 2007-03 0040e210  unit: seg_00400000  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0040e210
//
// 0040e210  8b442404             mov eax, dword ptr [esp + 4]
// 0040e214  6a00                 push 0
// 0040e216  6848108800           push 0x881048
// 0040e21b  6864108800           push 0x881064
// 0040e220  6a00                 push 0
// 0040e222  50                   push eax
// 0040e223  e89e0f2100           call 0x61f1c6
// 0040e228  83c414               add esp, 0x14
// 0040e22b  f7d8                 neg eax
// 0040e22d  1bc0                 sbb eax, eax
// 0040e22f  f7d8                 neg eax
// 0040e231  c20400               ret 4
// library rbxgs/gui\GUI.cpp (function ?askAddChild@GuiItem@RBX@@EBE_NPBVInstance@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp
