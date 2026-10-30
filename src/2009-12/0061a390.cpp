// roc 2009-12 0061a390  unit: seg_00610000  size: 181 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0061a390
//
// 0061a390  56                   push esi
// 0061a391  8b742408             mov esi, dword ptr [esp + 8]
// 0061a395  6a00                 push 0
// 0061a397  56                   push esi
// 0061a398  e8f3e00000           call 0x628490
// 0061a39d  83c408               add esp, 8
// 0061a3a0  80beb000000000       cmp byte ptr [esi + 0xb0], 0
// 0061a3a7  7517                 jne 0x61a3c0
// 0061a3a9  56                   push esi
// 0061a3aa  e801d40000           call 0x6277b0
// 0061a3af  56                   push esi
// 0061a3b0  e8abcd0000           call 0x627160
// 0061a3b5  6a00                 push 0
// 0061a3b7  56                   push esi
// 0061a3b8  e8e3c40000           call 0x6268a0
// 0061a3bd  83c410               add esp, 0x10
// 0061a3c0  56                   push esi
// 0061a3c1  e8dabe0000           call 0x6262a0
// 0061a3c6  83c404               add esp, 4
// 0061a3c9  80beb100000000       cmp byte ptr [esi + 0xb1], 0
// 0061a3d0  56                   push esi
// 0061a3d1  7411                 je 0x61a3e4
// 0061a3d3  8b06                 mov eax, dword ptr [esi]
// 0061a3d5  c7401401000000       mov dword ptr [eax + 0x14], 1
// 0061a3dc  8b0e                 mov ecx, dword ptr [esi]
// 0061a3de  8b11                 mov edx, dword ptr [ecx]
// 0061a3e0  ffd2                 call edx
// 0061a3e2  eb15                 jmp 0x61a3f9
// 0061a3e4  80bed400000000       cmp byte ptr [esi + 0xd4], 0
// 0061a3eb  7407                 je 0x61a3f4
// 0061a3ed  e83eb20000           call 0x625630
// 0061a3f2  eb05                 jmp 0x61a3f9
// 0061a3f4  e8c7a50000           call 0x6249c0
// 0061a3f9  83c404               add esp, 4
// 0061a3fc  83bea800000001       cmp dword ptr [esi + 0xa8], 1
// 0061a403  7f0d                 jg 0x61a412
// 0061a405  80beb200000000       cmp byte ptr [esi + 0xb2], 0
// 0061a40c  7504                 jne 0x61a412
// 0061a40e  32c0                 xor al, al
// 0061a410  eb05                 jmp 0x61a417
// 0061a412  b801000000           mov eax, 1
// 0061a417  50                   push eax
// 0061a418  56                   push esi
// 0061a419  e802970000           call 0x623b20
// 0061a41e  6a00                 push 0
// 0061a420  56                   push esi
// 0061a421  e8ea8e0000           call 0x623310
// 0061a426  56                   push esi
// 0061a427  e804ffffff           call 0x61a330
// 0061a42c  8b4604               mov eax, dword ptr [esi + 4]
// 0061a42f  8b4818               mov ecx, dword ptr [eax + 0x18]
// 0061a432  56                   push esi
// 0061a433  ffd1                 call ecx
// 0061a435  8b964c010000         mov edx, dword ptr [esi + 0x14c]
// 0061a43b  8b02                 mov eax, dword ptr [edx]
// 0061a43d  56                   push esi
// 0061a43e  ffd0                 call eax
// 0061a440  83c41c               add esp, 0x1c
// 0061a443  5e                   pop esi
// 0061a444  c3                   ret 
// library jpeg-6b/jcinit.c (function _jinit_compress_master)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcinit.c
