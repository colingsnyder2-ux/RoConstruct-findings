// roc 2010-06 00405110  unit: ATL::VCComClassFactory::?$CComObjectNoLock  size: 366 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00405110
//
// 00405110  55                   push ebp
// 00405111  8bec                 mov ebp, esp
// 00405113  6aff                 push -1
// 00405115  6870da9700           push 0x97da70
// 0040511a  64a100000000         mov eax, dword ptr fs:[0]
// 00405120  50                   push eax
// 00405121  64892500000000       mov dword ptr fs:[0], esp
// 00405128  83ec28               sub esp, 0x28
// 0040512b  8b4508               mov eax, dword ptr [ebp + 8]
// 0040512e  53                   push ebx
// 0040512f  56                   push esi
// 00405130  33db                 xor ebx, ebx
// 00405132  57                   push edi
// 00405133  8965f0               mov dword ptr [ebp - 0x10], esp
// 00405136  894dd4               mov dword ptr [ebp - 0x2c], ecx
// 00405139  3bc3                 cmp eax, ebx
// 0040513b  0f8428010000         je 0x405269
// 00405141  395d0c               cmp dword ptr [ebp + 0xc], ebx
// 00405144  0f841f010000         je 0x405269
// 0040514a  50                   push eax
// 0040514b  895de4               mov dword ptr [ebp - 0x1c], ebx
// 0040514e  ff1588a39e00         call dword ptr [0x9ea388]
// 00405154  8bf0                 mov esi, eax
// 00405156  46                   inc esi
// 00405157  56                   push esi
// 00405158  8975e0               mov dword ptr [ebp - 0x20], esi
// 0040515b  895dec               mov dword ptr [ebp - 0x14], ebx
// 0040515e  895dfc               mov dword ptr [ebp - 4], ebx
// 00405161  e81c2b3a00           call 0x7a7c82
// 00405166  83c404               add esp, 4
// 00405169  8945ec               mov dword ptr [ebp - 0x14], eax
// 0040516c  eb13                 jmp 0x405181
// 0040516e  8b4dd0               mov ecx, dword ptr [ebp - 0x30]
// 00405171  e8062b3a00           call 0x7a7c7c
// 00405176  b87c514000           mov eax, 0x40517c
// 0040517b  c3                   ret 
// 0040517c  8b75e0               mov esi, dword ptr [ebp - 0x20]
// 0040517f  33db                 xor ebx, ebx
// 00405181  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 00405184  8b45ec               mov eax, dword ptr [ebp - 0x14]
// 00405187  51                   push ecx
// 00405188  c745fc02000000       mov dword ptr [ebp - 4], 2
// 0040518f  8945dc               mov dword ptr [ebp - 0x24], eax
// 00405192  ff15a8a39e00         call dword ptr [0x9ea3a8]
// 00405198  8d7c0002             lea edi, [eax + eax + 2]
// 0040519c  33c9                 xor ecx, ecx
// 0040519e  8bc7                 mov eax, edi
// 004051a0  ba02000000           mov edx, 2
// 004051a5  f7e2                 mul edx
// 004051a7  0f90c1               seto cl
// 004051aa  897dd8               mov dword ptr [ebp - 0x28], edi
// 004051ad  895de8               mov dword ptr [ebp - 0x18], ebx
// 004051b0  c645fc03             mov byte ptr [ebp - 4], 3
// 004051b4  f7d9                 neg ecx
// 004051b6  0bc8                 or ecx, eax
// 004051b8  51                   push ecx
// 004051b9  e8c42a3a00           call 0x7a7c82
// 004051be  8bd8                 mov ebx, eax
// 004051c0  83c404               add esp, 4
// 004051c3  895de8               mov dword ptr [ebp - 0x18], ebx
// 004051c6  c745fc02000000       mov dword ptr [ebp - 4], 2
// 004051cd  eb1e                 jmp 0x4051ed
// 004051cf  8b4dcc               mov ecx, dword ptr [ebp - 0x34]
// 004051d2  e8a52a3a00           call 0x7a7c7c
// 004051d7  c745fc02000000       mov dword ptr [ebp - 4], 2
// 004051de  b8e4514000           mov eax, 0x4051e4
// 004051e3  c3                   ret 
// 004051e4  8b75e0               mov esi, dword ptr [ebp - 0x20]
// 004051e7  8b7dd8               mov edi, dword ptr [ebp - 0x28]
// 004051ea  8b5de8               mov ebx, dword ptr [ebp - 0x18]
// 004051ed  8b45ec               mov eax, dword ptr [ebp - 0x14]
// 004051f0  c645fc05             mov byte ptr [ebp - 4], 5
// 004051f4  895dd8               mov dword ptr [ebp - 0x28], ebx
// 004051f7  85c0                 test eax, eax
// 004051f9  7433                 je 0x40522e
// 004051fb  85db                 test ebx, ebx
// 004051fd  742f                 je 0x40522e
// 004051ff  8b4d08               mov ecx, dword ptr [ebp + 8]
// 00405202  56                   push esi
// 00405203  51                   push ecx
// 00405204  56                   push esi
// 00405205  50                   push eax
// 00405206  e8e5d9ffff           call 0x402bf0
// 0040520b  8b550c               mov edx, dword ptr [ebp + 0xc]
// 0040520e  57                   push edi
// 0040520f  52                   push edx
// 00405210  57                   push edi
// 00405211  53                   push ebx
// 00405212  e8d9d9ffff           call 0x402bf0
// 00405217  83c420               add esp, 0x20
// 0040521a  8d45e8               lea eax, [ebp - 0x18]
// 0040521d  50                   push eax
// 0040521e  8d4dec               lea ecx, [ebp - 0x14]
// 00405221  51                   push ecx
// 00405222  8b4dd4               mov ecx, dword ptr [ebp - 0x2c]
// 00405225  e826f9ffff           call 0x404b50
// 0040522a  85c0                 test eax, eax
// 0040522c  7509                 jne 0x405237
// 0040522e  c745e40e000780       mov dword ptr [ebp - 0x1c], 0x8007000e
// 00405235  eb05                 jmp 0x40523c
// 00405237  33db                 xor ebx, ebx
// 00405239  895ddc               mov dword ptr [ebp - 0x24], ebx
// 0040523c  53                   push ebx
// 0040523d  e8042a3a00           call 0x7a7c46
// 00405242  8b55dc               mov edx, dword ptr [ebp - 0x24]
// 00405245  52                   push edx
// 00405246  e8fb293a00           call 0x7a7c46
// 0040524b  33c0                 xor eax, eax
// 0040524d  83c408               add esp, 8
// 00405250  3945e4               cmp dword ptr [ebp - 0x1c], eax
// 00405253  0f9dc0               setge al
// 00405256  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00405259  64890d00000000       mov dword ptr fs:[0], ecx
// 00405260  5f                   pop edi
// 00405261  5e                   pop esi
// 00405262  5b                   pop ebx
// 00405263  8be5                 mov esp, ebp
// 00405265  5d                   pop ebp
// 00405266  c20800               ret 8
// 00405269  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0040526c  5f                   pop edi
// 0040526d  5e                   pop esi
// 0040526e  33c0                 xor eax, eax
// 00405270  64890d00000000       mov dword ptr fs:[0], ecx
// 00405277  5b                   pop ebx
// 00405278  8be5                 mov esp, ebp
// 0040527a  5d                   pop ebp
// 0040527b  c20800               ret 8
// copied from an identical function in another client (function ?Add@CExpansionVector@ATL@@QAEHPBDPB_W@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espclaude_acf6ced398afe108.cpp