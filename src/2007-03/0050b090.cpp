// roc 2007-03 0050b090  unit: seg_00500000  size: 200 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0050b090
//
// 0050b090  56                   push esi
// 0050b091  8b742408             mov esi, dword ptr [esp + 8]
// 0050b095  8b4614               mov eax, dword ptr [esi + 0x14]
// 0050b098  3dcd000000           cmp eax, 0xcd
// 0050b09d  7407                 je 0x50b0a6
// 0050b09f  3dce000000           cmp eax, 0xce
// 0050b0a4  7536                 jne 0x50b0dc
// 0050b0a6  807e4000             cmp byte ptr [esi + 0x40], 0
// 0050b0aa  7530                 jne 0x50b0dc
// 0050b0ac  8b4678               mov eax, dword ptr [esi + 0x78]
// 0050b0af  3b4660               cmp eax, dword ptr [esi + 0x60]
// 0050b0b2  7313                 jae 0x50b0c7
// 0050b0b4  8b0e                 mov ecx, dword ptr [esi]
// 0050b0b6  c7411443000000       mov dword ptr [ecx + 0x14], 0x43
// 0050b0bd  8b16                 mov edx, dword ptr [esi]
// 0050b0bf  8b02                 mov eax, dword ptr [edx]
// 0050b0c1  56                   push esi
// 0050b0c2  ffd0                 call eax
// 0050b0c4  83c404               add esp, 4
// 0050b0c7  8b8e80010000         mov ecx, dword ptr [esi + 0x180]
// 0050b0cd  8b5104               mov edx, dword ptr [ecx + 4]
// 0050b0d0  56                   push esi
// 0050b0d1  ffd2                 call edx
// 0050b0d3  c74614d2000000       mov dword ptr [esi + 0x14], 0xd2
// 0050b0da  eb2f                 jmp 0x50b10b
// 0050b0dc  3dcf000000           cmp eax, 0xcf
// 0050b0e1  7509                 jne 0x50b0ec
// 0050b0e3  c74614d2000000       mov dword ptr [esi + 0x14], 0xd2
// 0050b0ea  eb22                 jmp 0x50b10e
// 0050b0ec  3dd2000000           cmp eax, 0xd2
// 0050b0f1  741b                 je 0x50b10e
// 0050b0f3  8b06                 mov eax, dword ptr [esi]
// 0050b0f5  c7401414000000       mov dword ptr [eax + 0x14], 0x14
// 0050b0fc  8b0e                 mov ecx, dword ptr [esi]
// 0050b0fe  8b5614               mov edx, dword ptr [esi + 0x14]
// 0050b101  895118               mov dword ptr [ecx + 0x18], edx
// 0050b104  8b06                 mov eax, dword ptr [esi]
// 0050b106  8b08                 mov ecx, dword ptr [eax]
// 0050b108  56                   push esi
// 0050b109  ffd1                 call ecx
// 0050b10b  83c404               add esp, 4
// 0050b10e  8b9690010000         mov edx, dword ptr [esi + 0x190]
// 0050b114  807a1100             cmp byte ptr [edx + 0x11], 0
// 0050b118  7524                 jne 0x50b13e
// 0050b11a  8d9b00000000         lea ebx, [ebx]
// 0050b120  8b8690010000         mov eax, dword ptr [esi + 0x190]
// 0050b126  8b08                 mov ecx, dword ptr [eax]
// 0050b128  56                   push esi
// 0050b129  ffd1                 call ecx
// 0050b12b  83c404               add esp, 4
// 0050b12e  85c0                 test eax, eax
// 0050b130  7422                 je 0x50b154
// 0050b132  8b9690010000         mov edx, dword ptr [esi + 0x190]
// 0050b138  807a1100             cmp byte ptr [edx + 0x11], 0
// 0050b13c  74e2                 je 0x50b120
// 0050b13e  8b4618               mov eax, dword ptr [esi + 0x18]
// 0050b141  8b4818               mov ecx, dword ptr [eax + 0x18]
// 0050b144  56                   push esi
// 0050b145  ffd1                 call ecx
// 0050b147  56                   push esi
// 0050b148  e8439d0000           call 0x514e90
// 0050b14d  83c408               add esp, 8
// 0050b150  b001                 mov al, 1
// 0050b152  5e                   pop esi
// 0050b153  c3                   ret 
// 0050b154  32c0                 xor al, al
// 0050b156  5e                   pop esi
// 0050b157  c3                   ret 
// library jpeg-6b/jdapimin.c (function _jpeg_finish_decompress)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdapimin.c
