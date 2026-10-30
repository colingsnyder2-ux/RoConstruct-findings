// roc 2009-12 008589f0  unit: CXTPTabClientWnd::CNavigateButtonActiveFiles  size: 709 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008589f0
//
// 008589f0  6aff                 push -1
// 008589f2  684ce19500           push 0x95e14c
// 008589f7  64a100000000         mov eax, dword ptr fs:[0]
// 008589fd  50                   push eax
// 008589fe  83ec34               sub esp, 0x34
// 00858a01  53                   push ebx
// 00858a02  55                   push ebp
// 00858a03  56                   push esi
// 00858a04  57                   push edi
// 00858a05  a10052b600           mov eax, dword ptr [0xb65200]
// 00858a0a  33c4                 xor eax, esp
// 00858a0c  50                   push eax
// 00858a0d  8d442448             lea eax, [esp + 0x48]
// 00858a11  64a300000000         mov dword ptr fs:[0], eax
// 00858a17  8bf1                 mov esi, ecx
// 00858a19  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00858a1c  8b01                 mov eax, dword ptr [ecx]
// 00858a1e  8b9054010000         mov edx, dword ptr [eax + 0x154]
// 00858a24  ffd2                 call edx
// 00858a26  8be8                 mov ebp, eax
// 00858a28  33db                 xor ebx, ebx
// 00858a2a  3beb                 cmp ebp, ebx
// 00858a2c  0f846d020000         je 0x858c9f
// 00858a32  395d5c               cmp dword ptr [ebp + 0x5c], ebx
// 00858a35  0f8564020000         jne 0x858c9f
// 00858a3b  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00858a3e  c7462401000000       mov dword ptr [esi + 0x24], 1
// 00858a45  8b01                 mov eax, dword ptr [ecx]
// 00858a47  8b5034               mov edx, dword ptr [eax + 0x34]
// 00858a4a  53                   push ebx
// 00858a4b  53                   push ebx
// 00858a4c  ffd2                 call edx
// 00858a4e  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00858a51  8b461c               mov eax, dword ptr [esi + 0x1c]
// 00858a54  8d542430             lea edx, [esp + 0x30]
// 00858a58  894c2430             mov dword ptr [esp + 0x30], ecx
// 00858a5c  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00858a5f  52                   push edx
// 00858a60  89442438             mov dword ptr [esp + 0x38], eax
// 00858a64  e857ebffff           call 0x8575c0
// 00858a69  8b4618               mov eax, dword ptr [esi + 0x18]
// 00858a6c  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 00858a6f  2b4610               sub eax, dword ptr [esi + 0x10]
// 00858a72  8b542430             mov edx, dword ptr [esp + 0x30]
// 00858a76  2b4e1c               sub ecx, dword ptr [esi + 0x1c]
// 00858a79  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 00858a7d  03c2                 add eax, edx
// 00858a7f  03cf                 add ecx, edi
// 00858a81  55                   push ebp
// 00858a82  8954243c             mov dword ptr [esp + 0x3c], edx
// 00858a86  894c2440             mov dword ptr [esp + 0x40], ecx
// 00858a8a  89442444             mov dword ptr [esp + 0x44], eax
// 00858a8e  897c2448             mov dword ptr [esp + 0x48], edi
// 00858a92  e8f98efeff           call 0x841990
// 00858a97  8be8                 mov ebp, eax
// 00858a99  6a7c                 push 0x7c
// 00858a9b  896c242c             mov dword ptr [esp + 0x2c], ebp
// 00858a9f  e8bcadf9ff           call 0x7f3860
// 00858aa4  83c408               add esp, 8
// 00858aa7  8944242c             mov dword ptr [esp + 0x2c], eax
// 00858aab  895c2450             mov dword ptr [esp + 0x50], ebx
// 00858aaf  3bc3                 cmp eax, ebx
// 00858ab1  740d                 je 0x858ac0
// 00858ab3  8bc8                 mov ecx, eax
// 00858ab5  e8663dfbff           call 0x80c820
// 00858aba  89442414             mov dword ptr [esp + 0x14], eax
// 00858abe  eb04                 jmp 0x858ac4
// 00858ac0  895c2414             mov dword ptr [esp + 0x14], ebx
// 00858ac4  8b442414             mov eax, dword ptr [esp + 0x14]
// 00858ac8  50                   push eax
// 00858ac9  8bcd                 mov ecx, ebp
// 00858acb  c7442454ffffffff     mov dword ptr [esp + 0x54], 0xffffffff
// 00858ad3  e808bbfaff           call 0x8045e0
// 00858ad8  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00858adb  33ff                 xor edi, edi
// 00858add  39595c               cmp dword ptr [ecx + 0x5c], ebx
// 00858ae0  895c2418             mov dword ptr [esp + 0x18], ebx
// 00858ae4  895c241c             mov dword ptr [esp + 0x1c], ebx
// 00858ae8  0f8e28010000         jle 0x858c16
// 00858aee  8bff                 mov edi, edi
// 00858af0  3bfb                 cmp edi, ebx
// 00858af2  8b460c               mov eax, dword ptr [esi + 0xc]
// 00858af5  7c0e                 jl 0x858b05
// 00858af7  3b785c               cmp edi, dword ptr [eax + 0x5c]
// 00858afa  7d09                 jge 0x858b05
// 00858afc  8b5058               mov edx, dword ptr [eax + 0x58]
// 00858aff  8b1cba               mov ebx, dword ptr [edx + edi*4]
// 00858b02  8d04ba               lea eax, [edx + edi*4]
// 00858b05  8d442420             lea eax, [esp + 0x20]
// 00858b09  50                   push eax
// 00858b0a  8bcb                 mov ecx, ebx
// 00858b0c  e8bf540700           call 0x8cdfd0
// 00858b11  8b8dfc000000         mov ecx, dword ptr [ebp + 0xfc]
// 00858b17  6a01                 push 1
// 00858b19  57                   push edi
// 00858b1a  8d4701               lea eax, [edi + 1]
// 00858b1d  6856fd9900           push 0x99fd56
// 00858b22  50                   push eax
// 00858b23  6a01                 push 1
// 00858b25  c744246401000000     mov dword ptr [esp + 0x64], 1
// 00858b2d  89442440             mov dword ptr [esp + 0x40], eax
// 00858b31  e82af6feff           call 0x848160
// 00858b36  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00858b39  8b11                 mov edx, dword ptr [ecx]
// 00858b3b  8be8                 mov ebp, eax
// 00858b3d  8b8264010000         mov eax, dword ptr [edx + 0x164]
// 00858b43  53                   push ebx
// 00858b44  ffd0                 call eax
// 00858b46  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00858b4a  8bf8                 mov edi, eax
// 00858b4c  397c241c             cmp dword ptr [esp + 0x1c], edi
// 00858b50  743c                 je 0x858b8e
// 00858b52  6a00                 push 0
// 00858b54  83ec08               sub esp, 8
// 00858b57  8bc4                 mov eax, esp
// 00858b59  89642428             mov dword ptr [esp + 0x28], esp
// 00858b5d  43                   inc ebx
// 00858b5e  53                   push ebx
// 00858b5f  83ec24               sub esp, 0x24
// 00858b62  8bcc                 mov ecx, esp
// 00858b64  89642450             mov dword ptr [esp + 0x50], esp
// 00858b68  6a00                 push 0
// 00858b6a  57                   push edi
// 00858b6b  895c2454             mov dword ptr [esp + 0x54], ebx
// 00858b6f  c70000000000         mov dword ptr [eax], 0
// 00858b75  c7400400000000       mov dword ptr [eax + 4], 0
// 00858b7c  e80f41fbff           call 0x80cc90
// 00858b81  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00858b85  e86667fbff           call 0x80f2f0
// 00858b8a  897c241c             mov dword ptr [esp + 0x1c], edi
// 00858b8e  399d88000000         cmp dword ptr [ebp + 0x88], ebx
// 00858b94  740f                 je 0x858ba5
// 00858b96  6a01                 push 1
// 00858b98  8bcd                 mov ecx, ebp
// 00858b9a  899d88000000         mov dword ptr [ebp + 0x88], ebx
// 00858ba0  e81bdbf9ff           call 0x7f66c0
// 00858ba5  6a00                 push 0
// 00858ba7  8d4c2424             lea ecx, [esp + 0x24]
// 00858bab  51                   push ecx
// 00858bac  8d542430             lea edx, [esp + 0x30]
// 00858bb0  52                   push edx
// 00858bb1  e8caf9feff           call 0x848580
// 00858bb6  83c40c               add esp, 0xc
// 00858bb9  8bc8                 mov ecx, eax
// 00858bbb  c644245002           mov byte ptr [esp + 0x50], 2
// 00858bc0  ff1580de9800         call dword ptr [0x98de80]
// 00858bc6  50                   push eax
// 00858bc7  8bcd                 mov ecx, ebp
// 00858bc9  e862dbf9ff           call 0x7f6730
// 00858bce  8d4c2428             lea ecx, [esp + 0x28]
// 00858bd2  c644245001           mov byte ptr [esp + 0x50], 1
// 00858bd7  ff15c0de9800         call dword ptr [0x98dec0]
// 00858bdd  6856fd9900           push 0x99fd56
// 00858be2  8d8dec000000         lea ecx, [ebp + 0xec]
// 00858be8  ff155cde9800         call dword ptr [0x98de5c]
// 00858bee  8d4c2420             lea ecx, [esp + 0x20]
// 00858bf2  c7442450ffffffff     mov dword ptr [esp + 0x50], 0xffffffff
// 00858bfa  ff15c0de9800         call dword ptr [0x98dec0]
// 00858c00  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 00858c04  8b460c               mov eax, dword ptr [esi + 0xc]
// 00858c07  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 00858c0b  33db                 xor ebx, ebx
// 00858c0d  3b785c               cmp edi, dword ptr [eax + 0x5c]
// 00858c10  0f8cdafeffff         jl 0x858af0
// 00858c16  8b5634               mov edx, dword ptr [esi + 0x34]
// 00858c19  8b442434             mov eax, dword ptr [esp + 0x34]
// 00858c1d  53                   push ebx
// 00858c1e  8d4c243c             lea ecx, [esp + 0x3c]
// 00858c22  51                   push ecx
// 00858c23  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00858c27  52                   push edx
// 00858c28  50                   push eax
// 00858c29  51                   push ecx
// 00858c2a  6882010000           push 0x182
// 00858c2f  55                   push ebp
// 00858c30  e80bd9fbff           call 0x816540
// 00858c35  83c41c               add esp, 0x1c
// 00858c38  8bcd                 mov ecx, ebp
// 00858c3a  8bf8                 mov edi, eax
// 00858c3c  e89bb1f9ff           call 0x7f3ddc
// 00858c41  8b542458             mov edx, dword ptr [esp + 0x58]
// 00858c45  83c8ff               or eax, 0xffffffff
// 00858c48  0bc8                 or ecx, eax
// 00858c4a  51                   push ecx
// 00858c4b  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00858c4e  50                   push eax
// 00858c4f  52                   push edx
// 00858c50  895e24               mov dword ptr [esi + 0x24], ebx
// 00858c53  e8e86d0700           call 0x8cfa40
// 00858c58  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00858c5b  8b01                 mov eax, dword ptr [ecx]
// 00858c5d  8b5034               mov edx, dword ptr [eax + 0x34]
// 00858c60  53                   push ebx
// 00858c61  53                   push ebx
// 00858c62  ffd2                 call edx
// 00858c64  3bfb                 cmp edi, ebx
// 00858c66  7e37                 jle 0x858c9f
// 00858c68  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00858c6b  8d47ff               lea eax, [edi - 1]
// 00858c6e  3bc3                 cmp eax, ebx
// 00858c70  7c2d                 jl 0x858c9f
// 00858c72  3b415c               cmp eax, dword ptr [ecx + 0x5c]
// 00858c75  7d28                 jge 0x858c9f
// 00858c77  8b4958               mov ecx, dword ptr [ecx + 0x58]
// 00858c7a  8b0481               mov eax, dword ptr [ecx + eax*4]
// 00858c7d  3bc3                 cmp eax, ebx
// 00858c7f  741e                 je 0x858c9f
// 00858c81  8b5060               mov edx, dword ptr [eax + 0x60]
// 00858c84  394204               cmp dword ptr [edx + 4], eax
// 00858c87  7416                 je 0x858c9f
// 00858c89  8bc8                 mov ecx, eax
// 00858c8b  e8f077eeff           call 0x740480
// 00858c90  50                   push eax
// 00858c91  e894aef9ff           call 0x7f3b2a
// 00858c96  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00858c99  50                   push eax
// 00858c9a  e891d5ffff           call 0x856230
// 00858c9f  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00858ca3  64890d00000000       mov dword ptr fs:[0], ecx
// 00858caa  59                   pop ecx
// 00858cab  5f                   pop edi
// 00858cac  5e                   pop esi
// 00858cad  5d                   pop ebp
// 00858cae  5b                   pop ebx
// 00858caf  83c440               add esp, 0x40
// 00858cb2  c20c00               ret 0xc
// copied from an identical function in another client (function ?PerformClick@CNavigateButtonActiveFiles@CXTPTabClientWnd@@UAEXPAUHWND__@@VCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\CommandBars\XTPTabClientWnd.cpp