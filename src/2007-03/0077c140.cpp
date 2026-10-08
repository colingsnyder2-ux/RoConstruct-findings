// roc 2007-03 0077c140  unit: seg_00770000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0077c140
//
// 0077c140  b910238c00           mov ecx, 0x8c2310
// 0077c145  e99af1fbff           jmp 0x73b2e4
// library rbxgs/gui\GUI.cpp (function ??__E?oldProjectionMatrix@GuiRoot@RBX@@0VMatrix4@G3D@@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp
