// from server: 100% by auto
// roc 2008-06 00510830  unit: G3D::Ray  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00510830
//
// 00510830  c74110bc828200       mov dword ptr [ecx + 0x10], 0x8282bc
// 00510837  c3                   ret 
// library g3d-6.09/G3Dcpp\GCamera.cpp (function ??1Face@Frustum@GCamera@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GCamera.cpp
