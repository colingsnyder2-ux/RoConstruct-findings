// roc 2008-06 00753cd0  unit: CXTPReportHeaderDragWnd  size: 678 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00753cd0
//
// 00753cd0  83ec58               sub esp, 0x58
// 00753cd3  53                   push ebx
// 00753cd4  8bd9                 mov ebx, ecx
// 00753cd6  8b4354               mov eax, dword ptr [ebx + 0x54]
// 00753cd9  55                   push ebp
// 00753cda  33ed                 xor ebp, ebp
// 00753cdc  895c2408             mov dword ptr [esp + 8], ebx
// 00753ce0  3bc5                 cmp eax, ebp
// 00753ce2  0f8486020000         je 0x753f6e
// 00753ce8  396824               cmp dword ptr [eax + 0x24], ebp
// 00753ceb  0f847d020000         je 0x753f6e
// 00753cf1  8b4860               mov ecx, dword ptr [eax + 0x60]
// 00753cf4  56                   push esi
// 00753cf5  8b7024               mov esi, dword ptr [eax + 0x24]
// 00753cf8  894c2444             mov dword ptr [esp + 0x44], ecx
// 00753cfc  8b5064               mov edx, dword ptr [eax + 0x64]
// 00753cff  89542448             mov dword ptr [esp + 0x48], edx
// 00753d03  8b4868               mov ecx, dword ptr [eax + 0x68]
// 00753d06  894c244c             mov dword ptr [esp + 0x4c], ecx
// 00753d0a  8b506c               mov edx, dword ptr [eax + 0x6c]
// 00753d0d  57                   push edi
// 00753d0e  8d442448             lea eax, [esp + 0x48]
// 00753d12  50                   push eax
// 00753d13  8bce                 mov ecx, esi
// 00753d15  89542458             mov dword ptr [esp + 0x58], edx
// 00753d19  e814cff4ff           call 0x6a0c32
// 00753d1e  8b3d342e8000         mov edi, dword ptr [0x802e34]
// 00753d24  8d4c2458             lea ecx, [esp + 0x58]
// 00753d28  896c2458             mov dword ptr [esp + 0x58], ebp
// 00753d2c  896c245c             mov dword ptr [esp + 0x5c], ebp
// 00753d30  896c2460             mov dword ptr [esp + 0x60], ebp
// 00753d34  896c2464             mov dword ptr [esp + 0x64], ebp
// 00753d38  896c2438             mov dword ptr [esp + 0x38], ebp
// 00753d3c  896c243c             mov dword ptr [esp + 0x3c], ebp
// 00753d40  896c2440             mov dword ptr [esp + 0x40], ebp
// 00753d44  896c2444             mov dword ptr [esp + 0x44], ebp
// 00753d48  8b5620               mov edx, dword ptr [esi + 0x20]
// 00753d4b  51                   push ecx
// 00753d4c  52                   push edx
// 00753d4d  ffd7                 call edi
// 00753d4f  8b4b20               mov ecx, dword ptr [ebx + 0x20]
// 00753d52  8d442438             lea eax, [esp + 0x38]
// 00753d56  50                   push eax
// 00753d57  51                   push ecx
// 00753d58  ffd7                 call edi
// 00753d5a  8d542414             lea edx, [esp + 0x14]
// 00753d5e  52                   push edx
// 00753d5f  896c2418             mov dword ptr [esp + 0x18], ebp
// 00753d63  896c241c             mov dword ptr [esp + 0x1c], ebp
// 00753d67  ff159c2d8000         call dword ptr [0x802d9c]
// 00753d6d  85c0                 test eax, eax
// 00753d6f  0f84f7010000         je 0x753f6c
// 00753d75  8b442418             mov eax, dword ptr [esp + 0x18]
// 00753d79  3b44244c             cmp eax, dword ptr [esp + 0x4c]
// 00753d7d  0f8ce9010000         jl 0x753f6c
// 00753d83  3b442454             cmp eax, dword ptr [esp + 0x54]
// 00753d87  0f8fdf010000         jg 0x753f6c
// 00753d8d  8bce                 mov ecx, esi
// 00753d8f  e804820600           call 0x7bbf98
// 00753d94  8b7c2458             mov edi, dword ptr [esp + 0x58]
// 00753d98  8bd8                 mov ebx, eax
// 00753d9a  81e300004000         and ebx, 0x400000
// 00753da0  8b442460             mov eax, dword ptr [esp + 0x60]
// 00753da4  7408                 je 0x753dae
// 00753da6  8bcf                 mov ecx, edi
// 00753da8  2b4c2438             sub ecx, dword ptr [esp + 0x38]
// 00753dac  eb06                 jmp 0x753db4
// 00753dae  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00753db2  2bc8                 sub ecx, eax
// 00753db4  3bcd                 cmp ecx, ebp
// 00753db6  7e72                 jle 0x753e2a
// 00753db8  b867666666           mov eax, 0x66666667
// 00753dbd  f7e9                 imul ecx
// 00753dbf  c1fa02               sar edx, 2
// 00753dc2  8bc2                 mov eax, edx
// 00753dc4  c1e81f               shr eax, 0x1f
// 00753dc7  03c2                 add eax, edx
// 00753dc9  83f807               cmp eax, 7
// 00753dcc  ba07000000           mov edx, 7
// 00753dd1  7f02                 jg 0x753dd5
// 00753dd3  8bd0                 mov edx, eax
// 00753dd5  8b1dc86e9600         mov ebx, dword ptr [0x966ec8]
// 00753ddb  3bd3                 cmp edx, ebx
// 00753ddd  7e0c                 jle 0x753deb
// 00753ddf  83f807               cmp eax, 7
// 00753de2  bb07000000           mov ebx, 7
// 00753de7  7f02                 jg 0x753deb
// 00753de9  8bd8                 mov ebx, eax
// 00753deb  b864000000           mov eax, 0x64
// 00753df0  2bc1                 sub eax, ecx
// 00753df2  83f80a               cmp eax, 0xa
// 00753df5  bf0a000000           mov edi, 0xa
// 00753dfa  7c02                 jl 0x753dfe
// 00753dfc  8bf8                 mov edi, eax
// 00753dfe  6a17                 push 0x17
// 00753e00  8d442420             lea eax, [esp + 0x20]
// 00753e04  50                   push eax
// 00753e05  55                   push ebp
// 00753e06  8bce                 mov ecx, esi
// 00753e08  e825840600           call 0x7bc232
// 00753e0d  85c0                 test eax, eax
// 00753e0f  0f8457010000         je 0x753f6c
// 00753e15  8b442430             mov eax, dword ptr [esp + 0x30]
// 00753e19  3b442428             cmp eax, dword ptr [esp + 0x28]
// 00753e1d  0f8d49010000         jge 0x753f6c
// 00753e23  03c3                 add eax, ebx
// 00753e25  e9df000000           jmp 0x753f09
// 00753e2a  3bdd                 cmp ebx, ebp
// 00753e2c  7402                 je 0x753e30
// 00753e2e  8bf8                 mov edi, eax
// 00753e30  8b8610010000         mov eax, dword ptr [esi + 0x110]
// 00753e36  3bc5                 cmp eax, ebp
// 00753e38  7450                 je 0x753e8a
// 00753e3a  8b8eec000000         mov ecx, dword ptr [esi + 0xec]
// 00753e40  3bcd                 cmp ecx, ebp
// 00753e42  7446                 je 0x753e8a
// 00753e44  48                   dec eax
// 00753e45  50                   push eax
// 00753e46  e8f5bbffff           call 0x74fa40
// 00753e4b  3bc5                 cmp eax, ebp
// 00753e4d  743b                 je 0x753e8a
// 00753e4f  8d4c241c             lea ecx, [esp + 0x1c]
// 00753e53  51                   push ecx
// 00753e54  8bc8                 mov ecx, eax
// 00753e56  e82507f8ff           call 0x6d4580
// 00753e5b  8d54241c             lea edx, [esp + 0x1c]
// 00753e5f  52                   push edx
// 00753e60  8bce                 mov ecx, esi
// 00753e62  e8cbcdf4ff           call 0x6a0c32
// 00753e67  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00753e6b  394c2438             cmp dword ptr [esp + 0x38], ecx
// 00753e6f  7d19                 jge 0x753e8a
// 00753e71  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 00753e75  8bc1                 mov eax, ecx
// 00753e77  2bc5                 sub eax, ebp
// 00753e79  99                   cdq 
// 00753e7a  2bc2                 sub eax, edx
// 00753e7c  d1f8                 sar eax, 1
// 00753e7e  03c5                 add eax, ebp
// 00753e80  33ed                 xor ebp, ebp
// 00753e82  39442414             cmp dword ptr [esp + 0x14], eax
// 00753e86  7e02                 jle 0x753e8a
// 00753e88  8bf9                 mov edi, ecx
// 00753e8a  3bdd                 cmp ebx, ebp
// 00753e8c  740a                 je 0x753e98
// 00753e8e  8b442440             mov eax, dword ptr [esp + 0x40]
// 00753e92  2bc7                 sub eax, edi
// 00753e94  8bf8                 mov edi, eax
// 00753e96  eb04                 jmp 0x753e9c
// 00753e98  2b7c2438             sub edi, dword ptr [esp + 0x38]
// 00753e9c  3bfd                 cmp edi, ebp
// 00753e9e  0f8ec8000000         jle 0x753f6c
// 00753ea4  b867666666           mov eax, 0x66666667
// 00753ea9  f7ef                 imul edi
// 00753eab  c1fa02               sar edx, 2
// 00753eae  8bc2                 mov eax, edx
// 00753eb0  c1e81f               shr eax, 0x1f
// 00753eb3  03c2                 add eax, edx
// 00753eb5  83f807               cmp eax, 7
// 00753eb8  b907000000           mov ecx, 7
// 00753ebd  7f02                 jg 0x753ec1
// 00753ebf  8bc8                 mov ecx, eax
// 00753ec1  8b1dc86e9600         mov ebx, dword ptr [0x966ec8]
// 00753ec7  3bcb                 cmp ecx, ebx
// 00753ec9  7e0c                 jle 0x753ed7
// 00753ecb  83f807               cmp eax, 7
// 00753ece  bb07000000           mov ebx, 7
// 00753ed3  7f02                 jg 0x753ed7
// 00753ed5  8bd8                 mov ebx, eax
// 00753ed7  b864000000           mov eax, 0x64
// 00753edc  2bc7                 sub eax, edi
// 00753ede  83f80a               cmp eax, 0xa
// 00753ee1  bf0a000000           mov edi, 0xa
// 00753ee6  7c02                 jl 0x753eea
// 00753ee8  8bf8                 mov edi, eax
// 00753eea  6a17                 push 0x17
// 00753eec  8d442420             lea eax, [esp + 0x20]
// 00753ef0  50                   push eax
// 00753ef1  55                   push ebp
// 00753ef2  8bce                 mov ecx, esi
// 00753ef4  e839830600           call 0x7bc232
// 00753ef9  85c0                 test eax, eax
// 00753efb  746f                 je 0x753f6c
// 00753efd  8b442430             mov eax, dword ptr [esp + 0x30]
// 00753f01  3b442424             cmp eax, dword ptr [esp + 0x24]
// 00753f05  7e65                 jle 0x753f6c
// 00753f07  2bc3                 sub eax, ebx
// 00753f09  50                   push eax
// 00753f0a  8bce                 mov ecx, esi
// 00753f0c  e89f61f7ff           call 0x6ca0b0
// 00753f11  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00753f15  8b5120               mov edx, dword ptr [ecx + 0x20]
// 00753f18  55                   push ebp
// 00753f19  57                   push edi
// 00753f1a  6a01                 push 1
// 00753f1c  52                   push edx
// 00753f1d  ff157c2d8000         call dword ptr [0x802d7c]
// 00753f23  8b442414             mov eax, dword ptr [esp + 0x14]
// 00753f27  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00753f2b  8d54241c             lea edx, [esp + 0x1c]
// 00753f2f  8944241c             mov dword ptr [esp + 0x1c], eax
// 00753f33  8b4620               mov eax, dword ptr [esi + 0x20]
// 00753f36  52                   push edx
// 00753f37  50                   push eax
// 00753f38  894c2428             mov dword ptr [esp + 0x28], ecx
// 00753f3c  ff15a02d8000         call dword ptr [0x802da0]
// 00753f42  8bce                 mov ecx, esi
// 00753f44  e8e77ff7ff           call 0x6cbf30
// 00753f49  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00753f4c  51                   push ecx
// 00753f4d  ff15942c8000         call dword ptr [0x802c94]
// 00753f53  8b542410             mov edx, dword ptr [esp + 0x10]
// 00753f57  8b4a54               mov ecx, dword ptr [edx + 0x54]
// 00753f5a  8b542420             mov edx, dword ptr [esp + 0x20]
// 00753f5e  8b01                 mov eax, dword ptr [ecx]
// 00753f60  8b4074               mov eax, dword ptr [eax + 0x74]
// 00753f63  52                   push edx
// 00753f64  8b542420             mov edx, dword ptr [esp + 0x20]
// 00753f68  52                   push edx
// 00753f69  55                   push ebp
// 00753f6a  ffd0                 call eax
// 00753f6c  5f                   pop edi
// 00753f6d  5e                   pop esi
// 00753f6e  5d                   pop ebp
// 00753f6f  5b                   pop ebx
// 00753f70  83c458               add esp, 0x58
// 00753f73  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\ReportControl\XTPReportDragDrop.cpp (function ?OnTimer@CXTPReportHeaderDragWnd@@IAEXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportDragDrop.cpp
