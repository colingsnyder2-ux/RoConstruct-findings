// roc 2012-06 00a02e40  unit: CXTPRibbonTheme  size: 649 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a02e40
//
// 00a02e40  6aff                 push -1
// 00a02e42  68c12bae00           push 0xae2bc1
// 00a02e47  64a100000000         mov eax, dword ptr fs:[0]
// 00a02e4d  50                   push eax
// 00a02e4e  83ec68               sub esp, 0x68
// 00a02e51  53                   push ebx
// 00a02e52  55                   push ebp
// 00a02e53  56                   push esi
// 00a02e54  57                   push edi
// 00a02e55  a1d027e000           mov eax, dword ptr [0xe027d0]
// 00a02e5a  33c4                 xor eax, esp
// 00a02e5c  50                   push eax
// 00a02e5d  8d44247c             lea eax, [esp + 0x7c]
// 00a02e61  64a300000000         mov dword ptr fs:[0], eax
// 00a02e67  8be9                 mov ebp, ecx
// 00a02e69  896c2418             mov dword ptr [esp + 0x18], ebp
// 00a02e6d  8bbc2490000000       mov edi, dword ptr [esp + 0x90]
// 00a02e74  8b7740               mov esi, dword ptr [edi + 0x40]
// 00a02e77  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 00a02e7a  8b573c               mov edx, dword ptr [edi + 0x3c]
// 00a02e7d  8b5f38               mov ebx, dword ptr [edi + 0x38]
// 00a02e80  8bc6                 mov eax, esi
// 00a02e82  2b8560060000         sub eax, dword ptr [ebp + 0x660]
// 00a02e88  894c243c             mov dword ptr [esp + 0x3c], ecx
// 00a02e8c  89442448             mov dword ptr [esp + 0x48], eax
// 00a02e90  89442420             mov dword ptr [esp + 0x20], eax
// 00a02e94  8b4770               mov eax, dword ptr [edi + 0x70]
// 00a02e97  895c2440             mov dword ptr [esp + 0x40], ebx
// 00a02e9b  89542444             mov dword ptr [esp + 0x44], edx
// 00a02e9f  894c241c             mov dword ptr [esp + 0x1c], ecx
// 00a02ea3  89542424             mov dword ptr [esp + 0x24], edx
// 00a02ea7  89742428             mov dword ptr [esp + 0x28], esi
// 00a02eab  85c0                 test eax, eax
// 00a02ead  0f8500020000         jne 0xa030b3
// 00a02eb3  8bcf                 mov ecx, edi
// 00a02eb5  e826c30600           call 0xa6f1e0
// 00a02eba  83b89400000000       cmp dword ptr [eax + 0x94], 0
// 00a02ec1  8bcd                 mov ecx, ebp
// 00a02ec3  7511                 jne 0xa02ed6
// 00a02ec5  680cbdc100           push 0xc1bd0c
// 00a02eca  e8a1490000           call 0xa07870
// 00a02ecf  68f8bcc100           push 0xc1bcf8
// 00a02ed4  eb0f                 jmp 0xa02ee5
// 00a02ed6  68e0bcc100           push 0xc1bce0
// 00a02edb  e890490000           call 0xa07870
// 00a02ee0  68c8bcc100           push 0xc1bcc8
// 00a02ee5  8bcd                 mov ecx, ebp
// 00a02ee7  8bd8                 mov ebx, eax
// 00a02ee9  e882490000           call 0xa07870
// 00a02eee  8bcf                 mov ecx, edi
// 00a02ef0  89442414             mov dword ptr [esp + 0x14], eax
// 00a02ef4  e8f7c20600           call 0xa6f1f0
// 00a02ef9  8bac248c000000       mov ebp, dword ptr [esp + 0x8c]
// 00a02f00  8bf0                 mov esi, eax
// 00a02f02  f7de                 neg esi
// 00a02f04  1bf6                 sbb esi, esi
// 00a02f06  f7de                 neg esi
// 00a02f08  85db                 test ebx, ebx
// 00a02f0a  744c                 je 0xa02f58
// 00a02f0c  6a02                 push 2
// 00a02f0e  56                   push esi
// 00a02f0f  8d442454             lea eax, [esp + 0x54]
// 00a02f13  50                   push eax
// 00a02f14  8bcb                 mov ecx, ebx
// 00a02f16  e8d52b0600           call 0xa65af0
// 00a02f1b  83ec10               sub esp, 0x10
// 00a02f1e  8bcc                 mov ecx, esp
// 00a02f20  ba05000000           mov edx, 5
// 00a02f25  8911                 mov dword ptr [ecx], edx
// 00a02f27  895104               mov dword ptr [ecx + 4], edx
// 00a02f2a  895108               mov dword ptr [ecx + 8], edx
// 00a02f2d  89510c               mov dword ptr [ecx + 0xc], edx
// 00a02f30  8b10                 mov edx, dword ptr [eax]
// 00a02f32  83ec10               sub esp, 0x10
// 00a02f35  8bcc                 mov ecx, esp
// 00a02f37  8911                 mov dword ptr [ecx], edx
// 00a02f39  8b5004               mov edx, dword ptr [eax + 4]
// 00a02f3c  895104               mov dword ptr [ecx + 4], edx
// 00a02f3f  8b5008               mov edx, dword ptr [eax + 8]
// 00a02f42  8b400c               mov eax, dword ptr [eax + 0xc]
// 00a02f45  895108               mov dword ptr [ecx + 8], edx
// 00a02f48  89410c               mov dword ptr [ecx + 0xc], eax
// 00a02f4b  8d4c245c             lea ecx, [esp + 0x5c]
// 00a02f4f  51                   push ecx
// 00a02f50  55                   push ebp
// 00a02f51  8bcb                 mov ecx, ebx
// 00a02f53  e868240600           call 0xa653c0
// 00a02f58  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00a02f5c  85c9                 test ecx, ecx
// 00a02f5e  7452                 je 0xa02fb2
// 00a02f60  6a02                 push 2
// 00a02f62  56                   push esi
// 00a02f63  8d542474             lea edx, [esp + 0x74]
// 00a02f67  bb05000000           mov ebx, 5
// 00a02f6c  52                   push edx
// 00a02f6d  895c2464             mov dword ptr [esp + 0x64], ebx
// 00a02f71  e87a2b0600           call 0xa65af0
// 00a02f76  83ec10               sub esp, 0x10
// 00a02f79  8bcc                 mov ecx, esp
// 00a02f7b  8919                 mov dword ptr [ecx], ebx
// 00a02f7d  8bd3                 mov edx, ebx
// 00a02f7f  895104               mov dword ptr [ecx + 4], edx
// 00a02f82  895108               mov dword ptr [ecx + 8], edx
// 00a02f85  89510c               mov dword ptr [ecx + 0xc], edx
// 00a02f88  8b10                 mov edx, dword ptr [eax]
// 00a02f8a  83ec10               sub esp, 0x10
// 00a02f8d  8bcc                 mov ecx, esp
// 00a02f8f  8911                 mov dword ptr [ecx], edx
// 00a02f91  8b5004               mov edx, dword ptr [eax + 4]
// 00a02f94  895104               mov dword ptr [ecx + 4], edx
// 00a02f97  8b5008               mov edx, dword ptr [eax + 8]
// 00a02f9a  8b400c               mov eax, dword ptr [eax + 0xc]
// 00a02f9d  895108               mov dword ptr [ecx + 8], edx
// 00a02fa0  89410c               mov dword ptr [ecx + 0xc], eax
// 00a02fa3  8d4c243c             lea ecx, [esp + 0x3c]
// 00a02fa7  51                   push ecx
// 00a02fa8  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00a02fac  55                   push ebp
// 00a02fad  e80e240600           call 0xa653c0
// 00a02fb2  8d942490000000       lea edx, [esp + 0x90]
// 00a02fb9  52                   push edx
// 00a02fba  8bcf                 mov ecx, edi
// 00a02fbc  e8cf830400           call 0xa4b390
// 00a02fc1  c784248400000000000000 mov dword ptr [esp + 0x84], 0
// 00a02fcc  e8bf41fdff           call 0x9d7190
// 00a02fd1  8d842490000000       lea eax, [esp + 0x90]
// 00a02fd8  50                   push eax
// 00a02fd9  e8e211fdff           call 0x9d41c0
// 00a02fde  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00a02fe2  83c404               add esp, 4
// 00a02fe5  8d8e54060000         lea ecx, [esi + 0x654]
// 00a02feb  51                   push ecx
// 00a02fec  55                   push ebp
// 00a02fed  8d4c2464             lea ecx, [esp + 0x64]
// 00a02ff1  e83a25fdff           call 0x9d5530
// 00a02ff6  8b442420             mov eax, dword ptr [esp + 0x20]
// 00a02ffa  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00a02ffe  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00a03002  6aff                 push -1
// 00a03004  89442434             mov dword ptr [esp + 0x34], eax
// 00a03008  89542430             mov dword ptr [esp + 0x30], edx
// 00a0300c  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00a03010  6a00                 push 0
// 00a03012  8d442434             lea eax, [esp + 0x34]
// 00a03016  50                   push eax
// 00a03017  c684249000000001     mov byte ptr [esp + 0x90], 1
// 00a0301f  894c2440             mov dword ptr [esp + 0x40], ecx
// 00a03023  89542444             mov dword ptr [esp + 0x44], edx
// 00a03027  ff15f43ab200         call dword ptr [0xb23af4]
// 00a0302d  8bcf                 mov ecx, edi
// 00a0302f  e8ecc10600           call 0xa6f220
// 00a03034  85c0                 test eax, eax
// 00a03036  740d                 je 0xa03045
// 00a03038  83c9ff               or ecx, 0xffffffff
// 00a0303b  2b8e60060000         sub ecx, dword ptr [esi + 0x660]
// 00a03041  014c2434             add dword ptr [esp + 0x34], ecx
// 00a03045  6afe                 push -2
// 00a03047  6afe                 push -2
// 00a03049  8d542434             lea edx, [esp + 0x34]
// 00a0304d  52                   push edx
// 00a0304e  ff154c3bb200         call dword ptr [0xb23b4c]
// 00a03054  8b8e74060000         mov ecx, dword ptr [esi + 0x674]
// 00a0305a  8b4500               mov eax, dword ptr [ebp]
// 00a0305d  8b5038               mov edx, dword ptr [eax + 0x38]
// 00a03060  51                   push ecx
// 00a03061  8bcd                 mov ecx, ebp
// 00a03063  ffd2                 call edx
// 00a03065  8b7500               mov esi, dword ptr [ebp]
// 00a03068  6825880000           push 0x8825
// 00a0306d  8d442430             lea eax, [esp + 0x30]
// 00a03071  50                   push eax
// 00a03072  8d8c2498000000       lea ecx, [esp + 0x98]
// 00a03079  ff155846b200         call dword ptr [0xb24658]
// 00a0307f  50                   push eax
// 00a03080  8d8c249c000000       lea ecx, [esp + 0x9c]
// 00a03087  ff159847b200         call dword ptr [0xb24798]
// 00a0308d  8b5670               mov edx, dword ptr [esi + 0x70]
// 00a03090  50                   push eax
// 00a03091  8bcd                 mov ecx, ebp
// 00a03093  ffd2                 call edx
// 00a03095  8d4c245c             lea ecx, [esp + 0x5c]
// 00a03099  c684248400000000     mov byte ptr [esp + 0x84], 0
// 00a030a1  e80a25fdff           call 0x9d55b0
// 00a030a6  8d8c2490000000       lea ecx, [esp + 0x90]
// 00a030ad  ff15d047b200         call dword ptr [0xb247d0]
// 00a030b3  8b4c247c             mov ecx, dword ptr [esp + 0x7c]
// 00a030b7  64890d00000000       mov dword ptr fs:[0], ecx
// 00a030be  59                   pop ecx
// 00a030bf  5f                   pop edi
// 00a030c0  5e                   pop esi
// 00a030c1  5d                   pop ebp
// 00a030c2  5b                   pop ebx
// 00a030c3  83c474               add esp, 0x74
// 00a030c6  c20800               ret 8
// copied from an identical function in another client (function ?DrawGroup@CXTPRibbonTheme@@UAEXPAVCDC@@PAVCXTPRibbonGroup@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/Ribbon/XTPRibbonTheme.cpp