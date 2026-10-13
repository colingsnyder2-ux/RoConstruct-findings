// roc 2008-06 0050cdd0  unit: G3D::Log  size: 1042 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0050cdd0
//
// 0050cdd0  6aff                 push -1
// 0050cdd2  6818c17c00           push 0x7cc118
// 0050cdd7  64a100000000         mov eax, dword ptr fs:[0]
// 0050cddd  50                   push eax
// 0050cdde  64892500000000       mov dword ptr fs:[0], esp
// 0050cde5  81ecbc000000         sub esp, 0xbc
// 0050cdeb  56                   push esi
// 0050cdec  68a0b65000           push 0x50b6a0
// 0050cdf1  6820b65000           push 0x50b620
// 0050cdf6  6a00                 push 0
// 0050cdf8  68f87e8200           push 0x827ef8
// 0050cdfd  8bf1                 mov esi, ecx
// 0050cdff  e87c2d0100           call 0x51fb80
// 0050ce04  83c410               add esp, 0x10
// 0050ce07  89442404             mov dword ptr [esp + 4], eax
// 0050ce0b  85c0                 test eax, eax
// 0050ce0d  7551                 jne 0x50ce60
// 0050ce0f  68a0808200           push 0x8280a0
// 0050ce14  8d4c2428             lea ecx, [esp + 0x28]
// 0050ce18  ff1558248000         call dword ptr [0x802458]
// 0050ce1e  8b8c24d0000000       mov ecx, dword ptr [esp + 0xd0]
// 0050ce25  8d442444             lea eax, [esp + 0x44]
// 0050ce29  50                   push eax
// 0050ce2a  c78424cc00000000000000 mov dword ptr [esp + 0xcc], 0
// 0050ce35  e8f6dbffff           call 0x50aa30
// 0050ce3a  50                   push eax
// 0050ce3b  8d4c2428             lea ecx, [esp + 0x28]
// 0050ce3f  51                   push ecx
// 0050ce40  8d4c2468             lea ecx, [esp + 0x68]
// 0050ce44  c68424d000000001     mov byte ptr [esp + 0xd0], 1
// 0050ce4c  e85f5af6ff           call 0x4728b0
// 0050ce51  6878c48d00           push 0x8dc478
// 0050ce56  8d542464             lea edx, [esp + 0x64]
// 0050ce5a  52                   push edx
// 0050ce5b  e82c471900           call 0x6a158c
// 0050ce60  50                   push eax
// 0050ce61  e8da130100           call 0x51e240
// 0050ce66  83c404               add esp, 4
// 0050ce69  89442408             mov dword ptr [esp + 8], eax
// 0050ce6d  85c0                 test eax, eax
// 0050ce6f  7560                 jne 0x50ced1
// 0050ce71  50                   push eax
// 0050ce72  50                   push eax
// 0050ce73  8d44240c             lea eax, [esp + 0xc]
// 0050ce77  50                   push eax
// 0050ce78  e8332d0100           call 0x51fbb0
// 0050ce7d  83c40c               add esp, 0xc
// 0050ce80  68a0808200           push 0x8280a0
// 0050ce85  8d4c2428             lea ecx, [esp + 0x28]
// 0050ce89  ff1558248000         call dword ptr [0x802458]
// 0050ce8f  8d4c2444             lea ecx, [esp + 0x44]
// 0050ce93  51                   push ecx
// 0050ce94  8b8c24d4000000       mov ecx, dword ptr [esp + 0xd4]
// 0050ce9b  c78424cc00000002000000 mov dword ptr [esp + 0xcc], 2
// 0050cea6  e885dbffff           call 0x50aa30
// 0050ceab  50                   push eax
// 0050ceac  8d542428             lea edx, [esp + 0x28]
// 0050ceb0  52                   push edx
// 0050ceb1  8d4c2468             lea ecx, [esp + 0x68]
// 0050ceb5  c68424d000000003     mov byte ptr [esp + 0xd0], 3
// 0050cebd  e8ee59f6ff           call 0x4728b0
// 0050cec2  6878c48d00           push 0x8dc478
// 0050cec7  8d442464             lea eax, [esp + 0x64]
// 0050cecb  50                   push eax
// 0050cecc  e8bb461900           call 0x6a158c
// 0050ced1  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0050ced5  51                   push ecx
// 0050ced6  e865130100           call 0x51e240
// 0050cedb  83c404               add esp, 4
// 0050cede  89442414             mov dword ptr [esp + 0x14], eax
// 0050cee2  85c0                 test eax, eax
// 0050cee4  7564                 jne 0x50cf4a
// 0050cee6  50                   push eax
// 0050cee7  8d54240c             lea edx, [esp + 0xc]
// 0050ceeb  52                   push edx
// 0050ceec  8d44240c             lea eax, [esp + 0xc]
// 0050cef0  50                   push eax
// 0050cef1  e8ba2c0100           call 0x51fbb0
// 0050cef6  83c40c               add esp, 0xc
// 0050cef9  68a0808200           push 0x8280a0
// 0050cefe  8d4c2428             lea ecx, [esp + 0x28]
// 0050cf02  ff1558248000         call dword ptr [0x802458]
// 0050cf08  8d4c2444             lea ecx, [esp + 0x44]
// 0050cf0c  51                   push ecx
// 0050cf0d  8b8c24d4000000       mov ecx, dword ptr [esp + 0xd4]
// 0050cf14  c78424cc00000004000000 mov dword ptr [esp + 0xcc], 4
// 0050cf1f  e80cdbffff           call 0x50aa30
// 0050cf24  50                   push eax
// 0050cf25  8d542428             lea edx, [esp + 0x28]
// 0050cf29  52                   push edx
// 0050cf2a  8d4c2468             lea ecx, [esp + 0x68]
// 0050cf2e  c68424d000000005     mov byte ptr [esp + 0xd0], 5
// 0050cf36  e87559f6ff           call 0x4728b0
// 0050cf3b  6878c48d00           push 0x8dc478
// 0050cf40  8d442464             lea eax, [esp + 0x64]
// 0050cf44  50                   push eax
// 0050cf45  e842461900           call 0x6a158c
// 0050cf4a  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0050cf4e  57                   push edi
// 0050cf4f  8bbc24d4000000       mov edi, dword ptr [esp + 0xd4]
// 0050cf56  68b0cd5000           push 0x50cdb0
// 0050cf5b  57                   push edi
// 0050cf5c  51                   push ecx
// 0050cf5d  e8ae7b0100           call 0x524b10
// 0050cf62  8b542418             mov edx, dword ptr [esp + 0x18]
// 0050cf66  8b442414             mov eax, dword ptr [esp + 0x14]
// 0050cf6a  52                   push edx
// 0050cf6b  50                   push eax
// 0050cf6c  e83f1e0100           call 0x51edb0
// 0050cf71  6a00                 push 0
// 0050cf73  6a00                 push 0
// 0050cf75  8d4c2460             lea ecx, [esp + 0x60]
// 0050cf79  51                   push ecx
// 0050cf7a  8d542430             lea edx, [esp + 0x30]
// 0050cf7e  52                   push edx
// 0050cf7f  8d442438             lea eax, [esp + 0x38]
// 0050cf83  50                   push eax
// 0050cf84  8b442434             mov eax, dword ptr [esp + 0x34]
// 0050cf88  8d4c244c             lea ecx, [esp + 0x4c]
// 0050cf8c  51                   push ecx
// 0050cf8d  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0050cf91  8d542448             lea edx, [esp + 0x48]
// 0050cf95  52                   push edx
// 0050cf96  50                   push eax
// 0050cf97  51                   push ecx
// 0050cf98  e8f3790100           call 0x524990
// 0050cf9d  83c438               add esp, 0x38
// 0050cfa0  837c241004           cmp dword ptr [esp + 0x10], 4
// 0050cfa5  7563                 jne 0x50d00a
// 0050cfa7  8d542418             lea edx, [esp + 0x18]
// 0050cfab  52                   push edx
// 0050cfac  8d442410             lea eax, [esp + 0x10]
// 0050cfb0  50                   push eax
// 0050cfb1  8d4c2410             lea ecx, [esp + 0x10]
// 0050cfb5  51                   push ecx
// 0050cfb6  e8f52b0100           call 0x51fbb0
// 0050cfbb  83c40c               add esp, 0xc
// 0050cfbe  6868808200           push 0x828068
// 0050cfc3  8d4c242c             lea ecx, [esp + 0x2c]
// 0050cfc7  ff1558248000         call dword ptr [0x802458]
// 0050cfcd  8d542448             lea edx, [esp + 0x48]
// 0050cfd1  52                   push edx
// 0050cfd2  8bcf                 mov ecx, edi
// 0050cfd4  c78424d000000006000000 mov dword ptr [esp + 0xd0], 6
// 0050cfdf  e84cdaffff           call 0x50aa30
// 0050cfe4  50                   push eax
// 0050cfe5  8d44242c             lea eax, [esp + 0x2c]
// 0050cfe9  50                   push eax
// 0050cfea  8d4c246c             lea ecx, [esp + 0x6c]
// 0050cfee  c68424d400000007     mov byte ptr [esp + 0xd4], 7
// 0050cff6  e8b558f6ff           call 0x4728b0
// 0050cffb  6878c48d00           push 0x8dc478
// 0050d000  8d4c2468             lea ecx, [esp + 0x68]
// 0050d004  51                   push ecx
// 0050d005  e882451900           call 0x6a158c
// 0050d00a  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0050d00e  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0050d012  8b442424             mov eax, dword ptr [esp + 0x24]
// 0050d016  51                   push ecx
// 0050d017  895608               mov dword ptr [esi + 8], edx
// 0050d01a  89460c               mov dword ptr [esi + 0xc], eax
// 0050d01d  e84e2c0100           call 0x51fc70
// 0050d022  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0050d026  52                   push edx
// 0050d027  e884310100           call 0x5201b0
// 0050d02c  83c408               add esp, 8
// 0050d02f  837c241003           cmp dword ptr [esp + 0x10], 3
// 0050d034  750d                 jne 0x50d043
// 0050d036  8b442408             mov eax, dword ptr [esp + 8]
// 0050d03a  50                   push eax
// 0050d03b  e8d0310100           call 0x520210
// 0050d040  83c404               add esp, 4
// 0050d043  837c241000           cmp dword ptr [esp + 0x10], 0
// 0050d048  53                   push ebx
// 0050d049  bb08000000           mov ebx, 8
// 0050d04e  7513                 jne 0x50d063
// 0050d050  395c2418             cmp dword ptr [esp + 0x18], ebx
// 0050d054  7d0d                 jge 0x50d063
// 0050d056  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0050d05a  51                   push ecx
// 0050d05b  e8b0310100           call 0x520210
// 0050d060  83c404               add esp, 4
// 0050d063  8b542410             mov edx, dword ptr [esp + 0x10]
// 0050d067  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0050d06b  6a10                 push 0x10
// 0050d06d  52                   push edx
// 0050d06e  50                   push eax
// 0050d06f  e85c780100           call 0x5248d0
// 0050d074  83c40c               add esp, 0xc
// 0050d077  85c0                 test eax, eax
// 0050d079  740d                 je 0x50d088
// 0050d07b  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0050d07f  51                   push ecx
// 0050d080  e88b310100           call 0x520210
// 0050d085  83c404               add esp, 4
// 0050d088  395c2418             cmp dword ptr [esp + 0x18], ebx
// 0050d08c  7d0d                 jge 0x50d09b
// 0050d08e  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0050d092  52                   push edx
// 0050d093  e8f82b0100           call 0x51fc90
// 0050d098  83c404               add esp, 4
// 0050d09b  8b442414             mov eax, dword ptr [esp + 0x14]
// 0050d09f  83f806               cmp eax, 6
// 0050d0a2  7515                 jne 0x50d0b9
// 0050d0a4  8b460c               mov eax, dword ptr [esi + 0xc]
// 0050d0a7  0faf4608             imul eax, dword ptr [esi + 8]
// 0050d0ab  03c0                 add eax, eax
// 0050d0ad  03c0                 add eax, eax
// 0050d0af  c7461004000000       mov dword ptr [esi + 0x10], 4
// 0050d0b6  50                   push eax
// 0050d0b7  eb79                 jmp 0x50d132
// 0050d0b9  83f802               cmp eax, 2
// 0050d0bc  7462                 je 0x50d120
// 0050d0be  83f803               cmp eax, 3
// 0050d0c1  745d                 je 0x50d120
// 0050d0c3  85c0                 test eax, eax
// 0050d0c5  7511                 jne 0x50d0d8
// 0050d0c7  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0050d0ca  0faf4e08             imul ecx, dword ptr [esi + 8]
// 0050d0ce  c7461001000000       mov dword ptr [esi + 0x10], 1
// 0050d0d5  51                   push ecx
// 0050d0d6  eb5a                 jmp 0x50d132
// 0050d0d8  6844808200           push 0x828044
// 0050d0dd  8d4c2430             lea ecx, [esp + 0x30]
// 0050d0e1  ff1558248000         call dword ptr [0x802458]
// 0050d0e7  8d54244c             lea edx, [esp + 0x4c]
// 0050d0eb  52                   push edx
// 0050d0ec  8bcf                 mov ecx, edi
// 0050d0ee  899c24d4000000       mov dword ptr [esp + 0xd4], ebx
// 0050d0f5  e836d9ffff           call 0x50aa30
// 0050d0fa  50                   push eax
// 0050d0fb  8d442430             lea eax, [esp + 0x30]
// 0050d0ff  50                   push eax
// 0050d100  8d4c2470             lea ecx, [esp + 0x70]
// 0050d104  c68424d800000009     mov byte ptr [esp + 0xd8], 9
// 0050d10c  e89f57f6ff           call 0x4728b0
// 0050d111  6878c48d00           push 0x8dc478
// 0050d116  8d4c246c             lea ecx, [esp + 0x6c]
// 0050d11a  51                   push ecx
// 0050d11b  e86c441900           call 0x6a158c
// 0050d120  8b460c               mov eax, dword ptr [esi + 0xc]
// 0050d123  0faf4608             imul eax, dword ptr [esi + 8]
// 0050d127  8d1440               lea edx, [eax + eax*2]
// 0050d12a  c7461003000000       mov dword ptr [esi + 0x10], 3
// 0050d131  52                   push edx
// 0050d132  e8f9b3ffff           call 0x508530
// 0050d137  894604               mov dword ptr [esi + 4], eax
// 0050d13a  8b442410             mov eax, dword ptr [esp + 0x10]
// 0050d13e  83c404               add esp, 4
// 0050d141  50                   push eax
// 0050d142  e8692b0100           call 0x51fcb0
// 0050d147  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0050d14b  8b542410             mov edx, dword ptr [esp + 0x10]
// 0050d14f  51                   push ecx
// 0050d150  52                   push edx
// 0050d151  8bf8                 mov edi, eax
// 0050d153  e8981f0100           call 0x51f0f0
// 0050d158  83c40c               add esp, 0xc
// 0050d15b  85ff                 test edi, edi
// 0050d15d  7643                 jbe 0x50d1a2
// 0050d15f  8bdf                 mov ebx, edi
// 0050d161  33ff                 xor edi, edi
// 0050d163  397e0c               cmp dword ptr [esi + 0xc], edi
// 0050d166  7635                 jbe 0x50d19d
// 0050d168  eb06                 jmp 0x50d170
// 0050d16a  8d9b00000000         lea ebx, [ebx]
// 0050d170  8b4610               mov eax, dword ptr [esi + 0x10]
// 0050d173  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0050d177  0fafc7               imul eax, edi
// 0050d17a  0faf4608             imul eax, dword ptr [esi + 8]
// 0050d17e  034604               add eax, dword ptr [esi + 4]
// 0050d181  6a01                 push 1
// 0050d183  6a00                 push 0
// 0050d185  8d4c242c             lea ecx, [esp + 0x2c]
// 0050d189  51                   push ecx
// 0050d18a  52                   push edx
// 0050d18b  89442434             mov dword ptr [esp + 0x34], eax
// 0050d18f  e81c240100           call 0x51f5b0
// 0050d194  47                   inc edi
// 0050d195  83c410               add esp, 0x10
// 0050d198  3b7e0c               cmp edi, dword ptr [esi + 0xc]
// 0050d19b  72d3                 jb 0x50d170
// 0050d19d  83eb01               sub ebx, 1
// 0050d1a0  75bf                 jne 0x50d161
// 0050d1a2  8b442410             mov eax, dword ptr [esp + 0x10]
// 0050d1a6  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0050d1aa  50                   push eax
// 0050d1ab  51                   push ecx
// 0050d1ac  e8ff240100           call 0x51f6b0
// 0050d1b1  8d542424             lea edx, [esp + 0x24]
// 0050d1b5  52                   push edx
// 0050d1b6  8d44241c             lea eax, [esp + 0x1c]
// 0050d1ba  50                   push eax
// 0050d1bb  8d4c241c             lea ecx, [esp + 0x1c]
// 0050d1bf  51                   push ecx
// 0050d1c0  e8eb290100           call 0x51fbb0
// 0050d1c5  8b8c24dc000000       mov ecx, dword ptr [esp + 0xdc]
// 0050d1cc  83c414               add esp, 0x14
// 0050d1cf  5b                   pop ebx
// 0050d1d0  5f                   pop edi
// 0050d1d1  5e                   pop esi
// 0050d1d2  64890d00000000       mov dword ptr fs:[0], ecx
// 0050d1d9  81c4c8000000         add esp, 0xc8
// 0050d1df  c20400               ret 4
// library g3d-6.09-rbx2008/G3Dcpp\GImage_png.cpp (function ?decodePNG@GImage@G3D@@AAEXAAVBinaryInput@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/GImage_png.cpp
