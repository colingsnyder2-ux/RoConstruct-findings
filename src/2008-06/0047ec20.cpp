// from server: 100% by auto
// roc 2008-06 0047ec20  unit: G3D::Win32Window  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0047ec20
//
// 0047ec20  56                   push esi
// 0047ec21  8bb1e8010000         mov esi, dword ptr [ecx + 0x1e8]
// 0047ec27  ff15202e8000         call dword ptr [0x802e20]
// 0047ec2d  3bf0                 cmp esi, eax
// 0047ec2f  7512                 jne 0x47ec43
// 0047ec31  56                   push esi
// 0047ec32  ff153c2d8000         call dword ptr [0x802d3c]
// 0047ec38  85c0                 test eax, eax
// 0047ec3a  7407                 je 0x47ec43
// 0047ec3c  b801000000           mov eax, 1
// 0047ec41  5e                   pop esi
// 0047ec42  c3                   ret 
// 0047ec43  33c0                 xor eax, eax
// 0047ec45  5e                   pop esi
// 0047ec46  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?hasFocus@Win32Window@G3D@@UBE_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
