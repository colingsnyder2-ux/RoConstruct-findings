// roc 2011-06 005572e0  unit: seg_00550000  size: 200 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005572e0
//
// 005572e0  56                   push esi
// 005572e1  8b742408             mov esi, dword ptr [esp + 8]
// 005572e5  8b4614               mov eax, dword ptr [esi + 0x14]
// 005572e8  3dcd000000           cmp eax, 0xcd
// 005572ed  7407                 je 0x5572f6
// 005572ef  3dce000000           cmp eax, 0xce
// 005572f4  7536                 jne 0x55732c
// 005572f6  807e4000             cmp byte ptr [esi + 0x40], 0
// 005572fa  7530                 jne 0x55732c
// 005572fc  8b4678               mov eax, dword ptr [esi + 0x78]
// 005572ff  3b4660               cmp eax, dword ptr [esi + 0x60]
// 00557302  7313                 jae 0x557317
// 00557304  8b0e                 mov ecx, dword ptr [esi]
// 00557306  c7411443000000       mov dword ptr [ecx + 0x14], 0x43
// 0055730d  8b16                 mov edx, dword ptr [esi]
// 0055730f  8b02                 mov eax, dword ptr [edx]
// 00557311  56                   push esi
// 00557312  ffd0                 call eax
// 00557314  83c404               add esp, 4
// 00557317  8b8e80010000         mov ecx, dword ptr [esi + 0x180]
// 0055731d  8b5104               mov edx, dword ptr [ecx + 4]
// 00557320  56                   push esi
// 00557321  ffd2                 call edx
// 00557323  c74614d2000000       mov dword ptr [esi + 0x14], 0xd2
// 0055732a  eb2f                 jmp 0x55735b
// 0055732c  3dcf000000           cmp eax, 0xcf
// 00557331  7509                 jne 0x55733c
// 00557333  c74614d2000000       mov dword ptr [esi + 0x14], 0xd2
// 0055733a  eb22                 jmp 0x55735e
// 0055733c  3dd2000000           cmp eax, 0xd2
// 00557341  741b                 je 0x55735e
// 00557343  8b06                 mov eax, dword ptr [esi]
// 00557345  c7401414000000       mov dword ptr [eax + 0x14], 0x14
// 0055734c  8b0e                 mov ecx, dword ptr [esi]
// 0055734e  8b5614               mov edx, dword ptr [esi + 0x14]
// 00557351  895118               mov dword ptr [ecx + 0x18], edx
// 00557354  8b06                 mov eax, dword ptr [esi]
// 00557356  8b08                 mov ecx, dword ptr [eax]
// 00557358  56                   push esi
// 00557359  ffd1                 call ecx
// 0055735b  83c404               add esp, 4
// 0055735e  8b9690010000         mov edx, dword ptr [esi + 0x190]
// 00557364  807a1100             cmp byte ptr [edx + 0x11], 0
// 00557368  7524                 jne 0x55738e
// 0055736a  8d9b00000000         lea ebx, [ebx]
// 00557370  8b8690010000         mov eax, dword ptr [esi + 0x190]
// 00557376  8b08                 mov ecx, dword ptr [eax]
// 00557378  56                   push esi
// 00557379  ffd1                 call ecx
// 0055737b  83c404               add esp, 4
// 0055737e  85c0                 test eax, eax
// 00557380  7422                 je 0x5573a4
// 00557382  8b9690010000         mov edx, dword ptr [esi + 0x190]
// 00557388  807a1100             cmp byte ptr [edx + 0x11], 0
// 0055738c  74e2                 je 0x557370
// 0055738e  8b4618               mov eax, dword ptr [esi + 0x18]
// 00557391  8b4818               mov ecx, dword ptr [eax + 0x18]
// 00557394  56                   push esi
// 00557395  ffd1                 call ecx
// 00557397  56                   push esi
// 00557398  e853090100           call 0x567cf0
// 0055739d  83c408               add esp, 8
// 005573a0  b001                 mov al, 1
// 005573a2  5e                   pop esi
// 005573a3  c3                   ret 
// 005573a4  32c0                 xor al, al
// 005573a6  5e                   pop esi
// 005573a7  c3                   ret 
// library jpeg-6b/jdapimin.c (function _jpeg_finish_decompress)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdapimin.c
