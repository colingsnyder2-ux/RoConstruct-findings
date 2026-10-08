// roc 2007-03 007787e0  unit: seg_00770000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 007787e0
//
// 007787e0  b9688c8b00           mov ecx, 0x8b8c68
// 007787e5  e906d8d1ff           jmp 0x495ff0
// library rbxgs/gui\GUI.cpp (function ??__E?oldProjectionMatrix@GuiRoot@RBX@@0VMatrix4@G3D@@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp
