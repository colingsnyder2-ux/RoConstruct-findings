// roc 2007-08 004ce0b0  unit: 0RBX::View  size: 803 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004ce0b0
//
// 004ce0b0  6aff                 push -1
// 004ce0b2  68b2417500           push 0x7541b2
// 004ce0b7  64a100000000         mov eax, dword ptr fs:[0]
// 004ce0bd  50                   push eax
// 004ce0be  64892500000000       mov dword ptr fs:[0], esp
// 004ce0c5  83ec4c               sub esp, 0x4c
// 004ce0c8  8b442464             mov eax, dword ptr [esp + 0x64]
// 004ce0cc  80782100             cmp byte ptr [eax + 0x21], 0
// 004ce0d0  890c24               mov dword ptr [esp], ecx
// 004ce0d3  7459                 je 0x4ce12e
// 004ce0d5  68dc4e7800           push 0x784edc
// 004ce0da  8d4c240c             lea ecx, [esp + 0xc]
// 004ce0de  ff1598e67700         call dword ptr [0x77e698]
// 004ce0e4  8d4c2424             lea ecx, [esp + 0x24]
// 004ce0e8  c744245400000000     mov dword ptr [esp + 0x54], 0
// 004ce0f0  ff15f8e67700         call dword ptr [0x77e6f8]
// 004ce0f6  8d442408             lea eax, [esp + 8]
// 004ce0fa  50                   push eax
// 004ce0fb  8d4c2434             lea ecx, [esp + 0x34]
// 004ce0ff  c644245801           mov byte ptr [esp + 0x58], 1
// 004ce104  c7442428604e7800     mov dword ptr [esp + 0x28], 0x784e60
// 004ce10c  ff159ce67700         call dword ptr [0x77e69c]
// 004ce112  6864f38300           push 0x83f364
// 004ce117  8d4c2428             lea ecx, [esp + 0x28]
// 004ce11b  51                   push ecx
// 004ce11c  c644245c00           mov byte ptr [esp + 0x5c], 0
// 004ce121  c744242c784e7800     mov dword ptr [esp + 0x2c], 0x784e78
// 004ce129  e8702a1600           call 0x630b9e
// 004ce12e  53                   push ebx
// 004ce12f  55                   push ebp
// 004ce130  56                   push esi
// 004ce131  8bd8                 mov ebx, eax
// 004ce133  57                   push edi
// 004ce134  8d4c2470             lea ecx, [esp + 0x70]
// 004ce138  895c2414             mov dword ptr [esp + 0x14], ebx
// 004ce13c  e82f270000           call 0x4d0870
// 004ce141  8b03                 mov eax, dword ptr [ebx]
// 004ce143  80782100             cmp byte ptr [eax + 0x21], 0
// 004ce147  7405                 je 0x4ce14e
// 004ce149  8b7b08               mov edi, dword ptr [ebx + 8]
// 004ce14c  eb18                 jmp 0x4ce166
// 004ce14e  8b5308               mov edx, dword ptr [ebx + 8]
// 004ce151  807a2100             cmp byte ptr [edx + 0x21], 0
// 004ce155  7404                 je 0x4ce15b
// 004ce157  8bf8                 mov edi, eax
// 004ce159  eb0b                 jmp 0x4ce166
// 004ce15b  8b6c2474             mov ebp, dword ptr [esp + 0x74]
// 004ce15f  3beb                 cmp ebp, ebx
// 004ce161  8b7d08               mov edi, dword ptr [ebp + 8]
// 004ce164  756d                 jne 0x4ce1d3
// 004ce166  807f2100             cmp byte ptr [edi + 0x21], 0
// 004ce16a  8b7304               mov esi, dword ptr [ebx + 4]
// 004ce16d  7503                 jne 0x4ce172
// 004ce16f  897704               mov dword ptr [edi + 4], esi
// 004ce172  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004ce176  8b4104               mov eax, dword ptr [ecx + 4]
// 004ce179  395804               cmp dword ptr [eax + 4], ebx
// 004ce17c  7505                 jne 0x4ce183
// 004ce17e  897804               mov dword ptr [eax + 4], edi
// 004ce181  eb0b                 jmp 0x4ce18e
// 004ce183  391e                 cmp dword ptr [esi], ebx
// 004ce185  7504                 jne 0x4ce18b
// 004ce187  893e                 mov dword ptr [esi], edi
// 004ce189  eb03                 jmp 0x4ce18e
// 004ce18b  897e08               mov dword ptr [esi + 8], edi
// 004ce18e  8b6904               mov ebp, dword ptr [ecx + 4]
// 004ce191  395d00               cmp dword ptr [ebp], ebx
// 004ce194  7516                 jne 0x4ce1ac
// 004ce196  807f2100             cmp byte ptr [edi + 0x21], 0
// 004ce19a  7404                 je 0x4ce1a0
// 004ce19c  8bc6                 mov eax, esi
// 004ce19e  eb09                 jmp 0x4ce1a9
// 004ce1a0  57                   push edi
// 004ce1a1  e8eaacf6ff           call 0x438e90
// 004ce1a6  83c404               add esp, 4
// 004ce1a9  894500               mov dword ptr [ebp], eax
// 004ce1ac  8b442410             mov eax, dword ptr [esp + 0x10]
// 004ce1b0  8b6804               mov ebp, dword ptr [eax + 4]
// 004ce1b3  395d08               cmp dword ptr [ebp + 8], ebx
// 004ce1b6  7577                 jne 0x4ce22f
// 004ce1b8  807f2100             cmp byte ptr [edi + 0x21], 0
// 004ce1bc  7407                 je 0x4ce1c5
// 004ce1be  8bc6                 mov eax, esi
// 004ce1c0  894508               mov dword ptr [ebp + 8], eax
// 004ce1c3  eb6a                 jmp 0x4ce22f
// 004ce1c5  57                   push edi
// 004ce1c6  e815f4ffff           call 0x4cd5e0
// 004ce1cb  83c404               add esp, 4
// 004ce1ce  894508               mov dword ptr [ebp + 8], eax
// 004ce1d1  eb5c                 jmp 0x4ce22f
// 004ce1d3  896804               mov dword ptr [eax + 4], ebp
// 004ce1d6  8b0b                 mov ecx, dword ptr [ebx]
// 004ce1d8  894d00               mov dword ptr [ebp], ecx
// 004ce1db  3b6b08               cmp ebp, dword ptr [ebx + 8]
// 004ce1de  7504                 jne 0x4ce1e4
// 004ce1e0  8bf5                 mov esi, ebp
// 004ce1e2  eb1a                 jmp 0x4ce1fe
// 004ce1e4  807f2100             cmp byte ptr [edi + 0x21], 0
// 004ce1e8  8b7504               mov esi, dword ptr [ebp + 4]
// 004ce1eb  7503                 jne 0x4ce1f0
// 004ce1ed  897704               mov dword ptr [edi + 4], esi
// 004ce1f0  893e                 mov dword ptr [esi], edi
// 004ce1f2  8b5308               mov edx, dword ptr [ebx + 8]
// 004ce1f5  895508               mov dword ptr [ebp + 8], edx
// 004ce1f8  8b4308               mov eax, dword ptr [ebx + 8]
// 004ce1fb  896804               mov dword ptr [eax + 4], ebp
// 004ce1fe  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004ce202  8b4104               mov eax, dword ptr [ecx + 4]
// 004ce205  395804               cmp dword ptr [eax + 4], ebx
// 004ce208  7505                 jne 0x4ce20f
// 004ce20a  896804               mov dword ptr [eax + 4], ebp
// 004ce20d  eb0e                 jmp 0x4ce21d
// 004ce20f  8b4304               mov eax, dword ptr [ebx + 4]
// 004ce212  3918                 cmp dword ptr [eax], ebx
// 004ce214  7504                 jne 0x4ce21a
// 004ce216  8928                 mov dword ptr [eax], ebp
// 004ce218  eb03                 jmp 0x4ce21d
// 004ce21a  896808               mov dword ptr [eax + 8], ebp
// 004ce21d  8b5304               mov edx, dword ptr [ebx + 4]
// 004ce220  895504               mov dword ptr [ebp + 4], edx
// 004ce223  8a4b20               mov cl, byte ptr [ebx + 0x20]
// 004ce226  8a4520               mov al, byte ptr [ebp + 0x20]
// 004ce229  884d20               mov byte ptr [ebp + 0x20], cl
// 004ce22c  884320               mov byte ptr [ebx + 0x20], al
// 004ce22f  8b542414             mov edx, dword ptr [esp + 0x14]
// 004ce233  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 004ce237  bb01000000           mov ebx, 1
// 004ce23c  385a20               cmp byte ptr [edx + 0x20], bl
// 004ce23f  0f85f7000000         jne 0x4ce33c
// 004ce245  8b4504               mov eax, dword ptr [ebp + 4]
// 004ce248  3b7804               cmp edi, dword ptr [eax + 4]
// 004ce24b  0f84e8000000         je 0x4ce339
// 004ce251  385f20               cmp byte ptr [edi + 0x20], bl
// 004ce254  0f85df000000         jne 0x4ce339
// 004ce25a  8b06                 mov eax, dword ptr [esi]
// 004ce25c  3bf8                 cmp edi, eax
// 004ce25e  7565                 jne 0x4ce2c5
// 004ce260  8b4608               mov eax, dword ptr [esi + 8]
// 004ce263  80782000             cmp byte ptr [eax + 0x20], 0
// 004ce267  7512                 jne 0x4ce27b
// 004ce269  885820               mov byte ptr [eax + 0x20], bl
// 004ce26c  56                   push esi
// 004ce26d  8bcd                 mov ecx, ebp
// 004ce26f  c6462000             mov byte ptr [esi + 0x20], 0
// 004ce273  e898f4ffff           call 0x4cd710
// 004ce278  8b4608               mov eax, dword ptr [esi + 8]
// 004ce27b  80782100             cmp byte ptr [eax + 0x21], 0
// 004ce27f  7574                 jne 0x4ce2f5
// 004ce281  8b08                 mov ecx, dword ptr [eax]
// 004ce283  385920               cmp byte ptr [ecx + 0x20], bl
// 004ce286  7508                 jne 0x4ce290
// 004ce288  8b5008               mov edx, dword ptr [eax + 8]
// 004ce28b  385a20               cmp byte ptr [edx + 0x20], bl
// 004ce28e  7461                 je 0x4ce2f1
// 004ce290  8b4808               mov ecx, dword ptr [eax + 8]
// 004ce293  385920               cmp byte ptr [ecx + 0x20], bl
// 004ce296  7514                 jne 0x4ce2ac
// 004ce298  8b10                 mov edx, dword ptr [eax]
// 004ce29a  885a20               mov byte ptr [edx + 0x20], bl
// 004ce29d  50                   push eax
// 004ce29e  8bcd                 mov ecx, ebp
// 004ce2a0  c6402000             mov byte ptr [eax + 0x20], 0
// 004ce2a4  e847200000           call 0x4d02f0
// 004ce2a9  8b4608               mov eax, dword ptr [esi + 8]
// 004ce2ac  8a4e20               mov cl, byte ptr [esi + 0x20]
// 004ce2af  884820               mov byte ptr [eax + 0x20], cl
// 004ce2b2  885e20               mov byte ptr [esi + 0x20], bl
// 004ce2b5  8b5008               mov edx, dword ptr [eax + 8]
// 004ce2b8  56                   push esi
// 004ce2b9  8bcd                 mov ecx, ebp
// 004ce2bb  885a20               mov byte ptr [edx + 0x20], bl
// 004ce2be  e84df4ffff           call 0x4cd710
// 004ce2c3  eb74                 jmp 0x4ce339
// 004ce2c5  80782000             cmp byte ptr [eax + 0x20], 0
// 004ce2c9  7511                 jne 0x4ce2dc
// 004ce2cb  885820               mov byte ptr [eax + 0x20], bl
// 004ce2ce  56                   push esi
// 004ce2cf  8bcd                 mov ecx, ebp
// 004ce2d1  c6462000             mov byte ptr [esi + 0x20], 0
// 004ce2d5  e816200000           call 0x4d02f0
// 004ce2da  8b06                 mov eax, dword ptr [esi]
// 004ce2dc  80782100             cmp byte ptr [eax + 0x21], 0
// 004ce2e0  7513                 jne 0x4ce2f5
// 004ce2e2  8b4808               mov ecx, dword ptr [eax + 8]
// 004ce2e5  385920               cmp byte ptr [ecx + 0x20], bl
// 004ce2e8  751e                 jne 0x4ce308
// 004ce2ea  8b10                 mov edx, dword ptr [eax]
// 004ce2ec  385a20               cmp byte ptr [edx + 0x20], bl
// 004ce2ef  7517                 jne 0x4ce308
// 004ce2f1  c6402000             mov byte ptr [eax + 0x20], 0
// 004ce2f5  8b4504               mov eax, dword ptr [ebp + 4]
// 004ce2f8  8bfe                 mov edi, esi
// 004ce2fa  3b7804               cmp edi, dword ptr [eax + 4]
// 004ce2fd  8b7604               mov esi, dword ptr [esi + 4]
// 004ce300  0f854bffffff         jne 0x4ce251
// 004ce306  eb31                 jmp 0x4ce339
// 004ce308  8b08                 mov ecx, dword ptr [eax]
// 004ce30a  385920               cmp byte ptr [ecx + 0x20], bl
// 004ce30d  7514                 jne 0x4ce323
// 004ce30f  8b5008               mov edx, dword ptr [eax + 8]
// 004ce312  885a20               mov byte ptr [edx + 0x20], bl
// 004ce315  50                   push eax
// 004ce316  8bcd                 mov ecx, ebp
// 004ce318  c6402000             mov byte ptr [eax + 0x20], 0
// 004ce31c  e8eff3ffff           call 0x4cd710
// 004ce321  8b06                 mov eax, dword ptr [esi]
// 004ce323  8a4e20               mov cl, byte ptr [esi + 0x20]
// 004ce326  884820               mov byte ptr [eax + 0x20], cl
// 004ce329  885e20               mov byte ptr [esi + 0x20], bl
// 004ce32c  8b10                 mov edx, dword ptr [eax]
// 004ce32e  56                   push esi
// 004ce32f  8bcd                 mov ecx, ebp
// 004ce331  885a20               mov byte ptr [edx + 0x20], bl
// 004ce334  e8b71f0000           call 0x4d02f0
// 004ce339  885f20               mov byte ptr [edi + 0x20], bl
// 004ce33c  8b442414             mov eax, dword ptr [esp + 0x14]
// 004ce340  8b401c               mov eax, dword ptr [eax + 0x1c]
// 004ce343  85c0                 test eax, eax
// 004ce345  744c                 je 0x4ce393
// 004ce347  83c004               add eax, 4
// 004ce34a  50                   push eax
// 004ce34b  ff15e8d27700         call dword ptr [0x77d2e8]
// 004ce351  85c0                 test eax, eax
// 004ce353  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 004ce357  7533                 jne 0x4ce38c
// 004ce359  8b4f1c               mov ecx, dword ptr [edi + 0x1c]
// 004ce35c  8b7108               mov esi, dword ptr [ecx + 8]
// 004ce35f  85f6                 test esi, esi
// 004ce361  741b                 je 0x4ce37e
// 004ce363  8b0e                 mov ecx, dword ptr [esi]
// 004ce365  8b11                 mov edx, dword ptr [ecx]
// 004ce367  8b4204               mov eax, dword ptr [edx + 4]
// 004ce36a  ffd0                 call eax
// 004ce36c  8bc6                 mov eax, esi
// 004ce36e  8b7604               mov esi, dword ptr [esi + 4]
// 004ce371  50                   push eax
// 004ce372  e8eb181600           call 0x62fc62
// 004ce377  83c404               add esp, 4
// 004ce37a  85f6                 test esi, esi
// 004ce37c  75e5                 jne 0x4ce363
// 004ce37e  8b4f1c               mov ecx, dword ptr [edi + 0x1c]
// 004ce381  85c9                 test ecx, ecx
// 004ce383  7407                 je 0x4ce38c
// 004ce385  8b11                 mov edx, dword ptr [ecx]
// 004ce387  8b02                 mov eax, dword ptr [edx]
// 004ce389  53                   push ebx
// 004ce38a  ffd0                 call eax
// 004ce38c  c7471c00000000       mov dword ptr [edi + 0x1c], 0
// 004ce393  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004ce397  51                   push ecx
// 004ce398  e8c5181600           call 0x62fc62
// 004ce39d  8b4508               mov eax, dword ptr [ebp + 8]
// 004ce3a0  83c404               add esp, 4
// 004ce3a3  85c0                 test eax, eax
// 004ce3a5  7606                 jbe 0x4ce3ad
// 004ce3a7  83c0ff               add eax, -1
// 004ce3aa  894508               mov dword ptr [ebp + 8], eax
// 004ce3ad  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 004ce3b1  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 004ce3b5  8b542470             mov edx, dword ptr [esp + 0x70]
// 004ce3b9  5f                   pop edi
// 004ce3ba  5e                   pop esi
// 004ce3bb  894804               mov dword ptr [eax + 4], ecx
// 004ce3be  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 004ce3c2  5d                   pop ebp
// 004ce3c3  8910                 mov dword ptr [eax], edx
// 004ce3c5  5b                   pop ebx
// 004ce3c6  64890d00000000       mov dword ptr fs:[0], ecx
// 004ce3cd  83c458               add esp, 0x58
// 004ce3d0  c20c00               ret 0xc
// library openrbx-client/RbxView\PBBMesh.cpp (function ?erase@?$_Tree@V?$_Tmap_traits@VDecalKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@U?$less@VDecalKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@@std@@V?$allocator@U?$pair@$$CBVDecalKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@@std@@@8@$0A@@std@@@std@@QAE?AViterator@12@V312@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client RbxView/PBBMesh.cpp
