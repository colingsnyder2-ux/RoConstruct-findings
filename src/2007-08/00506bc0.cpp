// roc 2007-08 00506bc0  unit: G3D::Ray  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00506bc0
//
// 00506bc0  c74110fc057a00       mov dword ptr [ecx + 0x10], 0x7a05fc
// 00506bc7  c3                   ret 
// library g3d-6.09/G3Dcpp\GCamera.cpp (function ??1Face@Frustum@GCamera@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GCamera.cpp
