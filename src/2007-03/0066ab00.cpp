// roc 2007-03 0066ab00  unit: seg_00660000  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0066ab00
//
// 0066ab00  c7411000000000       mov dword ptr [ecx + 0x10], 0
// 0066ab07  c3                   ret 
// library rbxgs/v8datamodel\Camera.cpp (function ??1Face@Frustum@GCamera@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp
