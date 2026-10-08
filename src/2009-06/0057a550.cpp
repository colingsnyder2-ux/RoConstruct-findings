// from server: 100% by auto
// roc 2009-06 0057a550  unit: G3D::LineSegment  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0057a550
//
// 0057a550  0fbe442404           movsx eax, byte ptr [esp + 4]
// 0057a555  50                   push eax
// 0057a556  ff1544e88900         call dword ptr [0x89e844]
// 0057a55c  83c404               add esp, 4
// 0057a55f  f7d8                 neg eax
// 0057a561  1bc0                 sbb eax, eax
// 0057a563  f7d8                 neg eax
// 0057a565  c3                   ret 
// library g3d-6.09/G3Dcpp\GImage_ppm.cpp (function ?isWhiteSpace@G3D@@YA_ND@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage_ppm.cpp
