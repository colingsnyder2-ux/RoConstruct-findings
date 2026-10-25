// from server: 36% by colin
// roc 2008-06 0065a950  unit: RBX::BallBallContact  size: 639 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0065a950
//
// 0065a950  83ec40               sub esp, 0x40
// 0065a953  53                   push ebx
// 0065a954  56                   push esi
// 0065a955  57                   push edi
// 0065a956  8b7c2450             mov edi, dword ptr [esp + 0x50]
// 0065a95a  8b4764               mov eax, dword ptr [edi + 0x64]
// 0065a95d  0fb75820             movzx ebx, word ptr [eax + 0x20]
// 0065a961  33c0                 xor eax, eax
// 0065a963  894c240c             mov dword ptr [esp + 0xc], ecx
// 0065a967  8d4c2410             lea ecx, [esp + 0x10]
// 0065a96b  51                   push ecx
// 0065a96c  8d542420             lea edx, [esp + 0x20]
// 0065a970  89442420             mov dword ptr [esp + 0x20], eax
// 0065a974  89442424             mov dword ptr [esp + 0x24], eax
// 0065a978  89442428             mov dword ptr [esp + 0x28], eax
// 0065a97c  89442414             mov dword ptr [esp + 0x14], eax
// 0065a980  89442418             mov dword ptr [esp + 0x18], eax
// 0065a984  8944241c             mov dword ptr [esp + 0x1c], eax
// 0065a988  8b442458             mov eax, dword ptr [esp + 0x58]
// 0065a98c  52                   push edx
// 0065a98d  50                   push eax
// 0065a98e  53                   push ebx
// 0065a98f  e87cebffff           call 0x659510
// 0065a994  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0065a998  8d7768               lea esi, [edi + 0x68]
// 0065a99b  83c410               add esp, 0x10
// 0065a99e  3b0e                 cmp ecx, dword ptr [esi]
// 0065a9a0  7531                 jne 0x65a9d3
// 0065a9a2  8b542420             mov edx, dword ptr [esp + 0x20]
// 0065a9a6  3b5604               cmp edx, dword ptr [esi + 4]
// 0065a9a9  7528                 jne 0x65a9d3
// 0065a9ab  8b442424             mov eax, dword ptr [esp + 0x24]
// 0065a9af  3b4608               cmp eax, dword ptr [esi + 8]
// 0065a9b2  751f                 jne 0x65a9d3
// 0065a9b4  8b542410             mov edx, dword ptr [esp + 0x10]
// 0065a9b8  3b5774               cmp edx, dword ptr [edi + 0x74]
// 0065a9bb  7516                 jne 0x65a9d3
// 0065a9bd  8b442414             mov eax, dword ptr [esp + 0x14]
// 0065a9c1  3b4778               cmp eax, dword ptr [edi + 0x78]
// 0065a9c4  750d                 jne 0x65a9d3
// 0065a9c6  8b542418             mov edx, dword ptr [esp + 0x18]
// 0065a9ca  3b577c               cmp edx, dword ptr [edi + 0x7c]
// 0065a9cd  0f84e4000000         je 0x65aab7
// 0065a9d3  8b06                 mov eax, dword ptr [esi]
// 0065a9d5  8b5604               mov edx, dword ptr [esi + 4]
// 0065a9d8  55                   push ebp
// 0065a9d9  8b6e08               mov ebp, dword ptr [esi + 8]
// 0065a9dc  896c2440             mov dword ptr [esp + 0x40], ebp
// 0065a9e0  8b6e0c               mov ebp, dword ptr [esi + 0xc]
// 0065a9e3  896c2444             mov dword ptr [esp + 0x44], ebp
// 0065a9e7  8b6e10               mov ebp, dword ptr [esi + 0x10]
// 0065a9ea  896c2448             mov dword ptr [esp + 0x48], ebp
// 0065a9ee  8b6e14               mov ebp, dword ptr [esi + 0x14]
// 0065a9f1  890e                 mov dword ptr [esi], ecx
// 0065a9f3  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0065a9f7  894e04               mov dword ptr [esi + 4], ecx
// 0065a9fa  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0065a9fe  894e08               mov dword ptr [esi + 8], ecx
// 0065aa01  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0065aa05  894f74               mov dword ptr [edi + 0x74], ecx
// 0065aa08  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0065aa0c  894f78               mov dword ptr [edi + 0x78], ecx
// 0065aa0f  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0065aa13  894f7c               mov dword ptr [edi + 0x7c], ecx
// 0065aa16  3b460c               cmp eax, dword ptr [esi + 0xc]
// 0065aa19  89442438             mov dword ptr [esp + 0x38], eax
// 0065aa1d  8954243c             mov dword ptr [esp + 0x3c], edx
// 0065aa21  896c244c             mov dword ptr [esp + 0x4c], ebp
// 0065aa25  7f61                 jg 0x65aa88
// 0065aa27  3b5610               cmp edx, dword ptr [esi + 0x10]
// 0065aa2a  7f5c                 jg 0x65aa88
// 0065aa2c  8b542440             mov edx, dword ptr [esp + 0x40]
// 0065aa30  3b5614               cmp edx, dword ptr [esi + 0x14]
// 0065aa33  7f53                 jg 0x65aa88
// 0065aa35  8b442448             mov eax, dword ptr [esp + 0x48]
// 0065aa39  3b4604               cmp eax, dword ptr [esi + 4]
// 0065aa3c  7c4a                 jl 0x65aa88
// 0065aa3e  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0065aa42  3b0e                 cmp ecx, dword ptr [esi]
// 0065aa44  7c42                 jl 0x65aa88
// 0065aa46  3b6e08               cmp ebp, dword ptr [esi + 8]
// 0065aa49  7c3d                 jl 0x65aa88
// 0065aa4b  56                   push esi
// 0065aa4c  8d54243c             lea edx, [esp + 0x3c]
// 0065aa50  52                   push edx
// 0065aa51  8d442428             lea eax, [esp + 0x28]
// 0065aa55  50                   push eax
// 0065aa56  e875ebffff           call 0x6595d0
// 0065aa5b  83c40c               add esp, 0xc
// 0065aa5e  56                   push esi
// 0065aa5f  8b742414             mov esi, dword ptr [esp + 0x14]
// 0065aa63  8d4c243c             lea ecx, [esp + 0x3c]
// 0065aa67  51                   push ecx
// 0065aa68  8d542428             lea edx, [esp + 0x28]
// 0065aa6c  52                   push edx
// 0065aa6d  57                   push edi
// 0065aa6e  53                   push ebx
// 0065aa6f  8bce                 mov ecx, esi
// 0065aa71  e85afbffff           call 0x65a5d0
// 0065aa76  57                   push edi
// 0065aa77  8bce                 mov ecx, esi
// 0065aa79  e8f2fdffff           call 0x65a870
// 0065aa7e  5d                   pop ebp
// 0065aa7f  5f                   pop edi
// 0065aa80  5e                   pop esi
// 0065aa81  5b                   pop ebx
// 0065aa82  83c440               add esp, 0x40
// 0065aa85  c20800               ret 8
// 0065aa88  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0065aa8c  56                   push esi
// 0065aa8d  8d44243c             lea eax, [esp + 0x3c]
// 0065aa91  50                   push eax
// 0065aa92  8bc8                 mov ecx, eax
// 0065aa94  51                   push ecx
// 0065aa95  57                   push edi
// 0065aa96  53                   push ebx
// 0065aa97  8bcd                 mov ecx, ebp
// 0065aa99  e832fbffff           call 0x65a5d0
// 0065aa9e  57                   push edi
// 0065aa9f  8bcd                 mov ecx, ebp
// 0065aaa1  e8cafdffff           call 0x65a870
// 0065aaa6  56                   push esi
// 0065aaa7  8d54243c             lea edx, [esp + 0x3c]
// 0065aaab  52                   push edx
// 0065aaac  56                   push esi
// 0065aaad  57                   push edi
// 0065aaae  53                   push ebx
// 0065aaaf  8bcd                 mov ecx, ebp
// 0065aab1  e81afbffff           call 0x65a5d0
// 0065aab6  5d                   pop ebp
// 0065aab7  5f                   pop edi
// 0065aab8  5e                   pop esi
// 0065aab9  5b                   pop ebx
// 0065aaba  83c440               add esp, 0x40
// 0065aabd  c20800               ret 8
// 0065aac0  53                   push ebx
// 0065aac1  55                   push ebp
// 0065aac2  56                   push esi
// 0065aac3  8b742410             mov esi, dword ptr [esp + 0x10]
// 0065aac7  837e6400             cmp dword ptr [esi + 0x64], 0
// 0065aacb  57                   push edi
// 0065aacc  8be9                 mov ebp, ecx
// 0065aace  7411                 je 0x65aae1
// 0065aad0  8b4664               mov eax, dword ptr [esi + 0x64]
// 0065aad3  50                   push eax
// 0065aad4  8bcd                 mov ecx, ebp
// 0065aad6  e8a5f5ffff           call 0x65a080
// 0065aadb  837e6400             cmp dword ptr [esi + 0x64], 0
// 0065aadf  75ef                 jne 0x65aad0
// 0065aae1  b8ffffff7f           mov eax, 0x7fffffff
// 0065aae6  8bc8                 mov ecx, eax
// 0065aae8  8bd0                 mov edx, eax
// 0065aaea  894668               mov dword ptr [esi + 0x68], eax
// 0065aaed  b801000080           mov eax, 0x80000001
// 0065aaf2  894e6c               mov dword ptr [esi + 0x6c], ecx
// 0065aaf5  8bc8                 mov ecx, eax
// 0065aaf7  894674               mov dword ptr [esi + 0x74], eax
// 0065aafa  895670               mov dword ptr [esi + 0x70], edx
// 0065aafd  894e78               mov dword ptr [esi + 0x78], ecx
// 0065ab00  6a01                 push 1
// 0065ab02  8bd0                 mov edx, eax
// 0065ab04  8dbd80000000         lea edi, [ebp + 0x80]
// 0065ab0a  6a00                 push 0
// 0065ab0c  8bcf                 mov ecx, edi
// 0065ab0e  89567c               mov dword ptr [esi + 0x7c], edx
// 0065ab11  e85aeff3ff           call 0x599a70
// 0065ab16  8bce                 mov ecx, esi
// 0065ab18  e8b3d0f8ff           call 0x5e7bd0
// 0065ab1d  8bd8                 mov ebx, eax
// 0065ab1f  85db                 test ebx, ebx
// 0065ab21  747d                 je 0x65aba0
// 0065ab23  8b430c               mov eax, dword ptr [ebx + 0xc]
// 0065ab26  3bf0                 cmp esi, eax
// 0065ab28  7509                 jne 0x65ab33
// 0065ab2a  8b4b10               mov ecx, dword ptr [ebx + 0x10]
// 0065ab2d  894c2414             mov dword ptr [esp + 0x14], ecx
// 0065ab31  eb04                 jmp 0x65ab37
// 0065ab33  89442414             mov dword ptr [esp + 0x14], eax
// 0065ab37  53                   push ebx
// 0065ab38  8bce                 mov ecx, esi
// 0065ab3a  e8a1d0f8ff           call 0x5e7be0
// 0065ab3f  8bd8                 mov ebx, eax
// 0065ab41  8b4704               mov eax, dword ptr [edi + 4]
// 0065ab44  3b4708               cmp eax, dword ptr [edi + 8]
// 0065ab47  7d14                 jge 0x65ab5d
// 0065ab49  8b17                 mov edx, dword ptr [edi]
// 0065ab4b  8d0482               lea eax, [edx + eax*4]
// 0065ab4e  85c0                 test eax, eax
// 0065ab50  7406                 je 0x65ab58
// 0065ab52  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0065ab56  8908                 mov dword ptr [eax], ecx
// 0065ab58  ff4704               inc dword ptr [edi + 4]
// 0065ab5b  eb3f                 jmp 0x65ab9c
// 0065ab5d  8b0f                 mov ecx, dword ptr [edi]
// 0065ab5f  8d542414             lea edx, [esp + 0x14]
// 0065ab63  3bd1                 cmp edx, ecx
// 0065ab65  721d                 jb 0x65ab84
// 0065ab67  8d0c81               lea ecx, [ecx + eax*4]
// 0065ab6a  3bd1                 cmp edx, ecx
// 0065ab6c  7316                 jae 0x65ab84
// 0065ab6e  8b442414             mov eax, dword ptr [esp + 0x14]
// 0065ab72  8d4c2414             lea ecx, [esp + 0x14]
// 0065ab76  51                   push ecx
// 0065ab77  8bcf                 mov ecx, edi
// 0065ab79  89442418             mov dword ptr [esp + 0x18], eax
// 0065ab7d  e80ef6f3ff           call 0x59a190
// 0065ab82  eb18                 jmp 0x65ab9c
// 0065ab84  6a00                 push 0
// 0065ab86  40                   inc eax
// 0065ab87  50                   push eax
// 0065ab88  8bcf                 mov ecx, edi
// 0065ab8a  e8e1eef3ff           call 0x599a70
// 0065ab8f  8b5704               mov edx, dword ptr [edi + 4]
// 0065ab92  8b07                 mov eax, dword ptr [edi]
// 0065ab94  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0065ab98  894c90fc             mov dword ptr [eax + edx*4 - 4], ecx
// 0065ab9c  85db                 test ebx, ebx
// 0065ab9e  7583                 jne 0x65ab23
// 0065aba0  33db                 xor ebx, ebx
// 0065aba2  399d84000000         cmp dword ptr [ebp + 0x84], ebx
// 0065aba8  7e1e                 jle 0x65abc8
// 0065abaa  8d9b00000000         lea ebx, [ebx]
// 0065abb0  8b17                 mov edx, dword ptr [edi]
// 0065abb2  8b049a               mov eax, dword ptr [edx + ebx*4]
// 0065abb5  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0065abb8  50                   push eax
// 0065abb9  56                   push esi
// 0065abba  e84120fbff           call 0x60cc00
// 0065abbf  43                   inc ebx
// 0065abc0  3b9d84000000         cmp ebx, dword ptr [ebp + 0x84]
// 0065abc6  7ce8                 jl 0x65abb0
// 0065abc8  5f                   pop edi
// 0065abc9  5e                   pop esi
// 0065abca  5d                   pop ebp
// 0065abcb  5b                   pop ebx
// 0065abcc  c20400               ret 4

// from server: 30% by colin
// roc 2008-06 0065a950  unit: RBX::BallBallContact  size: 639 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0065a950
//
// 0065a950  83ec40               sub esp, 0x40
// 0065a953  53                   push ebx
// 0065a954  56                   push esi
// 0065a955  57                   push edi
// 0065a956  8b7c2450             mov edi, dword ptr [esp + 0x50]
// 0065a95a  8b4764               mov eax, dword ptr [edi + 0x64]
// 0065a95d  0fb75820             movzx ebx, word ptr [eax + 0x20]
// 0065a961  33c0                 xor eax, eax
// 0065a963  894c240c             mov dword ptr [esp + 0xc], ecx
// 0065a967  8d4c2410             lea ecx, [esp + 0x10]
// 0065a96b  51                   push ecx
// 0065a96c  8d542420             lea edx, [esp + 0x20]
// 0065a970  89442420             mov dword ptr [esp + 0x20], eax
// 0065a974  89442424             mov dword ptr [esp + 0x24], eax
// 0065a978  89442428             mov dword ptr [esp + 0x28], eax
// 0065a97c  89442414             mov dword ptr [esp + 0x14], eax
// 0065a980  89442418             mov dword ptr [esp + 0x18], eax
// 0065a984  8944241c             mov dword ptr [esp + 0x1c], eax
// 0065a988  8b442458             mov eax, dword ptr [esp + 0x58]
// 0065a98c  52                   push edx
// 0065a98d  50                   push eax
// 0065a98e  53                   push ebx
// 0065a98f  e87cebffff           call 0x659510
// 0065a994  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0065a998  8d7768               lea esi, [edi + 0x68]
// 0065a99b  83c410               add esp, 0x10
// 0065a99e  3b0e                 cmp ecx, dword ptr [esi]
// 0065a9a0  7531                 jne 0x65a9d3
// 0065a9a2  8b542420             mov edx, dword ptr [esp + 0x20]
// 0065a9a6  3b5604               cmp edx, dword ptr [esi + 4]
// 0065a9a9  7528                 jne 0x65a9d3
// 0065a9ab  8b442424             mov eax, dword ptr [esp + 0x24]
// 0065a9af  3b4608               cmp eax, dword ptr [esi + 8]
// 0065a9b2  751f                 jne 0x65a9d3
// 0065a9b4  8b542410             mov edx, dword ptr [esp + 0x10]
// 0065a9b8  3b5774               cmp edx, dword ptr [edi + 0x74]
// 0065a9bb  7516                 jne 0x65a9d3
// 0065a9bd  8b442414             mov eax, dword ptr [esp + 0x14]
// 0065a9c1  3b4778               cmp eax, dword ptr [edi + 0x78]
// 0065a9c4  750d                 jne 0x65a9d3
// 0065a9c6  8b542418             mov edx, dword ptr [esp + 0x18]
// 0065a9ca  3b577c               cmp edx, dword ptr [edi + 0x7c]
// 0065a9cd  0f84e4000000         je 0x65aab7
// 0065a9d3  8b06                 mov eax, dword ptr [esi]
// 0065a9d5  8b5604               mov edx, dword ptr [esi + 4]
// 0065a9d8  55                   push ebp
// 0065a9d9  8b6e08               mov ebp, dword ptr [esi + 8]
// 0065a9dc  896c2440             mov dword ptr [esp + 0x40], ebp
// 0065a9e0  8b6e0c               mov ebp, dword ptr [esi + 0xc]
// 0065a9e3  896c2444             mov dword ptr [esp + 0x44], ebp
// 0065a9e7  8b6e10               mov ebp, dword ptr [esi + 0x10]
// 0065a9ea  896c2448             mov dword ptr [esp + 0x48], ebp
// 0065a9ee  8b6e14               mov ebp, dword ptr [esi + 0x14]
// 0065a9f1  890e                 mov dword ptr [esi], ecx
// 0065a9f3  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0065a9f7  894e04               mov dword ptr [esi + 4], ecx
// 0065a9fa  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0065a9fe  894e08               mov dword ptr [esi + 8], ecx
// 0065aa01  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0065aa05  894f74               mov dword ptr [edi + 0x74], ecx
// 0065aa08  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0065aa0c  894f78               mov dword ptr [edi + 0x78], ecx
// 0065aa0f  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0065aa13  894f7c               mov dword ptr [edi + 0x7c], ecx
// 0065aa16  3b460c               cmp eax, dword ptr [esi + 0xc]
// 0065aa19  89442438             mov dword ptr [esp + 0x38], eax
// 0065aa1d  8954243c             mov dword ptr [esp + 0x3c], edx
// 0065aa21  896c244c             mov dword ptr [esp + 0x4c], ebp
// 0065aa25  7f61                 jg 0x65aa88
// 0065aa27  3b5610               cmp edx, dword ptr [esi + 0x10]
// 0065aa2a  7f5c                 jg 0x65aa88
// 0065aa2c  8b542440             mov edx, dword ptr [esp + 0x40]
// 0065aa30  3b5614               cmp edx, dword ptr [esi + 0x14]
// 0065aa33  7f53                 jg 0x65aa88
// 0065aa35  8b442448             mov eax, dword ptr [esp + 0x48]
// 0065aa39  3b4604               cmp eax, dword ptr [esi + 4]
// 0065aa3c  7c4a                 jl 0x65aa88
// 0065aa3e  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0065aa42  3b0e                 cmp ecx, dword ptr [esi]
// 0065aa44  7c42                 jl 0x65aa88
// 0065aa46  3b6e08               cmp ebp, dword ptr [esi + 8]
// 0065aa49  7c3d                 jl 0x65aa88
// 0065aa4b  56                   push esi
// 0065aa4c  8d54243c             lea edx, [esp + 0x3c]
// 0065aa50  52                   push edx
// 0065aa51  8d442428             lea eax, [esp + 0x28]
// 0065aa55  50                   push eax
// 0065aa56  e875ebffff           call 0x6595d0
// 0065aa5b  83c40c               add esp, 0xc
// 0065aa5e  56                   push esi
// 0065aa5f  8b742414             mov esi, dword ptr [esp + 0x14]
// 0065aa63  8d4c243c             lea ecx, [esp + 0x3c]
// 0065aa67  51                   push ecx
// 0065aa68  8d542428             lea edx, [esp + 0x28]
// 0065aa6c  52                   push edx
// 0065aa6d  57                   push edi
// 0065aa6e  53                   push ebx
// 0065aa6f  8bce                 mov ecx, esi
// 0065aa71  e85afbffff           call 0x65a5d0
// 0065aa76  57                   push edi
// 0065aa77  8bce                 mov ecx, esi
// 0065aa79  e8f2fdffff           call 0x65a870
// 0065aa7e  5d                   pop ebp
// 0065aa7f  5f                   pop edi
// 0065aa80  5e                   pop esi
// 0065aa81  5b                   pop ebx
// 0065aa82  83c440               add esp, 0x40
// 0065aa85  c20800               ret 8
// 0065aa88  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0065aa8c  56                   push esi
// 0065aa8d  8d44243c             lea eax, [esp + 0x3c]
// 0065aa91  50                   push eax
// 0065aa92  8bc8                 mov ecx, eax
// 0065aa94  51                   push ecx
// 0065aa95  57                   push edi
// 0065aa96  53                   push ebx
// 0065aa97  8bcd                 mov ecx, ebp
// 0065aa99  e832fbffff           call 0x65a5d0
// 0065aa9e  57                   push edi
// 0065aa9f  8bcd                 mov ecx, ebp
// 0065aaa1  e8cafdffff           call 0x65a870
// 0065aaa6  56                   push esi
// 0065aaa7  8d54243c             lea edx, [esp + 0x3c]
// 0065aaab  52                   push edx
// 0065aaac  56                   push esi
// 0065aaad  57                   push edi
// 0065aaae  53                   push ebx
// 0065aaaf  8bcd                 mov ecx, ebp
// 0065aab1  e81afbffff           call 0x65a5d0
// 0065aab6  5d                   pop ebp
// 0065aab7  5f                   pop edi
// 0065aab8  5e                   pop esi
// 0065aab9  5b                   pop ebx
// 0065aaba  83c440               add esp, 0x40
// 0065aabd  c20800               ret 8
// 0065aac0  53                   push ebx
// 0065aac1  55                   push ebp
// 0065aac2  56                   push esi
// 0065aac3  8b742410             mov esi, dword ptr [esp + 0x10]
// 0065aac7  837e6400             cmp dword ptr [esi + 0x64], 0
// 0065aacb  57                   push edi
// 0065aacc  8be9                 mov ebp, ecx
// 0065aace  7411                 je 0x65aae1
// 0065aad0  8b4664               mov eax, dword ptr [esi + 0x64]
// 0065aad3  50                   push eax
// 0065aad4  8bcd                 mov ecx, ebp
// 0065aad6  e8a5f5ffff           call 0x65a080
// 0065aadb  837e6400             cmp dword ptr [esi + 0x64], 0
// 0065aadf  75ef                 jne 0x65aad0
// 0065aae1  b8ffffff7f           mov eax, 0x7fffffff
// 0065aae6  8bc8                 mov ecx, eax
// 0065aae8  8bd0                 mov edx, eax
// 0065aaea  894668               mov dword ptr [esi + 0x68], eax
// 0065aaed  b801000080           mov eax, 0x80000001
// 0065aaf2  894e6c               mov dword ptr [esi + 0x6c], ecx
// 0065aaf5  8bc8                 mov ecx, eax
// 0065aaf7  894674               mov dword ptr [esi + 0x74], eax
// 0065aafa  895670               mov dword ptr [esi + 0x70], edx
// 0065aafd  894e78               mov dword ptr [esi + 0x78], ecx
// 0065ab00  6a01                 push 1
// 0065ab02  8bd0                 mov edx, eax
// 0065ab04  8dbd80000000         lea edi, [ebp + 0x80]
// 0065ab0a  6a00                 push 0
// 0065ab0c  8bcf                 mov ecx, edi
// 0065ab0e  89567c               mov dword ptr [esi + 0x7c], edx
// 0065ab11  e85aeff3ff           call 0x599a70
// 0065ab16  8bce                 mov ecx, esi
// 0065ab18  e8b3d0f8ff           call 0x5e7bd0
// 0065ab1d  8bd8                 mov ebx, eax
// 0065ab1f  85db                 test ebx, ebx
// 0065ab21  747d                 je 0x65aba0
// 0065ab23  8b430c               mov eax, dword ptr [ebx + 0xc]
// 0065ab26  3bf0                 cmp esi, eax
// 0065ab28  7509                 jne 0x65ab33
// 0065ab2a  8b4b10               mov ecx, dword ptr [ebx + 0x10]
// 0065ab2d  894c2414             mov dword ptr [esp + 0x14], ecx
// 0065ab31  eb04                 jmp 0x65ab37
// 0065ab33  89442414             mov dword ptr [esp + 0x14], eax
// 0065ab37  53                   push ebx
// 0065ab38  8bce                 mov ecx, esi
// 0065ab3a  e8a1d0f8ff           call 0x5e7be0
// 0065ab3f  8bd8                 mov ebx, eax
// 0065ab41  8b4704               mov eax, dword ptr [edi + 4]
// 0065ab44  3b4708               cmp eax, dword ptr [edi + 8]
// 0065ab47  7d14                 jge 0x65ab5d
// 0065ab49  8b17                 mov edx, dword ptr [edi]
// 0065ab4b  8d0482               lea eax, [edx + eax*4]
// 0065ab4e  85c0                 test eax, eax
// 0065ab50  7406                 je 0x65ab58
// 0065ab52  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0065ab56  8908                 mov dword ptr [eax], ecx
// 0065ab58  ff4704               inc dword ptr [edi + 4]
// 0065ab5b  eb3f                 jmp 0x65ab9c
// 0065ab5d  8b0f                 mov ecx, dword ptr [edi]
// 0065ab5f  8d542414             lea edx, [esp + 0x14]
// 0065ab63  3bd1                 cmp edx, ecx
// 0065ab65  721d                 jb 0x65ab84
// 0065ab67  8d0c81               lea ecx, [ecx + eax*4]
// 0065ab6a  3bd1                 cmp edx, ecx
// 0065ab6c  7316                 jae 0x65ab84
// 0065ab6e  8b442414             mov eax, dword ptr [esp + 0x14]
// 0065ab72  8d4c2414             lea ecx, [esp + 0x14]
// 0065ab76  51                   push ecx
// 0065ab77  8bcf                 mov ecx, edi
// 0065ab79  89442418             mov dword ptr [esp + 0x18], eax
// 0065ab7d  e80ef6f3ff           call 0x59a190
// 0065ab82  eb18                 jmp 0x65ab9c
// 0065ab84  6a00                 push 0
// 0065ab86  40                   inc eax
// 0065ab87  50                   push eax
// 0065ab88  8bcf                 mov ecx, edi
// 0065ab8a  e8e1eef3ff           call 0x599a70
// 0065ab8f  8b5704               mov edx, dword ptr [edi + 4]
// 0065ab92  8b07                 mov eax, dword ptr [edi]
// 0065ab94  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0065ab98  894c90fc             mov dword ptr [eax + edx*4 - 4], ecx
// 0065ab9c  85db                 test ebx, ebx
// 0065ab9e  7583                 jne 0x65ab23
// 0065aba0  33db                 xor ebx, ebx
// 0065aba2  399d84000000         cmp dword ptr [ebp + 0x84], ebx
// 0065aba8  7e1e                 jle 0x65abc8
// 0065abaa  8d9b00000000         lea ebx, [ebx]
// 0065abb0  8b17                 mov edx, dword ptr [edi]
// 0065abb2  8b049a               mov eax, dword ptr [edx + ebx*4]
// 0065abb5  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0065abb8  50                   push eax
// 0065abb9  56                   push esi
// 0065abba  e84120fbff           call 0x60cc00
// 0065abbf  43                   inc ebx
// 0065abc0  3b9d84000000         cmp ebx, dword ptr [ebp + 0x84]
// 0065abc6  7ce8                 jl 0x65abb0
// 0065abc8  5f                   pop edi
// 0065abc9  5e                   pop esi
// 0065abca  5d                   pop ebp
// 0065abcb  5b                   pop ebx
// 0065abcc  c20400               ret 4

struct Vector3i {
    int x, y, z;
};

struct Geometry;

struct Primitive {
    char pad[0x20];
    unsigned short getSurfaceType();
};

struct BallBallContact {
    char pad[0x64];
    Primitive* p0;
    Vector3i min;
    Vector3i max;
    char pad2[0x80 - 0x74];
    void* connectors;
    int connectorCount;
    int connectorCapacity;
    int field84;

    void deleteAllConnectors();
    bool computeIsColliding(float);
    bool stepContact();
    void generateDataForMovingAssemblyStage();
};

extern "C" void __cdecl sub_659510(unsigned short, void*, void*, void*);
extern "C" void __cdecl sub_6595D0(void*, void*, void*);
extern "C" void __cdecl sub_65A5D0(BallBallContact*, unsigned short, void*, void*, void*);
extern "C" void __cdecl sub_65A870(BallBallContact*, void*);
extern "C" void __cdecl sub_65A080(BallBallContact*, void*);
extern "C" void __cdecl sub_599A70(void*, int, int);
extern "C" void __cdecl sub_59A190(void*, void*);
extern "C" void* __cdecl sub_5E7BD0(Geometry*);
extern "C" void* __cdecl sub_5E7BE0(Geometry*, void*);
extern "C" void __cdecl sub_60CC00(void*, void*, void*);

void BallBallContact::generateDataForMovingAssemblyStage()
{
    Primitive* prim = p0;
    unsigned short surfaceType = prim->getSurfaceType();

    Vector3i newMin;
    Vector3i newMax;
    newMin.x = 0; newMin.y = 0; newMin.z = 0;
    newMax.x = 0; newMax.y = 0; newMax.z = 0;

    sub_659510(surfaceType, prim, &newMin, &newMax);

    if (min.x == newMin.x && min.y == newMin.y && min.z == newMin.z &&
        max.x == newMax.x && max.y == newMax.y && max.z == newMax.z)
    {
        return;
    }

    Vector3i oldMin = min;
    Vector3i oldMax = max;

    max = newMax;
    min = newMin;

    if (oldMin.x <= min.x && oldMin.y <= min.y && oldMin.z <= min.z &&
        oldMax.x >= max.x && oldMax.y >= max.y && oldMax.z >= max.z)
    {
        sub_6595D0(&oldMin, &oldMax, &min);
        sub_65A5D0(this, surfaceType, &oldMin, &oldMax, &min);
        sub_65A870(this, &min);
        return;
    }

    sub_65A5D0(this, surfaceType, &oldMin, &oldMax, &min);
    sub_65A870(this, &min);
    sub_65A5D0(this, surfaceType, &oldMin, &oldMax, &min);
}

void BallBallContact::deleteAllConnectors()
{
    while (connectors)
    {
        sub_65A080(this, connectors);
    }

    min.x = 0x7fffffff;
    min.y = 0x7fffffff;
    min.z = 0x7fffffff;
    max.x = 0x80000001;
    max.y = 0x80000001;
    max.z = 0x80000001;

    sub_599A70(&connectors, 0, 1);

    Geometry* geom = (Geometry*)sub_5E7BD0((Geometry*)this);
    while (geom)
    {
        void* edge;
        if (this == *(void**)((char*)geom + 0xc))
            edge = *(void**)((char*)geom + 0x10);
        else
            edge = *(void**)((char*)geom + 0xc);

        geom = (Geometry*)sub_5E7BE0((Geometry*)this, geom);

        int count = connectorCount;
        if (count < connectorCapacity)
        {
            void** arr = (void**)connectors;
            if (arr)
                arr[count] = edge;
            connectorCount++;
        }
        else
        {
            sub_59A190(&connectors, &edge);
        }
    }

    for (int i = 0; i < field84; ++i)
    {
        void** arr = (void**)connectors;
        sub_60CC00(*(void**)((char*)this + 8), arr[i], this);
    }
}
