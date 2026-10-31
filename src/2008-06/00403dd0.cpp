// from server: 100% by auto
// roc 2008-06 00403dd0  unit: ATL::VCComClassFactory::?$CComObjectNoLock  size: 366 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00403dd0
//
// 00403dd0  55                   push ebp
// 00403dd1  8bec                 mov ebp, esp
// 00403dd3  6aff                 push -1
// 00403dd5  68a0cc7b00           push 0x7bcca0
// 00403dda  64a100000000         mov eax, dword ptr fs:[0]
// 00403de0  50                   push eax
// 00403de1  64892500000000       mov dword ptr fs:[0], esp
// 00403de8  83ec28               sub esp, 0x28
// 00403deb  8b4508               mov eax, dword ptr [ebp + 8]
// 00403dee  53                   push ebx
// 00403def  56                   push esi
// 00403df0  33db                 xor ebx, ebx
// 00403df2  57                   push edi
// 00403df3  8965f0               mov dword ptr [ebp - 0x10], esp
// 00403df6  894dd4               mov dword ptr [ebp - 0x2c], ecx
// 00403df9  3bc3                 cmp eax, ebx
// 00403dfb  0f8428010000         je 0x403f29
// 00403e01  395d0c               cmp dword ptr [ebp + 0xc], ebx
// 00403e04  0f841f010000         je 0x403f29
// 00403e0a  50                   push eax
// 00403e0b  895de4               mov dword ptr [ebp - 0x1c], ebx
// 00403e0e  ff15b8218000         call dword ptr [0x8021b8]
// 00403e14  8bf0                 mov esi, eax
// 00403e16  46                   inc esi
// 00403e17  56                   push esi
// 00403e18  8975e0               mov dword ptr [ebp - 0x20], esi
// 00403e1b  895dec               mov dword ptr [ebp - 0x14], ebx
// 00403e1e  895dfc               mov dword ptr [ebp - 4], ebx
// 00403e21  e830cb2900           call 0x6a0956
// 00403e26  83c404               add esp, 4
// 00403e29  8945ec               mov dword ptr [ebp - 0x14], eax
// 00403e2c  eb13                 jmp 0x403e41
// 00403e2e  8b4dd0               mov ecx, dword ptr [ebp - 0x30]
// 00403e31  e81acb2900           call 0x6a0950
// 00403e36  b83c3e4000           mov eax, 0x403e3c
// 00403e3b  c3                   ret 
// 00403e3c  8b75e0               mov esi, dword ptr [ebp - 0x20]
// 00403e3f  33db                 xor ebx, ebx
// 00403e41  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 00403e44  8b45ec               mov eax, dword ptr [ebp - 0x14]
// 00403e47  51                   push ecx
// 00403e48  c745fc02000000       mov dword ptr [ebp - 4], 2
// 00403e4f  8945dc               mov dword ptr [ebp - 0x24], eax
// 00403e52  ff15e8228000         call dword ptr [0x8022e8]
// 00403e58  8d7c0002             lea edi, [eax + eax + 2]
// 00403e5c  33c9                 xor ecx, ecx
// 00403e5e  8bc7                 mov eax, edi
// 00403e60  ba02000000           mov edx, 2
// 00403e65  f7e2                 mul edx
// 00403e67  0f90c1               seto cl
// 00403e6a  897dd8               mov dword ptr [ebp - 0x28], edi
// 00403e6d  895de8               mov dword ptr [ebp - 0x18], ebx
// 00403e70  c645fc03             mov byte ptr [ebp - 4], 3
// 00403e74  f7d9                 neg ecx
// 00403e76  0bc8                 or ecx, eax
// 00403e78  51                   push ecx
// 00403e79  e8d8ca2900           call 0x6a0956
// 00403e7e  8bd8                 mov ebx, eax
// 00403e80  83c404               add esp, 4
// 00403e83  895de8               mov dword ptr [ebp - 0x18], ebx
// 00403e86  c745fc02000000       mov dword ptr [ebp - 4], 2
// 00403e8d  eb1e                 jmp 0x403ead
// 00403e8f  8b4dcc               mov ecx, dword ptr [ebp - 0x34]
// 00403e92  e8b9ca2900           call 0x6a0950
// 00403e97  c745fc02000000       mov dword ptr [ebp - 4], 2
// 00403e9e  b8a43e4000           mov eax, 0x403ea4
// 00403ea3  c3                   ret 
// 00403ea4  8b75e0               mov esi, dword ptr [ebp - 0x20]
// 00403ea7  8b7dd8               mov edi, dword ptr [ebp - 0x28]
// 00403eaa  8b5de8               mov ebx, dword ptr [ebp - 0x18]
// 00403ead  8b45ec               mov eax, dword ptr [ebp - 0x14]
// 00403eb0  c645fc05             mov byte ptr [ebp - 4], 5
// 00403eb4  895dd8               mov dword ptr [ebp - 0x28], ebx
// 00403eb7  85c0                 test eax, eax
// 00403eb9  7433                 je 0x403eee
// 00403ebb  85db                 test ebx, ebx
// 00403ebd  742f                 je 0x403eee
// 00403ebf  8b4d08               mov ecx, dword ptr [ebp + 8]
// 00403ec2  56                   push esi
// 00403ec3  51                   push ecx
// 00403ec4  56                   push esi
// 00403ec5  50                   push eax
// 00403ec6  e845d9ffff           call 0x401810
// 00403ecb  8b550c               mov edx, dword ptr [ebp + 0xc]
// 00403ece  57                   push edi
// 00403ecf  52                   push edx
// 00403ed0  57                   push edi
// 00403ed1  53                   push ebx
// 00403ed2  e839d9ffff           call 0x401810
// 00403ed7  83c420               add esp, 0x20
// 00403eda  8d45e8               lea eax, [ebp - 0x18]
// 00403edd  50                   push eax
// 00403ede  8d4dec               lea ecx, [ebp - 0x14]
// 00403ee1  51                   push ecx
// 00403ee2  8b4dd4               mov ecx, dword ptr [ebp - 0x2c]
// 00403ee5  e806fbffff           call 0x4039f0
// 00403eea  85c0                 test eax, eax
// 00403eec  7509                 jne 0x403ef7
// 00403eee  c745e40e000780       mov dword ptr [ebp - 0x1c], 0x8007000e
// 00403ef5  eb05                 jmp 0x403efc
// 00403ef7  33db                 xor ebx, ebx
// 00403ef9  895ddc               mov dword ptr [ebp - 0x24], ebx
// 00403efc  53                   push ebx
// 00403efd  e848ca2900           call 0x6a094a
// 00403f02  8b55dc               mov edx, dword ptr [ebp - 0x24]
// 00403f05  52                   push edx
// 00403f06  e83fca2900           call 0x6a094a
// 00403f0b  33c0                 xor eax, eax
// 00403f0d  83c408               add esp, 8
// 00403f10  3945e4               cmp dword ptr [ebp - 0x1c], eax
// 00403f13  0f9dc0               setge al
// 00403f16  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00403f19  64890d00000000       mov dword ptr fs:[0], ecx
// 00403f20  5f                   pop edi
// 00403f21  5e                   pop esi
// 00403f22  5b                   pop ebx
// 00403f23  8be5                 mov esp, ebp
// 00403f25  5d                   pop ebp
// 00403f26  c20800               ret 8
// 00403f29  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00403f2c  5f                   pop edi
// 00403f2d  5e                   pop esi
// 00403f2e  33c0                 xor eax, eax
// 00403f30  64890d00000000       mov dword ptr fs:[0], ecx
// 00403f37  5b                   pop ebx
// 00403f38  8be5                 mov esp, ebp
// 00403f3a  5d                   pop ebp
// 00403f3b  c20800               ret 8

// from server: 100% by EspClaude
// roc 2008-06 00403dd0  unit: ATL::VCComClassFactory::?$CComObjectNoLock  size: 366 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00403dd0
//
// 00403dd0  55                   push ebp
// 00403dd1  8bec                 mov ebp, esp
// 00403dd3  6aff                 push -1
// 00403dd5  68a0cc7b00           push 0x7bcca0
// 00403dda  64a100000000         mov eax, dword ptr fs:[0]
// 00403de0  50                   push eax
// 00403de1  64892500000000       mov dword ptr fs:[0], esp
// 00403de8  83ec28               sub esp, 0x28
// 00403deb  8b4508               mov eax, dword ptr [ebp + 8]
// 00403dee  53                   push ebx
// 00403def  56                   push esi
// 00403df0  33db                 xor ebx, ebx
// 00403df2  57                   push edi
// 00403df3  8965f0               mov dword ptr [ebp - 0x10], esp
// 00403df6  894dd4               mov dword ptr [ebp - 0x2c], ecx
// 00403df9  3bc3                 cmp eax, ebx
// 00403dfb  0f8428010000         je 0x403f29
// 00403e01  395d0c               cmp dword ptr [ebp + 0xc], ebx
// 00403e04  0f841f010000         je 0x403f29
// 00403e0a  50                   push eax
// 00403e0b  895de4               mov dword ptr [ebp - 0x1c], ebx
// 00403e0e  ff15b8218000         call dword ptr [0x8021b8]
// 00403e14  8bf0                 mov esi, eax
// 00403e16  46                   inc esi
// 00403e17  56                   push esi
// 00403e18  8975e0               mov dword ptr [ebp - 0x20], esi
// 00403e1b  895dec               mov dword ptr [ebp - 0x14], ebx
// 00403e1e  895dfc               mov dword ptr [ebp - 4], ebx
// 00403e21  e830cb2900           call 0x6a0956
// 00403e26  83c404               add esp, 4
// 00403e29  8945ec               mov dword ptr [ebp - 0x14], eax
// 00403e2c  eb13                 jmp 0x403e41
// 00403e2e  8b4dd0               mov ecx, dword ptr [ebp - 0x30]
// 00403e31  e81acb2900           call 0x6a0950
// 00403e36  b83c3e4000           mov eax, 0x403e3c
// 00403e3b  c3                   ret 
// 00403e3c  8b75e0               mov esi, dword ptr [ebp - 0x20]
// 00403e3f  33db                 xor ebx, ebx
// 00403e41  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 00403e44  8b45ec               mov eax, dword ptr [ebp - 0x14]
// 00403e47  51                   push ecx
// 00403e48  c745fc02000000       mov dword ptr [ebp - 4], 2
// 00403e4f  8945dc               mov dword ptr [ebp - 0x24], eax
// 00403e52  ff15e8228000         call dword ptr [0x8022e8]
// 00403e58  8d7c0002             lea edi, [eax + eax + 2]
// 00403e5c  33c9                 xor ecx, ecx
// 00403e5e  8bc7                 mov eax, edi
// 00403e60  ba02000000           mov edx, 2
// 00403e65  f7e2                 mul edx
// 00403e67  0f90c1               seto cl
// 00403e6a  897dd8               mov dword ptr [ebp - 0x28], edi
// 00403e6d  895de8               mov dword ptr [ebp - 0x18], ebx
// 00403e70  c645fc03             mov byte ptr [ebp - 4], 3
// 00403e74  f7d9                 neg ecx
// 00403e76  0bc8                 or ecx, eax
// 00403e78  51                   push ecx
// 00403e79  e8d8ca2900           call 0x6a0956
// 00403e7e  8bd8                 mov ebx, eax
// 00403e80  83c404               add esp, 4
// 00403e83  895de8               mov dword ptr [ebp - 0x18], ebx
// 00403e86  c745fc02000000       mov dword ptr [ebp - 4], 2
// 00403e8d  eb1e                 jmp 0x403ead
// 00403e8f  8b4dcc               mov ecx, dword ptr [ebp - 0x34]
// 00403e92  e8b9ca2900           call 0x6a0950
// 00403e97  c745fc02000000       mov dword ptr [ebp - 4], 2
// 00403e9e  b8a43e4000           mov eax, 0x403ea4
// 00403ea3  c3                   ret 
// 00403ea4  8b75e0               mov esi, dword ptr [ebp - 0x20]
// 00403ea7  8b7dd8               mov edi, dword ptr [ebp - 0x28]
// 00403eaa  8b5de8               mov ebx, dword ptr [ebp - 0x18]
// 00403ead  8b45ec               mov eax, dword ptr [ebp - 0x14]
// 00403eb0  c645fc05             mov byte ptr [ebp - 4], 5
// 00403eb4  895dd8               mov dword ptr [ebp - 0x28], ebx
// 00403eb7  85c0                 test eax, eax
// 00403eb9  7433                 je 0x403eee
// 00403ebb  85db                 test ebx, ebx
// 00403ebd  742f                 je 0x403eee
// 00403ebf  8b4d08               mov ecx, dword ptr [ebp + 8]
// 00403ec2  56                   push esi
// 00403ec3  51                   push ecx
// 00403ec4  56                   push esi
// 00403ec5  50                   push eax
// 00403ec6  e845d9ffff           call 0x401810
// 00403ecb  8b550c               mov edx, dword ptr [ebp + 0xc]
// 00403ece  57                   push edi
// 00403ecf  52                   push edx
// 00403ed0  57                   push edi
// 00403ed1  53                   push ebx
// 00403ed2  e839d9ffff           call 0x401810
// 00403ed7  83c420               add esp, 0x20
// 00403eda  8d45e8               lea eax, [ebp - 0x18]
// 00403edd  50                   push eax
// 00403ede  8d4dec               lea ecx, [ebp - 0x14]
// 00403ee1  51                   push ecx
// 00403ee2  8b4dd4               mov ecx, dword ptr [ebp - 0x2c]
// 00403ee5  e806fbffff           call 0x4039f0
// 00403eea  85c0                 test eax, eax
// 00403eec  7509                 jne 0x403ef7
// 00403eee  c745e40e000780       mov dword ptr [ebp - 0x1c], 0x8007000e
// 00403ef5  eb05                 jmp 0x403efc
// 00403ef7  33db                 xor ebx, ebx
// 00403ef9  895ddc               mov dword ptr [ebp - 0x24], ebx
// 00403efc  53                   push ebx
// 00403efd  e848ca2900           call 0x6a094a
// 00403f02  8b55dc               mov edx, dword ptr [ebp - 0x24]
// 00403f05  52                   push edx
// 00403f06  e83fca2900           call 0x6a094a
// 00403f0b  33c0                 xor eax, eax
// 00403f0d  83c408               add esp, 8
// 00403f10  3945e4               cmp dword ptr [ebp - 0x1c], eax
// 00403f13  0f9dc0               setge al
// 00403f16  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00403f19  64890d00000000       mov dword ptr fs:[0], ecx
// 00403f20  5f                   pop edi
// 00403f21  5e                   pop esi
// 00403f22  5b                   pop ebx
// 00403f23  8be5                 mov esp, ebp
// 00403f25  5d                   pop ebp
// 00403f26  c20800               ret 8
// 00403f29  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00403f2c  5f                   pop edi
// 00403f2d  5e                   pop esi
// 00403f2e  33c0                 xor eax, eax
// 00403f30  64890d00000000       mov dword ptr fs:[0], ecx
// 00403f37  5b                   pop ebx
// 00403f38  8be5                 mov esp, ebp
// 00403f3a  5d                   pop ebp
// 00403f3b  c20800               ret 8

// from server: 75% by king_originala
// roc 2008-06 00403dd0  unit: ATL::VCComClassFactory::?$CComObjectNoLock  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00403dd0
//
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espclaude_acf6ced398afe108.cpp
