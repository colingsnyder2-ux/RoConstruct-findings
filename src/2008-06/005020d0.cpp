// from server: 100% by auto
// roc 2008-06 005020d0  unit: G3D::Sphere  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005020d0
//
// 005020d0  b801000000           mov eax, 1
// 005020d5  8405a4289700         test byte ptr [0x9728a4], al
// 005020db  751c                 jne 0x5020f9
// 005020dd  d9ee                 fldz 
// 005020df  0905a4289700         or dword ptr [0x9728a4], eax
// 005020e5  d91598289700         fst dword ptr [0x972898]
// 005020eb  d9e8                 fld1 
// 005020ed  d91d9c289700         fstp dword ptr [0x97289c]
// 005020f3  d91da0289700         fstp dword ptr [0x9728a0]
// 005020f9  b898289700           mov eax, 0x972898
// 005020fe  c3                   ret 
// library g3d-6.09/G3Dcpp\Vector3.cpp (function ?unitY@Vector3@G3D@@SAABV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Vector3.cpp
