// from server: 100% by auto
// roc 2012-06 00644160  unit: seg_00640000  size: 200 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00644160
//
// 00644160  56                   push esi
// 00644161  8b742408             mov esi, dword ptr [esp + 8]
// 00644165  8b4614               mov eax, dword ptr [esi + 0x14]
// 00644168  3dcd000000           cmp eax, 0xcd
// 0064416d  7407                 je 0x644176
// 0064416f  3dce000000           cmp eax, 0xce
// 00644174  7536                 jne 0x6441ac
// 00644176  807e4000             cmp byte ptr [esi + 0x40], 0
// 0064417a  7530                 jne 0x6441ac
// 0064417c  8b4678               mov eax, dword ptr [esi + 0x78]
// 0064417f  3b4660               cmp eax, dword ptr [esi + 0x60]
// 00644182  7313                 jae 0x644197
// 00644184  8b0e                 mov ecx, dword ptr [esi]
// 00644186  c7411443000000       mov dword ptr [ecx + 0x14], 0x43
// 0064418d  8b16                 mov edx, dword ptr [esi]
// 0064418f  8b02                 mov eax, dword ptr [edx]
// 00644191  56                   push esi
// 00644192  ffd0                 call eax
// 00644194  83c404               add esp, 4
// 00644197  8b8e80010000         mov ecx, dword ptr [esi + 0x180]
// 0064419d  8b5104               mov edx, dword ptr [ecx + 4]
// 006441a0  56                   push esi
// 006441a1  ffd2                 call edx
// 006441a3  c74614d2000000       mov dword ptr [esi + 0x14], 0xd2
// 006441aa  eb2f                 jmp 0x6441db
// 006441ac  3dcf000000           cmp eax, 0xcf
// 006441b1  7509                 jne 0x6441bc
// 006441b3  c74614d2000000       mov dword ptr [esi + 0x14], 0xd2
// 006441ba  eb22                 jmp 0x6441de
// 006441bc  3dd2000000           cmp eax, 0xd2
// 006441c1  741b                 je 0x6441de
// 006441c3  8b06                 mov eax, dword ptr [esi]
// 006441c5  c7401414000000       mov dword ptr [eax + 0x14], 0x14
// 006441cc  8b0e                 mov ecx, dword ptr [esi]
// 006441ce  8b5614               mov edx, dword ptr [esi + 0x14]
// 006441d1  895118               mov dword ptr [ecx + 0x18], edx
// 006441d4  8b06                 mov eax, dword ptr [esi]
// 006441d6  8b08                 mov ecx, dword ptr [eax]
// 006441d8  56                   push esi
// 006441d9  ffd1                 call ecx
// 006441db  83c404               add esp, 4
// 006441de  8b9690010000         mov edx, dword ptr [esi + 0x190]
// 006441e4  807a1100             cmp byte ptr [edx + 0x11], 0
// 006441e8  7524                 jne 0x64420e
// 006441ea  8d9b00000000         lea ebx, [ebx]
// 006441f0  8b8690010000         mov eax, dword ptr [esi + 0x190]
// 006441f6  8b08                 mov ecx, dword ptr [eax]
// 006441f8  56                   push esi
// 006441f9  ffd1                 call ecx
// 006441fb  83c404               add esp, 4
// 006441fe  85c0                 test eax, eax
// 00644200  7422                 je 0x644224
// 00644202  8b9690010000         mov edx, dword ptr [esi + 0x190]
// 00644208  807a1100             cmp byte ptr [edx + 0x11], 0
// 0064420c  74e2                 je 0x6441f0
// 0064420e  8b4618               mov eax, dword ptr [esi + 0x18]
// 00644211  8b4818               mov ecx, dword ptr [eax + 0x18]
// 00644214  56                   push esi
// 00644215  ffd1                 call ecx
// 00644217  56                   push esi
// 00644218  e8e3f10000           call 0x653400
// 0064421d  83c408               add esp, 8
// 00644220  b001                 mov al, 1
// 00644222  5e                   pop esi
// 00644223  c3                   ret 
// 00644224  32c0                 xor al, al
// 00644226  5e                   pop esi
// 00644227  c3                   ret 
// library jpeg-6b/jdapimin.c (function _jpeg_finish_decompress)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdapimin.c
