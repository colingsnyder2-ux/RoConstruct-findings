// from server: 100% by auto
// roc 2010-06 0055aeb0  unit: G3D::Plane  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0055aeb0
//
// 0055aeb0  c74110340aa200       mov dword ptr [ecx + 0x10], 0xa20a34
// 0055aeb7  c3                   ret 
// library g3d-6.09/G3Dcpp\GCamera.cpp (function ??1Face@Frustum@GCamera@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GCamera.cpp
