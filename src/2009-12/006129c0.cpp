// roc 2009-12 006129c0  unit: seg_00610000  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006129c0
//
// 006129c0  8b542404             mov edx, dword ptr [esp + 4]
// 006129c4  33c9                 xor ecx, ecx
// 006129c6  3bd1                 cmp edx, ecx
// 006129c8  744d                 je 0x612a17
// 006129ca  8b421c               mov eax, dword ptr [edx + 0x1c]
// 006129cd  3bc1                 cmp eax, ecx
// 006129cf  7446                 je 0x612a17
// 006129d1  89481c               mov dword ptr [eax + 0x1c], ecx
// 006129d4  894a14               mov dword ptr [edx + 0x14], ecx
// 006129d7  894a08               mov dword ptr [edx + 8], ecx
// 006129da  894a18               mov dword ptr [edx + 0x18], ecx
// 006129dd  c7423001000000       mov dword ptr [edx + 0x30], 1
// 006129e4  8908                 mov dword ptr [eax], ecx
// 006129e6  894804               mov dword ptr [eax + 4], ecx
// 006129e9  89480c               mov dword ptr [eax + 0xc], ecx
// 006129ec  894820               mov dword ptr [eax + 0x20], ecx
// 006129ef  894828               mov dword ptr [eax + 0x28], ecx
// 006129f2  89482c               mov dword ptr [eax + 0x2c], ecx
// 006129f5  894830               mov dword ptr [eax + 0x30], ecx
// 006129f8  894838               mov dword ptr [eax + 0x38], ecx
// 006129fb  89483c               mov dword ptr [eax + 0x3c], ecx
// 006129fe  8d8830050000         lea ecx, [eax + 0x530]
// 00612a04  c7401400800000       mov dword ptr [eax + 0x14], 0x8000
// 00612a0b  89486c               mov dword ptr [eax + 0x6c], ecx
// 00612a0e  894850               mov dword ptr [eax + 0x50], ecx
// 00612a11  89484c               mov dword ptr [eax + 0x4c], ecx
// 00612a14  33c0                 xor eax, eax
// 00612a16  c3                   ret 
// 00612a17  b8feffffff           mov eax, 0xfffffffe
// 00612a1c  c3                   ret 
// library zlib-1.2.3/inflate.c (function _inflateReset)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 inflate.c
