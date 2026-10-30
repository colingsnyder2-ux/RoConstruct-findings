// roc 2010-06 0081df40  unit: CXTPPropertyGridView  size: 519 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0081df40
//
// 0081df40  6aff                 push -1
// 0081df42  68b8539b00           push 0x9b53b8
// 0081df47  64a100000000         mov eax, dword ptr fs:[0]
// 0081df4d  50                   push eax
// 0081df4e  83ec5c               sub esp, 0x5c
// 0081df51  53                   push ebx
// 0081df52  55                   push ebp
// 0081df53  56                   push esi
// 0081df54  57                   push edi
// 0081df55  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 0081df5a  33c4                 xor eax, esp
// 0081df5c  50                   push eax
// 0081df5d  8d442470             lea eax, [esp + 0x70]
// 0081df61  64a300000000         mov dword ptr fs:[0], eax
// 0081df67  8bf9                 mov edi, ecx
// 0081df69  8b4720               mov eax, dword ptr [edi + 0x20]
// 0081df6c  8b2d54ba9e00         mov ebp, dword ptr [0x9eba54]
// 0081df72  33db                 xor ebx, ebx
// 0081df74  53                   push ebx
// 0081df75  53                   push ebx
// 0081df76  688b010000           push 0x18b
// 0081df7b  50                   push eax
// 0081df7c  ffd5                 call ebp
// 0081df7e  85c0                 test eax, eax
// 0081df80  7514                 jne 0x81df96
// 0081df82  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 0081df86  64890d00000000       mov dword ptr fs:[0], ecx
// 0081df8d  59                   pop ecx
// 0081df8e  5f                   pop edi
// 0081df8f  5e                   pop esi
// 0081df90  5d                   pop ebp
// 0081df91  5b                   pop ebx
// 0081df92  83c468               add esp, 0x68
// 0081df95  c3                   ret 
// 0081df96  8d4c2448             lea ecx, [esp + 0x48]
// 0081df9a  e841feffff           call 0x81dde0
// 0081df9f  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 0081dfa2  53                   push ebx
// 0081dfa3  53                   push ebx
// 0081dfa4  6a0b                 push 0xb
// 0081dfa6  51                   push ecx
// 0081dfa7  899c2488000000       mov dword ptr [esp + 0x88], ebx
// 0081dfae  ffd5                 call ebp
// 0081dfb0  8b4720               mov eax, dword ptr [edi + 0x20]
// 0081dfb3  8d542438             lea edx, [esp + 0x38]
// 0081dfb7  52                   push edx
// 0081dfb8  53                   push ebx
// 0081dfb9  6898010000           push 0x198
// 0081dfbe  50                   push eax
// 0081dfbf  895c2448             mov dword ptr [esp + 0x48], ebx
// 0081dfc3  895c244c             mov dword ptr [esp + 0x4c], ebx
// 0081dfc7  895c2450             mov dword ptr [esp + 0x50], ebx
// 0081dfcb  895c2454             mov dword ptr [esp + 0x54], ebx
// 0081dfcf  ffd5                 call ebp
// 0081dfd1  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 0081dfd4  6a05                 push 5
// 0081dfd6  51                   push ecx
// 0081dfd7  ff1590ba9e00         call dword ptr [0x9eba90]
// 0081dfdd  8bf0                 mov esi, eax
// 0081dfdf  3bf3                 cmp esi, ebx
// 0081dfe1  7462                 je 0x81e045
// 0081dfe3  6af0                 push -0x10
// 0081dfe5  56                   push esi
// 0081dfe6  ff15fcbb9e00         call dword ptr [0x9ebbfc]
// 0081dfec  a900000010           test eax, 0x10000000
// 0081dff1  7443                 je 0x81e036
// 0081dff3  8d542418             lea edx, [esp + 0x18]
// 0081dff7  52                   push edx
// 0081dff8  56                   push esi
// 0081dff9  ff153cbc9e00         call dword ptr [0x9ebc3c]
// 0081dfff  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0081e003  8b542420             mov edx, dword ptr [esp + 0x20]
// 0081e007  8b442418             mov eax, dword ptr [esp + 0x18]
// 0081e00b  894c2464             mov dword ptr [esp + 0x64], ecx
// 0081e00f  8d4c245c             lea ecx, [esp + 0x5c]
// 0081e013  89542468             mov dword ptr [esp + 0x68], edx
// 0081e017  8b542450             mov edx, dword ptr [esp + 0x50]
// 0081e01b  51                   push ecx
// 0081e01c  89442464             mov dword ptr [esp + 0x64], eax
// 0081e020  8b442428             mov eax, dword ptr [esp + 0x28]
// 0081e024  52                   push edx
// 0081e025  8d4c2450             lea ecx, [esp + 0x50]
// 0081e029  89742464             mov dword ptr [esp + 0x64], esi
// 0081e02d  89442474             mov dword ptr [esp + 0x74], eax
// 0081e031  e86adbffff           call 0x81bba0
// 0081e036  6a02                 push 2
// 0081e038  56                   push esi
// 0081e039  ff1590ba9e00         call dword ptr [0x9eba90]
// 0081e03f  8bf0                 mov esi, eax
// 0081e041  3bf3                 cmp esi, ebx
// 0081e043  759e                 jne 0x81dfe3
// 0081e045  8bcf                 mov ecx, edi
// 0081e047  e8249ff8ff           call 0x7a7f70
// 0081e04c  53                   push ebx
// 0081e04d  6a01                 push 1
// 0081e04f  8944241c             mov dword ptr [esp + 0x1c], eax
// 0081e053  8b4720               mov eax, dword ptr [edi + 0x20]
// 0081e056  6a0b                 push 0xb
// 0081e058  50                   push eax
// 0081e059  ffd5                 call ebp
// 0081e05b  8b5720               mov edx, dword ptr [edi + 0x20]
// 0081e05e  8d4c2428             lea ecx, [esp + 0x28]
// 0081e062  51                   push ecx
// 0081e063  53                   push ebx
// 0081e064  6898010000           push 0x198
// 0081e069  52                   push edx
// 0081e06a  895c2438             mov dword ptr [esp + 0x38], ebx
// 0081e06e  895c243c             mov dword ptr [esp + 0x3c], ebx
// 0081e072  895c2440             mov dword ptr [esp + 0x40], ebx
// 0081e076  895c2444             mov dword ptr [esp + 0x44], ebx
// 0081e07a  ffd5                 call ebp
// 0081e07c  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 0081e080  2b6c243c             sub ebp, dword ptr [esp + 0x3c]
// 0081e084  837c245000           cmp dword ptr [esp + 0x50], 0
// 0081e089  7e7b                 jle 0x81e106
// 0081e08b  8b74244c             mov esi, dword ptr [esp + 0x4c]
// 0081e08f  85db                 test ebx, ebx
// 0081e091  0f8cab000000         jl 0x81e142
// 0081e097  3b5c2450             cmp ebx, dword ptr [esp + 0x50]
// 0081e09b  0f8da1000000         jge 0x81e142
// 0081e0a1  8b4604               mov eax, dword ptr [esi + 4]
// 0081e0a4  89442418             mov dword ptr [esp + 0x18], eax
// 0081e0a8  8b4e08               mov ecx, dword ptr [esi + 8]
// 0081e0ab  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0081e0af  8b560c               mov edx, dword ptr [esi + 0xc]
// 0081e0b2  8d4c2418             lea ecx, [esp + 0x18]
// 0081e0b6  89542420             mov dword ptr [esp + 0x20], edx
// 0081e0ba  8b4610               mov eax, dword ptr [esi + 0x10]
// 0081e0bd  51                   push ecx
// 0081e0be  8bcf                 mov ecx, edi
// 0081e0c0  89442428             mov dword ptr [esp + 0x28], eax
// 0081e0c4  e849a8f8ff           call 0x7a8912
// 0081e0c9  55                   push ebp
// 0081e0ca  6a00                 push 0
// 0081e0cc  8d542420             lea edx, [esp + 0x20]
// 0081e0d0  52                   push edx
// 0081e0d1  ff1540bc9e00         call dword ptr [0x9ebc40]
// 0081e0d7  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0081e0db  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0081e0df  8b542420             mov edx, dword ptr [esp + 0x20]
// 0081e0e3  6a14                 push 0x14
// 0081e0e5  2bc8                 sub ecx, eax
// 0081e0e7  51                   push ecx
// 0081e0e8  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0081e0ec  2bd1                 sub edx, ecx
// 0081e0ee  52                   push edx
// 0081e0ef  50                   push eax
// 0081e0f0  8b06                 mov eax, dword ptr [esi]
// 0081e0f2  51                   push ecx
// 0081e0f3  6a00                 push 0
// 0081e0f5  50                   push eax
// 0081e0f6  ff1544bb9e00         call dword ptr [0x9ebb44]
// 0081e0fc  43                   inc ebx
// 0081e0fd  83c614               add esi, 0x14
// 0081e100  3b5c2450             cmp ebx, dword ptr [esp + 0x50]
// 0081e104  7c89                 jl 0x81e08f
// 0081e106  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 0081e109  6881050000           push 0x581
// 0081e10e  6a00                 push 0
// 0081e110  6a00                 push 0
// 0081e112  51                   push ecx
// 0081e113  ff15d4b99e00         call dword ptr [0x9eb9d4]
// 0081e119  8d4c2448             lea ecx, [esp + 0x48]
// 0081e11d  c7442478ffffffff     mov dword ptr [esp + 0x78], 0xffffffff
// 0081e125  e8d6fcffff           call 0x81de00
// 0081e12a  8b442414             mov eax, dword ptr [esp + 0x14]
// 0081e12e  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 0081e132  64890d00000000       mov dword ptr fs:[0], ecx
// 0081e139  59                   pop ecx
// 0081e13a  5f                   pop edi
// 0081e13b  5e                   pop esi
// 0081e13c  5d                   pop ebp
// 0081e13d  5b                   pop ebx
// 0081e13e  83c468               add esp, 0x68
// 0081e141  c3                   ret 
// 0081e142  e8059bf8ff           call 0x7a7c4c
// copied from an identical function in another client (function ?OnScrollControl@CXTPPropertyGridView@@AAEJXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\PropertyGrid\XTPPropertyGridView.cpp