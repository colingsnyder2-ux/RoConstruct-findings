// roc 2010-06 0055c8d0  unit: G3D::GCamera  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0055c8d0
//
// 0055c8d0  0fbe442404           movsx eax, byte ptr [esp + 4]
// 0055c8d5  50                   push eax
// 0055c8d6  ff15f0a79e00         call dword ptr [0x9ea7f0]
// 0055c8dc  83c404               add esp, 4
// 0055c8df  f7d8                 neg eax
// 0055c8e1  1bc0                 sbb eax, eax
// 0055c8e3  f7d8                 neg eax
// 0055c8e5  c3                   ret 
// library g3d-6.09/G3Dcpp\GImage_ppm.cpp (function ?isWhiteSpace@G3D@@YA_ND@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage_ppm.cpp
