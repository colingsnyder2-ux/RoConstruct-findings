// roc 2011-06 00405870  unit: ATL::CComClassFactory  size: 366 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00405870
//
// 00405870  55                   push ebp
// 00405871  8bec                 mov ebp, esp
// 00405873  6aff                 push -1
// 00405875  68f0d19c00           push 0x9cd1f0
// 0040587a  64a100000000         mov eax, dword ptr fs:[0]
// 00405880  50                   push eax
// 00405881  64892500000000       mov dword ptr fs:[0], esp
// 00405888  83ec28               sub esp, 0x28
// 0040588b  8b4508               mov eax, dword ptr [ebp + 8]
// 0040588e  53                   push ebx
// 0040588f  56                   push esi
// 00405890  33db                 xor ebx, ebx
// 00405892  57                   push edi
// 00405893  8965f0               mov dword ptr [ebp - 0x10], esp
// 00405896  894dd4               mov dword ptr [ebp - 0x2c], ecx
// 00405899  3bc3                 cmp eax, ebx
// 0040589b  0f8428010000         je 0x4059c9
// 004058a1  395d0c               cmp dword ptr [ebp + 0xc], ebx
// 004058a4  0f841f010000         je 0x4059c9
// 004058aa  50                   push eax
// 004058ab  895de4               mov dword ptr [ebp - 0x1c], ebx
// 004058ae  ff156403a400         call dword ptr [0xa40364]
// 004058b4  8bf0                 mov esi, eax
// 004058b6  46                   inc esi
// 004058b7  56                   push esi
// 004058b8  8975e0               mov dword ptr [ebp - 0x20], esi
// 004058bb  895dec               mov dword ptr [ebp - 0x14], ebx
// 004058be  895dfc               mov dword ptr [ebp - 4], ebx
// 004058c1  e87a4a4000           call 0x80a340
// 004058c6  83c404               add esp, 4
// 004058c9  8945ec               mov dword ptr [ebp - 0x14], eax
// 004058cc  eb13                 jmp 0x4058e1
// 004058ce  8b4dd0               mov ecx, dword ptr [ebp - 0x30]
// 004058d1  e8644a4000           call 0x80a33a
// 004058d6  b8dc584000           mov eax, 0x4058dc
// 004058db  c3                   ret 
// 004058dc  8b75e0               mov esi, dword ptr [ebp - 0x20]
// 004058df  33db                 xor ebx, ebx
// 004058e1  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 004058e4  8b45ec               mov eax, dword ptr [ebp - 0x14]
// 004058e7  51                   push ecx
// 004058e8  c745fc02000000       mov dword ptr [ebp - 4], 2
// 004058ef  8945dc               mov dword ptr [ebp - 0x24], eax
// 004058f2  ff155803a400         call dword ptr [0xa40358]
// 004058f8  8d7c0002             lea edi, [eax + eax + 2]
// 004058fc  33c9                 xor ecx, ecx
// 004058fe  8bc7                 mov eax, edi
// 00405900  ba02000000           mov edx, 2
// 00405905  f7e2                 mul edx
// 00405907  0f90c1               seto cl
// 0040590a  897dd8               mov dword ptr [ebp - 0x28], edi
// 0040590d  895de8               mov dword ptr [ebp - 0x18], ebx
// 00405910  c645fc03             mov byte ptr [ebp - 4], 3
// 00405914  f7d9                 neg ecx
// 00405916  0bc8                 or ecx, eax
// 00405918  51                   push ecx
// 00405919  e8224a4000           call 0x80a340
// 0040591e  8bd8                 mov ebx, eax
// 00405920  83c404               add esp, 4
// 00405923  895de8               mov dword ptr [ebp - 0x18], ebx
// 00405926  c745fc02000000       mov dword ptr [ebp - 4], 2
// 0040592d  eb1e                 jmp 0x40594d
// 0040592f  8b4dcc               mov ecx, dword ptr [ebp - 0x34]
// 00405932  e8034a4000           call 0x80a33a
// 00405937  c745fc02000000       mov dword ptr [ebp - 4], 2
// 0040593e  b844594000           mov eax, 0x405944
// 00405943  c3                   ret 
// 00405944  8b75e0               mov esi, dword ptr [ebp - 0x20]
// 00405947  8b7dd8               mov edi, dword ptr [ebp - 0x28]
// 0040594a  8b5de8               mov ebx, dword ptr [ebp - 0x18]
// 0040594d  8b45ec               mov eax, dword ptr [ebp - 0x14]
// 00405950  c645fc05             mov byte ptr [ebp - 4], 5
// 00405954  895dd8               mov dword ptr [ebp - 0x28], ebx
// 00405957  85c0                 test eax, eax
// 00405959  7433                 je 0x40598e
// 0040595b  85db                 test ebx, ebx
// 0040595d  742f                 je 0x40598e
// 0040595f  8b4d08               mov ecx, dword ptr [ebp + 8]
// 00405962  56                   push esi
// 00405963  51                   push ecx
// 00405964  56                   push esi
// 00405965  50                   push eax
// 00405966  e855dcffff           call 0x4035c0
// 0040596b  8b550c               mov edx, dword ptr [ebp + 0xc]
// 0040596e  57                   push edi
// 0040596f  52                   push edx
// 00405970  57                   push edi
// 00405971  53                   push ebx
// 00405972  e849dcffff           call 0x4035c0
// 00405977  83c420               add esp, 0x20
// 0040597a  8d45e8               lea eax, [ebp - 0x18]
// 0040597d  50                   push eax
// 0040597e  8d4dec               lea ecx, [ebp - 0x14]
// 00405981  51                   push ecx
// 00405982  8b4dd4               mov ecx, dword ptr [ebp - 0x2c]
// 00405985  e856fbffff           call 0x4054e0
// 0040598a  85c0                 test eax, eax
// 0040598c  7509                 jne 0x405997
// 0040598e  c745e40e000780       mov dword ptr [ebp - 0x1c], 0x8007000e
// 00405995  eb05                 jmp 0x40599c
// 00405997  33db                 xor ebx, ebx
// 00405999  895ddc               mov dword ptr [ebp - 0x24], ebx
// 0040599c  53                   push ebx
// 0040599d  e862494000           call 0x80a304
// 004059a2  8b55dc               mov edx, dword ptr [ebp - 0x24]
// 004059a5  52                   push edx
// 004059a6  e859494000           call 0x80a304
// 004059ab  33c0                 xor eax, eax
// 004059ad  83c408               add esp, 8
// 004059b0  3945e4               cmp dword ptr [ebp - 0x1c], eax
// 004059b3  0f9dc0               setge al
// 004059b6  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 004059b9  64890d00000000       mov dword ptr fs:[0], ecx
// 004059c0  5f                   pop edi
// 004059c1  5e                   pop esi
// 004059c2  5b                   pop ebx
// 004059c3  8be5                 mov esp, ebp
// 004059c5  5d                   pop ebp
// 004059c6  c20800               ret 8
// 004059c9  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 004059cc  5f                   pop edi
// 004059cd  5e                   pop esi
// 004059ce  33c0                 xor eax, eax
// 004059d0  64890d00000000       mov dword ptr fs:[0], ecx
// 004059d7  5b                   pop ebx
// 004059d8  8be5                 mov esp, ebp
// 004059da  5d                   pop ebp
// 004059db  c20800               ret 8
// copied from an identical function in another client (function ?Add@CExpansionVector@ATL@@QAEHPBDPB_W@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espclaude_acf6ced398afe108.cpp