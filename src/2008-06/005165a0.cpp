// roc 2008-06 005165a0  unit: G3D::BinaryInput  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005165a0
//
// 005165a0  0fbe442404           movsx eax, byte ptr [esp + 4]
// 005165a5  50                   push eax
// 005165a6  ff1568278000         call dword ptr [0x802768]
// 005165ac  83c404               add esp, 4
// 005165af  f7d8                 neg eax
// 005165b1  1bc0                 sbb eax, eax
// 005165b3  f7d8                 neg eax
// 005165b5  c3                   ret 
// library g3d-6.09/G3Dcpp\GImage_ppm.cpp (function ?isWhiteSpace@G3D@@YA_ND@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage_ppm.cpp
