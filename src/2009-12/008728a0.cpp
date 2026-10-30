// roc 2009-12 008728a0  unit: CXTPRibbonTheme  size: 649 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008728a0
//
// 008728a0  6aff                 push -1
// 008728a2  6821ff9500           push 0x95ff21
// 008728a7  64a100000000         mov eax, dword ptr fs:[0]
// 008728ad  50                   push eax
// 008728ae  83ec68               sub esp, 0x68
// 008728b1  53                   push ebx
// 008728b2  55                   push ebp
// 008728b3  56                   push esi
// 008728b4  57                   push edi
// 008728b5  a10052b600           mov eax, dword ptr [0xb65200]
// 008728ba  33c4                 xor eax, esp
// 008728bc  50                   push eax
// 008728bd  8d44247c             lea eax, [esp + 0x7c]
// 008728c1  64a300000000         mov dword ptr fs:[0], eax
// 008728c7  8be9                 mov ebp, ecx
// 008728c9  896c2418             mov dword ptr [esp + 0x18], ebp
// 008728cd  8bbc2490000000       mov edi, dword ptr [esp + 0x90]
// 008728d4  8b7740               mov esi, dword ptr [edi + 0x40]
// 008728d7  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 008728da  8b573c               mov edx, dword ptr [edi + 0x3c]
// 008728dd  8b5f38               mov ebx, dword ptr [edi + 0x38]
// 008728e0  8bc6                 mov eax, esi
// 008728e2  2b8560060000         sub eax, dword ptr [ebp + 0x660]
// 008728e8  894c243c             mov dword ptr [esp + 0x3c], ecx
// 008728ec  89442448             mov dword ptr [esp + 0x48], eax
// 008728f0  89442420             mov dword ptr [esp + 0x20], eax
// 008728f4  8b4770               mov eax, dword ptr [edi + 0x70]
// 008728f7  895c2440             mov dword ptr [esp + 0x40], ebx
// 008728fb  89542444             mov dword ptr [esp + 0x44], edx
// 008728ff  894c241c             mov dword ptr [esp + 0x1c], ecx
// 00872903  89542424             mov dword ptr [esp + 0x24], edx
// 00872907  89742428             mov dword ptr [esp + 0x28], esi
// 0087290b  85c0                 test eax, eax
// 0087290d  0f8500020000         jne 0x872b13
// 00872913  8bcf                 mov ecx, edi
// 00872915  e8e66b0700           call 0x8e9500
// 0087291a  83b89400000000       cmp dword ptr [eax + 0x94], 0
// 00872921  8bcd                 mov ecx, ebp
// 00872923  7511                 jne 0x872936
// 00872925  68f412a000           push 0xa012f4
// 0087292a  e8d1c30000           call 0x87ed00
// 0087292f  68e012a000           push 0xa012e0
// 00872934  eb0f                 jmp 0x872945
// 00872936  68c812a000           push 0xa012c8
// 0087293b  e8c0c30000           call 0x87ed00
// 00872940  68b012a000           push 0xa012b0
// 00872945  8bcd                 mov ecx, ebp
// 00872947  8bd8                 mov ebx, eax
// 00872949  e8b2c30000           call 0x87ed00
// 0087294e  8bcf                 mov ecx, edi
// 00872950  89442414             mov dword ptr [esp + 0x14], eax
// 00872954  e8b76b0700           call 0x8e9510
// 00872959  8bac248c000000       mov ebp, dword ptr [esp + 0x8c]
// 00872960  8bf0                 mov esi, eax
// 00872962  f7de                 neg esi
// 00872964  1bf6                 sbb esi, esi
// 00872966  f7de                 neg esi
// 00872968  85db                 test ebx, ebx
// 0087296a  744c                 je 0x8729b8
// 0087296c  6a02                 push 2
// 0087296e  56                   push esi
// 0087296f  8d442454             lea eax, [esp + 0x54]
// 00872973  50                   push eax
// 00872974  8bcb                 mov ecx, ebx
// 00872976  e845df0600           call 0x8e08c0
// 0087297b  83ec10               sub esp, 0x10
// 0087297e  8bcc                 mov ecx, esp
// 00872980  ba05000000           mov edx, 5
// 00872985  8911                 mov dword ptr [ecx], edx
// 00872987  895104               mov dword ptr [ecx + 4], edx
// 0087298a  895108               mov dword ptr [ecx + 8], edx
// 0087298d  89510c               mov dword ptr [ecx + 0xc], edx
// 00872990  8b10                 mov edx, dword ptr [eax]
// 00872992  83ec10               sub esp, 0x10
// 00872995  8bcc                 mov ecx, esp
// 00872997  8911                 mov dword ptr [ecx], edx
// 00872999  8b5004               mov edx, dword ptr [eax + 4]
// 0087299c  895104               mov dword ptr [ecx + 4], edx
// 0087299f  8b5008               mov edx, dword ptr [eax + 8]
// 008729a2  8b400c               mov eax, dword ptr [eax + 0xc]
// 008729a5  895108               mov dword ptr [ecx + 8], edx
// 008729a8  89410c               mov dword ptr [ecx + 0xc], eax
// 008729ab  8d4c245c             lea ecx, [esp + 0x5c]
// 008729af  51                   push ecx
// 008729b0  55                   push ebp
// 008729b1  8bcb                 mov ecx, ebx
// 008729b3  e8d8d70600           call 0x8e0190
// 008729b8  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008729bc  85c9                 test ecx, ecx
// 008729be  7452                 je 0x872a12
// 008729c0  6a02                 push 2
// 008729c2  56                   push esi
// 008729c3  8d542474             lea edx, [esp + 0x74]
// 008729c7  bb05000000           mov ebx, 5
// 008729cc  52                   push edx
// 008729cd  895c2464             mov dword ptr [esp + 0x64], ebx
// 008729d1  e8eade0600           call 0x8e08c0
// 008729d6  83ec10               sub esp, 0x10
// 008729d9  8bcc                 mov ecx, esp
// 008729db  8919                 mov dword ptr [ecx], ebx
// 008729dd  8bd3                 mov edx, ebx
// 008729df  895104               mov dword ptr [ecx + 4], edx
// 008729e2  895108               mov dword ptr [ecx + 8], edx
// 008729e5  89510c               mov dword ptr [ecx + 0xc], edx
// 008729e8  8b10                 mov edx, dword ptr [eax]
// 008729ea  83ec10               sub esp, 0x10
// 008729ed  8bcc                 mov ecx, esp
// 008729ef  8911                 mov dword ptr [ecx], edx
// 008729f1  8b5004               mov edx, dword ptr [eax + 4]
// 008729f4  895104               mov dword ptr [ecx + 4], edx
// 008729f7  8b5008               mov edx, dword ptr [eax + 8]
// 008729fa  8b400c               mov eax, dword ptr [eax + 0xc]
// 008729fd  895108               mov dword ptr [ecx + 8], edx
// 00872a00  89410c               mov dword ptr [ecx + 0xc], eax
// 00872a03  8d4c243c             lea ecx, [esp + 0x3c]
// 00872a07  51                   push ecx
// 00872a08  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00872a0c  55                   push ebp
// 00872a0d  e87ed70600           call 0x8e0190
// 00872a12  8d942490000000       lea edx, [esp + 0x90]
// 00872a19  52                   push edx
// 00872a1a  8bcf                 mov ecx, edi
// 00872a1c  e84fb50500           call 0x8cdf70
// 00872a21  c784248400000000000000 mov dword ptr [esp + 0x84], 0
// 00872a2c  e86fa8fdff           call 0x84d2a0
// 00872a31  8d842490000000       lea eax, [esp + 0x90]
// 00872a38  50                   push eax
// 00872a39  e8f278fdff           call 0x84a330
// 00872a3e  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00872a42  83c404               add esp, 4
// 00872a45  8d8e54060000         lea ecx, [esi + 0x654]
// 00872a4b  51                   push ecx
// 00872a4c  55                   push ebp
// 00872a4d  8d4c2464             lea ecx, [esp + 0x64]
// 00872a51  e80a8cfdff           call 0x84b660
// 00872a56  8b442420             mov eax, dword ptr [esp + 0x20]
// 00872a5a  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00872a5e  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00872a62  6aff                 push -1
// 00872a64  89442434             mov dword ptr [esp + 0x34], eax
// 00872a68  89542430             mov dword ptr [esp + 0x30], edx
// 00872a6c  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00872a70  6a00                 push 0
// 00872a72  8d442434             lea eax, [esp + 0x34]
// 00872a76  50                   push eax
// 00872a77  c684249000000001     mov byte ptr [esp + 0x90], 1
// 00872a7f  894c2440             mov dword ptr [esp + 0x40], ecx
// 00872a83  89542444             mov dword ptr [esp + 0x44], edx
// 00872a87  ff156ccc9800         call dword ptr [0x98cc6c]
// 00872a8d  8bcf                 mov ecx, edi
// 00872a8f  e8ac6a0700           call 0x8e9540
// 00872a94  85c0                 test eax, eax
// 00872a96  740d                 je 0x872aa5
// 00872a98  83c9ff               or ecx, 0xffffffff
// 00872a9b  2b8e60060000         sub ecx, dword ptr [esi + 0x660]
// 00872aa1  014c2434             add dword ptr [esp + 0x34], ecx
// 00872aa5  6afe                 push -2
// 00872aa7  6afe                 push -2
// 00872aa9  8d542434             lea edx, [esp + 0x34]
// 00872aad  52                   push edx
// 00872aae  ff1558ca9800         call dword ptr [0x98ca58]
// 00872ab4  8b8e74060000         mov ecx, dword ptr [esi + 0x674]
// 00872aba  8b4500               mov eax, dword ptr [ebp]
// 00872abd  8b5038               mov edx, dword ptr [eax + 0x38]
// 00872ac0  51                   push ecx
// 00872ac1  8bcd                 mov ecx, ebp
// 00872ac3  ffd2                 call edx
// 00872ac5  8b7500               mov esi, dword ptr [ebp]
// 00872ac8  6825880000           push 0x8825
// 00872acd  8d442430             lea eax, [esp + 0x30]
// 00872ad1  50                   push eax
// 00872ad2  8d8c2498000000       lea ecx, [esp + 0x98]
// 00872ad9  ff15b4dd9800         call dword ptr [0x98ddb4]
// 00872adf  50                   push eax
// 00872ae0  8d8c249c000000       lea ecx, [esp + 0x9c]
// 00872ae7  ff1580de9800         call dword ptr [0x98de80]
// 00872aed  8b5670               mov edx, dword ptr [esi + 0x70]
// 00872af0  50                   push eax
// 00872af1  8bcd                 mov ecx, ebp
// 00872af3  ffd2                 call edx
// 00872af5  8d4c245c             lea ecx, [esp + 0x5c]
// 00872af9  c684248400000000     mov byte ptr [esp + 0x84], 0
// 00872b01  e8da8bfdff           call 0x84b6e0
// 00872b06  8d8c2490000000       lea ecx, [esp + 0x90]
// 00872b0d  ff15c0de9800         call dword ptr [0x98dec0]
// 00872b13  8b4c247c             mov ecx, dword ptr [esp + 0x7c]
// 00872b17  64890d00000000       mov dword ptr fs:[0], ecx
// 00872b1e  59                   pop ecx
// 00872b1f  5f                   pop edi
// 00872b20  5e                   pop esi
// 00872b21  5d                   pop ebp
// 00872b22  5b                   pop ebx
// 00872b23  83c474               add esp, 0x74
// 00872b26  c20800               ret 8
// copied from an identical function in another client (function ?DrawGroup@CXTPRibbonTheme@@UAEXPAVCDC@@PAVCXTPRibbonGroup@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/Ribbon/XTPRibbonTheme.cpp