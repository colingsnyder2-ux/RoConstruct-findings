// roc 2008-06 00795bd0  unit: CXTPRibbonGroup  size: 595 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00795bd0
//
// 00795bd0  83ec1c               sub esp, 0x1c
// 00795bd3  53                   push ebx
// 00795bd4  55                   push ebp
// 00795bd5  8be9                 mov ebp, ecx
// 00795bd7  8b4534               mov eax, dword ptr [ebp + 0x34]
// 00795bda  8b808c000000         mov eax, dword ptr [eax + 0x8c]
// 00795be0  56                   push esi
// 00795be1  57                   push edi
// 00795be2  50                   push eax
// 00795be3  e8d8170000           call 0x7973c0
// 00795be8  8b5d28               mov ebx, dword ptr [ebp + 0x28]
// 00795beb  83c404               add esp, 4
// 00795bee  89442418             mov dword ptr [esp + 0x18], eax
// 00795bf2  895c2414             mov dword ptr [esp + 0x14], ebx
// 00795bf6  85db                 test ebx, ebx
// 00795bf8  7513                 jne 0x795c0d
// 00795bfa  53                   push ebx
// 00795bfb  53                   push ebx
// 00795bfc  8bc8                 mov ecx, eax
// 00795bfe  e8bd0f0000           call 0x796bc0
// 00795c03  5f                   pop edi
// 00795c04  5e                   pop esi
// 00795c05  5d                   pop ebp
// 00795c06  5b                   pop ebx
// 00795c07  83c41c               add esp, 0x1c
// 00795c0a  c21000               ret 0x10
// 00795c0d  33c9                 xor ecx, ecx
// 00795c0f  8bc3                 mov eax, ebx
// 00795c11  ba04000000           mov edx, 4
// 00795c16  f7e2                 mul edx
// 00795c18  0f90c1               seto cl
// 00795c1b  f7d9                 neg ecx
// 00795c1d  0bc8                 or ecx, eax
// 00795c1f  51                   push ecx
// 00795c20  e831adf0ff           call 0x6a0956
// 00795c25  83c404               add esp, 4
// 00795c28  33f6                 xor esi, esi
// 00795c2a  89442410             mov dword ptr [esp + 0x10], eax
// 00795c2e  85db                 test ebx, ebx
// 00795c30  7e31                 jle 0x795c63
// 00795c32  85f6                 test esi, esi
// 00795c34  7c0d                 jl 0x795c43
// 00795c36  3b7528               cmp esi, dword ptr [ebp + 0x28]
// 00795c39  7d08                 jge 0x795c43
// 00795c3b  8b4524               mov eax, dword ptr [ebp + 0x24]
// 00795c3e  8b3cb0               mov edi, dword ptr [eax + esi*4]
// 00795c41  eb02                 jmp 0x795c45
// 00795c43  33ff                 xor edi, edi
// 00795c45  8bcf                 mov ecx, edi
// 00795c47  e884220000           call 0x797ed0
// 00795c4c  85c0                 test eax, eax
// 00795c4e  740e                 je 0x795c5e
// 00795c50  8b17                 mov edx, dword ptr [edi]
// 00795c52  8b442430             mov eax, dword ptr [esp + 0x30]
// 00795c56  8b5278               mov edx, dword ptr [edx + 0x78]
// 00795c59  50                   push eax
// 00795c5a  8bcf                 mov ecx, edi
// 00795c5c  ffd2                 call edx
// 00795c5e  46                   inc esi
// 00795c5f  3bf3                 cmp esi, ebx
// 00795c61  7ccf                 jl 0x795c32
// 00795c63  33f6                 xor esi, esi
// 00795c65  85db                 test ebx, ebx
// 00795c67  7e46                 jle 0x795caf
// 00795c69  8da42400000000       lea esp, [esp]
// 00795c70  85f6                 test esi, esi
// 00795c72  7c0d                 jl 0x795c81
// 00795c74  3b7528               cmp esi, dword ptr [ebp + 0x28]
// 00795c77  7d08                 jge 0x795c81
// 00795c79  8b4524               mov eax, dword ptr [ebp + 0x24]
// 00795c7c  8b3cb0               mov edi, dword ptr [eax + esi*4]
// 00795c7f  eb02                 jmp 0x795c83
// 00795c81  33ff                 xor edi, edi
// 00795c83  8bcf                 mov ecx, edi
// 00795c85  e846220000           call 0x797ed0
// 00795c8a  85c0                 test eax, eax
// 00795c8c  7413                 je 0x795ca1
// 00795c8e  8b17                 mov edx, dword ptr [edi]
// 00795c90  8b442430             mov eax, dword ptr [esp + 0x30]
// 00795c94  8b9280000000         mov edx, dword ptr [edx + 0x80]
// 00795c9a  50                   push eax
// 00795c9b  8bcf                 mov ecx, edi
// 00795c9d  ffd2                 call edx
// 00795c9f  eb02                 jmp 0x795ca3
// 00795ca1  33c0                 xor eax, eax
// 00795ca3  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00795ca7  8904b1               mov dword ptr [ecx + esi*4], eax
// 00795caa  46                   inc esi
// 00795cab  3bf3                 cmp esi, ebx
// 00795cad  7cc1                 jl 0x795c70
// 00795caf  8b74243c             mov esi, dword ptr [esp + 0x3c]
// 00795cb3  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 00795cb7  2b7e08               sub edi, dword ptr [esi + 8]
// 00795cba  8b542410             mov edx, dword ptr [esp + 0x10]
// 00795cbe  2b3e                 sub edi, dword ptr [esi]
// 00795cc0  8b442430             mov eax, dword ptr [esp + 0x30]
// 00795cc4  57                   push edi
// 00795cc5  52                   push edx
// 00795cc6  50                   push eax
// 00795cc7  8bcd                 mov ecx, ebp
// 00795cc9  e8d2fdffff           call 0x795aa0
// 00795cce  8b0e                 mov ecx, dword ptr [esi]
// 00795cd0  8b5604               mov edx, dword ptr [esi + 4]
// 00795cd3  8b4608               mov eax, dword ptr [esi + 8]
// 00795cd6  894c241c             mov dword ptr [esp + 0x1c], ecx
// 00795cda  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00795cdd  33db                 xor ebx, ebx
// 00795cdf  395c2414             cmp dword ptr [esp + 0x14], ebx
// 00795ce3  89542420             mov dword ptr [esp + 0x20], edx
// 00795ce7  89442424             mov dword ptr [esp + 0x24], eax
// 00795ceb  894c2428             mov dword ptr [esp + 0x28], ecx
// 00795cef  bef9ffffff           mov esi, 0xfffffff9
// 00795cf4  7e2e                 jle 0x795d24
// 00795cf6  85db                 test ebx, ebx
// 00795cf8  7c0d                 jl 0x795d07
// 00795cfa  3b5d28               cmp ebx, dword ptr [ebp + 0x28]
// 00795cfd  7d08                 jge 0x795d07
// 00795cff  8b5524               mov edx, dword ptr [ebp + 0x24]
// 00795d02  8b0c9a               mov ecx, dword ptr [edx + ebx*4]
// 00795d05  eb02                 jmp 0x795d09
// 00795d07  33c9                 xor ecx, ecx
// 00795d09  e8c2210000           call 0x797ed0
// 00795d0e  85c0                 test eax, eax
// 00795d10  740b                 je 0x795d1d
// 00795d12  8b442410             mov eax, dword ptr [esp + 0x10]
// 00795d16  8b0c98               mov ecx, dword ptr [eax + ebx*4]
// 00795d19  8d740e07             lea esi, [esi + ecx + 7]
// 00795d1d  43                   inc ebx
// 00795d1e  3b5c2414             cmp ebx, dword ptr [esp + 0x14]
// 00795d22  7cd2                 jl 0x795cf6
// 00795d24  3bf7                 cmp esi, edi
// 00795d26  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00795d2a  8b5904               mov ebx, dword ptr [ecx + 4]
// 00795d2d  7e0e                 jle 0x795d3d
// 00795d2f  8bc6                 mov eax, esi
// 00795d31  2bc7                 sub eax, edi
// 00795d33  3bd8                 cmp ebx, eax
// 00795d35  7e02                 jle 0x795d39
// 00795d37  8bd8                 mov ebx, eax
// 00795d39  85db                 test ebx, ebx
// 00795d3b  7d02                 jge 0x795d3f
// 00795d3d  33db                 xor ebx, ebx
// 00795d3f  2bf3                 sub esi, ebx
// 00795d41  33d2                 xor edx, edx
// 00795d43  2bf7                 sub esi, edi
// 00795d45  85f6                 test esi, esi
// 00795d47  0f9fc2               setg dl
// 00795d4a  33c0                 xor eax, eax
// 00795d4c  85db                 test ebx, ebx
// 00795d4e  0f9fc0               setg al
// 00795d51  895d38               mov dword ptr [ebp + 0x38], ebx
// 00795d54  52                   push edx
// 00795d55  50                   push eax
// 00795d56  e8650e0000           call 0x796bc0
// 00795d5b  295c241c             sub dword ptr [esp + 0x1c], ebx
// 00795d5f  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 00795d63  33ff                 xor edi, edi
// 00795d65  85db                 test ebx, ebx
// 00795d67  7e6c                 jle 0x795dd5
// 00795d69  8da42400000000       lea esp, [esp]
// 00795d70  85ff                 test edi, edi
// 00795d72  7c0d                 jl 0x795d81
// 00795d74  3b7d28               cmp edi, dword ptr [ebp + 0x28]
// 00795d77  7d08                 jge 0x795d81
// 00795d79  8b4d24               mov ecx, dword ptr [ebp + 0x24]
// 00795d7c  8b34b9               mov esi, dword ptr [ecx + edi*4]
// 00795d7f  eb02                 jmp 0x795d83
// 00795d81  33f6                 xor esi, esi
// 00795d83  8bce                 mov ecx, esi
// 00795d85  e846210000           call 0x797ed0
// 00795d8a  85c0                 test eax, eax
// 00795d8c  7442                 je 0x795dd0
// 00795d8e  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00795d92  8b542420             mov edx, dword ptr [esp + 0x20]
// 00795d96  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00795d9a  83ec10               sub esp, 0x10
// 00795d9d  8bc4                 mov eax, esp
// 00795d9f  8918                 mov dword ptr [eax], ebx
// 00795da1  895004               mov dword ptr [eax + 4], edx
// 00795da4  8b542438             mov edx, dword ptr [esp + 0x38]
// 00795da8  894808               mov dword ptr [eax + 8], ecx
// 00795dab  89500c               mov dword ptr [eax + 0xc], edx
// 00795dae  8b442420             mov eax, dword ptr [esp + 0x20]
// 00795db2  8b0cb8               mov ecx, dword ptr [eax + edi*4]
// 00795db5  51                   push ecx
// 00795db6  8bce                 mov ecx, esi
// 00795db8  e863f7ffff           call 0x795520
// 00795dbd  8b542410             mov edx, dword ptr [esp + 0x10]
// 00795dc1  8b04ba               mov eax, dword ptr [edx + edi*4]
// 00795dc4  8d4c0307             lea ecx, [ebx + eax + 7]
// 00795dc8  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 00795dcc  894c241c             mov dword ptr [esp + 0x1c], ecx
// 00795dd0  47                   inc edi
// 00795dd1  3bfb                 cmp edi, ebx
// 00795dd3  7c9b                 jl 0x795d70
// 00795dd5  33f6                 xor esi, esi
// 00795dd7  85db                 test ebx, ebx
// 00795dd9  7e31                 jle 0x795e0c
// 00795ddb  eb03                 jmp 0x795de0
// 00795ddd  8d4900               lea ecx, [ecx]
// 00795de0  85f6                 test esi, esi
// 00795de2  7c0d                 jl 0x795df1
// 00795de4  3b7528               cmp esi, dword ptr [ebp + 0x28]
// 00795de7  7d08                 jge 0x795df1
// 00795de9  8b5524               mov edx, dword ptr [ebp + 0x24]
// 00795dec  8b3cb2               mov edi, dword ptr [edx + esi*4]
// 00795def  eb02                 jmp 0x795df3
// 00795df1  33ff                 xor edi, edi
// 00795df3  8bcf                 mov ecx, edi
// 00795df5  e8d6200000           call 0x797ed0
// 00795dfa  85c0                 test eax, eax
// 00795dfc  7409                 je 0x795e07
// 00795dfe  8b07                 mov eax, dword ptr [edi]
// 00795e00  8b507c               mov edx, dword ptr [eax + 0x7c]
// 00795e03  8bcf                 mov ecx, edi
// 00795e05  ffd2                 call edx
// 00795e07  46                   inc esi
// 00795e08  3bf3                 cmp esi, ebx
// 00795e0a  7cd4                 jl 0x795de0
// 00795e0c  8b442410             mov eax, dword ptr [esp + 0x10]
// 00795e10  50                   push eax
// 00795e11  e834abf0ff           call 0x6a094a
// 00795e16  83c404               add esp, 4
// 00795e19  5f                   pop edi
// 00795e1a  5e                   pop esi
// 00795e1b  5d                   pop ebp
// 00795e1c  5b                   pop ebx
// 00795e1d  83c41c               add esp, 0x1c
// 00795e20  c21000               ret 0x10
// library xtp-11.2.2-shared-mfc/Source\Ribbon\XTPRibbonGroups.cpp (function ?CalcDynamicSize@CXTPRibbonGroups@@QAEXPAVCDC@@HKABVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonGroups.cpp
