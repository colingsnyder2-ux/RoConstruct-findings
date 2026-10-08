// roc 2007-03 006329e0  unit: seg_00630000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006329e0
//
// 006329e0  b9681e8c00           mov ecx, 0x8c1e68
// 006329e5  e9369e0300           jmp 0x66c820
// library rbxgs/gui\GUI.cpp (function ??__E?oldProjectionMatrix@GuiRoot@RBX@@0VMatrix4@G3D@@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp
