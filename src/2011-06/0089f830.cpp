// roc 2011-06 0089f830  unit: CXTPShortcutManager  size: 341 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0089f830
//
// 0089f830  53                   push ebx
// 0089f831  8b5c2408             mov ebx, dword ptr [esp + 8]
// 0089f835  56                   push esi
// 0089f836  57                   push edi
// 0089f837  33ff                 xor edi, edi
// 0089f839  3bdf                 cmp ebx, edi
// 0089f83b  8bf1                 mov esi, ecx
// 0089f83d  7d05                 jge 0x89f844
// 0089f83f  e8c6aaf6ff           call 0x80a30a
// 0089f844  8b442414             mov eax, dword ptr [esp + 0x14]
// 0089f848  3bc7                 cmp eax, edi
// 0089f84a  7c03                 jl 0x89f84f
// 0089f84c  894610               mov dword ptr [esi + 0x10], eax
// 0089f84f  3bdf                 cmp ebx, edi
// 0089f851  751f                 jne 0x89f872
// 0089f853  8b4604               mov eax, dword ptr [esi + 4]
// 0089f856  3bc7                 cmp eax, edi
// 0089f858  740c                 je 0x89f866
// 0089f85a  50                   push eax
// 0089f85b  e8a4aaf6ff           call 0x80a304
// 0089f860  83c404               add esp, 4
// 0089f863  897e04               mov dword ptr [esi + 4], edi
// 0089f866  897e0c               mov dword ptr [esi + 0xc], edi
// 0089f869  897e08               mov dword ptr [esi + 8], edi
// 0089f86c  5f                   pop edi
// 0089f86d  5e                   pop esi
// 0089f86e  5b                   pop ebx
// 0089f86f  c20800               ret 8
// 0089f872  8b5604               mov edx, dword ptr [esi + 4]
// 0089f875  55                   push ebp
// 0089f876  3bd7                 cmp edx, edi
// 0089f878  7531                 jne 0x89f8ab
// 0089f87a  8b6e10               mov ebp, dword ptr [esi + 0x10]
// 0089f87d  3bdd                 cmp ebx, ebp
// 0089f87f  7e02                 jle 0x89f883
// 0089f881  8beb                 mov ebp, ebx
// 0089f883  8d7c6d00             lea edi, [ebp + ebp*2]
// 0089f887  03ff                 add edi, edi
// 0089f889  57                   push edi
// 0089f88a  e8b1aaf6ff           call 0x80a340
// 0089f88f  57                   push edi
// 0089f890  6a00                 push 0
// 0089f892  50                   push eax
// 0089f893  894604               mov dword ptr [esi + 4], eax
// 0089f896  e849baf6ff           call 0x80b2e4
// 0089f89b  83c410               add esp, 0x10
// 0089f89e  896e0c               mov dword ptr [esi + 0xc], ebp
// 0089f8a1  5d                   pop ebp
// 0089f8a2  5f                   pop edi
// 0089f8a3  895e08               mov dword ptr [esi + 8], ebx
// 0089f8a6  5e                   pop esi
// 0089f8a7  5b                   pop ebx
// 0089f8a8  c20800               ret 8
// 0089f8ab  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0089f8ae  3bd9                 cmp ebx, ecx
// 0089f8b0  7f2f                 jg 0x89f8e1
// 0089f8b2  8b4e08               mov ecx, dword ptr [esi + 8]
// 0089f8b5  3bd9                 cmp ebx, ecx
// 0089f8b7  0f8ebe000000         jle 0x89f97b
// 0089f8bd  8bc3                 mov eax, ebx
// 0089f8bf  2bc1                 sub eax, ecx
// 0089f8c1  8d0440               lea eax, [eax + eax*2]
// 0089f8c4  03c0                 add eax, eax
// 0089f8c6  50                   push eax
// 0089f8c7  8d0c49               lea ecx, [ecx + ecx*2]
// 0089f8ca  8d144a               lea edx, [edx + ecx*2]
// 0089f8cd  57                   push edi
// 0089f8ce  52                   push edx
// 0089f8cf  e810baf6ff           call 0x80b2e4
// 0089f8d4  83c40c               add esp, 0xc
// 0089f8d7  5d                   pop ebp
// 0089f8d8  5f                   pop edi
// 0089f8d9  895e08               mov dword ptr [esi + 8], ebx
// 0089f8dc  5e                   pop esi
// 0089f8dd  5b                   pop ebx
// 0089f8de  c20800               ret 8
// 0089f8e1  8b4610               mov eax, dword ptr [esi + 0x10]
// 0089f8e4  3bc7                 cmp eax, edi
// 0089f8e6  7524                 jne 0x89f90c
// 0089f8e8  8b4608               mov eax, dword ptr [esi + 8]
// 0089f8eb  99                   cdq 
// 0089f8ec  83e207               and edx, 7
// 0089f8ef  03c2                 add eax, edx
// 0089f8f1  c1f803               sar eax, 3
// 0089f8f4  83f804               cmp eax, 4
// 0089f8f7  7d07                 jge 0x89f900
// 0089f8f9  b804000000           mov eax, 4
// 0089f8fe  eb0c                 jmp 0x89f90c
// 0089f900  3d00040000           cmp eax, 0x400
// 0089f905  7e05                 jle 0x89f90c
// 0089f907  b800040000           mov eax, 0x400
// 0089f90c  8d3c01               lea edi, [ecx + eax]
// 0089f90f  3bdf                 cmp ebx, edi
// 0089f911  7d06                 jge 0x89f919
// 0089f913  897c2414             mov dword ptr [esp + 0x14], edi
// 0089f917  eb06                 jmp 0x89f91f
// 0089f919  895c2414             mov dword ptr [esp + 0x14], ebx
// 0089f91d  8bfb                 mov edi, ebx
// 0089f91f  3bf9                 cmp edi, ecx
// 0089f921  7d05                 jge 0x89f928
// 0089f923  e8e2a9f6ff           call 0x80a30a
// 0089f928  8d3c7f               lea edi, [edi + edi*2]
// 0089f92b  03ff                 add edi, edi
// 0089f92d  57                   push edi
// 0089f92e  e80daaf6ff           call 0x80a340
// 0089f933  8b4e04               mov ecx, dword ptr [esi + 4]
// 0089f936  8be8                 mov ebp, eax
// 0089f938  8b4608               mov eax, dword ptr [esi + 8]
// 0089f93b  8d0440               lea eax, [eax + eax*2]
// 0089f93e  03c0                 add eax, eax
// 0089f940  50                   push eax
// 0089f941  51                   push ecx
// 0089f942  57                   push edi
// 0089f943  55                   push ebp
// 0089f944  e8773cb6ff           call 0x4035c0
// 0089f949  8b4e08               mov ecx, dword ptr [esi + 8]
// 0089f94c  8bc3                 mov eax, ebx
// 0089f94e  2bc1                 sub eax, ecx
// 0089f950  8d1440               lea edx, [eax + eax*2]
// 0089f953  03d2                 add edx, edx
// 0089f955  52                   push edx
// 0089f956  8d0449               lea eax, [ecx + ecx*2]
// 0089f959  8d4c4500             lea ecx, [ebp + eax*2]
// 0089f95d  6a00                 push 0
// 0089f95f  51                   push ecx
// 0089f960  e87fb9f6ff           call 0x80b2e4
// 0089f965  8b5604               mov edx, dword ptr [esi + 4]
// 0089f968  52                   push edx
// 0089f969  e896a9f6ff           call 0x80a304
// 0089f96e  8b442438             mov eax, dword ptr [esp + 0x38]
// 0089f972  83c424               add esp, 0x24
// 0089f975  896e04               mov dword ptr [esi + 4], ebp
// 0089f978  89460c               mov dword ptr [esi + 0xc], eax
// 0089f97b  5d                   pop ebp
// 0089f97c  5f                   pop edi
// 0089f97d  895e08               mov dword ptr [esi + 8], ebx
// 0089f980  5e                   pop esi
// 0089f981  5b                   pop ebx
// 0089f982  c20800               ret 8
// library xtp-15.2.1/Source\CommandBars\XTPShortcutManager.cpp (function ?SetSize@?$CArray@UtagACCEL@@AAU1@@@QAEXHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPShortcutManager.cpp
