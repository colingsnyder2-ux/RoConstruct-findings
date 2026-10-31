// from server: 100% by auto
// roc 2008-06 004104b0  unit: VCBrowserViewExternal::?$CProxy_IBrowserViewExternalEvents  size: 436 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004104b0
//
// 004104b0  55                   push ebp
// 004104b1  8bec                 mov ebp, esp
// 004104b3  6aff                 push -1
// 004104b5  6880d57b00           push 0x7bd580
// 004104ba  64a100000000         mov eax, dword ptr fs:[0]
// 004104c0  50                   push eax
// 004104c1  64892500000000       mov dword ptr fs:[0], esp
// 004104c8  83ec10               sub esp, 0x10
// 004104cb  8b450c               mov eax, dword ptr [ebp + 0xc]
// 004104ce  53                   push ebx
// 004104cf  56                   push esi
// 004104d0  57                   push edi
// 004104d1  33ff                 xor edi, edi
// 004104d3  8965f0               mov dword ptr [ebp - 0x10], esp
// 004104d6  3bc7                 cmp eax, edi
// 004104d8  7518                 jne 0x4104f2
// 004104da  b803400080           mov eax, 0x80004003
// 004104df  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 004104e2  64890d00000000       mov dword ptr fs:[0], ecx
// 004104e9  5f                   pop edi
// 004104ea  5e                   pop esi
// 004104eb  5b                   pop ebx
// 004104ec  8be5                 mov esp, ebp
// 004104ee  5d                   pop ebp
// 004104ef  c20800               ret 8
// 004104f2  6a1c                 push 0x1c
// 004104f4  8938                 mov dword ptr [eax], edi
// 004104f6  897dfc               mov dword ptr [ebp - 4], edi
// 004104f9  e822042900           call 0x6a0920
// 004104fe  8bf0                 mov esi, eax
// 00410500  83c404               add esp, 4
// 00410503  3bf7                 cmp esi, edi
// 00410505  742c                 je 0x410533
// 00410507  897e04               mov dword ptr [esi + 4], edi
// 0041050a  897e10               mov dword ptr [esi + 0x10], edi
// 0041050d  897e0c               mov dword ptr [esi + 0xc], edi
// 00410510  897e08               mov dword ptr [esi + 8], edi
// 00410513  897e14               mov dword ptr [esi + 0x14], edi
// 00410516  897e18               mov dword ptr [esi + 0x18], edi
// 00410519  c706f0d78000         mov dword ptr [esi], 0x80d7f0
// 0041051f  8b0d68c29600         mov ecx, dword ptr [0x96c268]
// 00410525  8b01                 mov eax, dword ptr [ecx]
// 00410527  8b5004               mov edx, dword ptr [eax + 4]
// 0041052a  ffd2                 call edx
// 0041052c  8bde                 mov ebx, esi
// 0041052e  895dec               mov dword ptr [ebp - 0x14], ebx
// 00410531  eb05                 jmp 0x410538
// 00410533  897dec               mov dword ptr [ebp - 0x14], edi
// 00410536  8bdf                 mov ebx, edi
// 00410538  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 0041053f  3bdf                 cmp ebx, edi
// 00410541  0f8405010000         je 0x41064c
// 00410547  8b7508               mov esi, dword ptr [ebp + 8]
// 0041054a  8b4e04               mov ecx, dword ptr [esi + 4]
// 0041054d  8b4608               mov eax, dword ptr [esi + 8]
// 00410550  8d0481               lea eax, [ecx + eax*4]
// 00410553  83c604               add esi, 4
// 00410556  2bc1                 sub eax, ecx
// 00410558  33c9                 xor ecx, ecx
// 0041055a  c1f802               sar eax, 2
// 0041055d  ba08000000           mov edx, 8
// 00410562  f7e2                 mul edx
// 00410564  0f90c1               seto cl
// 00410567  c745fc02000000       mov dword ptr [ebp - 4], 2
// 0041056e  f7d9                 neg ecx
// 00410570  0bc8                 or ecx, eax
// 00410572  51                   push ecx
// 00410573  e8de032900           call 0x6a0956
// 00410578  83c404               add esp, 4
// 0041057b  894508               mov dword ptr [ebp + 8], eax
// 0041057e  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 00410585  3bc7                 cmp eax, edi
// 00410587  0f84b4000000         je 0x410641
// 0041058d  8b3e                 mov edi, dword ptr [esi]
// 0041058f  8b4e04               mov ecx, dword ptr [esi + 4]
// 00410592  8bd7                 mov edx, edi
// 00410594  8d0c8a               lea ecx, [edx + ecx*4]
// 00410597  8bd8                 mov ebx, eax
// 00410599  3bf9                 cmp edi, ecx
// 0041059b  7334                 jae 0x4105d1
// 0041059d  8d4900               lea ecx, [ecx]
// 004105a0  8b0f                 mov ecx, dword ptr [edi]
// 004105a2  85c9                 test ecx, ecx
// 004105a4  741c                 je 0x4105c2
// 004105a6  8b11                 mov edx, dword ptr [ecx]
// 004105a8  8b4204               mov eax, dword ptr [edx + 4]
// 004105ab  51                   push ecx
// 004105ac  ffd0                 call eax
// 004105ae  8b0f                 mov ecx, dword ptr [edi]
// 004105b0  57                   push edi
// 004105b1  56                   push esi
// 004105b2  890b                 mov dword ptr [ebx], ecx
// 004105b4  e857e7ffff           call 0x40ed10
// 004105b9  894304               mov dword ptr [ebx + 4], eax
// 004105bc  8b4508               mov eax, dword ptr [ebp + 8]
// 004105bf  83c308               add ebx, 8
// 004105c2  8b5604               mov edx, dword ptr [esi + 4]
// 004105c5  8b0e                 mov ecx, dword ptr [esi]
// 004105c7  83c704               add edi, 4
// 004105ca  8d1491               lea edx, [ecx + edx*4]
// 004105cd  3bfa                 cmp edi, edx
// 004105cf  72cf                 jb 0x4105a0
// 004105d1  8b7dec               mov edi, dword ptr [ebp - 0x14]
// 004105d4  6a02                 push 2
// 004105d6  6a00                 push 0
// 004105d8  53                   push ebx
// 004105d9  50                   push eax
// 004105da  8bcf                 mov ecx, edi
// 004105dc  e81fe9ffff           call 0x40ef00
// 004105e1  8b450c               mov eax, dword ptr [ebp + 0xc]
// 004105e4  50                   push eax
// 004105e5  68e0d38000           push 0x80d3e0
// 004105ea  68c8d38000           push 0x80d3c8
// 004105ef  57                   push edi
// 004105f0  e88b1cffff           call 0x402280
// 004105f5  8bf0                 mov esi, eax
// 004105f7  85f6                 test esi, esi
// 004105f9  7d0b                 jge 0x410606
// 004105fb  8b17                 mov edx, dword ptr [edi]
// 004105fd  8b421c               mov eax, dword ptr [edx + 0x1c]
// 00410600  6a01                 push 1
// 00410602  8bcf                 mov ecx, edi
// 00410604  ffd0                 call eax
// 00410606  8bc6                 mov eax, esi
// 00410608  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0041060b  64890d00000000       mov dword ptr fs:[0], ecx
// 00410612  5f                   pop edi
// 00410613  5e                   pop esi
// 00410614  5b                   pop ebx
// 00410615  8be5                 mov esp, ebp
// 00410617  5d                   pop ebp
// 00410618  c20800               ret 8
// 0041061b  8b4de8               mov ecx, dword ptr [ebp - 0x18]
// 0041061e  e82d032900           call 0x6a0950
// 00410623  b84c064100           mov eax, 0x41064c
// 00410628  c3                   ret 
// 00410629  8b4de4               mov ecx, dword ptr [ebp - 0x1c]
// 0041062c  e81f032900           call 0x6a0950
// 00410631  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 00410638  b83e064100           mov eax, 0x41063e
// 0041063d  c3                   ret 
// 0041063e  8b5dec               mov ebx, dword ptr [ebp - 0x14]
// 00410641  8b03                 mov eax, dword ptr [ebx]
// 00410643  8b501c               mov edx, dword ptr [eax + 0x1c]
// 00410646  6a01                 push 1
// 00410648  8bcb                 mov ecx, ebx
// 0041064a  ffd2                 call edx
// 0041064c  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0041064f  5f                   pop edi
// 00410650  5e                   pop esi
// 00410651  b80e000780           mov eax, 0x8007000e
// 00410656  64890d00000000       mov dword ptr fs:[0], ecx
// 0041065d  5b                   pop ebx
// 0041065e  8be5                 mov esp, ebp
// 00410660  5d                   pop ebp
// 00410661  c20800               ret 8

// from server: 100% by EspClaude
// roc 2008-06 004104b0  unit: VCBrowserViewExternal::?$CProxy_IBrowserViewExternalEvents  size: 436 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004104b0
//
// 004104b0  55                   push ebp
// 004104b1  8bec                 mov ebp, esp
// 004104b3  6aff                 push -1
// 004104b5  6880d57b00           push 0x7bd580
// 004104ba  64a100000000         mov eax, dword ptr fs:[0]
// 004104c0  50                   push eax
// 004104c1  64892500000000       mov dword ptr fs:[0], esp
// 004104c8  83ec10               sub esp, 0x10
// 004104cb  8b450c               mov eax, dword ptr [ebp + 0xc]
// 004104ce  53                   push ebx
// 004104cf  56                   push esi
// 004104d0  57                   push edi
// 004104d1  33ff                 xor edi, edi
// 004104d3  8965f0               mov dword ptr [ebp - 0x10], esp
// 004104d6  3bc7                 cmp eax, edi
// 004104d8  7518                 jne 0x4104f2
// 004104da  b803400080           mov eax, 0x80004003
// 004104df  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 004104e2  64890d00000000       mov dword ptr fs:[0], ecx
// 004104e9  5f                   pop edi
// 004104ea  5e                   pop esi
// 004104eb  5b                   pop ebx
// 004104ec  8be5                 mov esp, ebp
// 004104ee  5d                   pop ebp
// 004104ef  c20800               ret 8
// 004104f2  6a1c                 push 0x1c
// 004104f4  8938                 mov dword ptr [eax], edi
// 004104f6  897dfc               mov dword ptr [ebp - 4], edi
// 004104f9  e822042900           call 0x6a0920
// 004104fe  8bf0                 mov esi, eax
// 00410500  83c404               add esp, 4
// 00410503  3bf7                 cmp esi, edi
// 00410505  742c                 je 0x410533
// 00410507  897e04               mov dword ptr [esi + 4], edi
// 0041050a  897e10               mov dword ptr [esi + 0x10], edi
// 0041050d  897e0c               mov dword ptr [esi + 0xc], edi
// 00410510  897e08               mov dword ptr [esi + 8], edi
// 00410513  897e14               mov dword ptr [esi + 0x14], edi
// 00410516  897e18               mov dword ptr [esi + 0x18], edi
// 00410519  c706f0d78000         mov dword ptr [esi], 0x80d7f0
// 0041051f  8b0d68c29600         mov ecx, dword ptr [0x96c268]
// 00410525  8b01                 mov eax, dword ptr [ecx]
// 00410527  8b5004               mov edx, dword ptr [eax + 4]
// 0041052a  ffd2                 call edx
// 0041052c  8bde                 mov ebx, esi
// 0041052e  895dec               mov dword ptr [ebp - 0x14], ebx
// 00410531  eb05                 jmp 0x410538
// 00410533  897dec               mov dword ptr [ebp - 0x14], edi
// 00410536  8bdf                 mov ebx, edi
// 00410538  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 0041053f  3bdf                 cmp ebx, edi
// 00410541  0f8405010000         je 0x41064c
// 00410547  8b7508               mov esi, dword ptr [ebp + 8]
// 0041054a  8b4e04               mov ecx, dword ptr [esi + 4]
// 0041054d  8b4608               mov eax, dword ptr [esi + 8]
// 00410550  8d0481               lea eax, [ecx + eax*4]
// 00410553  83c604               add esi, 4
// 00410556  2bc1                 sub eax, ecx
// 00410558  33c9                 xor ecx, ecx
// 0041055a  c1f802               sar eax, 2
// 0041055d  ba08000000           mov edx, 8
// 00410562  f7e2                 mul edx
// 00410564  0f90c1               seto cl
// 00410567  c745fc02000000       mov dword ptr [ebp - 4], 2
// 0041056e  f7d9                 neg ecx
// 00410570  0bc8                 or ecx, eax
// 00410572  51                   push ecx
// 00410573  e8de032900           call 0x6a0956
// 00410578  83c404               add esp, 4
// 0041057b  894508               mov dword ptr [ebp + 8], eax
// 0041057e  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 00410585  3bc7                 cmp eax, edi
// 00410587  0f84b4000000         je 0x410641
// 0041058d  8b3e                 mov edi, dword ptr [esi]
// 0041058f  8b4e04               mov ecx, dword ptr [esi + 4]
// 00410592  8bd7                 mov edx, edi
// 00410594  8d0c8a               lea ecx, [edx + ecx*4]
// 00410597  8bd8                 mov ebx, eax
// 00410599  3bf9                 cmp edi, ecx
// 0041059b  7334                 jae 0x4105d1
// 0041059d  8d4900               lea ecx, [ecx]
// 004105a0  8b0f                 mov ecx, dword ptr [edi]
// 004105a2  85c9                 test ecx, ecx
// 004105a4  741c                 je 0x4105c2
// 004105a6  8b11                 mov edx, dword ptr [ecx]
// 004105a8  8b4204               mov eax, dword ptr [edx + 4]
// 004105ab  51                   push ecx
// 004105ac  ffd0                 call eax
// 004105ae  8b0f                 mov ecx, dword ptr [edi]
// 004105b0  57                   push edi
// 004105b1  56                   push esi
// 004105b2  890b                 mov dword ptr [ebx], ecx
// 004105b4  e857e7ffff           call 0x40ed10
// 004105b9  894304               mov dword ptr [ebx + 4], eax
// 004105bc  8b4508               mov eax, dword ptr [ebp + 8]
// 004105bf  83c308               add ebx, 8
// 004105c2  8b5604               mov edx, dword ptr [esi + 4]
// 004105c5  8b0e                 mov ecx, dword ptr [esi]
// 004105c7  83c704               add edi, 4
// 004105ca  8d1491               lea edx, [ecx + edx*4]
// 004105cd  3bfa                 cmp edi, edx
// 004105cf  72cf                 jb 0x4105a0
// 004105d1  8b7dec               mov edi, dword ptr [ebp - 0x14]
// 004105d4  6a02                 push 2
// 004105d6  6a00                 push 0
// 004105d8  53                   push ebx
// 004105d9  50                   push eax
// 004105da  8bcf                 mov ecx, edi
// 004105dc  e81fe9ffff           call 0x40ef00
// 004105e1  8b450c               mov eax, dword ptr [ebp + 0xc]
// 004105e4  50                   push eax
// 004105e5  68e0d38000           push 0x80d3e0
// 004105ea  68c8d38000           push 0x80d3c8
// 004105ef  57                   push edi
// 004105f0  e88b1cffff           call 0x402280
// 004105f5  8bf0                 mov esi, eax
// 004105f7  85f6                 test esi, esi
// 004105f9  7d0b                 jge 0x410606
// 004105fb  8b17                 mov edx, dword ptr [edi]
// 004105fd  8b421c               mov eax, dword ptr [edx + 0x1c]
// 00410600  6a01                 push 1
// 00410602  8bcf                 mov ecx, edi
// 00410604  ffd0                 call eax
// 00410606  8bc6                 mov eax, esi
// 00410608  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0041060b  64890d00000000       mov dword ptr fs:[0], ecx
// 00410612  5f                   pop edi
// 00410613  5e                   pop esi
// 00410614  5b                   pop ebx
// 00410615  8be5                 mov esp, ebp
// 00410617  5d                   pop ebp
// 00410618  c20800               ret 8
// 0041061b  8b4de8               mov ecx, dword ptr [ebp - 0x18]
// 0041061e  e82d032900           call 0x6a0950
// 00410623  b84c064100           mov eax, 0x41064c
// 00410628  c3                   ret 
// 00410629  8b4de4               mov ecx, dword ptr [ebp - 0x1c]
// 0041062c  e81f032900           call 0x6a0950
// 00410631  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 00410638  b83e064100           mov eax, 0x41063e
// 0041063d  c3                   ret 
// 0041063e  8b5dec               mov ebx, dword ptr [ebp - 0x14]
// 00410641  8b03                 mov eax, dword ptr [ebx]
// 00410643  8b501c               mov edx, dword ptr [eax + 0x1c]
// 00410646  6a01                 push 1
// 00410648  8bcb                 mov ecx, ebx
// 0041064a  ffd2                 call edx
// 0041064c  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0041064f  5f                   pop edi
// 00410650  5e                   pop esi
// 00410651  b80e000780           mov eax, 0x8007000e
// 00410656  64890d00000000       mov dword ptr fs:[0], ecx
// 0041065d  5b                   pop ebx
// 0041065e  8be5                 mov esp, ebp
// 00410660  5d                   pop ebp
// 00410661  c20800               ret 8

// from server: 69% by king_originala
// roc 2008-06 004104b0  unit: VCBrowserViewExternal::?$CProxy_IBrowserViewExternalEvents  size: 363 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004104b0
//
// 004104b0  55                   push ebp
// 004104b1  8bec                 mov ebp, esp
// 004104b3  6aff                 push -1
// 004104b5  6880d57b00           push 0x7bd580
// 004104ba  64a100000000         mov eax, dword ptr fs:[0]
// 004104c0  50                   push eax
// 004104c1  64892500000000       mov dword ptr fs:[0], esp
// 004104c8  83ec10               sub esp, 0x10
// 004104cb  8b450c               mov eax, dword ptr [ebp + 0xc]
// 004104ce  53                   push ebx
// 004104cf  56                   push esi
// 004104d0  57                   push edi
// 004104d1  33ff                 xor edi, edi
// 004104d3  8965f0               mov dword ptr [ebp - 0x10], esp
// 004104d6  3bc7                 cmp eax, edi
// 004104d8  7518                 jne 0x4104f2
// 004104da  b803400080           mov eax, 0x80004003
// 004104df  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 004104e2  64890d00000000       mov dword ptr fs:[0], ecx
// 004104e9  5f                   pop edi
// 004104ea  5e                   pop esi
// 004104eb  5b                   pop ebx
// 004104ec  8be5                 mov esp, ebp
// 004104ee  5d                   pop ebp
// 004104ef  c20800               ret 8
// 004104f2  6a1c                 push 0x1c
// 004104f4  8938                 mov dword ptr [eax], edi
// 004104f6  897dfc               mov dword ptr [ebp - 4], edi
// 004104f9  e822042900           call 0x6a0920
// 004104fe  8bf0                 mov esi, eax
// 00410500  83c404               add esp, 4
// 00410503  3bf7                 cmp esi, edi
// 00410505  742c                 je 0x410533
// 00410507  897e04               mov dword ptr [esi + 4], edi
// 0041050a  897e10               mov dword ptr [esi + 0x10], edi
// 0041050d  897e0c               mov dword ptr [esi + 0xc], edi
// 00410510  897e08               mov dword ptr [esi + 8], edi
// 00410513  897e14               mov dword ptr [esi + 0x14], edi
// 00410516  897e18               mov dword ptr [esi + 0x18], edi
// 00410519  c706f0d78000         mov dword ptr [esi], 0x80d7f0
// 0041051f  8b0d68c29600         mov ecx, dword ptr [0x96c268]
// 00410525  8b01                 mov eax, dword ptr [ecx]
// 00410527  8b5004               mov edx, dword ptr [eax + 4]
// 0041052a  ffd2                 call edx
// 0041052c  8bde                 mov ebx, esi
// 0041052e  895dec               mov dword ptr [ebp - 0x14], ebx
// 00410531  eb05                 jmp 0x410538
// 00410533  897dec               mov dword ptr [ebp - 0x14], edi
// 00410536  8bdf                 mov ebx, edi
// 00410538  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 0041053f  3bdf                 cmp ebx, edi
// 00410541  0f8405010000         je 0x41064c
// 00410547  8b7508               mov esi, dword ptr [ebp + 8]
// 0041054a  8b4e04               mov ecx, dword ptr [esi + 4]
// 0041054d  8b4608               mov eax, dword ptr [esi + 8]
// 00410550  8d0481               lea eax, [ecx + eax*4]
// 00410553  83c604               add esi, 4
// 00410556  2bc1                 sub eax, ecx
// 00410558  33c9                 xor ecx, ecx
// 0041055a  c1f802               sar eax, 2
// 0041055d  ba08000000           mov edx, 8
// 00410562  f7e2                 mul edx
// 00410564  0f90c1               seto cl
// 00410567  c745fc02000000       mov dword ptr [ebp - 4], 2
// 0041056e  f7d9                 neg ecx
// 00410570  0bc8                 or ecx, eax
// 00410572  51                   push ecx
// 00410573  e8de032900           call 0x6a0956
// 00410578  83c404               add esp, 4
// 0041057b  894508               mov dword ptr [ebp + 8], eax
// 0041057e  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 00410585  3bc7                 cmp eax, edi
// 00410587  0f84b4000000         je 0x410641
// 0041058d  8b3e                 mov edi, dword ptr [esi]
// 0041058f  8b4e04               mov ecx, dword ptr [esi + 4]
// 00410592  8bd7                 mov edx, edi
// 00410594  8d0c8a               lea ecx, [edx + ecx*4]
// 00410597  8bd8                 mov ebx, eax
// 00410599  3bf9                 cmp edi, ecx
// 0041059b  7334                 jae 0x4105d1
// 0041059d  8d4900               lea ecx, [ecx]
// 004105a0  8b0f                 mov ecx, dword ptr [edi]
// 004105a2  85c9                 test ecx, ecx
// 004105a4  741c                 je 0x4105c2
// 004105a6  8b11                 mov edx, dword ptr [ecx]
// 004105a8  8b4204               mov eax, dword ptr [edx + 4]
// 004105ab  51                   push ecx
// 004105ac  ffd0                 call eax
// 004105ae  8b0f                 mov ecx, dword ptr [edi]
// 004105b0  57                   push edi
// 004105b1  56                   push esi
// 004105b2  890b                 mov dword ptr [ebx], ecx
// 004105b4  e857e7ffff           call 0x40ed10
// 004105b9  894304               mov dword ptr [ebx + 4], eax
// 004105bc  8b4508               mov eax, dword ptr [ebp + 8]
// 004105bf  83c308               add ebx, 8
// 004105c2  8b5604               mov edx, dword ptr [esi + 4]
// 004105c5  8b0e                 mov ecx, dword ptr [esi]
// 004105c7  83c704               add edi, 4
// 004105ca  8d1491               lea edx, [ecx + edx*4]
// 004105cd  3bfa                 cmp edi, edx
// 004105cf  72cf                 jb 0x4105a0
// 004105d1  8b7dec               mov edi, dword ptr [ebp - 0x14]
// 004105d4  6a02                 push 2
// 004105d6  6a00                 push 0
// 004105d8  53                   push ebx
// 004105d9  50                   push eax
// 004105da  8bcf                 mov ecx, edi
// 004105dc  e81fe9ffff           call 0x40ef00
// 004105e1  8b450c               mov eax, dword ptr [ebp + 0xc]
// 004105e4  50                   push eax
// 004105e5  68e0d38000           push 0x80d3e0
// 004105ea  68c8d38000           push 0x80d3c8
// 004105ef  57                   push edi
// 004105f0  e88b1cffff           call 0x402280
// 004105f5  8bf0                 mov esi, eax
// 004105f7  85f6                 test esi, esi
// 004105f9  7d0b                 jge 0x410606
// 004105fb  8b17                 mov edx, dword ptr [edi]
// 004105fd  8b421c               mov eax, dword ptr [edx + 0x1c]
// 00410600  6a01                 push 1
// 00410602  8bcf                 mov ecx, edi
// 00410604  ffd0                 call eax
// 00410606  8bc6                 mov eax, esi
// 00410608  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0041060b  64890d00000000       mov dword ptr fs:[0], ecx
// 00410612  5f                   pop edi
// 00410613  5e                   pop esi
// 00410614  5b                   pop ebx
// 00410615  8be5                 mov esp, ebp
// 00410617  5d                   pop ebp
// 00410618  c20800               ret 8
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espclaude_b32a63565f36d548.cpp
