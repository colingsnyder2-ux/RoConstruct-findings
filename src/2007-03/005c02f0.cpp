// roc 2007-03 005c02f0  unit: seg_005c0000  size: 447 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005c02f0
//
// 005c02f0  8b442408             mov eax, dword ptr [esp + 8]
// 005c02f4  83780806             cmp dword ptr [eax + 8], 6
// 005c02f8  55                   push ebp
// 005c02f9  56                   push esi
// 005c02fa  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005c02fe  57                   push edi
// 005c02ff  7407                 je 0x5c0308
// 005c0301  8bf8                 mov edi, eax
// 005c0303  e868fbffff           call 0x5bfe70
// 005c0308  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 005c030b  8b5618               mov edx, dword ptr [esi + 0x18]
// 005c030e  8be8                 mov ebp, eax
// 005c0310  2b6e20               sub ebp, dword ptr [esi + 0x20]
// 005c0313  8b00                 mov eax, dword ptr [eax]
// 005c0315  89510c               mov dword ptr [ecx + 0xc], edx
// 005c0318  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 005c031b  2b4e08               sub ecx, dword ptr [esi + 8]
// 005c031e  80780600             cmp byte ptr [eax + 6], 0
// 005c0322  896c2414             mov dword ptr [esp + 0x14], ebp
// 005c0326  0f85dc000000         jne 0x5c0408
// 005c032c  53                   push ebx
// 005c032d  8b5810               mov ebx, dword ptr [eax + 0x10]
// 005c0330  0fb6434b             movzx eax, byte ptr [ebx + 0x4b]
// 005c0334  8bd0                 mov edx, eax
// 005c0336  c1e204               shl edx, 4
// 005c0339  3bca                 cmp ecx, edx
// 005c033b  7f19                 jg 0x5c0356
// 005c033d  8b4e2c               mov ecx, dword ptr [esi + 0x2c]
// 005c0340  3bc1                 cmp eax, ecx
// 005c0342  7f06                 jg 0x5c034a
// 005c0344  8d0409               lea eax, [ecx + ecx]
// 005c0347  50                   push eax
// 005c0348  eb03                 jmp 0x5c034d
// 005c034a  03c8                 add ecx, eax
// 005c034c  51                   push ecx
// 005c034d  56                   push esi
// 005c034e  e8bdf8ffff           call 0x5bfc10
// 005c0353  83c408               add esp, 8
// 005c0356  8b7e20               mov edi, dword ptr [esi + 0x20]
// 005c0359  03fd                 add edi, ebp
// 005c035b  807b4a00             cmp byte ptr [ebx + 0x4a], 0
// 005c035f  7517                 jne 0x5c0378
// 005c0361  0fb64b49             movzx ecx, byte ptr [ebx + 0x49]
// 005c0365  c1e104               shl ecx, 4
// 005c0368  8d6f10               lea ebp, [edi + 0x10]
// 005c036b  8d0429               lea eax, [ecx + ebp]
// 005c036e  394608               cmp dword ptr [esi + 8], eax
// 005c0371  7620                 jbe 0x5c0393
// 005c0373  894608               mov dword ptr [esi + 8], eax
// 005c0376  eb1b                 jmp 0x5c0393
// 005c0378  8b4608               mov eax, dword ptr [esi + 8]
// 005c037b  2bc7                 sub eax, edi
// 005c037d  c1f804               sar eax, 4
// 005c0380  83e801               sub eax, 1
// 005c0383  8bcb                 mov ecx, ebx
// 005c0385  e876faffff           call 0x5bfe00
// 005c038a  8b7e20               mov edi, dword ptr [esi + 0x20]
// 005c038d  037c2418             add edi, dword ptr [esp + 0x18]
// 005c0391  8be8                 mov ebp, eax
// 005c0393  8b4614               mov eax, dword ptr [esi + 0x14]
// 005c0396  3b4624               cmp eax, dword ptr [esi + 0x24]
// 005c0399  7507                 jne 0x5c03a2
// 005c039b  e810ffffff           call 0x5c02b0
// 005c03a0  eb06                 jmp 0x5c03a8
// 005c03a2  83c018               add eax, 0x18
// 005c03a5  894614               mov dword ptr [esi + 0x14], eax
// 005c03a8  897804               mov dword ptr [eax + 4], edi
// 005c03ab  8928                 mov dword ptr [eax], ebp
// 005c03ad  896e0c               mov dword ptr [esi + 0xc], ebp
// 005c03b0  0fb6534b             movzx edx, byte ptr [ebx + 0x4b]
// 005c03b4  c1e204               shl edx, 4
// 005c03b7  03d5                 add edx, ebp
// 005c03b9  895008               mov dword ptr [eax + 8], edx
// 005c03bc  8b4b0c               mov ecx, dword ptr [ebx + 0xc]
// 005c03bf  894e18               mov dword ptr [esi + 0x18], ecx
// 005c03c2  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005c03c6  33d2                 xor edx, edx
// 005c03c8  895014               mov dword ptr [eax + 0x14], edx
// 005c03cb  894810               mov dword ptr [eax + 0x10], ecx
// 005c03ce  8b4e08               mov ecx, dword ptr [esi + 8]
// 005c03d1  3b4808               cmp ecx, dword ptr [eax + 8]
// 005c03d4  5b                   pop ebx
// 005c03d5  730b                 jae 0x5c03e2
// 005c03d7  895108               mov dword ptr [ecx + 8], edx
// 005c03da  83c110               add ecx, 0x10
// 005c03dd  3b4808               cmp ecx, dword ptr [eax + 8]
// 005c03e0  72f5                 jb 0x5c03d7
// 005c03e2  f6463601             test byte ptr [esi + 0x36], 1
// 005c03e6  8b4008               mov eax, dword ptr [eax + 8]
// 005c03e9  894608               mov dword ptr [esi + 8], eax
// 005c03ec  7414                 je 0x5c0402
// 005c03ee  83461804             add dword ptr [esi + 0x18], 4
// 005c03f2  6aff                 push -1
// 005c03f4  52                   push edx
// 005c03f5  56                   push esi
// 005c03f6  e825f9ffff           call 0x5bfd20
// 005c03fb  83c40c               add esp, 0xc
// 005c03fe  834618fc             add dword ptr [esi + 0x18], -4
// 005c0402  5f                   pop edi
// 005c0403  5e                   pop esi
// 005c0404  33c0                 xor eax, eax
// 005c0406  5d                   pop ebp
// 005c0407  c3                   ret 
// 005c0408  81f940010000         cmp ecx, 0x140
// 005c040e  7f1b                 jg 0x5c042b
// 005c0410  8b462c               mov eax, dword ptr [esi + 0x2c]
// 005c0413  83f814               cmp eax, 0x14
// 005c0416  7c06                 jl 0x5c041e
// 005c0418  8d1400               lea edx, [eax + eax]
// 005c041b  52                   push edx
// 005c041c  eb04                 jmp 0x5c0422
// 005c041e  83c014               add eax, 0x14
// 005c0421  50                   push eax
// 005c0422  56                   push esi
// 005c0423  e8e8f7ffff           call 0x5bfc10
// 005c0428  83c408               add esp, 8
// 005c042b  8b4614               mov eax, dword ptr [esi + 0x14]
// 005c042e  3b4624               cmp eax, dword ptr [esi + 0x24]
// 005c0431  7507                 jne 0x5c043a
// 005c0433  e878feffff           call 0x5c02b0
// 005c0438  eb06                 jmp 0x5c0440
// 005c043a  83c018               add eax, 0x18
// 005c043d  894614               mov dword ptr [esi + 0x14], eax
// 005c0440  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 005c0443  03cd                 add ecx, ebp
// 005c0445  894804               mov dword ptr [eax + 4], ecx
// 005c0448  83c110               add ecx, 0x10
// 005c044b  8908                 mov dword ptr [eax], ecx
// 005c044d  8b5608               mov edx, dword ptr [esi + 8]
// 005c0450  894e0c               mov dword ptr [esi + 0xc], ecx
// 005c0453  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005c0457  81c240010000         add edx, 0x140
// 005c045d  895008               mov dword ptr [eax + 8], edx
// 005c0460  894810               mov dword ptr [eax + 0x10], ecx
// 005c0463  f6463601             test byte ptr [esi + 0x36], 1
// 005c0467  740d                 je 0x5c0476
// 005c0469  6aff                 push -1
// 005c046b  6a00                 push 0
// 005c046d  56                   push esi
// 005c046e  e8adf8ffff           call 0x5bfd20
// 005c0473  83c40c               add esp, 0xc
// 005c0476  8b5614               mov edx, dword ptr [esi + 0x14]
// 005c0479  8b4204               mov eax, dword ptr [edx + 4]
// 005c047c  8b08                 mov ecx, dword ptr [eax]
// 005c047e  8b5110               mov edx, dword ptr [ecx + 0x10]
// 005c0481  56                   push esi
// 005c0482  ffd2                 call edx
// 005c0484  83c404               add esp, 4
// 005c0487  85c0                 test eax, eax
// 005c0489  7d09                 jge 0x5c0494
// 005c048b  5f                   pop edi
// 005c048c  5e                   pop esi
// 005c048d  b802000000           mov eax, 2
// 005c0492  5d                   pop ebp
// 005c0493  c3                   ret 
// 005c0494  8b4e08               mov ecx, dword ptr [esi + 8]
// 005c0497  c1e004               shl eax, 4
// 005c049a  2bc8                 sub ecx, eax
// 005c049c  51                   push ecx
// 005c049d  56                   push esi
// 005c049e  e8bdfaffff           call 0x5bff60
// 005c04a3  83c408               add esp, 8
// 005c04a6  5f                   pop edi
// 005c04a7  5e                   pop esi
// 005c04a8  b801000000           mov eax, 1
// 005c04ad  5d                   pop ebp
// 005c04ae  c3                   ret 
// library lua-5.1.2/roc_unit_6495e238f1ebcec5.cpp (function ?luaD_precall@@YAHPAUlua_State@@PAUlua_TValue@@H@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.2 roc_unit_6495e238f1ebcec5.cpp
