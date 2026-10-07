// roc 2009-06 00572f30  unit: G3D::Ray  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00572f30
//
// 00572f30  c7411014b78c00       mov dword ptr [ecx + 0x10], 0x8cb714
// 00572f37  c3                   ret 
// library g3d-6.09/G3Dcpp\GCamera.cpp (function ??1Face@Frustum@GCamera@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GCamera.cpp
