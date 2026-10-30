// roc 2009-06 0078ef20  unit: CXTPPropertyGridView  size: 519 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0078ef20
//
// 0078ef20  6aff                 push -1
// 0078ef22  6858b28700           push 0x87b258
// 0078ef27  64a100000000         mov eax, dword ptr fs:[0]
// 0078ef2d  50                   push eax
// 0078ef2e  83ec5c               sub esp, 0x5c
// 0078ef31  53                   push ebx
// 0078ef32  55                   push ebp
// 0078ef33  56                   push esi
// 0078ef34  57                   push edi
// 0078ef35  a1304fa200           mov eax, dword ptr [0xa24f30]
// 0078ef3a  33c4                 xor eax, esp
// 0078ef3c  50                   push eax
// 0078ef3d  8d442470             lea eax, [esp + 0x70]
// 0078ef41  64a300000000         mov dword ptr fs:[0], eax
// 0078ef47  8bf9                 mov edi, ecx
// 0078ef49  8b4720               mov eax, dword ptr [edi + 0x20]
// 0078ef4c  8b2d90ee8900         mov ebp, dword ptr [0x89ee90]
// 0078ef52  33db                 xor ebx, ebx
// 0078ef54  53                   push ebx
// 0078ef55  53                   push ebx
// 0078ef56  688b010000           push 0x18b
// 0078ef5b  50                   push eax
// 0078ef5c  ffd5                 call ebp
// 0078ef5e  85c0                 test eax, eax
// 0078ef60  7514                 jne 0x78ef76
// 0078ef62  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 0078ef66  64890d00000000       mov dword ptr fs:[0], ecx
// 0078ef6d  59                   pop ecx
// 0078ef6e  5f                   pop edi
// 0078ef6f  5e                   pop esi
// 0078ef70  5d                   pop ebp
// 0078ef71  5b                   pop ebx
// 0078ef72  83c468               add esp, 0x68
// 0078ef75  c3                   ret 
// 0078ef76  8d4c2448             lea ecx, [esp + 0x48]
// 0078ef7a  e841feffff           call 0x78edc0
// 0078ef7f  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 0078ef82  53                   push ebx
// 0078ef83  53                   push ebx
// 0078ef84  6a0b                 push 0xb
// 0078ef86  51                   push ecx
// 0078ef87  899c2488000000       mov dword ptr [esp + 0x88], ebx
// 0078ef8e  ffd5                 call ebp
// 0078ef90  8b4720               mov eax, dword ptr [edi + 0x20]
// 0078ef93  8d542438             lea edx, [esp + 0x38]
// 0078ef97  52                   push edx
// 0078ef98  53                   push ebx
// 0078ef99  6898010000           push 0x198
// 0078ef9e  50                   push eax
// 0078ef9f  895c2448             mov dword ptr [esp + 0x48], ebx
// 0078efa3  895c244c             mov dword ptr [esp + 0x4c], ebx
// 0078efa7  895c2450             mov dword ptr [esp + 0x50], ebx
// 0078efab  895c2454             mov dword ptr [esp + 0x54], ebx
// 0078efaf  ffd5                 call ebp
// 0078efb1  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 0078efb4  6a05                 push 5
// 0078efb6  51                   push ecx
// 0078efb7  ff1568ee8900         call dword ptr [0x89ee68]
// 0078efbd  8bf0                 mov esi, eax
// 0078efbf  3bf3                 cmp esi, ebx
// 0078efc1  7462                 je 0x78f025
// 0078efc3  6af0                 push -0x10
// 0078efc5  56                   push esi
// 0078efc6  ff1558ed8900         call dword ptr [0x89ed58]
// 0078efcc  a900000010           test eax, 0x10000000
// 0078efd1  7443                 je 0x78f016
// 0078efd3  8d542418             lea edx, [esp + 0x18]
// 0078efd7  52                   push edx
// 0078efd8  56                   push esi
// 0078efd9  ff15f4ed8900         call dword ptr [0x89edf4]
// 0078efdf  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0078efe3  8b542420             mov edx, dword ptr [esp + 0x20]
// 0078efe7  8b442418             mov eax, dword ptr [esp + 0x18]
// 0078efeb  894c2464             mov dword ptr [esp + 0x64], ecx
// 0078efef  8d4c245c             lea ecx, [esp + 0x5c]
// 0078eff3  89542468             mov dword ptr [esp + 0x68], edx
// 0078eff7  8b542450             mov edx, dword ptr [esp + 0x50]
// 0078effb  51                   push ecx
// 0078effc  89442464             mov dword ptr [esp + 0x64], eax
// 0078f000  8b442428             mov eax, dword ptr [esp + 0x28]
// 0078f004  52                   push edx
// 0078f005  8d4c2450             lea ecx, [esp + 0x50]
// 0078f009  89742464             mov dword ptr [esp + 0x64], esi
// 0078f00d  89442474             mov dword ptr [esp + 0x74], eax
// 0078f011  e86adbffff           call 0x78cb80
// 0078f016  6a02                 push 2
// 0078f018  56                   push esi
// 0078f019  ff1568ee8900         call dword ptr [0x89ee68]
// 0078f01f  8bf0                 mov esi, eax
// 0078f021  3bf3                 cmp esi, ebx
// 0078f023  759e                 jne 0x78efc3
// 0078f025  8bcf                 mov ecx, edi
// 0078f027  e8dc9ff8ff           call 0x719008
// 0078f02c  53                   push ebx
// 0078f02d  6a01                 push 1
// 0078f02f  8944241c             mov dword ptr [esp + 0x1c], eax
// 0078f033  8b4720               mov eax, dword ptr [edi + 0x20]
// 0078f036  6a0b                 push 0xb
// 0078f038  50                   push eax
// 0078f039  ffd5                 call ebp
// 0078f03b  8b5720               mov edx, dword ptr [edi + 0x20]
// 0078f03e  8d4c2428             lea ecx, [esp + 0x28]
// 0078f042  51                   push ecx
// 0078f043  53                   push ebx
// 0078f044  6898010000           push 0x198
// 0078f049  52                   push edx
// 0078f04a  895c2438             mov dword ptr [esp + 0x38], ebx
// 0078f04e  895c243c             mov dword ptr [esp + 0x3c], ebx
// 0078f052  895c2440             mov dword ptr [esp + 0x40], ebx
// 0078f056  895c2444             mov dword ptr [esp + 0x44], ebx
// 0078f05a  ffd5                 call ebp
// 0078f05c  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 0078f060  2b6c243c             sub ebp, dword ptr [esp + 0x3c]
// 0078f064  837c245000           cmp dword ptr [esp + 0x50], 0
// 0078f069  7e7b                 jle 0x78f0e6
// 0078f06b  8b74244c             mov esi, dword ptr [esp + 0x4c]
// 0078f06f  85db                 test ebx, ebx
// 0078f071  0f8cab000000         jl 0x78f122
// 0078f077  3b5c2450             cmp ebx, dword ptr [esp + 0x50]
// 0078f07b  0f8da1000000         jge 0x78f122
// 0078f081  8b4604               mov eax, dword ptr [esi + 4]
// 0078f084  89442418             mov dword ptr [esp + 0x18], eax
// 0078f088  8b4e08               mov ecx, dword ptr [esi + 8]
// 0078f08b  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0078f08f  8b560c               mov edx, dword ptr [esi + 0xc]
// 0078f092  8d4c2418             lea ecx, [esp + 0x18]
// 0078f096  89542420             mov dword ptr [esp + 0x20], edx
// 0078f09a  8b4610               mov eax, dword ptr [esi + 0x10]
// 0078f09d  51                   push ecx
// 0078f09e  8bcf                 mov ecx, edi
// 0078f0a0  89442428             mov dword ptr [esp + 0x28], eax
// 0078f0a4  e8fba8f8ff           call 0x7199a4
// 0078f0a9  55                   push ebp
// 0078f0aa  6a00                 push 0
// 0078f0ac  8d542420             lea edx, [esp + 0x20]
// 0078f0b0  52                   push edx
// 0078f0b1  ff15f8ed8900         call dword ptr [0x89edf8]
// 0078f0b7  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0078f0bb  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0078f0bf  8b542420             mov edx, dword ptr [esp + 0x20]
// 0078f0c3  6a14                 push 0x14
// 0078f0c5  2bc8                 sub ecx, eax
// 0078f0c7  51                   push ecx
// 0078f0c8  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0078f0cc  2bd1                 sub edx, ecx
// 0078f0ce  52                   push edx
// 0078f0cf  50                   push eax
// 0078f0d0  8b06                 mov eax, dword ptr [esi]
// 0078f0d2  51                   push ecx
// 0078f0d3  6a00                 push 0
// 0078f0d5  50                   push eax
// 0078f0d6  ff15f4ec8900         call dword ptr [0x89ecf4]
// 0078f0dc  43                   inc ebx
// 0078f0dd  83c614               add esi, 0x14
// 0078f0e0  3b5c2450             cmp ebx, dword ptr [esp + 0x50]
// 0078f0e4  7c89                 jl 0x78f06f
// 0078f0e6  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 0078f0e9  6881050000           push 0x581
// 0078f0ee  6a00                 push 0
// 0078f0f0  6a00                 push 0
// 0078f0f2  51                   push ecx
// 0078f0f3  ff15e8ee8900         call dword ptr [0x89eee8]
// 0078f0f9  8d4c2448             lea ecx, [esp + 0x48]
// 0078f0fd  c7442478ffffffff     mov dword ptr [esp + 0x78], 0xffffffff
// 0078f105  e8d6fcffff           call 0x78ede0
// 0078f10a  8b442414             mov eax, dword ptr [esp + 0x14]
// 0078f10e  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 0078f112  64890d00000000       mov dword ptr fs:[0], ecx
// 0078f119  59                   pop ecx
// 0078f11a  5f                   pop edi
// 0078f11b  5e                   pop esi
// 0078f11c  5d                   pop ebp
// 0078f11d  5b                   pop ebx
// 0078f11e  83c468               add esp, 0x68
// 0078f121  c3                   ret 
// 0078f122  e8bd9bf8ff           call 0x718ce4
// copied from an identical function in another client (function ?OnScrollControl@CXTPPropertyGridView@@AAEJXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/PropertyGrid/XTPPropertyGridView.cpp