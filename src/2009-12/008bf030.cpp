// roc 2009-12 008bf030  unit: CXTPDockingPaneContext  size: 1259 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008bf030
//
// 008bf030  83ec28               sub esp, 0x28
// 008bf033  53                   push ebx
// 008bf034  55                   push ebp
// 008bf035  56                   push esi
// 008bf036  8bf1                 mov esi, ecx
// 008bf038  8b8e1c010000         mov ecx, dword ptr [esi + 0x11c]
// 008bf03e  57                   push edi
// 008bf03f  e83c96f7ff           call 0x838680
// 008bf044  8b5804               mov ebx, dword ptr [eax + 4]
// 008bf047  89442414             mov dword ptr [esp + 0x14], eax
// 008bf04b  c744241000000000     mov dword ptr [esp + 0x10], 0
// 008bf053  85db                 test ebx, ebx
// 008bf055  0f84a5000000         je 0x8bf100
// 008bf05b  eb03                 jmp 0x8bf060
// 008bf05d  8d4900               lea ecx, [ecx]
// 008bf060  8bc3                 mov eax, ebx
// 008bf062  8b6808               mov ebp, dword ptr [eax + 8]
// 008bf065  8b7d30               mov edi, dword ptr [ebp + 0x30]
// 008bf068  8b1b                 mov ebx, dword ptr [ebx]
// 008bf06a  85ff                 test edi, edi
// 008bf06c  0f8482000000         je 0x8bf0f4
// 008bf072  8b4710               mov eax, dword ptr [edi + 0x10]
// 008bf075  85c0                 test eax, eax
// 008bf077  747b                 je 0x8bf0f4
// 008bf079  83781802             cmp dword ptr [eax + 0x18], 2
// 008bf07d  7575                 jne 0x8bf0f4
// 008bf07f  8d47ac               lea eax, [edi - 0x54]
// 008bf082  85c0                 test eax, eax
// 008bf084  7403                 je 0x8bf089
// 008bf086  8b4020               mov eax, dword ptr [eax + 0x20]
// 008bf089  6af0                 push -0x10
// 008bf08b  50                   push eax
// 008bf08c  ff15d8c99800         call dword ptr [0x98c9d8]
// 008bf092  a900000010           test eax, 0x10000000
// 008bf097  745b                 je 0x8bf0f4
// 008bf099  8b8e20010000         mov ecx, dword ptr [esi + 0x120]
// 008bf09f  8b01                 mov eax, dword ptr [ecx]
// 008bf0a1  8b5008               mov edx, dword ptr [eax + 8]
// 008bf0a4  57                   push edi
// 008bf0a5  ffd2                 call edx
// 008bf0a7  85c0                 test eax, eax
// 008bf0a9  7549                 jne 0x8bf0f4
// 008bf0ab  8d442418             lea eax, [esp + 0x18]
// 008bf0af  50                   push eax
// 008bf0b0  8bcf                 mov ecx, edi
// 008bf0b2  e8e916ffff           call 0x8b07a0
// 008bf0b7  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 008bf0bb  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 008bf0bf  51                   push ecx
// 008bf0c0  52                   push edx
// 008bf0c1  8d442420             lea eax, [esp + 0x20]
// 008bf0c5  50                   push eax
// 008bf0c6  ff155cca9800         call dword ptr [0x98ca5c]
// 008bf0cc  85c0                 test eax, eax
// 008bf0ce  7424                 je 0x8bf0f4
// 008bf0d0  8bcd                 mov ecx, ebp
// 008bf0d2  e879d9f9ff           call 0x85ca50
// 008bf0d7  85c0                 test eax, eax
// 008bf0d9  7419                 je 0x8bf0f4
// 008bf0db  8b442410             mov eax, dword ptr [esp + 0x10]
// 008bf0df  85c0                 test eax, eax
// 008bf0e1  740d                 je 0x8bf0f0
// 008bf0e3  57                   push edi
// 008bf0e4  50                   push eax
// 008bf0e5  8bce                 mov ecx, esi
// 008bf0e7  e834dfffff           call 0x8bd020
// 008bf0ec  85c0                 test eax, eax
// 008bf0ee  7404                 je 0x8bf0f4
// 008bf0f0  897c2410             mov dword ptr [esp + 0x10], edi
// 008bf0f4  85db                 test ebx, ebx
// 008bf0f6  0f8564ffffff         jne 0x8bf060
// 008bf0fc  8b442414             mov eax, dword ptr [esp + 0x14]
// 008bf100  8b6804               mov ebp, dword ptr [eax + 4]
// 008bf103  85ed                 test ebp, ebp
// 008bf105  0f84eb010000         je 0x8bf2f6
// 008bf10b  eb03                 jmp 0x8bf110
// 008bf10d  8d4900               lea ecx, [ecx]
// 008bf110  8bc5                 mov eax, ebp
// 008bf112  8b7808               mov edi, dword ptr [eax + 8]
// 008bf115  8b6d00               mov ebp, dword ptr [ebp]
// 008bf118  8bcf                 mov ecx, edi
// 008bf11a  e861daf9ff           call 0x85cb80
// 008bf11f  a820                 test al, 0x20
// 008bf121  0f85c7010000         jne 0x8bf2ee
// 008bf127  8b7f30               mov edi, dword ptr [edi + 0x30]
// 008bf12a  85ff                 test edi, edi
// 008bf12c  0f84bc010000         je 0x8bf2ee
// 008bf132  8b442410             mov eax, dword ptr [esp + 0x10]
// 008bf136  85c0                 test eax, eax
// 008bf138  7408                 je 0x8bf142
// 008bf13a  3bc7                 cmp eax, edi
// 008bf13c  0f85ac010000         jne 0x8bf2ee
// 008bf142  8b4710               mov eax, dword ptr [edi + 0x10]
// 008bf145  85c0                 test eax, eax
// 008bf147  0f84a1010000         je 0x8bf2ee
// 008bf14d  83781802             cmp dword ptr [eax + 0x18], 2
// 008bf151  0f8597010000         jne 0x8bf2ee
// 008bf157  8d5fac               lea ebx, [edi - 0x54]
// 008bf15a  85db                 test ebx, ebx
// 008bf15c  7504                 jne 0x8bf162
// 008bf15e  33c0                 xor eax, eax
// 008bf160  eb03                 jmp 0x8bf165
// 008bf162  8b4320               mov eax, dword ptr [ebx + 0x20]
// 008bf165  6af0                 push -0x10
// 008bf167  50                   push eax
// 008bf168  ff15d8c99800         call dword ptr [0x98c9d8]
// 008bf16e  a900000010           test eax, 0x10000000
// 008bf173  0f8475010000         je 0x8bf2ee
// 008bf179  8d4c2428             lea ecx, [esp + 0x28]
// 008bf17d  51                   push ecx
// 008bf17e  8bcf                 mov ecx, edi
// 008bf180  e81b16ffff           call 0x8b07a0
// 008bf185  8b10                 mov edx, dword ptr [eax]
// 008bf187  899630010000         mov dword ptr [esi + 0x130], edx
// 008bf18d  8b4804               mov ecx, dword ptr [eax + 4]
// 008bf190  898e34010000         mov dword ptr [esi + 0x134], ecx
// 008bf196  8b5008               mov edx, dword ptr [eax + 8]
// 008bf199  899638010000         mov dword ptr [esi + 0x138], edx
// 008bf19f  8b400c               mov eax, dword ptr [eax + 0xc]
// 008bf1a2  89863c010000         mov dword ptr [esi + 0x13c], eax
// 008bf1a8  8b8e30010000         mov ecx, dword ptr [esi + 0x130]
// 008bf1ae  8b9634010000         mov edx, dword ptr [esi + 0x134]
// 008bf1b4  8b8638010000         mov eax, dword ptr [esi + 0x138]
// 008bf1ba  894c2418             mov dword ptr [esp + 0x18], ecx
// 008bf1be  8b8e3c010000         mov ecx, dword ptr [esi + 0x13c]
// 008bf1c4  894c2424             mov dword ptr [esp + 0x24], ecx
// 008bf1c8  8b8e20010000         mov ecx, dword ptr [esi + 0x120]
// 008bf1ce  89442420             mov dword ptr [esp + 0x20], eax
// 008bf1d2  8954241c             mov dword ptr [esp + 0x1c], edx
// 008bf1d6  8b11                 mov edx, dword ptr [ecx]
// 008bf1d8  8b4208               mov eax, dword ptr [edx + 8]
// 008bf1db  57                   push edi
// 008bf1dc  ffd0                 call eax
// 008bf1de  85c0                 test eax, eax
// 008bf1e0  0f8508010000         jne 0x8bf2ee
// 008bf1e6  8b442440             mov eax, dword ptr [esp + 0x40]
// 008bf1ea  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 008bf1ee  8b13                 mov edx, dword ptr [ebx]
// 008bf1f0  8b9254010000         mov edx, dword ptr [edx + 0x154]
// 008bf1f6  50                   push eax
// 008bf1f7  51                   push ecx
// 008bf1f8  8d442420             lea eax, [esp + 0x20]
// 008bf1fc  50                   push eax
// 008bf1fd  8bcb                 mov ecx, ebx
// 008bf1ff  ffd2                 call edx
// 008bf201  85c0                 test eax, eax
// 008bf203  7438                 je 0x8bf23d
// 008bf205  57                   push edi
// 008bf206  8bce                 mov ecx, esi
// 008bf208  e843f5ffff           call 0x8be750
// 008bf20d  85c0                 test eax, eax
// 008bf20f  0f857b010000         jne 0x8bf390
// 008bf215  8b8630010000         mov eax, dword ptr [esi + 0x130]
// 008bf21b  8b8e34010000         mov ecx, dword ptr [esi + 0x134]
// 008bf221  8b9638010000         mov edx, dword ptr [esi + 0x138]
// 008bf227  89442418             mov dword ptr [esp + 0x18], eax
// 008bf22b  8b863c010000         mov eax, dword ptr [esi + 0x13c]
// 008bf231  894c241c             mov dword ptr [esp + 0x1c], ecx
// 008bf235  89542420             mov dword ptr [esp + 0x20], edx
// 008bf239  89442424             mov dword ptr [esp + 0x24], eax
// 008bf23d  83beb000000000       cmp dword ptr [esi + 0xb0], 0
// 008bf244  746c                 je 0x8bf2b2
// 008bf246  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 008bf24a  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 008bf24e  51                   push ecx
// 008bf24f  52                   push edx
// 008bf250  8d442420             lea eax, [esp + 0x20]
// 008bf254  50                   push eax
// 008bf255  ff155cca9800         call dword ptr [0x98ca5c]
// 008bf25b  85c0                 test eax, eax
// 008bf25d  0f848b000000         je 0x8bf2ee
// 008bf263  8b86c8000000         mov eax, dword ptr [esi + 0xc8]
// 008bf269  85c0                 test eax, eax
// 008bf26b  740d                 je 0x8bf27a
// 008bf26d  57                   push edi
// 008bf26e  50                   push eax
// 008bf26f  8bce                 mov ecx, esi
// 008bf271  e8aaddffff           call 0x8bd020
// 008bf276  85c0                 test eax, eax
// 008bf278  7474                 je 0x8bf2ee
// 008bf27a  8b8e30010000         mov ecx, dword ptr [esi + 0x130]
// 008bf280  8b9634010000         mov edx, dword ptr [esi + 0x134]
// 008bf286  8b8638010000         mov eax, dword ptr [esi + 0x138]
// 008bf28c  898eb8000000         mov dword ptr [esi + 0xb8], ecx
// 008bf292  8b8e3c010000         mov ecx, dword ptr [esi + 0x13c]
// 008bf298  8996bc000000         mov dword ptr [esi + 0xbc], edx
// 008bf29e  8986c0000000         mov dword ptr [esi + 0xc0], eax
// 008bf2a4  898ec4000000         mov dword ptr [esi + 0xc4], ecx
// 008bf2aa  89bec8000000         mov dword ptr [esi + 0xc8], edi
// 008bf2b0  eb3c                 jmp 0x8bf2ee
// 008bf2b2  8b542440             mov edx, dword ptr [esp + 0x40]
// 008bf2b6  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 008bf2ba  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008bf2be  6a01                 push 1
// 008bf2c0  57                   push edi
// 008bf2c1  52                   push edx
// 008bf2c2  8b542428             mov edx, dword ptr [esp + 0x28]
// 008bf2c6  50                   push eax
// 008bf2c7  83ec10               sub esp, 0x10
// 008bf2ca  8bc4                 mov eax, esp
// 008bf2cc  8908                 mov dword ptr [eax], ecx
// 008bf2ce  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 008bf2d2  895004               mov dword ptr [eax + 4], edx
// 008bf2d5  8b542444             mov edx, dword ptr [esp + 0x44]
// 008bf2d9  894808               mov dword ptr [eax + 8], ecx
// 008bf2dc  8bce                 mov ecx, esi
// 008bf2de  89500c               mov dword ptr [eax + 0xc], edx
// 008bf2e1  e8fafaffff           call 0x8bede0
// 008bf2e6  85c0                 test eax, eax
// 008bf2e8  0f8523020000         jne 0x8bf511
// 008bf2ee  85ed                 test ebp, ebp
// 008bf2f0  0f851afeffff         jne 0x8bf110
// 008bf2f6  837c241000           cmp dword ptr [esp + 0x10], 0
// 008bf2fb  0f8510020000         jne 0x8bf511
// 008bf301  83beb000000000       cmp dword ptr [esi + 0xb0], 0
// 008bf308  0f8411010000         je 0x8bf41f
// 008bf30e  83bec800000000       cmp dword ptr [esi + 0xc8], 0
// 008bf315  0f85f6010000         jne 0x8bf511
// 008bf31b  8dbeb8000000         lea edi, [esi + 0xb8]
// 008bf321  57                   push edi
// 008bf322  ff1568cc9800         call dword ptr [0x98cc68]
// 008bf328  85c0                 test eax, eax
// 008bf32a  0f84e1010000         je 0x8bf511
// 008bf330  8b8e1c010000         mov ecx, dword ptr [esi + 0x11c]
// 008bf336  e85593f7ff           call 0x838690
// 008bf33b  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 008bf33f  8bd8                 mov ebx, eax
// 008bf341  8b442440             mov eax, dword ptr [esp + 0x40]
// 008bf345  50                   push eax
// 008bf346  51                   push ecx
// 008bf347  8d542430             lea edx, [esp + 0x30]
// 008bf34b  52                   push edx
// 008bf34c  8bcb                 mov ecx, ebx
// 008bf34e  e84d14ffff           call 0x8b07a0
// 008bf353  8bc8                 mov ecx, eax
// 008bf355  e85633b9ff           call 0x4526b0
// 008bf35a  85c0                 test eax, eax
// 008bf35c  7463                 je 0x8bf3c1
// 008bf35e  8d442428             lea eax, [esp + 0x28]
// 008bf362  50                   push eax
// 008bf363  8bcb                 mov ecx, ebx
// 008bf365  e83614ffff           call 0x8b07a0
// 008bf36a  8b08                 mov ecx, dword ptr [eax]
// 008bf36c  890f                 mov dword ptr [edi], ecx
// 008bf36e  8b5004               mov edx, dword ptr [eax + 4]
// 008bf371  895704               mov dword ptr [edi + 4], edx
// 008bf374  8b4808               mov ecx, dword ptr [eax + 8]
// 008bf377  894f08               mov dword ptr [edi + 8], ecx
// 008bf37a  8b500c               mov edx, dword ptr [eax + 0xc]
// 008bf37d  89570c               mov dword ptr [edi + 0xc], edx
// 008bf380  899ec8000000         mov dword ptr [esi + 0xc8], ebx
// 008bf386  5f                   pop edi
// 008bf387  5e                   pop esi
// 008bf388  5d                   pop ebp
// 008bf389  5b                   pop ebx
// 008bf38a  83c428               add esp, 0x28
// 008bf38d  c20800               ret 8
// 008bf390  89be2c010000         mov dword ptr [esi + 0x12c], edi
// 008bf396  c7864401000001000000 mov dword ptr [esi + 0x144], 1
// 008bf3a0  c786c800000000000000 mov dword ptr [esi + 0xc8], 0
// 008bf3aa  81c6b8000000         add esi, 0xb8
// 008bf3b0  56                   push esi
// 008bf3b1  ff159cca9800         call dword ptr [0x98ca9c]
// 008bf3b7  5f                   pop edi
// 008bf3b8  5e                   pop esi
// 008bf3b9  5d                   pop ebp
// 008bf3ba  5b                   pop ebx
// 008bf3bb  83c428               add esp, 0x28
// 008bf3be  c20800               ret 8
// 008bf3c1  8b8e1c010000         mov ecx, dword ptr [esi + 0x11c]
// 008bf3c7  e8e492f7ff           call 0x8386b0
// 008bf3cc  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 008bf3d0  8bf0                 mov esi, eax
// 008bf3d2  8b442440             mov eax, dword ptr [esp + 0x40]
// 008bf3d6  50                   push eax
// 008bf3d7  51                   push ecx
// 008bf3d8  8d542430             lea edx, [esp + 0x30]
// 008bf3dc  52                   push edx
// 008bf3dd  8bce                 mov ecx, esi
// 008bf3df  e8bc13ffff           call 0x8b07a0
// 008bf3e4  8bc8                 mov ecx, eax
// 008bf3e6  e8c532b9ff           call 0x4526b0
// 008bf3eb  85c0                 test eax, eax
// 008bf3ed  0f841e010000         je 0x8bf511
// 008bf3f3  8d442428             lea eax, [esp + 0x28]
// 008bf3f7  50                   push eax
// 008bf3f8  8bce                 mov ecx, esi
// 008bf3fa  e8a113ffff           call 0x8b07a0
// 008bf3ff  8b08                 mov ecx, dword ptr [eax]
// 008bf401  890f                 mov dword ptr [edi], ecx
// 008bf403  8b5004               mov edx, dword ptr [eax + 4]
// 008bf406  895704               mov dword ptr [edi + 4], edx
// 008bf409  8b4808               mov ecx, dword ptr [eax + 8]
// 008bf40c  894f08               mov dword ptr [edi + 8], ecx
// 008bf40f  8b500c               mov edx, dword ptr [eax + 0xc]
// 008bf412  89570c               mov dword ptr [edi + 0xc], edx
// 008bf415  5f                   pop edi
// 008bf416  5e                   pop esi
// 008bf417  5d                   pop ebp
// 008bf418  5b                   pop ebx
// 008bf419  83c428               add esp, 0x28
// 008bf41c  c20800               ret 8
// 008bf41f  8b8e1c010000         mov ecx, dword ptr [esi + 0x11c]
// 008bf425  e86692f7ff           call 0x838690
// 008bf42a  8bf8                 mov edi, eax
// 008bf42c  8d442428             lea eax, [esp + 0x28]
// 008bf430  50                   push eax
// 008bf431  8bcf                 mov ecx, edi
// 008bf433  e86813ffff           call 0x8b07a0
// 008bf438  8b08                 mov ecx, dword ptr [eax]
// 008bf43a  898e30010000         mov dword ptr [esi + 0x130], ecx
// 008bf440  8b5004               mov edx, dword ptr [eax + 4]
// 008bf443  899634010000         mov dword ptr [esi + 0x134], edx
// 008bf449  8b4808               mov ecx, dword ptr [eax + 8]
// 008bf44c  898e38010000         mov dword ptr [esi + 0x138], ecx
// 008bf452  8b500c               mov edx, dword ptr [eax + 0xc]
// 008bf455  8d442428             lea eax, [esp + 0x28]
// 008bf459  50                   push eax
// 008bf45a  8bcf                 mov ecx, edi
// 008bf45c  89963c010000         mov dword ptr [esi + 0x13c], edx
// 008bf462  e83913ffff           call 0x8b07a0
// 008bf467  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 008bf46b  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 008bf46f  6a01                 push 1
// 008bf471  57                   push edi
// 008bf472  51                   push ecx
// 008bf473  52                   push edx
// 008bf474  8b10                 mov edx, dword ptr [eax]
// 008bf476  83ec10               sub esp, 0x10
// 008bf479  8bcc                 mov ecx, esp
// 008bf47b  8911                 mov dword ptr [ecx], edx
// 008bf47d  8b5004               mov edx, dword ptr [eax + 4]
// 008bf480  895104               mov dword ptr [ecx + 4], edx
// 008bf483  8b5008               mov edx, dword ptr [eax + 8]
// 008bf486  8b400c               mov eax, dword ptr [eax + 0xc]
// 008bf489  895108               mov dword ptr [ecx + 8], edx
// 008bf48c  89410c               mov dword ptr [ecx + 0xc], eax
// 008bf48f  8bce                 mov ecx, esi
// 008bf491  e84af9ffff           call 0x8bede0
// 008bf496  85c0                 test eax, eax
// 008bf498  7577                 jne 0x8bf511
// 008bf49a  8b8e1c010000         mov ecx, dword ptr [esi + 0x11c]
// 008bf4a0  e80b92f7ff           call 0x8386b0
// 008bf4a5  8d4c2428             lea ecx, [esp + 0x28]
// 008bf4a9  8bf8                 mov edi, eax
// 008bf4ab  51                   push ecx
// 008bf4ac  8bcf                 mov ecx, edi
// 008bf4ae  e8ed12ffff           call 0x8b07a0
// 008bf4b3  8b10                 mov edx, dword ptr [eax]
// 008bf4b5  899630010000         mov dword ptr [esi + 0x130], edx
// 008bf4bb  8b4804               mov ecx, dword ptr [eax + 4]
// 008bf4be  898e34010000         mov dword ptr [esi + 0x134], ecx
// 008bf4c4  8b5008               mov edx, dword ptr [eax + 8]
// 008bf4c7  899638010000         mov dword ptr [esi + 0x138], edx
// 008bf4cd  8b400c               mov eax, dword ptr [eax + 0xc]
// 008bf4d0  8d4c2428             lea ecx, [esp + 0x28]
// 008bf4d4  51                   push ecx
// 008bf4d5  8bcf                 mov ecx, edi
// 008bf4d7  89863c010000         mov dword ptr [esi + 0x13c], eax
// 008bf4dd  e8be12ffff           call 0x8b07a0
// 008bf4e2  8b542440             mov edx, dword ptr [esp + 0x40]
// 008bf4e6  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 008bf4ea  6a00                 push 0
// 008bf4ec  57                   push edi
// 008bf4ed  52                   push edx
// 008bf4ee  8b10                 mov edx, dword ptr [eax]
// 008bf4f0  51                   push ecx
// 008bf4f1  83ec10               sub esp, 0x10
// 008bf4f4  8bcc                 mov ecx, esp
// 008bf4f6  8911                 mov dword ptr [ecx], edx
// 008bf4f8  8b5004               mov edx, dword ptr [eax + 4]
// 008bf4fb  895104               mov dword ptr [ecx + 4], edx
// 008bf4fe  8b5008               mov edx, dword ptr [eax + 8]
// 008bf501  8b400c               mov eax, dword ptr [eax + 0xc]
// 008bf504  895108               mov dword ptr [ecx + 8], edx
// 008bf507  89410c               mov dword ptr [ecx + 0xc], eax
// 008bf50a  8bce                 mov ecx, esi
// 008bf50c  e8cff8ffff           call 0x8bede0
// 008bf511  5f                   pop edi
// 008bf512  5e                   pop esi
// 008bf513  5d                   pop ebp
// 008bf514  5b                   pop ebx
// 008bf515  83c428               add esp, 0x28
// 008bf518  c20800               ret 8
// copied from an identical function in another client (function ?FindContainer@CXTPDockingPaneContext@@MAEXVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/DockingPane/XTPDockingPaneContext.cpp