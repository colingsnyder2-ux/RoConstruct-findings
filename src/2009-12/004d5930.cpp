// roc 2009-12 004d5930  unit: G3D::Win32Window  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004d5930
//
// 004d5930  56                   push esi
// 004d5931  8bb1e8010000         mov esi, dword ptr [ecx + 0x1e8]
// 004d5937  ff15cccb9800         call dword ptr [0x98cbcc]
// 004d593d  3bf0                 cmp esi, eax
// 004d593f  7512                 jne 0x4d5953
// 004d5941  56                   push esi
// 004d5942  ff1564ca9800         call dword ptr [0x98ca64]
// 004d5948  85c0                 test eax, eax
// 004d594a  7407                 je 0x4d5953
// 004d594c  b801000000           mov eax, 1
// 004d5951  5e                   pop esi
// 004d5952  c3                   ret 
// 004d5953  33c0                 xor eax, eax
// 004d5955  5e                   pop esi
// 004d5956  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?hasFocus@Win32Window@G3D@@UBE_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
