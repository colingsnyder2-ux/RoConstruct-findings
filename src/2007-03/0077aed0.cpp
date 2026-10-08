// roc 2007-03 0077aed0  unit: seg_00770000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0077aed0
//
// 0077aed0  b97cf08b00           mov ecx, 0x8bf07c
// 0077aed5  e996dcc9ff           jmp 0x418b70
// library rbxgs/gui\GUI.cpp (function ??__E?oldProjectionMatrix@GuiRoot@RBX@@0VMatrix4@G3D@@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp
