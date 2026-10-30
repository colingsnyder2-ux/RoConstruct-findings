// roc 2009-12 00898e90  unit: CXTPRibbonBar  size: 1102 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00898e90
//
// 00898e90  6aff                 push -1
// 00898e92  689a199600           push 0x96199a
// 00898e97  64a100000000         mov eax, dword ptr fs:[0]
// 00898e9d  50                   push eax
// 00898e9e  83ec2c               sub esp, 0x2c
// 00898ea1  53                   push ebx
// 00898ea2  55                   push ebp
// 00898ea3  56                   push esi
// 00898ea4  57                   push edi
// 00898ea5  a10052b600           mov eax, dword ptr [0xb65200]
// 00898eaa  33c4                 xor eax, esp
// 00898eac  50                   push eax
// 00898ead  8d442440             lea eax, [esp + 0x40]
// 00898eb1  64a300000000         mov dword ptr fs:[0], eax
// 00898eb7  8be9                 mov ebp, ecx
// 00898eb9  896c2414             mov dword ptr [esp + 0x14], ebp
// 00898ebd  33ff                 xor edi, edi
// 00898ebf  897c2424             mov dword ptr [esp + 0x24], edi
// 00898ec3  e808b6f6ff           call 0x8044d0
// 00898ec8  89442418             mov dword ptr [esp + 0x18], eax
// 00898ecc  3bc7                 cmp eax, edi
// 00898ece  0f84f6030000         je 0x8992ca
// 00898ed4  bb01000000           mov ebx, 1
// 00898ed9  395844               cmp dword ptr [eax + 0x44], ebx
// 00898edc  0f85cb030000         jne 0x8992ad
// 00898ee2  8b8564020000         mov eax, dword ptr [ebp + 0x264]
// 00898ee8  8b482c               mov ecx, dword ptr [eax + 0x2c]
// 00898eeb  3bcf                 cmp ecx, edi
// 00898eed  897c2420             mov dword ptr [esp + 0x20], edi
// 00898ef1  0f8e72010000         jle 0x899069
// 00898ef7  85ff                 test edi, edi
// 00898ef9  7c10                 jl 0x898f0b
// 00898efb  3b782c               cmp edi, dword ptr [eax + 0x2c]
// 00898efe  7d0b                 jge 0x898f0b
// 00898f00  8b4028               mov eax, dword ptr [eax + 0x28]
// 00898f03  8b34b8               mov esi, dword ptr [eax + edi*4]
// 00898f06  8d04b8               lea eax, [eax + edi*4]
// 00898f09  eb02                 jmp 0x898f0d
// 00898f0b  33f6                 xor esi, esi
// 00898f0d  8b16                 mov edx, dword ptr [esi]
// 00898f0f  8b8280000000         mov eax, dword ptr [edx + 0x80]
// 00898f15  6a00                 push 0
// 00898f17  8bce                 mov ecx, esi
// 00898f19  ffd0                 call eax
// 00898f1b  85c0                 test eax, eax
// 00898f1d  0f841a010000         je 0x89903d
// 00898f23  8b96c4000000         mov edx, dword ptr [esi + 0xc4]
// 00898f29  8b86c8000000         mov eax, dword ptr [esi + 0xc8]
// 00898f2f  8b8ec0000000         mov ecx, dword ptr [esi + 0xc0]
// 00898f35  89542434             mov dword ptr [esp + 0x34], edx
// 00898f39  89442438             mov dword ptr [esp + 0x38], eax
// 00898f3d  8b86c0000000         mov eax, dword ptr [esi + 0xc0]
// 00898f43  89542434             mov dword ptr [esp + 0x34], edx
// 00898f47  8b96c8000000         mov edx, dword ptr [esi + 0xc8]
// 00898f4d  03c2                 add eax, edx
// 00898f4f  894c2430             mov dword ptr [esp + 0x30], ecx
// 00898f53  8b8ecc000000         mov ecx, dword ptr [esi + 0xcc]
// 00898f59  8bf9                 mov edi, ecx
// 00898f5b  99                   cdq 
// 00898f5c  2bc2                 sub eax, edx
// 00898f5e  897c243c             mov dword ptr [esp + 0x3c], edi
// 00898f62  8bf8                 mov edi, eax
// 00898f64  8d69f5               lea ebp, [ecx - 0xb]
// 00898f67  8d4c241c             lea ecx, [esp + 0x1c]
// 00898f6b  d1ff                 sar edi, 1
// 00898f6d  ff1574de9800         call dword ptr [0x98de74]
// 00898f73  83fb0a               cmp ebx, 0xa
// 00898f76  c744244800000000     mov dword ptr [esp + 0x48], 0
// 00898f7e  7d0d                 jge 0x898f8d
// 00898f80  53                   push ebx
// 00898f81  68583f9f00           push 0x9f3f58
// 00898f86  8d442424             lea eax, [esp + 0x24]
// 00898f8a  50                   push eax
// 00898f8b  eb17                 jmp 0x898fa4
// 00898f8d  83fb13               cmp ebx, 0x13
// 00898f90  0f8dbd000000         jge 0x899053
// 00898f96  8d4bf7               lea ecx, [ebx - 9]
// 00898f99  51                   push ecx
// 00898f9a  68d450a000           push 0xa050d4
// 00898f9f  8d542424             lea edx, [esp + 0x24]
// 00898fa3  52                   push edx
// 00898fa4  ff157cde9800         call dword ptr [0x98de7c]
// 00898faa  83c40c               add esp, 0xc
// 00898fad  43                   inc ebx
// 00898fae  6880000000           push 0x80
// 00898fb3  895c242c             mov dword ptr [esp + 0x2c], ebx
// 00898fb7  e8a4a8f5ff           call 0x7f3860
// 00898fbc  8bd8                 mov ebx, eax
// 00898fbe  83c404               add esp, 4
// 00898fc1  895c242c             mov dword ptr [esp + 0x2c], ebx
// 00898fc5  c644244801           mov byte ptr [esp + 0x48], 1
// 00898fca  85db                 test ebx, ebx
// 00898fcc  7439                 je 0x899007
// 00898fce  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 00898fd4  83f8ff               cmp eax, -1
// 00898fd7  750f                 jne 0x898fe8
// 00898fd9  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 00898fdf  85c9                 test ecx, ecx
// 00898fe1  7405                 je 0x898fe8
// 00898fe3  e8c8d5f5ff           call 0x7f65b0
// 00898fe8  50                   push eax
// 00898fe9  6a01                 push 1
// 00898feb  55                   push ebp
// 00898fec  57                   push edi
// 00898fed  8d4c242c             lea ecx, [esp + 0x2c]
// 00898ff1  ff1580de9800         call dword ptr [0x98de80]
// 00898ff7  50                   push eax
// 00898ff8  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00898ffc  56                   push esi
// 00898ffd  50                   push eax
// 00898ffe  8bcb                 mov ecx, ebx
// 00899000  e8abb2f7ff           call 0x8142b0
// 00899005  eb02                 jmp 0x899009
// 00899007  33c0                 xor eax, eax
// 00899009  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0089900d  8b5134               mov edx, dword ptr [ecx + 0x34]
// 00899010  83c12c               add ecx, 0x2c
// 00899013  50                   push eax
// 00899014  52                   push edx
// 00899015  c644245000           mov byte ptr [esp + 0x50], 0
// 0089901a  e8511cfdff           call 0x86ac70
// 0089901f  8d4c241c             lea ecx, [esp + 0x1c]
// 00899023  c7442448ffffffff     mov dword ptr [esp + 0x48], 0xffffffff
// 0089902b  ff15c0de9800         call dword ptr [0x98dec0]
// 00899031  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00899035  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 00899039  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0089903d  8b8564020000         mov eax, dword ptr [ebp + 0x264]
// 00899043  47                   inc edi
// 00899044  3b782c               cmp edi, dword ptr [eax + 0x2c]
// 00899047  897c2420             mov dword ptr [esp + 0x20], edi
// 0089904b  0f8ca6feffff         jl 0x898ef7
// 00899051  eb16                 jmp 0x899069
// 00899053  8d4c241c             lea ecx, [esp + 0x1c]
// 00899057  c7442448ffffffff     mov dword ptr [esp + 0x48], 0xffffffff
// 0089905f  ff15c0de9800         call dword ptr [0x98dec0]
// 00899065  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00899069  33ff                 xor edi, edi
// 0089906b  8bcd                 mov ecx, ebp
// 0089906d  897c2420             mov dword ptr [esp + 0x20], edi
// 00899071  e82ae3ffff           call 0x8973a0
// 00899076  85c0                 test eax, eax
// 00899078  0f8e08010000         jle 0x899186
// 0089907e  8bff                 mov edi, edi
// 00899080  57                   push edi
// 00899081  8bcd                 mov ecx, ebp
// 00899083  e898f5ffff           call 0x898620
// 00899088  8d4c241c             lea ecx, [esp + 0x1c]
// 0089908c  8bf0                 mov esi, eax
// 0089908e  51                   push ecx
// 0089908f  8bce                 mov ecx, esi
// 00899091  e83a4f0300           call 0x8cdfd0
// 00899096  8d4c241c             lea ecx, [esp + 0x1c]
// 0089909a  c744244802000000     mov dword ptr [esp + 0x48], 2
// 008990a2  ff15bcdd9800         call dword ptr [0x98ddbc]
// 008990a8  84c0                 test al, al
// 008990aa  0f85b0000000         jne 0x899160
// 008990b0  8bce                 mov ecx, esi
// 008990b2  e8e912f8ff           call 0x81a3a0
// 008990b7  85c0                 test eax, eax
// 008990b9  0f84a1000000         je 0x899160
// 008990bf  8bce                 mov ecx, esi
// 008990c1  e82aa3edff           call 0x7733f0
// 008990c6  85c0                 test eax, eax
// 008990c8  0f8492000000         je 0x899160
// 008990ce  8b5644               mov edx, dword ptr [esi + 0x44]
// 008990d1  8b4648               mov eax, dword ptr [esi + 0x48]
// 008990d4  8b4e4c               mov ecx, dword ptr [esi + 0x4c]
// 008990d7  89442434             mov dword ptr [esp + 0x34], eax
// 008990db  8bc2                 mov eax, edx
// 008990dd  89542430             mov dword ptr [esp + 0x30], edx
// 008990e1  8b5648               mov edx, dword ptr [esi + 0x48]
// 008990e4  89542434             mov dword ptr [esp + 0x34], edx
// 008990e8  8b564c               mov edx, dword ptr [esi + 0x4c]
// 008990eb  03c2                 add eax, edx
// 008990ed  894c2438             mov dword ptr [esp + 0x38], ecx
// 008990f1  8b4e50               mov ecx, dword ptr [esi + 0x50]
// 008990f4  99                   cdq 
// 008990f5  8bf9                 mov edi, ecx
// 008990f7  2bc2                 sub eax, edx
// 008990f9  897c243c             mov dword ptr [esp + 0x3c], edi
// 008990fd  8bf8                 mov edi, eax
// 008990ff  6880000000           push 0x80
// 00899104  d1ff                 sar edi, 1
// 00899106  8d59f7               lea ebx, [ecx - 9]
// 00899109  e852a7f5ff           call 0x7f3860
// 0089910e  8be8                 mov ebp, eax
// 00899110  83c404               add esp, 4
// 00899113  896c242c             mov dword ptr [esp + 0x2c], ebp
// 00899117  c644244803           mov byte ptr [esp + 0x48], 3
// 0089911c  85ed                 test ebp, ebp
// 0089911e  7420                 je 0x899140
// 00899120  6a01                 push 1
// 00899122  6a01                 push 1
// 00899124  53                   push ebx
// 00899125  57                   push edi
// 00899126  8d4c242c             lea ecx, [esp + 0x2c]
// 0089912a  ff1580de9800         call dword ptr [0x98de80]
// 00899130  50                   push eax
// 00899131  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00899135  56                   push esi
// 00899136  50                   push eax
// 00899137  8bcd                 mov ecx, ebp
// 00899139  e872b1f7ff           call 0x8142b0
// 0089913e  eb02                 jmp 0x899142
// 00899140  33c0                 xor eax, eax
// 00899142  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00899146  8b5134               mov edx, dword ptr [ecx + 0x34]
// 00899149  83c12c               add ecx, 0x2c
// 0089914c  50                   push eax
// 0089914d  52                   push edx
// 0089914e  c644245002           mov byte ptr [esp + 0x50], 2
// 00899153  e8181bfdff           call 0x86ac70
// 00899158  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0089915c  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00899160  8d4c241c             lea ecx, [esp + 0x1c]
// 00899164  c7442448ffffffff     mov dword ptr [esp + 0x48], 0xffffffff
// 0089916c  ff15c0de9800         call dword ptr [0x98dec0]
// 00899172  47                   inc edi
// 00899173  8bcd                 mov ecx, ebp
// 00899175  897c2420             mov dword ptr [esp + 0x20], edi
// 00899179  e822e2ffff           call 0x8973a0
// 0089917e  3bf8                 cmp edi, eax
// 00899180  0f8cfafeffff         jl 0x899080
// 00899186  8b8d74020000         mov ecx, dword ptr [ebp + 0x274]
// 0089918c  85c9                 test ecx, ecx
// 0089918e  0f8419010000         je 0x8992ad
// 00899194  8b91c0000000         mov edx, dword ptr [ecx + 0xc0]
// 0089919a  8b81c4000000         mov eax, dword ptr [ecx + 0xc4]
// 008991a0  89542430             mov dword ptr [esp + 0x30], edx
// 008991a4  8b91c8000000         mov edx, dword ptr [ecx + 0xc8]
// 008991aa  89542438             mov dword ptr [esp + 0x38], edx
// 008991ae  8b91cc000000         mov edx, dword ptr [ecx + 0xcc]
// 008991b4  03c2                 add eax, edx
// 008991b6  99                   cdq 
// 008991b7  2bc2                 sub eax, edx
// 008991b9  8b91c4000000         mov edx, dword ptr [ecx + 0xc4]
// 008991bf  8bf0                 mov esi, eax
// 008991c1  8b81c0000000         mov eax, dword ptr [ecx + 0xc0]
// 008991c7  89542434             mov dword ptr [esp + 0x34], edx
// 008991cb  8b91c8000000         mov edx, dword ptr [ecx + 0xc8]
// 008991d1  8b89cc000000         mov ecx, dword ptr [ecx + 0xcc]
// 008991d7  03c2                 add eax, edx
// 008991d9  99                   cdq 
// 008991da  2bc2                 sub eax, edx
// 008991dc  8bf8                 mov edi, eax
// 008991de  6880000000           push 0x80
// 008991e3  d1fe                 sar esi, 1
// 008991e5  894c2440             mov dword ptr [esp + 0x40], ecx
// 008991e9  d1ff                 sar edi, 1
// 008991eb  e870a6f5ff           call 0x7f3860
// 008991f0  8bd8                 mov ebx, eax
// 008991f2  83c404               add esp, 4
// 008991f5  895c242c             mov dword ptr [esp + 0x2c], ebx
// 008991f9  c744244804000000     mov dword ptr [esp + 0x48], 4
// 00899201  85db                 test ebx, ebx
// 00899203  7478                 je 0x89927d
// 00899205  8b542414             mov edx, dword ptr [esp + 0x14]
// 00899209  8b8a74020000         mov ecx, dword ptr [edx + 0x274]
// 0089920f  8b01                 mov eax, dword ptr [ecx]
// 00899211  8b4058               mov eax, dword ptr [eax + 0x58]
// 00899214  8d542428             lea edx, [esp + 0x28]
// 00899218  52                   push edx
// 00899219  ffd0                 call eax
// 0089921b  8be8                 mov ebp, eax
// 0089921d  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00899221  8b8174020000         mov eax, dword ptr [ecx + 0x274]
// 00899227  8b909c000000         mov edx, dword ptr [eax + 0x9c]
// 0089922d  c644244805           mov byte ptr [esp + 0x48], 5
// 00899232  c744242401000000     mov dword ptr [esp + 0x24], 1
// 0089923a  83faff               cmp edx, -1
// 0089923d  7513                 jne 0x899252
// 0089923f  8b805c010000         mov eax, dword ptr [eax + 0x15c]
// 00899245  85c0                 test eax, eax
// 00899247  7409                 je 0x899252
// 00899249  8bc8                 mov ecx, eax
// 0089924b  e860d3f5ff           call 0x7f65b0
// 00899250  eb02                 jmp 0x899254
// 00899252  8bc2                 mov eax, edx
// 00899254  50                   push eax
// 00899255  6a05                 push 5
// 00899257  56                   push esi
// 00899258  57                   push edi
// 00899259  8bcd                 mov ecx, ebp
// 0089925b  ff1580de9800         call dword ptr [0x98de80]
// 00899261  8b542424             mov edx, dword ptr [esp + 0x24]
// 00899265  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00899269  50                   push eax
// 0089926a  8b8274020000         mov eax, dword ptr [edx + 0x274]
// 00899270  50                   push eax
// 00899271  51                   push ecx
// 00899272  8bcb                 mov ecx, ebx
// 00899274  e837b0f7ff           call 0x8142b0
// 00899279  8bf0                 mov esi, eax
// 0089927b  eb02                 jmp 0x89927f
// 0089927d  33f6                 xor esi, esi
// 0089927f  f644242401           test byte ptr [esp + 0x24], 1
// 00899284  c7442448ffffffff     mov dword ptr [esp + 0x48], 0xffffffff
// 0089928c  740a                 je 0x899298
// 0089928e  8d4c2428             lea ecx, [esp + 0x28]
// 00899292  ff15c0de9800         call dword ptr [0x98dec0]
// 00899298  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0089929c  8b5134               mov edx, dword ptr [ecx + 0x34]
// 0089929f  83c12c               add ecx, 0x2c
// 008992a2  56                   push esi
// 008992a3  52                   push edx
// 008992a4  e8c719fdff           call 0x86ac70
// 008992a9  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 008992ad  8b442418             mov eax, dword ptr [esp + 0x18]
// 008992b1  83784402             cmp dword ptr [eax + 0x44], 2
// 008992b5  7513                 jne 0x8992ca
// 008992b7  8bcd                 mov ecx, ebp
// 008992b9  e822baffff           call 0x894ce0
// 008992be  50                   push eax
// 008992bf  8d8dc4010000         lea ecx, [ebp + 0x1c4]
// 008992c5  e8f6faffff           call 0x898dc0
// 008992ca  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 008992ce  64890d00000000       mov dword ptr fs:[0], ecx
// 008992d5  59                   pop ecx
// 008992d6  5f                   pop edi
// 008992d7  5e                   pop esi
// 008992d8  5d                   pop ebp
// 008992d9  5b                   pop ebx
// 008992da  83c438               add esp, 0x38
// 008992dd  c3                   ret 
// copied from an identical function in another client (function ?CreateKeyboardTips@CXTPRibbonBar@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Ribbon\XTPRibbonBar.cpp