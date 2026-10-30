// roc 2009-12 00603e40  unit: seg_00600000  size: 195 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00603e40
//
// 00603e40  56                   push esi
// 00603e41  8b742408             mov esi, dword ptr [esp + 8]
// 00603e45  8b4614               mov eax, dword ptr [esi + 0x14]
// 00603e48  57                   push edi
// 00603e49  0538ffffff           add eax, 0xffffff38
// 00603e4e  33ff                 xor edi, edi
// 00603e50  83f80a               cmp eax, 0xa
// 00603e53  776c                 ja 0x603ec1
// 00603e55  0fb680f83e6000       movzx eax, byte ptr [eax + 0x603ef8]
// 00603e5c  ff2485e43e6000       jmp dword ptr [eax*4 + 0x603ee4]
// 00603e63  8b8e90010000         mov ecx, dword ptr [esi + 0x190]
// 00603e69  8b5104               mov edx, dword ptr [ecx + 4]
// 00603e6c  56                   push esi
// 00603e6d  ffd2                 call edx
// 00603e6f  8b4618               mov eax, dword ptr [esi + 0x18]
// 00603e72  8b4808               mov ecx, dword ptr [eax + 8]
// 00603e75  56                   push esi
// 00603e76  ffd1                 call ecx
// 00603e78  83c408               add esp, 8
// 00603e7b  c74614c9000000       mov dword ptr [esi + 0x14], 0xc9
// 00603e82  8b9690010000         mov edx, dword ptr [esi + 0x190]
// 00603e88  8b02                 mov eax, dword ptr [edx]
// 00603e8a  56                   push esi
// 00603e8b  ffd0                 call eax
// 00603e8d  8bf8                 mov edi, eax
// 00603e8f  83c404               add esp, 4
// 00603e92  83ff01               cmp edi, 1
// 00603e95  7545                 jne 0x603edc
// 00603e97  e8d4fdffff           call 0x603c70
// 00603e9c  8bc7                 mov eax, edi
// 00603e9e  5f                   pop edi
// 00603e9f  c74614ca000000       mov dword ptr [esi + 0x14], 0xca
// 00603ea6  5e                   pop esi
// 00603ea7  c3                   ret 
// 00603ea8  5f                   pop edi
// 00603ea9  b801000000           mov eax, 1
// 00603eae  5e                   pop esi
// 00603eaf  c3                   ret 
// 00603eb0  8b8e90010000         mov ecx, dword ptr [esi + 0x190]
// 00603eb6  8b11                 mov edx, dword ptr [ecx]
// 00603eb8  56                   push esi
// 00603eb9  ffd2                 call edx
// 00603ebb  83c404               add esp, 4
// 00603ebe  5f                   pop edi
// 00603ebf  5e                   pop esi
// 00603ec0  c3                   ret 
// 00603ec1  8b06                 mov eax, dword ptr [esi]
// 00603ec3  c7401414000000       mov dword ptr [eax + 0x14], 0x14
// 00603eca  8b0e                 mov ecx, dword ptr [esi]
// 00603ecc  8b5614               mov edx, dword ptr [esi + 0x14]
// 00603ecf  895118               mov dword ptr [ecx + 0x18], edx
// 00603ed2  8b06                 mov eax, dword ptr [esi]
// 00603ed4  8b08                 mov ecx, dword ptr [eax]
// 00603ed6  56                   push esi
// 00603ed7  ffd1                 call ecx
// 00603ed9  83c404               add esp, 4
// 00603edc  8bc7                 mov eax, edi
// 00603ede  5f                   pop edi
// 00603edf  5e                   pop esi
// 00603ee0  c3                   ret 
// 00603ee1  8d4900               lea ecx, [ecx]
// 00603ee4  633e                 arpl word ptr [esi], di
// 00603ee6  60                   pushal 
// 00603ee7  00823e6000a8         add byte ptr [edx - 0x57ff9fc2], al
// 00603eed  3e60                 pushal 
// 00603eef  00b03e6000c1         add byte ptr [eax - 0x3eff9fc2], dh
// 00603ef5  3e60                 pushal 
// 00603ef7  0000                 add byte ptr [eax], al
// 00603ef9  0102                 add dword ptr [edx], eax
// 00603efb  0303                 add eax, dword ptr [ebx]
// 00603efd  0303                 add eax, dword ptr [ebx]
// 00603eff  0303                 add eax, dword ptr [ebx]
// 00603f01  0403                 add al, 3
// library jpeg-6b/jdapimin.c (function _jpeg_consume_input)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdapimin.c
