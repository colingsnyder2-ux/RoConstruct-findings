// roc 2007-08 005c6110  unit: lua_exception  size: 447 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c6110
//
// 005c6110  8b442408             mov eax, dword ptr [esp + 8]
// 005c6114  83780806             cmp dword ptr [eax + 8], 6
// 005c6118  55                   push ebp
// 005c6119  56                   push esi
// 005c611a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005c611e  57                   push edi
// 005c611f  7407                 je 0x5c6128
// 005c6121  8bf8                 mov edi, eax
// 005c6123  e868fbffff           call 0x5c5c90
// 005c6128  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 005c612b  8b5618               mov edx, dword ptr [esi + 0x18]
// 005c612e  8be8                 mov ebp, eax
// 005c6130  2b6e20               sub ebp, dword ptr [esi + 0x20]
// 005c6133  8b00                 mov eax, dword ptr [eax]
// 005c6135  89510c               mov dword ptr [ecx + 0xc], edx
// 005c6138  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 005c613b  2b4e08               sub ecx, dword ptr [esi + 8]
// 005c613e  80780600             cmp byte ptr [eax + 6], 0
// 005c6142  896c2414             mov dword ptr [esp + 0x14], ebp
// 005c6146  0f85dc000000         jne 0x5c6228
// 005c614c  53                   push ebx
// 005c614d  8b5810               mov ebx, dword ptr [eax + 0x10]
// 005c6150  0fb6434b             movzx eax, byte ptr [ebx + 0x4b]
// 005c6154  8bd0                 mov edx, eax
// 005c6156  c1e204               shl edx, 4
// 005c6159  3bca                 cmp ecx, edx
// 005c615b  7f19                 jg 0x5c6176
// 005c615d  8b4e2c               mov ecx, dword ptr [esi + 0x2c]
// 005c6160  3bc1                 cmp eax, ecx
// 005c6162  7f06                 jg 0x5c616a
// 005c6164  8d0409               lea eax, [ecx + ecx]
// 005c6167  50                   push eax
// 005c6168  eb03                 jmp 0x5c616d
// 005c616a  03c8                 add ecx, eax
// 005c616c  51                   push ecx
// 005c616d  56                   push esi
// 005c616e  e8bdf8ffff           call 0x5c5a30
// 005c6173  83c408               add esp, 8
// 005c6176  8b7e20               mov edi, dword ptr [esi + 0x20]
// 005c6179  03fd                 add edi, ebp
// 005c617b  807b4a00             cmp byte ptr [ebx + 0x4a], 0
// 005c617f  7517                 jne 0x5c6198
// 005c6181  0fb64b49             movzx ecx, byte ptr [ebx + 0x49]
// 005c6185  c1e104               shl ecx, 4
// 005c6188  8d6f10               lea ebp, [edi + 0x10]
// 005c618b  8d0429               lea eax, [ecx + ebp]
// 005c618e  394608               cmp dword ptr [esi + 8], eax
// 005c6191  7620                 jbe 0x5c61b3
// 005c6193  894608               mov dword ptr [esi + 8], eax
// 005c6196  eb1b                 jmp 0x5c61b3
// 005c6198  8b4608               mov eax, dword ptr [esi + 8]
// 005c619b  2bc7                 sub eax, edi
// 005c619d  c1f804               sar eax, 4
// 005c61a0  83e801               sub eax, 1
// 005c61a3  8bcb                 mov ecx, ebx
// 005c61a5  e876faffff           call 0x5c5c20
// 005c61aa  8b7e20               mov edi, dword ptr [esi + 0x20]
// 005c61ad  037c2418             add edi, dword ptr [esp + 0x18]
// 005c61b1  8be8                 mov ebp, eax
// 005c61b3  8b4614               mov eax, dword ptr [esi + 0x14]
// 005c61b6  3b4624               cmp eax, dword ptr [esi + 0x24]
// 005c61b9  7507                 jne 0x5c61c2
// 005c61bb  e810ffffff           call 0x5c60d0
// 005c61c0  eb06                 jmp 0x5c61c8
// 005c61c2  83c018               add eax, 0x18
// 005c61c5  894614               mov dword ptr [esi + 0x14], eax
// 005c61c8  897804               mov dword ptr [eax + 4], edi
// 005c61cb  8928                 mov dword ptr [eax], ebp
// 005c61cd  896e0c               mov dword ptr [esi + 0xc], ebp
// 005c61d0  0fb6534b             movzx edx, byte ptr [ebx + 0x4b]
// 005c61d4  c1e204               shl edx, 4
// 005c61d7  03d5                 add edx, ebp
// 005c61d9  895008               mov dword ptr [eax + 8], edx
// 005c61dc  8b4b0c               mov ecx, dword ptr [ebx + 0xc]
// 005c61df  894e18               mov dword ptr [esi + 0x18], ecx
// 005c61e2  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005c61e6  33d2                 xor edx, edx
// 005c61e8  895014               mov dword ptr [eax + 0x14], edx
// 005c61eb  894810               mov dword ptr [eax + 0x10], ecx
// 005c61ee  8b4e08               mov ecx, dword ptr [esi + 8]
// 005c61f1  3b4808               cmp ecx, dword ptr [eax + 8]
// 005c61f4  5b                   pop ebx
// 005c61f5  730b                 jae 0x5c6202
// 005c61f7  895108               mov dword ptr [ecx + 8], edx
// 005c61fa  83c110               add ecx, 0x10
// 005c61fd  3b4808               cmp ecx, dword ptr [eax + 8]
// 005c6200  72f5                 jb 0x5c61f7
// 005c6202  f6463601             test byte ptr [esi + 0x36], 1
// 005c6206  8b4008               mov eax, dword ptr [eax + 8]
// 005c6209  894608               mov dword ptr [esi + 8], eax
// 005c620c  7414                 je 0x5c6222
// 005c620e  83461804             add dword ptr [esi + 0x18], 4
// 005c6212  6aff                 push -1
// 005c6214  52                   push edx
// 005c6215  56                   push esi
// 005c6216  e825f9ffff           call 0x5c5b40
// 005c621b  83c40c               add esp, 0xc
// 005c621e  834618fc             add dword ptr [esi + 0x18], -4
// 005c6222  5f                   pop edi
// 005c6223  5e                   pop esi
// 005c6224  33c0                 xor eax, eax
// 005c6226  5d                   pop ebp
// 005c6227  c3                   ret 
// 005c6228  81f940010000         cmp ecx, 0x140
// 005c622e  7f1b                 jg 0x5c624b
// 005c6230  8b462c               mov eax, dword ptr [esi + 0x2c]
// 005c6233  83f814               cmp eax, 0x14
// 005c6236  7c06                 jl 0x5c623e
// 005c6238  8d1400               lea edx, [eax + eax]
// 005c623b  52                   push edx
// 005c623c  eb04                 jmp 0x5c6242
// 005c623e  83c014               add eax, 0x14
// 005c6241  50                   push eax
// 005c6242  56                   push esi
// 005c6243  e8e8f7ffff           call 0x5c5a30
// 005c6248  83c408               add esp, 8
// 005c624b  8b4614               mov eax, dword ptr [esi + 0x14]
// 005c624e  3b4624               cmp eax, dword ptr [esi + 0x24]
// 005c6251  7507                 jne 0x5c625a
// 005c6253  e878feffff           call 0x5c60d0
// 005c6258  eb06                 jmp 0x5c6260
// 005c625a  83c018               add eax, 0x18
// 005c625d  894614               mov dword ptr [esi + 0x14], eax
// 005c6260  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 005c6263  03cd                 add ecx, ebp
// 005c6265  894804               mov dword ptr [eax + 4], ecx
// 005c6268  83c110               add ecx, 0x10
// 005c626b  8908                 mov dword ptr [eax], ecx
// 005c626d  8b5608               mov edx, dword ptr [esi + 8]
// 005c6270  894e0c               mov dword ptr [esi + 0xc], ecx
// 005c6273  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005c6277  81c240010000         add edx, 0x140
// 005c627d  895008               mov dword ptr [eax + 8], edx
// 005c6280  894810               mov dword ptr [eax + 0x10], ecx
// 005c6283  f6463601             test byte ptr [esi + 0x36], 1
// 005c6287  740d                 je 0x5c6296
// 005c6289  6aff                 push -1
// 005c628b  6a00                 push 0
// 005c628d  56                   push esi
// 005c628e  e8adf8ffff           call 0x5c5b40
// 005c6293  83c40c               add esp, 0xc
// 005c6296  8b5614               mov edx, dword ptr [esi + 0x14]
// 005c6299  8b4204               mov eax, dword ptr [edx + 4]
// 005c629c  8b08                 mov ecx, dword ptr [eax]
// 005c629e  8b5110               mov edx, dword ptr [ecx + 0x10]
// 005c62a1  56                   push esi
// 005c62a2  ffd2                 call edx
// 005c62a4  83c404               add esp, 4
// 005c62a7  85c0                 test eax, eax
// 005c62a9  7d09                 jge 0x5c62b4
// 005c62ab  5f                   pop edi
// 005c62ac  5e                   pop esi
// 005c62ad  b802000000           mov eax, 2
// 005c62b2  5d                   pop ebp
// 005c62b3  c3                   ret 
// 005c62b4  8b4e08               mov ecx, dword ptr [esi + 8]
// 005c62b7  c1e004               shl eax, 4
// 005c62ba  2bc8                 sub ecx, eax
// 005c62bc  51                   push ecx
// 005c62bd  56                   push esi
// 005c62be  e8bdfaffff           call 0x5c5d80
// 005c62c3  83c408               add esp, 8
// 005c62c6  5f                   pop edi
// 005c62c7  5e                   pop esi
// 005c62c8  b801000000           mov eax, 1
// 005c62cd  5d                   pop ebp
// 005c62ce  c3                   ret 
// library lua-5.1.2/roc_unit_6495e238f1ebcec5.cpp (function ?luaD_precall@@YAHPAUlua_State@@PAUlua_TValue@@H@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.2 roc_unit_6495e238f1ebcec5.cpp
