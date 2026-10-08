// roc 2007-08 00555590  unit: RBX::GuiTarget  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00555590
//
// 00555590  8b89bc000000         mov ecx, dword ptr [ecx + 0xbc]
// 00555596  6a00                 push 0
// 00555598  68301f8800           push 0x881f30
// 0055559d  684c1f8800           push 0x881f4c
// 005555a2  6a00                 push 0
// 005555a4  51                   push ecx
// 005555a5  e88cb70d00           call 0x630d36
// 005555aa  83c414               add esp, 0x14
// 005555ad  c3                   ret 
// library rbxgs/gui\GUI.cpp (function ?getGuiParent@GuiItem@RBX@@QBEPBV12@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp
