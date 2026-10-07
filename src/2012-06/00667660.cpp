// roc 2012-06 00667660  unit: seg_00660000  size: 349 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00667660
//
// 00667660  83ec24               sub esp, 0x24
// 00667663  56                   push esi
// 00667664  57                   push edi
// 00667665  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 00667669  83bfbc00000000       cmp dword ptr [edi + 0xbc], 0
// 00667670  8bb75c010000         mov esi, dword ptr [edi + 0x15c]
// 00667676  8b4718               mov eax, dword ptr [edi + 0x18]
// 00667679  8b08                 mov ecx, dword ptr [eax]
// 0066767b  8b5004               mov edx, dword ptr [eax + 4]
// 0066767e  8b460c               mov eax, dword ptr [esi + 0xc]
// 00667681  894c2408             mov dword ptr [esp + 8], ecx
// 00667685  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00667688  8954240c             mov dword ptr [esp + 0xc], edx
// 0066768c  8b5614               mov edx, dword ptr [esi + 0x14]
// 0066768f  89442410             mov dword ptr [esp + 0x10], eax
// 00667693  8b4618               mov eax, dword ptr [esi + 0x18]
// 00667696  894c2414             mov dword ptr [esp + 0x14], ecx
// 0066769a  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 0066769d  89542418             mov dword ptr [esp + 0x18], edx
// 006676a1  8b5620               mov edx, dword ptr [esi + 0x20]
// 006676a4  8944241c             mov dword ptr [esp + 0x1c], eax
// 006676a8  894c2420             mov dword ptr [esp + 0x20], ecx
// 006676ac  89542424             mov dword ptr [esp + 0x24], edx
// 006676b0  897c2428             mov dword ptr [esp + 0x28], edi
// 006676b4  7420                 je 0x6676d6
// 006676b6  837e2400             cmp dword ptr [esi + 0x24], 0
// 006676ba  751a                 jne 0x6676d6
// 006676bc  8b4628               mov eax, dword ptr [esi + 0x28]
// 006676bf  50                   push eax
// 006676c0  8d44240c             lea eax, [esp + 0xc]
// 006676c4  e8d7feffff           call 0x6675a0
// 006676c9  83c404               add esp, 4
// 006676cc  84c0                 test al, al
// 006676ce  7506                 jne 0x6676d6
// 006676d0  5f                   pop edi
// 006676d1  5e                   pop esi
// 006676d2  83c424               add esp, 0x24
// 006676d5  c3                   ret 
// 006676d6  53                   push ebx
// 006676d7  33db                 xor ebx, ebx
// 006676d9  399f00010000         cmp dword ptr [edi + 0x100], ebx
// 006676df  55                   push ebp
// 006676e0  7e6a                 jle 0x66774c
// 006676e2  8d8f04010000         lea ecx, [edi + 0x104]
// 006676e8  894c2438             mov dword ptr [esp + 0x38], ecx
// 006676ec  8d642400             lea esp, [esp]
// 006676f0  8b542438             mov edx, dword ptr [esp + 0x38]
// 006676f4  8b02                 mov eax, dword ptr [edx]
// 006676f6  8b8c87e8000000       mov ecx, dword ptr [edi + eax*4 + 0xe8]
// 006676fd  8d6c8420             lea ebp, [esp + eax*4 + 0x20]
// 00667701  8b4118               mov eax, dword ptr [ecx + 0x18]
// 00667704  8b54863c             mov edx, dword ptr [esi + eax*4 + 0x3c]
// 00667708  8b4114               mov eax, dword ptr [ecx + 0x14]
// 0066770b  8b4c862c             mov ecx, dword ptr [esi + eax*4 + 0x2c]
// 0066770f  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00667713  52                   push edx
// 00667714  8b5500               mov edx, dword ptr [ebp]
// 00667717  51                   push ecx
// 00667718  8b0c98               mov ecx, dword ptr [eax + ebx*4]
// 0066771b  52                   push edx
// 0066771c  51                   push ecx
// 0066771d  8d442420             lea eax, [esp + 0x20]
// 00667721  e8fafcffff           call 0x667420
// 00667726  83c410               add esp, 0x10
// 00667729  84c0                 test al, al
// 0066772b  0f8482000000         je 0x6677b3
// 00667731  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 00667735  8b049a               mov eax, dword ptr [edx + ebx*4]
// 00667738  0fbf08               movsx ecx, word ptr [eax]
// 0066773b  8344243804           add dword ptr [esp + 0x38], 4
// 00667740  43                   inc ebx
// 00667741  3b9f00010000         cmp ebx, dword ptr [edi + 0x100]
// 00667747  894d00               mov dword ptr [ebp], ecx
// 0066774a  7ca4                 jl 0x6676f0
// 0066774c  8b5718               mov edx, dword ptr [edi + 0x18]
// 0066774f  8b442410             mov eax, dword ptr [esp + 0x10]
// 00667753  8902                 mov dword ptr [edx], eax
// 00667755  8b4f18               mov ecx, dword ptr [edi + 0x18]
// 00667758  8b542414             mov edx, dword ptr [esp + 0x14]
// 0066775c  8b442418             mov eax, dword ptr [esp + 0x18]
// 00667760  895104               mov dword ptr [ecx + 4], edx
// 00667763  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00667767  8b542420             mov edx, dword ptr [esp + 0x20]
// 0066776b  89460c               mov dword ptr [esi + 0xc], eax
// 0066776e  8b442424             mov eax, dword ptr [esp + 0x24]
// 00667772  894e10               mov dword ptr [esi + 0x10], ecx
// 00667775  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00667779  895614               mov dword ptr [esi + 0x14], edx
// 0066777c  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00667780  894618               mov dword ptr [esi + 0x18], eax
// 00667783  894e1c               mov dword ptr [esi + 0x1c], ecx
// 00667786  895620               mov dword ptr [esi + 0x20], edx
// 00667789  8bbfbc000000         mov edi, dword ptr [edi + 0xbc]
// 0066778f  85ff                 test edi, edi
// 00667791  7416                 je 0x6677a9
// 00667793  837e2400             cmp dword ptr [esi + 0x24], 0
// 00667797  750d                 jne 0x6677a6
// 00667799  8b4628               mov eax, dword ptr [esi + 0x28]
// 0066779c  40                   inc eax
// 0066779d  83e007               and eax, 7
// 006677a0  897e24               mov dword ptr [esi + 0x24], edi
// 006677a3  894628               mov dword ptr [esi + 0x28], eax
// 006677a6  ff4e24               dec dword ptr [esi + 0x24]
// 006677a9  5d                   pop ebp
// 006677aa  5b                   pop ebx
// 006677ab  5f                   pop edi
// 006677ac  b001                 mov al, 1
// 006677ae  5e                   pop esi
// 006677af  83c424               add esp, 0x24
// 006677b2  c3                   ret 
// 006677b3  5d                   pop ebp
// 006677b4  5b                   pop ebx
// 006677b5  5f                   pop edi
// 006677b6  32c0                 xor al, al
// 006677b8  5e                   pop esi
// 006677b9  83c424               add esp, 0x24
// 006677bc  c3                   ret 
// library jpeg-6b/jchuff.c (function _encode_mcu_huff)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jchuff.c
