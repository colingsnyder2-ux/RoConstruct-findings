// roc 2008-06 004117c0  unit: ChatEnter  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004117c0
//
// 004117c0  8b442404             mov eax, dword ptr [esp + 4]
// 004117c4  6a00                 push 0
// 004117c6  68d8b89200           push 0x92b8d8
// 004117cb  687c909200           push 0x92907c
// 004117d0  6a00                 push 0
// 004117d2  50                   push eax
// 004117d3  e8eeff2800           call 0x6a17c6
// 004117d8  83c414               add esp, 0x14
// 004117db  f7d8                 neg eax
// 004117dd  1bc0                 sbb eax, eax
// 004117df  f7d8                 neg eax
// 004117e1  c20400               ret 4
// library rbxgs/gui\GUI.cpp (function ?askAddChild@GuiItem@RBX@@EBE_NPBVInstance@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp
