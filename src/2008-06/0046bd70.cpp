// from server: 64% by coldek
// roc 2008-06 0046bd70  unit: VCWorkspace::?$CComObject  size: 600 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0046bd70
//
// 0046bd70  55                   push ebp
// 0046bd71  8bec                 mov ebp, esp
// 0046bd73  6aff                 push -1
// 0046bd75  68bb3a7c00           push 0x7c3abb
// 0046bd7a  64a100000000         mov eax, dword ptr fs:[0]
// 0046bd80  50                   push eax
// 0046bd81  64892500000000       mov dword ptr fs:[0], esp
// 0046bd88  83ec28               sub esp, 0x28
// 0046bd8b  53                   push ebx
// 0046bd8c  56                   push esi
// 0046bd8d  57                   push edi
// 0046bd8e  33ff                 xor edi, edi
// 0046bd90  8965f0               mov dword ptr [ebp - 0x10], esp
// 0046bd93  897dec               mov dword ptr [ebp - 0x14], edi
// 0046bd96  e8cd4b2300           call 0x6a0968
// 0046bd9b  50                   push eax
// 0046bd9c  8d4dcc               lea ecx, [ebp - 0x34]
// 0046bd9f  e8be4b2300           call 0x6a0962
// 0046bda4  8d45ec               lea eax, [ebp - 0x14]
// 0046bda7  897dfc               mov dword ptr [ebp - 4], edi
// 0046bdaa  50                   push eax
// 0046bdab  c645fc01             mov byte ptr [ebp - 4], 1
// 0046bdaf  e8dceeffff           call 0x46ac90
// 0046bdb4  85c0                 test eax, eax
// 0046bdb6  7432                 je 0x46bdea
// 0046bdb8  682c010000           push 0x12c
// 0046bdbd  6850c88100           push 0x81c850
// 0046bdc2  8d4dec               lea ecx, [ebp - 0x14]
// 0046bdc5  51                   push ecx
// 0046bdc6  e8c5eeffff           call 0x46ac90
// 0046bdcb  50                   push eax
// 0046bdcc  6a01                 push 1
// 0046bdce  e8adbffbff           call 0x427d80
// 0046bdd3  83c410               add esp, 0x10
// 0046bdd6  68f8648100           push 0x8164f8
// 0046bddb  8d55ec               lea edx, [ebp - 0x14]
// 0046bdde  52                   push edx
// 0046bddf  e8aceeffff           call 0x46ac90
// 0046bde4  50                   push eax
// 0046bde5  e886efffff           call 0x46ad70
// 0046bdea  8b5dec               mov ebx, dword ptr [ebp - 0x14]
// 0046bded  8d430c               lea eax, [ebx + 0xc]
// 0046bdf0  3bc7                 cmp eax, edi
// 0046bdf2  7403                 je 0x46bdf7
// 0046bdf4  8d7b14               lea edi, [ebx + 0x14]
// 0046bdf7  8b7508               mov esi, dword ptr [ebp + 8]
// 0046bdfa  8d4508               lea eax, [ebp + 8]
// 0046bdfd  50                   push eax
// 0046bdfe  8bce                 mov ecx, esi
// 0046be00  e88bedffff           call 0x46ab90
// 0046be05  8b00                 mov eax, dword ptr [eax]
// 0046be07  57                   push edi
// 0046be08  50                   push eax
// 0046be09  8bce                 mov ecx, esi
// 0046be0b  c645fc02             mov byte ptr [ebp - 4], 2
// 0046be0f  c745ec01000000       mov dword ptr [ebp - 0x14], 1
// 0046be16  e845faffff           call 0x46b860
// 0046be1b  85c0                 test eax, eax
// 0046be1d  0f8481000000         je 0x46bea4
// 0046be23  8d430c               lea eax, [ebx + 0xc]
// 0046be26  85c0                 test eax, eax
// 0046be28  7405                 je 0x46be2f
// 0046be2a  8d7b14               lea edi, [ebx + 0x14]
// 0046be2d  eb02                 jmp 0x46be31
// 0046be2f  33ff                 xor edi, edi
// 0046be31  8d4de8               lea ecx, [ebp - 0x18]
// 0046be34  51                   push ecx
// 0046be35  8bce                 mov ecx, esi
// 0046be37  e854edffff           call 0x46ab90
// 0046be3c  8b00                 mov eax, dword ptr [eax]
// 0046be3e  b903000000           mov ecx, 3
// 0046be43  57                   push edi
// 0046be44  894dfc               mov dword ptr [ebp - 4], ecx
// 0046be47  894dec               mov dword ptr [ebp - 0x14], ecx
// 0046be4a  50                   push eax
// 0046be4b  8bce                 mov ecx, esi
// 0046be4d  e80efaffff           call 0x46b860
// 0046be52  6830010000           push 0x130
// 0046be57  6850c88100           push 0x81c850
// 0046be5c  50                   push eax
// 0046be5d  6a01                 push 1
// 0046be5f  e81cbffbff           call 0x427d80
// 0046be64  8d430c               lea eax, [ebx + 0xc]
// 0046be67  83c410               add esp, 0x10
// 0046be6a  85c0                 test eax, eax
// 0046be6c  7405                 je 0x46be73
// 0046be6e  8d7b14               lea edi, [ebx + 0x14]
// 0046be71  eb02                 jmp 0x46be75
// 0046be73  33ff                 xor edi, edi
// 0046be75  8d55e4               lea edx, [ebp - 0x1c]
// 0046be78  52                   push edx
// 0046be79  8bce                 mov ecx, esi
// 0046be7b  e810edffff           call 0x46ab90
// 0046be80  8b00                 mov eax, dword ptr [eax]
// 0046be82  57                   push edi
// 0046be83  50                   push eax
// 0046be84  8bce                 mov ecx, esi
// 0046be86  c745fc04000000       mov dword ptr [ebp - 4], 4
// 0046be8d  c745ec07000000       mov dword ptr [ebp - 0x14], 7
// 0046be94  e8c7f9ffff           call 0x46b860
// 0046be99  68f8648100           push 0x8164f8
// 0046be9e  50                   push eax
// 0046be9f  e8cceeffff           call 0x46ad70
// 0046bea4  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0046bea7  c745fc01000000       mov dword ptr [ebp - 4], 1
// 0046beae  85c9                 test ecx, ecx
// 0046beb0  7410                 je 0x46bec2
// 0046beb2  8bf1                 mov esi, ecx
// 0046beb4  e8b77bfaff           call 0x413a70
// 0046beb9  56                   push esi
// 0046beba  e8bb472300           call 0x6a067a
// 0046bebf  83c404               add esp, 4
// 0046bec2  85db                 test ebx, ebx
// 0046bec4  7405                 je 0x46becb
// 0046bec6  8d7304               lea esi, [ebx + 4]
// 0046bec9  eb02                 jmp 0x46becd
// 0046becb  33f6                 xor esi, esi
// 0046becd  897508               mov dword ptr [ebp + 8], esi
// 0046bed0  85f6                 test esi, esi
// 0046bed2  7408                 je 0x46bedc
// 0046bed4  8b06                 mov eax, dword ptr [esi]
// 0046bed6  8b4804               mov ecx, dword ptr [eax + 4]
// 0046bed9  56                   push esi
// 0046beda  ffd1                 call ecx
// 0046bedc  8b450c               mov eax, dword ptr [ebp + 0xc]
// 0046bedf  c645fc05             mov byte ptr [ebp - 4], 5
// 0046bee3  85c0                 test eax, eax
// 0046bee5  7458                 je 0x46bf3f
// 0046bee7  8930                 mov dword ptr [eax], esi
// 0046bee9  85f6                 test esi, esi
// 0046beeb  7408                 je 0x46bef5
// 0046beed  8b16                 mov edx, dword ptr [esi]
// 0046beef  8b4204               mov eax, dword ptr [edx + 4]
// 0046bef2  56                   push esi
// 0046bef3  ffd0                 call eax
// 0046bef5  c645fc01             mov byte ptr [ebp - 4], 1
// 0046bef9  85f6                 test esi, esi
// 0046befb  7408                 je 0x46bf05
// 0046befd  8b0e                 mov ecx, dword ptr [esi]
// 0046beff  8b5108               mov edx, dword ptr [ecx + 8]
// 0046bf02  56                   push esi
// 0046bf03  ffd2                 call edx
// 0046bf05  8b45d0               mov eax, dword ptr [ebp - 0x30]
// 0046bf08  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 0046bf0f  85c0                 test eax, eax
// 0046bf11  7406                 je 0x46bf19
// 0046bf13  8b4dcc               mov ecx, dword ptr [ebp - 0x34]
// 0046bf16  894804               mov dword ptr [eax + 4], ecx
// 0046bf19  837dd800             cmp dword ptr [ebp - 0x28], 0
// 0046bf1d  740b                 je 0x46bf2a
// 0046bf1f  8b55d4               mov edx, dword ptr [ebp - 0x2c]
// 0046bf22  52                   push edx
// 0046bf23  6a00                 push 0
// 0046bf25  e8324a2300           call 0x6a095c
// 0046bf2a  33c0                 xor eax, eax
// 0046bf2c  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0046bf2f  64890d00000000       mov dword ptr fs:[0], ecx
// 0046bf36  5f                   pop edi
// 0046bf37  5e                   pop esi
// 0046bf38  5b                   pop ebx
// 0046bf39  8be5                 mov esp, ebp
// 0046bf3b  5d                   pop ebp
// 0046bf3c  c20800               ret 8
// 0046bf3f  6834010000           push 0x134
// 0046bf44  6850c88100           push 0x81c850
// 0046bf49  6803400080           push 0x80004003
// 0046bf4e  6a01                 push 1
// 0046bf50  e82bbefbff           call 0x427d80
// 0046bf55  83c410               add esp, 0x10
// 0046bf58  68f8648100           push 0x8164f8
// 0046bf5d  6803400080           push 0x80004003
// 0046bf62  e809eeffff           call 0x46ad70
// 0046bf67  8b4de0               mov ecx, dword ptr [ebp - 0x20]
// 0046bf6a  8b01                 mov eax, dword ptr [ecx]
// 0046bf6c  8b5004               mov edx, dword ptr [eax + 4]
// 0046bf6f  6a00                 push 0
// 0046bf71  ffd2                 call edx
// 0046bf73  50                   push eax
// 0046bf74  68f8648100           push 0x8164f8
// 0046bf79  e8b2d3fbff           call 0x429330
// 0046bf7e  894508               mov dword ptr [ebp + 8], eax
// 0046bf81  83c40c               add esp, 0xc
// 0046bf84  b8a3bf4600           mov eax, 0x46bfa3
// 0046bf89  c3                   ret 
// 0046bf8a  8b75dc               mov esi, dword ptr [ebp - 0x24]
// 0046bf8d  56                   push esi
// 0046bf8e  e821552300           call 0x6a14b4
// 0046bf93  8bce                 mov ecx, esi
// 0046bf95  894508               mov dword ptr [ebp + 8], eax
// 0046bf98  e8b3492300           call 0x6a0950
// 0046bf9d  b8a3bf4600           mov eax, 0x46bfa3
// 0046bfa2  c3                   ret 
// 0046bfa3  8d4dcc               lea ecx, [ebp - 0x34]
// 0046bfa6  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 0046bfad  e83ea1f9ff           call 0x4060f0
// 0046bfb2  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0046bfb5  8b4508               mov eax, dword ptr [ebp + 8]
// 0046bfb8  5f                   pop edi
// 0046bfb9  5e                   pop esi
// 0046bfba  64890d00000000       mov dword ptr fs:[0], ecx
// 0046bfc1  5b                   pop ebx
// 0046bfc2  8be5                 mov esp, ebp
// 0046bfc4  5d                   pop ebp
// 0046bfc5  c20800               ret 8

// from server: 65% by king_originala
// roc 2008-06 0046bd70  unit: VCWorkspace::?$CComObject  size: 503 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0046bd70
//
// 0046bd70  55                   push ebp
// 0046bd71  8bec                 mov ebp, esp
// 0046bd73  6aff                 push -1
// 0046bd75  68bb3a7c00           push 0x7c3abb
// 0046bd7a  64a100000000         mov eax, dword ptr fs:[0]
// 0046bd80  50                   push eax
// 0046bd81  64892500000000       mov dword ptr fs:[0], esp
// 0046bd88  83ec28               sub esp, 0x28
// 0046bd8b  53                   push ebx
// 0046bd8c  56                   push esi
// 0046bd8d  57                   push edi
// 0046bd8e  33ff                 xor edi, edi
// 0046bd90  8965f0               mov dword ptr [ebp - 0x10], esp
// 0046bd93  897dec               mov dword ptr [ebp - 0x14], edi
// 0046bd96  e8cd4b2300           call 0x6a0968
// 0046bd9b  50                   push eax
// 0046bd9c  8d4dcc               lea ecx, [ebp - 0x34]
// 0046bd9f  e8be4b2300           call 0x6a0962
// 0046bda4  8d45ec               lea eax, [ebp - 0x14]
// 0046bda7  897dfc               mov dword ptr [ebp - 4], edi
// 0046bdaa  50                   push eax
// 0046bdab  c645fc01             mov byte ptr [ebp - 4], 1
// 0046bdaf  e8dceeffff           call 0x46ac90
// 0046bdb4  85c0                 test eax, eax
// 0046bdb6  7432                 je 0x46bdea
// 0046bdb8  682c010000           push 0x12c
// 0046bdbd  6850c88100           push 0x81c850
// 0046bdc2  8d4dec               lea ecx, [ebp - 0x14]
// 0046bdc5  51                   push ecx
// 0046bdc6  e8c5eeffff           call 0x46ac90
// 0046bdcb  50                   push eax
// 0046bdcc  6a01                 push 1
// 0046bdce  e8adbffbff           call 0x427d80
// 0046bdd3  83c410               add esp, 0x10
// 0046bdd6  68f8648100           push 0x8164f8
// 0046bddb  8d55ec               lea edx, [ebp - 0x14]
// 0046bdde  52                   push edx
// 0046bddf  e8aceeffff           call 0x46ac90
// 0046bde4  50                   push eax
// 0046bde5  e886efffff           call 0x46ad70
// 0046bdea  8b5dec               mov ebx, dword ptr [ebp - 0x14]
// 0046bded  8d430c               lea eax, [ebx + 0xc]
// 0046bdf0  3bc7                 cmp eax, edi
// 0046bdf2  7403                 je 0x46bdf7
// 0046bdf4  8d7b14               lea edi, [ebx + 0x14]
// 0046bdf7  8b7508               mov esi, dword ptr [ebp + 8]
// 0046bdfa  8d4508               lea eax, [ebp + 8]
// 0046bdfd  50                   push eax
// 0046bdfe  8bce                 mov ecx, esi
// 0046be00  e88bedffff           call 0x46ab90
// 0046be05  8b00                 mov eax, dword ptr [eax]
// 0046be07  57                   push edi
// 0046be08  50                   push eax
// 0046be09  8bce                 mov ecx, esi
// 0046be0b  c645fc02             mov byte ptr [ebp - 4], 2
// 0046be0f  c745ec01000000       mov dword ptr [ebp - 0x14], 1
// 0046be16  e845faffff           call 0x46b860
// 0046be1b  85c0                 test eax, eax
// 0046be1d  0f8481000000         je 0x46bea4
// 0046be23  8d430c               lea eax, [ebx + 0xc]
// 0046be26  85c0                 test eax, eax
// 0046be28  7405                 je 0x46be2f
// 0046be2a  8d7b14               lea edi, [ebx + 0x14]
// 0046be2d  eb02                 jmp 0x46be31
// 0046be2f  33ff                 xor edi, edi
// 0046be31  8d4de8               lea ecx, [ebp - 0x18]
// 0046be34  51                   push ecx
// 0046be35  8bce                 mov ecx, esi
// 0046be37  e854edffff           call 0x46ab90
// 0046be3c  8b00                 mov eax, dword ptr [eax]
// 0046be3e  b903000000           mov ecx, 3
// 0046be43  57                   push edi
// 0046be44  894dfc               mov dword ptr [ebp - 4], ecx
// 0046be47  894dec               mov dword ptr [ebp - 0x14], ecx
// 0046be4a  50                   push eax
// 0046be4b  8bce                 mov ecx, esi
// 0046be4d  e80efaffff           call 0x46b860
// 0046be52  6830010000           push 0x130
// 0046be57  6850c88100           push 0x81c850
// 0046be5c  50                   push eax
// 0046be5d  6a01                 push 1
// 0046be5f  e81cbffbff           call 0x427d80
// 0046be64  8d430c               lea eax, [ebx + 0xc]
// 0046be67  83c410               add esp, 0x10
// 0046be6a  85c0                 test eax, eax
// 0046be6c  7405                 je 0x46be73
// 0046be6e  8d7b14               lea edi, [ebx + 0x14]
// 0046be71  eb02                 jmp 0x46be75
// 0046be73  33ff                 xor edi, edi
// 0046be75  8d55e4               lea edx, [ebp - 0x1c]
// 0046be78  52                   push edx
// 0046be79  8bce                 mov ecx, esi
// 0046be7b  e810edffff           call 0x46ab90
// 0046be80  8b00                 mov eax, dword ptr [eax]
// 0046be82  57                   push edi
// 0046be83  50                   push eax
// 0046be84  8bce                 mov ecx, esi
// 0046be86  c745fc04000000       mov dword ptr [ebp - 4], 4
// 0046be8d  c745ec07000000       mov dword ptr [ebp - 0x14], 7
// 0046be94  e8c7f9ffff           call 0x46b860
// 0046be99  68f8648100           push 0x8164f8
// 0046be9e  50                   push eax
// 0046be9f  e8cceeffff           call 0x46ad70
// 0046bea4  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0046bea7  c745fc01000000       mov dword ptr [ebp - 4], 1
// 0046beae  85c9                 test ecx, ecx
// 0046beb0  7410                 je 0x46bec2
// 0046beb2  8bf1                 mov esi, ecx
// 0046beb4  e8b77bfaff           call 0x413a70
// 0046beb9  56                   push esi
// 0046beba  e8bb472300           call 0x6a067a
// 0046bebf  83c404               add esp, 4
// 0046bec2  85db                 test ebx, ebx
// 0046bec4  7405                 je 0x46becb
// 0046bec6  8d7304               lea esi, [ebx + 4]
// 0046bec9  eb02                 jmp 0x46becd
// 0046becb  33f6                 xor esi, esi
// 0046becd  897508               mov dword ptr [ebp + 8], esi
// 0046bed0  85f6                 test esi, esi
// 0046bed2  7408                 je 0x46bedc
// 0046bed4  8b06                 mov eax, dword ptr [esi]
// 0046bed6  8b4804               mov ecx, dword ptr [eax + 4]
// 0046bed9  56                   push esi
// 0046beda  ffd1                 call ecx
// 0046bedc  8b450c               mov eax, dword ptr [ebp + 0xc]
// 0046bedf  c645fc05             mov byte ptr [ebp - 4], 5
// 0046bee3  85c0                 test eax, eax
// 0046bee5  7458                 je 0x46bf3f
// 0046bee7  8930                 mov dword ptr [eax], esi
// 0046bee9  85f6                 test esi, esi
// 0046beeb  7408                 je 0x46bef5
// 0046beed  8b16                 mov edx, dword ptr [esi]
// 0046beef  8b4204               mov eax, dword ptr [edx + 4]
// 0046bef2  56                   push esi
// 0046bef3  ffd0                 call eax
// 0046bef5  c645fc01             mov byte ptr [ebp - 4], 1
// 0046bef9  85f6                 test esi, esi
// 0046befb  7408                 je 0x46bf05
// 0046befd  8b0e                 mov ecx, dword ptr [esi]
// 0046beff  8b5108               mov edx, dword ptr [ecx + 8]
// 0046bf02  56                   push esi
// 0046bf03  ffd2                 call edx
// 0046bf05  8b45d0               mov eax, dword ptr [ebp - 0x30]
// 0046bf08  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 0046bf0f  85c0                 test eax, eax
// 0046bf11  7406                 je 0x46bf19
// 0046bf13  8b4dcc               mov ecx, dword ptr [ebp - 0x34]
// 0046bf16  894804               mov dword ptr [eax + 4], ecx
// 0046bf19  837dd800             cmp dword ptr [ebp - 0x28], 0
// 0046bf1d  740b                 je 0x46bf2a
// 0046bf1f  8b55d4               mov edx, dword ptr [ebp - 0x2c]
// 0046bf22  52                   push edx
// 0046bf23  6a00                 push 0
// 0046bf25  e8324a2300           call 0x6a095c
// 0046bf2a  33c0                 xor eax, eax
// 0046bf2c  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0046bf2f  64890d00000000       mov dword ptr fs:[0], ecx
// 0046bf36  5f                   pop edi
// 0046bf37  5e                   pop esi
// 0046bf38  5b                   pop ebx
// 0046bf39  8be5                 mov esp, ebp
// 0046bf3b  5d                   pop ebp
// 0046bf3c  c20800               ret 8
// 0046bf3f  6834010000           push 0x134
// 0046bf44  6850c88100           push 0x81c850
// 0046bf49  6803400080           push 0x80004003
// 0046bf4e  6a01                 push 1
// 0046bf50  e82bbefbff           call 0x427d80
// 0046bf55  83c410               add esp, 0x10
// 0046bf58  68f8648100           push 0x8164f8
// 0046bf5d  6803400080           push 0x80004003
// 0046bf62  e809eeffff           call 0x46ad70

// from server: 64% by colin
// from server: 70% by colin
// roc 2008-06 0046bd70  unit: VCWorkspace::?$CComObject  size: 503 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0046bd70
//
// 0046bd70  55                   push ebp
// 0046bd71  8bec                 mov ebp, esp
// 0046bd73  6aff                 push -1
// 0046bd75  68bb3a7c00           push 0x7c3abb
// 0046bd7a  64a100000000         mov eax, dword ptr fs:[0]
// 0046bd80  50                   push eax
// 0046bd81  64892500000000       mov dword ptr fs:[0], esp
// 0046bd88  83ec28               sub esp, 0x28
// 0046bd8b  53                   push ebx
// 0046bd8c  56                   push esi
// 0046bd8d  57                   push edi
// 0046bd8e  33ff                 xor edi, edi
// 0046bd90  8965f0               mov dword ptr [ebp - 0x10], esp
// 0046bd93  897dec               mov dword ptr [ebp - 0x14], edi
// 0046bd96  e8cd4b2300           call 0x6a0968
// 0046bd9b  50                   push eax
// 0046bd9c  8d4dcc               lea ecx, [ebp - 0x34]
// 0046bd9f  e8be4b2300           call 0x6a0962
// 0046bda4  8d45ec               lea eax, [ebp - 0x14]
// 0046bda7  897dfc               mov dword ptr [ebp - 4], edi
// 0046bdaa  50                   push eax
// 0046bdab  c645fc01             mov byte ptr [ebp - 4], 1
// 0046bdaf  e8dceeffff           call 0x46ac90
// 0046bdb4  85c0                 test eax, eax
// 0046bdb6  7432                 je 0x46bdea
// 0046bdb8  682c010000           push 0x12c
// 0046bdbd  6850c88100           push 0x81c850
// 0046bdc2  8d4dec               lea ecx, [ebp - 0x14]
// 0046bdc5  51                   push ecx
// 0046bdc6  e8c5eeffff           call 0x46ac90
// 0046bdcb  50                   push eax
// 0046bdcc  6a01                 push 1
// 0046bdce  e8adbffbff           call 0x427d80
// 0046bdd3  83c410               add esp, 0x10
// 0046bdd6  68f8648100           push 0x8164f8
// 0046bddb  8d55ec               lea edx, [ebp - 0x14]
// 0046bdde  52                   push edx
// 0046bddf  e8aceeffff           call 0x46ac90
// 0046bde4  50                   push eax
// 0046bde5  e886efffff           call 0x46ad70
// 0046bdea  8b5dec               mov ebx, dword ptr [ebp - 0x14]
// 0046bded  8d430c               lea eax, [ebx + 0xc]
// 0046bdf0  3bc7                 cmp eax, edi
// 0046bdf2  7403                 je 0x46bdf7
// 0046bdf4  8d7b14               lea edi, [ebx + 0x14]
// 0046bdf7  8b7508               mov esi, dword ptr [ebp + 8]
// 0046bdfa  8d4508               lea eax, [ebp + 8]
// 0046bdfd  50                   push eax
// 0046bdfe  8bce                 mov ecx, esi
// 0046be00  e88bedffff           call 0x46ab90
// 0046be05  8b00                 mov eax, dword ptr [eax]
// 0046be07  57                   push edi
// 0046be08  50                   push eax
// 0046be09  8bce                 mov ecx, esi
// 0046be0b  c645fc02             mov byte ptr [ebp - 4], 2
// 0046be0f  c745ec01000000       mov dword ptr [ebp - 0x14], 1
// 0046be16  e845faffff           call 0x46b860
// 0046be1b  85c0                 test eax, eax
// 0046be1d  0f8481000000         je 0x46bea4
// 0046be23  8d430c               lea eax, [ebx + 0xc]
// 0046be26  85c0                 test eax, eax
// 0046be28  7405                 je 0x46be2f
// 0046be2a  8d7b14               lea edi, [ebx + 0x14]
// 0046be2d  eb02                 jmp 0x46be31
// 0046be2f  33ff                 xor edi, edi
// 0046be31  8d4de8               lea ecx, [ebp - 0x18]
// 0046be34  51                   push ecx
// 0046be35  8bce                 mov ecx, esi
// 0046be37  e854edffff           call 0x46ab90
// 0046be3c  8b00                 mov eax, dword ptr [eax]
// 0046be3e  b903000000           mov ecx, 3
// 0046be43  57                   push edi
// 0046be44  894dfc               mov dword ptr [ebp - 4], ecx
// 0046be47  894dec               mov dword ptr [ebp - 0x14], ecx
// 0046be4a  50                   push eax
// 0046be4b  8bce                 mov ecx, esi
// 0046be4d  e80efaffff           call 0x46b860
// 0046be52  6830010000           push 0x130
// 0046be57  6850c88100           push 0x81c850
// 0046be5c  50                   push eax
// 0046be5d  6a01                 push 1
// 0046be5f  e81cbffbff           call 0x427d80
// 0046be64  8d430c               lea eax, [ebx + 0xc]
// 0046be67  83c410               add esp, 0x10
// 0046be6a  85c0                 test eax, eax
// 0046be6c  7405                 je 0x46be73
// 0046be6e  8d7b14               lea edi, [ebx + 0x14]
// 0046be71  eb02                 jmp 0x46be75
// 0046be73  33ff                 xor edi, edi
// 0046be75  8d55e4               lea edx, [ebp - 0x1c]
// 0046be78  52                   push edx
// 0046be79  8bce                 mov ecx, esi
// 0046be7b  e810edffff           call 0x46ab90
// 0046be80  8b00                 mov eax, dword ptr [eax]
// 0046be82  57                   push edi
// 0046be83  50                   push eax
// 0046be84  8bce                 mov ecx, esi
// 0046be86  c745fc04000000       mov dword ptr [ebp - 4], 4
// 0046be8d  c745ec07000000       mov dword ptr [ebp - 0x14], 7
// 0046be94  e8c7f9ffff           call 0x46b860
// 0046be99  68f8648100           push 0x8164f8
// 0046be9e  50                   push eax
// 0046be9f  e8cceeffff           call 0x46ad70
// 0046bea4  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0046bea7  c745fc01000000       mov dword ptr [ebp - 4], 1
// 0046beae  85c9                 test ecx, ecx
// 0046beb0  7410                 je 0x46bec2
// 0046beb2  8bf1                 mov esi, ecx
// 0046beb4  e8b77bfaff           call 0x413a70
// 0046beb9  56                   push esi
// 0046beba  e8bb472300           call 0x6a067a
// 0046bebf  83c404               add esp, 4
// 0046bec2  85db                 test ebx, ebx
// 0046bec4  7405                 je 0x46becb
// 0046bec6  8d7304               lea esi, [ebx + 4]
// 0046bec9  eb02                 jmp 0x46becd
// 0046becb  33f6                 xor esi, esi
// 0046becd  897508               mov dword ptr [ebp + 8], esi
// 0046bed0  85f6                 test esi, esi
// 0046bed2  7408                 je 0x46bedc
// 0046bed4  8b06                 mov eax, dword ptr [esi]
// 0046bed6  8b4804               mov ecx, dword ptr [eax + 4]
// 0046bed9  56                   push esi
// 0046beda  ffd1                 call ecx
// 0046bedc  8b450c               mov eax, dword ptr [ebp + 0xc]
// 0046bedf  c645fc05             mov byte ptr [ebp - 4], 5
// 0046bee3  85c0                 test eax, eax
// 0046bee5  7458                 je 0x46bf3f
// 0046bee7  8930                 mov dword ptr [eax], esi
// 0046bee9  85f6                 test esi, esi
// 0046beeb  7408                 je 0x46bef5
// 0046beed  8b16                 mov edx, dword ptr [esi]
// 0046beef  8b4204               mov eax, dword ptr [edx + 4]
// 0046bef2  56                   push esi
// 0046bef3  ffd0                 call eax
// 0046bef5  c645fc01             mov byte ptr [ebp - 4], 1
// 0046bef9  85f6                 test esi, esi
// 0046befb  7408                 je 0x46bf05
// 0046befd  8b0e                 mov ecx, dword ptr [esi]
// 0046beff  8b5108               mov edx, dword ptr [ecx + 8]
// 0046bf02  56                   push esi
// 0046bf03  ffd2                 call edx
// 0046bf05  8b45d0               mov eax, dword ptr [ebp - 0x30]
// 0046bf08  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 0046bf0f  85c0                 test eax, eax
// 0046bf11  7406                 je 0x46bf19
// 0046bf13  8b4dcc               mov ecx, dword ptr [ebp - 0x34]
// 0046bf16  894804               mov dword ptr [eax + 4], ecx
// 0046bf19  837dd800             cmp dword ptr [ebp - 0x28], 0
// 0046bf1d  740b                 je 0x46bf2a
// 0046bf1f  8b55d4               mov edx, dword ptr [ebp - 0x2c]
// 0046bf22  52                   push edx
// 0046bf23  6a00                 push 0
// 0046bf25  e8324a2300           call 0x6a095c
// 0046bf2a  33c0                 xor eax, eax
// 0046bf2c  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0046bf2f  64890d00000000       mov dword ptr fs:[0], ecx
// 0046bf36  5f                   pop edi
// 0046bf37  5e                   pop esi
// 0046bf38  5b                   pop ebx
// 0046bf39  8be5                 mov esp, ebp
// 0046bf3b  5d                   pop ebp
// 0046bf3c  c20800               ret 8
// 0046bf3f  6834010000           push 0x134
// 0046bf44  6850c88100           push 0x81c850
// 0046bf49  6803400080           push 0x80004003
// 0046bf4e  6a01                 push 1
// 0046bf50  e82bbefbff           call 0x427d80
// 0046bf55  83c410               add esp, 0x10
// 0046bf58  68f8648100           push 0x8164f8
// 0046bf5d  6803400080           push 0x80004003
// 0046bf62  e809eeffff           call 0x46ad70

//

//

extern "C" void* __cdecl current_context();
extern "C" void __stdcall release_context(int, void*);
extern "C" void __cdecl free_storage(void*);
extern "C" void __cdecl report_error(int, long, const char*, int);
struct Guid { unsigned long data1; unsigned short data2, data3; unsigned char data4[8]; };
extern const Guid workspaceInterface;
extern "C" __declspec(noreturn) void __stdcall raise_error(long, const Guid&);

struct __declspec(dllimport) Context {
    void* previous;
    void** slot;
    void* resource;
    int owned;
    int reserved[2];
    Context(void*);
    ~Context();
};

struct Text {
    void destroy();
};

struct TextOwner {
    Text* value;
    ~TextOwner();
};

inline TextOwner::~TextOwner()
{
    Text* saved = value;
    if (saved) {
        saved->destroy();
        free_storage(saved);
    }
}

struct Interface {
    virtual long __stdcall query(void*, void**);
    virtual unsigned long __stdcall add_ref();
    virtual unsigned long __stdcall release();
};

struct InterfaceOwner {
    Interface* value;
    InterfaceOwner(Interface*);
    ~InterfaceOwner();
};

inline InterfaceOwner::InterfaceOwner(Interface* p) : value(p)
{
    if (value)
        value->add_ref();
}

inline InterfaceOwner::~InterfaceOwner()
{
    if (value)
        value->release();
}

struct Payload {
    unsigned char prefix[8];
    unsigned char data[1];
};

struct Object {
    unsigned char prefix[4];
    Interface interface_part;
    unsigned char gap[4];
    Payload payload;
};

extern "C" long __stdcall acquire_object(Object**);

struct Source {
    TextOwner text();
    long assign(Text*, void*);
};

long __stdcall reconstruct(Source*, Interface**);

long __stdcall reconstruct(Source* source, Interface** result)
{
    Object* object = 0;
    Context context(current_context());

    try {
        if (acquire_object(&object)) {
            report_error(1, acquire_object(&object), ".\\Workspace.cpp", 300);
            raise_error(acquire_object(&object),
                        workspaceInterface);
        }

        Object* const saved = object;

        (source->assign(source->text().value,
                        &saved->payload ? saved->payload.data : 0)
            ? (report_error(1,
                            source->assign(source->text().value,
                                           &saved->payload ? saved->payload.data : 0),
                            ".\\Workspace.cpp", 304),
               raise_error(source->assign(source->text().value,
                                          &saved->payload ? saved->payload.data : 0),
                           workspaceInterface))
            : (void)0);

        InterfaceOwner value(saved ? &saved->interface_part : 0);

        if (result) {
            *result = value.value;
            if (value.value)
                value.value->add_ref();
        } else {
            report_error(1, 0x80004003L, ".\\Workspace.cpp", 308);
            raise_error(0x80004003L,
                        workspaceInterface);
        }
    } catch (long error) {
        return error;
    } catch (...) {
        return 0x80004005L;
    }

    return 0;
}
