// roc 2009-12 00624140  unit: seg_00620000  size: 349 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00624140
//
// 00624140  83ec24               sub esp, 0x24
// 00624143  56                   push esi
// 00624144  57                   push edi
// 00624145  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 00624149  83bfbc00000000       cmp dword ptr [edi + 0xbc], 0
// 00624150  8bb75c010000         mov esi, dword ptr [edi + 0x15c]
// 00624156  8b4718               mov eax, dword ptr [edi + 0x18]
// 00624159  8b08                 mov ecx, dword ptr [eax]
// 0062415b  8b5004               mov edx, dword ptr [eax + 4]
// 0062415e  8b460c               mov eax, dword ptr [esi + 0xc]
// 00624161  894c2408             mov dword ptr [esp + 8], ecx
// 00624165  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00624168  8954240c             mov dword ptr [esp + 0xc], edx
// 0062416c  8b5614               mov edx, dword ptr [esi + 0x14]
// 0062416f  89442410             mov dword ptr [esp + 0x10], eax
// 00624173  8b4618               mov eax, dword ptr [esi + 0x18]
// 00624176  894c2414             mov dword ptr [esp + 0x14], ecx
// 0062417a  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 0062417d  89542418             mov dword ptr [esp + 0x18], edx
// 00624181  8b5620               mov edx, dword ptr [esi + 0x20]
// 00624184  8944241c             mov dword ptr [esp + 0x1c], eax
// 00624188  894c2420             mov dword ptr [esp + 0x20], ecx
// 0062418c  89542424             mov dword ptr [esp + 0x24], edx
// 00624190  897c2428             mov dword ptr [esp + 0x28], edi
// 00624194  7420                 je 0x6241b6
// 00624196  837e2400             cmp dword ptr [esi + 0x24], 0
// 0062419a  751a                 jne 0x6241b6
// 0062419c  8b4628               mov eax, dword ptr [esi + 0x28]
// 0062419f  50                   push eax
// 006241a0  8d44240c             lea eax, [esp + 0xc]
// 006241a4  e8d7feffff           call 0x624080
// 006241a9  83c404               add esp, 4
// 006241ac  84c0                 test al, al
// 006241ae  7506                 jne 0x6241b6
// 006241b0  5f                   pop edi
// 006241b1  5e                   pop esi
// 006241b2  83c424               add esp, 0x24
// 006241b5  c3                   ret 
// 006241b6  53                   push ebx
// 006241b7  33db                 xor ebx, ebx
// 006241b9  399f00010000         cmp dword ptr [edi + 0x100], ebx
// 006241bf  55                   push ebp
// 006241c0  7e6a                 jle 0x62422c
// 006241c2  8d8f04010000         lea ecx, [edi + 0x104]
// 006241c8  894c2438             mov dword ptr [esp + 0x38], ecx
// 006241cc  8d642400             lea esp, [esp]
// 006241d0  8b542438             mov edx, dword ptr [esp + 0x38]
// 006241d4  8b02                 mov eax, dword ptr [edx]
// 006241d6  8b8c87e8000000       mov ecx, dword ptr [edi + eax*4 + 0xe8]
// 006241dd  8d6c8420             lea ebp, [esp + eax*4 + 0x20]
// 006241e1  8b4118               mov eax, dword ptr [ecx + 0x18]
// 006241e4  8b54863c             mov edx, dword ptr [esi + eax*4 + 0x3c]
// 006241e8  8b4114               mov eax, dword ptr [ecx + 0x14]
// 006241eb  8b4c862c             mov ecx, dword ptr [esi + eax*4 + 0x2c]
// 006241ef  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 006241f3  52                   push edx
// 006241f4  8b5500               mov edx, dword ptr [ebp]
// 006241f7  51                   push ecx
// 006241f8  8b0c98               mov ecx, dword ptr [eax + ebx*4]
// 006241fb  52                   push edx
// 006241fc  51                   push ecx
// 006241fd  8d442420             lea eax, [esp + 0x20]
// 00624201  e8fafcffff           call 0x623f00
// 00624206  83c410               add esp, 0x10
// 00624209  84c0                 test al, al
// 0062420b  0f8482000000         je 0x624293
// 00624211  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 00624215  8b049a               mov eax, dword ptr [edx + ebx*4]
// 00624218  0fbf08               movsx ecx, word ptr [eax]
// 0062421b  8344243804           add dword ptr [esp + 0x38], 4
// 00624220  43                   inc ebx
// 00624221  3b9f00010000         cmp ebx, dword ptr [edi + 0x100]
// 00624227  894d00               mov dword ptr [ebp], ecx
// 0062422a  7ca4                 jl 0x6241d0
// 0062422c  8b5718               mov edx, dword ptr [edi + 0x18]
// 0062422f  8b442410             mov eax, dword ptr [esp + 0x10]
// 00624233  8902                 mov dword ptr [edx], eax
// 00624235  8b4f18               mov ecx, dword ptr [edi + 0x18]
// 00624238  8b542414             mov edx, dword ptr [esp + 0x14]
// 0062423c  8b442418             mov eax, dword ptr [esp + 0x18]
// 00624240  895104               mov dword ptr [ecx + 4], edx
// 00624243  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00624247  8b542420             mov edx, dword ptr [esp + 0x20]
// 0062424b  89460c               mov dword ptr [esi + 0xc], eax
// 0062424e  8b442424             mov eax, dword ptr [esp + 0x24]
// 00624252  894e10               mov dword ptr [esi + 0x10], ecx
// 00624255  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00624259  895614               mov dword ptr [esi + 0x14], edx
// 0062425c  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00624260  894618               mov dword ptr [esi + 0x18], eax
// 00624263  894e1c               mov dword ptr [esi + 0x1c], ecx
// 00624266  895620               mov dword ptr [esi + 0x20], edx
// 00624269  8bbfbc000000         mov edi, dword ptr [edi + 0xbc]
// 0062426f  85ff                 test edi, edi
// 00624271  7416                 je 0x624289
// 00624273  837e2400             cmp dword ptr [esi + 0x24], 0
// 00624277  750d                 jne 0x624286
// 00624279  8b4628               mov eax, dword ptr [esi + 0x28]
// 0062427c  40                   inc eax
// 0062427d  83e007               and eax, 7
// 00624280  897e24               mov dword ptr [esi + 0x24], edi
// 00624283  894628               mov dword ptr [esi + 0x28], eax
// 00624286  ff4e24               dec dword ptr [esi + 0x24]
// 00624289  5d                   pop ebp
// 0062428a  5b                   pop ebx
// 0062428b  5f                   pop edi
// 0062428c  b001                 mov al, 1
// 0062428e  5e                   pop esi
// 0062428f  83c424               add esp, 0x24
// 00624292  c3                   ret 
// 00624293  5d                   pop ebp
// 00624294  5b                   pop ebx
// 00624295  5f                   pop edi
// 00624296  32c0                 xor al, al
// 00624298  5e                   pop esi
// 00624299  83c424               add esp, 0x24
// 0062429c  c3                   ret 
// library jpeg-6b/jchuff.c (function _encode_mcu_huff)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jchuff.c
