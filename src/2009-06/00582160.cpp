// roc 2009-06 00582160  unit: seg_00580000  size: 200 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00582160
//
// 00582160  56                   push esi
// 00582161  8b742408             mov esi, dword ptr [esp + 8]
// 00582165  8b4614               mov eax, dword ptr [esi + 0x14]
// 00582168  3dcd000000           cmp eax, 0xcd
// 0058216d  7407                 je 0x582176
// 0058216f  3dce000000           cmp eax, 0xce
// 00582174  7536                 jne 0x5821ac
// 00582176  807e4000             cmp byte ptr [esi + 0x40], 0
// 0058217a  7530                 jne 0x5821ac
// 0058217c  8b4678               mov eax, dword ptr [esi + 0x78]
// 0058217f  3b4660               cmp eax, dword ptr [esi + 0x60]
// 00582182  7313                 jae 0x582197
// 00582184  8b0e                 mov ecx, dword ptr [esi]
// 00582186  c7411443000000       mov dword ptr [ecx + 0x14], 0x43
// 0058218d  8b16                 mov edx, dword ptr [esi]
// 0058218f  8b02                 mov eax, dword ptr [edx]
// 00582191  56                   push esi
// 00582192  ffd0                 call eax
// 00582194  83c404               add esp, 4
// 00582197  8b8e80010000         mov ecx, dword ptr [esi + 0x180]
// 0058219d  8b5104               mov edx, dword ptr [ecx + 4]
// 005821a0  56                   push esi
// 005821a1  ffd2                 call edx
// 005821a3  c74614d2000000       mov dword ptr [esi + 0x14], 0xd2
// 005821aa  eb2f                 jmp 0x5821db
// 005821ac  3dcf000000           cmp eax, 0xcf
// 005821b1  7509                 jne 0x5821bc
// 005821b3  c74614d2000000       mov dword ptr [esi + 0x14], 0xd2
// 005821ba  eb22                 jmp 0x5821de
// 005821bc  3dd2000000           cmp eax, 0xd2
// 005821c1  741b                 je 0x5821de
// 005821c3  8b06                 mov eax, dword ptr [esi]
// 005821c5  c7401414000000       mov dword ptr [eax + 0x14], 0x14
// 005821cc  8b0e                 mov ecx, dword ptr [esi]
// 005821ce  8b5614               mov edx, dword ptr [esi + 0x14]
// 005821d1  895118               mov dword ptr [ecx + 0x18], edx
// 005821d4  8b06                 mov eax, dword ptr [esi]
// 005821d6  8b08                 mov ecx, dword ptr [eax]
// 005821d8  56                   push esi
// 005821d9  ffd1                 call ecx
// 005821db  83c404               add esp, 4
// 005821de  8b9690010000         mov edx, dword ptr [esi + 0x190]
// 005821e4  807a1100             cmp byte ptr [edx + 0x11], 0
// 005821e8  7524                 jne 0x58220e
// 005821ea  8d9b00000000         lea ebx, [ebx]
// 005821f0  8b8690010000         mov eax, dword ptr [esi + 0x190]
// 005821f6  8b08                 mov ecx, dword ptr [eax]
// 005821f8  56                   push esi
// 005821f9  ffd1                 call ecx
// 005821fb  83c404               add esp, 4
// 005821fe  85c0                 test eax, eax
// 00582200  7422                 je 0x582224
// 00582202  8b9690010000         mov edx, dword ptr [esi + 0x190]
// 00582208  807a1100             cmp byte ptr [edx + 0x11], 0
// 0058220c  74e2                 je 0x5821f0
// 0058220e  8b4618               mov eax, dword ptr [esi + 0x18]
// 00582211  8b4818               mov ecx, dword ptr [eax + 0x18]
// 00582214  56                   push esi
// 00582215  ffd1                 call ecx
// 00582217  56                   push esi
// 00582218  e8f3cdffff           call 0x57f010
// 0058221d  83c408               add esp, 8
// 00582220  b001                 mov al, 1
// 00582222  5e                   pop esi
// 00582223  c3                   ret 
// 00582224  32c0                 xor al, al
// 00582226  5e                   pop esi
// 00582227  c3                   ret 
// library jpeg-6b/jdapimin.c (function _jpeg_finish_decompress)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdapimin.c
