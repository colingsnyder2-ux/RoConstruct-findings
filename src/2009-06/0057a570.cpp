// from server: 100% by auto
// roc 2009-06 0057a570  unit: G3D::LineSegment  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0057a570
//
// 0057a570  0fbe442404           movsx eax, byte ptr [esp + 4]
// 0057a575  50                   push eax
// 0057a576  ff15cce88900         call dword ptr [0x89e8cc]
// 0057a57c  83c404               add esp, 4
// 0057a57f  f7d8                 neg eax
// 0057a581  1bc0                 sbb eax, eax
// 0057a583  f7d8                 neg eax
// 0057a585  c3                   ret 
// library g3d-6.09/G3Dcpp\GImage_ppm.cpp (function ?isWhiteSpace@G3D@@YA_ND@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage_ppm.cpp
