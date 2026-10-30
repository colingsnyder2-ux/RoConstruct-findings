// roc 2009-12 00896810  unit: CXTPRibbonBar  size: 1154 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00896810
//
// 00896810  6aff                 push -1
// 00896812  6808189600           push 0x961808
// 00896817  64a100000000         mov eax, dword ptr fs:[0]
// 0089681d  50                   push eax
// 0089681e  83ec40               sub esp, 0x40
// 00896821  53                   push ebx
// 00896822  55                   push ebp
// 00896823  56                   push esi
// 00896824  57                   push edi
// 00896825  a10052b600           mov eax, dword ptr [0xb65200]
// 0089682a  33c4                 xor eax, esp
// 0089682c  50                   push eax
// 0089682d  8d442454             lea eax, [esp + 0x54]
// 00896831  64a300000000         mov dword ptr fs:[0], eax
// 00896837  8bf9                 mov edi, ecx
// 00896839  8b6c2464             mov ebp, dword ptr [esp + 0x64]
// 0089683d  6a01                 push 1
// 0089683f  8bcd                 mov ecx, ebp
// 00896841  e84afc0800           call 0x926490
// 00896846  8bcf                 mov ecx, edi
// 00896848  e843ddf6ff           call 0x804590
// 0089684d  8bcf                 mov ecx, edi
// 0089684f  89442464             mov dword ptr [esp + 0x64], eax
// 00896853  e818e4ffff           call 0x894c70
// 00896858  8b10                 mov edx, dword ptr [eax]
// 0089685a  57                   push edi
// 0089685b  8bc8                 mov ecx, eax
// 0089685d  8b823c010000         mov eax, dword ptr [edx + 0x13c]
// 00896863  55                   push ebp
// 00896864  ffd0                 call eax
// 00896866  8bcf                 mov ecx, edi
// 00896868  e863e4ffff           call 0x894cd0
// 0089686d  85c0                 test eax, eax
// 0089686f  743c                 je 0x8968ad
// 00896871  8d4c2468             lea ecx, [esp + 0x68]
// 00896875  51                   push ecx
// 00896876  8d97fc010000         lea edx, [edi + 0x1fc]
// 0089687c  52                   push edx
// 0089687d  8d44244c             lea eax, [esp + 0x4c]
// 00896881  50                   push eax
// 00896882  ff15dcca9800         call dword ptr [0x98cadc]
// 00896888  85c0                 test eax, eax
// 0089688a  7421                 je 0x8968ad
// 0089688c  8bcf                 mov ecx, edi
// 0089688e  e8dde3ffff           call 0x894c70
// 00896893  8b8f80020000         mov ecx, dword ptr [edi + 0x280]
// 00896899  8b4918               mov ecx, dword ptr [ecx + 0x18]
// 0089689c  8b10                 mov edx, dword ptr [eax]
// 0089689e  8b9254010000         mov edx, dword ptr [edx + 0x154]
// 008968a4  51                   push ecx
// 008968a5  57                   push edi
// 008968a6  55                   push ebp
// 008968a7  8bc8                 mov ecx, eax
// 008968a9  ffd2                 call edx
// 008968ab  eb39                 jmp 0x8968e6
// 008968ad  83bf9002000000       cmp dword ptr [edi + 0x290], 0
// 008968b4  7430                 je 0x8968e6
// 008968b6  8d442468             lea eax, [esp + 0x68]
// 008968ba  50                   push eax
// 008968bb  8d8ffc010000         lea ecx, [edi + 0x1fc]
// 008968c1  51                   push ecx
// 008968c2  8d54244c             lea edx, [esp + 0x4c]
// 008968c6  52                   push edx
// 008968c7  ff15dcca9800         call dword ptr [0x98cadc]
// 008968cd  85c0                 test eax, eax
// 008968cf  7415                 je 0x8968e6
// 008968d1  8bcf                 mov ecx, edi
// 008968d3  e898e3ffff           call 0x894c70
// 008968d8  8b10                 mov edx, dword ptr [eax]
// 008968da  57                   push edi
// 008968db  8bc8                 mov ecx, eax
// 008968dd  8b8258010000         mov eax, dword ptr [edx + 0x158]
// 008968e3  55                   push ebp
// 008968e4  ffd0                 call eax
// 008968e6  8bcf                 mov ecx, edi
// 008968e8  e8f3e3ffff           call 0x894ce0
// 008968ed  8bd8                 mov ebx, eax
// 008968ef  895c2418             mov dword ptr [esp + 0x18], ebx
// 008968f3  e868e5ffff           call 0x894e60
// 008968f8  85c0                 test eax, eax
// 008968fa  743b                 je 0x896937
// 008968fc  e86fe3ffff           call 0x894c70
// 00896901  8b8fec010000         mov ecx, dword ptr [edi + 0x1ec]
// 00896907  8b30                 mov esi, dword ptr [eax]
// 00896909  83ec10               sub esp, 0x10
// 0089690c  8bd4                 mov edx, esp
// 0089690e  890a                 mov dword ptr [edx], ecx
// 00896910  8b8ff0010000         mov ecx, dword ptr [edi + 0x1f0]
// 00896916  894a04               mov dword ptr [edx + 4], ecx
// 00896919  8b8ff4010000         mov ecx, dword ptr [edi + 0x1f4]
// 0089691f  894a08               mov dword ptr [edx + 8], ecx
// 00896922  8b8ff8010000         mov ecx, dword ptr [edi + 0x1f8]
// 00896928  894a0c               mov dword ptr [edx + 0xc], ecx
// 0089692b  8b9638010000         mov edx, dword ptr [esi + 0x138]
// 00896931  53                   push ebx
// 00896932  55                   push ebp
// 00896933  8bc8                 mov ecx, eax
// 00896935  ffd2                 call edx
// 00896937  8b07                 mov eax, dword ptr [edi]
// 00896939  8b90a8010000         mov edx, dword ptr [eax + 0x1a8]
// 0089693f  8bcf                 mov ecx, edi
// 00896941  ffd2                 call edx
// 00896943  8bf0                 mov esi, eax
// 00896945  f7de                 neg esi
// 00896947  1bf6                 sbb esi, esi
// 00896949  8bcf                 mov ecx, edi
// 0089694b  46                   inc esi
// 0089694c  e8cfe7ffff           call 0x895120
// 00896951  89b0a0000000         mov dword ptr [eax + 0xa0], esi
// 00896957  83bf6802000000       cmp dword ptr [edi + 0x268], 0
// 0089695e  746d                 je 0x8969cd
// 00896960  8db7dc010000         lea esi, [edi + 0x1dc]
// 00896966  56                   push esi
// 00896967  8d44246c             lea eax, [esp + 0x6c]
// 0089696b  50                   push eax
// 0089696c  8d4c244c             lea ecx, [esp + 0x4c]
// 00896970  51                   push ecx
// 00896971  ff15dcca9800         call dword ptr [0x98cadc]
// 00896977  85c0                 test eax, eax
// 00896979  7452                 je 0x8969cd
// 0089697b  8b8768020000         mov eax, dword ptr [edi + 0x268]
// 00896981  85c0                 test eax, eax
// 00896983  740b                 je 0x896990
// 00896985  0584010000           add eax, 0x184
// 0089698a  89442414             mov dword ptr [esp + 0x14], eax
// 0089698e  eb08                 jmp 0x896998
// 00896990  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00896998  8bcf                 mov ecx, edi
// 0089699a  e881e7ffff           call 0x895120
// 0089699f  8b0e                 mov ecx, dword ptr [esi]
// 008969a1  8b18                 mov ebx, dword ptr [eax]
// 008969a3  83ec10               sub esp, 0x10
// 008969a6  8bd4                 mov edx, esp
// 008969a8  890a                 mov dword ptr [edx], ecx
// 008969aa  8b4e04               mov ecx, dword ptr [esi + 4]
// 008969ad  894a04               mov dword ptr [edx + 4], ecx
// 008969b0  8b4e08               mov ecx, dword ptr [esi + 8]
// 008969b3  894a08               mov dword ptr [edx + 8], ecx
// 008969b6  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 008969b9  894a0c               mov dword ptr [edx + 0xc], ecx
// 008969bc  8b542424             mov edx, dword ptr [esp + 0x24]
// 008969c0  55                   push ebp
// 008969c1  8bc8                 mov ecx, eax
// 008969c3  8b4358               mov eax, dword ptr [ebx + 0x58]
// 008969c6  52                   push edx
// 008969c7  ffd0                 call eax
// 008969c9  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 008969cd  85db                 test ebx, ebx
// 008969cf  7422                 je 0x8969f3
// 008969d1  8bcf                 mov ecx, edi
// 008969d3  e888e4ffff           call 0x894e60
// 008969d8  85c0                 test eax, eax
// 008969da  7417                 je 0x8969f3
// 008969dc  8b8b84000000         mov ecx, dword ptr [ebx + 0x84]
// 008969e2  8b4128               mov eax, dword ptr [ecx + 0x28]
// 008969e5  33db                 xor ebx, ebx
// 008969e7  894c2414             mov dword ptr [esp + 0x14], ecx
// 008969eb  85c0                 test eax, eax
// 008969ed  0f8f85000000         jg 0x896a78
// 008969f3  33f6                 xor esi, esi
// 008969f5  8bcf                 mov ecx, edi
// 008969f7  c744241401000000     mov dword ptr [esp + 0x14], 1
// 008969ff  89742418             mov dword ptr [esp + 0x18], esi
// 00896a03  e848e8f6ff           call 0x805250
// 00896a08  85c0                 test eax, eax
// 00896a0a  0f8ebf010000         jle 0x896bcf
// 00896a10  56                   push esi
// 00896a11  8bcf                 mov ecx, edi
// 00896a13  e848e8f6ff           call 0x805260
// 00896a18  8bf0                 mov esi, eax
// 00896a1a  8b16                 mov edx, dword ptr [esi]
// 00896a1c  8b8280000000         mov eax, dword ptr [edx + 0x80]
// 00896a22  6a00                 push 0
// 00896a24  8bce                 mov ecx, esi
// 00896a26  ffd0                 call eax
// 00896a28  85c0                 test eax, eax
// 00896a2a  0f8487010000         je 0x896bb7
// 00896a30  83be5801000000       cmp dword ptr [esi + 0x158], 0
// 00896a37  0f857a010000         jne 0x896bb7
// 00896a3d  83be9800000000       cmp dword ptr [esi + 0x98], 0
// 00896a44  0f84d6000000         je 0x896b20
// 00896a4a  837c241400           cmp dword ptr [esp + 0x14], 0
// 00896a4f  0f85cb000000         jne 0x896b20
// 00896a55  8b5c2464             mov ebx, dword ptr [esp + 0x64]
// 00896a59  8b13                 mov edx, dword ptr [ebx]
// 00896a5b  8b928c000000         mov edx, dword ptr [edx + 0x8c]
// 00896a61  6a01                 push 1
// 00896a63  56                   push esi
// 00896a64  57                   push edi
// 00896a65  55                   push ebp
// 00896a66  8d44242c             lea eax, [esp + 0x2c]
// 00896a6a  50                   push eax
// 00896a6b  8bcb                 mov ecx, ebx
// 00896a6d  ffd2                 call edx
// 00896a6f  e9b0000000           jmp 0x896b24
// 00896a74  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00896a78  85db                 test ebx, ebx
// 00896a7a  7c18                 jl 0x896a94
// 00896a7c  3bd8                 cmp ebx, eax
// 00896a7e  7d14                 jge 0x896a94
// 00896a80  3b5928               cmp ebx, dword ptr [ecx + 0x28]
// 00896a83  0f8d92000000         jge 0x896b1b
// 00896a89  8b4924               mov ecx, dword ptr [ecx + 0x24]
// 00896a8c  8b3499               mov esi, dword ptr [ecx + ebx*4]
// 00896a8f  8d0499               lea eax, [ecx + ebx*4]
// 00896a92  eb02                 jmp 0x896a96
// 00896a94  33f6                 xor esi, esi
// 00896a96  8bce                 mov ecx, esi
// 00896a98  e8c32a0500           call 0x8e9560
// 00896a9d  85c0                 test eax, eax
// 00896a9f  7465                 je 0x896b06
// 00896aa1  8b4638               mov eax, dword ptr [esi + 0x38]
// 00896aa4  8b5634               mov edx, dword ptr [esi + 0x34]
// 00896aa7  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 00896aaa  89542424             mov dword ptr [esp + 0x24], edx
// 00896aae  8b5640               mov edx, dword ptr [esi + 0x40]
// 00896ab1  89442428             mov dword ptr [esp + 0x28], eax
// 00896ab5  8d442424             lea eax, [esp + 0x24]
// 00896ab9  894c242c             mov dword ptr [esp + 0x2c], ecx
// 00896abd  50                   push eax
// 00896abe  8d4c246c             lea ecx, [esp + 0x6c]
// 00896ac2  89542434             mov dword ptr [esp + 0x34], edx
// 00896ac6  51                   push ecx
// 00896ac7  8d54244c             lea edx, [esp + 0x4c]
// 00896acb  52                   push edx
// 00896acc  ff15dcca9800         call dword ptr [0x98cadc]
// 00896ad2  85c0                 test eax, eax
// 00896ad4  7430                 je 0x896b06
// 00896ad6  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 00896ada  8b16                 mov edx, dword ptr [esi]
// 00896adc  8b5260               mov edx, dword ptr [edx + 0x60]
// 00896adf  83ec10               sub esp, 0x10
// 00896ae2  8bc4                 mov eax, esp
// 00896ae4  8908                 mov dword ptr [eax], ecx
// 00896ae6  8b4c247c             mov ecx, dword ptr [esp + 0x7c]
// 00896aea  894804               mov dword ptr [eax + 4], ecx
// 00896aed  8b8c2480000000       mov ecx, dword ptr [esp + 0x80]
// 00896af4  894808               mov dword ptr [eax + 8], ecx
// 00896af7  8b8c2484000000       mov ecx, dword ptr [esp + 0x84]
// 00896afe  89480c               mov dword ptr [eax + 0xc], ecx
// 00896b01  55                   push ebp
// 00896b02  8bce                 mov ecx, esi
// 00896b04  ffd2                 call edx
// 00896b06  8b442414             mov eax, dword ptr [esp + 0x14]
// 00896b0a  8b4028               mov eax, dword ptr [eax + 0x28]
// 00896b0d  43                   inc ebx
// 00896b0e  3bd8                 cmp ebx, eax
// 00896b10  0f8c5effffff         jl 0x896a74
// 00896b16  e9d8feffff           jmp 0x8969f3
// 00896b1b  e8eccff5ff           call 0x7f3b0c
// 00896b20  8b5c2464             mov ebx, dword ptr [esp + 0x64]
// 00896b24  8b86c0000000         mov eax, dword ptr [esi + 0xc0]
// 00896b2a  89442434             mov dword ptr [esp + 0x34], eax
// 00896b2e  8b8ec4000000         mov ecx, dword ptr [esi + 0xc4]
// 00896b34  894c2438             mov dword ptr [esp + 0x38], ecx
// 00896b38  8b96c8000000         mov edx, dword ptr [esi + 0xc8]
// 00896b3e  8954243c             mov dword ptr [esp + 0x3c], edx
// 00896b42  8b86cc000000         mov eax, dword ptr [esi + 0xcc]
// 00896b48  8d4c2434             lea ecx, [esp + 0x34]
// 00896b4c  51                   push ecx
// 00896b4d  8d54246c             lea edx, [esp + 0x6c]
// 00896b51  89442444             mov dword ptr [esp + 0x44], eax
// 00896b55  52                   push edx
// 00896b56  8d44242c             lea eax, [esp + 0x2c]
// 00896b5a  50                   push eax
// 00896b5b  c744242000000000     mov dword ptr [esp + 0x20], 0
// 00896b63  ff15dcca9800         call dword ptr [0x98cadc]
// 00896b69  85c0                 test eax, eax
// 00896b6b  744a                 je 0x896bb7
// 00896b6d  8b1b                 mov ebx, dword ptr [ebx]
// 00896b6f  8bce                 mov ecx, esi
// 00896b71  81c3e0000000         add ebx, 0xe0
// 00896b77  e874eeb9ff           call 0x4359f0
// 00896b7c  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 00896b80  8b13                 mov edx, dword ptr [ebx]
// 00896b82  50                   push eax
// 00896b83  57                   push edi
// 00896b84  ffd2                 call edx
// 00896b86  50                   push eax
// 00896b87  55                   push ebp
// 00896b88  8d4c244c             lea ecx, [esp + 0x4c]
// 00896b8c  e8cf4afbff           call 0x84b660
// 00896b91  8b06                 mov eax, dword ptr [esi]
// 00896b93  8b90a0000000         mov edx, dword ptr [eax + 0xa0]
// 00896b99  55                   push ebp
// 00896b9a  8bce                 mov ecx, esi
// 00896b9c  c744246000000000     mov dword ptr [esp + 0x60], 0
// 00896ba4  ffd2                 call edx
// 00896ba6  8d4c2444             lea ecx, [esp + 0x44]
// 00896baa  c744245cffffffff     mov dword ptr [esp + 0x5c], 0xffffffff
// 00896bb2  e8294bfbff           call 0x84b6e0
// 00896bb7  8b742418             mov esi, dword ptr [esp + 0x18]
// 00896bbb  46                   inc esi
// 00896bbc  8bcf                 mov ecx, edi
// 00896bbe  89742418             mov dword ptr [esp + 0x18], esi
// 00896bc2  e889e6f6ff           call 0x805250
// 00896bc7  3bf0                 cmp esi, eax
// 00896bc9  0f8c41feffff         jl 0x896a10
// 00896bcf  8bcf                 mov ecx, edi
// 00896bd1  e8fad8f6ff           call 0x8044d0
// 00896bd6  8bf0                 mov esi, eax
// 00896bd8  85f6                 test esi, esi
// 00896bda  0f849c000000         je 0x896c7c
// 00896be0  837e5c00             cmp dword ptr [esi + 0x5c], 0
// 00896be4  0f8492000000         je 0x896c7c
// 00896bea  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 00896bed  85c9                 test ecx, ecx
// 00896bef  7472                 je 0x896c63
// 00896bf1  39b900010000         cmp dword ptr [ecx + 0x100], edi
// 00896bf7  756a                 jne 0x896c63
// 00896bf9  8b01                 mov eax, dword ptr [ecx]
// 00896bfb  8b9080000000         mov edx, dword ptr [eax + 0x80]
// 00896c01  6a00                 push 0
// 00896c03  ffd2                 call edx
// 00896c05  85c0                 test eax, eax
// 00896c07  745a                 je 0x896c63
// 00896c09  8b4658               mov eax, dword ptr [esi + 0x58]
// 00896c0c  8b88c0000000         mov ecx, dword ptr [eax + 0xc0]
// 00896c12  894c2424             mov dword ptr [esp + 0x24], ecx
// 00896c16  8b90c4000000         mov edx, dword ptr [eax + 0xc4]
// 00896c1c  89542428             mov dword ptr [esp + 0x28], edx
// 00896c20  8b88c8000000         mov ecx, dword ptr [eax + 0xc8]
// 00896c26  894c242c             mov dword ptr [esp + 0x2c], ecx
// 00896c2a  8b90cc000000         mov edx, dword ptr [eax + 0xcc]
// 00896c30  6a00                 push 0
// 00896c32  6a00                 push 0
// 00896c34  8d44242c             lea eax, [esp + 0x2c]
// 00896c38  50                   push eax
// 00896c39  8bcd                 mov ecx, ebp
// 00896c3b  8954243c             mov dword ptr [esp + 0x3c], edx
// 00896c3f  e8b4d9f5ff           call 0x7f45f8
// 00896c44  6aff                 push -1
// 00896c46  6aff                 push -1
// 00896c48  8d4c242c             lea ecx, [esp + 0x2c]
// 00896c4c  51                   push ecx
// 00896c4d  ff1558ca9800         call dword ptr [0x98ca58]
// 00896c53  6a00                 push 0
// 00896c55  6a00                 push 0
// 00896c57  8d54242c             lea edx, [esp + 0x2c]
// 00896c5b  52                   push edx
// 00896c5c  8bcd                 mov ecx, ebp
// 00896c5e  e895d9f5ff           call 0x7f45f8
// 00896c63  8d873c010000         lea eax, [edi + 0x13c]
// 00896c69  50                   push eax
// 00896c6a  ff1568cc9800         call dword ptr [0x98cc68]
// 00896c70  85c0                 test eax, eax
// 00896c72  7508                 jne 0x896c7c
// 00896c74  55                   push ebp
// 00896c75  8bcf                 mov ecx, edi
// 00896c77  e884e7f6ff           call 0x805400
// 00896c7c  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 00896c80  64890d00000000       mov dword ptr fs:[0], ecx
// 00896c87  59                   pop ecx
// 00896c88  5f                   pop edi
// 00896c89  5e                   pop esi
// 00896c8a  5d                   pop ebp
// 00896c8b  5b                   pop ebx
// 00896c8c  83c44c               add esp, 0x4c
// 00896c8f  c21400               ret 0x14
// copied from an identical function in another client (function ?DrawCommandBar@CXTPRibbonBar@@UAEXPAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Ribbon\XTPRibbonBar.cpp