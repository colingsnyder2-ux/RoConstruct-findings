// roc 2010-06 005e0660  unit: RBX::GlobalSettings  size: 536 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005e0660
//
// 005e0660  83ec14               sub esp, 0x14
// 005e0663  56                   push esi
// 005e0664  8bf1                 mov esi, ecx
// 005e0666  837e1c00             cmp dword ptr [esi + 0x1c], 0
// 005e066a  57                   push edi
// 005e066b  7521                 jne 0x5e068e
// 005e066d  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005e0671  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 005e0674  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 005e0678  50                   push eax
// 005e0679  51                   push ecx
// 005e067a  6a01                 push 1
// 005e067c  57                   push edi
// 005e067d  8bce                 mov ecx, esi
// 005e067f  e8ecfcffff           call 0x5e0370
// 005e0684  8bc7                 mov eax, edi
// 005e0686  5f                   pop edi
// 005e0687  5e                   pop esi
// 005e0688  83c414               add esp, 0x14
// 005e068b  c21000               ret 0x10
// 005e068e  8b442424             mov eax, dword ptr [esp + 0x24]
// 005e0692  8b5618               mov edx, dword ptr [esi + 0x18]
// 005e0695  8b3a                 mov edi, dword ptr [edx]
// 005e0697  8b0e                 mov ecx, dword ptr [esi]
// 005e0699  53                   push ebx
// 005e069a  8b1d0ca99e00         mov ebx, dword ptr [0x9ea90c]
// 005e06a0  85c0                 test eax, eax
// 005e06a2  7404                 je 0x5e06a8
// 005e06a4  3bc1                 cmp eax, ecx
// 005e06a6  7406                 je 0x5e06ae
// 005e06a8  ffd3                 call ebx
// 005e06aa  8b442428             mov eax, dword ptr [esp + 0x28]
// 005e06ae  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 005e06b2  3bd7                 cmp edx, edi
// 005e06b4  7536                 jne 0x5e06ec
// 005e06b6  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 005e06ba  83c20c               add edx, 0xc
// 005e06bd  52                   push edx
// 005e06be  8bcf                 mov ecx, edi
// 005e06c0  e8db120500           call 0x6319a0
// 005e06c5  84c0                 test al, al
// 005e06c7  0f8485010000         je 0x5e0852
// 005e06cd  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005e06d1  57                   push edi
// 005e06d2  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 005e06d6  50                   push eax
// 005e06d7  6a01                 push 1
// 005e06d9  57                   push edi
// 005e06da  8bce                 mov ecx, esi
// 005e06dc  e88ffcffff           call 0x5e0370
// 005e06e1  5b                   pop ebx
// 005e06e2  8bc7                 mov eax, edi
// 005e06e4  5f                   pop edi
// 005e06e5  5e                   pop esi
// 005e06e6  83c414               add esp, 0x14
// 005e06e9  c21000               ret 0x10
// 005e06ec  8b7e18               mov edi, dword ptr [esi + 0x18]
// 005e06ef  8b0e                 mov ecx, dword ptr [esi]
// 005e06f1  85c0                 test eax, eax
// 005e06f3  7404                 je 0x5e06f9
// 005e06f5  3bc1                 cmp eax, ecx
// 005e06f7  7406                 je 0x5e06ff
// 005e06f9  ffd3                 call ebx
// 005e06fb  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 005e06ff  3bd7                 cmp edx, edi
// 005e0701  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 005e0705  7538                 jne 0x5e073f
// 005e0707  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 005e070a  8b4908               mov ecx, dword ptr [ecx + 8]
// 005e070d  83c10c               add ecx, 0xc
// 005e0710  57                   push edi
// 005e0711  e88a120500           call 0x6319a0
// 005e0716  84c0                 test al, al
// 005e0718  0f8434010000         je 0x5e0852
// 005e071e  8b5618               mov edx, dword ptr [esi + 0x18]
// 005e0721  8b4208               mov eax, dword ptr [edx + 8]
// 005e0724  57                   push edi
// 005e0725  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 005e0729  50                   push eax
// 005e072a  6a00                 push 0
// 005e072c  57                   push edi
// 005e072d  8bce                 mov ecx, esi
// 005e072f  e83cfcffff           call 0x5e0370
// 005e0734  5b                   pop ebx
// 005e0735  8bc7                 mov eax, edi
// 005e0737  5f                   pop edi
// 005e0738  5e                   pop esi
// 005e0739  83c414               add esp, 0x14
// 005e073c  c21000               ret 0x10
// 005e073f  83c20c               add edx, 0xc
// 005e0742  52                   push edx
// 005e0743  8bcf                 mov ecx, edi
// 005e0745  e856120500           call 0x6319a0
// 005e074a  84c0                 test al, al
// 005e074c  7468                 je 0x5e07b6
// 005e074e  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005e0752  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 005e0756  894c240c             mov dword ptr [esp + 0xc], ecx
// 005e075a  8d4c240c             lea ecx, [esp + 0xc]
// 005e075e  89542410             mov dword ptr [esp + 0x10], edx
// 005e0762  e8593be5ff           call 0x4342c0
// 005e0767  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 005e076b  57                   push edi
// 005e076c  8d4b0c               lea ecx, [ebx + 0xc]
// 005e076f  e82c120500           call 0x6319a0
// 005e0774  84c0                 test al, al
// 005e0776  743e                 je 0x5e07b6
// 005e0778  8b4308               mov eax, dword ptr [ebx + 8]
// 005e077b  80781900             cmp byte ptr [eax + 0x19], 0
// 005e077f  57                   push edi
// 005e0780  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 005e0784  7416                 je 0x5e079c
// 005e0786  53                   push ebx
// 005e0787  6a00                 push 0
// 005e0789  57                   push edi
// 005e078a  8bce                 mov ecx, esi
// 005e078c  e8dffbffff           call 0x5e0370
// 005e0791  5b                   pop ebx
// 005e0792  8bc7                 mov eax, edi
// 005e0794  5f                   pop edi
// 005e0795  5e                   pop esi
// 005e0796  83c414               add esp, 0x14
// 005e0799  c21000               ret 0x10
// 005e079c  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005e07a0  51                   push ecx
// 005e07a1  6a01                 push 1
// 005e07a3  57                   push edi
// 005e07a4  8bce                 mov ecx, esi
// 005e07a6  e8c5fbffff           call 0x5e0370
// 005e07ab  5b                   pop ebx
// 005e07ac  8bc7                 mov eax, edi
// 005e07ae  5f                   pop edi
// 005e07af  5e                   pop esi
// 005e07b0  83c414               add esp, 0x14
// 005e07b3  c21000               ret 0x10
// 005e07b6  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005e07ba  57                   push edi
// 005e07bb  83c10c               add ecx, 0xc
// 005e07be  e8dd110500           call 0x6319a0
// 005e07c3  84c0                 test al, al
// 005e07c5  0f8487000000         je 0x5e0852
// 005e07cb  8b542428             mov edx, dword ptr [esp + 0x28]
// 005e07cf  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 005e07d2  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005e07d6  8954240c             mov dword ptr [esp + 0xc], edx
// 005e07da  8b16                 mov edx, dword ptr [esi]
// 005e07dc  894c2418             mov dword ptr [esp + 0x18], ecx
// 005e07e0  8d4c240c             lea ecx, [esp + 0xc]
// 005e07e4  89442410             mov dword ptr [esp + 0x10], eax
// 005e07e8  89542414             mov dword ptr [esp + 0x14], edx
// 005e07ec  e83f62f0ff           call 0x4e6a30
// 005e07f1  8d442414             lea eax, [esp + 0x14]
// 005e07f5  50                   push eax
// 005e07f6  8d4c2410             lea ecx, [esp + 0x10]
// 005e07fa  e88167e8ff           call 0x466f80
// 005e07ff  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 005e0803  84c0                 test al, al
// 005e0805  750f                 jne 0x5e0816
// 005e0807  8d4b0c               lea ecx, [ebx + 0xc]
// 005e080a  51                   push ecx
// 005e080b  8bcf                 mov ecx, edi
// 005e080d  e88e110500           call 0x6319a0
// 005e0812  84c0                 test al, al
// 005e0814  743c                 je 0x5e0852
// 005e0816  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005e081a  8b5008               mov edx, dword ptr [eax + 8]
// 005e081d  807a1900             cmp byte ptr [edx + 0x19], 0
// 005e0821  57                   push edi
// 005e0822  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 005e0826  8bce                 mov ecx, esi
// 005e0828  7414                 je 0x5e083e
// 005e082a  50                   push eax
// 005e082b  6a00                 push 0
// 005e082d  57                   push edi
// 005e082e  e83dfbffff           call 0x5e0370
// 005e0833  5b                   pop ebx
// 005e0834  8bc7                 mov eax, edi
// 005e0836  5f                   pop edi
// 005e0837  5e                   pop esi
// 005e0838  83c414               add esp, 0x14
// 005e083b  c21000               ret 0x10
// 005e083e  53                   push ebx
// 005e083f  6a01                 push 1
// 005e0841  57                   push edi
// 005e0842  e829fbffff           call 0x5e0370
// 005e0847  5b                   pop ebx
// 005e0848  8bc7                 mov eax, edi
// 005e084a  5f                   pop edi
// 005e084b  5e                   pop esi
// 005e084c  83c414               add esp, 0x14
// 005e084f  c21000               ret 0x10
// 005e0852  57                   push edi
// 005e0853  8d442418             lea eax, [esp + 0x18]
// 005e0857  50                   push eax
// 005e0858  8bce                 mov ecx, esi
// 005e085a  e811fdffff           call 0x5e0570
// 005e085f  8b10                 mov edx, dword ptr [eax]
// 005e0861  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005e0865  5b                   pop ebx
// 005e0866  8911                 mov dword ptr [ecx], edx
// 005e0868  8b4004               mov eax, dword ptr [eax + 4]
// 005e086b  5f                   pop edi
// 005e086c  894104               mov dword ptr [ecx + 4], eax
// 005e086f  8bc1                 mov eax, ecx
// 005e0871  5e                   pop esi
// 005e0872  83c414               add esp, 0x14
// 005e0875  c21000               ret 0x10
// library openrbx-client/App\v8xml\XmlElement.cpp (function ?insert@?$_Tree@V?$_Tmap_traits@VInstanceHandle@RBX@@HU?$less@VInstanceHandle@RBX@@@std@@V?$allocator@U?$pair@$$CBVInstanceHandle@RBX@@H@std@@@4@$0A@@std@@@std@@QAE?AViterator@12@Vconst_iterator@12@ABU?$pair@$$CBVInstanceHandle@RBX@@H@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/XmlElement.cpp
