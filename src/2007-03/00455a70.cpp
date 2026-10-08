// roc 2007-03 00455a70  unit: seg_00450000  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00455a70
//
// 00455a70  8d8164010000         lea eax, [ecx + 0x164]
// 00455a76  c3                   ret 
// library rbxgs/v8datamodel\Camera.cpp (function ?getCameraFocus@Camera@RBX@@QBEABVCoordinateFrame@G3D@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp
