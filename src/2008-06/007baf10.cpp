// roc 2008-06 007baf10  unit: G3D::H::PAV?$Array::?$Set  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007baf10
//
// 007baf10  b801000000           mov eax, 1
// 007baf15  8405b0f69700         test byte ptr [0x97f6b0], al
// 007baf1b  7520                 jne 0x7baf3d
// 007baf1d  d9ee                 fldz 
// 007baf1f  0905b0f69700         or dword ptr [0x97f6b0], eax
// 007baf25  d915a0f69700         fst dword ptr [0x97f6a0]
// 007baf2b  d915a4f69700         fst dword ptr [0x97f6a4]
// 007baf31  d915a8f69700         fst dword ptr [0x97f6a8]
// 007baf37  d91dacf69700         fstp dword ptr [0x97f6ac]
// 007baf3d  b8a0f69700           mov eax, 0x97f6a0
// 007baf42  c3                   ret 
// library g3d-6.09/G3Dcpp\Color4.cpp (function ?zero@Color4@G3D@@SAABV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Color4.cpp
