// roc 2007-03 00408430  unit: seg_00400000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00408430
//
// 00408430  b954638b00           mov ecx, 0x8b6354
// 00408435  e926190200           jmp 0x429d60
// library rbxgs/gui\GUI.cpp (function ??__E?oldProjectionMatrix@GuiRoot@RBX@@0VMatrix4@G3D@@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp
