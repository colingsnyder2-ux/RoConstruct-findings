// roc 2008-06 0051e630  unit: seg_00510000  size: 200 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0051e630
//
// 0051e630  56                   push esi
// 0051e631  8b742408             mov esi, dword ptr [esp + 8]
// 0051e635  8b4614               mov eax, dword ptr [esi + 0x14]
// 0051e638  3dcd000000           cmp eax, 0xcd
// 0051e63d  7407                 je 0x51e646
// 0051e63f  3dce000000           cmp eax, 0xce
// 0051e644  7536                 jne 0x51e67c
// 0051e646  807e4000             cmp byte ptr [esi + 0x40], 0
// 0051e64a  7530                 jne 0x51e67c
// 0051e64c  8b4678               mov eax, dword ptr [esi + 0x78]
// 0051e64f  3b4660               cmp eax, dword ptr [esi + 0x60]
// 0051e652  7313                 jae 0x51e667
// 0051e654  8b0e                 mov ecx, dword ptr [esi]
// 0051e656  c7411443000000       mov dword ptr [ecx + 0x14], 0x43
// 0051e65d  8b16                 mov edx, dword ptr [esi]
// 0051e65f  8b02                 mov eax, dword ptr [edx]
// 0051e661  56                   push esi
// 0051e662  ffd0                 call eax
// 0051e664  83c404               add esp, 4
// 0051e667  8b8e80010000         mov ecx, dword ptr [esi + 0x180]
// 0051e66d  8b5104               mov edx, dword ptr [ecx + 4]
// 0051e670  56                   push esi
// 0051e671  ffd2                 call edx
// 0051e673  c74614d2000000       mov dword ptr [esi + 0x14], 0xd2
// 0051e67a  eb2f                 jmp 0x51e6ab
// 0051e67c  3dcf000000           cmp eax, 0xcf
// 0051e681  7509                 jne 0x51e68c
// 0051e683  c74614d2000000       mov dword ptr [esi + 0x14], 0xd2
// 0051e68a  eb22                 jmp 0x51e6ae
// 0051e68c  3dd2000000           cmp eax, 0xd2
// 0051e691  741b                 je 0x51e6ae
// 0051e693  8b06                 mov eax, dword ptr [esi]
// 0051e695  c7401414000000       mov dword ptr [eax + 0x14], 0x14
// 0051e69c  8b0e                 mov ecx, dword ptr [esi]
// 0051e69e  8b5614               mov edx, dword ptr [esi + 0x14]
// 0051e6a1  895118               mov dword ptr [ecx + 0x18], edx
// 0051e6a4  8b06                 mov eax, dword ptr [esi]
// 0051e6a6  8b08                 mov ecx, dword ptr [eax]
// 0051e6a8  56                   push esi
// 0051e6a9  ffd1                 call ecx
// 0051e6ab  83c404               add esp, 4
// 0051e6ae  8b9690010000         mov edx, dword ptr [esi + 0x190]
// 0051e6b4  807a1100             cmp byte ptr [edx + 0x11], 0
// 0051e6b8  7524                 jne 0x51e6de
// 0051e6ba  8d9b00000000         lea ebx, [ebx]
// 0051e6c0  8b8690010000         mov eax, dword ptr [esi + 0x190]
// 0051e6c6  8b08                 mov ecx, dword ptr [eax]
// 0051e6c8  56                   push esi
// 0051e6c9  ffd1                 call ecx
// 0051e6cb  83c404               add esp, 4
// 0051e6ce  85c0                 test eax, eax
// 0051e6d0  7422                 je 0x51e6f4
// 0051e6d2  8b9690010000         mov edx, dword ptr [esi + 0x190]
// 0051e6d8  807a1100             cmp byte ptr [edx + 0x11], 0
// 0051e6dc  74e2                 je 0x51e6c0
// 0051e6de  8b4618               mov eax, dword ptr [esi + 0x18]
// 0051e6e1  8b4818               mov ecx, dword ptr [eax + 0x18]
// 0051e6e4  56                   push esi
// 0051e6e5  ffd1                 call ecx
// 0051e6e7  56                   push esi
// 0051e6e8  e883cfffff           call 0x51b670
// 0051e6ed  83c408               add esp, 8
// 0051e6f0  b001                 mov al, 1
// 0051e6f2  5e                   pop esi
// 0051e6f3  c3                   ret 
// 0051e6f4  32c0                 xor al, al
// 0051e6f6  5e                   pop esi
// 0051e6f7  c3                   ret 
// library jpeg-6b/jdapimin.c (function _jpeg_finish_decompress)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdapimin.c
