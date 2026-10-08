// roc 2008-06 0047c530  unit: seg_00470000  size: 1955 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0047c530
//
// 0047c530  6aff                 push -1
// 0047c532  68eb4d7c00           push 0x7c4deb
// 0047c537  64a100000000         mov eax, dword ptr fs:[0]
// 0047c53d  50                   push eax
// 0047c53e  64892500000000       mov dword ptr fs:[0], esp
// 0047c545  81ec24010000         sub esp, 0x124
// 0047c54b  53                   push ebx
// 0047c54c  55                   push ebp
// 0047c54d  56                   push esi
// 0047c54e  8bf1                 mov esi, ecx
// 0047c550  57                   push edi
// 0047c551  8bbc2444010000       mov edi, dword ptr [esp + 0x144]
// 0047c558  33db                 xor ebx, ebx
// 0047c55a  8d4c2458             lea ecx, [esp + 0x58]
// 0047c55e  c6461c01             mov byte ptr [esi + 0x1c], 1
// 0047c562  885e1d               mov byte ptr [esi + 0x1d], bl
// 0047c565  893e                 mov dword ptr [esi], edi
// 0047c567  e874e7fdff           call 0x45ace0
// 0047c56c  8b07                 mov eax, dword ptr [edi]
// 0047c56e  8b10                 mov edx, dword ptr [eax]
// 0047c570  8d4c2458             lea ecx, [esp + 0x58]
// 0047c574  51                   push ecx
// 0047c575  8bcf                 mov ecx, edi
// 0047c577  899c2440010000       mov dword ptr [esp + 0x140], ebx
// 0047c57e  ffd2                 call edx
// 0047c580  8bbc2448010000       mov edi, dword ptr [esp + 0x148]
// 0047c587  57                   push edi
// 0047c588  e86351ffff           call 0x4716f0
// 0047c58d  83c404               add esp, 4
// 0047c590  897e08               mov dword ptr [esi + 8], edi
// 0047c593  895e18               mov dword ptr [esi + 0x18], ebx
// 0047c596  3bfb                 cmp edi, ebx
// 0047c598  7435                 je 0x47c5cf
// 0047c59a  68d8ee8100           push 0x81eed8
// 0047c59f  8d4c241c             lea ecx, [esp + 0x1c]
// 0047c5a3  ff1558248000         call dword ptr [0x802458]
// 0047c5a9  8b4e08               mov ecx, dword ptr [esi + 8]
// 0047c5ac  8d442418             lea eax, [esp + 0x18]
// 0047c5b0  50                   push eax
// 0047c5b1  c684244001000001     mov byte ptr [esp + 0x140], 1
// 0047c5b9  e8d2d80800           call 0x509e90
// 0047c5be  8d4c2418             lea ecx, [esp + 0x18]
// 0047c5c2  889c243c010000       mov byte ptr [esp + 0x13c], bl
// 0047c5c9  ff1568248000         call dword ptr [0x802468]
// 0047c5cf  53                   push ebx
// 0047c5d0  ff15d0218000         call dword ptr [0x8021d0]
// 0047c5d6  8b442474             mov eax, dword ptr [esp + 0x74]
// 0047c5da  83f810               cmp eax, 0x10
// 0047c5dd  89442414             mov dword ptr [esp + 0x14], eax
// 0047c5e1  7e08                 jle 0x47c5eb
// 0047c5e3  c744241410000000     mov dword ptr [esp + 0x14], 0x10
// 0047c5eb  803d7eee960000       cmp byte ptr [0x96ee7e], 0
// 0047c5f2  89442440             mov dword ptr [esp + 0x40], eax
// 0047c5f6  8b442478             mov eax, dword ptr [esp + 0x78]
// 0047c5fa  89442438             mov dword ptr [esp + 0x38], eax
// 0047c5fe  8944244c             mov dword ptr [esp + 0x4c], eax
// 0047c602  741f                 je 0x47c623
// 0047c604  68e2840000           push 0x84e2
// 0047c609  e8d2710000           call 0x4837e0
// 0047c60e  83c404               add esp, 4
// 0047c611  83f808               cmp eax, 8
// 0047c614  7e05                 jle 0x47c61b
// 0047c616  b808000000           mov eax, 8
// 0047c61b  898614010000         mov dword ptr [esi + 0x114], eax
// 0047c621  eb0a                 jmp 0x47c62d
// 0047c623  c7861401000001000000 mov dword ptr [esi + 0x114], 1
// 0047c62d  6814d18100           push 0x81d114
// 0047c632  8d4c241c             lea ecx, [esp + 0x1c]
// 0047c636  ff1558248000         call dword ptr [0x802458]
// 0047c63c  8d4c2418             lea ecx, [esp + 0x18]
// 0047c640  51                   push ecx
// 0047c641  c684244001000002     mov byte ptr [esp + 0x140], 2
// 0047c649  e8124affff           call 0x471060
// 0047c64e  83c404               add esp, 4
// 0047c651  8d4c2418             lea ecx, [esp + 0x18]
// 0047c655  8ad8                 mov bl, al
// 0047c657  c684243c01000000     mov byte ptr [esp + 0x13c], 0
// 0047c65f  ff1568248000         call dword ptr [0x802468]
// 0047c665  8dae1c010000         lea ebp, [esi + 0x11c]
// 0047c66b  84db                 test bl, bl
// 0047c66d  7456                 je 0x47c6c5
// 0047c66f  8b1db42a8000         mov ebx, dword ptr [0x802ab4]
// 0047c675  55                   push ebp
// 0047c676  6871880000           push 0x8871
// 0047c67b  ffd3                 call ebx
// 0047c67d  8b8e14010000         mov ecx, dword ptr [esi + 0x114]
// 0047c683  8b4500               mov eax, dword ptr [ebp]
// 0047c686  3bc1                 cmp eax, ecx
// 0047c688  7f04                 jg 0x47c68e
// 0047c68a  8bc1                 mov eax, ecx
// 0047c68c  eb0a                 jmp 0x47c698
// 0047c68e  83f808               cmp eax, 8
// 0047c691  7c05                 jl 0x47c698
// 0047c693  b808000000           mov eax, 8
// 0047c698  8dbe18010000         lea edi, [esi + 0x118]
// 0047c69e  57                   push edi
// 0047c69f  6872880000           push 0x8872
// 0047c6a4  894500               mov dword ptr [ebp], eax
// 0047c6a7  ffd3                 call ebx
// 0047c6a9  8b8e14010000         mov ecx, dword ptr [esi + 0x114]
// 0047c6af  8b07                 mov eax, dword ptr [edi]
// 0047c6b1  3bc1                 cmp eax, ecx
// 0047c6b3  7f04                 jg 0x47c6b9
// 0047c6b5  8bc1                 mov eax, ecx
// 0047c6b7  eb1b                 jmp 0x47c6d4
// 0047c6b9  83f808               cmp eax, 8
// 0047c6bc  7c16                 jl 0x47c6d4
// 0047c6be  b808000000           mov eax, 8
// 0047c6c3  eb0f                 jmp 0x47c6d4
// 0047c6c5  8b8614010000         mov eax, dword ptr [esi + 0x114]
// 0047c6cb  894500               mov dword ptr [ebp], eax
// 0047c6ce  8dbe18010000         lea edi, [esi + 0x118]
// 0047c6d4  8907                 mov dword ptr [edi], eax
// 0047c6d6  803d7eee960000       cmp byte ptr [0x96ee7e], 0
// 0047c6dd  7570                 jne 0x47c74f
// 0047c6df  837e0800             cmp dword ptr [esi + 8], 0
// 0047c6e3  7436                 je 0x47c71b
// 0047c6e5  68c0d08100           push 0x81d0c0
// 0047c6ea  8d4c241c             lea ecx, [esp + 0x1c]
// 0047c6ee  ff1558248000         call dword ptr [0x802458]
// 0047c6f4  8b4e08               mov ecx, dword ptr [esi + 8]
// 0047c6f7  8d542418             lea edx, [esp + 0x18]
// 0047c6fb  52                   push edx
// 0047c6fc  c684244001000003     mov byte ptr [esp + 0x140], 3
// 0047c704  e8e7d70800           call 0x509ef0
// 0047c709  8d4c2418             lea ecx, [esp + 0x18]
// 0047c70d  c684243c01000000     mov byte ptr [esp + 0x13c], 0
// 0047c715  ff1568248000         call dword ptr [0x802468]
// 0047c71b  8b4500               mov eax, dword ptr [ebp]
// 0047c71e  83f801               cmp eax, 1
// 0047c721  7f05                 jg 0x47c728
// 0047c723  b801000000           mov eax, 1
// 0047c728  894500               mov dword ptr [ebp], eax
// 0047c72b  8b07                 mov eax, dword ptr [edi]
// 0047c72d  83f801               cmp eax, 1
// 0047c730  7f05                 jg 0x47c737
// 0047c732  b801000000           mov eax, 1
// 0047c737  8907                 mov dword ptr [edi], eax
// 0047c739  8b8614010000         mov eax, dword ptr [esi + 0x114]
// 0047c73f  83f801               cmp eax, 1
// 0047c742  7f05                 jg 0x47c749
// 0047c744  b801000000           mov eax, 1
// 0047c749  898614010000         mov dword ptr [esi + 0x114], eax
// 0047c74f  837e0800             cmp dword ptr [esi + 8], 0
// 0047c753  0f848e000000         je 0x47c7e7
// 0047c759  33db                 xor ebx, ebx
// 0047c75b  33c0                 xor eax, eax
// 0047c75d  381d7eee9600         cmp byte ptr [0x96ee7e], bl
// 0047c763  740f                 je 0x47c774
// 0047c765  68e2840000           push 0x84e2
// 0047c76a  e871700000           call 0x4837e0
// 0047c76f  83c404               add esp, 4
// 0047c772  8bd8                 mov ebx, eax
// 0047c774  803d7dee960000       cmp byte ptr [0x96ee7d], 0
// 0047c77b  740d                 je 0x47c78a
// 0047c77d  6872880000           push 0x8872
// 0047c782  e859700000           call 0x4837e0
// 0047c787  83c404               add esp, 4
// 0047c78a  8b0f                 mov ecx, dword ptr [edi]
// 0047c78c  8b5500               mov edx, dword ptr [ebp]
// 0047c78f  50                   push eax
// 0047c790  8b8614010000         mov eax, dword ptr [esi + 0x114]
// 0047c796  53                   push ebx
// 0047c797  50                   push eax
// 0047c798  8b4608               mov eax, dword ptr [esi + 8]
// 0047c79b  51                   push ecx
// 0047c79c  52                   push edx
// 0047c79d  6800ee8100           push 0x81ee00
// 0047c7a2  50                   push eax
// 0047c7a3  e878d90800           call 0x50a120
// 0047c7a8  83c41c               add esp, 0x1c
// 0047c7ab  837e0800             cmp dword ptr [esi + 8], 0
// 0047c7af  7436                 je 0x47c7e7
// 0047c7b1  68eced8100           push 0x81edec
// 0047c7b6  8d4c241c             lea ecx, [esp + 0x1c]
// 0047c7ba  ff1558248000         call dword ptr [0x802458]
// 0047c7c0  8d4c2418             lea ecx, [esp + 0x18]
// 0047c7c4  51                   push ecx
// 0047c7c5  8b4e08               mov ecx, dword ptr [esi + 8]
// 0047c7c8  c684244001000004     mov byte ptr [esp + 0x140], 4
// 0047c7d0  e81bd70800           call 0x509ef0
// 0047c7d5  8d4c2418             lea ecx, [esp + 0x18]
// 0047c7d9  c684243c01000000     mov byte ptr [esp + 0x13c], 0
// 0047c7e1  ff1568248000         call dword ptr [0x802468]
// 0047c7e7  8bce                 mov ecx, esi
// 0047c7e9  e8d2f8ffff           call 0x47c0c0
// 0047c7ee  8b1d94298000         mov ebx, dword ptr [0x802994]
// 0047c7f4  68011f0000           push 0x1f01
// 0047c7f9  bfc4998100           mov edi, 0x8199c4
// 0047c7fe  ffd3                 call ebx
// 0047c800  8a08                 mov cl, byte ptr [eax]
// 0047c802  3a0f                 cmp cl, byte ptr [edi]
// 0047c804  751a                 jne 0x47c820
// 0047c806  84c9                 test cl, cl
// 0047c808  7412                 je 0x47c81c
// 0047c80a  8a4801               mov cl, byte ptr [eax + 1]
// 0047c80d  3a4f01               cmp cl, byte ptr [edi + 1]
// 0047c810  750e                 jne 0x47c820
// 0047c812  83c002               add eax, 2
// 0047c815  83c702               add edi, 2
// 0047c818  84c9                 test cl, cl
// 0047c81a  75e4                 jne 0x47c800
// 0047c81c  33c0                 xor eax, eax
// 0047c81e  eb05                 jmp 0x47c825
// 0047c820  1bc0                 sbb eax, eax
// 0047c822  83d8ff               sbb eax, -1
// 0047c825  85c0                 test eax, eax
// 0047c827  7515                 jne 0x47c83e
// 0047c829  8b4608               mov eax, dword ptr [esi + 8]
// 0047c82c  85c0                 test eax, eax
// 0047c82e  740e                 je 0x47c83e
// 0047c830  6818ec8100           push 0x81ec18
// 0047c835  50                   push eax
// 0047c836  e8e5d80800           call 0x50a120
// 0047c83b  83c408               add esp, 8
// 0047c83e  8b86e8030000         mov eax, dword ptr [esi + 0x3e8]
// 0047c844  85c0                 test eax, eax
// 0047c846  750d                 jne 0x47c855
// 0047c848  8b0e                 mov ecx, dword ptr [esi]
// 0047c84a  8b11                 mov edx, dword ptr [ecx]
// 0047c84c  8b4208               mov eax, dword ptr [edx + 8]
// 0047c84f  ffd0                 call eax
// 0047c851  8bf8                 mov edi, eax
// 0047c853  eb03                 jmp 0x47c858
// 0047c855  8b7840               mov edi, dword ptr [eax + 0x40]
// 0047c858  8b86e8030000         mov eax, dword ptr [esi + 0x3e8]
// 0047c85e  85c0                 test eax, eax
// 0047c860  750b                 jne 0x47c86d
// 0047c862  8b0e                 mov ecx, dword ptr [esi]
// 0047c864  8b11                 mov edx, dword ptr [ecx]
// 0047c866  8b4204               mov eax, dword ptr [edx + 4]
// 0047c869  ffd0                 call eax
// 0047c86b  eb03                 jmp 0x47c870
// 0047c86d  8b4044               mov eax, dword ptr [eax + 0x44]
// 0047c870  57                   push edi
// 0047c871  50                   push eax
// 0047c872  6a00                 push 0
// 0047c874  6a00                 push 0
// 0047c876  ff15e0298000         call dword ptr [0x8029e0]
// 0047c87c  68560d0000           push 0xd56
// 0047c881  e85a6f0000           call 0x4837e0
// 0047c886  8bf8                 mov edi, eax
// 0047c888  68570d0000           push 0xd57
// 0047c88d  897c2458             mov dword ptr [esp + 0x58], edi
// 0047c891  e84a6f0000           call 0x4837e0
// 0047c896  8be8                 mov ebp, eax
// 0047c898  68520d0000           push 0xd52
// 0047c89d  896c2460             mov dword ptr [esp + 0x60], ebp
// 0047c8a1  e83a6f0000           call 0x4837e0
// 0047c8a6  68530d0000           push 0xd53
// 0047c8ab  8944244c             mov dword ptr [esp + 0x4c], eax
// 0047c8af  e82c6f0000           call 0x4837e0
// 0047c8b4  68540d0000           push 0xd54
// 0047c8b9  8944245c             mov dword ptr [esp + 0x5c], eax
// 0047c8bd  e81e6f0000           call 0x4837e0
// 0047c8c2  68550d0000           push 0xd55
// 0047c8c7  8944245c             mov dword ptr [esp + 0x5c], eax
// 0047c8cb  e8106f0000           call 0x4837e0
// 0047c8d0  83c418               add esp, 0x18
// 0047c8d3  3b7c2414             cmp edi, dword ptr [esp + 0x14]
// 0047c8d7  89442434             mov dword ptr [esp + 0x34], eax
// 0047c8db  0f9d442413           setge byte ptr [esp + 0x13]
// 0047c8e0  3b6c2438             cmp ebp, dword ptr [esp + 0x38]
// 0047c8e4  0f9d442412           setge byte ptr [esp + 0x12]
// 0047c8e9  837e0800             cmp dword ptr [esi + 8], 0
// 0047c8ed  0f8429010000         je 0x47ca1c
// 0047c8f3  e898bf0800           call 0x508890
// 0047c8f8  bf10000000           mov edi, 0x10
// 0047c8fd  397818               cmp dword ptr [eax + 0x18], edi
// 0047c900  7205                 jb 0x47c907
// 0047c902  8b4004               mov eax, dword ptr [eax + 4]
// 0047c905  eb03                 jmp 0x47c90a
// 0047c907  83c004               add eax, 4
// 0047c90a  8b4e08               mov ecx, dword ptr [esi + 8]
// 0047c90d  50                   push eax
// 0047c90e  68fceb8100           push 0x81ebfc
// 0047c913  51                   push ecx
// 0047c914  e807d80800           call 0x50a120
// 0047c919  83c40c               add esp, 0xc
// 0047c91c  e8dfbf0800           call 0x508900
// 0047c921  397818               cmp dword ptr [eax + 0x18], edi
// 0047c924  7205                 jb 0x47c92b
// 0047c926  8b4004               mov eax, dword ptr [eax + 4]
// 0047c929  eb03                 jmp 0x47c92e
// 0047c92b  83c004               add eax, 4
// 0047c92e  8b5608               mov edx, dword ptr [esi + 8]
// 0047c931  50                   push eax
// 0047c932  68dceb8100           push 0x81ebdc
// 0047c937  52                   push edx
// 0047c938  e8e3d70800           call 0x50a120
// 0047c93d  83c40c               add esp, 0xc
// 0047c940  e83b3fffff           call 0x470880
// 0047c945  397818               cmp dword ptr [eax + 0x18], edi
// 0047c948  7205                 jb 0x47c94f
// 0047c94a  8b4004               mov eax, dword ptr [eax + 4]
// 0047c94d  eb03                 jmp 0x47c952
// 0047c94f  83c004               add eax, 4
// 0047c952  50                   push eax
// 0047c953  8b4608               mov eax, dword ptr [esi + 8]
// 0047c956  68c8eb8100           push 0x81ebc8
// 0047c95b  50                   push eax
// 0047c95c  e8bfd70800           call 0x50a120
// 0047c961  83c40c               add esp, 0xc
// 0047c964  e83740ffff           call 0x4709a0
// 0047c969  397818               cmp dword ptr [eax + 0x18], edi
// 0047c96c  7205                 jb 0x47c973
// 0047c96e  8b4004               mov eax, dword ptr [eax + 4]
// 0047c971  eb03                 jmp 0x47c976
// 0047c973  83c004               add eax, 4
// 0047c976  8b4e08               mov ecx, dword ptr [esi + 8]
// 0047c979  50                   push eax
// 0047c97a  68b4eb8100           push 0x81ebb4
// 0047c97f  51                   push ecx
// 0047c980  e89bd70800           call 0x50a120
// 0047c985  83c40c               add esp, 0xc
// 0047c988  e8e33dffff           call 0x470770
// 0047c98d  397818               cmp dword ptr [eax + 0x18], edi
// 0047c990  7205                 jb 0x47c997
// 0047c992  8b4004               mov eax, dword ptr [eax + 4]
// 0047c995  eb03                 jmp 0x47c99a
// 0047c997  83c004               add eax, 4
// 0047c99a  8b5608               mov edx, dword ptr [esi + 8]
// 0047c99d  50                   push eax
// 0047c99e  68a0eb8100           push 0x81eba0
// 0047c9a3  52                   push edx
// 0047c9a4  e877d70800           call 0x50a120
// 0047c9a9  83c40c               add esp, 0xc
// 0047c9ac  e8bf46ffff           call 0x471070
// 0047c9b1  397818               cmp dword ptr [eax + 0x18], edi
// 0047c9b4  7205                 jb 0x47c9bb
// 0047c9b6  8b4004               mov eax, dword ptr [eax + 4]
// 0047c9b9  eb03                 jmp 0x47c9be
// 0047c9bb  83c004               add eax, 4
// 0047c9be  50                   push eax
// 0047c9bf  8b4608               mov eax, dword ptr [esi + 8]
// 0047c9c2  6888eb8100           push 0x81eb88
// 0047c9c7  50                   push eax
// 0047c9c8  e853d70800           call 0x50a120
// 0047c9cd  83c40c               add esp, 0xc
// 0047c9d0  68031f0000           push 0x1f03
// 0047c9d5  ffd3                 call ebx
// 0047c9d7  50                   push eax
// 0047c9d8  8d4c241c             lea ecx, [esp + 0x1c]
// 0047c9dc  ff1558248000         call dword ptr [0x802458]
// 0047c9e2  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0047c9e6  c684243c01000005     mov byte ptr [esp + 0x13c], 5
// 0047c9ee  397c2430             cmp dword ptr [esp + 0x30], edi
// 0047c9f2  7304                 jae 0x47c9f8
// 0047c9f4  8d44241c             lea eax, [esp + 0x1c]
// 0047c9f8  8b4e08               mov ecx, dword ptr [esi + 8]
// 0047c9fb  50                   push eax
// 0047c9fc  6870eb8100           push 0x81eb70
// 0047ca01  51                   push ecx
// 0047ca02  e819d70800           call 0x50a120
// 0047ca07  83c40c               add esp, 0xc
// 0047ca0a  8d4c2418             lea ecx, [esp + 0x18]
// 0047ca0e  c684243c01000000     mov byte ptr [esp + 0x13c], 0
// 0047ca16  ff1568248000         call dword ptr [0x802468]
// 0047ca1c  68582e8100           push 0x812e58
// 0047ca21  e87a3fffff           call 0x4709a0
// 0047ca26  50                   push eax
// 0047ca27  8d9424c0000000       lea edx, [esp + 0xc0]
// 0047ca2e  52                   push edx
// 0047ca2f  ff15e4238000         call dword ptr [0x8023e4]
// 0047ca35  8bf8                 mov edi, eax
// 0047ca37  b306                 mov bl, 6
// 0047ca39  889c2448010000       mov byte ptr [esp + 0x148], bl
// 0047ca40  e82b46ffff           call 0x471070
// 0047ca45  50                   push eax
// 0047ca46  8d442428             lea eax, [esp + 0x28]
// 0047ca4a  57                   push edi
// 0047ca4b  50                   push eax
// 0047ca4c  ff15a8248000         call dword ptr [0x8024a8]
// 0047ca52  83c418               add esp, 0x18
// 0047ca55  50                   push eax
// 0047ca56  8d4e50               lea ecx, [esi + 0x50]
// 0047ca59  c684244001000007     mov byte ptr [esp + 0x140], 7
// 0047ca61  ff150c248000         call dword ptr [0x80240c]
// 0047ca67  8d4c2418             lea ecx, [esp + 0x18]
// 0047ca6b  889c243c010000       mov byte ptr [esp + 0x13c], bl
// 0047ca72  ff1568248000         call dword ptr [0x802468]
// 0047ca78  8d8c24b8000000       lea ecx, [esp + 0xb8]
// 0047ca7f  c684243c01000000     mov byte ptr [esp + 0x13c], 0
// 0047ca87  ff1568248000         call dword ptr [0x802468]
// 0047ca8d  837e0800             cmp dword ptr [esi + 8], 0
// 0047ca91  0f8443010000         je 0x47cbda
// 0047ca97  6860eb8100           push 0x81eb60
// 0047ca9c  8d4c241c             lea ecx, [esp + 0x1c]
// 0047caa0  ff1558248000         call dword ptr [0x802458]
// 0047caa6  8d4c2418             lea ecx, [esp + 0x18]
// 0047caaa  51                   push ecx
// 0047caab  8b4e08               mov ecx, dword ptr [esi + 8]
// 0047caae  c684244001000008     mov byte ptr [esp + 0x140], 8
// 0047cab6  e8d5d30800           call 0x509e90
// 0047cabb  8d4c2418             lea ecx, [esp + 0x18]
// 0047cabf  c684243c01000000     mov byte ptr [esp + 0x13c], 0
// 0047cac7  ff1568248000         call dword ptr [0x802468]
// 0047cacd  8d8c24d4000000       lea ecx, [esp + 0xd4]
// 0047cad4  e807e2fdff           call 0x45ace0
// 0047cad9  8b8c2444010000       mov ecx, dword ptr [esp + 0x144]
// 0047cae0  8b11                 mov edx, dword ptr [ecx]
// 0047cae2  8b12                 mov edx, dword ptr [edx]
// 0047cae4  8d8424d4000000       lea eax, [esp + 0xd4]
// 0047caeb  50                   push eax
// 0047caec  c684244001000009     mov byte ptr [esp + 0x140], 9
// 0047caf4  ffd2                 call edx
// 0047caf6  80bc248100000000     cmp byte ptr [esp + 0x81], 0
// 0047cafe  bb54eb8100           mov ebx, 0x81eb54
// 0047cb03  7505                 jne 0x47cb0a
// 0047cb05  bb48eb8100           mov ebx, 0x81eb48
// 0047cb0a  8b7c247c             mov edi, dword ptr [esp + 0x7c]
// 0047cb0e  8bac24f8000000       mov ebp, dword ptr [esp + 0xf8]
// 0047cb15  ba7ce48100           mov edx, 0x81e47c
// 0047cb1a  3bfd                 cmp edi, ebp
// 0047cb1c  7405                 je 0x47cb23
// 0047cb1e  ba70e48100           mov edx, 0x81e470
// 0047cb23  807c241200           cmp byte ptr [esp + 0x12], 0
// 0047cb28  b97ce48100           mov ecx, 0x81e47c
// 0047cb2d  7505                 jne 0x47cb34
// 0047cb2f  b970e48100           mov ecx, 0x81e470
// 0047cb34  807c241300           cmp byte ptr [esp + 0x13], 0
// 0047cb39  b87ce48100           mov eax, 0x81e47c
// 0047cb3e  7505                 jne 0x47cb45
// 0047cb40  b870e48100           mov eax, 0x81e470
// 0047cb45  687ce48100           push 0x81e47c
// 0047cb4a  53                   push ebx
// 0047cb4b  8b5c2464             mov ebx, dword ptr [esp + 0x64]
// 0047cb4f  687ce48100           push 0x81e47c
// 0047cb54  53                   push ebx
// 0047cb55  8b5c2468             mov ebx, dword ptr [esp + 0x68]
// 0047cb59  687ce48100           push 0x81e47c
// 0047cb5e  53                   push ebx
// 0047cb5f  52                   push edx
// 0047cb60  8b542460             mov edx, dword ptr [esp + 0x60]
// 0047cb64  55                   push ebp
// 0047cb65  57                   push edi
// 0047cb66  687ce48100           push 0x81e47c
// 0047cb6b  52                   push edx
// 0047cb6c  8b542474             mov edx, dword ptr [esp + 0x74]
// 0047cb70  687ce48100           push 0x81e47c
// 0047cb75  52                   push edx
// 0047cb76  8b542470             mov edx, dword ptr [esp + 0x70]
// 0047cb7a  687ce48100           push 0x81e47c
// 0047cb7f  52                   push edx
// 0047cb80  8b542470             mov edx, dword ptr [esp + 0x70]
// 0047cb84  687ce48100           push 0x81e47c
// 0047cb89  52                   push edx
// 0047cb8a  8b942490000000       mov edx, dword ptr [esp + 0x90]
// 0047cb91  51                   push ecx
// 0047cb92  8b8c249c000000       mov ecx, dword ptr [esp + 0x9c]
// 0047cb99  51                   push ecx
// 0047cb9a  52                   push edx
// 0047cb9b  8bca                 mov ecx, edx
// 0047cb9d  8b9424a0000000       mov edx, dword ptr [esp + 0xa0]
// 0047cba4  51                   push ecx
// 0047cba5  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 0047cba9  50                   push eax
// 0047cbaa  8b842498000000       mov eax, dword ptr [esp + 0x98]
// 0047cbb1  52                   push edx
// 0047cbb2  8b5608               mov edx, dword ptr [esi + 8]
// 0047cbb5  50                   push eax
// 0047cbb6  51                   push ecx
// 0047cbb7  6818e98100           push 0x81e918
// 0047cbbc  52                   push edx
// 0047cbbd  e85ed50800           call 0x50a120
// 0047cbc2  83c46c               add esp, 0x6c
// 0047cbc5  8d8c2414010000       lea ecx, [esp + 0x114]
// 0047cbcc  c684243c01000000     mov byte ptr [esp + 0x13c], 0
// 0047cbd4  ff1568248000         call dword ptr [0x802468]
// 0047cbda  837e0800             cmp dword ptr [esi + 8], 0
// 0047cbde  c6861001000000       mov byte ptr [esi + 0x110], 0
// 0047cbe5  c6861201000000       mov byte ptr [esi + 0x112], 0
// 0047cbec  7436                 je 0x47cc24
// 0047cbee  68f0e88100           push 0x81e8f0
// 0047cbf3  8d4c241c             lea ecx, [esp + 0x1c]
// 0047cbf7  ff1558248000         call dword ptr [0x802458]
// 0047cbfd  8b4e08               mov ecx, dword ptr [esi + 8]
// 0047cc00  8d442418             lea eax, [esp + 0x18]
// 0047cc04  50                   push eax
// 0047cc05  c68424400100000a     mov byte ptr [esp + 0x140], 0xa
// 0047cc0d  e8ded20800           call 0x509ef0
// 0047cc12  8d4c2418             lea ecx, [esp + 0x18]
// 0047cc16  c684243c01000000     mov byte ptr [esp + 0x13c], 0
// 0047cc1e  ff1568248000         call dword ptr [0x802468]
// 0047cc24  837c243400           cmp dword ptr [esp + 0x34], 0
// 0047cc29  c6869808000001       mov byte ptr [esi + 0x898], 1
// 0047cc30  7430                 je 0x47cc62
// 0047cc32  b901000000           mov ecx, 1
// 0047cc37  014e78               add dword ptr [esi + 0x78], ecx
// 0047cc3a  80bee303000000       cmp byte ptr [esi + 0x3e3], 0
// 0047cc41  751f                 jne 0x47cc62
// 0047cc43  014e70               add dword ptr [esi + 0x70], ecx
// 0047cc46  33c0                 xor eax, eax
// 0047cc48  3886e2030000         cmp byte ptr [esi + 0x3e2], al
// 0047cc4e  51                   push ecx
// 0047cc4f  0f95c0               setne al
// 0047cc52  50                   push eax
// 0047cc53  50                   push eax
// 0047cc54  50                   push eax
// 0047cc55  ff1598298000         call dword ptr [0x802998]
// 0047cc5b  c686e303000001       mov byte ptr [esi + 0x3e3], 1
// 0047cc62  68ece88100           push 0x81e8ec
// 0047cc67  8d4c241c             lea ecx, [esp + 0x1c]
// 0047cc6b  ff1558248000         call dword ptr [0x802458]
// 0047cc71  8b0e                 mov ecx, dword ptr [esi]
// 0047cc73  8b11                 mov edx, dword ptr [ecx]
// 0047cc75  8b5228               mov edx, dword ptr [edx + 0x28]
// 0047cc78  8d442418             lea eax, [esp + 0x18]
// 0047cc7c  50                   push eax
// 0047cc7d  c68424400100000b     mov byte ptr [esp + 0x140], 0xb
// 0047cc85  ffd2                 call edx
// 0047cc87  8d4c2418             lea ecx, [esp + 0x18]
// 0047cc8b  c684243c01000000     mov byte ptr [esp + 0x13c], 0
// 0047cc93  ff1568248000         call dword ptr [0x802468]
// 0047cc99  8b06                 mov eax, dword ptr [esi]
// 0047cc9b  8d8c2498000000       lea ecx, [esp + 0x98]
// 0047cca2  897018               mov dword ptr [eax + 0x18], esi
// 0047cca5  c784243c010000ffffffff mov dword ptr [esp + 0x13c], 0xffffffff
// 0047ccb0  ff1568248000         call dword ptr [0x802468]
// 0047ccb6  8b8c2434010000       mov ecx, dword ptr [esp + 0x134]
// 0047ccbd  5f                   pop edi
// 0047ccbe  5e                   pop esi
// 0047ccbf  5d                   pop ebp
// 0047ccc0  b001                 mov al, 1
// 0047ccc2  5b                   pop ebx
// 0047ccc3  64890d00000000       mov dword ptr fs:[0], ecx
// 0047ccca  81c430010000         add esp, 0x130
// 0047ccd0  c20800               ret 8
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?init@RenderDevice@G3D@@QAE_NPAVGWindow@2@PAVLog@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
