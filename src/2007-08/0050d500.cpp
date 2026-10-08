// from server: 100% by auto
// roc 2007-08 0050d500  unit: G3D::BinaryInput  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0050d500
//
// 0050d500  0fbe442404           movsx eax, byte ptr [esp + 4]
// 0050d505  50                   push eax
// 0050d506  ff159ce87700         call dword ptr [0x77e89c]
// 0050d50c  83c404               add esp, 4
// 0050d50f  f7d8                 neg eax
// 0050d511  1bc0                 sbb eax, eax
// 0050d513  f7d8                 neg eax
// 0050d515  c3                   ret 
// library g3d-6.09/G3Dcpp\GImage_ppm.cpp (function ?isWhiteSpace@G3D@@YA_ND@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage_ppm.cpp
