// roc 2008-06 0051e560  unit: seg_00510000  size: 195 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0051e560
//
// 0051e560  56                   push esi
// 0051e561  8b742408             mov esi, dword ptr [esp + 8]
// 0051e565  8b4614               mov eax, dword ptr [esi + 0x14]
// 0051e568  57                   push edi
// 0051e569  0538ffffff           add eax, 0xffffff38
// 0051e56e  33ff                 xor edi, edi
// 0051e570  83f80a               cmp eax, 0xa
// 0051e573  776c                 ja 0x51e5e1
// 0051e575  0fb68018e65100       movzx eax, byte ptr [eax + 0x51e618]
// 0051e57c  ff248504e65100       jmp dword ptr [eax*4 + 0x51e604]
// 0051e583  8b8e90010000         mov ecx, dword ptr [esi + 0x190]
// 0051e589  8b5104               mov edx, dword ptr [ecx + 4]
// 0051e58c  56                   push esi
// 0051e58d  ffd2                 call edx
// 0051e58f  8b4618               mov eax, dword ptr [esi + 0x18]
// 0051e592  8b4808               mov ecx, dword ptr [eax + 8]
// 0051e595  56                   push esi
// 0051e596  ffd1                 call ecx
// 0051e598  83c408               add esp, 8
// 0051e59b  c74614c9000000       mov dword ptr [esi + 0x14], 0xc9
// 0051e5a2  8b9690010000         mov edx, dword ptr [esi + 0x190]
// 0051e5a8  8b02                 mov eax, dword ptr [edx]
// 0051e5aa  56                   push esi
// 0051e5ab  ffd0                 call eax
// 0051e5ad  8bf8                 mov edi, eax
// 0051e5af  83c404               add esp, 4
// 0051e5b2  83ff01               cmp edi, 1
// 0051e5b5  7545                 jne 0x51e5fc
// 0051e5b7  e8d4fdffff           call 0x51e390
// 0051e5bc  8bc7                 mov eax, edi
// 0051e5be  5f                   pop edi
// 0051e5bf  c74614ca000000       mov dword ptr [esi + 0x14], 0xca
// 0051e5c6  5e                   pop esi
// 0051e5c7  c3                   ret 
// 0051e5c8  5f                   pop edi
// 0051e5c9  b801000000           mov eax, 1
// 0051e5ce  5e                   pop esi
// 0051e5cf  c3                   ret 
// 0051e5d0  8b8e90010000         mov ecx, dword ptr [esi + 0x190]
// 0051e5d6  8b11                 mov edx, dword ptr [ecx]
// 0051e5d8  56                   push esi
// 0051e5d9  ffd2                 call edx
// 0051e5db  83c404               add esp, 4
// 0051e5de  5f                   pop edi
// 0051e5df  5e                   pop esi
// 0051e5e0  c3                   ret 
// 0051e5e1  8b06                 mov eax, dword ptr [esi]
// 0051e5e3  c7401414000000       mov dword ptr [eax + 0x14], 0x14
// 0051e5ea  8b0e                 mov ecx, dword ptr [esi]
// 0051e5ec  8b5614               mov edx, dword ptr [esi + 0x14]
// 0051e5ef  895118               mov dword ptr [ecx + 0x18], edx
// 0051e5f2  8b06                 mov eax, dword ptr [esi]
// 0051e5f4  8b08                 mov ecx, dword ptr [eax]
// 0051e5f6  56                   push esi
// 0051e5f7  ffd1                 call ecx
// 0051e5f9  83c404               add esp, 4
// 0051e5fc  8bc7                 mov eax, edi
// 0051e5fe  5f                   pop edi
// 0051e5ff  5e                   pop esi
// 0051e600  c3                   ret 
// 0051e601  8d4900               lea ecx, [ecx]
// 0051e604  83e551               and ebp, 0x51
// 0051e607  00a2e55100c8         add byte ptr [edx - 0x37ffae1b], ah
// 0051e60d  e551                 in eax, 0x51
// 0051e60f  00d0                 add al, dl
// 0051e611  e551                 in eax, 0x51
// 0051e613  00e1                 add cl, ah
// 0051e615  e551                 in eax, 0x51
// 0051e617  0000                 add byte ptr [eax], al
// 0051e619  0102                 add dword ptr [edx], eax
// 0051e61b  0303                 add eax, dword ptr [ebx]
// 0051e61d  0303                 add eax, dword ptr [ebx]
// 0051e61f  0303                 add eax, dword ptr [ebx]
// 0051e621  0403                 add al, 3
// library jpeg-6b/jdapimin.c (function _jpeg_consume_input)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdapimin.c
