// roc 2008-06 005165c0  unit: G3D::BinaryInput  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005165c0
//
// 005165c0  0fbe442404           movsx eax, byte ptr [esp + 4]
// 005165c5  50                   push eax
// 005165c6  ff1564278000         call dword ptr [0x802764]
// 005165cc  83c404               add esp, 4
// 005165cf  f7d8                 neg eax
// 005165d1  1bc0                 sbb eax, eax
// 005165d3  f7d8                 neg eax
// 005165d5  c3                   ret 
// library g3d-6.09/G3Dcpp\GImage_ppm.cpp (function ?isWhiteSpace@G3D@@YA_ND@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage_ppm.cpp
