// roc 2009-12 0089c520  unit: CXTPReportPaintManager  size: 867 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0089c520
//
// 0089c520  6aff                 push -1
// 0089c522  68a31c9600           push 0x961ca3
// 0089c527  64a100000000         mov eax, dword ptr fs:[0]
// 0089c52d  50                   push eax
// 0089c52e  83ec64               sub esp, 0x64
// 0089c531  53                   push ebx
// 0089c532  55                   push ebp
// 0089c533  56                   push esi
// 0089c534  57                   push edi
// 0089c535  a10052b600           mov eax, dword ptr [0xb65200]
// 0089c53a  33c4                 xor eax, esp
// 0089c53c  50                   push eax
// 0089c53d  8d442478             lea eax, [esp + 0x78]
// 0089c541  64a300000000         mov dword ptr fs:[0], eax
// 0089c547  8bf1                 mov esi, ecx
// 0089c549  89742420             mov dword ptr [esp + 0x20], esi
// 0089c54d  8b9c248c000000       mov ebx, dword ptr [esp + 0x8c]
// 0089c554  33ff                 xor edi, edi
// 0089c556  39bea8020000         cmp dword ptr [esi + 0x2a8], edi
// 0089c55c  0f85f9020000         jne 0x89c85b
// 0089c562  8b03                 mov eax, dword ptr [ebx]
// 0089c564  8b9088000000         mov edx, dword ptr [eax + 0x88]
// 0089c56a  8bcb                 mov ecx, ebx
// 0089c56c  ffd2                 call edx
// 0089c56e  85c0                 test eax, eax
// 0089c570  0f85e5020000         jne 0x89c85b
// 0089c576  8b03                 mov eax, dword ptr [ebx]
// 0089c578  8b90d0000000         mov edx, dword ptr [eax + 0xd0]
// 0089c57e  8bcb                 mov ecx, ebx
// 0089c580  ffd2                 call edx
// 0089c582  85c0                 test eax, eax
// 0089c584  0f84d1020000         je 0x89c85b
// 0089c58a  8b4324               mov eax, dword ptr [ebx + 0x24]
// 0089c58d  8ba8ec000000         mov ebp, dword ptr [eax + 0xec]
// 0089c593  8b4530               mov eax, dword ptr [ebp + 0x30]
// 0089c596  8d4c244c             lea ecx, [esp + 0x4c]
// 0089c59a  896c2418             mov dword ptr [esp + 0x18], ebp
// 0089c59e  89442424             mov dword ptr [esp + 0x24], eax
// 0089c5a2  e8b9e0f7ff           call 0x81a660
// 0089c5a7  c744244cdc429f00     mov dword ptr [esp + 0x4c], 0x9f42dc
// 0089c5af  8b4b24               mov ecx, dword ptr [ebx + 0x24]
// 0089c5b2  8b942488000000       mov edx, dword ptr [esp + 0x88]
// 0089c5b9  6a40                 push 0x40
// 0089c5bb  89bc2484000000       mov dword ptr [esp + 0x84], edi
// 0089c5c2  894c2454             mov dword ptr [esp + 0x54], ecx
// 0089c5c6  89542474             mov dword ptr [esp + 0x74], edx
// 0089c5ca  895c2458             mov dword ptr [esp + 0x58], ebx
// 0089c5ce  e88d72f5ff           call 0x7f3860
// 0089c5d3  83c404               add esp, 4
// 0089c5d6  8984248c000000       mov dword ptr [esp + 0x8c], eax
// 0089c5dd  c684248000000001     mov byte ptr [esp + 0x80], 1
// 0089c5e5  3bc7                 cmp eax, edi
// 0089c5e7  7409                 je 0x89c5f2
// 0089c5e9  8bc8                 mov ecx, eax
// 0089c5eb  e800e0f7ff           call 0x81a5f0
// 0089c5f0  8bf8                 mov edi, eax
// 0089c5f2  33f6                 xor esi, esi
// 0089c5f4  39742424             cmp dword ptr [esp + 0x24], esi
// 0089c5f8  c684248000000000     mov byte ptr [esp + 0x80], 0
// 0089c600  89b4248c000000       mov dword ptr [esp + 0x8c], esi
// 0089c607  8974241c             mov dword ptr [esp + 0x1c], esi
// 0089c60b  0f8efe010000         jle 0x89c80f
// 0089c611  85f6                 test esi, esi
// 0089c613  0f8ce7010000         jl 0x89c800
// 0089c619  3b7530               cmp esi, dword ptr [ebp + 0x30]
// 0089c61c  0f8dde010000         jge 0x89c800
// 0089c622  8b452c               mov eax, dword ptr [ebp + 0x2c]
// 0089c625  8b2cb0               mov ebp, dword ptr [eax + esi*4]
// 0089c628  8d04b0               lea eax, [eax + esi*4]
// 0089c62b  896c2428             mov dword ptr [esp + 0x28], ebp
// 0089c62f  85ed                 test ebp, ebp
// 0089c631  0f84c5010000         je 0x89c7fc
// 0089c637  8bcd                 mov ecx, ebp
// 0089c639  e882740100           call 0x8b3ac0
// 0089c63e  85c0                 test eax, eax
// 0089c640  0f84b6010000         je 0x89c7fc
// 0089c646  8b13                 mov edx, dword ptr [ebx]
// 0089c648  8b4260               mov eax, dword ptr [edx + 0x60]
// 0089c64b  55                   push ebp
// 0089c64c  8bcb                 mov ecx, ebx
// 0089c64e  ffd0                 call eax
// 0089c650  8bc8                 mov ecx, eax
// 0089c652  e8e9e6f8ff           call 0x82ad40
// 0089c657  8bf0                 mov esi, eax
// 0089c659  85f6                 test esi, esi
// 0089c65b  0f8497010000         je 0x89c7f8
// 0089c661  8bcd                 mov ecx, ebp
// 0089c663  8974245c             mov dword ptr [esp + 0x5c], esi
// 0089c667  e8d4b3f8ff           call 0x827a40
// 0089c66c  89442474             mov dword ptr [esp + 0x74], eax
// 0089c670  83c8ff               or eax, 0xffffffff
// 0089c673  33c9                 xor ecx, ecx
// 0089c675  894f20               mov dword ptr [edi + 0x20], ecx
// 0089c678  894724               mov dword ptr [edi + 0x24], eax
// 0089c67b  894728               mov dword ptr [edi + 0x28], eax
// 0089c67e  894730               mov dword ptr [edi + 0x30], eax
// 0089c681  894f38               mov dword ptr [edi + 0x38], ecx
// 0089c684  89473c               mov dword ptr [edi + 0x3c], eax
// 0089c687  c7473408020000       mov dword ptr [edi + 0x34], 0x208
// 0089c68e  8b13                 mov edx, dword ptr [ebx]
// 0089c690  8b92d8000000         mov edx, dword ptr [edx + 0xd8]
// 0089c696  57                   push edi
// 0089c697  8d442450             lea eax, [esp + 0x50]
// 0089c69b  50                   push eax
// 0089c69c  8bcb                 mov ecx, ebx
// 0089c69e  ffd2                 call edx
// 0089c6a0  8b4720               mov eax, dword ptr [edi + 0x20]
// 0089c6a3  8b8c2488000000       mov ecx, dword ptr [esp + 0x88]
// 0089c6aa  50                   push eax
// 0089c6ab  51                   push ecx
// 0089c6ac  8d4c2444             lea ecx, [esp + 0x44]
// 0089c6b0  e8abeffaff           call 0x84b660
// 0089c6b5  8b942488000000       mov edx, dword ptr [esp + 0x88]
// 0089c6bc  837a0c00             cmp dword ptr [edx + 0xc], 0
// 0089c6c0  c684248000000002     mov byte ptr [esp + 0x80], 2
// 0089c6c8  8bcd                 mov ecx, ebp
// 0089c6ca  740f                 je 0x89c6db
// 0089c6cc  8b842490000000       mov eax, dword ptr [esp + 0x90]
// 0089c6d3  50                   push eax
// 0089c6d4  e8d7baf8ff           call 0x8281b0
// 0089c6d9  eb05                 jmp 0x89c6e0
// 0089c6db  e8a0baf8ff           call 0x828180
// 0089c6e0  8b13                 mov edx, dword ptr [ebx]
// 0089c6e2  8b92ec000000         mov edx, dword ptr [edx + 0xec]
// 0089c6e8  33c9                 xor ecx, ecx
// 0089c6ea  83c0fc               add eax, -4
// 0089c6ed  89442434             mov dword ptr [esp + 0x34], eax
// 0089c6f1  55                   push ebp
// 0089c6f2  8d442430             lea eax, [esp + 0x30]
// 0089c6f6  894c2430             mov dword ptr [esp + 0x30], ecx
// 0089c6fa  894c2434             mov dword ptr [esp + 0x34], ecx
// 0089c6fe  894c243c             mov dword ptr [esp + 0x3c], ecx
// 0089c702  50                   push eax
// 0089c703  8bcb                 mov ecx, ebx
// 0089c705  ffd2                 call edx
// 0089c707  8b06                 mov eax, dword ptr [esi]
// 0089c709  8b4070               mov eax, dword ptr [eax + 0x70]
// 0089c70c  8d4c242c             lea ecx, [esp + 0x2c]
// 0089c710  51                   push ecx
// 0089c711  8d542450             lea edx, [esp + 0x50]
// 0089c715  52                   push edx
// 0089c716  8bce                 mov ecx, esi
// 0089c718  ffd0                 call eax
// 0089c71a  8b442428             mov eax, dword ptr [esp + 0x28]
// 0089c71e  8b6f38               mov ebp, dword ptr [edi + 0x38]
// 0089c721  8b16                 mov edx, dword ptr [esi]
// 0089c723  8b526c               mov edx, dword ptr [edx + 0x6c]
// 0089c726  50                   push eax
// 0089c727  8d4c2418             lea ecx, [esp + 0x18]
// 0089c72b  51                   push ecx
// 0089c72c  c1ed04               shr ebp, 4
// 0089c72f  8bce                 mov ecx, esi
// 0089c731  83e501               and ebp, 1
// 0089c734  ffd2                 call edx
// 0089c736  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0089c73a  8b01                 mov eax, dword ptr [ecx]
// 0089c73c  8b80fc000000         mov eax, dword ptr [eax + 0xfc]
// 0089c742  6a01                 push 1
// 0089c744  8d542418             lea edx, [esp + 0x18]
// 0089c748  52                   push edx
// 0089c749  56                   push esi
// 0089c74a  c684248c00000003     mov byte ptr [esp + 0x8c], 3
// 0089c752  ffd0                 call eax
// 0089c754  8b442434             mov eax, dword ptr [esp + 0x34]
// 0089c758  2b44242c             sub eax, dword ptr [esp + 0x2c]
// 0089c75c  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0089c760  8b11                 mov edx, dword ptr [ecx]
// 0089c762  8b92f0000000         mov edx, dword ptr [edx + 0xf0]
// 0089c768  55                   push ebp
// 0089c769  50                   push eax
// 0089c76a  8d44241c             lea eax, [esp + 0x1c]
// 0089c76e  50                   push eax
// 0089c76f  8b842494000000       mov eax, dword ptr [esp + 0x94]
// 0089c776  50                   push eax
// 0089c777  ffd2                 call edx
// 0089c779  3984248c000000       cmp dword ptr [esp + 0x8c], eax
// 0089c780  7f07                 jg 0x89c789
// 0089c782  8984248c000000       mov dword ptr [esp + 0x8c], eax
// 0089c789  8b06                 mov eax, dword ptr [esi]
// 0089c78b  8b90cc000000         mov edx, dword ptr [eax + 0xcc]
// 0089c791  8bce                 mov ecx, esi
// 0089c793  ffd2                 call edx
// 0089c795  83f8ff               cmp eax, -1
// 0089c798  7443                 je 0x89c7dd
// 0089c79a  8b4324               mov eax, dword ptr [ebx + 0x24]
// 0089c79d  8ba8d0010000         mov ebp, dword ptr [eax + 0x1d0]
// 0089c7a3  8b06                 mov eax, dword ptr [esi]
// 0089c7a5  8b90cc000000         mov edx, dword ptr [eax + 0xcc]
// 0089c7ab  6a00                 push 0
// 0089c7ad  8bce                 mov ecx, esi
// 0089c7af  ffd2                 call edx
// 0089c7b1  50                   push eax
// 0089c7b2  8bcd                 mov ecx, ebp
// 0089c7b4  e8c733f7ff           call 0x80fb80
// 0089c7b9  8bf0                 mov esi, eax
// 0089c7bb  85f6                 test esi, esi
// 0089c7bd  741e                 je 0x89c7dd
// 0089c7bf  8bce                 mov ecx, esi
// 0089c7c1  e8aa90c3ff           call 0x4d5870
// 0089c7c6  3984248c000000       cmp dword ptr [esp + 0x8c], eax
// 0089c7cd  7f0e                 jg 0x89c7dd
// 0089c7cf  8bce                 mov ecx, esi
// 0089c7d1  e89a90c3ff           call 0x4d5870
// 0089c7d6  8984248c000000       mov dword ptr [esp + 0x8c], eax
// 0089c7dd  8d4c2414             lea ecx, [esp + 0x14]
// 0089c7e1  ff15c0de9800         call dword ptr [0x98dec0]
// 0089c7e7  8d4c243c             lea ecx, [esp + 0x3c]
// 0089c7eb  c684248000000000     mov byte ptr [esp + 0x80], 0
// 0089c7f3  e8e8eefaff           call 0x84b6e0
// 0089c7f8  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0089c7fc  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 0089c800  46                   inc esi
// 0089c801  3b742424             cmp esi, dword ptr [esp + 0x24]
// 0089c805  8974241c             mov dword ptr [esp + 0x1c], esi
// 0089c809  0f8c02feffff         jl 0x89c611
// 0089c80f  85ff                 test edi, edi
// 0089c811  7407                 je 0x89c81a
// 0089c813  8bcf                 mov ecx, edi
// 0089c815  e8c275f5ff           call 0x7f3ddc
// 0089c81a  8b84248c000000       mov eax, dword ptr [esp + 0x8c]
// 0089c821  8b542420             mov edx, dword ptr [esp + 0x20]
// 0089c825  8b8a60020000         mov ecx, dword ptr [edx + 0x260]
// 0089c82b  83c005               add eax, 5
// 0089c82e  3bc1                 cmp eax, ecx
// 0089c830  7f02                 jg 0x89c834
// 0089c832  8bc1                 mov eax, ecx
// 0089c834  33c9                 xor ecx, ecx
// 0089c836  398ab8020000         cmp dword ptr [edx + 0x2b8], ecx
// 0089c83c  c7842480000000ffffffff mov dword ptr [esp + 0x80], 0xffffffff
// 0089c847  0f95c1               setne cl
// 0089c84a  03c8                 add ecx, eax
// 0089c84c  8bf1                 mov esi, ecx
// 0089c84e  8d4c244c             lea ecx, [esp + 0x4c]
// 0089c852  e849d8f7ff           call 0x81a0a0
// 0089c857  8bc6                 mov eax, esi
// 0089c859  eb12                 jmp 0x89c86d
// 0089c85b  8b16                 mov edx, dword ptr [esi]
// 0089c85d  8b842488000000       mov eax, dword ptr [esp + 0x88]
// 0089c864  8b5260               mov edx, dword ptr [edx + 0x60]
// 0089c867  53                   push ebx
// 0089c868  50                   push eax
// 0089c869  8bce                 mov ecx, esi
// 0089c86b  ffd2                 call edx
// 0089c86d  8b4c2478             mov ecx, dword ptr [esp + 0x78]
// 0089c871  64890d00000000       mov dword ptr fs:[0], ecx
// 0089c878  59                   pop ecx
// 0089c879  5f                   pop edi
// 0089c87a  5e                   pop esi
// 0089c87b  5d                   pop ebp
// 0089c87c  5b                   pop ebx
// 0089c87d  83c470               add esp, 0x70
// 0089c880  c20c00               ret 0xc
// copied from an identical function in another client (function ?GetRowHeight@CXTPReportPaintManager@@UAEHPAVCDC@@PAVCXTPReportRow@@H@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportPaintManager.cpp