// from server: 100% by auto
// roc 2007-08 0047b620  unit: G3D::Win32Window  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0047b620
//
// 0047b620  56                   push esi
// 0047b621  8bb1e8010000         mov esi, dword ptr [ecx + 0x1e8]
// 0047b627  ff15e4ec7700         call dword ptr [0x77ece4]
// 0047b62d  3bf0                 cmp esi, eax
// 0047b62f  7512                 jne 0x47b643
// 0047b631  56                   push esi
// 0047b632  ff15a0ed7700         call dword ptr [0x77eda0]
// 0047b638  85c0                 test eax, eax
// 0047b63a  7407                 je 0x47b643
// 0047b63c  b801000000           mov eax, 1
// 0047b641  5e                   pop esi
// 0047b642  c3                   ret 
// 0047b643  33c0                 xor eax, eax
// 0047b645  5e                   pop esi
// 0047b646  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?hasFocus@Win32Window@G3D@@UBE_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
