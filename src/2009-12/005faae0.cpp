// roc 2009-12 005faae0  unit: G3D::LineSegment  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005faae0
//
// 005faae0  0fbe442404           movsx eax, byte ptr [esp + 4]
// 005faae5  50                   push eax
// 005faae6  ff15dcb89800         call dword ptr [0x98b8dc]
// 005faaec  83c404               add esp, 4
// 005faaef  f7d8                 neg eax
// 005faaf1  1bc0                 sbb eax, eax
// 005faaf3  f7d8                 neg eax
// 005faaf5  c3                   ret 
// library g3d-6.09/G3Dcpp\GImage_ppm.cpp (function ?isWhiteSpace@G3D@@YA_ND@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage_ppm.cpp
