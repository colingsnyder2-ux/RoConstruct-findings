// roc 2009-12 00404f40  unit: VCApp::?$IObjectSafetyRobloxImpl  size: 366 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00404f40
//
// 00404f40  55                   push ebp
// 00404f41  8bec                 mov ebp, esp
// 00404f43  6aff                 push -1
// 00404f45  6820719200           push 0x927120
// 00404f4a  64a100000000         mov eax, dword ptr fs:[0]
// 00404f50  50                   push eax
// 00404f51  64892500000000       mov dword ptr fs:[0], esp
// 00404f58  83ec28               sub esp, 0x28
// 00404f5b  8b4508               mov eax, dword ptr [ebp + 8]
// 00404f5e  53                   push ebx
// 00404f5f  56                   push esi
// 00404f60  33db                 xor ebx, ebx
// 00404f62  57                   push edi
// 00404f63  8965f0               mov dword ptr [ebp - 0x10], esp
// 00404f66  894dd4               mov dword ptr [ebp - 0x2c], ecx
// 00404f69  3bc3                 cmp eax, ebx
// 00404f6b  0f8428010000         je 0x405099
// 00404f71  395d0c               cmp dword ptr [ebp + 0xc], ebx
// 00404f74  0f841f010000         je 0x405099
// 00404f7a  50                   push eax
// 00404f7b  895de4               mov dword ptr [ebp - 0x1c], ebx
// 00404f7e  ff1518b29800         call dword ptr [0x98b218]
// 00404f84  8bf0                 mov esi, eax
// 00404f86  46                   inc esi
// 00404f87  56                   push esi
// 00404f88  8975e0               mov dword ptr [ebp - 0x20], esi
// 00404f8b  895dec               mov dword ptr [ebp - 0x14], ebx
// 00404f8e  895dfc               mov dword ptr [ebp - 4], ebx
// 00404f91  e8aceb3e00           call 0x7f3b42
// 00404f96  83c404               add esp, 4
// 00404f99  8945ec               mov dword ptr [ebp - 0x14], eax
// 00404f9c  eb13                 jmp 0x404fb1
// 00404f9e  8b4dd0               mov ecx, dword ptr [ebp - 0x30]
// 00404fa1  e896eb3e00           call 0x7f3b3c
// 00404fa6  b8ac4f4000           mov eax, 0x404fac
// 00404fab  c3                   ret 
// 00404fac  8b75e0               mov esi, dword ptr [ebp - 0x20]
// 00404faf  33db                 xor ebx, ebx
// 00404fb1  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 00404fb4  8b45ec               mov eax, dword ptr [ebp - 0x14]
// 00404fb7  51                   push ecx
// 00404fb8  c745fc02000000       mov dword ptr [ebp - 4], 2
// 00404fbf  8945dc               mov dword ptr [ebp - 0x24], eax
// 00404fc2  ff1538b29800         call dword ptr [0x98b238]
// 00404fc8  8d7c0002             lea edi, [eax + eax + 2]
// 00404fcc  33c9                 xor ecx, ecx
// 00404fce  8bc7                 mov eax, edi
// 00404fd0  ba02000000           mov edx, 2
// 00404fd5  f7e2                 mul edx
// 00404fd7  0f90c1               seto cl
// 00404fda  897dd8               mov dword ptr [ebp - 0x28], edi
// 00404fdd  895de8               mov dword ptr [ebp - 0x18], ebx
// 00404fe0  c645fc03             mov byte ptr [ebp - 4], 3
// 00404fe4  f7d9                 neg ecx
// 00404fe6  0bc8                 or ecx, eax
// 00404fe8  51                   push ecx
// 00404fe9  e854eb3e00           call 0x7f3b42
// 00404fee  8bd8                 mov ebx, eax
// 00404ff0  83c404               add esp, 4
// 00404ff3  895de8               mov dword ptr [ebp - 0x18], ebx
// 00404ff6  c745fc02000000       mov dword ptr [ebp - 4], 2
// 00404ffd  eb1e                 jmp 0x40501d
// 00404fff  8b4dcc               mov ecx, dword ptr [ebp - 0x34]
// 00405002  e835eb3e00           call 0x7f3b3c
// 00405007  c745fc02000000       mov dword ptr [ebp - 4], 2
// 0040500e  b814504000           mov eax, 0x405014
// 00405013  c3                   ret 
// 00405014  8b75e0               mov esi, dword ptr [ebp - 0x20]
// 00405017  8b7dd8               mov edi, dword ptr [ebp - 0x28]
// 0040501a  8b5de8               mov ebx, dword ptr [ebp - 0x18]
// 0040501d  8b45ec               mov eax, dword ptr [ebp - 0x14]
// 00405020  c645fc05             mov byte ptr [ebp - 4], 5
// 00405024  895dd8               mov dword ptr [ebp - 0x28], ebx
// 00405027  85c0                 test eax, eax
// 00405029  7433                 je 0x40505e
// 0040502b  85db                 test ebx, ebx
// 0040502d  742f                 je 0x40505e
// 0040502f  8b4d08               mov ecx, dword ptr [ebp + 8]
// 00405032  56                   push esi
// 00405033  51                   push ecx
// 00405034  56                   push esi
// 00405035  50                   push eax
// 00405036  e865dbffff           call 0x402ba0
// 0040503b  8b550c               mov edx, dword ptr [ebp + 0xc]
// 0040503e  57                   push edi
// 0040503f  52                   push edx
// 00405040  57                   push edi
// 00405041  53                   push ebx
// 00405042  e859dbffff           call 0x402ba0
// 00405047  83c420               add esp, 0x20
// 0040504a  8d45e8               lea eax, [ebp - 0x18]
// 0040504d  50                   push eax
// 0040504e  8d4dec               lea ecx, [ebp - 0x14]
// 00405051  51                   push ecx
// 00405052  8b4dd4               mov ecx, dword ptr [ebp - 0x2c]
// 00405055  e8a6faffff           call 0x404b00
// 0040505a  85c0                 test eax, eax
// 0040505c  7509                 jne 0x405067
// 0040505e  c745e40e000780       mov dword ptr [ebp - 0x1c], 0x8007000e
// 00405065  eb05                 jmp 0x40506c
// 00405067  33db                 xor ebx, ebx
// 00405069  895ddc               mov dword ptr [ebp - 0x24], ebx
// 0040506c  53                   push ebx
// 0040506d  e894ea3e00           call 0x7f3b06
// 00405072  8b55dc               mov edx, dword ptr [ebp - 0x24]
// 00405075  52                   push edx
// 00405076  e88bea3e00           call 0x7f3b06
// 0040507b  33c0                 xor eax, eax
// 0040507d  83c408               add esp, 8
// 00405080  3945e4               cmp dword ptr [ebp - 0x1c], eax
// 00405083  0f9dc0               setge al
// 00405086  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00405089  64890d00000000       mov dword ptr fs:[0], ecx
// 00405090  5f                   pop edi
// 00405091  5e                   pop esi
// 00405092  5b                   pop ebx
// 00405093  8be5                 mov esp, ebp
// 00405095  5d                   pop ebp
// 00405096  c20800               ret 8
// 00405099  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0040509c  5f                   pop edi
// 0040509d  5e                   pop esi
// 0040509e  33c0                 xor eax, eax
// 004050a0  64890d00000000       mov dword ptr fs:[0], ecx
// 004050a7  5b                   pop ebx
// 004050a8  8be5                 mov esp, ebp
// 004050aa  5d                   pop ebp
// 004050ab  c20800               ret 8
// copied from an identical function in another client (function ?Add@CExpansionVector@ATL@@QAEHPBDPB_W@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espclaude_acf6ced398afe108.cpp