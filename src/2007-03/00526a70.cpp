// roc 2007-03 00526a70  unit: seg_00520000  size: 354 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00526a70
//
// 00526a70  83ec24               sub esp, 0x24
// 00526a73  56                   push esi
// 00526a74  57                   push edi
// 00526a75  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 00526a79  83bfbc00000000       cmp dword ptr [edi + 0xbc], 0
// 00526a80  8bb75c010000         mov esi, dword ptr [edi + 0x15c]
// 00526a86  8b4718               mov eax, dword ptr [edi + 0x18]
// 00526a89  8b08                 mov ecx, dword ptr [eax]
// 00526a8b  8b5004               mov edx, dword ptr [eax + 4]
// 00526a8e  8b460c               mov eax, dword ptr [esi + 0xc]
// 00526a91  894c2408             mov dword ptr [esp + 8], ecx
// 00526a95  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00526a98  8954240c             mov dword ptr [esp + 0xc], edx
// 00526a9c  8b5614               mov edx, dword ptr [esi + 0x14]
// 00526a9f  89442410             mov dword ptr [esp + 0x10], eax
// 00526aa3  8b4618               mov eax, dword ptr [esi + 0x18]
// 00526aa6  894c2414             mov dword ptr [esp + 0x14], ecx
// 00526aaa  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 00526aad  89542418             mov dword ptr [esp + 0x18], edx
// 00526ab1  8b5620               mov edx, dword ptr [esi + 0x20]
// 00526ab4  8944241c             mov dword ptr [esp + 0x1c], eax
// 00526ab8  894c2420             mov dword ptr [esp + 0x20], ecx
// 00526abc  89542424             mov dword ptr [esp + 0x24], edx
// 00526ac0  897c2428             mov dword ptr [esp + 0x28], edi
// 00526ac4  7420                 je 0x526ae6
// 00526ac6  837e2400             cmp dword ptr [esi + 0x24], 0
// 00526aca  751a                 jne 0x526ae6
// 00526acc  8b4628               mov eax, dword ptr [esi + 0x28]
// 00526acf  50                   push eax
// 00526ad0  8d44240c             lea eax, [esp + 0xc]
// 00526ad4  e817ffffff           call 0x5269f0
// 00526ad9  83c404               add esp, 4
// 00526adc  84c0                 test al, al
// 00526ade  7506                 jne 0x526ae6
// 00526ae0  5f                   pop edi
// 00526ae1  5e                   pop esi
// 00526ae2  83c424               add esp, 0x24
// 00526ae5  c3                   ret 
// 00526ae6  53                   push ebx
// 00526ae7  33db                 xor ebx, ebx
// 00526ae9  399f00010000         cmp dword ptr [edi + 0x100], ebx
// 00526aef  55                   push ebp
// 00526af0  7e6c                 jle 0x526b5e
// 00526af2  8d8f04010000         lea ecx, [edi + 0x104]
// 00526af8  894c2438             mov dword ptr [esp + 0x38], ecx
// 00526afc  8d642400             lea esp, [esp]
// 00526b00  8b542438             mov edx, dword ptr [esp + 0x38]
// 00526b04  8b02                 mov eax, dword ptr [edx]
// 00526b06  8b8c87e8000000       mov ecx, dword ptr [edi + eax*4 + 0xe8]
// 00526b0d  8d6c8420             lea ebp, [esp + eax*4 + 0x20]
// 00526b11  8b4118               mov eax, dword ptr [ecx + 0x18]
// 00526b14  8b54863c             mov edx, dword ptr [esi + eax*4 + 0x3c]
// 00526b18  8b4114               mov eax, dword ptr [ecx + 0x14]
// 00526b1b  8b4d00               mov ecx, dword ptr [ebp]
// 00526b1e  8b44862c             mov eax, dword ptr [esi + eax*4 + 0x2c]
// 00526b22  52                   push edx
// 00526b23  8b542440             mov edx, dword ptr [esp + 0x40]
// 00526b27  51                   push ecx
// 00526b28  8b0c9a               mov ecx, dword ptr [edx + ebx*4]
// 00526b2b  51                   push ecx
// 00526b2c  8d54241c             lea edx, [esp + 0x1c]
// 00526b30  52                   push edx
// 00526b31  e81afdffff           call 0x526850
// 00526b36  83c410               add esp, 0x10
// 00526b39  84c0                 test al, al
// 00526b3b  0f8487000000         je 0x526bc8
// 00526b41  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00526b45  8b0c98               mov ecx, dword ptr [eax + ebx*4]
// 00526b48  0fbf11               movsx edx, word ptr [ecx]
// 00526b4b  8344243804           add dword ptr [esp + 0x38], 4
// 00526b50  83c301               add ebx, 1
// 00526b53  3b9f00010000         cmp ebx, dword ptr [edi + 0x100]
// 00526b59  895500               mov dword ptr [ebp], edx
// 00526b5c  7ca2                 jl 0x526b00
// 00526b5e  8b4718               mov eax, dword ptr [edi + 0x18]
// 00526b61  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00526b65  8908                 mov dword ptr [eax], ecx
// 00526b67  8b5718               mov edx, dword ptr [edi + 0x18]
// 00526b6a  8b442414             mov eax, dword ptr [esp + 0x14]
// 00526b6e  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00526b72  894204               mov dword ptr [edx + 4], eax
// 00526b75  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00526b79  8b442420             mov eax, dword ptr [esp + 0x20]
// 00526b7d  894e0c               mov dword ptr [esi + 0xc], ecx
// 00526b80  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00526b84  895610               mov dword ptr [esi + 0x10], edx
// 00526b87  8b542428             mov edx, dword ptr [esp + 0x28]
// 00526b8b  894614               mov dword ptr [esi + 0x14], eax
// 00526b8e  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00526b92  894e18               mov dword ptr [esi + 0x18], ecx
// 00526b95  89561c               mov dword ptr [esi + 0x1c], edx
// 00526b98  894620               mov dword ptr [esi + 0x20], eax
// 00526b9b  8bbfbc000000         mov edi, dword ptr [edi + 0xbc]
// 00526ba1  85ff                 test edi, edi
// 00526ba3  7419                 je 0x526bbe
// 00526ba5  837e2400             cmp dword ptr [esi + 0x24], 0
// 00526ba9  750f                 jne 0x526bba
// 00526bab  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 00526bae  83c101               add ecx, 1
// 00526bb1  83e107               and ecx, 7
// 00526bb4  897e24               mov dword ptr [esi + 0x24], edi
// 00526bb7  894e28               mov dword ptr [esi + 0x28], ecx
// 00526bba  834624ff             add dword ptr [esi + 0x24], -1
// 00526bbe  5d                   pop ebp
// 00526bbf  5b                   pop ebx
// 00526bc0  5f                   pop edi
// 00526bc1  b001                 mov al, 1
// 00526bc3  5e                   pop esi
// 00526bc4  83c424               add esp, 0x24
// 00526bc7  c3                   ret 
// 00526bc8  5d                   pop ebp
// 00526bc9  5b                   pop ebx
// 00526bca  5f                   pop edi
// 00526bcb  32c0                 xor al, al
// 00526bcd  5e                   pop esi
// 00526bce  83c424               add esp, 0x24
// 00526bd1  c3                   ret 
// library jpeg-6b/jchuff.c (function _encode_mcu_huff)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /Ob1 /GS- /MD
// roc-lib: jpeg-6b jchuff.c
