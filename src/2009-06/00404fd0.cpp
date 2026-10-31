// roc 2009-06 00404fd0  unit: ATL::CComClassFactory  size: 366 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00404fd0
//
// 00404fd0  55                   push ebp
// 00404fd1  8bec                 mov ebp, esp
// 00404fd3  6aff                 push -1
// 00404fd5  68c0cb8400           push 0x84cbc0
// 00404fda  64a100000000         mov eax, dword ptr fs:[0]
// 00404fe0  50                   push eax
// 00404fe1  64892500000000       mov dword ptr fs:[0], esp
// 00404fe8  83ec28               sub esp, 0x28
// 00404feb  8b4508               mov eax, dword ptr [ebp + 8]
// 00404fee  53                   push ebx
// 00404fef  56                   push esi
// 00404ff0  33db                 xor ebx, ebx
// 00404ff2  57                   push edi
// 00404ff3  8965f0               mov dword ptr [ebp - 0x10], esp
// 00404ff6  894dd4               mov dword ptr [ebp - 0x2c], ecx
// 00404ff9  3bc3                 cmp eax, ebx
// 00404ffb  0f8428010000         je 0x405129
// 00405001  395d0c               cmp dword ptr [ebp + 0xc], ebx
// 00405004  0f841f010000         je 0x405129
// 0040500a  50                   push eax
// 0040500b  895de4               mov dword ptr [ebp - 0x1c], ebx
// 0040500e  ff15e0e18900         call dword ptr [0x89e1e0]
// 00405014  8bf0                 mov esi, eax
// 00405016  46                   inc esi
// 00405017  56                   push esi
// 00405018  8975e0               mov dword ptr [ebp - 0x20], esi
// 0040501b  895dec               mov dword ptr [ebp - 0x14], ebx
// 0040501e  895dfc               mov dword ptr [ebp - 4], ebx
// 00405021  e8f43c3100           call 0x718d1a
// 00405026  83c404               add esp, 4
// 00405029  8945ec               mov dword ptr [ebp - 0x14], eax
// 0040502c  eb13                 jmp 0x405041
// 0040502e  8b4dd0               mov ecx, dword ptr [ebp - 0x30]
// 00405031  e8de3c3100           call 0x718d14
// 00405036  b83c504000           mov eax, 0x40503c
// 0040503b  c3                   ret 
// 0040503c  8b75e0               mov esi, dword ptr [ebp - 0x20]
// 0040503f  33db                 xor ebx, ebx
// 00405041  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 00405044  8b45ec               mov eax, dword ptr [ebp - 0x14]
// 00405047  51                   push ecx
// 00405048  c745fc02000000       mov dword ptr [ebp - 4], 2
// 0040504f  8945dc               mov dword ptr [ebp - 0x24], eax
// 00405052  ff1500e28900         call dword ptr [0x89e200]
// 00405058  8d7c0002             lea edi, [eax + eax + 2]
// 0040505c  33c9                 xor ecx, ecx
// 0040505e  8bc7                 mov eax, edi
// 00405060  ba02000000           mov edx, 2
// 00405065  f7e2                 mul edx
// 00405067  0f90c1               seto cl
// 0040506a  897dd8               mov dword ptr [ebp - 0x28], edi
// 0040506d  895de8               mov dword ptr [ebp - 0x18], ebx
// 00405070  c645fc03             mov byte ptr [ebp - 4], 3
// 00405074  f7d9                 neg ecx
// 00405076  0bc8                 or ecx, eax
// 00405078  51                   push ecx
// 00405079  e89c3c3100           call 0x718d1a
// 0040507e  8bd8                 mov ebx, eax
// 00405080  83c404               add esp, 4
// 00405083  895de8               mov dword ptr [ebp - 0x18], ebx
// 00405086  c745fc02000000       mov dword ptr [ebp - 4], 2
// 0040508d  eb1e                 jmp 0x4050ad
// 0040508f  8b4dcc               mov ecx, dword ptr [ebp - 0x34]
// 00405092  e87d3c3100           call 0x718d14
// 00405097  c745fc02000000       mov dword ptr [ebp - 4], 2
// 0040509e  b8a4504000           mov eax, 0x4050a4
// 004050a3  c3                   ret 
// 004050a4  8b75e0               mov esi, dword ptr [ebp - 0x20]
// 004050a7  8b7dd8               mov edi, dword ptr [ebp - 0x28]
// 004050aa  8b5de8               mov ebx, dword ptr [ebp - 0x18]
// 004050ad  8b45ec               mov eax, dword ptr [ebp - 0x14]
// 004050b0  c645fc05             mov byte ptr [ebp - 4], 5
// 004050b4  895dd8               mov dword ptr [ebp - 0x28], ebx
// 004050b7  85c0                 test eax, eax
// 004050b9  7433                 je 0x4050ee
// 004050bb  85db                 test ebx, ebx
// 004050bd  742f                 je 0x4050ee
// 004050bf  8b4d08               mov ecx, dword ptr [ebp + 8]
// 004050c2  56                   push esi
// 004050c3  51                   push ecx
// 004050c4  56                   push esi
// 004050c5  50                   push eax
// 004050c6  e805deffff           call 0x402ed0
// 004050cb  8b550c               mov edx, dword ptr [ebp + 0xc]
// 004050ce  57                   push edi
// 004050cf  52                   push edx
// 004050d0  57                   push edi
// 004050d1  53                   push ebx
// 004050d2  e8f9ddffff           call 0x402ed0
// 004050d7  83c420               add esp, 0x20
// 004050da  8d45e8               lea eax, [ebp - 0x18]
// 004050dd  50                   push eax
// 004050de  8d4dec               lea ecx, [ebp - 0x14]
// 004050e1  51                   push ecx
// 004050e2  8b4dd4               mov ecx, dword ptr [ebp - 0x2c]
// 004050e5  e866fdffff           call 0x404e50
// 004050ea  85c0                 test eax, eax
// 004050ec  7509                 jne 0x4050f7
// 004050ee  c745e40e000780       mov dword ptr [ebp - 0x1c], 0x8007000e
// 004050f5  eb05                 jmp 0x4050fc
// 004050f7  33db                 xor ebx, ebx
// 004050f9  895ddc               mov dword ptr [ebp - 0x24], ebx
// 004050fc  53                   push ebx
// 004050fd  e8dc3b3100           call 0x718cde
// 00405102  8b55dc               mov edx, dword ptr [ebp - 0x24]
// 00405105  52                   push edx
// 00405106  e8d33b3100           call 0x718cde
// 0040510b  33c0                 xor eax, eax
// 0040510d  83c408               add esp, 8
// 00405110  3945e4               cmp dword ptr [ebp - 0x1c], eax
// 00405113  0f9dc0               setge al
// 00405116  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00405119  64890d00000000       mov dword ptr fs:[0], ecx
// 00405120  5f                   pop edi
// 00405121  5e                   pop esi
// 00405122  5b                   pop ebx
// 00405123  8be5                 mov esp, ebp
// 00405125  5d                   pop ebp
// 00405126  c20800               ret 8
// 00405129  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0040512c  5f                   pop edi
// 0040512d  5e                   pop esi
// 0040512e  33c0                 xor eax, eax
// 00405130  64890d00000000       mov dword ptr fs:[0], ecx
// 00405137  5b                   pop ebx
// 00405138  8be5                 mov esp, ebp
// 0040513a  5d                   pop ebp
// 0040513b  c20800               ret 8
// copied from an identical function in another client (function ?Add@CExpansionVector@ATL@@QAEHPBDPB_W@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espclaude_acf6ced398afe108.cpp