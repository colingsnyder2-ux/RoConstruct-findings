// roc 2010-06 008278c0  unit: CXTPControlGallery  size: 748 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008278c0
//
// 008278c0  6aff                 push -1
// 008278c2  68d85b9b00           push 0x9b5bd8
// 008278c7  64a100000000         mov eax, dword ptr fs:[0]
// 008278cd  50                   push eax
// 008278ce  83ec54               sub esp, 0x54
// 008278d1  53                   push ebx
// 008278d2  55                   push ebp
// 008278d3  56                   push esi
// 008278d4  57                   push edi
// 008278d5  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 008278da  33c4                 xor eax, esp
// 008278dc  50                   push eax
// 008278dd  8d442468             lea eax, [esp + 0x68]
// 008278e1  64a300000000         mov dword ptr fs:[0], eax
// 008278e7  8bf1                 mov esi, ecx
// 008278e9  e862ccffff           call 0x824550
// 008278ee  33db                 xor ebx, ebx
// 008278f0  89442420             mov dword ptr [esp + 0x20], eax
// 008278f4  3bc3                 cmp eax, ebx
// 008278f6  0f8495020000         je 0x827b91
// 008278fc  8d442448             lea eax, [esp + 0x48]
// 00827900  50                   push eax
// 00827901  e84addffff           call 0x825650
// 00827906  895c2434             mov dword ptr [esp + 0x34], ebx
// 0082790a  c7442430e06da500     mov dword ptr [esp + 0x30], 0xa56de0
// 00827912  8b7c2478             mov edi, dword ptr [esp + 0x78]
// 00827916  8b5708               mov edx, dword ptr [edi + 8]
// 00827919  8d4c2428             lea ecx, [esp + 0x28]
// 0082791d  51                   push ecx
// 0082791e  52                   push edx
// 0082791f  895c2478             mov dword ptr [esp + 0x78], ebx
// 00827923  ff1500a19e00         call dword ptr [0x9ea100]
// 00827929  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0082792d  8b442448             mov eax, dword ptr [esp + 0x48]
// 00827931  8b542450             mov edx, dword ptr [esp + 0x50]
// 00827935  89442458             mov dword ptr [esp + 0x58], eax
// 00827939  8b442454             mov eax, dword ptr [esp + 0x54]
// 0082793d  894c245c             mov dword ptr [esp + 0x5c], ecx
// 00827941  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00827945  89542460             mov dword ptr [esp + 0x60], edx
// 00827949  8b542428             mov edx, dword ptr [esp + 0x28]
// 0082794d  51                   push ecx
// 0082794e  89442468             mov dword ptr [esp + 0x68], eax
// 00827952  52                   push edx
// 00827953  8d442460             lea eax, [esp + 0x60]
// 00827957  50                   push eax
// 00827958  ff1540bc9e00         call dword ptr [0x9ebc40]
// 0082795e  8d4c2458             lea ecx, [esp + 0x58]
// 00827962  51                   push ecx
// 00827963  ff150ca19e00         call dword ptr [0x9ea10c]
// 00827969  50                   push eax
// 0082796a  8d4c2434             lea ecx, [esp + 0x34]
// 0082796e  e8f705f8ff           call 0x7a7f6a
// 00827973  8d542430             lea edx, [esp + 0x30]
// 00827977  52                   push edx
// 00827978  8bcf                 mov ecx, edi
// 0082797a  e821561500           call 0x97cfa0
// 0082797f  399efc010000         cmp dword ptr [esi + 0x1fc], ebx
// 00827985  740a                 je 0x827991
// 00827987  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0082798f  eb0a                 jmp 0x82799b
// 00827991  8b86f8010000         mov eax, dword ptr [esi + 0x1f8]
// 00827997  89442414             mov dword ptr [esp + 0x14], eax
// 0082799b  399e54020000         cmp dword ptr [esi + 0x254], ebx
// 008279a1  895c2418             mov dword ptr [esp + 0x18], ebx
// 008279a5  0f8ec2010000         jle 0x827b6d
// 008279ab  33ed                 xor ebp, ebp
// 008279ad  896c2424             mov dword ptr [esp + 0x24], ebp
// 008279b1  85ed                 test ebp, ebp
// 008279b3  0f8cee010000         jl 0x827ba7
// 008279b9  3b9e54020000         cmp ebx, dword ptr [esi + 0x254]
// 008279bf  0f8de2010000         jge 0x827ba7
// 008279c5  8bbe50020000         mov edi, dword ptr [esi + 0x250]
// 008279cb  03fd                 add edi, ebp
// 008279cd  57                   push edi
// 008279ce  8d4c243c             lea ecx, [esp + 0x3c]
// 008279d2  51                   push ecx
// 008279d3  ff1548bc9e00         call dword ptr [0x9ebc48]
// 008279d9  8b860c020000         mov eax, dword ptr [esi + 0x20c]
// 008279df  f7d8                 neg eax
// 008279e1  50                   push eax
// 008279e2  6a00                 push 0
// 008279e4  8d542440             lea edx, [esp + 0x40]
// 008279e8  52                   push edx
// 008279e9  ff1540bc9e00         call dword ptr [0x9ebc40]
// 008279ef  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 008279f3  39442444             cmp dword ptr [esp + 0x44], eax
// 008279f7  0f8c58010000         jl 0x827b55
// 008279fd  8d4c2438             lea ecx, [esp + 0x38]
// 00827a01  51                   push ecx
// 00827a02  ff1544bc9e00         call dword ptr [0x9ebc44]
// 00827a08  85c0                 test eax, eax
// 00827a0a  0f8537010000         jne 0x827b47
// 00827a10  395c2414             cmp dword ptr [esp + 0x14], ebx
// 00827a14  7510                 jne 0x827a26
// 00827a16  c744241c01000000     mov dword ptr [esp + 0x1c], 1
// 00827a1e  398600020000         cmp dword ptr [esi + 0x200], eax
// 00827a24  7508                 jne 0x827a2e
// 00827a26  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 00827a2e  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 00827a34  8b5710               mov edx, dword ptr [edi + 0x10]
// 00827a37  8b6a20               mov ebp, dword ptr [edx + 0x20]
// 00827a3a  83f8ff               cmp eax, -1
// 00827a3d  750f                 jne 0x827a4e
// 00827a3f  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 00827a45  85c9                 test ecx, ecx
// 00827a47  7405                 je 0x827a4e
// 00827a49  e8422cf8ff           call 0x7aa690
// 00827a4e  33c9                 xor ecx, ecx
// 00827a50  395c2414             cmp dword ptr [esp + 0x14], ebx
// 00827a54  8b542420             mov edx, dword ptr [esp + 0x20]
// 00827a58  0f94c1               sete cl
// 00827a5b  8b12                 mov edx, dword ptr [edx]
// 00827a5d  8b5258               mov edx, dword ptr [edx + 0x58]
// 00827a60  8bd9                 mov ebx, ecx
// 00827a62  33c9                 xor ecx, ecx
// 00827a64  39aef4010000         cmp dword ptr [esi + 0x1f4], ebp
// 00827a6a  0f94c1               sete cl
// 00827a6d  51                   push ecx
// 00827a6e  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00827a72  51                   push ecx
// 00827a73  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00827a77  53                   push ebx
// 00827a78  50                   push eax
// 00827a79  83ec10               sub esp, 0x10
// 00827a7c  8bc4                 mov eax, esp
// 00827a7e  8908                 mov dword ptr [eax], ecx
// 00827a80  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 00827a84  894804               mov dword ptr [eax + 4], ecx
// 00827a87  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 00827a8b  894808               mov dword ptr [eax + 8], ecx
// 00827a8e  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 00827a92  89480c               mov dword ptr [eax + 0xc], ecx
// 00827a95  8b4710               mov eax, dword ptr [edi + 0x10]
// 00827a98  8b8c2498000000       mov ecx, dword ptr [esp + 0x98]
// 00827a9f  50                   push eax
// 00827aa0  56                   push esi
// 00827aa1  51                   push ecx
// 00827aa2  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00827aa6  ffd2                 call edx
// 00827aa8  85c0                 test eax, eax
// 00827aaa  0f8593000000         jne 0x827b43
// 00827ab0  8b442418             mov eax, dword ptr [esp + 0x18]
// 00827ab4  39442414             cmp dword ptr [esp + 0x14], eax
// 00827ab8  7511                 jne 0x827acb
// 00827aba  83be0002000000       cmp dword ptr [esi + 0x200], 0
// 00827ac1  c744241c01000000     mov dword ptr [esp + 0x1c], 1
// 00827ac9  7508                 jne 0x827ad3
// 00827acb  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 00827ad3  8b4f10               mov ecx, dword ptr [edi + 0x10]
// 00827ad6  8bae9c000000         mov ebp, dword ptr [esi + 0x9c]
// 00827adc  8b5120               mov edx, dword ptr [ecx + 0x20]
// 00827adf  89542428             mov dword ptr [esp + 0x28], edx
// 00827ae3  83fdff               cmp ebp, -1
// 00827ae6  7511                 jne 0x827af9
// 00827ae8  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 00827aee  85c9                 test ecx, ecx
// 00827af0  7407                 je 0x827af9
// 00827af2  e8992bf8ff           call 0x7aa690
// 00827af7  8be8                 mov ebp, eax
// 00827af9  8b4f10               mov ecx, dword ptr [edi + 0x10]
// 00827afc  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 00827b00  33c0                 xor eax, eax
// 00827b02  39bef4010000         cmp dword ptr [esi + 0x1f4], edi
// 00827b08  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 00827b0c  0f94c0               sete al
// 00827b0f  8b11                 mov edx, dword ptr [ecx]
// 00827b11  8b525c               mov edx, dword ptr [edx + 0x5c]
// 00827b14  50                   push eax
// 00827b15  8b442420             mov eax, dword ptr [esp + 0x20]
// 00827b19  50                   push eax
// 00827b1a  53                   push ebx
// 00827b1b  55                   push ebp
// 00827b1c  83ec10               sub esp, 0x10
// 00827b1f  8bc4                 mov eax, esp
// 00827b21  8938                 mov dword ptr [eax], edi
// 00827b23  8b7c245c             mov edi, dword ptr [esp + 0x5c]
// 00827b27  897804               mov dword ptr [eax + 4], edi
// 00827b2a  8b7c2460             mov edi, dword ptr [esp + 0x60]
// 00827b2e  897808               mov dword ptr [eax + 8], edi
// 00827b31  8b7c2464             mov edi, dword ptr [esp + 0x64]
// 00827b35  89780c               mov dword ptr [eax + 0xc], edi
// 00827b38  8b842498000000       mov eax, dword ptr [esp + 0x98]
// 00827b3f  56                   push esi
// 00827b40  50                   push eax
// 00827b41  ffd2                 call edx
// 00827b43  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00827b47  8b442454             mov eax, dword ptr [esp + 0x54]
// 00827b4b  3944243c             cmp dword ptr [esp + 0x3c], eax
// 00827b4f  7f1c                 jg 0x827b6d
// 00827b51  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 00827b55  43                   inc ebx
// 00827b56  83c518               add ebp, 0x18
// 00827b59  3b9e54020000         cmp ebx, dword ptr [esi + 0x254]
// 00827b5f  895c2418             mov dword ptr [esp + 0x18], ebx
// 00827b63  896c2424             mov dword ptr [esp + 0x24], ebp
// 00827b67  0f8c44feffff         jl 0x8279b1
// 00827b6d  8b4c2478             mov ecx, dword ptr [esp + 0x78]
// 00827b71  6a00                 push 0
// 00827b73  e828541500           call 0x97cfa0
// 00827b78  8d4c2430             lea ecx, [esp + 0x30]
// 00827b7c  c7442470ffffffff     mov dword ptr [esp + 0x70], 0xffffffff
// 00827b84  c7442430e06da500     mov dword ptr [esp + 0x30], 0xa56de0
// 00827b8c  e8cf7abeff           call 0x40f660
// 00827b91  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 00827b95  64890d00000000       mov dword ptr fs:[0], ecx
// 00827b9c  59                   pop ecx
// 00827b9d  5f                   pop edi
// 00827b9e  5e                   pop esi
// 00827b9f  5d                   pop ebp
// 00827ba0  5b                   pop ebx
// 00827ba1  83c460               add esp, 0x60
// 00827ba4  c20400               ret 4
// 00827ba7  e8a000f8ff           call 0x7a7c4c
// copied from an identical function in another client (function ?DrawItems@CXTPControlGallery@@IAEXPAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPControlGallery.cpp