// from server: 100% by auto
// roc 2007-08 00515880  unit: seg_00510000  size: 200 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00515880
//
// 00515880  56                   push esi
// 00515881  8b742408             mov esi, dword ptr [esp + 8]
// 00515885  8b4614               mov eax, dword ptr [esi + 0x14]
// 00515888  3dcd000000           cmp eax, 0xcd
// 0051588d  7407                 je 0x515896
// 0051588f  3dce000000           cmp eax, 0xce
// 00515894  7536                 jne 0x5158cc
// 00515896  807e4000             cmp byte ptr [esi + 0x40], 0
// 0051589a  7530                 jne 0x5158cc
// 0051589c  8b4678               mov eax, dword ptr [esi + 0x78]
// 0051589f  3b4660               cmp eax, dword ptr [esi + 0x60]
// 005158a2  7313                 jae 0x5158b7
// 005158a4  8b0e                 mov ecx, dword ptr [esi]
// 005158a6  c7411443000000       mov dword ptr [ecx + 0x14], 0x43
// 005158ad  8b16                 mov edx, dword ptr [esi]
// 005158af  8b02                 mov eax, dword ptr [edx]
// 005158b1  56                   push esi
// 005158b2  ffd0                 call eax
// 005158b4  83c404               add esp, 4
// 005158b7  8b8e80010000         mov ecx, dword ptr [esi + 0x180]
// 005158bd  8b5104               mov edx, dword ptr [ecx + 4]
// 005158c0  56                   push esi
// 005158c1  ffd2                 call edx
// 005158c3  c74614d2000000       mov dword ptr [esi + 0x14], 0xd2
// 005158ca  eb2f                 jmp 0x5158fb
// 005158cc  3dcf000000           cmp eax, 0xcf
// 005158d1  7509                 jne 0x5158dc
// 005158d3  c74614d2000000       mov dword ptr [esi + 0x14], 0xd2
// 005158da  eb22                 jmp 0x5158fe
// 005158dc  3dd2000000           cmp eax, 0xd2
// 005158e1  741b                 je 0x5158fe
// 005158e3  8b06                 mov eax, dword ptr [esi]
// 005158e5  c7401414000000       mov dword ptr [eax + 0x14], 0x14
// 005158ec  8b0e                 mov ecx, dword ptr [esi]
// 005158ee  8b5614               mov edx, dword ptr [esi + 0x14]
// 005158f1  895118               mov dword ptr [ecx + 0x18], edx
// 005158f4  8b06                 mov eax, dword ptr [esi]
// 005158f6  8b08                 mov ecx, dword ptr [eax]
// 005158f8  56                   push esi
// 005158f9  ffd1                 call ecx
// 005158fb  83c404               add esp, 4
// 005158fe  8b9690010000         mov edx, dword ptr [esi + 0x190]
// 00515904  807a1100             cmp byte ptr [edx + 0x11], 0
// 00515908  7524                 jne 0x51592e
// 0051590a  8d9b00000000         lea ebx, [ebx]
// 00515910  8b8690010000         mov eax, dword ptr [esi + 0x190]
// 00515916  8b08                 mov ecx, dword ptr [eax]
// 00515918  56                   push esi
// 00515919  ffd1                 call ecx
// 0051591b  83c404               add esp, 4
// 0051591e  85c0                 test eax, eax
// 00515920  7422                 je 0x515944
// 00515922  8b9690010000         mov edx, dword ptr [esi + 0x190]
// 00515928  807a1100             cmp byte ptr [edx + 0x11], 0
// 0051592c  74e2                 je 0x515910
// 0051592e  8b4618               mov eax, dword ptr [esi + 0x18]
// 00515931  8b4818               mov ecx, dword ptr [eax + 0x18]
// 00515934  56                   push esi
// 00515935  ffd1                 call ecx
// 00515937  56                   push esi
// 00515938  e873dfffff           call 0x5138b0
// 0051593d  83c408               add esp, 8
// 00515940  b001                 mov al, 1
// 00515942  5e                   pop esi
// 00515943  c3                   ret 
// 00515944  32c0                 xor al, al
// 00515946  5e                   pop esi
// 00515947  c3                   ret 
// library jpeg-6b/jdapimin.c (function _jpeg_finish_decompress)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdapimin.c
