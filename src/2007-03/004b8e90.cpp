// roc 2007-03 004b8e90  unit: seg_004b0000  size: 659 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004b8e90
//
// 004b8e90  6aff                 push -1
// 004b8e92  6861cc7400           push 0x74cc61
// 004b8e97  64a100000000         mov eax, dword ptr fs:[0]
// 004b8e9d  50                   push eax
// 004b8e9e  64892500000000       mov dword ptr fs:[0], esp
// 004b8ea5  81ec28060000         sub esp, 0x628
// 004b8eab  53                   push ebx
// 004b8eac  55                   push ebp
// 004b8ead  56                   push esi
// 004b8eae  57                   push edi
// 004b8eaf  33ff                 xor edi, edi
// 004b8eb1  8be9                 mov ebp, ecx
// 004b8eb3  896c241c             mov dword ptr [esp + 0x1c], ebp
// 004b8eb7  897c2414             mov dword ptr [esp + 0x14], edi
// 004b8ebb  897c2418             mov dword ptr [esp + 0x18], edi
// 004b8ebf  897c2410             mov dword ptr [esp + 0x10], edi
// 004b8ec3  89bc2440060000       mov dword ptr [esp + 0x640], edi
// 004b8eca  e8c1fcffff           call 0x4b8b90
// 004b8ecf  8bb42448060000       mov esi, dword ptr [esp + 0x648]
// 004b8ed6  8d842438020000       lea eax, [esp + 0x238]
// 004b8edd  33db                 xor ebx, ebx
// 004b8edf  2bf0                 sub esi, eax
// 004b8ee1  6a14                 push 0x14
// 004b8ee3  e820521600           call 0x61e108
// 004b8ee8  8d0c9e               lea ecx, [esi + ebx*4]
// 004b8eeb  897808               mov dword ptr [eax + 8], edi
// 004b8eee  89780c               mov dword ptr [eax + 0xc], edi
// 004b8ef1  8818                 mov byte ptr [eax], bl
// 004b8ef3  8b8c0c3c020000       mov ecx, dword ptr [esp + ecx + 0x23c]
// 004b8efa  83c404               add esp, 4
// 004b8efd  3bcf                 cmp ecx, edi
// 004b8eff  894804               mov dword ptr [eax + 4], ecx
// 004b8f02  7507                 jne 0x4b8f0b
// 004b8f04  c7400401000000       mov dword ptr [eax + 4], 1
// 004b8f0b  8d542410             lea edx, [esp + 0x10]
// 004b8f0f  52                   push edx
// 004b8f10  50                   push eax
// 004b8f11  8bcd                 mov ecx, ebp
// 004b8f13  89849c40020000       mov dword ptr [esp + ebx*4 + 0x240], eax
// 004b8f1a  e871feffff           call 0x4b8d90
// 004b8f1f  83c301               add ebx, 1
// 004b8f22  81fb00010000         cmp ebx, 0x100
// 004b8f28  7cb7                 jl 0x4b8ee1
// 004b8f2a  8d9b00000000         lea ebx, [ebx]
// 004b8f30  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 004b8f34  3bdf                 cmp ebx, edi
// 004b8f36  7408                 je 0x4b8f40
// 004b8f38  8bc3                 mov eax, ebx
// 004b8f3a  89442418             mov dword ptr [esp + 0x18], eax
// 004b8f3e  eb04                 jmp 0x4b8f44
// 004b8f40  8b442418             mov eax, dword ptr [esp + 0x18]
// 004b8f44  8b742410             mov esi, dword ptr [esp + 0x10]
// 004b8f48  3bf7                 cmp esi, edi
// 004b8f4a  8b28                 mov ebp, dword ptr [eax]
// 004b8f4c  896c2420             mov dword ptr [esp + 0x20], ebp
// 004b8f50  744f                 je 0x4b8fa1
// 004b8f52  83fe01               cmp esi, 1
// 004b8f55  7515                 jne 0x4b8f6c
// 004b8f57  53                   push ebx
// 004b8f58  e893511600           call 0x61e0f0
// 004b8f5d  33db                 xor ebx, ebx
// 004b8f5f  83c404               add esp, 4
// 004b8f62  33c0                 xor eax, eax
// 004b8f64  895c2414             mov dword ptr [esp + 0x14], ebx
// 004b8f68  33f6                 xor esi, esi
// 004b8f6a  eb2d                 jmp 0x4b8f99
// 004b8f6c  3bc3                 cmp eax, ebx
// 004b8f6e  8b4804               mov ecx, dword ptr [eax + 4]
// 004b8f71  8b5008               mov edx, dword ptr [eax + 8]
// 004b8f74  895108               mov dword ptr [ecx + 8], edx
// 004b8f77  8b4808               mov ecx, dword ptr [eax + 8]
// 004b8f7a  8b5004               mov edx, dword ptr [eax + 4]
// 004b8f7d  895104               mov dword ptr [ecx + 4], edx
// 004b8f80  8b7808               mov edi, dword ptr [eax + 8]
// 004b8f83  7506                 jne 0x4b8f8b
// 004b8f85  8bdf                 mov ebx, edi
// 004b8f87  895c2414             mov dword ptr [esp + 0x14], ebx
// 004b8f8b  50                   push eax
// 004b8f8c  e85f511600           call 0x61e0f0
// 004b8f91  83c404               add esp, 4
// 004b8f94  8bc7                 mov eax, edi
// 004b8f96  83ee01               sub esi, 1
// 004b8f99  89742410             mov dword ptr [esp + 0x10], esi
// 004b8f9d  89442418             mov dword ptr [esp + 0x18], eax
// 004b8fa1  85f6                 test esi, esi
// 004b8fa3  8b38                 mov edi, dword ptr [eax]
// 004b8fa5  744f                 je 0x4b8ff6
// 004b8fa7  83fe01               cmp esi, 1
// 004b8faa  7515                 jne 0x4b8fc1
// 004b8fac  53                   push ebx
// 004b8fad  e83e511600           call 0x61e0f0
// 004b8fb2  83c404               add esp, 4
// 004b8fb5  33f6                 xor esi, esi
// 004b8fb7  89742418             mov dword ptr [esp + 0x18], esi
// 004b8fbb  89742414             mov dword ptr [esp + 0x14], esi
// 004b8fbf  eb31                 jmp 0x4b8ff2
// 004b8fc1  3bc3                 cmp eax, ebx
// 004b8fc3  8b4804               mov ecx, dword ptr [eax + 4]
// 004b8fc6  8b5008               mov edx, dword ptr [eax + 8]
// 004b8fc9  895108               mov dword ptr [ecx + 8], edx
// 004b8fcc  8b4808               mov ecx, dword ptr [eax + 8]
// 004b8fcf  8b5004               mov edx, dword ptr [eax + 4]
// 004b8fd2  895104               mov dword ptr [ecx + 4], edx
// 004b8fd5  8b6808               mov ebp, dword ptr [eax + 8]
// 004b8fd8  7504                 jne 0x4b8fde
// 004b8fda  896c2414             mov dword ptr [esp + 0x14], ebp
// 004b8fde  50                   push eax
// 004b8fdf  e80c511600           call 0x61e0f0
// 004b8fe4  83c404               add esp, 4
// 004b8fe7  896c2418             mov dword ptr [esp + 0x18], ebp
// 004b8feb  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 004b8fef  83ee01               sub esi, 1
// 004b8ff2  89742410             mov dword ptr [esp + 0x10], esi
// 004b8ff6  6a14                 push 0x14
// 004b8ff8  e80b511600           call 0x61e108
// 004b8ffd  896808               mov dword ptr [eax + 8], ebp
// 004b9000  89780c               mov dword ptr [eax + 0xc], edi
// 004b9003  8b4f04               mov ecx, dword ptr [edi + 4]
// 004b9006  034d04               add ecx, dword ptr [ebp + 4]
// 004b9009  83c404               add esp, 4
// 004b900c  85f6                 test esi, esi
// 004b900e  894804               mov dword ptr [eax + 4], ecx
// 004b9011  894510               mov dword ptr [ebp + 0x10], eax
// 004b9014  894710               mov dword ptr [edi + 0x10], eax
// 004b9017  7416                 je 0x4b902f
// 004b9019  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 004b901d  8d542410             lea edx, [esp + 0x10]
// 004b9021  52                   push edx
// 004b9022  50                   push eax
// 004b9023  e868fdffff           call 0x4b8d90
// 004b9028  33ff                 xor edi, edi
// 004b902a  e901ffffff           jmp 0x4b8f30
// 004b902f  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 004b9033  8907                 mov dword ptr [edi], eax
// 004b9035  8d4c2424             lea ecx, [esp + 0x24]
// 004b9039  c7401000000000       mov dword ptr [eax + 0x10], 0
// 004b9040  e86be7fdff           call 0x4977b0
// 004b9045  c684244006000001     mov byte ptr [esp + 0x640], 1
// 004b904d  33db                 xor ebx, ebx
// 004b904f  8d6f08               lea ebp, [edi + 8]
// 004b9052  8b849c38020000       mov eax, dword ptr [esp + ebx*4 + 0x238]
// 004b9059  8b17                 mov edx, dword ptr [edi]
// 004b905b  33f6                 xor esi, esi
// 004b905d  8d4900               lea ecx, [ecx]
// 004b9060  8b4810               mov ecx, dword ptr [eax + 0x10]
// 004b9063  394108               cmp dword ptr [ecx + 8], eax
// 004b9066  0fb7c6               movzx eax, si
// 004b9069  750a                 jne 0x4b9075
// 004b906b  c684043801000000     mov byte ptr [esp + eax + 0x138], 0
// 004b9073  eb08                 jmp 0x4b907d
// 004b9075  c684043801000001     mov byte ptr [esp + eax + 0x138], 1
// 004b907d  8bc1                 mov eax, ecx
// 004b907f  83c601               add esi, 1
// 004b9082  3bc2                 cmp eax, edx
// 004b9084  75da                 jne 0x4b9060
// 004b9086  6685f6               test si, si
// 004b9089  763c                 jbe 0x4b90c7
// 004b908b  0fb7fe               movzx edi, si
// 004b908e  8dbc3c38010000       lea edi, [esp + edi + 0x138]
// 004b9095  eb09                 jmp 0x4b90a0
// 004b9097  8da42400000000       lea esp, [esp]
// 004b909e  8bff                 mov edi, edi
// 004b90a0  83ef01               sub edi, 1
// 004b90a3  81c6ffff0000         add esi, 0xffff
// 004b90a9  803f00               cmp byte ptr [edi], 0
// 004b90ac  8d4c2424             lea ecx, [esp + 0x24]
// 004b90b0  7407                 je 0x4b90b9
// 004b90b2  e859ecfdff           call 0x497d10
// 004b90b7  eb05                 jmp 0x4b90be
// 004b90b9  e832ecfdff           call 0x497cf0
// 004b90be  6685f6               test si, si
// 004b90c1  77dd                 ja 0x4b90a0
// 004b90c3  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 004b90c7  8d4dfc               lea ecx, [ebp - 4]
// 004b90ca  51                   push ecx
// 004b90cb  8d4c2428             lea ecx, [esp + 0x28]
// 004b90cf  e8dceafdff           call 0x497bb0
// 004b90d4  660fb6d0             movzx dx, al
// 004b90d8  8d4c2424             lea ecx, [esp + 0x24]
// 004b90dc  66895500             mov word ptr [ebp], dx
// 004b90e0  e8fbe7fdff           call 0x4978e0
// 004b90e5  83c301               add ebx, 1
// 004b90e8  83c508               add ebp, 8
// 004b90eb  81fb00010000         cmp ebx, 0x100
// 004b90f1  0f8c5bffffff         jl 0x4b9052
// 004b90f7  8d4c2424             lea ecx, [esp + 0x24]
// 004b90fb  c684244006000000     mov byte ptr [esp + 0x640], 0
// 004b9103  e8b8e7fdff           call 0x4978c0
// 004b9108  8b8c2438060000       mov ecx, dword ptr [esp + 0x638]
// 004b910f  5f                   pop edi
// 004b9110  5e                   pop esi
// 004b9111  5d                   pop ebp
// 004b9112  5b                   pop ebx
// 004b9113  64890d00000000       mov dword ptr fs:[0], ecx
// 004b911a  81c434060000         add esp, 0x634
// 004b9120  c20400               ret 4
// library rbxgs-raknet/DS_HuffmanEncodingTree.cpp (function ?GenerateFromFrequencyTable@HuffmanEncodingTree@@QAEXQAI@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet DS_HuffmanEncodingTree.cpp
