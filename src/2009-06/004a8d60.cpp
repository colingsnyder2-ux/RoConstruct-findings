// from server: 100% by auto
// roc 2009-06 004a8d60  unit: G3D::Win32Window  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004a8d60
//
// 004a8d60  56                   push esi
// 004a8d61  8bb1e8010000         mov esi, dword ptr [ecx + 0x1e8]
// 004a8d67  ff1588ee8900         call dword ptr [0x89ee88]
// 004a8d6d  3bf0                 cmp esi, eax
// 004a8d6f  7512                 jne 0x4a8d83
// 004a8d71  56                   push esi
// 004a8d72  ff15c8ed8900         call dword ptr [0x89edc8]
// 004a8d78  85c0                 test eax, eax
// 004a8d7a  7407                 je 0x4a8d83
// 004a8d7c  b801000000           mov eax, 1
// 004a8d81  5e                   pop esi
// 004a8d82  c3                   ret 
// 004a8d83  33c0                 xor eax, eax
// 004a8d85  5e                   pop esi
// 004a8d86  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?hasFocus@Win32Window@G3D@@UBE_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
