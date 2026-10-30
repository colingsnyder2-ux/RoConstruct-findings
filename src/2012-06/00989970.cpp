// roc 2012-06 00989970  unit: CXTPPaintManager  size: 903 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00989970
//
// 00989970  6aff                 push -1
// 00989972  68e2c0ad00           push 0xadc0e2
// 00989977  64a100000000         mov eax, dword ptr fs:[0]
// 0098997d  50                   push eax
// 0098997e  83ec1c               sub esp, 0x1c
// 00989981  53                   push ebx
// 00989982  55                   push ebp
// 00989983  56                   push esi
// 00989984  57                   push edi
// 00989985  a1d027e000           mov eax, dword ptr [0xe027d0]
// 0098998a  33c4                 xor eax, esp
// 0098998c  50                   push eax
// 0098998d  8d442430             lea eax, [esp + 0x30]
// 00989991  64a300000000         mov dword ptr fs:[0], eax
// 00989997  8bd9                 mov ebx, ecx
// 00989999  8b742448             mov esi, dword ptr [esp + 0x48]
// 0098999d  8b06                 mov eax, dword ptr [esi]
// 0098999f  8b5058               mov edx, dword ptr [eax + 0x58]
// 009899a2  8d4c2414             lea ecx, [esp + 0x14]
// 009899a6  51                   push ecx
// 009899a7  8bce                 mov ecx, esi
// 009899a9  ffd2                 call edx
// 009899ab  8d442414             lea eax, [esp + 0x14]
// 009899af  50                   push eax
// 009899b0  8d4c244c             lea ecx, [esp + 0x4c]
// 009899b4  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 009899bc  ff158047b200         call dword ptr [0xb24780]
// 009899c2  8d4c2448             lea ecx, [esp + 0x48]
// 009899c6  51                   push ecx
// 009899c7  c644243c01           mov byte ptr [esp + 0x3c], 1
// 009899cc  e84fe1ffff           call 0x987b20
// 009899d1  83c404               add esp, 4
// 009899d4  837c245c00           cmp dword ptr [esp + 0x5c], 0
// 009899d9  0f85c6000000         jne 0x989aa5
// 009899df  8d4c2448             lea ecx, [esp + 0x48]
// 009899e3  ff156046b200         call dword ptr [0xb24660]
// 009899e9  84c0                 test al, al
// 009899eb  7407                 je 0x9899f4
// 009899ed  b8ecf3b400           mov eax, 0xb4f3ec
// 009899f2  eb0a                 jmp 0x9899fe
// 009899f4  8d4c2448             lea ecx, [esp + 0x48]
// 009899f8  ff159847b200         call dword ptr [0xb24798]
// 009899fe  50                   push eax
// 009899ff  8d4c2468             lea ecx, [esp + 0x68]
// 00989a03  ff15c847b200         call dword ptr [0xb247c8]
// 00989a09  8d542420             lea edx, [esp + 0x20]
// 00989a0d  52                   push edx
// 00989a0e  8d4c2468             lea ecx, [esp + 0x68]
// 00989a12  ff155846b200         call dword ptr [0xb24658]
// 00989a18  50                   push eax
// 00989a19  8d4c246c             lea ecx, [esp + 0x6c]
// 00989a1d  ff159847b200         call dword ptr [0xb24798]
// 00989a23  50                   push eax
// 00989a24  8b442450             mov eax, dword ptr [esp + 0x50]
// 00989a28  8b4808               mov ecx, dword ptr [eax + 8]
// 00989a2b  51                   push ecx
// 00989a2c  ff154021b200         call dword ptr [0xb22140]
// 00989a32  8b742420             mov esi, dword ptr [esp + 0x20]
// 00989a36  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00989a3a  8d4c2464             lea ecx, [esp + 0x64]
// 00989a3e  89742418             mov dword ptr [esp + 0x18], esi
// 00989a42  897c241c             mov dword ptr [esp + 0x1c], edi
// 00989a46  ff15d047b200         call dword ptr [0xb247d0]
// 00989a4c  837c246800           cmp dword ptr [esp + 0x68], 0
// 00989a51  7415                 je 0x989a68
// 00989a53  33d2                 xor edx, edx
// 00989a55  39938c000000         cmp dword ptr [ebx + 0x8c], edx
// 00989a5b  0f94c2               sete dl
// 00989a5e  8d541208             lea edx, [edx + edx + 8]
// 00989a62  03f2                 add esi, edx
// 00989a64  89742418             mov dword ptr [esp + 0x18], esi
// 00989a68  837c246000           cmp dword ptr [esp + 0x60], 0
// 00989a6d  741f                 je 0x989a8e
// 00989a6f  89742424             mov dword ptr [esp + 0x24], esi
// 00989a73  8b742440             mov esi, dword ptr [esp + 0x40]
// 00989a77  8d442420             lea eax, [esp + 0x20]
// 00989a7b  897c2420             mov dword ptr [esp + 0x20], edi
// 00989a7f  8b08                 mov ecx, dword ptr [eax]
// 00989a81  8b5004               mov edx, dword ptr [eax + 4]
// 00989a84  890e                 mov dword ptr [esi], ecx
// 00989a86  895604               mov dword ptr [esi + 4], edx
// 00989a89  e93d020000           jmp 0x989ccb
// 00989a8e  8b742440             mov esi, dword ptr [esp + 0x40]
// 00989a92  8d442418             lea eax, [esp + 0x18]
// 00989a96  8b08                 mov ecx, dword ptr [eax]
// 00989a98  8b5004               mov edx, dword ptr [eax + 4]
// 00989a9b  890e                 mov dword ptr [esi], ecx
// 00989a9d  895604               mov dword ptr [esi + 4], edx
// 00989aa0  e926020000           jmp 0x989ccb
// 00989aa5  837c246000           cmp dword ptr [esp + 0x60], 0
// 00989aaa  8b6c2444             mov ebp, dword ptr [esp + 0x44]
// 00989aae  0f85e0000000         jne 0x989b94
// 00989ab4  8d442448             lea eax, [esp + 0x48]
// 00989ab8  50                   push eax
// 00989ab9  8d4c2424             lea ecx, [esp + 0x24]
// 00989abd  51                   push ecx
// 00989abe  8bcd                 mov ecx, ebp
// 00989ac0  e81b4ab1ff           call 0x49e4e0
// 00989ac5  8b7c2468             mov edi, dword ptr [esp + 0x68]
// 00989ac9  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 00989acd  f7df                 neg edi
// 00989acf  1bff                 sbb edi, edi
// 00989ad1  83e705               and edi, 5
// 00989ad4  0338                 add edi, dword ptr [eax]
// 00989ad6  837c246400           cmp dword ptr [esp + 0x64], 0
// 00989adb  7411                 je 0x989aee
// 00989add  8bc1                 mov eax, ecx
// 00989adf  2b44244c             sub eax, dword ptr [esp + 0x4c]
// 00989ae3  2bc7                 sub eax, edi
// 00989ae5  99                   cdq 
// 00989ae6  2bc2                 sub eax, edx
// 00989ae8  d1f8                 sar eax, 1
// 00989aea  0144244c             add dword ptr [esp + 0x4c], eax
// 00989aee  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 00989af2  6a00                 push 0
// 00989af4  6a00                 push 0
// 00989af6  83ec10               sub esp, 0x10
// 00989af9  8bc4                 mov eax, esp
// 00989afb  8910                 mov dword ptr [eax], edx
// 00989afd  8b542468             mov edx, dword ptr [esp + 0x68]
// 00989b01  895004               mov dword ptr [eax + 4], edx
// 00989b04  894808               mov dword ptr [eax + 8], ecx
// 00989b07  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 00989b0b  89480c               mov dword ptr [eax + 0xc], ecx
// 00989b0e  8d542460             lea edx, [esp + 0x60]
// 00989b12  52                   push edx
// 00989b13  8d442430             lea eax, [esp + 0x30]
// 00989b17  50                   push eax
// 00989b18  56                   push esi
// 00989b19  55                   push ebp
// 00989b1a  8bcb                 mov ecx, ebx
// 00989b1c  e88ff5ffff           call 0x9890b0
// 00989b21  837c246800           cmp dword ptr [esp + 0x68], 0
// 00989b26  0f848e010000         je 0x989cba
// 00989b2c  8b542450             mov edx, dword ptr [esp + 0x50]
// 00989b30  8b442458             mov eax, dword ptr [esp + 0x58]
// 00989b34  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00989b38  03c2                 add eax, edx
// 00989b3a  99                   cdq 
// 00989b3b  03cf                 add ecx, edi
// 00989b3d  2bc2                 sub eax, edx
// 00989b3f  8bf8                 mov edi, eax
// 00989b41  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 00989b47  d1ff                 sar edi, 1
// 00989b49  894c2420             mov dword ptr [esp + 0x20], ecx
// 00989b4d  83f8ff               cmp eax, -1
// 00989b50  750f                 jne 0x989b61
// 00989b52  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 00989b58  85c9                 test ecx, ecx
// 00989b5a  7405                 je 0x989b61
// 00989b5c  e8bfb3ffff           call 0x984f20
// 00989b61  8b16                 mov edx, dword ptr [esi]
// 00989b63  8b2b                 mov ebp, dword ptr [ebx]
// 00989b65  6a00                 push 0
// 00989b67  50                   push eax
// 00989b68  8b82b4000000         mov eax, dword ptr [edx + 0xb4]
// 00989b6e  8bce                 mov ecx, esi
// 00989b70  ffd0                 call eax
// 00989b72  8b16                 mov edx, dword ptr [esi]
// 00989b74  50                   push eax
// 00989b75  8b426c               mov eax, dword ptr [edx + 0x6c]
// 00989b78  8bce                 mov ecx, esi
// 00989b7a  ffd0                 call eax
// 00989b7c  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00989b80  8b542450             mov edx, dword ptr [esp + 0x50]
// 00989b84  50                   push eax
// 00989b85  8b85f4000000         mov eax, dword ptr [ebp + 0xf4]
// 00989b8b  57                   push edi
// 00989b8c  51                   push ecx
// 00989b8d  56                   push esi
// 00989b8e  52                   push edx
// 00989b8f  e922010000           jmp 0x989cb6
// 00989b94  8b542450             mov edx, dword ptr [esp + 0x50]
// 00989b98  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00989b9c  8b442454             mov eax, dword ptr [esp + 0x54]
// 00989ba0  894c2420             mov dword ptr [esp + 0x20], ecx
// 00989ba4  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 00989ba8  89542424             mov dword ptr [esp + 0x24], edx
// 00989bac  8d542448             lea edx, [esp + 0x48]
// 00989bb0  89442428             mov dword ptr [esp + 0x28], eax
// 00989bb4  52                   push edx
// 00989bb5  8d44241c             lea eax, [esp + 0x1c]
// 00989bb9  894c2430             mov dword ptr [esp + 0x30], ecx
// 00989bbd  50                   push eax
// 00989bbe  8bcd                 mov ecx, ebp
// 00989bc0  e81b49b1ff           call 0x49e4e0
// 00989bc5  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 00989bc9  8b7c2454             mov edi, dword ptr [esp + 0x54]
// 00989bcd  f7d9                 neg ecx
// 00989bcf  1bc9                 sbb ecx, ecx
// 00989bd1  8bc7                 mov eax, edi
// 00989bd3  2b44241c             sub eax, dword ptr [esp + 0x1c]
// 00989bd7  83e105               and ecx, 5
// 00989bda  2b44244c             sub eax, dword ptr [esp + 0x4c]
// 00989bde  014c2418             add dword ptr [esp + 0x18], ecx
// 00989be2  40                   inc eax
// 00989be3  99                   cdq 
// 00989be4  2bc2                 sub eax, edx
// 00989be6  d1f8                 sar eax, 1
// 00989be8  8bcf                 mov ecx, edi
// 00989bea  2bc8                 sub ecx, eax
// 00989bec  837c246400           cmp dword ptr [esp + 0x64], 0
// 00989bf1  894c244c             mov dword ptr [esp + 0x4c], ecx
// 00989bf5  7416                 je 0x989c0d
// 00989bf7  8b442458             mov eax, dword ptr [esp + 0x58]
// 00989bfb  2b442450             sub eax, dword ptr [esp + 0x50]
// 00989bff  2b442418             sub eax, dword ptr [esp + 0x18]
// 00989c03  40                   inc eax
// 00989c04  99                   cdq 
// 00989c05  2bc2                 sub eax, edx
// 00989c07  d1f8                 sar eax, 1
// 00989c09  01442450             add dword ptr [esp + 0x50], eax
// 00989c0d  8b542460             mov edx, dword ptr [esp + 0x60]
// 00989c11  6a00                 push 0
// 00989c13  52                   push edx
// 00989c14  8b542460             mov edx, dword ptr [esp + 0x60]
// 00989c18  83ec10               sub esp, 0x10
// 00989c1b  8bc4                 mov eax, esp
// 00989c1d  8908                 mov dword ptr [eax], ecx
// 00989c1f  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 00989c23  894804               mov dword ptr [eax + 4], ecx
// 00989c26  897808               mov dword ptr [eax + 8], edi
// 00989c29  89500c               mov dword ptr [eax + 0xc], edx
// 00989c2c  8d442460             lea eax, [esp + 0x60]
// 00989c30  50                   push eax
// 00989c31  8d4c2430             lea ecx, [esp + 0x30]
// 00989c35  51                   push ecx
// 00989c36  56                   push esi
// 00989c37  55                   push ebp
// 00989c38  8bcb                 mov ecx, ebx
// 00989c3a  e871f4ffff           call 0x9890b0
// 00989c3f  837c246800           cmp dword ptr [esp + 0x68], 0
// 00989c44  7474                 je 0x989cba
// 00989c46  8b542428             mov edx, dword ptr [esp + 0x28]
// 00989c4a  8b442420             mov eax, dword ptr [esp + 0x20]
// 00989c4e  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 00989c52  03c2                 add eax, edx
// 00989c54  99                   cdq 
// 00989c55  2bc2                 sub eax, edx
// 00989c57  8b542418             mov edx, dword ptr [esp + 0x18]
// 00989c5b  8bf8                 mov edi, eax
// 00989c5d  8d4411ff             lea eax, [ecx + edx - 1]
// 00989c61  89442424             mov dword ptr [esp + 0x24], eax
// 00989c65  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 00989c6b  d1ff                 sar edi, 1
// 00989c6d  83f8ff               cmp eax, -1
// 00989c70  750f                 jne 0x989c81
// 00989c72  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 00989c78  85c9                 test ecx, ecx
// 00989c7a  7405                 je 0x989c81
// 00989c7c  e89fb2ffff           call 0x984f20
// 00989c81  8b542460             mov edx, dword ptr [esp + 0x60]
// 00989c85  8b0b                 mov ecx, dword ptr [ebx]
// 00989c87  52                   push edx
// 00989c88  50                   push eax
// 00989c89  8b06                 mov eax, dword ptr [esi]
// 00989c8b  8b90b4000000         mov edx, dword ptr [eax + 0xb4]
// 00989c91  894c2470             mov dword ptr [esp + 0x70], ecx
// 00989c95  8bce                 mov ecx, esi
// 00989c97  ffd2                 call edx
// 00989c99  50                   push eax
// 00989c9a  8b06                 mov eax, dword ptr [esi]
// 00989c9c  8b506c               mov edx, dword ptr [eax + 0x6c]
// 00989c9f  8bce                 mov ecx, esi
// 00989ca1  ffd2                 call edx
// 00989ca3  8b542474             mov edx, dword ptr [esp + 0x74]
// 00989ca7  50                   push eax
// 00989ca8  8b442434             mov eax, dword ptr [esp + 0x34]
// 00989cac  50                   push eax
// 00989cad  8b82f4000000         mov eax, dword ptr [edx + 0xf4]
// 00989cb3  57                   push edi
// 00989cb4  56                   push esi
// 00989cb5  55                   push ebp
// 00989cb6  8bcb                 mov ecx, ebx
// 00989cb8  ffd0                 call eax
// 00989cba  8b742440             mov esi, dword ptr [esp + 0x40]
// 00989cbe  c70600000000         mov dword ptr [esi], 0
// 00989cc4  c7460400000000       mov dword ptr [esi + 4], 0
// 00989ccb  8d4c2448             lea ecx, [esp + 0x48]
// 00989ccf  ff15d047b200         call dword ptr [0xb247d0]
// 00989cd5  8d4c2414             lea ecx, [esp + 0x14]
// 00989cd9  ff15d047b200         call dword ptr [0xb247d0]
// 00989cdf  8bc6                 mov eax, esi
// 00989ce1  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00989ce5  64890d00000000       mov dword ptr fs:[0], ecx
// 00989cec  59                   pop ecx
// 00989ced  5f                   pop edi
// 00989cee  5e                   pop esi
// 00989cef  5d                   pop ebp
// 00989cf0  5b                   pop ebx
// 00989cf1  83c428               add esp, 0x28
// 00989cf4  c22c00               ret 0x2c
// copied from an identical function in another client (function ?DrawControlText@CXTPPaintManager@@QAE?AVCSize@@PAVCDC@@PAVCXTPControl@@VCRect@@HHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPPaintManager.cpp