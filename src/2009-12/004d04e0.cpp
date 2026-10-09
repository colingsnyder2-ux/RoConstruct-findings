// roc 2009-12 004d04e0  unit: G3D::PBVTextureFormat::?$Table  size: 1955 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004d04e0
//
// 004d04e0  6aff                 push -1
// 004d04e2  68db329300           push 0x9332db
// 004d04e7  64a100000000         mov eax, dword ptr fs:[0]
// 004d04ed  50                   push eax
// 004d04ee  64892500000000       mov dword ptr fs:[0], esp
// 004d04f5  81ec24010000         sub esp, 0x124
// 004d04fb  53                   push ebx
// 004d04fc  55                   push ebp
// 004d04fd  56                   push esi
// 004d04fe  8bf1                 mov esi, ecx
// 004d0500  57                   push edi
// 004d0501  8bbc2444010000       mov edi, dword ptr [esp + 0x144]
// 004d0508  33db                 xor ebx, ebx
// 004d050a  8d4c2458             lea ecx, [esp + 0x58]
// 004d050e  c6461c01             mov byte ptr [esi + 0x1c], 1
// 004d0512  885e1d               mov byte ptr [esi + 0x1d], bl
// 004d0515  893e                 mov dword ptr [esi], edi
// 004d0517  e8d413f9ff           call 0x4618f0
// 004d051c  8b07                 mov eax, dword ptr [edi]
// 004d051e  8b10                 mov edx, dword ptr [eax]
// 004d0520  8d4c2458             lea ecx, [esp + 0x58]
// 004d0524  51                   push ecx
// 004d0525  8bcf                 mov ecx, edi
// 004d0527  899c2440010000       mov dword ptr [esp + 0x140], ebx
// 004d052e  ffd2                 call edx
// 004d0530  8bbc2448010000       mov edi, dword ptr [esp + 0x148]
// 004d0537  57                   push edi
// 004d0538  e833400000           call 0x4d4570
// 004d053d  83c404               add esp, 4
// 004d0540  897e08               mov dword ptr [esi + 8], edi
// 004d0543  895e18               mov dword ptr [esi + 0x18], ebx
// 004d0546  3bfb                 cmp edi, ebx
// 004d0548  7435                 je 0x4d057f
// 004d054a  68e4629b00           push 0x9b62e4
// 004d054f  8d4c241c             lea ecx, [esp + 0x1c]
// 004d0553  ff15f4b69800         call dword ptr [0x98b6f4]
// 004d0559  8b4e08               mov ecx, dword ptr [esi + 8]
// 004d055c  8d442418             lea eax, [esp + 0x18]
// 004d0560  50                   push eax
// 004d0561  c684244001000001     mov byte ptr [esp + 0x140], 1
// 004d0569  e822ba1100           call 0x5ebf90
// 004d056e  8d4c2418             lea ecx, [esp + 0x18]
// 004d0572  889c243c010000       mov byte ptr [esp + 0x13c], bl
// 004d0579  ff15e4b69800         call dword ptr [0x98b6e4]
// 004d057f  53                   push ebx
// 004d0580  ff15d4b19800         call dword ptr [0x98b1d4]
// 004d0586  8b442474             mov eax, dword ptr [esp + 0x74]
// 004d058a  83f810               cmp eax, 0x10
// 004d058d  89442414             mov dword ptr [esp + 0x14], eax
// 004d0591  7e08                 jle 0x4d059b
// 004d0593  c744241410000000     mov dword ptr [esp + 0x14], 0x10
// 004d059b  803dbed0b70000       cmp byte ptr [0xb7d0be], 0
// 004d05a2  89442440             mov dword ptr [esp + 0x40], eax
// 004d05a6  8b442478             mov eax, dword ptr [esp + 0x78]
// 004d05aa  89442438             mov dword ptr [esp + 0x38], eax
// 004d05ae  8944244c             mov dword ptr [esp + 0x4c], eax
// 004d05b2  741f                 je 0x4d05d3
// 004d05b4  68e2840000           push 0x84e2
// 004d05b9  e8f29e0000           call 0x4da4b0
// 004d05be  83c404               add esp, 4
// 004d05c1  83f808               cmp eax, 8
// 004d05c4  7e05                 jle 0x4d05cb
// 004d05c6  b808000000           mov eax, 8
// 004d05cb  898614010000         mov dword ptr [esi + 0x114], eax
// 004d05d1  eb0a                 jmp 0x4d05dd
// 004d05d3  c7861401000001000000 mov dword ptr [esi + 0x114], 1
// 004d05dd  68cc629b00           push 0x9b62cc
// 004d05e2  8d4c241c             lea ecx, [esp + 0x1c]
// 004d05e6  ff15f4b69800         call dword ptr [0x98b6f4]
// 004d05ec  8d4c2418             lea ecx, [esp + 0x18]
// 004d05f0  51                   push ecx
// 004d05f1  c684244001000002     mov byte ptr [esp + 0x140], 2
// 004d05f9  e822390000           call 0x4d3f20
// 004d05fe  83c404               add esp, 4
// 004d0601  8d4c2418             lea ecx, [esp + 0x18]
// 004d0605  8ad8                 mov bl, al
// 004d0607  c684243c01000000     mov byte ptr [esp + 0x13c], 0
// 004d060f  ff15e4b69800         call dword ptr [0x98b6e4]
// 004d0615  8dae1c010000         lea ebp, [esi + 0x11c]
// 004d061b  84db                 test bl, bl
// 004d061d  7456                 je 0x4d0675
// 004d061f  8b1d1cbb9800         mov ebx, dword ptr [0x98bb1c]
// 004d0625  55                   push ebp
// 004d0626  6871880000           push 0x8871
// 004d062b  ffd3                 call ebx
// 004d062d  8b8e14010000         mov ecx, dword ptr [esi + 0x114]
// 004d0633  8b4500               mov eax, dword ptr [ebp]
// 004d0636  3bc1                 cmp eax, ecx
// 004d0638  7f04                 jg 0x4d063e
// 004d063a  8bc1                 mov eax, ecx
// 004d063c  eb0a                 jmp 0x4d0648
// 004d063e  83f808               cmp eax, 8
// 004d0641  7c05                 jl 0x4d0648
// 004d0643  b808000000           mov eax, 8
// 004d0648  8dbe18010000         lea edi, [esi + 0x118]
// 004d064e  57                   push edi
// 004d064f  6872880000           push 0x8872
// 004d0654  894500               mov dword ptr [ebp], eax
// 004d0657  ffd3                 call ebx
// 004d0659  8b8e14010000         mov ecx, dword ptr [esi + 0x114]
// 004d065f  8b07                 mov eax, dword ptr [edi]
// 004d0661  3bc1                 cmp eax, ecx
// 004d0663  7f04                 jg 0x4d0669
// 004d0665  8bc1                 mov eax, ecx
// 004d0667  eb1b                 jmp 0x4d0684
// 004d0669  83f808               cmp eax, 8
// 004d066c  7c16                 jl 0x4d0684
// 004d066e  b808000000           mov eax, 8
// 004d0673  eb0f                 jmp 0x4d0684
// 004d0675  8b8614010000         mov eax, dword ptr [esi + 0x114]
// 004d067b  894500               mov dword ptr [ebp], eax
// 004d067e  8dbe18010000         lea edi, [esi + 0x118]
// 004d0684  8907                 mov dword ptr [edi], eax
// 004d0686  803dbed0b70000       cmp byte ptr [0xb7d0be], 0
// 004d068d  7570                 jne 0x4d06ff
// 004d068f  837e0800             cmp dword ptr [esi + 8], 0
// 004d0693  7436                 je 0x4d06cb
// 004d0695  6878629b00           push 0x9b6278
// 004d069a  8d4c241c             lea ecx, [esp + 0x1c]
// 004d069e  ff15f4b69800         call dword ptr [0x98b6f4]
// 004d06a4  8b4e08               mov ecx, dword ptr [esi + 8]
// 004d06a7  8d542418             lea edx, [esp + 0x18]
// 004d06ab  52                   push edx
// 004d06ac  c684244001000003     mov byte ptr [esp + 0x140], 3
// 004d06b4  e837b91100           call 0x5ebff0
// 004d06b9  8d4c2418             lea ecx, [esp + 0x18]
// 004d06bd  c684243c01000000     mov byte ptr [esp + 0x13c], 0
// 004d06c5  ff15e4b69800         call dword ptr [0x98b6e4]
// 004d06cb  8b4500               mov eax, dword ptr [ebp]
// 004d06ce  83f801               cmp eax, 1
// 004d06d1  7f05                 jg 0x4d06d8
// 004d06d3  b801000000           mov eax, 1
// 004d06d8  894500               mov dword ptr [ebp], eax
// 004d06db  8b07                 mov eax, dword ptr [edi]
// 004d06dd  83f801               cmp eax, 1
// 004d06e0  7f05                 jg 0x4d06e7
// 004d06e2  b801000000           mov eax, 1
// 004d06e7  8907                 mov dword ptr [edi], eax
// 004d06e9  8b8614010000         mov eax, dword ptr [esi + 0x114]
// 004d06ef  83f801               cmp eax, 1
// 004d06f2  7f05                 jg 0x4d06f9
// 004d06f4  b801000000           mov eax, 1
// 004d06f9  898614010000         mov dword ptr [esi + 0x114], eax
// 004d06ff  837e0800             cmp dword ptr [esi + 8], 0
// 004d0703  0f848e000000         je 0x4d0797
// 004d0709  33db                 xor ebx, ebx
// 004d070b  33c0                 xor eax, eax
// 004d070d  381dbed0b700         cmp byte ptr [0xb7d0be], bl
// 004d0713  740f                 je 0x4d0724
// 004d0715  68e2840000           push 0x84e2
// 004d071a  e8919d0000           call 0x4da4b0
// 004d071f  83c404               add esp, 4
// 004d0722  8bd8                 mov ebx, eax
// 004d0724  803dbdd0b70000       cmp byte ptr [0xb7d0bd], 0
// 004d072b  740d                 je 0x4d073a
// 004d072d  6872880000           push 0x8872
// 004d0732  e8799d0000           call 0x4da4b0
// 004d0737  83c404               add esp, 4
// 004d073a  8b0f                 mov ecx, dword ptr [edi]
// 004d073c  8b5500               mov edx, dword ptr [ebp]
// 004d073f  50                   push eax
// 004d0740  8b8614010000         mov eax, dword ptr [esi + 0x114]
// 004d0746  53                   push ebx
// 004d0747  50                   push eax
// 004d0748  8b4608               mov eax, dword ptr [esi + 8]
// 004d074b  51                   push ecx
// 004d074c  52                   push edx
// 004d074d  68a0619b00           push 0x9b61a0
// 004d0752  50                   push eax
// 004d0753  e8c8ba1100           call 0x5ec220
// 004d0758  83c41c               add esp, 0x1c
// 004d075b  837e0800             cmp dword ptr [esi + 8], 0
// 004d075f  7436                 je 0x4d0797
// 004d0761  688c619b00           push 0x9b618c
// 004d0766  8d4c241c             lea ecx, [esp + 0x1c]
// 004d076a  ff15f4b69800         call dword ptr [0x98b6f4]
// 004d0770  8d4c2418             lea ecx, [esp + 0x18]
// 004d0774  51                   push ecx
// 004d0775  8b4e08               mov ecx, dword ptr [esi + 8]
// 004d0778  c684244001000004     mov byte ptr [esp + 0x140], 4
// 004d0780  e86bb81100           call 0x5ebff0
// 004d0785  8d4c2418             lea ecx, [esp + 0x18]
// 004d0789  c684243c01000000     mov byte ptr [esp + 0x13c], 0
// 004d0791  ff15e4b69800         call dword ptr [0x98b6e4]
// 004d0797  8bce                 mov ecx, esi
// 004d0799  e8d2f8ffff           call 0x4d0070
// 004d079e  8b1d0cbc9800         mov ebx, dword ptr [0x98bc0c]
// 004d07a4  68011f0000           push 0x1f01
// 004d07a9  bf0cea9a00           mov edi, 0x9aea0c
// 004d07ae  ffd3                 call ebx
// 004d07b0  8a08                 mov cl, byte ptr [eax]
// 004d07b2  3a0f                 cmp cl, byte ptr [edi]
// 004d07b4  751a                 jne 0x4d07d0
// 004d07b6  84c9                 test cl, cl
// 004d07b8  7412                 je 0x4d07cc
// 004d07ba  8a4801               mov cl, byte ptr [eax + 1]
// 004d07bd  3a4f01               cmp cl, byte ptr [edi + 1]
// 004d07c0  750e                 jne 0x4d07d0
// 004d07c2  83c002               add eax, 2
// 004d07c5  83c702               add edi, 2
// 004d07c8  84c9                 test cl, cl
// 004d07ca  75e4                 jne 0x4d07b0
// 004d07cc  33c0                 xor eax, eax
// 004d07ce  eb05                 jmp 0x4d07d5
// 004d07d0  1bc0                 sbb eax, eax
// 004d07d2  83d8ff               sbb eax, -1
// 004d07d5  85c0                 test eax, eax
// 004d07d7  7515                 jne 0x4d07ee
// 004d07d9  8b4608               mov eax, dword ptr [esi + 8]
// 004d07dc  85c0                 test eax, eax
// 004d07de  740e                 je 0x4d07ee
// 004d07e0  68b85f9b00           push 0x9b5fb8
// 004d07e5  50                   push eax
// 004d07e6  e835ba1100           call 0x5ec220
// 004d07eb  83c408               add esp, 8
// 004d07ee  8b86e8030000         mov eax, dword ptr [esi + 0x3e8]
// 004d07f4  85c0                 test eax, eax
// 004d07f6  750d                 jne 0x4d0805
// 004d07f8  8b0e                 mov ecx, dword ptr [esi]
// 004d07fa  8b11                 mov edx, dword ptr [ecx]
// 004d07fc  8b4208               mov eax, dword ptr [edx + 8]
// 004d07ff  ffd0                 call eax
// 004d0801  8bf8                 mov edi, eax
// 004d0803  eb03                 jmp 0x4d0808
// 004d0805  8b7840               mov edi, dword ptr [eax + 0x40]
// 004d0808  8b86e8030000         mov eax, dword ptr [esi + 0x3e8]
// 004d080e  85c0                 test eax, eax
// 004d0810  750b                 jne 0x4d081d
// 004d0812  8b0e                 mov ecx, dword ptr [esi]
// 004d0814  8b11                 mov edx, dword ptr [ecx]
// 004d0816  8b4204               mov eax, dword ptr [edx + 4]
// 004d0819  ffd0                 call eax
// 004d081b  eb03                 jmp 0x4d0820
// 004d081d  8b4044               mov eax, dword ptr [eax + 0x44]
// 004d0820  57                   push edi
// 004d0821  50                   push eax
// 004d0822  6a00                 push 0
// 004d0824  6a00                 push 0
// 004d0826  ff15a8bb9800         call dword ptr [0x98bba8]
// 004d082c  68560d0000           push 0xd56
// 004d0831  e87a9c0000           call 0x4da4b0
// 004d0836  8bf8                 mov edi, eax
// 004d0838  68570d0000           push 0xd57
// 004d083d  897c2458             mov dword ptr [esp + 0x58], edi
// 004d0841  e86a9c0000           call 0x4da4b0
// 004d0846  8be8                 mov ebp, eax
// 004d0848  68520d0000           push 0xd52
// 004d084d  896c2460             mov dword ptr [esp + 0x60], ebp
// 004d0851  e85a9c0000           call 0x4da4b0
// 004d0856  68530d0000           push 0xd53
// 004d085b  8944244c             mov dword ptr [esp + 0x4c], eax
// 004d085f  e84c9c0000           call 0x4da4b0
// 004d0864  68540d0000           push 0xd54
// 004d0869  8944245c             mov dword ptr [esp + 0x5c], eax
// 004d086d  e83e9c0000           call 0x4da4b0
// 004d0872  68550d0000           push 0xd55
// 004d0877  8944245c             mov dword ptr [esp + 0x5c], eax
// 004d087b  e8309c0000           call 0x4da4b0
// 004d0880  83c418               add esp, 0x18
// 004d0883  3b7c2414             cmp edi, dword ptr [esp + 0x14]
// 004d0887  89442434             mov dword ptr [esp + 0x34], eax
// 004d088b  0f9d442413           setge byte ptr [esp + 0x13]
// 004d0890  3b6c2438             cmp ebp, dword ptr [esp + 0x38]
// 004d0894  0f9d442412           setge byte ptr [esp + 0x12]
// 004d0899  837e0800             cmp dword ptr [esi + 8], 0
// 004d089d  0f8429010000         je 0x4d09cc
// 004d08a3  e878a51100           call 0x5eae20
// 004d08a8  bf10000000           mov edi, 0x10
// 004d08ad  397818               cmp dword ptr [eax + 0x18], edi
// 004d08b0  7205                 jb 0x4d08b7
// 004d08b2  8b4004               mov eax, dword ptr [eax + 4]
// 004d08b5  eb03                 jmp 0x4d08ba
// 004d08b7  83c004               add eax, 4
// 004d08ba  8b4e08               mov ecx, dword ptr [esi + 8]
// 004d08bd  50                   push eax
// 004d08be  689c5f9b00           push 0x9b5f9c
// 004d08c3  51                   push ecx
// 004d08c4  e857b91100           call 0x5ec220
// 004d08c9  83c40c               add esp, 0xc
// 004d08cc  e8bfa51100           call 0x5eae90
// 004d08d1  397818               cmp dword ptr [eax + 0x18], edi
// 004d08d4  7205                 jb 0x4d08db
// 004d08d6  8b4004               mov eax, dword ptr [eax + 4]
// 004d08d9  eb03                 jmp 0x4d08de
// 004d08db  83c004               add eax, 4
// 004d08de  8b5608               mov edx, dword ptr [esi + 8]
// 004d08e1  50                   push eax
// 004d08e2  687c5f9b00           push 0x9b5f7c
// 004d08e7  52                   push edx
// 004d08e8  e833b91100           call 0x5ec220
// 004d08ed  83c40c               add esp, 0xc
// 004d08f0  e84b2e0000           call 0x4d3740
// 004d08f5  397818               cmp dword ptr [eax + 0x18], edi
// 004d08f8  7205                 jb 0x4d08ff
// 004d08fa  8b4004               mov eax, dword ptr [eax + 4]
// 004d08fd  eb03                 jmp 0x4d0902
// 004d08ff  83c004               add eax, 4
// 004d0902  50                   push eax
// 004d0903  8b4608               mov eax, dword ptr [esi + 8]
// 004d0906  68685f9b00           push 0x9b5f68
// 004d090b  50                   push eax
// 004d090c  e80fb91100           call 0x5ec220
// 004d0911  83c40c               add esp, 0xc
// 004d0914  e8472f0000           call 0x4d3860
// 004d0919  397818               cmp dword ptr [eax + 0x18], edi
// 004d091c  7205                 jb 0x4d0923
// 004d091e  8b4004               mov eax, dword ptr [eax + 4]
// 004d0921  eb03                 jmp 0x4d0926
// 004d0923  83c004               add eax, 4
// 004d0926  8b4e08               mov ecx, dword ptr [esi + 8]
// 004d0929  50                   push eax
// 004d092a  68545f9b00           push 0x9b5f54
// 004d092f  51                   push ecx
// 004d0930  e8ebb81100           call 0x5ec220
// 004d0935  83c40c               add esp, 0xc
// 004d0938  e8f32c0000           call 0x4d3630
// 004d093d  397818               cmp dword ptr [eax + 0x18], edi
// 004d0940  7205                 jb 0x4d0947
// 004d0942  8b4004               mov eax, dword ptr [eax + 4]
// 004d0945  eb03                 jmp 0x4d094a
// 004d0947  83c004               add eax, 4
// 004d094a  8b5608               mov edx, dword ptr [esi + 8]
// 004d094d  50                   push eax
// 004d094e  68405f9b00           push 0x9b5f40
// 004d0953  52                   push edx
// 004d0954  e8c7b81100           call 0x5ec220
// 004d0959  83c40c               add esp, 0xc
// 004d095c  e8cf350000           call 0x4d3f30
// 004d0961  397818               cmp dword ptr [eax + 0x18], edi
// 004d0964  7205                 jb 0x4d096b
// 004d0966  8b4004               mov eax, dword ptr [eax + 4]
// 004d0969  eb03                 jmp 0x4d096e
// 004d096b  83c004               add eax, 4
// 004d096e  50                   push eax
// 004d096f  8b4608               mov eax, dword ptr [esi + 8]
// 004d0972  68285f9b00           push 0x9b5f28
// 004d0977  50                   push eax
// 004d0978  e8a3b81100           call 0x5ec220
// 004d097d  83c40c               add esp, 0xc
// 004d0980  68031f0000           push 0x1f03
// 004d0985  ffd3                 call ebx
// 004d0987  50                   push eax
// 004d0988  8d4c241c             lea ecx, [esp + 0x1c]
// 004d098c  ff15f4b69800         call dword ptr [0x98b6f4]
// 004d0992  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004d0996  c684243c01000005     mov byte ptr [esp + 0x13c], 5
// 004d099e  397c2430             cmp dword ptr [esp + 0x30], edi
// 004d09a2  7304                 jae 0x4d09a8
// 004d09a4  8d44241c             lea eax, [esp + 0x1c]
// 004d09a8  8b4e08               mov ecx, dword ptr [esi + 8]
// 004d09ab  50                   push eax
// 004d09ac  68105f9b00           push 0x9b5f10
// 004d09b1  51                   push ecx
// 004d09b2  e869b81100           call 0x5ec220
// 004d09b7  83c40c               add esp, 0xc
// 004d09ba  8d4c2418             lea ecx, [esp + 0x18]
// 004d09be  c684243c01000000     mov byte ptr [esp + 0x13c], 0
// 004d09c6  ff15e4b69800         call dword ptr [0x98b6e4]
// 004d09cc  6868619a00           push 0x9a6168
// 004d09d1  e88a2e0000           call 0x4d3860
// 004d09d6  50                   push eax
// 004d09d7  8d9424c0000000       lea edx, [esp + 0xc0]
// 004d09de  52                   push edx
// 004d09df  ff1580b69800         call dword ptr [0x98b680]
// 004d09e5  8bf8                 mov edi, eax
// 004d09e7  b306                 mov bl, 6
// 004d09e9  889c2448010000       mov byte ptr [esp + 0x148], bl
// 004d09f0  e83b350000           call 0x4d3f30
// 004d09f5  50                   push eax
// 004d09f6  8d442428             lea eax, [esp + 0x28]
// 004d09fa  57                   push edi
// 004d09fb  50                   push eax
// 004d09fc  ff159cb59800         call dword ptr [0x98b59c]
// 004d0a02  83c418               add esp, 0x18
// 004d0a05  50                   push eax
// 004d0a06  8d4e50               lea ecx, [esi + 0x50]
// 004d0a09  c684244001000007     mov byte ptr [esp + 0x140], 7
// 004d0a11  ff159cb69800         call dword ptr [0x98b69c]
// 004d0a17  8d4c2418             lea ecx, [esp + 0x18]
// 004d0a1b  889c243c010000       mov byte ptr [esp + 0x13c], bl
// 004d0a22  ff15e4b69800         call dword ptr [0x98b6e4]
// 004d0a28  8d8c24b8000000       lea ecx, [esp + 0xb8]
// 004d0a2f  c684243c01000000     mov byte ptr [esp + 0x13c], 0
// 004d0a37  ff15e4b69800         call dword ptr [0x98b6e4]
// 004d0a3d  837e0800             cmp dword ptr [esi + 8], 0
// 004d0a41  0f8443010000         je 0x4d0b8a
// 004d0a47  68005f9b00           push 0x9b5f00
// 004d0a4c  8d4c241c             lea ecx, [esp + 0x1c]
// 004d0a50  ff15f4b69800         call dword ptr [0x98b6f4]
// 004d0a56  8d4c2418             lea ecx, [esp + 0x18]
// 004d0a5a  51                   push ecx
// 004d0a5b  8b4e08               mov ecx, dword ptr [esi + 8]
// 004d0a5e  c684244001000008     mov byte ptr [esp + 0x140], 8
// 004d0a66  e825b51100           call 0x5ebf90
// 004d0a6b  8d4c2418             lea ecx, [esp + 0x18]
// 004d0a6f  c684243c01000000     mov byte ptr [esp + 0x13c], 0
// 004d0a77  ff15e4b69800         call dword ptr [0x98b6e4]
// 004d0a7d  8d8c24d4000000       lea ecx, [esp + 0xd4]
// 004d0a84  e8670ef9ff           call 0x4618f0
// 004d0a89  8b8c2444010000       mov ecx, dword ptr [esp + 0x144]
// 004d0a90  8b11                 mov edx, dword ptr [ecx]
// 004d0a92  8b12                 mov edx, dword ptr [edx]
// 004d0a94  8d8424d4000000       lea eax, [esp + 0xd4]
// 004d0a9b  50                   push eax
// 004d0a9c  c684244001000009     mov byte ptr [esp + 0x140], 9
// 004d0aa4  ffd2                 call edx
// 004d0aa6  80bc248100000000     cmp byte ptr [esp + 0x81], 0
// 004d0aae  bbf45e9b00           mov ebx, 0x9b5ef4
// 004d0ab3  7505                 jne 0x4d0aba
// 004d0ab5  bbe85e9b00           mov ebx, 0x9b5ee8
// 004d0aba  8b7c247c             mov edi, dword ptr [esp + 0x7c]
// 004d0abe  8bac24f8000000       mov ebp, dword ptr [esp + 0xf8]
// 004d0ac5  ba24589b00           mov edx, 0x9b5824
// 004d0aca  3bfd                 cmp edi, ebp
// 004d0acc  7405                 je 0x4d0ad3
// 004d0ace  ba18589b00           mov edx, 0x9b5818
// 004d0ad3  807c241200           cmp byte ptr [esp + 0x12], 0
// 004d0ad8  b924589b00           mov ecx, 0x9b5824
// 004d0add  7505                 jne 0x4d0ae4
// 004d0adf  b918589b00           mov ecx, 0x9b5818
// 004d0ae4  807c241300           cmp byte ptr [esp + 0x13], 0
// 004d0ae9  b824589b00           mov eax, 0x9b5824
// 004d0aee  7505                 jne 0x4d0af5
// 004d0af0  b818589b00           mov eax, 0x9b5818
// 004d0af5  6824589b00           push 0x9b5824
// 004d0afa  53                   push ebx
// 004d0afb  8b5c2464             mov ebx, dword ptr [esp + 0x64]
// 004d0aff  6824589b00           push 0x9b5824
// 004d0b04  53                   push ebx
// 004d0b05  8b5c2468             mov ebx, dword ptr [esp + 0x68]
// 004d0b09  6824589b00           push 0x9b5824
// 004d0b0e  53                   push ebx
// 004d0b0f  52                   push edx
// 004d0b10  8b542460             mov edx, dword ptr [esp + 0x60]
// 004d0b14  55                   push ebp
// 004d0b15  57                   push edi
// 004d0b16  6824589b00           push 0x9b5824
// 004d0b1b  52                   push edx
// 004d0b1c  8b542474             mov edx, dword ptr [esp + 0x74]
// 004d0b20  6824589b00           push 0x9b5824
// 004d0b25  52                   push edx
// 004d0b26  8b542470             mov edx, dword ptr [esp + 0x70]
// 004d0b2a  6824589b00           push 0x9b5824
// 004d0b2f  52                   push edx
// 004d0b30  8b542470             mov edx, dword ptr [esp + 0x70]
// 004d0b34  6824589b00           push 0x9b5824
// 004d0b39  52                   push edx
// 004d0b3a  8b942490000000       mov edx, dword ptr [esp + 0x90]
// 004d0b41  51                   push ecx
// 004d0b42  8b8c249c000000       mov ecx, dword ptr [esp + 0x9c]
// 004d0b49  51                   push ecx
// 004d0b4a  52                   push edx
// 004d0b4b  8bca                 mov ecx, edx
// 004d0b4d  8b9424a0000000       mov edx, dword ptr [esp + 0xa0]
// 004d0b54  51                   push ecx
// 004d0b55  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 004d0b59  50                   push eax
// 004d0b5a  8b842498000000       mov eax, dword ptr [esp + 0x98]
// 004d0b61  52                   push edx
// 004d0b62  8b5608               mov edx, dword ptr [esi + 8]
// 004d0b65  50                   push eax
// 004d0b66  51                   push ecx
// 004d0b67  68b85c9b00           push 0x9b5cb8
// 004d0b6c  52                   push edx
// 004d0b6d  e8aeb61100           call 0x5ec220
// 004d0b72  83c46c               add esp, 0x6c
// 004d0b75  8d8c2414010000       lea ecx, [esp + 0x114]
// 004d0b7c  c684243c01000000     mov byte ptr [esp + 0x13c], 0
// 004d0b84  ff15e4b69800         call dword ptr [0x98b6e4]
// 004d0b8a  837e0800             cmp dword ptr [esi + 8], 0
// 004d0b8e  c6861001000000       mov byte ptr [esi + 0x110], 0
// 004d0b95  c6861201000000       mov byte ptr [esi + 0x112], 0
// 004d0b9c  7436                 je 0x4d0bd4
// 004d0b9e  68905c9b00           push 0x9b5c90
// 004d0ba3  8d4c241c             lea ecx, [esp + 0x1c]
// 004d0ba7  ff15f4b69800         call dword ptr [0x98b6f4]
// 004d0bad  8b4e08               mov ecx, dword ptr [esi + 8]
// 004d0bb0  8d442418             lea eax, [esp + 0x18]
// 004d0bb4  50                   push eax
// 004d0bb5  c68424400100000a     mov byte ptr [esp + 0x140], 0xa
// 004d0bbd  e82eb41100           call 0x5ebff0
// 004d0bc2  8d4c2418             lea ecx, [esp + 0x18]
// 004d0bc6  c684243c01000000     mov byte ptr [esp + 0x13c], 0
// 004d0bce  ff15e4b69800         call dword ptr [0x98b6e4]
// 004d0bd4  837c243400           cmp dword ptr [esp + 0x34], 0
// 004d0bd9  c6869808000001       mov byte ptr [esi + 0x898], 1
// 004d0be0  7430                 je 0x4d0c12
// 004d0be2  b901000000           mov ecx, 1
// 004d0be7  014e78               add dword ptr [esi + 0x78], ecx
// 004d0bea  80bee303000000       cmp byte ptr [esi + 0x3e3], 0
// 004d0bf1  751f                 jne 0x4d0c12
// 004d0bf3  014e70               add dword ptr [esi + 0x70], ecx
// 004d0bf6  33c0                 xor eax, eax
// 004d0bf8  3886e2030000         cmp byte ptr [esi + 0x3e2], al
// 004d0bfe  51                   push ecx
// 004d0bff  0f95c0               setne al
// 004d0c02  50                   push eax
// 004d0c03  50                   push eax
// 004d0c04  50                   push eax
// 004d0c05  ff15a0bb9800         call dword ptr [0x98bba0]
// 004d0c0b  c686e303000001       mov byte ptr [esi + 0x3e3], 1
// 004d0c12  688c5c9b00           push 0x9b5c8c
// 004d0c17  8d4c241c             lea ecx, [esp + 0x1c]
// 004d0c1b  ff15f4b69800         call dword ptr [0x98b6f4]
// 004d0c21  8b0e                 mov ecx, dword ptr [esi]
// 004d0c23  8b11                 mov edx, dword ptr [ecx]
// 004d0c25  8b5228               mov edx, dword ptr [edx + 0x28]
// 004d0c28  8d442418             lea eax, [esp + 0x18]
// 004d0c2c  50                   push eax
// 004d0c2d  c68424400100000b     mov byte ptr [esp + 0x140], 0xb
// 004d0c35  ffd2                 call edx
// 004d0c37  8d4c2418             lea ecx, [esp + 0x18]
// 004d0c3b  c684243c01000000     mov byte ptr [esp + 0x13c], 0
// 004d0c43  ff15e4b69800         call dword ptr [0x98b6e4]
// 004d0c49  8b06                 mov eax, dword ptr [esi]
// 004d0c4b  8d8c2498000000       lea ecx, [esp + 0x98]
// 004d0c52  897018               mov dword ptr [eax + 0x18], esi
// 004d0c55  c784243c010000ffffffff mov dword ptr [esp + 0x13c], 0xffffffff
// 004d0c60  ff15e4b69800         call dword ptr [0x98b6e4]
// 004d0c66  8b8c2434010000       mov ecx, dword ptr [esp + 0x134]
// 004d0c6d  5f                   pop edi
// 004d0c6e  5e                   pop esi
// 004d0c6f  5d                   pop ebp
// 004d0c70  b001                 mov al, 1
// 004d0c72  5b                   pop ebx
// 004d0c73  64890d00000000       mov dword ptr fs:[0], ecx
// 004d0c7a  81c430010000         add esp, 0x130
// 004d0c80  c20800               ret 8
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?init@RenderDevice@G3D@@QAE_NPAVGWindow@2@PAVLog@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
