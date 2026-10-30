// roc 2009-12 00869f40  unit: CXTPPropertyGridView  size: 519 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00869f40
//
// 00869f40  6aff                 push -1
// 00869f42  6898f49500           push 0x95f498
// 00869f47  64a100000000         mov eax, dword ptr fs:[0]
// 00869f4d  50                   push eax
// 00869f4e  83ec5c               sub esp, 0x5c
// 00869f51  53                   push ebx
// 00869f52  55                   push ebp
// 00869f53  56                   push esi
// 00869f54  57                   push edi
// 00869f55  a10052b600           mov eax, dword ptr [0xb65200]
// 00869f5a  33c4                 xor eax, esp
// 00869f5c  50                   push eax
// 00869f5d  8d442470             lea eax, [esp + 0x70]
// 00869f61  64a300000000         mov dword ptr fs:[0], eax
// 00869f67  8bf9                 mov edi, ecx
// 00869f69  8b4720               mov eax, dword ptr [edi + 0x20]
// 00869f6c  8b2dc4cb9800         mov ebp, dword ptr [0x98cbc4]
// 00869f72  33db                 xor ebx, ebx
// 00869f74  53                   push ebx
// 00869f75  53                   push ebx
// 00869f76  688b010000           push 0x18b
// 00869f7b  50                   push eax
// 00869f7c  ffd5                 call ebp
// 00869f7e  85c0                 test eax, eax
// 00869f80  7514                 jne 0x869f96
// 00869f82  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 00869f86  64890d00000000       mov dword ptr fs:[0], ecx
// 00869f8d  59                   pop ecx
// 00869f8e  5f                   pop edi
// 00869f8f  5e                   pop esi
// 00869f90  5d                   pop ebp
// 00869f91  5b                   pop ebx
// 00869f92  83c468               add esp, 0x68
// 00869f95  c3                   ret 
// 00869f96  8d4c2448             lea ecx, [esp + 0x48]
// 00869f9a  e841feffff           call 0x869de0
// 00869f9f  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 00869fa2  53                   push ebx
// 00869fa3  53                   push ebx
// 00869fa4  6a0b                 push 0xb
// 00869fa6  51                   push ecx
// 00869fa7  899c2488000000       mov dword ptr [esp + 0x88], ebx
// 00869fae  ffd5                 call ebp
// 00869fb0  8b4720               mov eax, dword ptr [edi + 0x20]
// 00869fb3  8d542438             lea edx, [esp + 0x38]
// 00869fb7  52                   push edx
// 00869fb8  53                   push ebx
// 00869fb9  6898010000           push 0x198
// 00869fbe  50                   push eax
// 00869fbf  895c2448             mov dword ptr [esp + 0x48], ebx
// 00869fc3  895c244c             mov dword ptr [esp + 0x4c], ebx
// 00869fc7  895c2450             mov dword ptr [esp + 0x50], ebx
// 00869fcb  895c2454             mov dword ptr [esp + 0x54], ebx
// 00869fcf  ffd5                 call ebp
// 00869fd1  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 00869fd4  6a05                 push 5
// 00869fd6  51                   push ecx
// 00869fd7  ff15fccb9800         call dword ptr [0x98cbfc]
// 00869fdd  8bf0                 mov esi, eax
// 00869fdf  3bf3                 cmp esi, ebx
// 00869fe1  7462                 je 0x86a045
// 00869fe3  6af0                 push -0x10
// 00869fe5  56                   push esi
// 00869fe6  ff15d8c99800         call dword ptr [0x98c9d8]
// 00869fec  a900000010           test eax, 0x10000000
// 00869ff1  7443                 je 0x86a036
// 00869ff3  8d542418             lea edx, [esp + 0x18]
// 00869ff7  52                   push edx
// 00869ff8  56                   push esi
// 00869ff9  ff1570cc9800         call dword ptr [0x98cc70]
// 00869fff  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0086a003  8b542420             mov edx, dword ptr [esp + 0x20]
// 0086a007  8b442418             mov eax, dword ptr [esp + 0x18]
// 0086a00b  894c2464             mov dword ptr [esp + 0x64], ecx
// 0086a00f  8d4c245c             lea ecx, [esp + 0x5c]
// 0086a013  89542468             mov dword ptr [esp + 0x68], edx
// 0086a017  8b542450             mov edx, dword ptr [esp + 0x50]
// 0086a01b  51                   push ecx
// 0086a01c  89442464             mov dword ptr [esp + 0x64], eax
// 0086a020  8b442428             mov eax, dword ptr [esp + 0x28]
// 0086a024  52                   push edx
// 0086a025  8d4c2450             lea ecx, [esp + 0x50]
// 0086a029  89742464             mov dword ptr [esp + 0x64], esi
// 0086a02d  89442474             mov dword ptr [esp + 0x74], eax
// 0086a031  e85adbffff           call 0x867b90
// 0086a036  6a02                 push 2
// 0086a038  56                   push esi
// 0086a039  ff15fccb9800         call dword ptr [0x98cbfc]
// 0086a03f  8bf0                 mov esi, eax
// 0086a041  3bf3                 cmp esi, ebx
// 0086a043  759e                 jne 0x869fe3
// 0086a045  8bcf                 mov ecx, edi
// 0086a047  e8e49df8ff           call 0x7f3e30
// 0086a04c  53                   push ebx
// 0086a04d  6a01                 push 1
// 0086a04f  8944241c             mov dword ptr [esp + 0x1c], eax
// 0086a053  8b4720               mov eax, dword ptr [edi + 0x20]
// 0086a056  6a0b                 push 0xb
// 0086a058  50                   push eax
// 0086a059  ffd5                 call ebp
// 0086a05b  8b5720               mov edx, dword ptr [edi + 0x20]
// 0086a05e  8d4c2428             lea ecx, [esp + 0x28]
// 0086a062  51                   push ecx
// 0086a063  53                   push ebx
// 0086a064  6898010000           push 0x198
// 0086a069  52                   push edx
// 0086a06a  895c2438             mov dword ptr [esp + 0x38], ebx
// 0086a06e  895c243c             mov dword ptr [esp + 0x3c], ebx
// 0086a072  895c2440             mov dword ptr [esp + 0x40], ebx
// 0086a076  895c2444             mov dword ptr [esp + 0x44], ebx
// 0086a07a  ffd5                 call ebp
// 0086a07c  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 0086a080  2b6c243c             sub ebp, dword ptr [esp + 0x3c]
// 0086a084  837c245000           cmp dword ptr [esp + 0x50], 0
// 0086a089  7e7b                 jle 0x86a106
// 0086a08b  8b74244c             mov esi, dword ptr [esp + 0x4c]
// 0086a08f  85db                 test ebx, ebx
// 0086a091  0f8cab000000         jl 0x86a142
// 0086a097  3b5c2450             cmp ebx, dword ptr [esp + 0x50]
// 0086a09b  0f8da1000000         jge 0x86a142
// 0086a0a1  8b4604               mov eax, dword ptr [esi + 4]
// 0086a0a4  89442418             mov dword ptr [esp + 0x18], eax
// 0086a0a8  8b4e08               mov ecx, dword ptr [esi + 8]
// 0086a0ab  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0086a0af  8b560c               mov edx, dword ptr [esi + 0xc]
// 0086a0b2  8d4c2418             lea ecx, [esp + 0x18]
// 0086a0b6  89542420             mov dword ptr [esp + 0x20], edx
// 0086a0ba  8b4610               mov eax, dword ptr [esi + 0x10]
// 0086a0bd  51                   push ecx
// 0086a0be  8bcf                 mov ecx, edi
// 0086a0c0  89442428             mov dword ptr [esp + 0x28], eax
// 0086a0c4  e80fa7f8ff           call 0x7f47d8
// 0086a0c9  55                   push ebp
// 0086a0ca  6a00                 push 0
// 0086a0cc  8d542420             lea edx, [esp + 0x20]
// 0086a0d0  52                   push edx
// 0086a0d1  ff156ccc9800         call dword ptr [0x98cc6c]
// 0086a0d7  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0086a0db  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0086a0df  8b542420             mov edx, dword ptr [esp + 0x20]
// 0086a0e3  6a14                 push 0x14
// 0086a0e5  2bc8                 sub ecx, eax
// 0086a0e7  51                   push ecx
// 0086a0e8  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0086a0ec  2bd1                 sub edx, ecx
// 0086a0ee  52                   push edx
// 0086a0ef  50                   push eax
// 0086a0f0  8b06                 mov eax, dword ptr [esi]
// 0086a0f2  51                   push ecx
// 0086a0f3  6a00                 push 0
// 0086a0f5  50                   push eax
// 0086a0f6  ff15e0c99800         call dword ptr [0x98c9e0]
// 0086a0fc  43                   inc ebx
// 0086a0fd  83c614               add esi, 0x14
// 0086a100  3b5c2450             cmp ebx, dword ptr [esp + 0x50]
// 0086a104  7c89                 jl 0x86a08f
// 0086a106  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 0086a109  6881050000           push 0x581
// 0086a10e  6a00                 push 0
// 0086a110  6a00                 push 0
// 0086a112  51                   push ecx
// 0086a113  ff151ccb9800         call dword ptr [0x98cb1c]
// 0086a119  8d4c2448             lea ecx, [esp + 0x48]
// 0086a11d  c7442478ffffffff     mov dword ptr [esp + 0x78], 0xffffffff
// 0086a125  e8d6fcffff           call 0x869e00
// 0086a12a  8b442414             mov eax, dword ptr [esp + 0x14]
// 0086a12e  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 0086a132  64890d00000000       mov dword ptr fs:[0], ecx
// 0086a139  59                   pop ecx
// 0086a13a  5f                   pop edi
// 0086a13b  5e                   pop esi
// 0086a13c  5d                   pop ebp
// 0086a13d  5b                   pop ebx
// 0086a13e  83c468               add esp, 0x68
// 0086a141  c3                   ret 
// 0086a142  e8c599f8ff           call 0x7f3b0c
// copied from an identical function in another client (function ?OnScrollControl@CXTPPropertyGridView@@AAEJXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\PropertyGrid\XTPPropertyGridView.cpp