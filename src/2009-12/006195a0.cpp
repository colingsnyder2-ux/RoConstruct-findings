// roc 2009-12 006195a0  unit: seg_00610000  size: 468 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006195a0
//
// 006195a0  83ec08               sub esp, 8
// 006195a3  53                   push ebx
// 006195a4  56                   push esi
// 006195a5  8bf0                 mov esi, eax
// 006195a7  8b442414             mov eax, dword ptr [esp + 0x14]
// 006195ab  57                   push edi
// 006195ac  8b7c8648             mov edi, dword ptr [esi + eax*4 + 0x48]
// 006195b0  897c2410             mov dword ptr [esp + 0x10], edi
// 006195b4  85ff                 test edi, edi
// 006195b6  7518                 jne 0x6195d0
// 006195b8  8b0e                 mov ecx, dword ptr [esi]
// 006195ba  c7411434000000       mov dword ptr [ecx + 0x14], 0x34
// 006195c1  8b16                 mov edx, dword ptr [esi]
// 006195c3  894218               mov dword ptr [edx + 0x18], eax
// 006195c6  8b06                 mov eax, dword ptr [esi]
// 006195c8  8b08                 mov ecx, dword ptr [eax]
// 006195ca  56                   push esi
// 006195cb  ffd1                 call ecx
// 006195cd  83c404               add esp, 4
// 006195d0  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 006195d8  8d4704               lea eax, [edi + 4]
// 006195db  ba10000000           mov edx, 0x10
// 006195e0  b9ff000000           mov ecx, 0xff
// 006195e5  663948fc             cmp word ptr [eax - 4], cx
// 006195e9  b901000000           mov ecx, 1
// 006195ee  7604                 jbe 0x6195f4
// 006195f0  894c240c             mov dword ptr [esp + 0xc], ecx
// 006195f4  bbff000000           mov ebx, 0xff
// 006195f9  663958fe             cmp word ptr [eax - 2], bx
// 006195fd  7604                 jbe 0x619603
// 006195ff  894c240c             mov dword ptr [esp + 0xc], ecx
// 00619603  663918               cmp word ptr [eax], bx
// 00619606  7604                 jbe 0x61960c
// 00619608  894c240c             mov dword ptr [esp + 0xc], ecx
// 0061960c  66395802             cmp word ptr [eax + 2], bx
// 00619610  7604                 jbe 0x619616
// 00619612  894c240c             mov dword ptr [esp + 0xc], ecx
// 00619616  83c008               add eax, 8
// 00619619  2bd1                 sub edx, ecx
// 0061961b  75c3                 jne 0x6195e0
// 0061961d  389780000000         cmp byte ptr [edi + 0x80], dl
// 00619623  0f8540010000         jne 0x619769
// 00619629  8b4618               mov eax, dword ptr [esi + 0x18]
// 0061962c  8b10                 mov edx, dword ptr [eax]
// 0061962e  55                   push ebp
// 0061962f  881a                 mov byte ptr [edx], bl
// 00619631  ff00                 inc dword ptr [eax]
// 00619633  83cdff               or ebp, 0xffffffff
// 00619636  016804               add dword ptr [eax + 4], ebp
// 00619639  7523                 jne 0x61965e
// 0061963b  8b400c               mov eax, dword ptr [eax + 0xc]
// 0061963e  56                   push esi
// 0061963f  ffd0                 call eax
// 00619641  83c404               add esp, 4
// 00619644  84c0                 test al, al
// 00619646  7516                 jne 0x61965e
// 00619648  8b0e                 mov ecx, dword ptr [esi]
// 0061964a  bf18000000           mov edi, 0x18
// 0061964f  897914               mov dword ptr [ecx + 0x14], edi
// 00619652  8b16                 mov edx, dword ptr [esi]
// 00619654  8b02                 mov eax, dword ptr [edx]
// 00619656  56                   push esi
// 00619657  ffd0                 call eax
// 00619659  83c404               add esp, 4
// 0061965c  eb05                 jmp 0x619663
// 0061965e  bf18000000           mov edi, 0x18
// 00619663  8b4618               mov eax, dword ptr [esi + 0x18]
// 00619666  8b08                 mov ecx, dword ptr [eax]
// 00619668  c601db               mov byte ptr [ecx], 0xdb
// 0061966b  ff00                 inc dword ptr [eax]
// 0061966d  016804               add dword ptr [eax + 4], ebp
// 00619670  751c                 jne 0x61968e
// 00619672  8b500c               mov edx, dword ptr [eax + 0xc]
// 00619675  56                   push esi
// 00619676  ffd2                 call edx
// 00619678  83c404               add esp, 4
// 0061967b  84c0                 test al, al
// 0061967d  750f                 jne 0x61968e
// 0061967f  8b06                 mov eax, dword ptr [esi]
// 00619681  897814               mov dword ptr [eax + 0x14], edi
// 00619684  8b0e                 mov ecx, dword ptr [esi]
// 00619686  8b11                 mov edx, dword ptr [ecx]
// 00619688  56                   push esi
// 00619689  ffd2                 call edx
// 0061968b  83c404               add esp, 4
// 0061968e  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00619692  f7db                 neg ebx
// 00619694  1bdb                 sbb ebx, ebx
// 00619696  83e340               and ebx, 0x40
// 00619699  83c343               add ebx, 0x43
// 0061969c  e88ffeffff           call 0x619530
// 006196a1  8b4618               mov eax, dword ptr [esi + 0x18]
// 006196a4  8a4c2410             mov cl, byte ptr [esp + 0x10]
// 006196a8  8b10                 mov edx, dword ptr [eax]
// 006196aa  c0e104               shl cl, 4
// 006196ad  024c241c             add cl, byte ptr [esp + 0x1c]
// 006196b1  880a                 mov byte ptr [edx], cl
// 006196b3  ff00                 inc dword ptr [eax]
// 006196b5  016804               add dword ptr [eax + 4], ebp
// 006196b8  751c                 jne 0x6196d6
// 006196ba  8b400c               mov eax, dword ptr [eax + 0xc]
// 006196bd  56                   push esi
// 006196be  ffd0                 call eax
// 006196c0  83c404               add esp, 4
// 006196c3  84c0                 test al, al
// 006196c5  750f                 jne 0x6196d6
// 006196c7  8b0e                 mov ecx, dword ptr [esi]
// 006196c9  897914               mov dword ptr [ecx + 0x14], edi
// 006196cc  8b16                 mov edx, dword ptr [esi]
// 006196ce  8b02                 mov eax, dword ptr [edx]
// 006196d0  56                   push esi
// 006196d1  ffd0                 call eax
// 006196d3  83c404               add esp, 4
// 006196d6  bf98579c00           mov edi, 0x9c5798
// 006196db  eb03                 jmp 0x6196e0
// 006196dd  8d4900               lea ecx, [ecx]
// 006196e0  837c241000           cmp dword ptr [esp + 0x10], 0
// 006196e5  8b0f                 mov ecx, dword ptr [edi]
// 006196e7  8b542414             mov edx, dword ptr [esp + 0x14]
// 006196eb  0fb71c4a             movzx ebx, word ptr [edx + ecx*2]
// 006196ef  7433                 je 0x619724
// 006196f1  8b4618               mov eax, dword ptr [esi + 0x18]
// 006196f4  8b10                 mov edx, dword ptr [eax]
// 006196f6  8bcb                 mov ecx, ebx
// 006196f8  c1e908               shr ecx, 8
// 006196fb  880a                 mov byte ptr [edx], cl
// 006196fd  ff00                 inc dword ptr [eax]
// 006196ff  016804               add dword ptr [eax + 4], ebp
// 00619702  7520                 jne 0x619724
// 00619704  8b400c               mov eax, dword ptr [eax + 0xc]
// 00619707  56                   push esi
// 00619708  ffd0                 call eax
// 0061970a  83c404               add esp, 4
// 0061970d  84c0                 test al, al
// 0061970f  7513                 jne 0x619724
// 00619711  8b0e                 mov ecx, dword ptr [esi]
// 00619713  c7411418000000       mov dword ptr [ecx + 0x14], 0x18
// 0061971a  8b16                 mov edx, dword ptr [esi]
// 0061971c  8b02                 mov eax, dword ptr [edx]
// 0061971e  56                   push esi
// 0061971f  ffd0                 call eax
// 00619721  83c404               add esp, 4
// 00619724  8b4618               mov eax, dword ptr [esi + 0x18]
// 00619727  8b08                 mov ecx, dword ptr [eax]
// 00619729  8819                 mov byte ptr [ecx], bl
// 0061972b  ff00                 inc dword ptr [eax]
// 0061972d  016804               add dword ptr [eax + 4], ebp
// 00619730  7520                 jne 0x619752
// 00619732  8b500c               mov edx, dword ptr [eax + 0xc]
// 00619735  56                   push esi
// 00619736  ffd2                 call edx
// 00619738  83c404               add esp, 4
// 0061973b  84c0                 test al, al
// 0061973d  7513                 jne 0x619752
// 0061973f  8b06                 mov eax, dword ptr [esi]
// 00619741  c7401418000000       mov dword ptr [eax + 0x14], 0x18
// 00619748  8b0e                 mov ecx, dword ptr [esi]
// 0061974a  8b11                 mov edx, dword ptr [ecx]
// 0061974c  56                   push esi
// 0061974d  ffd2                 call edx
// 0061974f  83c404               add esp, 4
// 00619752  83c704               add edi, 4
// 00619755  81ff98589c00         cmp edi, 0x9c5898
// 0061975b  7c83                 jl 0x6196e0
// 0061975d  8b442414             mov eax, dword ptr [esp + 0x14]
// 00619761  c6808000000001       mov byte ptr [eax + 0x80], 1
// 00619768  5d                   pop ebp
// 00619769  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0061976d  5f                   pop edi
// 0061976e  5e                   pop esi
// 0061976f  5b                   pop ebx
// 00619770  83c408               add esp, 8
// 00619773  c3                   ret 
// library jpeg-6b/jcmarker.c (function _emit_dqt)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmarker.c
