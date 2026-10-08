// roc 2007-03 004fbb70  unit: seg_004f0000  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004fbb70
//
// 004fbb70  c741103cfd7900       mov dword ptr [ecx + 0x10], 0x79fd3c
// 004fbb77  c3                   ret 
// library rbxgs/v8datamodel\Camera.cpp (function ??1Face@Frustum@GCamera@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp
