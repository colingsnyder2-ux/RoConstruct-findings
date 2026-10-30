// roc 2009-12 0087a670  unit: CXTPControlGallery  size: 748 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0087a670
//
// 0087a670  6aff                 push -1
// 0087a672  6828039600           push 0x960328
// 0087a677  64a100000000         mov eax, dword ptr fs:[0]
// 0087a67d  50                   push eax
// 0087a67e  83ec54               sub esp, 0x54
// 0087a681  53                   push ebx
// 0087a682  55                   push ebp
// 0087a683  56                   push esi
// 0087a684  57                   push edi
// 0087a685  a10052b600           mov eax, dword ptr [0xb65200]
// 0087a68a  33c4                 xor eax, esp
// 0087a68c  50                   push eax
// 0087a68d  8d442468             lea eax, [esp + 0x68]
// 0087a691  64a300000000         mov dword ptr fs:[0], eax
// 0087a697  8bf1                 mov esi, ecx
// 0087a699  e8b2ccffff           call 0x877350
// 0087a69e  33db                 xor ebx, ebx
// 0087a6a0  89442420             mov dword ptr [esp + 0x20], eax
// 0087a6a4  3bc3                 cmp eax, ebx
// 0087a6a6  0f8495020000         je 0x87a941
// 0087a6ac  8d442448             lea eax, [esp + 0x48]
// 0087a6b0  50                   push eax
// 0087a6b1  e89addffff           call 0x878450
// 0087a6b6  895c2434             mov dword ptr [esp + 0x34], ebx
// 0087a6ba  c7442430f82a9f00     mov dword ptr [esp + 0x30], 0x9f2af8
// 0087a6c2  8b7c2478             mov edi, dword ptr [esp + 0x78]
// 0087a6c6  8b5708               mov edx, dword ptr [edi + 8]
// 0087a6c9  8d4c2428             lea ecx, [esp + 0x28]
// 0087a6cd  51                   push ecx
// 0087a6ce  52                   push edx
// 0087a6cf  895c2478             mov dword ptr [esp + 0x78], ebx
// 0087a6d3  ff15b4b09800         call dword ptr [0x98b0b4]
// 0087a6d9  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0087a6dd  8b442448             mov eax, dword ptr [esp + 0x48]
// 0087a6e1  8b542450             mov edx, dword ptr [esp + 0x50]
// 0087a6e5  89442458             mov dword ptr [esp + 0x58], eax
// 0087a6e9  8b442454             mov eax, dword ptr [esp + 0x54]
// 0087a6ed  894c245c             mov dword ptr [esp + 0x5c], ecx
// 0087a6f1  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0087a6f5  89542460             mov dword ptr [esp + 0x60], edx
// 0087a6f9  8b542428             mov edx, dword ptr [esp + 0x28]
// 0087a6fd  51                   push ecx
// 0087a6fe  89442468             mov dword ptr [esp + 0x68], eax
// 0087a702  52                   push edx
// 0087a703  8d442460             lea eax, [esp + 0x60]
// 0087a707  50                   push eax
// 0087a708  ff156ccc9800         call dword ptr [0x98cc6c]
// 0087a70e  8d4c2458             lea ecx, [esp + 0x58]
// 0087a712  51                   push ecx
// 0087a713  ff15c4b09800         call dword ptr [0x98b0c4]
// 0087a719  50                   push eax
// 0087a71a  8d4c2434             lea ecx, [esp + 0x34]
// 0087a71e  e80797f7ff           call 0x7f3e2a
// 0087a723  8d542430             lea edx, [esp + 0x30]
// 0087a727  52                   push edx
// 0087a728  8bcf                 mov ecx, edi
// 0087a72a  e835bf0a00           call 0x926664
// 0087a72f  399efc010000         cmp dword ptr [esi + 0x1fc], ebx
// 0087a735  740a                 je 0x87a741
// 0087a737  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0087a73f  eb0a                 jmp 0x87a74b
// 0087a741  8b86f8010000         mov eax, dword ptr [esi + 0x1f8]
// 0087a747  89442414             mov dword ptr [esp + 0x14], eax
// 0087a74b  399e54020000         cmp dword ptr [esi + 0x254], ebx
// 0087a751  895c2418             mov dword ptr [esp + 0x18], ebx
// 0087a755  0f8ec2010000         jle 0x87a91d
// 0087a75b  33ed                 xor ebp, ebp
// 0087a75d  896c2424             mov dword ptr [esp + 0x24], ebp
// 0087a761  85ed                 test ebp, ebp
// 0087a763  0f8cee010000         jl 0x87a957
// 0087a769  3b9e54020000         cmp ebx, dword ptr [esi + 0x254]
// 0087a76f  0f8de2010000         jge 0x87a957
// 0087a775  8bbe50020000         mov edi, dword ptr [esi + 0x250]
// 0087a77b  03fd                 add edi, ebp
// 0087a77d  57                   push edi
// 0087a77e  8d4c243c             lea ecx, [esp + 0x3c]
// 0087a782  51                   push ecx
// 0087a783  ff1564cc9800         call dword ptr [0x98cc64]
// 0087a789  8b860c020000         mov eax, dword ptr [esi + 0x20c]
// 0087a78f  f7d8                 neg eax
// 0087a791  50                   push eax
// 0087a792  6a00                 push 0
// 0087a794  8d542440             lea edx, [esp + 0x40]
// 0087a798  52                   push edx
// 0087a799  ff156ccc9800         call dword ptr [0x98cc6c]
// 0087a79f  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 0087a7a3  39442444             cmp dword ptr [esp + 0x44], eax
// 0087a7a7  0f8c58010000         jl 0x87a905
// 0087a7ad  8d4c2438             lea ecx, [esp + 0x38]
// 0087a7b1  51                   push ecx
// 0087a7b2  ff1568cc9800         call dword ptr [0x98cc68]
// 0087a7b8  85c0                 test eax, eax
// 0087a7ba  0f8537010000         jne 0x87a8f7
// 0087a7c0  395c2414             cmp dword ptr [esp + 0x14], ebx
// 0087a7c4  7510                 jne 0x87a7d6
// 0087a7c6  c744241c01000000     mov dword ptr [esp + 0x1c], 1
// 0087a7ce  398600020000         cmp dword ptr [esi + 0x200], eax
// 0087a7d4  7508                 jne 0x87a7de
// 0087a7d6  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0087a7de  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 0087a7e4  8b5710               mov edx, dword ptr [edi + 0x10]
// 0087a7e7  8b6a20               mov ebp, dword ptr [edx + 0x20]
// 0087a7ea  83f8ff               cmp eax, -1
// 0087a7ed  750f                 jne 0x87a7fe
// 0087a7ef  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 0087a7f5  85c9                 test ecx, ecx
// 0087a7f7  7405                 je 0x87a7fe
// 0087a7f9  e8b2bdf7ff           call 0x7f65b0
// 0087a7fe  33c9                 xor ecx, ecx
// 0087a800  395c2414             cmp dword ptr [esp + 0x14], ebx
// 0087a804  8b542420             mov edx, dword ptr [esp + 0x20]
// 0087a808  0f94c1               sete cl
// 0087a80b  8b12                 mov edx, dword ptr [edx]
// 0087a80d  8b5258               mov edx, dword ptr [edx + 0x58]
// 0087a810  8bd9                 mov ebx, ecx
// 0087a812  33c9                 xor ecx, ecx
// 0087a814  39aef4010000         cmp dword ptr [esi + 0x1f4], ebp
// 0087a81a  0f94c1               sete cl
// 0087a81d  51                   push ecx
// 0087a81e  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0087a822  51                   push ecx
// 0087a823  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0087a827  53                   push ebx
// 0087a828  50                   push eax
// 0087a829  83ec10               sub esp, 0x10
// 0087a82c  8bc4                 mov eax, esp
// 0087a82e  8908                 mov dword ptr [eax], ecx
// 0087a830  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 0087a834  894804               mov dword ptr [eax + 4], ecx
// 0087a837  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 0087a83b  894808               mov dword ptr [eax + 8], ecx
// 0087a83e  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 0087a842  89480c               mov dword ptr [eax + 0xc], ecx
// 0087a845  8b4710               mov eax, dword ptr [edi + 0x10]
// 0087a848  8b8c2498000000       mov ecx, dword ptr [esp + 0x98]
// 0087a84f  50                   push eax
// 0087a850  56                   push esi
// 0087a851  51                   push ecx
// 0087a852  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0087a856  ffd2                 call edx
// 0087a858  85c0                 test eax, eax
// 0087a85a  0f8593000000         jne 0x87a8f3
// 0087a860  8b442418             mov eax, dword ptr [esp + 0x18]
// 0087a864  39442414             cmp dword ptr [esp + 0x14], eax
// 0087a868  7511                 jne 0x87a87b
// 0087a86a  83be0002000000       cmp dword ptr [esi + 0x200], 0
// 0087a871  c744241c01000000     mov dword ptr [esp + 0x1c], 1
// 0087a879  7508                 jne 0x87a883
// 0087a87b  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0087a883  8b4f10               mov ecx, dword ptr [edi + 0x10]
// 0087a886  8bae9c000000         mov ebp, dword ptr [esi + 0x9c]
// 0087a88c  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0087a88f  89542428             mov dword ptr [esp + 0x28], edx
// 0087a893  83fdff               cmp ebp, -1
// 0087a896  7511                 jne 0x87a8a9
// 0087a898  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 0087a89e  85c9                 test ecx, ecx
// 0087a8a0  7407                 je 0x87a8a9
// 0087a8a2  e809bdf7ff           call 0x7f65b0
// 0087a8a7  8be8                 mov ebp, eax
// 0087a8a9  8b4f10               mov ecx, dword ptr [edi + 0x10]
// 0087a8ac  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 0087a8b0  33c0                 xor eax, eax
// 0087a8b2  39bef4010000         cmp dword ptr [esi + 0x1f4], edi
// 0087a8b8  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 0087a8bc  0f94c0               sete al
// 0087a8bf  8b11                 mov edx, dword ptr [ecx]
// 0087a8c1  8b525c               mov edx, dword ptr [edx + 0x5c]
// 0087a8c4  50                   push eax
// 0087a8c5  8b442420             mov eax, dword ptr [esp + 0x20]
// 0087a8c9  50                   push eax
// 0087a8ca  53                   push ebx
// 0087a8cb  55                   push ebp
// 0087a8cc  83ec10               sub esp, 0x10
// 0087a8cf  8bc4                 mov eax, esp
// 0087a8d1  8938                 mov dword ptr [eax], edi
// 0087a8d3  8b7c245c             mov edi, dword ptr [esp + 0x5c]
// 0087a8d7  897804               mov dword ptr [eax + 4], edi
// 0087a8da  8b7c2460             mov edi, dword ptr [esp + 0x60]
// 0087a8de  897808               mov dword ptr [eax + 8], edi
// 0087a8e1  8b7c2464             mov edi, dword ptr [esp + 0x64]
// 0087a8e5  89780c               mov dword ptr [eax + 0xc], edi
// 0087a8e8  8b842498000000       mov eax, dword ptr [esp + 0x98]
// 0087a8ef  56                   push esi
// 0087a8f0  50                   push eax
// 0087a8f1  ffd2                 call edx
// 0087a8f3  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0087a8f7  8b442454             mov eax, dword ptr [esp + 0x54]
// 0087a8fb  3944243c             cmp dword ptr [esp + 0x3c], eax
// 0087a8ff  7f1c                 jg 0x87a91d
// 0087a901  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 0087a905  43                   inc ebx
// 0087a906  83c518               add ebp, 0x18
// 0087a909  3b9e54020000         cmp ebx, dword ptr [esi + 0x254]
// 0087a90f  895c2418             mov dword ptr [esp + 0x18], ebx
// 0087a913  896c2424             mov dword ptr [esp + 0x24], ebp
// 0087a917  0f8c44feffff         jl 0x87a761
// 0087a91d  8b4c2478             mov ecx, dword ptr [esp + 0x78]
// 0087a921  6a00                 push 0
// 0087a923  e83cbd0a00           call 0x926664
// 0087a928  8d4c2430             lea ecx, [esp + 0x30]
// 0087a92c  c7442470ffffffff     mov dword ptr [esp + 0x70], 0xffffffff
// 0087a934  c7442430f82a9f00     mov dword ptr [esp + 0x30], 0x9f2af8
// 0087a93c  e8ef48b9ff           call 0x40f230
// 0087a941  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 0087a945  64890d00000000       mov dword ptr fs:[0], ecx
// 0087a94c  59                   pop ecx
// 0087a94d  5f                   pop edi
// 0087a94e  5e                   pop esi
// 0087a94f  5d                   pop ebp
// 0087a950  5b                   pop ebx
// 0087a951  83c460               add esp, 0x60
// 0087a954  c20400               ret 4
// 0087a957  e8b091f7ff           call 0x7f3b0c
// copied from an identical function in another client (function ?DrawItems@CXTPControlGallery@@IAEXPAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPControlGallery.cpp