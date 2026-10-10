// roc 2008-06 0076be60  unit: CXTPDockingPaneContext  size: 1259 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0076be60
//
// 0076be60  83ec28               sub esp, 0x28
// 0076be63  53                   push ebx
// 0076be64  55                   push ebp
// 0076be65  56                   push esi
// 0076be66  8bf1                 mov esi, ecx
// 0076be68  8b8e1c010000         mov ecx, dword ptr [esi + 0x11c]
// 0076be6e  57                   push edi
// 0076be6f  e8bc91f7ff           call 0x6e5030
// 0076be74  8b5804               mov ebx, dword ptr [eax + 4]
// 0076be77  89442414             mov dword ptr [esp + 0x14], eax
// 0076be7b  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0076be83  85db                 test ebx, ebx
// 0076be85  0f84a5000000         je 0x76bf30
// 0076be8b  eb03                 jmp 0x76be90
// 0076be8d  8d4900               lea ecx, [ecx]
// 0076be90  8bc3                 mov eax, ebx
// 0076be92  8b6808               mov ebp, dword ptr [eax + 8]
// 0076be95  8b7d30               mov edi, dword ptr [ebp + 0x30]
// 0076be98  8b1b                 mov ebx, dword ptr [ebx]
// 0076be9a  85ff                 test edi, edi
// 0076be9c  0f8482000000         je 0x76bf24
// 0076bea2  8b4710               mov eax, dword ptr [edi + 0x10]
// 0076bea5  85c0                 test eax, eax
// 0076bea7  747b                 je 0x76bf24
// 0076bea9  83781802             cmp dword ptr [eax + 0x18], 2
// 0076bead  7575                 jne 0x76bf24
// 0076beaf  8d47ac               lea eax, [edi - 0x54]
// 0076beb2  85c0                 test eax, eax
// 0076beb4  7403                 je 0x76beb9
// 0076beb6  8b4020               mov eax, dword ptr [eax + 0x20]
// 0076beb9  6af0                 push -0x10
// 0076bebb  50                   push eax
// 0076bebc  ff15bc2d8000         call dword ptr [0x802dbc]
// 0076bec2  a900000010           test eax, 0x10000000
// 0076bec7  745b                 je 0x76bf24
// 0076bec9  8b8e20010000         mov ecx, dword ptr [esi + 0x120]
// 0076becf  8b01                 mov eax, dword ptr [ecx]
// 0076bed1  8b5008               mov edx, dword ptr [eax + 8]
// 0076bed4  57                   push edi
// 0076bed5  ffd2                 call edx
// 0076bed7  85c0                 test eax, eax
// 0076bed9  7549                 jne 0x76bf24
// 0076bedb  8d442418             lea eax, [esp + 0x18]
// 0076bedf  50                   push eax
// 0076bee0  8bcf                 mov ecx, edi
// 0076bee2  e81915ffff           call 0x75d400
// 0076bee7  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0076beeb  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 0076beef  51                   push ecx
// 0076bef0  52                   push edx
// 0076bef1  8d442420             lea eax, [esp + 0x20]
// 0076bef5  50                   push eax
// 0076bef6  ff152c2d8000         call dword ptr [0x802d2c]
// 0076befc  85c0                 test eax, eax
// 0076befe  7424                 je 0x76bf24
// 0076bf00  8bcd                 mov ecx, ebp
// 0076bf02  e8a9b5f9ff           call 0x7074b0
// 0076bf07  85c0                 test eax, eax
// 0076bf09  7419                 je 0x76bf24
// 0076bf0b  8b442410             mov eax, dword ptr [esp + 0x10]
// 0076bf0f  85c0                 test eax, eax
// 0076bf11  740d                 je 0x76bf20
// 0076bf13  57                   push edi
// 0076bf14  50                   push eax
// 0076bf15  8bce                 mov ecx, esi
// 0076bf17  e894deffff           call 0x769db0
// 0076bf1c  85c0                 test eax, eax
// 0076bf1e  7404                 je 0x76bf24
// 0076bf20  897c2410             mov dword ptr [esp + 0x10], edi
// 0076bf24  85db                 test ebx, ebx
// 0076bf26  0f8564ffffff         jne 0x76be90
// 0076bf2c  8b442414             mov eax, dword ptr [esp + 0x14]
// 0076bf30  8b6804               mov ebp, dword ptr [eax + 4]
// 0076bf33  85ed                 test ebp, ebp
// 0076bf35  0f84eb010000         je 0x76c126
// 0076bf3b  eb03                 jmp 0x76bf40
// 0076bf3d  8d4900               lea ecx, [ecx]
// 0076bf40  8bc5                 mov eax, ebp
// 0076bf42  8b7808               mov edi, dword ptr [eax + 8]
// 0076bf45  8b6d00               mov ebp, dword ptr [ebp]
// 0076bf48  8bcf                 mov ecx, edi
// 0076bf4a  e891b6f9ff           call 0x7075e0
// 0076bf4f  a820                 test al, 0x20
// 0076bf51  0f85c7010000         jne 0x76c11e
// 0076bf57  8b7f30               mov edi, dword ptr [edi + 0x30]
// 0076bf5a  85ff                 test edi, edi
// 0076bf5c  0f84bc010000         je 0x76c11e
// 0076bf62  8b442410             mov eax, dword ptr [esp + 0x10]
// 0076bf66  85c0                 test eax, eax
// 0076bf68  7408                 je 0x76bf72
// 0076bf6a  3bc7                 cmp eax, edi
// 0076bf6c  0f85ac010000         jne 0x76c11e
// 0076bf72  8b4710               mov eax, dword ptr [edi + 0x10]
// 0076bf75  85c0                 test eax, eax
// 0076bf77  0f84a1010000         je 0x76c11e
// 0076bf7d  83781802             cmp dword ptr [eax + 0x18], 2
// 0076bf81  0f8597010000         jne 0x76c11e
// 0076bf87  8d5fac               lea ebx, [edi - 0x54]
// 0076bf8a  85db                 test ebx, ebx
// 0076bf8c  7504                 jne 0x76bf92
// 0076bf8e  33c0                 xor eax, eax
// 0076bf90  eb03                 jmp 0x76bf95
// 0076bf92  8b4320               mov eax, dword ptr [ebx + 0x20]
// 0076bf95  6af0                 push -0x10
// 0076bf97  50                   push eax
// 0076bf98  ff15bc2d8000         call dword ptr [0x802dbc]
// 0076bf9e  a900000010           test eax, 0x10000000
// 0076bfa3  0f8475010000         je 0x76c11e
// 0076bfa9  8d4c2428             lea ecx, [esp + 0x28]
// 0076bfad  51                   push ecx
// 0076bfae  8bcf                 mov ecx, edi
// 0076bfb0  e84b14ffff           call 0x75d400
// 0076bfb5  8b10                 mov edx, dword ptr [eax]
// 0076bfb7  899630010000         mov dword ptr [esi + 0x130], edx
// 0076bfbd  8b4804               mov ecx, dword ptr [eax + 4]
// 0076bfc0  898e34010000         mov dword ptr [esi + 0x134], ecx
// 0076bfc6  8b5008               mov edx, dword ptr [eax + 8]
// 0076bfc9  899638010000         mov dword ptr [esi + 0x138], edx
// 0076bfcf  8b400c               mov eax, dword ptr [eax + 0xc]
// 0076bfd2  89863c010000         mov dword ptr [esi + 0x13c], eax
// 0076bfd8  8b8e30010000         mov ecx, dword ptr [esi + 0x130]
// 0076bfde  8b9634010000         mov edx, dword ptr [esi + 0x134]
// 0076bfe4  8b8638010000         mov eax, dword ptr [esi + 0x138]
// 0076bfea  894c2418             mov dword ptr [esp + 0x18], ecx
// 0076bfee  8b8e3c010000         mov ecx, dword ptr [esi + 0x13c]
// 0076bff4  894c2424             mov dword ptr [esp + 0x24], ecx
// 0076bff8  8b8e20010000         mov ecx, dword ptr [esi + 0x120]
// 0076bffe  89442420             mov dword ptr [esp + 0x20], eax
// 0076c002  8954241c             mov dword ptr [esp + 0x1c], edx
// 0076c006  8b11                 mov edx, dword ptr [ecx]
// 0076c008  8b4208               mov eax, dword ptr [edx + 8]
// 0076c00b  57                   push edi
// 0076c00c  ffd0                 call eax
// 0076c00e  85c0                 test eax, eax
// 0076c010  0f8508010000         jne 0x76c11e
// 0076c016  8b442440             mov eax, dword ptr [esp + 0x40]
// 0076c01a  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0076c01e  8b13                 mov edx, dword ptr [ebx]
// 0076c020  8b9254010000         mov edx, dword ptr [edx + 0x154]
// 0076c026  50                   push eax
// 0076c027  51                   push ecx
// 0076c028  8d442420             lea eax, [esp + 0x20]
// 0076c02c  50                   push eax
// 0076c02d  8bcb                 mov ecx, ebx
// 0076c02f  ffd2                 call edx
// 0076c031  85c0                 test eax, eax
// 0076c033  7438                 je 0x76c06d
// 0076c035  57                   push edi
// 0076c036  8bce                 mov ecx, esi
// 0076c038  e813f5ffff           call 0x76b550
// 0076c03d  85c0                 test eax, eax
// 0076c03f  0f857b010000         jne 0x76c1c0
// 0076c045  8b8630010000         mov eax, dword ptr [esi + 0x130]
// 0076c04b  8b8e34010000         mov ecx, dword ptr [esi + 0x134]
// 0076c051  8b9638010000         mov edx, dword ptr [esi + 0x138]
// 0076c057  89442418             mov dword ptr [esp + 0x18], eax
// 0076c05b  8b863c010000         mov eax, dword ptr [esi + 0x13c]
// 0076c061  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0076c065  89542420             mov dword ptr [esp + 0x20], edx
// 0076c069  89442424             mov dword ptr [esp + 0x24], eax
// 0076c06d  83beb000000000       cmp dword ptr [esi + 0xb0], 0
// 0076c074  746c                 je 0x76c0e2
// 0076c076  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0076c07a  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 0076c07e  51                   push ecx
// 0076c07f  52                   push edx
// 0076c080  8d442420             lea eax, [esp + 0x20]
// 0076c084  50                   push eax
// 0076c085  ff152c2d8000         call dword ptr [0x802d2c]
// 0076c08b  85c0                 test eax, eax
// 0076c08d  0f848b000000         je 0x76c11e
// 0076c093  8b86c8000000         mov eax, dword ptr [esi + 0xc8]
// 0076c099  85c0                 test eax, eax
// 0076c09b  740d                 je 0x76c0aa
// 0076c09d  57                   push edi
// 0076c09e  50                   push eax
// 0076c09f  8bce                 mov ecx, esi
// 0076c0a1  e80addffff           call 0x769db0
// 0076c0a6  85c0                 test eax, eax
// 0076c0a8  7474                 je 0x76c11e
// 0076c0aa  8b8e30010000         mov ecx, dword ptr [esi + 0x130]
// 0076c0b0  8b9634010000         mov edx, dword ptr [esi + 0x134]
// 0076c0b6  8b8638010000         mov eax, dword ptr [esi + 0x138]
// 0076c0bc  898eb8000000         mov dword ptr [esi + 0xb8], ecx
// 0076c0c2  8b8e3c010000         mov ecx, dword ptr [esi + 0x13c]
// 0076c0c8  8996bc000000         mov dword ptr [esi + 0xbc], edx
// 0076c0ce  8986c0000000         mov dword ptr [esi + 0xc0], eax
// 0076c0d4  898ec4000000         mov dword ptr [esi + 0xc4], ecx
// 0076c0da  89bec8000000         mov dword ptr [esi + 0xc8], edi
// 0076c0e0  eb3c                 jmp 0x76c11e
// 0076c0e2  8b542440             mov edx, dword ptr [esp + 0x40]
// 0076c0e6  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 0076c0ea  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0076c0ee  6a01                 push 1
// 0076c0f0  57                   push edi
// 0076c0f1  52                   push edx
// 0076c0f2  8b542428             mov edx, dword ptr [esp + 0x28]
// 0076c0f6  50                   push eax
// 0076c0f7  83ec10               sub esp, 0x10
// 0076c0fa  8bc4                 mov eax, esp
// 0076c0fc  8908                 mov dword ptr [eax], ecx
// 0076c0fe  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0076c102  895004               mov dword ptr [eax + 4], edx
// 0076c105  8b542444             mov edx, dword ptr [esp + 0x44]
// 0076c109  894808               mov dword ptr [eax + 8], ecx
// 0076c10c  8bce                 mov ecx, esi
// 0076c10e  89500c               mov dword ptr [eax + 0xc], edx
// 0076c111  e8fafaffff           call 0x76bc10
// 0076c116  85c0                 test eax, eax
// 0076c118  0f8523020000         jne 0x76c341
// 0076c11e  85ed                 test ebp, ebp
// 0076c120  0f851afeffff         jne 0x76bf40
// 0076c126  837c241000           cmp dword ptr [esp + 0x10], 0
// 0076c12b  0f8510020000         jne 0x76c341
// 0076c131  83beb000000000       cmp dword ptr [esi + 0xb0], 0
// 0076c138  0f8411010000         je 0x76c24f
// 0076c13e  83bec800000000       cmp dword ptr [esi + 0xc8], 0
// 0076c145  0f85f6010000         jne 0x76c341
// 0076c14b  8dbeb8000000         lea edi, [esi + 0xb8]
// 0076c151  57                   push edi
// 0076c152  ff156c2d8000         call dword ptr [0x802d6c]
// 0076c158  85c0                 test eax, eax
// 0076c15a  0f84e1010000         je 0x76c341
// 0076c160  8b8e1c010000         mov ecx, dword ptr [esi + 0x11c]
// 0076c166  e8d58ef7ff           call 0x6e5040
// 0076c16b  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0076c16f  8bd8                 mov ebx, eax
// 0076c171  8b442440             mov eax, dword ptr [esp + 0x40]
// 0076c175  50                   push eax
// 0076c176  51                   push ecx
// 0076c177  8d542430             lea edx, [esp + 0x30]
// 0076c17b  52                   push edx
// 0076c17c  8bcb                 mov ecx, ebx
// 0076c17e  e87d12ffff           call 0x75d400
// 0076c183  8bc8                 mov ecx, eax
// 0076c185  e8d61dceff           call 0x44df60
// 0076c18a  85c0                 test eax, eax
// 0076c18c  7463                 je 0x76c1f1
// 0076c18e  8d442428             lea eax, [esp + 0x28]
// 0076c192  50                   push eax
// 0076c193  8bcb                 mov ecx, ebx
// 0076c195  e86612ffff           call 0x75d400
// 0076c19a  8b08                 mov ecx, dword ptr [eax]
// 0076c19c  890f                 mov dword ptr [edi], ecx
// 0076c19e  8b5004               mov edx, dword ptr [eax + 4]
// 0076c1a1  895704               mov dword ptr [edi + 4], edx
// 0076c1a4  8b4808               mov ecx, dword ptr [eax + 8]
// 0076c1a7  894f08               mov dword ptr [edi + 8], ecx
// 0076c1aa  8b500c               mov edx, dword ptr [eax + 0xc]
// 0076c1ad  89570c               mov dword ptr [edi + 0xc], edx
// 0076c1b0  899ec8000000         mov dword ptr [esi + 0xc8], ebx
// 0076c1b6  5f                   pop edi
// 0076c1b7  5e                   pop esi
// 0076c1b8  5d                   pop ebp
// 0076c1b9  5b                   pop ebx
// 0076c1ba  83c428               add esp, 0x28
// 0076c1bd  c20800               ret 8
// 0076c1c0  89be2c010000         mov dword ptr [esi + 0x12c], edi
// 0076c1c6  c7864401000001000000 mov dword ptr [esi + 0x144], 1
// 0076c1d0  c786c800000000000000 mov dword ptr [esi + 0xc8], 0
// 0076c1da  81c6b8000000         add esi, 0xb8
// 0076c1e0  56                   push esi
// 0076c1e1  ff157c2c8000         call dword ptr [0x802c7c]
// 0076c1e7  5f                   pop edi
// 0076c1e8  5e                   pop esi
// 0076c1e9  5d                   pop ebp
// 0076c1ea  5b                   pop ebx
// 0076c1eb  83c428               add esp, 0x28
// 0076c1ee  c20800               ret 8
// 0076c1f1  8b8e1c010000         mov ecx, dword ptr [esi + 0x11c]
// 0076c1f7  e8648ef7ff           call 0x6e5060
// 0076c1fc  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0076c200  8bf0                 mov esi, eax
// 0076c202  8b442440             mov eax, dword ptr [esp + 0x40]
// 0076c206  50                   push eax
// 0076c207  51                   push ecx
// 0076c208  8d542430             lea edx, [esp + 0x30]
// 0076c20c  52                   push edx
// 0076c20d  8bce                 mov ecx, esi
// 0076c20f  e8ec11ffff           call 0x75d400
// 0076c214  8bc8                 mov ecx, eax
// 0076c216  e8451dceff           call 0x44df60
// 0076c21b  85c0                 test eax, eax
// 0076c21d  0f841e010000         je 0x76c341
// 0076c223  8d442428             lea eax, [esp + 0x28]
// 0076c227  50                   push eax
// 0076c228  8bce                 mov ecx, esi
// 0076c22a  e8d111ffff           call 0x75d400
// 0076c22f  8b08                 mov ecx, dword ptr [eax]
// 0076c231  890f                 mov dword ptr [edi], ecx
// 0076c233  8b5004               mov edx, dword ptr [eax + 4]
// 0076c236  895704               mov dword ptr [edi + 4], edx
// 0076c239  8b4808               mov ecx, dword ptr [eax + 8]
// 0076c23c  894f08               mov dword ptr [edi + 8], ecx
// 0076c23f  8b500c               mov edx, dword ptr [eax + 0xc]
// 0076c242  89570c               mov dword ptr [edi + 0xc], edx
// 0076c245  5f                   pop edi
// 0076c246  5e                   pop esi
// 0076c247  5d                   pop ebp
// 0076c248  5b                   pop ebx
// 0076c249  83c428               add esp, 0x28
// 0076c24c  c20800               ret 8
// 0076c24f  8b8e1c010000         mov ecx, dword ptr [esi + 0x11c]
// 0076c255  e8e68df7ff           call 0x6e5040
// 0076c25a  8bf8                 mov edi, eax
// 0076c25c  8d442428             lea eax, [esp + 0x28]
// 0076c260  50                   push eax
// 0076c261  8bcf                 mov ecx, edi
// 0076c263  e89811ffff           call 0x75d400
// 0076c268  8b08                 mov ecx, dword ptr [eax]
// 0076c26a  898e30010000         mov dword ptr [esi + 0x130], ecx
// 0076c270  8b5004               mov edx, dword ptr [eax + 4]
// 0076c273  899634010000         mov dword ptr [esi + 0x134], edx
// 0076c279  8b4808               mov ecx, dword ptr [eax + 8]
// 0076c27c  898e38010000         mov dword ptr [esi + 0x138], ecx
// 0076c282  8b500c               mov edx, dword ptr [eax + 0xc]
// 0076c285  8d442428             lea eax, [esp + 0x28]
// 0076c289  50                   push eax
// 0076c28a  8bcf                 mov ecx, edi
// 0076c28c  89963c010000         mov dword ptr [esi + 0x13c], edx
// 0076c292  e86911ffff           call 0x75d400
// 0076c297  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0076c29b  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 0076c29f  6a01                 push 1
// 0076c2a1  57                   push edi
// 0076c2a2  51                   push ecx
// 0076c2a3  52                   push edx
// 0076c2a4  8b10                 mov edx, dword ptr [eax]
// 0076c2a6  83ec10               sub esp, 0x10
// 0076c2a9  8bcc                 mov ecx, esp
// 0076c2ab  8911                 mov dword ptr [ecx], edx
// 0076c2ad  8b5004               mov edx, dword ptr [eax + 4]
// 0076c2b0  895104               mov dword ptr [ecx + 4], edx
// 0076c2b3  8b5008               mov edx, dword ptr [eax + 8]
// 0076c2b6  8b400c               mov eax, dword ptr [eax + 0xc]
// 0076c2b9  895108               mov dword ptr [ecx + 8], edx
// 0076c2bc  89410c               mov dword ptr [ecx + 0xc], eax
// 0076c2bf  8bce                 mov ecx, esi
// 0076c2c1  e84af9ffff           call 0x76bc10
// 0076c2c6  85c0                 test eax, eax
// 0076c2c8  7577                 jne 0x76c341
// 0076c2ca  8b8e1c010000         mov ecx, dword ptr [esi + 0x11c]
// 0076c2d0  e88b8df7ff           call 0x6e5060
// 0076c2d5  8d4c2428             lea ecx, [esp + 0x28]
// 0076c2d9  8bf8                 mov edi, eax
// 0076c2db  51                   push ecx
// 0076c2dc  8bcf                 mov ecx, edi
// 0076c2de  e81d11ffff           call 0x75d400
// 0076c2e3  8b10                 mov edx, dword ptr [eax]
// 0076c2e5  899630010000         mov dword ptr [esi + 0x130], edx
// 0076c2eb  8b4804               mov ecx, dword ptr [eax + 4]
// 0076c2ee  898e34010000         mov dword ptr [esi + 0x134], ecx
// 0076c2f4  8b5008               mov edx, dword ptr [eax + 8]
// 0076c2f7  899638010000         mov dword ptr [esi + 0x138], edx
// 0076c2fd  8b400c               mov eax, dword ptr [eax + 0xc]
// 0076c300  8d4c2428             lea ecx, [esp + 0x28]
// 0076c304  51                   push ecx
// 0076c305  8bcf                 mov ecx, edi
// 0076c307  89863c010000         mov dword ptr [esi + 0x13c], eax
// 0076c30d  e8ee10ffff           call 0x75d400
// 0076c312  8b542440             mov edx, dword ptr [esp + 0x40]
// 0076c316  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0076c31a  6a00                 push 0
// 0076c31c  57                   push edi
// 0076c31d  52                   push edx
// 0076c31e  8b10                 mov edx, dword ptr [eax]
// 0076c320  51                   push ecx
// 0076c321  83ec10               sub esp, 0x10
// 0076c324  8bcc                 mov ecx, esp
// 0076c326  8911                 mov dword ptr [ecx], edx
// 0076c328  8b5004               mov edx, dword ptr [eax + 4]
// 0076c32b  895104               mov dword ptr [ecx + 4], edx
// 0076c32e  8b5008               mov edx, dword ptr [eax + 8]
// 0076c331  8b400c               mov eax, dword ptr [eax + 0xc]
// 0076c334  895108               mov dword ptr [ecx + 8], edx
// 0076c337  89410c               mov dword ptr [ecx + 0xc], eax
// 0076c33a  8bce                 mov ecx, esi
// 0076c33c  e8cff8ffff           call 0x76bc10
// 0076c341  5f                   pop edi
// 0076c342  5e                   pop esi
// 0076c343  5d                   pop ebp
// 0076c344  5b                   pop ebx
// 0076c345  83c428               add esp, 0x28
// 0076c348  c20800               ret 8
// library xtp-11.2.2-shared-mfc/Source\DockingPane\XTPDockingPaneContext.cpp (function ?FindContainer@CXTPDockingPaneContext@@MAEXVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/DockingPane/XTPDockingPaneContext.cpp
