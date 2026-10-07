// roc 2010-06 005764b0  unit: seg_00570000  size: 403 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005764b0
//
// 005764b0  53                   push ebx
// 005764b1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 005764b5  8b5304               mov edx, dword ptr [ebx + 4]
// 005764b8  8b4244               mov eax, dword ptr [edx + 0x44]
// 005764bb  55                   push ebp
// 005764bc  56                   push esi
// 005764bd  57                   push edi
// 005764be  33f6                 xor esi, esi
// 005764c0  33ff                 xor edi, edi
// 005764c2  89542414             mov dword ptr [esp + 0x14], edx
// 005764c6  85c0                 test eax, eax
// 005764c8  7425                 je 0x5764ef
// 005764ca  8d9b00000000         lea ebx, [ebx]
// 005764d0  833800               cmp dword ptr [eax], 0
// 005764d3  7513                 jne 0x5764e8
// 005764d5  8b4808               mov ecx, dword ptr [eax + 8]
// 005764d8  8b680c               mov ebp, dword ptr [eax + 0xc]
// 005764db  0fafe9               imul ebp, ecx
// 005764de  03f5                 add esi, ebp
// 005764e0  8b6804               mov ebp, dword ptr [eax + 4]
// 005764e3  0fafe9               imul ebp, ecx
// 005764e6  03fd                 add edi, ebp
// 005764e8  8b4024               mov eax, dword ptr [eax + 0x24]
// 005764eb  85c0                 test eax, eax
// 005764ed  75e1                 jne 0x5764d0
// 005764ef  8b4248               mov eax, dword ptr [edx + 0x48]
// 005764f2  85c0                 test eax, eax
// 005764f4  7425                 je 0x57651b
// 005764f6  833800               cmp dword ptr [eax], 0
// 005764f9  7519                 jne 0x576514
// 005764fb  8b4808               mov ecx, dword ptr [eax + 8]
// 005764fe  8b680c               mov ebp, dword ptr [eax + 0xc]
// 00576501  0fafe9               imul ebp, ecx
// 00576504  c1e507               shl ebp, 7
// 00576507  03f5                 add esi, ebp
// 00576509  8b6804               mov ebp, dword ptr [eax + 4]
// 0057650c  0fafe9               imul ebp, ecx
// 0057650f  c1e507               shl ebp, 7
// 00576512  03fd                 add edi, ebp
// 00576514  8b4024               mov eax, dword ptr [eax + 0x24]
// 00576517  85c0                 test eax, eax
// 00576519  75db                 jne 0x5764f6
// 0057651b  85f6                 test esi, esi
// 0057651d  0f8e1b010000         jle 0x57663e
// 00576523  8b424c               mov eax, dword ptr [edx + 0x4c]
// 00576526  50                   push eax
// 00576527  57                   push edi
// 00576528  56                   push esi
// 00576529  53                   push ebx
// 0057652a  e8c1800000           call 0x57e5f0
// 0057652f  83c410               add esp, 0x10
// 00576532  3bc7                 cmp eax, edi
// 00576534  7c07                 jl 0x57653d
// 00576536  bd00ca9a3b           mov ebp, 0x3b9aca00
// 0057653b  eb0e                 jmp 0x57654b
// 0057653d  99                   cdq 
// 0057653e  f7fe                 idiv esi
// 00576540  8be8                 mov ebp, eax
// 00576542  85ed                 test ebp, ebp
// 00576544  7f05                 jg 0x57654b
// 00576546  bd01000000           mov ebp, 1
// 0057654b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0057654f  8b7144               mov esi, dword ptr [ecx + 0x44]
// 00576552  85f6                 test esi, esi
// 00576554  746b                 je 0x5765c1
// 00576556  833e00               cmp dword ptr [esi], 0
// 00576559  755f                 jne 0x5765ba
// 0057655b  8b7e04               mov edi, dword ptr [esi + 4]
// 0057655e  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00576561  33d2                 xor edx, edx
// 00576563  8d47ff               lea eax, [edi - 1]
// 00576566  f7f1                 div ecx
// 00576568  40                   inc eax
// 00576569  3bc5                 cmp eax, ebp
// 0057656b  7f05                 jg 0x576572
// 0057656d  897e10               mov dword ptr [esi + 0x10], edi
// 00576570  eb1e                 jmp 0x576590
// 00576572  8b5608               mov edx, dword ptr [esi + 8]
// 00576575  0fafcd               imul ecx, ebp
// 00576578  0fafd7               imul edx, edi
// 0057657b  52                   push edx
// 0057657c  8d4628               lea eax, [esi + 0x28]
// 0057657f  50                   push eax
// 00576580  53                   push ebx
// 00576581  894e10               mov dword ptr [esi + 0x10], ecx
// 00576584  e867810000           call 0x57e6f0
// 00576589  83c40c               add esp, 0xc
// 0057658c  c6462201             mov byte ptr [esi + 0x22], 1
// 00576590  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00576593  8b5608               mov edx, dword ptr [esi + 8]
// 00576596  51                   push ecx
// 00576597  52                   push edx
// 00576598  6a01                 push 1
// 0057659a  53                   push ebx
// 0057659b  e8d0fcffff           call 0x576270
// 005765a0  8906                 mov dword ptr [esi], eax
// 005765a2  8b442424             mov eax, dword ptr [esp + 0x24]
// 005765a6  8b4850               mov ecx, dword ptr [eax + 0x50]
// 005765a9  83c410               add esp, 0x10
// 005765ac  33c0                 xor eax, eax
// 005765ae  894e14               mov dword ptr [esi + 0x14], ecx
// 005765b1  894618               mov dword ptr [esi + 0x18], eax
// 005765b4  89461c               mov dword ptr [esi + 0x1c], eax
// 005765b7  884621               mov byte ptr [esi + 0x21], al
// 005765ba  8b7624               mov esi, dword ptr [esi + 0x24]
// 005765bd  85f6                 test esi, esi
// 005765bf  7595                 jne 0x576556
// 005765c1  8b542414             mov edx, dword ptr [esp + 0x14]
// 005765c5  8b7248               mov esi, dword ptr [edx + 0x48]
// 005765c8  85f6                 test esi, esi
// 005765ca  7472                 je 0x57663e
// 005765cc  8d642400             lea esp, [esp]
// 005765d0  833e00               cmp dword ptr [esi], 0
// 005765d3  7562                 jne 0x576637
// 005765d5  8b7e04               mov edi, dword ptr [esi + 4]
// 005765d8  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 005765db  33d2                 xor edx, edx
// 005765dd  8d47ff               lea eax, [edi - 1]
// 005765e0  f7f1                 div ecx
// 005765e2  40                   inc eax
// 005765e3  3bc5                 cmp eax, ebp
// 005765e5  7f05                 jg 0x5765ec
// 005765e7  897e10               mov dword ptr [esi + 0x10], edi
// 005765ea  eb21                 jmp 0x57660d
// 005765ec  8b4608               mov eax, dword ptr [esi + 8]
// 005765ef  0fafcd               imul ecx, ebp
// 005765f2  0fafc7               imul eax, edi
// 005765f5  c1e007               shl eax, 7
// 005765f8  894e10               mov dword ptr [esi + 0x10], ecx
// 005765fb  50                   push eax
// 005765fc  8d4e28               lea ecx, [esi + 0x28]
// 005765ff  51                   push ecx
// 00576600  53                   push ebx
// 00576601  e8ea800000           call 0x57e6f0
// 00576606  83c40c               add esp, 0xc
// 00576609  c6462201             mov byte ptr [esi + 0x22], 1
// 0057660d  8b5610               mov edx, dword ptr [esi + 0x10]
// 00576610  8b4608               mov eax, dword ptr [esi + 8]
// 00576613  52                   push edx
// 00576614  50                   push eax
// 00576615  6a01                 push 1
// 00576617  53                   push ebx
// 00576618  e803fdffff           call 0x576320
// 0057661d  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00576621  8906                 mov dword ptr [esi], eax
// 00576623  8b5150               mov edx, dword ptr [ecx + 0x50]
// 00576626  83c410               add esp, 0x10
// 00576629  33c0                 xor eax, eax
// 0057662b  895614               mov dword ptr [esi + 0x14], edx
// 0057662e  894618               mov dword ptr [esi + 0x18], eax
// 00576631  89461c               mov dword ptr [esi + 0x1c], eax
// 00576634  884621               mov byte ptr [esi + 0x21], al
// 00576637  8b7624               mov esi, dword ptr [esi + 0x24]
// 0057663a  85f6                 test esi, esi
// 0057663c  7592                 jne 0x5765d0
// 0057663e  5f                   pop edi
// 0057663f  5e                   pop esi
// 00576640  5d                   pop ebp
// 00576641  5b                   pop ebx
// 00576642  c3                   ret 
// library jpeg-6b/jmemmgr.c (function _realize_virt_arrays)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jmemmgr.c
