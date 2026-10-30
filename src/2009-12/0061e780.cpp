// roc 2009-12 0061e780  unit: seg_00610000  size: 1042 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0061e780
//
// 0061e780  83ec3c               sub esp, 0x3c
// 0061e783  56                   push esi
// 0061e784  8b742444             mov esi, dword ptr [esp + 0x44]
// 0061e788  83befc00000000       cmp dword ptr [esi + 0xfc], 0
// 0061e78f  57                   push edi
// 0061e790  8bbe98010000         mov edi, dword ptr [esi + 0x198]
// 0061e796  897c2418             mov dword ptr [esp + 0x18], edi
// 0061e79a  7415                 je 0x61e7b1
// 0061e79c  837f2400             cmp dword ptr [edi + 0x24], 0
// 0061e7a0  750f                 jne 0x61e7b1
// 0061e7a2  e859ffffff           call 0x61e700
// 0061e7a7  84c0                 test al, al
// 0061e7a9  7506                 jne 0x61e7b1
// 0061e7ab  5f                   pop edi
// 0061e7ac  5e                   pop esi
// 0061e7ad  83c43c               add esp, 0x3c
// 0061e7b0  c3                   ret 
// 0061e7b1  807f0800             cmp byte ptr [edi + 8], 0
// 0061e7b5  53                   push ebx
// 0061e7b6  55                   push ebp
// 0061e7b7  0f85be030000         jne 0x61eb7b
// 0061e7bd  83be4001000000       cmp dword ptr [esi + 0x140], 0
// 0061e7c4  8b4618               mov eax, dword ptr [esi + 0x18]
// 0061e7c7  8b08                 mov ecx, dword ptr [eax]
// 0061e7c9  8b5004               mov edx, dword ptr [eax + 4]
// 0061e7cc  8b5f0c               mov ebx, dword ptr [edi + 0xc]
// 0061e7cf  8b4710               mov eax, dword ptr [edi + 0x10]
// 0061e7d2  894c2438             mov dword ptr [esp + 0x38], ecx
// 0061e7d6  8b4f14               mov ecx, dword ptr [edi + 0x14]
// 0061e7d9  8954243c             mov dword ptr [esp + 0x3c], edx
// 0061e7dd  8b5718               mov edx, dword ptr [edi + 0x18]
// 0061e7e0  894c2428             mov dword ptr [esp + 0x28], ecx
// 0061e7e4  8b4f1c               mov ecx, dword ptr [edi + 0x1c]
// 0061e7e7  8954242c             mov dword ptr [esp + 0x2c], edx
// 0061e7eb  8b5720               mov edx, dword ptr [edi + 0x20]
// 0061e7ee  89742448             mov dword ptr [esp + 0x48], esi
// 0061e7f2  894c2430             mov dword ptr [esp + 0x30], ecx
// 0061e7f6  89542434             mov dword ptr [esp + 0x34], edx
// 0061e7fa  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0061e802  0f8e3e030000         jle 0x61eb46
// 0061e808  81c644010000         add esi, 0x144
// 0061e80e  8d4f70               lea ecx, [edi + 0x70]
// 0061e811  8974241c             mov dword ptr [esp + 0x1c], esi
// 0061e815  894c2418             mov dword ptr [esp + 0x18], ecx
// 0061e819  eb09                 jmp 0x61e824
// 0061e81b  eb03                 jmp 0x61e820
// 0061e81d  8d4900               lea ecx, [ecx]
// 0061e820  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0061e824  83f808               cmp eax, 8
// 0061e827  8b542454             mov edx, dword ptr [esp + 0x54]
// 0061e82b  8b742410             mov esi, dword ptr [esp + 0x10]
// 0061e82f  8b34b2               mov esi, dword ptr [edx + esi*4]
// 0061e832  8b29                 mov ebp, dword ptr [ecx]
// 0061e834  8b79d8               mov edi, dword ptr [ecx - 0x28]
// 0061e837  89742424             mov dword ptr [esp + 0x24], esi
// 0061e83b  896c2414             mov dword ptr [esp + 0x14], ebp
// 0061e83f  7d2d                 jge 0x61e86e
// 0061e841  6a00                 push 0
// 0061e843  50                   push eax
// 0061e844  8d442440             lea eax, [esp + 0x40]
// 0061e848  53                   push ebx
// 0061e849  50                   push eax
// 0061e84a  e8b1fcffff           call 0x61e500
// 0061e84f  83c410               add esp, 0x10
// 0061e852  84c0                 test al, al
// 0061e854  0f842e030000         je 0x61eb88
// 0061e85a  8b442444             mov eax, dword ptr [esp + 0x44]
// 0061e85e  83f808               cmp eax, 8
// 0061e861  8b5c2440             mov ebx, dword ptr [esp + 0x40]
// 0061e865  7d07                 jge 0x61e86e
// 0061e867  b901000000           mov ecx, 1
// 0061e86c  eb29                 jmp 0x61e897
// 0061e86e  8d48f8               lea ecx, [eax - 8]
// 0061e871  8bd3                 mov edx, ebx
// 0061e873  d3fa                 sar edx, cl
// 0061e875  81e2ff000000         and edx, 0xff
// 0061e87b  8b8c9790000000       mov ecx, dword ptr [edi + edx*4 + 0x90]
// 0061e882  85c9                 test ecx, ecx
// 0061e884  740c                 je 0x61e892
// 0061e886  0fb6bc3a90040000     movzx edi, byte ptr [edx + edi + 0x490]
// 0061e88e  2bc1                 sub eax, ecx
// 0061e890  eb28                 jmp 0x61e8ba
// 0061e892  b909000000           mov ecx, 9
// 0061e897  51                   push ecx
// 0061e898  57                   push edi
// 0061e899  50                   push eax
// 0061e89a  8d4c2444             lea ecx, [esp + 0x44]
// 0061e89e  53                   push ebx
// 0061e89f  51                   push ecx
// 0061e8a0  e87bfdffff           call 0x61e620
// 0061e8a5  8bf8                 mov edi, eax
// 0061e8a7  83c414               add esp, 0x14
// 0061e8aa  85ff                 test edi, edi
// 0061e8ac  0f8cd6020000         jl 0x61eb88
// 0061e8b2  8b5c2440             mov ebx, dword ptr [esp + 0x40]
// 0061e8b6  8b442444             mov eax, dword ptr [esp + 0x44]
// 0061e8ba  85ff                 test edi, edi
// 0061e8bc  7452                 je 0x61e910
// 0061e8be  3bc7                 cmp eax, edi
// 0061e8c0  7d20                 jge 0x61e8e2
// 0061e8c2  57                   push edi
// 0061e8c3  50                   push eax
// 0061e8c4  8d542440             lea edx, [esp + 0x40]
// 0061e8c8  53                   push ebx
// 0061e8c9  52                   push edx
// 0061e8ca  e831fcffff           call 0x61e500
// 0061e8cf  83c410               add esp, 0x10
// 0061e8d2  84c0                 test al, al
// 0061e8d4  0f84ae020000         je 0x61eb88
// 0061e8da  8b5c2440             mov ebx, dword ptr [esp + 0x40]
// 0061e8de  8b442444             mov eax, dword ptr [esp + 0x44]
// 0061e8e2  8bcf                 mov ecx, edi
// 0061e8e4  2bc7                 sub eax, edi
// 0061e8e6  ba01000000           mov edx, 1
// 0061e8eb  d3e2                 shl edx, cl
// 0061e8ed  8beb                 mov ebp, ebx
// 0061e8ef  8bc8                 mov ecx, eax
// 0061e8f1  d3fd                 sar ebp, cl
// 0061e8f3  4a                   dec edx
// 0061e8f4  23d5                 and edx, ebp
// 0061e8f6  3b14bdd0a89c00       cmp edx, dword ptr [edi*4 + 0x9ca8d0]
// 0061e8fd  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0061e901  7d0b                 jge 0x61e90e
// 0061e903  8b3cbd10a99c00       mov edi, dword ptr [edi*4 + 0x9ca910]
// 0061e90a  03fa                 add edi, edx
// 0061e90c  eb02                 jmp 0x61e910
// 0061e90e  8bfa                 mov edi, edx
// 0061e910  8b542410             mov edx, dword ptr [esp + 0x10]
// 0061e914  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0061e918  80bc0a9800000000     cmp byte ptr [edx + ecx + 0x98], 0
// 0061e920  7413                 je 0x61e935
// 0061e922  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0061e926  8b09                 mov ecx, dword ptr [ecx]
// 0061e928  017c8c28             add dword ptr [esp + ecx*4 + 0x28], edi
// 0061e92c  8d4c8c28             lea ecx, [esp + ecx*4 + 0x28]
// 0061e930  8b09                 mov ecx, dword ptr [ecx]
// 0061e932  66890e               mov word ptr [esi], cx
// 0061e935  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0061e939  80bc0aa200000000     cmp byte ptr [edx + ecx + 0xa2], 0
// 0061e941  be01000000           mov esi, 1
// 0061e946  0f840b010000         je 0x61ea57
// 0061e94c  8d642400             lea esp, [esp]
// 0061e950  83f808               cmp eax, 8
// 0061e953  7d2d                 jge 0x61e982
// 0061e955  6a00                 push 0
// 0061e957  50                   push eax
// 0061e958  8d542440             lea edx, [esp + 0x40]
// 0061e95c  53                   push ebx
// 0061e95d  52                   push edx
// 0061e95e  e89dfbffff           call 0x61e500
// 0061e963  83c410               add esp, 0x10
// 0061e966  84c0                 test al, al
// 0061e968  0f841a020000         je 0x61eb88
// 0061e96e  8b442444             mov eax, dword ptr [esp + 0x44]
// 0061e972  83f808               cmp eax, 8
// 0061e975  8b5c2440             mov ebx, dword ptr [esp + 0x40]
// 0061e979  7d07                 jge 0x61e982
// 0061e97b  b901000000           mov ecx, 1
// 0061e980  eb29                 jmp 0x61e9ab
// 0061e982  8d48f8               lea ecx, [eax - 8]
// 0061e985  8bd3                 mov edx, ebx
// 0061e987  d3fa                 sar edx, cl
// 0061e989  81e2ff000000         and edx, 0xff
// 0061e98f  8b8c9590000000       mov ecx, dword ptr [ebp + edx*4 + 0x90]
// 0061e996  85c9                 test ecx, ecx
// 0061e998  740c                 je 0x61e9a6
// 0061e99a  0fb6bc2a90040000     movzx edi, byte ptr [edx + ebp + 0x490]
// 0061e9a2  2bc1                 sub eax, ecx
// 0061e9a4  eb28                 jmp 0x61e9ce
// 0061e9a6  b909000000           mov ecx, 9
// 0061e9ab  51                   push ecx
// 0061e9ac  55                   push ebp
// 0061e9ad  50                   push eax
// 0061e9ae  8d442444             lea eax, [esp + 0x44]
// 0061e9b2  53                   push ebx
// 0061e9b3  50                   push eax
// 0061e9b4  e867fcffff           call 0x61e620
// 0061e9b9  8bf8                 mov edi, eax
// 0061e9bb  83c414               add esp, 0x14
// 0061e9be  85ff                 test edi, edi
// 0061e9c0  0f8cc2010000         jl 0x61eb88
// 0061e9c6  8b5c2440             mov ebx, dword ptr [esp + 0x40]
// 0061e9ca  8b442444             mov eax, dword ptr [esp + 0x44]
// 0061e9ce  8bcf                 mov ecx, edi
// 0061e9d0  c1f904               sar ecx, 4
// 0061e9d3  83e70f               and edi, 0xf
// 0061e9d6  7465                 je 0x61ea3d
// 0061e9d8  03f1                 add esi, ecx
// 0061e9da  3bc7                 cmp eax, edi
// 0061e9dc  7d20                 jge 0x61e9fe
// 0061e9de  57                   push edi
// 0061e9df  50                   push eax
// 0061e9e0  8d4c2440             lea ecx, [esp + 0x40]
// 0061e9e4  53                   push ebx
// 0061e9e5  51                   push ecx
// 0061e9e6  e815fbffff           call 0x61e500
// 0061e9eb  83c410               add esp, 0x10
// 0061e9ee  84c0                 test al, al
// 0061e9f0  0f8492010000         je 0x61eb88
// 0061e9f6  8b5c2440             mov ebx, dword ptr [esp + 0x40]
// 0061e9fa  8b442444             mov eax, dword ptr [esp + 0x44]
// 0061e9fe  8bcf                 mov ecx, edi
// 0061ea00  2bc7                 sub eax, edi
// 0061ea02  ba01000000           mov edx, 1
// 0061ea07  d3e2                 shl edx, cl
// 0061ea09  8beb                 mov ebp, ebx
// 0061ea0b  8bc8                 mov ecx, eax
// 0061ea0d  d3fd                 sar ebp, cl
// 0061ea0f  4a                   dec edx
// 0061ea10  23d5                 and edx, ebp
// 0061ea12  3b14bdd0a89c00       cmp edx, dword ptr [edi*4 + 0x9ca8d0]
// 0061ea19  7d0b                 jge 0x61ea26
// 0061ea1b  8b3cbd10a99c00       mov edi, dword ptr [edi*4 + 0x9ca910]
// 0061ea22  03fa                 add edi, edx
// 0061ea24  eb02                 jmp 0x61ea28
// 0061ea26  8bfa                 mov edi, edx
// 0061ea28  8b14b598579c00       mov edx, dword ptr [esi*4 + 0x9c5798]
// 0061ea2f  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0061ea33  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0061ea37  66893c51             mov word ptr [ecx + edx*2], di
// 0061ea3b  eb0b                 jmp 0x61ea48
// 0061ea3d  83f90f               cmp ecx, 0xf
// 0061ea40  0f85d4000000         jne 0x61eb1a
// 0061ea46  03f1                 add esi, ecx
// 0061ea48  46                   inc esi
// 0061ea49  83fe40               cmp esi, 0x40
// 0061ea4c  0f8cfefeffff         jl 0x61e950
// 0061ea52  e9c3000000           jmp 0x61eb1a
// 0061ea57  83f808               cmp eax, 8
// 0061ea5a  7d2d                 jge 0x61ea89
// 0061ea5c  6a00                 push 0
// 0061ea5e  50                   push eax
// 0061ea5f  8d542440             lea edx, [esp + 0x40]
// 0061ea63  53                   push ebx
// 0061ea64  52                   push edx
// 0061ea65  e896faffff           call 0x61e500
// 0061ea6a  83c410               add esp, 0x10
// 0061ea6d  84c0                 test al, al
// 0061ea6f  0f8413010000         je 0x61eb88
// 0061ea75  8b442444             mov eax, dword ptr [esp + 0x44]
// 0061ea79  83f808               cmp eax, 8
// 0061ea7c  8b5c2440             mov ebx, dword ptr [esp + 0x40]
// 0061ea80  7d07                 jge 0x61ea89
// 0061ea82  b901000000           mov ecx, 1
// 0061ea87  eb29                 jmp 0x61eab2
// 0061ea89  8d48f8               lea ecx, [eax - 8]
// 0061ea8c  8bd3                 mov edx, ebx
// 0061ea8e  d3fa                 sar edx, cl
// 0061ea90  81e2ff000000         and edx, 0xff
// 0061ea96  8b8c9590000000       mov ecx, dword ptr [ebp + edx*4 + 0x90]
// 0061ea9d  85c9                 test ecx, ecx
// 0061ea9f  740c                 je 0x61eaad
// 0061eaa1  0fb6bc2a90040000     movzx edi, byte ptr [edx + ebp + 0x490]
// 0061eaa9  2bc1                 sub eax, ecx
// 0061eaab  eb28                 jmp 0x61ead5
// 0061eaad  b909000000           mov ecx, 9
// 0061eab2  51                   push ecx
// 0061eab3  55                   push ebp
// 0061eab4  50                   push eax
// 0061eab5  8d442444             lea eax, [esp + 0x44]
// 0061eab9  53                   push ebx
// 0061eaba  50                   push eax
// 0061eabb  e860fbffff           call 0x61e620
// 0061eac0  8bf8                 mov edi, eax
// 0061eac2  83c414               add esp, 0x14
// 0061eac5  85ff                 test edi, edi
// 0061eac7  0f8cbb000000         jl 0x61eb88
// 0061eacd  8b5c2440             mov ebx, dword ptr [esp + 0x40]
// 0061ead1  8b442444             mov eax, dword ptr [esp + 0x44]
// 0061ead5  8bcf                 mov ecx, edi
// 0061ead7  c1f904               sar ecx, 4
// 0061eada  83e70f               and edi, 0xf
// 0061eadd  742a                 je 0x61eb09
// 0061eadf  03f1                 add esi, ecx
// 0061eae1  3bc7                 cmp eax, edi
// 0061eae3  7d20                 jge 0x61eb05
// 0061eae5  57                   push edi
// 0061eae6  50                   push eax
// 0061eae7  8d4c2440             lea ecx, [esp + 0x40]
// 0061eaeb  53                   push ebx
// 0061eaec  51                   push ecx
// 0061eaed  e80efaffff           call 0x61e500
// 0061eaf2  83c410               add esp, 0x10
// 0061eaf5  84c0                 test al, al
// 0061eaf7  0f848b000000         je 0x61eb88
// 0061eafd  8b5c2440             mov ebx, dword ptr [esp + 0x40]
// 0061eb01  8b442444             mov eax, dword ptr [esp + 0x44]
// 0061eb05  2bc7                 sub eax, edi
// 0061eb07  eb07                 jmp 0x61eb10
// 0061eb09  83f90f               cmp ecx, 0xf
// 0061eb0c  750c                 jne 0x61eb1a
// 0061eb0e  03f1                 add esi, ecx
// 0061eb10  46                   inc esi
// 0061eb11  83fe40               cmp esi, 0x40
// 0061eb14  0f8c3dffffff         jl 0x61ea57
// 0061eb1a  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0061eb1e  ba04000000           mov edx, 4
// 0061eb23  01542418             add dword ptr [esp + 0x18], edx
// 0061eb27  0154241c             add dword ptr [esp + 0x1c], edx
// 0061eb2b  8b542450             mov edx, dword ptr [esp + 0x50]
// 0061eb2f  41                   inc ecx
// 0061eb30  3b8a40010000         cmp ecx, dword ptr [edx + 0x140]
// 0061eb36  894c2410             mov dword ptr [esp + 0x10], ecx
// 0061eb3a  0f8ce0fcffff         jl 0x61e820
// 0061eb40  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0061eb44  8bf2                 mov esi, edx
// 0061eb46  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0061eb49  8b542438             mov edx, dword ptr [esp + 0x38]
// 0061eb4d  8911                 mov dword ptr [ecx], edx
// 0061eb4f  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0061eb52  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 0061eb56  895104               mov dword ptr [ecx + 4], edx
// 0061eb59  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0061eb5d  8b542430             mov edx, dword ptr [esp + 0x30]
// 0061eb61  894710               mov dword ptr [edi + 0x10], eax
// 0061eb64  8b442428             mov eax, dword ptr [esp + 0x28]
// 0061eb68  894714               mov dword ptr [edi + 0x14], eax
// 0061eb6b  8b442434             mov eax, dword ptr [esp + 0x34]
// 0061eb6f  894f18               mov dword ptr [edi + 0x18], ecx
// 0061eb72  89571c               mov dword ptr [edi + 0x1c], edx
// 0061eb75  895f0c               mov dword ptr [edi + 0xc], ebx
// 0061eb78  894720               mov dword ptr [edi + 0x20], eax
// 0061eb7b  ff4f24               dec dword ptr [edi + 0x24]
// 0061eb7e  5d                   pop ebp
// 0061eb7f  5b                   pop ebx
// 0061eb80  5f                   pop edi
// 0061eb81  b001                 mov al, 1
// 0061eb83  5e                   pop esi
// 0061eb84  83c43c               add esp, 0x3c
// 0061eb87  c3                   ret 
// 0061eb88  5d                   pop ebp
// 0061eb89  5b                   pop ebx
// 0061eb8a  5f                   pop edi
// 0061eb8b  32c0                 xor al, al
// 0061eb8d  5e                   pop esi
// 0061eb8e  83c43c               add esp, 0x3c
// 0061eb91  c3                   ret 
// library jpeg-6b/jdhuff.c (function _decode_mcu)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdhuff.c
