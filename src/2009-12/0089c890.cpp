// roc 2009-12 0089c890  unit: CXTPReportPaintManager  size: 1024 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0089c890
//
// 0089c890  56                   push esi
// 0089c891  8bf1                 mov esi, ecx
// 0089c893  8b86bc020000         mov eax, dword ptr [esi + 0x2bc]
// 0089c899  57                   push edi
// 0089c89a  85c0                 test eax, eax
// 0089c89c  0f8554010000         jne 0x89c9f6
// 0089c8a2  8b86d8000000         mov eax, dword ptr [esi + 0xd8]
// 0089c8a8  83f8ff               cmp eax, -1
// 0089c8ab  7506                 jne 0x89c8b3
// 0089c8ad  8b86d4000000         mov eax, dword ptr [esi + 0xd4]
// 0089c8b3  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0089c8b7  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0089c8bb  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0089c8bf  50                   push eax
// 0089c8c0  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0089c8c4  2bc8                 sub ecx, eax
// 0089c8c6  83e906               sub ecx, 6
// 0089c8c9  51                   push ecx
// 0089c8ca  83c002               add eax, 2
// 0089c8cd  50                   push eax
// 0089c8ce  4a                   dec edx
// 0089c8cf  52                   push edx
// 0089c8d0  57                   push edi
// 0089c8d1  8bce                 mov ecx, esi
// 0089c8d3  e898deffff           call 0x89a770
// 0089c8d8  8b86d8000000         mov eax, dword ptr [esi + 0xd8]
// 0089c8de  83f8ff               cmp eax, -1
// 0089c8e1  7506                 jne 0x89c8e9
// 0089c8e3  8b86d4000000         mov eax, dword ptr [esi + 0xd4]
// 0089c8e9  8b4e78               mov ecx, dword ptr [esi + 0x78]
// 0089c8ec  83f9ff               cmp ecx, -1
// 0089c8ef  7503                 jne 0x89c8f4
// 0089c8f1  8b4e74               mov ecx, dword ptr [esi + 0x74]
// 0089c8f4  dd0530e39b00         fld qword ptr [0x9be330]
// 0089c8fa  83ec08               sub esp, 8
// 0089c8fd  dd1c24               fstp qword ptr [esp]
// 0089c900  50                   push eax
// 0089c901  51                   push ecx
// 0089c902  8bce                 mov ecx, esi
// 0089c904  e8c7daffff           call 0x89a3d0
// 0089c909  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0089c90d  8b542420             mov edx, dword ptr [esp + 0x20]
// 0089c911  50                   push eax
// 0089c912  8b442418             mov eax, dword ptr [esp + 0x18]
// 0089c916  2bc8                 sub ecx, eax
// 0089c918  51                   push ecx
// 0089c919  83c2fd               add edx, -3
// 0089c91c  52                   push edx
// 0089c91d  50                   push eax
// 0089c91e  57                   push edi
// 0089c91f  8bce                 mov ecx, esi
// 0089c921  e81adeffff           call 0x89a740
// 0089c926  8b86d8000000         mov eax, dword ptr [esi + 0xd8]
// 0089c92c  83f8ff               cmp eax, -1
// 0089c92f  7506                 jne 0x89c937
// 0089c931  8b86d4000000         mov eax, dword ptr [esi + 0xd4]
// 0089c937  8b4e78               mov ecx, dword ptr [esi + 0x78]
// 0089c93a  83f9ff               cmp ecx, -1
// 0089c93d  7503                 jne 0x89c942
// 0089c93f  8b4e74               mov ecx, dword ptr [esi + 0x74]
// 0089c942  dd0578219b00         fld qword ptr [0x9b2178]
// 0089c948  83ec08               sub esp, 8
// 0089c94b  dd1c24               fstp qword ptr [esp]
// 0089c94e  50                   push eax
// 0089c94f  51                   push ecx
// 0089c950  8bce                 mov ecx, esi
// 0089c952  e879daffff           call 0x89a3d0
// 0089c957  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0089c95b  8b542420             mov edx, dword ptr [esp + 0x20]
// 0089c95f  50                   push eax
// 0089c960  8b442418             mov eax, dword ptr [esp + 0x18]
// 0089c964  2bc8                 sub ecx, eax
// 0089c966  51                   push ecx
// 0089c967  83c2fe               add edx, -2
// 0089c96a  52                   push edx
// 0089c96b  50                   push eax
// 0089c96c  57                   push edi
// 0089c96d  8bce                 mov ecx, esi
// 0089c96f  e8ccddffff           call 0x89a740
// 0089c974  8b86d8000000         mov eax, dword ptr [esi + 0xd8]
// 0089c97a  83f8ff               cmp eax, -1
// 0089c97d  7506                 jne 0x89c985
// 0089c97f  8b86d4000000         mov eax, dword ptr [esi + 0xd4]
// 0089c985  8b4e78               mov ecx, dword ptr [esi + 0x78]
// 0089c988  83f9ff               cmp ecx, -1
// 0089c98b  7503                 jne 0x89c990
// 0089c98d  8b4e74               mov ecx, dword ptr [esi + 0x74]
// 0089c990  dd05204b9b00         fld qword ptr [0x9b4b20]
// 0089c996  83ec08               sub esp, 8
// 0089c999  dd1c24               fstp qword ptr [esp]
// 0089c99c  50                   push eax
// 0089c99d  51                   push ecx
// 0089c99e  8bce                 mov ecx, esi
// 0089c9a0  e82bdaffff           call 0x89a3d0
// 0089c9a5  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0089c9a9  8b542420             mov edx, dword ptr [esp + 0x20]
// 0089c9ad  50                   push eax
// 0089c9ae  8b442418             mov eax, dword ptr [esp + 0x18]
// 0089c9b2  2bc8                 sub ecx, eax
// 0089c9b4  51                   push ecx
// 0089c9b5  4a                   dec edx
// 0089c9b6  52                   push edx
// 0089c9b7  50                   push eax
// 0089c9b8  57                   push edi
// 0089c9b9  8bce                 mov ecx, esi
// 0089c9bb  e880ddffff           call 0x89a740
// 0089c9c0  8b86e4000000         mov eax, dword ptr [esi + 0xe4]
// 0089c9c6  83f8ff               cmp eax, -1
// 0089c9c9  7506                 jne 0x89c9d1
// 0089c9cb  8b86e0000000         mov eax, dword ptr [esi + 0xe0]
// 0089c9d1  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0089c9d5  8b542414             mov edx, dword ptr [esp + 0x14]
// 0089c9d9  50                   push eax
// 0089c9da  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0089c9de  2bc8                 sub ecx, eax
// 0089c9e0  83e906               sub ecx, 6
// 0089c9e3  51                   push ecx
// 0089c9e4  83c002               add eax, 2
// 0089c9e7  50                   push eax
// 0089c9e8  52                   push edx
// 0089c9e9  57                   push edi
// 0089c9ea  8bce                 mov ecx, esi
// 0089c9ec  e87fddffff           call 0x89a770
// 0089c9f1  5f                   pop edi
// 0089c9f2  5e                   pop esi
// 0089c9f3  c21c00               ret 0x1c
// 0089c9f6  53                   push ebx
// 0089c9f7  83f803               cmp eax, 3
// 0089c9fa  0f8466010000         je 0x89cb66
// 0089ca00  83f804               cmp eax, 4
// 0089ca03  0f845d010000         je 0x89cb66
// 0089ca09  83f802               cmp eax, 2
// 0089ca0c  0f8518010000         jne 0x89cb2a
// 0089ca12  8dbec0020000         lea edi, [esi + 0x2c0]
// 0089ca18  8bcf                 mov ecx, edi
// 0089ca1a  e8a1f1fcff           call 0x86bbc0
// 0089ca1f  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 0089ca23  85c0                 test eax, eax
// 0089ca25  7445                 je 0x89ca6c
// 0089ca27  833b00               cmp dword ptr [ebx], 0
// 0089ca2a  7407                 je 0x89ca33
// 0089ca2c  b803000000           mov eax, 3
// 0089ca31  eb10                 jmp 0x89ca43
// 0089ca33  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0089ca37  e864b2f8ff           call 0x827ca0
// 0089ca3c  f7d8                 neg eax
// 0089ca3e  1bc0                 sbb eax, eax
// 0089ca40  f7d8                 neg eax
// 0089ca42  40                   inc eax
// 0089ca43  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0089ca47  85c9                 test ecx, ecx
// 0089ca49  7403                 je 0x89ca4e
// 0089ca4b  8b4904               mov ecx, dword ptr [ecx + 4]
// 0089ca4e  6a00                 push 0
// 0089ca50  8d54241c             lea edx, [esp + 0x1c]
// 0089ca54  52                   push edx
// 0089ca55  50                   push eax
// 0089ca56  6a01                 push 1
// 0089ca58  51                   push ecx
// 0089ca59  8bcf                 mov ecx, edi
// 0089ca5b  e8e0edfcff           call 0x86b840
// 0089ca60  c70300000000         mov dword ptr [ebx], 0
// 0089ca66  5b                   pop ebx
// 0089ca67  5f                   pop edi
// 0089ca68  5e                   pop esi
// 0089ca69  c21c00               ret 0x1c
// 0089ca6c  833b00               cmp dword ptr [ebx], 0
// 0089ca6f  743c                 je 0x89caad
// 0089ca71  8b86d8000000         mov eax, dword ptr [esi + 0xd8]
// 0089ca77  83f8ff               cmp eax, -1
// 0089ca7a  7508                 jne 0x89ca84
// 0089ca7c  8b8ed4000000         mov ecx, dword ptr [esi + 0xd4]
// 0089ca82  eb02                 jmp 0x89ca86
// 0089ca84  8bc8                 mov ecx, eax
// 0089ca86  83f8ff               cmp eax, -1
// 0089ca89  7506                 jne 0x89ca91
// 0089ca8b  8b86d4000000         mov eax, dword ptr [esi + 0xd4]
// 0089ca91  51                   push ecx
// 0089ca92  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0089ca96  50                   push eax
// 0089ca97  8d442420             lea eax, [esp + 0x20]
// 0089ca9b  50                   push eax
// 0089ca9c  e8577bf5ff           call 0x7f45f8
// 0089caa1  c70300000000         mov dword ptr [ebx], 0
// 0089caa7  5b                   pop ebx
// 0089caa8  5f                   pop edi
// 0089caa9  5e                   pop esi
// 0089caaa  c21c00               ret 0x1c
// 0089caad  8b862c010000         mov eax, dword ptr [esi + 0x12c]
// 0089cab3  83f8ff               cmp eax, -1
// 0089cab6  7508                 jne 0x89cac0
// 0089cab8  8b8e28010000         mov ecx, dword ptr [esi + 0x128]
// 0089cabe  eb02                 jmp 0x89cac2
// 0089cac0  8bc8                 mov ecx, eax
// 0089cac2  8b86e4000000         mov eax, dword ptr [esi + 0xe4]
// 0089cac8  83f8ff               cmp eax, -1
// 0089cacb  7506                 jne 0x89cad3
// 0089cacd  8b86e0000000         mov eax, dword ptr [esi + 0xe0]
// 0089cad3  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0089cad7  51                   push ecx
// 0089cad8  50                   push eax
// 0089cad9  8d4c2420             lea ecx, [esp + 0x20]
// 0089cadd  51                   push ecx
// 0089cade  8bcf                 mov ecx, edi
// 0089cae0  e8137bf5ff           call 0x7f45f8
// 0089cae5  6aff                 push -1
// 0089cae7  6aff                 push -1
// 0089cae9  8d542420             lea edx, [esp + 0x20]
// 0089caed  52                   push edx
// 0089caee  ff1558ca9800         call dword ptr [0x98ca58]
// 0089caf4  8b86d8000000         mov eax, dword ptr [esi + 0xd8]
// 0089cafa  83f8ff               cmp eax, -1
// 0089cafd  7506                 jne 0x89cb05
// 0089caff  8b86d4000000         mov eax, dword ptr [esi + 0xd4]
// 0089cb05  8b4e78               mov ecx, dword ptr [esi + 0x78]
// 0089cb08  83f9ff               cmp ecx, -1
// 0089cb0b  7503                 jne 0x89cb10
// 0089cb0d  8b4e74               mov ecx, dword ptr [esi + 0x74]
// 0089cb10  50                   push eax
// 0089cb11  51                   push ecx
// 0089cb12  8d442420             lea eax, [esp + 0x20]
// 0089cb16  8bcf                 mov ecx, edi
// 0089cb18  50                   push eax
// 0089cb19  e8da7af5ff           call 0x7f45f8
// 0089cb1e  c70300000000         mov dword ptr [ebx], 0
// 0089cb24  5b                   pop ebx
// 0089cb25  5f                   pop edi
// 0089cb26  5e                   pop esi
// 0089cb27  c21c00               ret 0x1c
// 0089cb2a  8b86d8000000         mov eax, dword ptr [esi + 0xd8]
// 0089cb30  83f8ff               cmp eax, -1
// 0089cb33  7508                 jne 0x89cb3d
// 0089cb35  8b8ed4000000         mov ecx, dword ptr [esi + 0xd4]
// 0089cb3b  eb02                 jmp 0x89cb3f
// 0089cb3d  8bc8                 mov ecx, eax
// 0089cb3f  8b86e4000000         mov eax, dword ptr [esi + 0xe4]
// 0089cb45  83f8ff               cmp eax, -1
// 0089cb48  7506                 jne 0x89cb50
// 0089cb4a  8b86e0000000         mov eax, dword ptr [esi + 0xe0]
// 0089cb50  51                   push ecx
// 0089cb51  50                   push eax
// 0089cb52  8d4c2420             lea ecx, [esp + 0x20]
// 0089cb56  51                   push ecx
// 0089cb57  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0089cb5b  e8987af5ff           call 0x7f45f8
// 0089cb60  5b                   pop ebx
// 0089cb61  5f                   pop edi
// 0089cb62  5e                   pop esi
// 0089cb63  c21c00               ret 0x1c
// 0089cb66  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 0089cb6a  55                   push ebp
// 0089cb6b  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 0089cb6f  837d0000             cmp dword ptr [ebp], 0
// 0089cb73  7408                 je 0x89cb7d
// 0089cb75  8d8694010000         lea eax, [esi + 0x194]
// 0089cb7b  eb17                 jmp 0x89cb94
// 0089cb7d  8bcb                 mov ecx, ebx
// 0089cb7f  e81cb1f8ff           call 0x827ca0
// 0089cb84  85c0                 test eax, eax
// 0089cb86  8d8674010000         lea eax, [esi + 0x174]
// 0089cb8c  7506                 jne 0x89cb94
// 0089cb8e  8d8654010000         lea eax, [esi + 0x154]
// 0089cb94  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0089cb98  6a00                 push 0
// 0089cb9a  6a00                 push 0
// 0089cb9c  50                   push eax
// 0089cb9d  8d542428             lea edx, [esp + 0x28]
// 0089cba1  52                   push edx
// 0089cba2  57                   push edi
// 0089cba3  e8f806fbff           call 0x84d2a0
// 0089cba8  8bc8                 mov ecx, eax
// 0089cbaa  e8110afbff           call 0x84d5c0
// 0089cbaf  8b86bc010000         mov eax, dword ptr [esi + 0x1bc]
// 0089cbb5  83f8ff               cmp eax, -1
// 0089cbb8  7506                 jne 0x89cbc0
// 0089cbba  8b86b8010000         mov eax, dword ptr [esi + 0x1b8]
// 0089cbc0  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0089cbc4  8b542428             mov edx, dword ptr [esp + 0x28]
// 0089cbc8  50                   push eax
// 0089cbc9  8b442420             mov eax, dword ptr [esp + 0x20]
// 0089cbcd  2bc8                 sub ecx, eax
// 0089cbcf  51                   push ecx
// 0089cbd0  4a                   dec edx
// 0089cbd1  52                   push edx
// 0089cbd2  50                   push eax
// 0089cbd3  57                   push edi
// 0089cbd4  8bce                 mov ecx, esi
// 0089cbd6  e865dbffff           call 0x89a740
// 0089cbdb  8b86c8010000         mov eax, dword ptr [esi + 0x1c8]
// 0089cbe1  83f8ff               cmp eax, -1
// 0089cbe4  7506                 jne 0x89cbec
// 0089cbe6  8b86c4010000         mov eax, dword ptr [esi + 0x1c4]
// 0089cbec  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0089cbf0  8b542424             mov edx, dword ptr [esp + 0x24]
// 0089cbf4  50                   push eax
// 0089cbf5  8b442424             mov eax, dword ptr [esp + 0x24]
// 0089cbf9  2bc8                 sub ecx, eax
// 0089cbfb  83e906               sub ecx, 6
// 0089cbfe  51                   push ecx
// 0089cbff  83c002               add eax, 2
// 0089cc02  50                   push eax
// 0089cc03  4a                   dec edx
// 0089cc04  52                   push edx
// 0089cc05  57                   push edi
// 0089cc06  8bce                 mov ecx, esi
// 0089cc08  e863dbffff           call 0x89a770
// 0089cc0d  83bebc02000003       cmp dword ptr [esi + 0x2bc], 3
// 0089cc14  7531                 jne 0x89cc47
// 0089cc16  8b86e4000000         mov eax, dword ptr [esi + 0xe4]
// 0089cc1c  83f8ff               cmp eax, -1
// 0089cc1f  7506                 jne 0x89cc27
// 0089cc21  8b86e0000000         mov eax, dword ptr [esi + 0xe0]
// 0089cc27  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0089cc2b  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0089cc2f  50                   push eax
// 0089cc30  8b442424             mov eax, dword ptr [esp + 0x24]
// 0089cc34  2bc8                 sub ecx, eax
// 0089cc36  83e906               sub ecx, 6
// 0089cc39  51                   push ecx
// 0089cc3a  83c003               add eax, 3
// 0089cc3d  50                   push eax
// 0089cc3e  52                   push edx
// 0089cc3f  57                   push edi
// 0089cc40  8bce                 mov ecx, esi
// 0089cc42  e829dbffff           call 0x89a770
// 0089cc47  8bcb                 mov ecx, ebx
// 0089cc49  e842b0f8ff           call 0x827c90
// 0089cc4e  83b8b801000000       cmp dword ptr [eax + 0x1b8], 0
// 0089cc55  742b                 je 0x89cc82
// 0089cc57  8b86bc010000         mov eax, dword ptr [esi + 0x1bc]
// 0089cc5d  83f8ff               cmp eax, -1
// 0089cc60  7506                 jne 0x89cc68
// 0089cc62  8b86b8010000         mov eax, dword ptr [esi + 0x1b8]
// 0089cc68  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0089cc6c  8b542420             mov edx, dword ptr [esp + 0x20]
// 0089cc70  50                   push eax
// 0089cc71  8b442420             mov eax, dword ptr [esp + 0x20]
// 0089cc75  2bc8                 sub ecx, eax
// 0089cc77  51                   push ecx
// 0089cc78  52                   push edx
// 0089cc79  50                   push eax
// 0089cc7a  57                   push edi
// 0089cc7b  8bce                 mov ecx, esi
// 0089cc7d  e8bedaffff           call 0x89a740
// 0089cc82  c7450000000000       mov dword ptr [ebp], 0
// 0089cc89  5d                   pop ebp
// 0089cc8a  5b                   pop ebx
// 0089cc8b  5f                   pop edi
// 0089cc8c  5e                   pop esi
// 0089cc8d  c21c00               ret 0x1c
// copied from an identical function in another client (function ?DrawColumnBackground@CXTPReportPaintManager@@MAEXPAVCDC@@PAVCXTPReportColumn@@VCRect@@AAH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/ReportControl/XTPReportPaintManager.cpp