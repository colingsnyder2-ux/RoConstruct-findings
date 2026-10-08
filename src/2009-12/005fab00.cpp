// roc 2009-12 005fab00  unit: G3D::LineSegment  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005fab00
//
// 005fab00  0fbe442404           movsx eax, byte ptr [esp + 4]
// 005fab05  50                   push eax
// 005fab06  ff154cb89800         call dword ptr [0x98b84c]
// 005fab0c  83c404               add esp, 4
// 005fab0f  f7d8                 neg eax
// 005fab11  1bc0                 sbb eax, eax
// 005fab13  f7d8                 neg eax
// 005fab15  c3                   ret 
// library g3d-6.09/G3Dcpp\GImage_ppm.cpp (function ?isWhiteSpace@G3D@@YA_ND@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage_ppm.cpp
