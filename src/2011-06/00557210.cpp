// from server: 100% by auto
// roc 2011-06 00557210  unit: seg_00550000  size: 195 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00557210
//
// 00557210  56                   push esi
// 00557211  8b742408             mov esi, dword ptr [esp + 8]
// 00557215  8b4614               mov eax, dword ptr [esi + 0x14]
// 00557218  57                   push edi
// 00557219  0538ffffff           add eax, 0xffffff38
// 0055721e  33ff                 xor edi, edi
// 00557220  83f80a               cmp eax, 0xa
// 00557223  776c                 ja 0x557291
// 00557225  0fb680c8725500       movzx eax, byte ptr [eax + 0x5572c8]
// 0055722c  ff2485b4725500       jmp dword ptr [eax*4 + 0x5572b4]
// 00557233  8b8e90010000         mov ecx, dword ptr [esi + 0x190]
// 00557239  8b5104               mov edx, dword ptr [ecx + 4]
// 0055723c  56                   push esi
// 0055723d  ffd2                 call edx
// 0055723f  8b4618               mov eax, dword ptr [esi + 0x18]
// 00557242  8b4808               mov ecx, dword ptr [eax + 8]
// 00557245  56                   push esi
// 00557246  ffd1                 call ecx
// 00557248  83c408               add esp, 8
// 0055724b  c74614c9000000       mov dword ptr [esi + 0x14], 0xc9
// 00557252  8b9690010000         mov edx, dword ptr [esi + 0x190]
// 00557258  8b02                 mov eax, dword ptr [edx]
// 0055725a  56                   push esi
// 0055725b  ffd0                 call eax
// 0055725d  8bf8                 mov edi, eax
// 0055725f  83c404               add esp, 4
// 00557262  83ff01               cmp edi, 1
// 00557265  7545                 jne 0x5572ac
// 00557267  e8d4fdffff           call 0x557040
// 0055726c  8bc7                 mov eax, edi
// 0055726e  5f                   pop edi
// 0055726f  c74614ca000000       mov dword ptr [esi + 0x14], 0xca
// 00557276  5e                   pop esi
// 00557277  c3                   ret 
// 00557278  5f                   pop edi
// 00557279  b801000000           mov eax, 1
// 0055727e  5e                   pop esi
// 0055727f  c3                   ret 
// 00557280  8b8e90010000         mov ecx, dword ptr [esi + 0x190]
// 00557286  8b11                 mov edx, dword ptr [ecx]
// 00557288  56                   push esi
// 00557289  ffd2                 call edx
// 0055728b  83c404               add esp, 4
// 0055728e  5f                   pop edi
// 0055728f  5e                   pop esi
// 00557290  c3                   ret 
// 00557291  8b06                 mov eax, dword ptr [esi]
// 00557293  c7401414000000       mov dword ptr [eax + 0x14], 0x14
// 0055729a  8b0e                 mov ecx, dword ptr [esi]
// 0055729c  8b5614               mov edx, dword ptr [esi + 0x14]
// 0055729f  895118               mov dword ptr [ecx + 0x18], edx
// 005572a2  8b06                 mov eax, dword ptr [esi]
// 005572a4  8b08                 mov ecx, dword ptr [eax]
// 005572a6  56                   push esi
// 005572a7  ffd1                 call ecx
// 005572a9  83c404               add esp, 4
// 005572ac  8bc7                 mov eax, edi
// 005572ae  5f                   pop edi
// 005572af  5e                   pop esi
// 005572b0  c3                   ret 
// 005572b1  8d4900               lea ecx, [ecx]
// 005572b4  337255               xor esi, dword ptr [edx + 0x55]
// 005572b7  005272               add byte ptr [edx + 0x72], dl
// 005572ba  55                   push ebp
// 005572bb  007872               add byte ptr [eax + 0x72], bh
// 005572be  55                   push ebp
// 005572bf  008072550091         add byte ptr [eax - 0x6effaa8e], al
// 005572c5  7255                 jb 0x55731c
// 005572c7  0000                 add byte ptr [eax], al
// 005572c9  0102                 add dword ptr [edx], eax
// 005572cb  0303                 add eax, dword ptr [ebx]
// 005572cd  0303                 add eax, dword ptr [ebx]
// 005572cf  0303                 add eax, dword ptr [ebx]
// 005572d1  0403                 add al, 3
// library jpeg-6b/jdapimin.c (function _jpeg_consume_input)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdapimin.c
