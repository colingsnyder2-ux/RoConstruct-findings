// roc 2007-03 00776a00  unit: seg_00770000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00776a00
//
// 00776a00  b9f0228c00           mov ecx, 0x8c22f0
// 00776a05  e8665ff1ff           call 0x68c970
// 00776a0a  6830c17700           push 0x77c130
// 00776a0f  e89f87eaff           call 0x61f1b3
// 00776a14  59                   pop ecx
// 00776a15  c3                   ret 
// library rbxgs/gui\GUI.cpp (function ??__E?oldCameraWorld@GuiRoot@RBX@@0VCoordinateFrame@G3D@@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp
