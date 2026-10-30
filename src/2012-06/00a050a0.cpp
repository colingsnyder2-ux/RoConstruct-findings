// roc 2012-06 00a050a0  unit: CXTPRibbonTheme  size: 739 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a050a0
//
// 00a050a0  6aff                 push -1
// 00a050a2  68e12cae00           push 0xae2ce1
// 00a050a7  64a100000000         mov eax, dword ptr fs:[0]
// 00a050ad  50                   push eax
// 00a050ae  83ec78               sub esp, 0x78
// 00a050b1  55                   push ebp
// 00a050b2  56                   push esi
// 00a050b3  57                   push edi
// 00a050b4  a1d027e000           mov eax, dword ptr [0xe027d0]
// 00a050b9  33c4                 xor eax, esp
// 00a050bb  50                   push eax
// 00a050bc  8d842488000000       lea eax, [esp + 0x88]
// 00a050c3  64a300000000         mov dword ptr fs:[0], eax
// 00a050c9  8bf9                 mov edi, ecx
// 00a050cb  8bac24b0000000       mov ebp, dword ptr [esp + 0xb0]
// 00a050d2  8bcd                 mov ecx, ebp
// 00a050d4  c784249000000000000000 mov dword ptr [esp + 0x90], 0
// 00a050df  e8ee440900           call 0xa995d2
// 00a050e4  a900000001           test eax, 0x1000000
// 00a050e9  744c                 je 0xa05137
// 00a050eb  8bb42498000000       mov esi, dword ptr [esp + 0x98]
// 00a050f2  8b06                 mov eax, dword ptr [esi]
// 00a050f4  8b5038               mov edx, dword ptr [eax + 0x38]
// 00a050f7  68ffffff00           push 0xffffff
// 00a050fc  8bce                 mov ecx, esi
// 00a050fe  ffd2                 call edx
// 00a05100  8b3e                 mov edi, dword ptr [esi]
// 00a05102  6824880000           push 0x8824
// 00a05107  8d8424a0000000       lea eax, [esp + 0xa0]
// 00a0510e  50                   push eax
// 00a0510f  8d8c24b4000000       lea ecx, [esp + 0xb4]
// 00a05116  ff155846b200         call dword ptr [0xb24658]
// 00a0511c  50                   push eax
// 00a0511d  8d8c24b8000000       lea ecx, [esp + 0xb8]
// 00a05124  ff159847b200         call dword ptr [0xb24798]
// 00a0512a  8b5770               mov edx, dword ptr [edi + 0x70]
// 00a0512d  50                   push eax
// 00a0512e  8bce                 mov ecx, esi
// 00a05130  ffd2                 call edx
// 00a05132  e924020000           jmp 0xa0535b
// 00a05137  6a00                 push 0
// 00a05139  8d4c2420             lea ecx, [esp + 0x20]
// 00a0513d  e85e03ffff           call 0x9f54a0
// 00a05142  6844c0c100           push 0xc1c044
// 00a05147  6a00                 push 0
// 00a05149  8d4c2424             lea ecx, [esp + 0x24]
// 00a0514d  c684249800000001     mov byte ptr [esp + 0x98], 1
// 00a05155  e85608ffff           call 0x9f59b0
// 00a0515a  8d4c241c             lea ecx, [esp + 0x1c]
// 00a0515e  e80d07ffff           call 0x9f5870
// 00a05163  6a00                 push 0
// 00a05165  85c0                 test eax, eax
// 00a05167  7547                 jne 0xa051b0
// 00a05169  8bb4249c000000       mov esi, dword ptr [esp + 0x9c]
// 00a05170  8b06                 mov eax, dword ptr [esi]
// 00a05172  8b5038               mov edx, dword ptr [eax + 0x38]
// 00a05175  8bce                 mov ecx, esi
// 00a05177  ffd2                 call edx
// 00a05179  8b3e                 mov edi, dword ptr [esi]
// 00a0517b  6824880000           push 0x8824
// 00a05180  8d8424a0000000       lea eax, [esp + 0xa0]
// 00a05187  50                   push eax
// 00a05188  8d8c24b4000000       lea ecx, [esp + 0xb4]
// 00a0518f  ff155846b200         call dword ptr [0xb24658]
// 00a05195  50                   push eax
// 00a05196  8d8c24b8000000       lea ecx, [esp + 0xb8]
// 00a0519d  ff159847b200         call dword ptr [0xb24798]
// 00a051a3  8b5770               mov edx, dword ptr [edi + 0x70]
// 00a051a6  50                   push eax
// 00a051a7  8bce                 mov ecx, esi
// 00a051a9  ffd2                 call edx
// 00a051ab  e99a010000           jmp 0xa0534a
// 00a051b0  8b8c24a4000000       mov ecx, dword ptr [esp + 0xa4]
// 00a051b7  8b8424a0000000       mov eax, dword ptr [esp + 0xa0]
// 00a051be  8b9424a8000000       mov edx, dword ptr [esp + 0xa8]
// 00a051c5  894c2430             mov dword ptr [esp + 0x30], ecx
// 00a051c9  8944242c             mov dword ptr [esp + 0x2c], eax
// 00a051cd  8b8424ac000000       mov eax, dword ptr [esp + 0xac]
// 00a051d4  6a05                 push 5
// 00a051d6  8d4c2430             lea ecx, [esp + 0x30]
// 00a051da  51                   push ecx
// 00a051db  8954243c             mov dword ptr [esp + 0x3c], edx
// 00a051df  89442440             mov dword ptr [esp + 0x40], eax
// 00a051e3  ff154c3bb200         call dword ptr [0xb23b4c]
// 00a051e9  8b842498000000       mov eax, dword ptr [esp + 0x98]
// 00a051f0  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00a051f8  85c0                 test eax, eax
// 00a051fa  7403                 je 0xa051ff
// 00a051fc  8b4004               mov eax, dword ptr [eax + 4]
// 00a051ff  8d542410             lea edx, [esp + 0x10]
// 00a05203  52                   push edx
// 00a05204  6a00                 push 0
// 00a05206  6a02                 push 2
// 00a05208  8d4c2434             lea ecx, [esp + 0x34]
// 00a0520c  51                   push ecx
// 00a0520d  50                   push eax
// 00a0520e  8d4c2430             lea ecx, [esp + 0x30]
// 00a05212  e85909ffff           call 0x9f5b70
// 00a05217  8b742410             mov esi, dword ptr [esp + 0x10]
// 00a0521b  89442418             mov dword ptr [esp + 0x18], eax
// 00a0521f  85f6                 test esi, esi
// 00a05221  0f8413010000         je 0xa0533a
// 00a05227  8b842498000000       mov eax, dword ptr [esp + 0x98]
// 00a0522e  85c0                 test eax, eax
// 00a05230  7504                 jne 0xa05236
// 00a05232  33d2                 xor edx, edx
// 00a05234  eb03                 jmp 0xa05239
// 00a05236  8b5004               mov edx, dword ptr [eax + 4]
// 00a05239  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00a0523d  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00a05241  682000cc00           push 0xcc0020
// 00a05246  50                   push eax
// 00a05247  51                   push ecx
// 00a05248  52                   push edx
// 00a05249  8b542444             mov edx, dword ptr [esp + 0x44]
// 00a0524d  2bd0                 sub edx, eax
// 00a0524f  52                   push edx
// 00a05250  8b542444             mov edx, dword ptr [esp + 0x44]
// 00a05254  2bd1                 sub edx, ecx
// 00a05256  52                   push edx
// 00a05257  50                   push eax
// 00a05258  51                   push ecx
// 00a05259  56                   push esi
// 00a0525a  ff156421b200         call dword ptr [0xb22164]
// 00a05260  8b442410             mov eax, dword ptr [esp + 0x10]
// 00a05264  6a00                 push 0
// 00a05266  50                   push eax
// 00a05267  ff15d020b200         call dword ptr [0xb220d0]
// 00a0526d  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00a05271  81c7b4050000         add edi, 0x5b4
// 00a05277  57                   push edi
// 00a05278  51                   push ecx
// 00a05279  c744245040000000     mov dword ptr [esp + 0x50], 0x40
// 00a05281  c744245400280000     mov dword ptr [esp + 0x54], 0x2800
// 00a05289  c784248400000008000000 mov dword ptr [esp + 0x84], 8
// 00a05294  e8d9420900           call 0xa99572
// 00a05299  50                   push eax
// 00a0529a  8d4c2440             lea ecx, [esp + 0x40]
// 00a0529e  e88d02fdff           call 0x9d5530
// 00a052a3  8d8c24ac000000       lea ecx, [esp + 0xac]
// 00a052aa  c684249000000002     mov byte ptr [esp + 0x90], 2
// 00a052b2  ff159847b200         call dword ptr [0xb24798]
// 00a052b8  50                   push eax
// 00a052b9  8d4c2418             lea ecx, [esp + 0x18]
// 00a052bd  e81e33ffff           call 0x9f85e0
// 00a052c2  8d542448             lea edx, [esp + 0x48]
// 00a052c6  52                   push edx
// 00a052c7  8d8c24a0000000       lea ecx, [esp + 0xa0]
// 00a052ce  51                   push ecx
// 00a052cf  6824880000           push 0x8824
// 00a052d4  6aff                 push -1
// 00a052d6  8bc8                 mov ecx, eax
// 00a052d8  c68424a000000003     mov byte ptr [esp + 0xa0], 3
// 00a052e0  e83b89a7ff           call 0x47dc20
// 00a052e5  8b9424c4000000       mov edx, dword ptr [esp + 0xc4]
// 00a052ec  f7da                 neg edx
// 00a052ee  1bd2                 sbb edx, edx
// 00a052f0  50                   push eax
// 00a052f1  83c202               add edx, 2
// 00a052f4  52                   push edx
// 00a052f5  8bcd                 mov ecx, ebp
// 00a052f7  e8d6420900           call 0xa995d2
// 00a052fc  2500000001           and eax, 0x1000000
// 00a05301  0d00004000           or eax, 0x400000
// 00a05306  c1e816               shr eax, 0x16
// 00a05309  50                   push eax
// 00a0530a  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00a0530e  50                   push eax
// 00a0530f  8d4c243c             lea ecx, [esp + 0x3c]
// 00a05313  e88807ffff           call 0x9f5aa0
// 00a05318  8d4c2414             lea ecx, [esp + 0x14]
// 00a0531c  c684249000000002     mov byte ptr [esp + 0x90], 2
// 00a05324  e8272affff           call 0x9f7d50
// 00a05329  8d4c2438             lea ecx, [esp + 0x38]
// 00a0532d  c684249000000001     mov byte ptr [esp + 0x90], 1
// 00a05335  e87602fdff           call 0x9d55b0
// 00a0533a  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00a0533e  6a01                 push 1
// 00a05340  51                   push ecx
// 00a05341  8d4c2424             lea ecx, [esp + 0x24]
// 00a05345  e8d608ffff           call 0x9f5c20
// 00a0534a  8d4c241c             lea ecx, [esp + 0x1c]
// 00a0534e  c684249000000000     mov byte ptr [esp + 0x90], 0
// 00a05356  e8750affff           call 0x9f5dd0
// 00a0535b  8d8c24ac000000       lea ecx, [esp + 0xac]
// 00a05362  ff15d047b200         call dword ptr [0xb247d0]
// 00a05368  8b8c2488000000       mov ecx, dword ptr [esp + 0x88]
// 00a0536f  64890d00000000       mov dword ptr fs:[0], ecx
// 00a05376  59                   pop ecx
// 00a05377  5f                   pop edi
// 00a05378  5e                   pop esi
// 00a05379  5d                   pop ebp
// 00a0537a  81c484000000         add esp, 0x84
// 00a05380  c22000               ret 0x20
// copied from an identical function in another client (function ?DrawDwmCaptionText@CXTPRibbonTheme@@IAEXPAVCDC@@VCRect@@V?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@PAVCWnd@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/Ribbon/XTPRibbonTheme.cpp