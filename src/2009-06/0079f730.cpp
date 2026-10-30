// roc 2009-06 0079f730  unit: CXTPControlGallery  size: 748 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0079f730
//
// 0079f730  6aff                 push -1
// 0079f732  6868c08700           push 0x87c068
// 0079f737  64a100000000         mov eax, dword ptr fs:[0]
// 0079f73d  50                   push eax
// 0079f73e  83ec54               sub esp, 0x54
// 0079f741  53                   push ebx
// 0079f742  55                   push ebp
// 0079f743  56                   push esi
// 0079f744  57                   push edi
// 0079f745  a1304fa200           mov eax, dword ptr [0xa24f30]
// 0079f74a  33c4                 xor eax, esp
// 0079f74c  50                   push eax
// 0079f74d  8d442468             lea eax, [esp + 0x68]
// 0079f751  64a300000000         mov dword ptr fs:[0], eax
// 0079f757  8bf1                 mov esi, ecx
// 0079f759  e872ccffff           call 0x79c3d0
// 0079f75e  33db                 xor ebx, ebx
// 0079f760  89442420             mov dword ptr [esp + 0x20], eax
// 0079f764  3bc3                 cmp eax, ebx
// 0079f766  0f8495020000         je 0x79fa01
// 0079f76c  8d442448             lea eax, [esp + 0x48]
// 0079f770  50                   push eax
// 0079f771  e84addffff           call 0x79d4c0
// 0079f776  895c2434             mov dword ptr [esp + 0x34], ebx
// 0079f77a  c74424308c2b8f00     mov dword ptr [esp + 0x30], 0x8f2b8c
// 0079f782  8b7c2478             mov edi, dword ptr [esp + 0x78]
// 0079f786  8b5708               mov edx, dword ptr [edi + 8]
// 0079f789  8d4c2428             lea ecx, [esp + 0x28]
// 0079f78d  51                   push ecx
// 0079f78e  52                   push edx
// 0079f78f  895c2478             mov dword ptr [esp + 0x78], ebx
// 0079f793  ff1514e18900         call dword ptr [0x89e114]
// 0079f799  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0079f79d  8b442448             mov eax, dword ptr [esp + 0x48]
// 0079f7a1  8b542450             mov edx, dword ptr [esp + 0x50]
// 0079f7a5  89442458             mov dword ptr [esp + 0x58], eax
// 0079f7a9  8b442454             mov eax, dword ptr [esp + 0x54]
// 0079f7ad  894c245c             mov dword ptr [esp + 0x5c], ecx
// 0079f7b1  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0079f7b5  89542460             mov dword ptr [esp + 0x60], edx
// 0079f7b9  8b542428             mov edx, dword ptr [esp + 0x28]
// 0079f7bd  51                   push ecx
// 0079f7be  89442468             mov dword ptr [esp + 0x68], eax
// 0079f7c2  52                   push edx
// 0079f7c3  8d442460             lea eax, [esp + 0x60]
// 0079f7c7  50                   push eax
// 0079f7c8  ff15f8ed8900         call dword ptr [0x89edf8]
// 0079f7ce  8d4c2458             lea ecx, [esp + 0x58]
// 0079f7d2  51                   push ecx
// 0079f7d3  ff1580e08900         call dword ptr [0x89e080]
// 0079f7d9  50                   push eax
// 0079f7da  8d4c2434             lea ecx, [esp + 0x34]
// 0079f7de  e81f98f7ff           call 0x719002
// 0079f7e3  8d542430             lea edx, [esp + 0x30]
// 0079f7e7  52                   push edx
// 0079f7e8  8bcf                 mov ecx, edi
// 0079f7ea  e809c90a00           call 0x84c0f8
// 0079f7ef  399efc010000         cmp dword ptr [esi + 0x1fc], ebx
// 0079f7f5  740a                 je 0x79f801
// 0079f7f7  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0079f7ff  eb0a                 jmp 0x79f80b
// 0079f801  8b86f8010000         mov eax, dword ptr [esi + 0x1f8]
// 0079f807  89442414             mov dword ptr [esp + 0x14], eax
// 0079f80b  399e54020000         cmp dword ptr [esi + 0x254], ebx
// 0079f811  895c2418             mov dword ptr [esp + 0x18], ebx
// 0079f815  0f8ec2010000         jle 0x79f9dd
// 0079f81b  33ed                 xor ebp, ebp
// 0079f81d  896c2424             mov dword ptr [esp + 0x24], ebp
// 0079f821  85ed                 test ebp, ebp
// 0079f823  0f8cee010000         jl 0x79fa17
// 0079f829  3b9e54020000         cmp ebx, dword ptr [esi + 0x254]
// 0079f82f  0f8de2010000         jge 0x79fa17
// 0079f835  8bbe50020000         mov edi, dword ptr [esi + 0x250]
// 0079f83b  03fd                 add edi, ebp
// 0079f83d  57                   push edi
// 0079f83e  8d4c243c             lea ecx, [esp + 0x3c]
// 0079f842  51                   push ecx
// 0079f843  ff1500ee8900         call dword ptr [0x89ee00]
// 0079f849  8b860c020000         mov eax, dword ptr [esi + 0x20c]
// 0079f84f  f7d8                 neg eax
// 0079f851  50                   push eax
// 0079f852  6a00                 push 0
// 0079f854  8d542440             lea edx, [esp + 0x40]
// 0079f858  52                   push edx
// 0079f859  ff15f8ed8900         call dword ptr [0x89edf8]
// 0079f85f  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 0079f863  39442444             cmp dword ptr [esp + 0x44], eax
// 0079f867  0f8c58010000         jl 0x79f9c5
// 0079f86d  8d4c2438             lea ecx, [esp + 0x38]
// 0079f871  51                   push ecx
// 0079f872  ff15fced8900         call dword ptr [0x89edfc]
// 0079f878  85c0                 test eax, eax
// 0079f87a  0f8537010000         jne 0x79f9b7
// 0079f880  395c2414             cmp dword ptr [esp + 0x14], ebx
// 0079f884  7510                 jne 0x79f896
// 0079f886  c744241c01000000     mov dword ptr [esp + 0x1c], 1
// 0079f88e  398600020000         cmp dword ptr [esi + 0x200], eax
// 0079f894  7508                 jne 0x79f89e
// 0079f896  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0079f89e  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 0079f8a4  8b5710               mov edx, dword ptr [edi + 0x10]
// 0079f8a7  8b6a20               mov ebp, dword ptr [edx + 0x20]
// 0079f8aa  83f8ff               cmp eax, -1
// 0079f8ad  750f                 jne 0x79f8be
// 0079f8af  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 0079f8b5  85c9                 test ecx, ecx
// 0079f8b7  7405                 je 0x79f8be
// 0079f8b9  e8e205f8ff           call 0x71fea0
// 0079f8be  33c9                 xor ecx, ecx
// 0079f8c0  395c2414             cmp dword ptr [esp + 0x14], ebx
// 0079f8c4  8b542420             mov edx, dword ptr [esp + 0x20]
// 0079f8c8  0f94c1               sete cl
// 0079f8cb  8b12                 mov edx, dword ptr [edx]
// 0079f8cd  8b5258               mov edx, dword ptr [edx + 0x58]
// 0079f8d0  8bd9                 mov ebx, ecx
// 0079f8d2  33c9                 xor ecx, ecx
// 0079f8d4  39aef4010000         cmp dword ptr [esi + 0x1f4], ebp
// 0079f8da  0f94c1               sete cl
// 0079f8dd  51                   push ecx
// 0079f8de  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0079f8e2  51                   push ecx
// 0079f8e3  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0079f8e7  53                   push ebx
// 0079f8e8  50                   push eax
// 0079f8e9  83ec10               sub esp, 0x10
// 0079f8ec  8bc4                 mov eax, esp
// 0079f8ee  8908                 mov dword ptr [eax], ecx
// 0079f8f0  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 0079f8f4  894804               mov dword ptr [eax + 4], ecx
// 0079f8f7  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 0079f8fb  894808               mov dword ptr [eax + 8], ecx
// 0079f8fe  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 0079f902  89480c               mov dword ptr [eax + 0xc], ecx
// 0079f905  8b4710               mov eax, dword ptr [edi + 0x10]
// 0079f908  8b8c2498000000       mov ecx, dword ptr [esp + 0x98]
// 0079f90f  50                   push eax
// 0079f910  56                   push esi
// 0079f911  51                   push ecx
// 0079f912  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0079f916  ffd2                 call edx
// 0079f918  85c0                 test eax, eax
// 0079f91a  0f8593000000         jne 0x79f9b3
// 0079f920  8b442418             mov eax, dword ptr [esp + 0x18]
// 0079f924  39442414             cmp dword ptr [esp + 0x14], eax
// 0079f928  7511                 jne 0x79f93b
// 0079f92a  83be0002000000       cmp dword ptr [esi + 0x200], 0
// 0079f931  c744241c01000000     mov dword ptr [esp + 0x1c], 1
// 0079f939  7508                 jne 0x79f943
// 0079f93b  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0079f943  8b4f10               mov ecx, dword ptr [edi + 0x10]
// 0079f946  8bae9c000000         mov ebp, dword ptr [esi + 0x9c]
// 0079f94c  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0079f94f  89542428             mov dword ptr [esp + 0x28], edx
// 0079f953  83fdff               cmp ebp, -1
// 0079f956  7511                 jne 0x79f969
// 0079f958  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 0079f95e  85c9                 test ecx, ecx
// 0079f960  7407                 je 0x79f969
// 0079f962  e83905f8ff           call 0x71fea0
// 0079f967  8be8                 mov ebp, eax
// 0079f969  8b4f10               mov ecx, dword ptr [edi + 0x10]
// 0079f96c  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 0079f970  33c0                 xor eax, eax
// 0079f972  39bef4010000         cmp dword ptr [esi + 0x1f4], edi
// 0079f978  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 0079f97c  0f94c0               sete al
// 0079f97f  8b11                 mov edx, dword ptr [ecx]
// 0079f981  8b525c               mov edx, dword ptr [edx + 0x5c]
// 0079f984  50                   push eax
// 0079f985  8b442420             mov eax, dword ptr [esp + 0x20]
// 0079f989  50                   push eax
// 0079f98a  53                   push ebx
// 0079f98b  55                   push ebp
// 0079f98c  83ec10               sub esp, 0x10
// 0079f98f  8bc4                 mov eax, esp
// 0079f991  8938                 mov dword ptr [eax], edi
// 0079f993  8b7c245c             mov edi, dword ptr [esp + 0x5c]
// 0079f997  897804               mov dword ptr [eax + 4], edi
// 0079f99a  8b7c2460             mov edi, dword ptr [esp + 0x60]
// 0079f99e  897808               mov dword ptr [eax + 8], edi
// 0079f9a1  8b7c2464             mov edi, dword ptr [esp + 0x64]
// 0079f9a5  89780c               mov dword ptr [eax + 0xc], edi
// 0079f9a8  8b842498000000       mov eax, dword ptr [esp + 0x98]
// 0079f9af  56                   push esi
// 0079f9b0  50                   push eax
// 0079f9b1  ffd2                 call edx
// 0079f9b3  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0079f9b7  8b442454             mov eax, dword ptr [esp + 0x54]
// 0079f9bb  3944243c             cmp dword ptr [esp + 0x3c], eax
// 0079f9bf  7f1c                 jg 0x79f9dd
// 0079f9c1  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 0079f9c5  43                   inc ebx
// 0079f9c6  83c518               add ebp, 0x18
// 0079f9c9  3b9e54020000         cmp ebx, dword ptr [esi + 0x254]
// 0079f9cf  895c2418             mov dword ptr [esp + 0x18], ebx
// 0079f9d3  896c2424             mov dword ptr [esp + 0x24], ebp
// 0079f9d7  0f8c44feffff         jl 0x79f821
// 0079f9dd  8b4c2478             mov ecx, dword ptr [esp + 0x78]
// 0079f9e1  6a00                 push 0
// 0079f9e3  e810c70a00           call 0x84c0f8
// 0079f9e8  8d4c2430             lea ecx, [esp + 0x30]
// 0079f9ec  c7442470ffffffff     mov dword ptr [esp + 0x70], 0xffffffff
// 0079f9f4  c74424308c2b8f00     mov dword ptr [esp + 0x30], 0x8f2b8c
// 0079f9fc  e8cffac6ff           call 0x40f4d0
// 0079fa01  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 0079fa05  64890d00000000       mov dword ptr fs:[0], ecx
// 0079fa0c  59                   pop ecx
// 0079fa0d  5f                   pop edi
// 0079fa0e  5e                   pop esi
// 0079fa0f  5d                   pop ebp
// 0079fa10  5b                   pop ebx
// 0079fa11  83c460               add esp, 0x60
// 0079fa14  c20400               ret 4
// 0079fa17  e8c892f7ff           call 0x718ce4
// copied from an identical function in another client (function ?DrawItems@CXTPControlGallery@@IAEXPAVCDC@@@Z)

// from server: 100% by colin
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lang: cpp
// roc-lib: xtp-11.2.2-lib-strlen-rtm Source/CommandBars/XTPControlGallery.cpp