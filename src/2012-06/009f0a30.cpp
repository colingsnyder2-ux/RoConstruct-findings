// roc 2012-06 009f0a30  unit: CXTPPropertyGridView  size: 519 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009f0a30
//
// 009f0a30  6aff                 push -1
// 009f0a32  68a81bae00           push 0xae1ba8
// 009f0a37  64a100000000         mov eax, dword ptr fs:[0]
// 009f0a3d  50                   push eax
// 009f0a3e  83ec5c               sub esp, 0x5c
// 009f0a41  53                   push ebx
// 009f0a42  55                   push ebp
// 009f0a43  56                   push esi
// 009f0a44  57                   push edi
// 009f0a45  a1d027e000           mov eax, dword ptr [0xe027d0]
// 009f0a4a  33c4                 xor eax, esp
// 009f0a4c  50                   push eax
// 009f0a4d  8d442470             lea eax, [esp + 0x70]
// 009f0a51  64a300000000         mov dword ptr fs:[0], eax
// 009f0a57  8bf9                 mov edi, ecx
// 009f0a59  8b4720               mov eax, dword ptr [edi + 0x20]
// 009f0a5c  8b2d043cb200         mov ebp, dword ptr [0xb23c04]
// 009f0a62  33db                 xor ebx, ebx
// 009f0a64  53                   push ebx
// 009f0a65  53                   push ebx
// 009f0a66  688b010000           push 0x18b
// 009f0a6b  50                   push eax
// 009f0a6c  ffd5                 call ebp
// 009f0a6e  85c0                 test eax, eax
// 009f0a70  7514                 jne 0x9f0a86
// 009f0a72  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 009f0a76  64890d00000000       mov dword ptr fs:[0], ecx
// 009f0a7d  59                   pop ecx
// 009f0a7e  5f                   pop edi
// 009f0a7f  5e                   pop esi
// 009f0a80  5d                   pop ebp
// 009f0a81  5b                   pop ebx
// 009f0a82  83c468               add esp, 0x68
// 009f0a85  c3                   ret 
// 009f0a86  8d4c2448             lea ecx, [esp + 0x48]
// 009f0a8a  e821feffff           call 0x9f08b0
// 009f0a8f  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 009f0a92  53                   push ebx
// 009f0a93  53                   push ebx
// 009f0a94  6a0b                 push 0xb
// 009f0a96  51                   push ecx
// 009f0a97  899c2488000000       mov dword ptr [esp + 0x88], ebx
// 009f0a9e  ffd5                 call ebp
// 009f0aa0  8b4720               mov eax, dword ptr [edi + 0x20]
// 009f0aa3  8d542438             lea edx, [esp + 0x38]
// 009f0aa7  52                   push edx
// 009f0aa8  53                   push ebx
// 009f0aa9  6898010000           push 0x198
// 009f0aae  50                   push eax
// 009f0aaf  895c2448             mov dword ptr [esp + 0x48], ebx
// 009f0ab3  895c244c             mov dword ptr [esp + 0x4c], ebx
// 009f0ab7  895c2450             mov dword ptr [esp + 0x50], ebx
// 009f0abb  895c2454             mov dword ptr [esp + 0x54], ebx
// 009f0abf  ffd5                 call ebp
// 009f0ac1  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 009f0ac4  6a05                 push 5
// 009f0ac6  51                   push ecx
// 009f0ac7  ff15403bb200         call dword ptr [0xb23b40]
// 009f0acd  8bf0                 mov esi, eax
// 009f0acf  3bf3                 cmp esi, ebx
// 009f0ad1  7462                 je 0x9f0b35
// 009f0ad3  6af0                 push -0x10
// 009f0ad5  56                   push esi
// 009f0ad6  ff15bc3ab200         call dword ptr [0xb23abc]
// 009f0adc  a900000010           test eax, 0x10000000
// 009f0ae1  7443                 je 0x9f0b26
// 009f0ae3  8d542418             lea edx, [esp + 0x18]
// 009f0ae7  52                   push edx
// 009f0ae8  56                   push esi
// 009f0ae9  ff15f83ab200         call dword ptr [0xb23af8]
// 009f0aef  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 009f0af3  8b542420             mov edx, dword ptr [esp + 0x20]
// 009f0af7  8b442418             mov eax, dword ptr [esp + 0x18]
// 009f0afb  894c2464             mov dword ptr [esp + 0x64], ecx
// 009f0aff  8d4c245c             lea ecx, [esp + 0x5c]
// 009f0b03  89542468             mov dword ptr [esp + 0x68], edx
// 009f0b07  8b542450             mov edx, dword ptr [esp + 0x50]
// 009f0b0b  51                   push ecx
// 009f0b0c  89442464             mov dword ptr [esp + 0x64], eax
// 009f0b10  8b442428             mov eax, dword ptr [esp + 0x28]
// 009f0b14  52                   push edx
// 009f0b15  8d4c2450             lea ecx, [esp + 0x50]
// 009f0b19  89742464             mov dword ptr [esp + 0x64], esi
// 009f0b1d  89442474             mov dword ptr [esp + 0x74], eax
// 009f0b21  e80adbffff           call 0x9ee630
// 009f0b26  6a02                 push 2
// 009f0b28  56                   push esi
// 009f0b29  ff15403bb200         call dword ptr [0xb23b40]
// 009f0b2f  8bf0                 mov esi, eax
// 009f0b31  3bf3                 cmp esi, ebx
// 009f0b33  759e                 jne 0x9f0ad3
// 009f0b35  8bcf                 mov ecx, edi
// 009f0b37  e8a21bf9ff           call 0x9826de
// 009f0b3c  53                   push ebx
// 009f0b3d  6a01                 push 1
// 009f0b3f  8944241c             mov dword ptr [esp + 0x1c], eax
// 009f0b43  8b4720               mov eax, dword ptr [edi + 0x20]
// 009f0b46  6a0b                 push 0xb
// 009f0b48  50                   push eax
// 009f0b49  ffd5                 call ebp
// 009f0b4b  8b5720               mov edx, dword ptr [edi + 0x20]
// 009f0b4e  8d4c2428             lea ecx, [esp + 0x28]
// 009f0b52  51                   push ecx
// 009f0b53  53                   push ebx
// 009f0b54  6898010000           push 0x198
// 009f0b59  52                   push edx
// 009f0b5a  895c2438             mov dword ptr [esp + 0x38], ebx
// 009f0b5e  895c243c             mov dword ptr [esp + 0x3c], ebx
// 009f0b62  895c2440             mov dword ptr [esp + 0x40], ebx
// 009f0b66  895c2444             mov dword ptr [esp + 0x44], ebx
// 009f0b6a  ffd5                 call ebp
// 009f0b6c  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 009f0b70  2b6c243c             sub ebp, dword ptr [esp + 0x3c]
// 009f0b74  837c245000           cmp dword ptr [esp + 0x50], 0
// 009f0b79  7e7b                 jle 0x9f0bf6
// 009f0b7b  8b74244c             mov esi, dword ptr [esp + 0x4c]
// 009f0b7f  85db                 test ebx, ebx
// 009f0b81  0f8cab000000         jl 0x9f0c32
// 009f0b87  3b5c2450             cmp ebx, dword ptr [esp + 0x50]
// 009f0b8b  0f8da1000000         jge 0x9f0c32
// 009f0b91  8b4604               mov eax, dword ptr [esi + 4]
// 009f0b94  89442418             mov dword ptr [esp + 0x18], eax
// 009f0b98  8b4e08               mov ecx, dword ptr [esi + 8]
// 009f0b9b  894c241c             mov dword ptr [esp + 0x1c], ecx
// 009f0b9f  8b560c               mov edx, dword ptr [esi + 0xc]
// 009f0ba2  8d4c2418             lea ecx, [esp + 0x18]
// 009f0ba6  89542420             mov dword ptr [esp + 0x20], edx
// 009f0baa  8b4610               mov eax, dword ptr [esi + 0x10]
// 009f0bad  51                   push ecx
// 009f0bae  8bcf                 mov ecx, edi
// 009f0bb0  89442428             mov dword ptr [esp + 0x28], eax
// 009f0bb4  e8e524f9ff           call 0x98309e
// 009f0bb9  55                   push ebp
// 009f0bba  6a00                 push 0
// 009f0bbc  8d542420             lea edx, [esp + 0x20]
// 009f0bc0  52                   push edx
// 009f0bc1  ff15f43ab200         call dword ptr [0xb23af4]
// 009f0bc7  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 009f0bcb  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 009f0bcf  8b542420             mov edx, dword ptr [esp + 0x20]
// 009f0bd3  6a14                 push 0x14
// 009f0bd5  2bc8                 sub ecx, eax
// 009f0bd7  51                   push ecx
// 009f0bd8  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 009f0bdc  2bd1                 sub edx, ecx
// 009f0bde  52                   push edx
// 009f0bdf  50                   push eax
// 009f0be0  8b06                 mov eax, dword ptr [esi]
// 009f0be2  51                   push ecx
// 009f0be3  6a00                 push 0
// 009f0be5  50                   push eax
// 009f0be6  ff15443bb200         call dword ptr [0xb23b44]
// 009f0bec  43                   inc ebx
// 009f0bed  83c614               add esi, 0x14
// 009f0bf0  3b5c2450             cmp ebx, dword ptr [esp + 0x50]
// 009f0bf4  7c89                 jl 0x9f0b7f
// 009f0bf6  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 009f0bf9  6881050000           push 0x581
// 009f0bfe  6a00                 push 0
// 009f0c00  6a00                 push 0
// 009f0c02  51                   push ecx
// 009f0c03  ff15403db200         call dword ptr [0xb23d40]
// 009f0c09  8d4c2448             lea ecx, [esp + 0x48]
// 009f0c0d  c7442478ffffffff     mov dword ptr [esp + 0x78], 0xffffffff
// 009f0c15  e8b6fcffff           call 0x9f08d0
// 009f0c1a  8b442414             mov eax, dword ptr [esp + 0x14]
// 009f0c1e  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 009f0c22  64890d00000000       mov dword ptr fs:[0], ecx
// 009f0c29  59                   pop ecx
// 009f0c2a  5f                   pop edi
// 009f0c2b  5e                   pop esi
// 009f0c2c  5d                   pop ebp
// 009f0c2d  5b                   pop ebx
// 009f0c2e  83c468               add esp, 0x68
// 009f0c31  c3                   ret 
// 009f0c32  e88917f9ff           call 0x9823c0
// copied from an identical function in another client (function ?OnScrollControl@CXTPPropertyGridView@@AAEJXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\PropertyGrid\XTPPropertyGridView.cpp