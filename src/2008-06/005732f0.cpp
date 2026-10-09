// roc 2008-06 005732f0  unit: RBX::GuiTarget  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005732f0
//
// 005732f0  8b8904010000         mov ecx, dword ptr [ecx + 0x104]
// 005732f6  6a00                 push 0
// 005732f8  68d8b89200           push 0x92b8d8
// 005732fd  687c909200           push 0x92907c
// 00573302  6a00                 push 0
// 00573304  51                   push ecx
// 00573305  e8bce41200           call 0x6a17c6
// 0057330a  83c414               add esp, 0x14
// 0057330d  c3                   ret 
// library openrbx-client/App\gui\GUI.cpp (function ?getGuiParent@GuiItem@RBX@@QAEPAV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/gui/GUI.cpp
