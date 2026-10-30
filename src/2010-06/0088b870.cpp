// roc 2010-06 0088b870  unit: CXTPTabPaintManager::CAppearanceSetPropertyPageFlat  size: 2700 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0088b870
//
// 0088b870  6aff                 push -1
// 0088b872  6878b39b00           push 0x9bb378
// 0088b877  64a100000000         mov eax, dword ptr fs:[0]
// 0088b87d  50                   push eax
// 0088b87e  81ecf8000000         sub esp, 0xf8
// 0088b884  53                   push ebx
// 0088b885  55                   push ebp
// 0088b886  56                   push esi
// 0088b887  57                   push edi
// 0088b888  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 0088b88d  33c4                 xor eax, esp
// 0088b88f  50                   push eax
// 0088b890  8d84240c010000       lea eax, [esp + 0x10c]
// 0088b897  64a300000000         mov dword ptr fs:[0], eax
// 0088b89d  894c2438             mov dword ptr [esp + 0x38], ecx
// 0088b8a1  8bbc2420010000       mov edi, dword ptr [esp + 0x120]
// 0088b8a8  8b4744               mov eax, dword ptr [edi + 0x44]
// 0088b8ab  8b4f48               mov ecx, dword ptr [edi + 0x48]
// 0088b8ae  8b574c               mov edx, dword ptr [edi + 0x4c]
// 0088b8b1  89442418             mov dword ptr [esp + 0x18], eax
// 0088b8b5  8b4750               mov eax, dword ptr [edi + 0x50]
// 0088b8b8  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0088b8bc  8b4f60               mov ecx, dword ptr [edi + 0x60]
// 0088b8bf  89442424             mov dword ptr [esp + 0x24], eax
// 0088b8c3  89542420             mov dword ptr [esp + 0x20], edx
// 0088b8c7  8b11                 mov edx, dword ptr [ecx]
// 0088b8c9  8b4248               mov eax, dword ptr [edx + 0x48]
// 0088b8cc  ffd0                 call eax
// 0088b8ce  8be8                 mov ebp, eax
// 0088b8d0  55                   push ebp
// 0088b8d1  33c9                 xor ecx, ecx
// 0088b8d3  83ec10               sub esp, 0x10
// 0088b8d6  8bc4                 mov eax, esp
// 0088b8d8  8908                 mov dword ptr [eax], ecx
// 0088b8da  33db                 xor ebx, ebx
// 0088b8dc  33d2                 xor edx, edx
// 0088b8de  895004               mov dword ptr [eax + 4], edx
// 0088b8e1  8d7301               lea esi, [ebx + 1]
// 0088b8e4  897008               mov dword ptr [eax + 8], esi
// 0088b8e7  89480c               mov dword ptr [eax + 0xc], ecx
// 0088b8ea  8d4c242c             lea ecx, [esp + 0x2c]
// 0088b8ee  51                   push ecx
// 0088b8ef  e86cc7ffff           call 0x888060
// 0088b8f4  8b542430             mov edx, dword ptr [esp + 0x30]
// 0088b8f8  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0088b8fc  8b442434             mov eax, dword ptr [esp + 0x34]
// 0088b900  8bb42434010000       mov esi, dword ptr [esp + 0x134]
// 0088b907  89542440             mov dword ptr [esp + 0x40], edx
// 0088b90b  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 0088b90f  894c2448             mov dword ptr [esp + 0x48], ecx
// 0088b913  83c418               add esp, 0x18
// 0088b916  8944242c             mov dword ptr [esp + 0x2c], eax
// 0088b91a  8b06                 mov eax, dword ptr [esi]
// 0088b91c  8d8c24fc000000       lea ecx, [esp + 0xfc]
// 0088b923  89542434             mov dword ptr [esp + 0x34], edx
// 0088b927  8b5058               mov edx, dword ptr [eax + 0x58]
// 0088b92a  51                   push ecx
// 0088b92b  8bce                 mov ecx, esi
// 0088b92d  ffd2                 call edx
// 0088b92f  899c24f8000000       mov dword ptr [esp + 0xf8], ebx
// 0088b936  c78424f4000000e06da500 mov dword ptr [esp + 0xf4], 0xa56de0
// 0088b941  8d8424fc000000       lea eax, [esp + 0xfc]
// 0088b948  50                   push eax
// 0088b949  899c2418010000       mov dword ptr [esp + 0x118], ebx
// 0088b950  ff150ca19e00         call dword ptr [0x9ea10c]
// 0088b956  50                   push eax
// 0088b957  8d8c24f8000000       lea ecx, [esp + 0xf8]
// 0088b95e  e807c6f1ff           call 0x7a7f6a
// 0088b963  55                   push ebp
// 0088b964  33c9                 xor ecx, ecx
// 0088b966  83ec10               sub esp, 0x10
// 0088b969  8bc4                 mov eax, esp
// 0088b96b  8908                 mov dword ptr [eax], ecx
// 0088b96d  895804               mov dword ptr [eax + 4], ebx
// 0088b970  894808               mov dword ptr [eax + 8], ecx
// 0088b973  b901000000           mov ecx, 1
// 0088b978  89480c               mov dword ptr [eax + 0xc], ecx
// 0088b97b  8d4c243c             lea ecx, [esp + 0x3c]
// 0088b97f  51                   push ecx
// 0088b980  e8dbc6ffff           call 0x888060
// 0088b985  8b542440             mov edx, dword ptr [esp + 0x40]
// 0088b989  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0088b98d  83c408               add esp, 8
// 0088b990  8bc4                 mov eax, esp
// 0088b992  8910                 mov dword ptr [eax], edx
// 0088b994  8b542440             mov edx, dword ptr [esp + 0x40]
// 0088b998  894804               mov dword ptr [eax + 4], ecx
// 0088b99b  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0088b99f  895008               mov dword ptr [eax + 8], edx
// 0088b9a2  56                   push esi
// 0088b9a3  89480c               mov dword ptr [eax + 0xc], ecx
// 0088b9a6  e85559f7ff           call 0x801300
// 0088b9ab  8bc8                 mov ecx, eax
// 0088b9ad  e87eaefaff           call 0x836830
// 0088b9b2  8b542418             mov edx, dword ptr [esp + 0x18]
// 0088b9b6  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0088b9ba  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0088b9be  55                   push ebp
// 0088b9bf  899424e4000000       mov dword ptr [esp + 0xe4], edx
// 0088b9c6  8b542428             mov edx, dword ptr [esp + 0x28]
// 0088b9ca  898c24ec000000       mov dword ptr [esp + 0xec], ecx
// 0088b9d1  83c9ff               or ecx, 0xffffffff
// 0088b9d4  898424e8000000       mov dword ptr [esp + 0xe8], eax
// 0088b9db  83ec10               sub esp, 0x10
// 0088b9de  8bc4                 mov eax, esp
// 0088b9e0  8908                 mov dword ptr [eax], ecx
// 0088b9e2  89942400010000       mov dword ptr [esp + 0x100], edx
// 0088b9e9  0bd1                 or edx, ecx
// 0088b9eb  895004               mov dword ptr [eax + 4], edx
// 0088b9ee  0bc9                 or ecx, ecx
// 0088b9f0  894808               mov dword ptr [eax + 8], ecx
// 0088b9f3  33c9                 xor ecx, ecx
// 0088b9f5  89480c               mov dword ptr [eax + 0xc], ecx
// 0088b9f8  8d8424f4000000       lea eax, [esp + 0xf4]
// 0088b9ff  50                   push eax
// 0088ba00  e85bc6ffff           call 0x888060
// 0088ba05  8b442450             mov eax, dword ptr [esp + 0x50]
// 0088ba09  83c418               add esp, 0x18
// 0088ba0c  395828               cmp dword ptr [eax + 0x28], ebx
// 0088ba0f  0f84a9010000         je 0x88bbbe
// 0088ba15  8b5760               mov edx, dword ptr [edi + 0x60]
// 0088ba18  397a04               cmp dword ptr [edx + 4], edi
// 0088ba1b  0f850f010000         jne 0x88bb30
// 0088ba21  8b481c               mov ecx, dword ptr [eax + 0x1c]
// 0088ba24  8b81e4000000         mov eax, dword ptr [ecx + 0xe4]
// 0088ba2a  8b10                 mov edx, dword ptr [eax]
// 0088ba2c  8b8c24e0000000       mov ecx, dword ptr [esp + 0xe0]
// 0088ba33  8b5218               mov edx, dword ptr [edx + 0x18]
// 0088ba36  57                   push edi
// 0088ba37  83ec10               sub esp, 0x10
// 0088ba3a  89442428             mov dword ptr [esp + 0x28], eax
// 0088ba3e  8bc4                 mov eax, esp
// 0088ba40  8908                 mov dword ptr [eax], ecx
// 0088ba42  8b8c24f8000000       mov ecx, dword ptr [esp + 0xf8]
// 0088ba49  894804               mov dword ptr [eax + 4], ecx
// 0088ba4c  8b8c24fc000000       mov ecx, dword ptr [esp + 0xfc]
// 0088ba53  894808               mov dword ptr [eax + 8], ecx
// 0088ba56  8b8c2400010000       mov ecx, dword ptr [esp + 0x100]
// 0088ba5d  89480c               mov dword ptr [eax + 0xc], ecx
// 0088ba60  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0088ba64  56                   push esi
// 0088ba65  ffd2                 call edx
// 0088ba67  8b4760               mov eax, dword ptr [edi + 0x60]
// 0088ba6a  397804               cmp dword ptr [eax + 4], edi
// 0088ba6d  7462                 je 0x88bad1
// 0088ba6f  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0088ba73  8b511c               mov edx, dword ptr [ecx + 0x1c]
// 0088ba76  8b82e4000000         mov eax, dword ptr [edx + 0xe4]
// 0088ba7c  8b484c               mov ecx, dword ptr [eax + 0x4c]
// 0088ba7f  83f9ff               cmp ecx, -1
// 0088ba82  7503                 jne 0x88ba87
// 0088ba84  8b4848               mov ecx, dword ptr [eax + 0x48]
// 0088ba87  8b504c               mov edx, dword ptr [eax + 0x4c]
// 0088ba8a  83faff               cmp edx, -1
// 0088ba8d  7505                 jne 0x88ba94
// 0088ba8f  8b4048               mov eax, dword ptr [eax + 0x48]
// 0088ba92  eb02                 jmp 0x88ba96
// 0088ba94  8bc2                 mov eax, edx
// 0088ba96  51                   push ecx
// 0088ba97  50                   push eax
// 0088ba98  8d4502               lea eax, [ebp + 2]
// 0088ba9b  2503000080           and eax, 0x80000003
// 0088baa0  7905                 jns 0x88baa7
// 0088baa2  48                   dec eax
// 0088baa3  83c8fc               or eax, 0xfffffffc
// 0088baa6  40                   inc eax
// 0088baa7  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0088baab  8b542424             mov edx, dword ptr [esp + 0x24]
// 0088baaf  50                   push eax
// 0088bab0  83ec10               sub esp, 0x10
// 0088bab3  8bc4                 mov eax, esp
// 0088bab5  8908                 mov dword ptr [eax], ecx
// 0088bab7  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0088babb  895004               mov dword ptr [eax + 4], edx
// 0088babe  8b542440             mov edx, dword ptr [esp + 0x40]
// 0088bac2  894808               mov dword ptr [eax + 8], ecx
// 0088bac5  56                   push esi
// 0088bac6  89500c               mov dword ptr [eax + 0xc], edx
// 0088bac9  e8a2ceffff           call 0x888970
// 0088bace  83c420               add esp, 0x20
// 0088bad1  55                   push ebp
// 0088bad2  33c9                 xor ecx, ecx
// 0088bad4  83ec10               sub esp, 0x10
// 0088bad7  8bc4                 mov eax, esp
// 0088bad9  8908                 mov dword ptr [eax], ecx
// 0088badb  895804               mov dword ptr [eax + 4], ebx
// 0088bade  894808               mov dword ptr [eax + 8], ecx
// 0088bae1  b902000000           mov ecx, 2
// 0088bae6  89480c               mov dword ptr [eax + 0xc], ecx
// 0088bae9  8d44242c             lea eax, [esp + 0x2c]
// 0088baed  50                   push eax
// 0088baee  e86dc5ffff           call 0x888060
// 0088baf3  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 0088baf7  8b511c               mov edx, dword ptr [ecx + 0x1c]
// 0088bafa  8b82e4000000         mov eax, dword ptr [edx + 0xe4]
// 0088bb00  8b484c               mov ecx, dword ptr [eax + 0x4c]
// 0088bb03  83c418               add esp, 0x18
// 0088bb06  83f9ff               cmp ecx, -1
// 0088bb09  7505                 jne 0x88bb10
// 0088bb0b  8b4048               mov eax, dword ptr [eax + 0x48]
// 0088bb0e  eb02                 jmp 0x88bb12
// 0088bb10  8bc1                 mov eax, ecx
// 0088bb12  8b5604               mov edx, dword ptr [esi + 4]
// 0088bb15  50                   push eax
// 0088bb16  52                   push edx
// 0088bb17  8d8c24e8000000       lea ecx, [esp + 0xe8]
// 0088bb1e  e81d3cf7ff           call 0x7ff740
// 0088bb23  c684241401000001     mov byte ptr [esp + 0x114], 1
// 0088bb2b  e91b020000           jmp 0x88bd4b
// 0088bb30  8b525c               mov edx, dword ptr [edx + 0x5c]
// 0088bb33  8b4f2c               mov ecx, dword ptr [edi + 0x2c]
// 0088bb36  4a                   dec edx
// 0088bb37  3bca                 cmp ecx, edx
// 0088bb39  0f8d69020000         jge 0x88bda8
// 0088bb3f  83fd02               cmp ebp, 2
// 0088bb42  7404                 je 0x88bb48
// 0088bb44  3beb                 cmp ebp, ebx
// 0088bb46  753b                 jne 0x88bb83
// 0088bb48  8b401c               mov eax, dword ptr [eax + 0x1c]
// 0088bb4b  8b88e4000000         mov ecx, dword ptr [eax + 0xe4]
// 0088bb51  8b414c               mov eax, dword ptr [ecx + 0x4c]
// 0088bb54  83f8ff               cmp eax, -1
// 0088bb57  7503                 jne 0x88bb5c
// 0088bb59  8b4148               mov eax, dword ptr [ecx + 0x48]
// 0088bb5c  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0088bb60  50                   push eax
// 0088bb61  8b442428             mov eax, dword ptr [esp + 0x28]
// 0088bb65  2bc1                 sub eax, ecx
// 0088bb67  83e806               sub eax, 6
// 0088bb6a  50                   push eax
// 0088bb6b  83c103               add ecx, 3
// 0088bb6e  6a01                 push 1
// 0088bb70  51                   push ecx
// 0088bb71  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0088bb75  49                   dec ecx
// 0088bb76  51                   push ecx
// 0088bb77  8bce                 mov ecx, esi
// 0088bb79  e80c120f00           call 0x97cd8a
// 0088bb7e  e925020000           jmp 0x88bda8
// 0088bb83  8b501c               mov edx, dword ptr [eax + 0x1c]
// 0088bb86  8b8ae4000000         mov ecx, dword ptr [edx + 0xe4]
// 0088bb8c  8b414c               mov eax, dword ptr [ecx + 0x4c]
// 0088bb8f  83f8ff               cmp eax, -1
// 0088bb92  7503                 jne 0x88bb97
// 0088bb94  8b4148               mov eax, dword ptr [ecx + 0x48]
// 0088bb97  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0088bb9b  50                   push eax
// 0088bb9c  8b442424             mov eax, dword ptr [esp + 0x24]
// 0088bba0  2bc1                 sub eax, ecx
// 0088bba2  6a01                 push 1
// 0088bba4  83e806               sub eax, 6
// 0088bba7  50                   push eax
// 0088bba8  8b442430             mov eax, dword ptr [esp + 0x30]
// 0088bbac  48                   dec eax
// 0088bbad  83c103               add ecx, 3
// 0088bbb0  50                   push eax
// 0088bbb1  51                   push ecx
// 0088bbb2  8bce                 mov ecx, esi
// 0088bbb4  e8d1110f00           call 0x97cd8a
// 0088bbb9  e9ea010000           jmp 0x88bda8
// 0088bbbe  8b481c               mov ecx, dword ptr [eax + 0x1c]
// 0088bbc1  8b81e4000000         mov eax, dword ptr [ecx + 0xe4]
// 0088bbc7  8b10                 mov edx, dword ptr [eax]
// 0088bbc9  8b8c24e0000000       mov ecx, dword ptr [esp + 0xe0]
// 0088bbd0  8b5218               mov edx, dword ptr [edx + 0x18]
// 0088bbd3  57                   push edi
// 0088bbd4  83ec10               sub esp, 0x10
// 0088bbd7  89442428             mov dword ptr [esp + 0x28], eax
// 0088bbdb  8bc4                 mov eax, esp
// 0088bbdd  8908                 mov dword ptr [eax], ecx
// 0088bbdf  8b8c24f8000000       mov ecx, dword ptr [esp + 0xf8]
// 0088bbe6  894804               mov dword ptr [eax + 4], ecx
// 0088bbe9  8b8c24fc000000       mov ecx, dword ptr [esp + 0xfc]
// 0088bbf0  894808               mov dword ptr [eax + 8], ecx
// 0088bbf3  8b8c2400010000       mov ecx, dword ptr [esp + 0x100]
// 0088bbfa  89480c               mov dword ptr [eax + 0xc], ecx
// 0088bbfd  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0088bc01  56                   push esi
// 0088bc02  ffd2                 call edx
// 0088bc04  8b442438             mov eax, dword ptr [esp + 0x38]
// 0088bc08  395824               cmp dword ptr [eax + 0x24], ebx
// 0088bc0b  7478                 je 0x88bc85
// 0088bc0d  8b4f60               mov ecx, dword ptr [edi + 0x60]
// 0088bc10  397904               cmp dword ptr [ecx + 4], edi
// 0088bc13  7529                 jne 0x88bc3e
// 0088bc15  55                   push ebp
// 0088bc16  33c9                 xor ecx, ecx
// 0088bc18  83ec10               sub esp, 0x10
// 0088bc1b  8bc4                 mov eax, esp
// 0088bc1d  8908                 mov dword ptr [eax], ecx
// 0088bc1f  895804               mov dword ptr [eax + 4], ebx
// 0088bc22  894808               mov dword ptr [eax + 8], ecx
// 0088bc25  8d54242c             lea edx, [esp + 0x2c]
// 0088bc29  b901000000           mov ecx, 1
// 0088bc2e  52                   push edx
// 0088bc2f  89480c               mov dword ptr [eax + 0xc], ecx
// 0088bc32  e829c4ffff           call 0x888060
// 0088bc37  8b442450             mov eax, dword ptr [esp + 0x50]
// 0088bc3b  83c418               add esp, 0x18
// 0088bc3e  8b401c               mov eax, dword ptr [eax + 0x1c]
// 0088bc41  8b80e4000000         mov eax, dword ptr [eax + 0xe4]
// 0088bc47  8b484c               mov ecx, dword ptr [eax + 0x4c]
// 0088bc4a  83f9ff               cmp ecx, -1
// 0088bc4d  7503                 jne 0x88bc52
// 0088bc4f  8b4848               mov ecx, dword ptr [eax + 0x48]
// 0088bc52  8b504c               mov edx, dword ptr [eax + 0x4c]
// 0088bc55  83faff               cmp edx, -1
// 0088bc58  7516                 jne 0x88bc70
// 0088bc5a  8b4048               mov eax, dword ptr [eax + 0x48]
// 0088bc5d  51                   push ecx
// 0088bc5e  50                   push eax
// 0088bc5f  8d4c2420             lea ecx, [esp + 0x20]
// 0088bc63  51                   push ecx
// 0088bc64  8bce                 mov ecx, esi
// 0088bc66  e8cdcaf1ff           call 0x7a8738
// 0088bc6b  e938010000           jmp 0x88bda8
// 0088bc70  51                   push ecx
// 0088bc71  8bc2                 mov eax, edx
// 0088bc73  50                   push eax
// 0088bc74  8d4c2420             lea ecx, [esp + 0x20]
// 0088bc78  51                   push ecx
// 0088bc79  8bce                 mov ecx, esi
// 0088bc7b  e8b8caf1ff           call 0x7a8738
// 0088bc80  e923010000           jmp 0x88bda8
// 0088bc85  8b401c               mov eax, dword ptr [eax + 0x1c]
// 0088bc88  83783802             cmp dword ptr [eax + 0x38], 2
// 0088bc8c  7463                 je 0x88bcf1
// 0088bc8e  8b5760               mov edx, dword ptr [edi + 0x60]
// 0088bc91  397a04               cmp dword ptr [edx + 4], edi
// 0088bc94  745b                 je 0x88bcf1
// 0088bc96  8b80e4000000         mov eax, dword ptr [eax + 0xe4]
// 0088bc9c  8b484c               mov ecx, dword ptr [eax + 0x4c]
// 0088bc9f  83f9ff               cmp ecx, -1
// 0088bca2  7503                 jne 0x88bca7
// 0088bca4  8b4848               mov ecx, dword ptr [eax + 0x48]
// 0088bca7  8b504c               mov edx, dword ptr [eax + 0x4c]
// 0088bcaa  83faff               cmp edx, -1
// 0088bcad  7505                 jne 0x88bcb4
// 0088bcaf  8b4048               mov eax, dword ptr [eax + 0x48]
// 0088bcb2  eb02                 jmp 0x88bcb6
// 0088bcb4  8bc2                 mov eax, edx
// 0088bcb6  51                   push ecx
// 0088bcb7  50                   push eax
// 0088bcb8  8d4502               lea eax, [ebp + 2]
// 0088bcbb  2503000080           and eax, 0x80000003
// 0088bcc0  7905                 jns 0x88bcc7
// 0088bcc2  48                   dec eax
// 0088bcc3  83c8fc               or eax, 0xfffffffc
// 0088bcc6  40                   inc eax
// 0088bcc7  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0088bccb  8b542424             mov edx, dword ptr [esp + 0x24]
// 0088bccf  50                   push eax
// 0088bcd0  83ec10               sub esp, 0x10
// 0088bcd3  8bc4                 mov eax, esp
// 0088bcd5  8908                 mov dword ptr [eax], ecx
// 0088bcd7  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0088bcdb  895004               mov dword ptr [eax + 4], edx
// 0088bcde  8b542440             mov edx, dword ptr [esp + 0x40]
// 0088bce2  894808               mov dword ptr [eax + 8], ecx
// 0088bce5  56                   push esi
// 0088bce6  89500c               mov dword ptr [eax + 0xc], edx
// 0088bce9  e882ccffff           call 0x888970
// 0088bcee  83c420               add esp, 0x20
// 0088bcf1  55                   push ebp
// 0088bcf2  33c9                 xor ecx, ecx
// 0088bcf4  83ec10               sub esp, 0x10
// 0088bcf7  8bc4                 mov eax, esp
// 0088bcf9  8908                 mov dword ptr [eax], ecx
// 0088bcfb  895804               mov dword ptr [eax + 4], ebx
// 0088bcfe  894808               mov dword ptr [eax + 8], ecx
// 0088bd01  b902000000           mov ecx, 2
// 0088bd06  89480c               mov dword ptr [eax + 0xc], ecx
// 0088bd09  8d44242c             lea eax, [esp + 0x2c]
// 0088bd0d  50                   push eax
// 0088bd0e  e84dc3ffff           call 0x888060
// 0088bd13  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 0088bd17  8b511c               mov edx, dword ptr [ecx + 0x1c]
// 0088bd1a  8b82e4000000         mov eax, dword ptr [edx + 0xe4]
// 0088bd20  8b484c               mov ecx, dword ptr [eax + 0x4c]
// 0088bd23  83c418               add esp, 0x18
// 0088bd26  83f9ff               cmp ecx, -1
// 0088bd29  7505                 jne 0x88bd30
// 0088bd2b  8b4048               mov eax, dword ptr [eax + 0x48]
// 0088bd2e  eb02                 jmp 0x88bd32
// 0088bd30  8bc1                 mov eax, ecx
// 0088bd32  8b5604               mov edx, dword ptr [esi + 4]
// 0088bd35  50                   push eax
// 0088bd36  52                   push edx
// 0088bd37  8d8c24e8000000       lea ecx, [esp + 0xe8]
// 0088bd3e  e8fd39f7ff           call 0x7ff740
// 0088bd43  c684241401000002     mov byte ptr [esp + 0x114], 2
// 0088bd4b  8b06                 mov eax, dword ptr [esi]
// 0088bd4d  8b502c               mov edx, dword ptr [eax + 0x2c]
// 0088bd50  6a05                 push 5
// 0088bd52  8bce                 mov ecx, esi
// 0088bd54  ffd2                 call edx
// 0088bd56  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0088bd5a  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0088bd5e  6a06                 push 6
// 0088bd60  6a06                 push 6
// 0088bd62  8944241c             mov dword ptr [esp + 0x1c], eax
// 0088bd66  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0088bd6a  50                   push eax
// 0088bd6b  8b442424             mov eax, dword ptr [esp + 0x24]
// 0088bd6f  51                   push ecx
// 0088bd70  8b4e04               mov ecx, dword ptr [esi + 4]
// 0088bd73  52                   push edx
// 0088bd74  50                   push eax
// 0088bd75  51                   push ecx
// 0088bd76  ff15e0a09e00         call dword ptr [0x9ea0e0]
// 0088bd7c  8b442414             mov eax, dword ptr [esp + 0x14]
// 0088bd80  3bc3                 cmp eax, ebx
// 0088bd82  7504                 jne 0x88bd88
// 0088bd84  33c0                 xor eax, eax
// 0088bd86  eb03                 jmp 0x88bd8b
// 0088bd88  8b4004               mov eax, dword ptr [eax + 4]
// 0088bd8b  8b5604               mov edx, dword ptr [esi + 4]
// 0088bd8e  50                   push eax
// 0088bd8f  52                   push edx
// 0088bd90  e89f110f00           call 0x97cf34
// 0088bd95  8d8c24e0000000       lea ecx, [esp + 0xe0]
// 0088bd9c  889c2414010000       mov byte ptr [esp + 0x114], bl
// 0088bda3  e8283af7ff           call 0x7ff7d0
// 0088bda8  8d8424f4000000       lea eax, [esp + 0xf4]
// 0088bdaf  50                   push eax
// 0088bdb0  8bce                 mov ecx, esi
// 0088bdb2  e8e9110f00           call 0x97cfa0
// 0088bdb7  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0088bdbb  395924               cmp dword ptr [ecx + 0x24], ebx
// 0088bdbe  0f84bb040000         je 0x88c27f
// 0088bdc4  83fd03               cmp ebp, 3
// 0088bdc7  0f87b2040000         ja 0x88c27f
// 0088bdcd  ff24adecc28800       jmp dword ptr [ebp*4 + 0x88c2ec]
// 0088bdd4  8b542428             mov edx, dword ptr [esp + 0x28]
// 0088bdd8  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0088bddc  89542440             mov dword ptr [esp + 0x40], edx
// 0088bde0  42                   inc edx
// 0088bde1  89542414             mov dword ptr [esp + 0x14], edx
// 0088bde5  89542450             mov dword ptr [esp + 0x50], edx
// 0088bde9  8b542430             mov edx, dword ptr [esp + 0x30]
// 0088bded  83c2fe               add edx, -2
// 0088bdf0  8954243c             mov dword ptr [esp + 0x3c], edx
// 0088bdf4  89542460             mov dword ptr [esp + 0x60], edx
// 0088bdf8  8b542430             mov edx, dword ptr [esp + 0x30]
// 0088bdfc  4a                   dec edx
// 0088bdfd  89542470             mov dword ptr [esp + 0x70], edx
// 0088be01  8b542414             mov edx, dword ptr [esp + 0x14]
// 0088be05  89942480000000       mov dword ptr [esp + 0x80], edx
// 0088be0c  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 0088be10  8d4101               lea eax, [ecx + 1]
// 0088be13  89942490000000       mov dword ptr [esp + 0x90], edx
// 0088be1a  8b542428             mov edx, dword ptr [esp + 0x28]
// 0088be1e  83c202               add edx, 2
// 0088be21  894c2454             mov dword ptr [esp + 0x54], ecx
// 0088be25  894c2464             mov dword ptr [esp + 0x64], ecx
// 0088be29  899424a0000000       mov dword ptr [esp + 0xa0], edx
// 0088be30  8b542414             mov edx, dword ptr [esp + 0x14]
// 0088be34  83c102               add ecx, 2
// 0088be37  83cdff               or ebp, 0xffffffff
// 0088be3a  899424b0000000       mov dword ptr [esp + 0xb0], edx
// 0088be41  8b542430             mov edx, dword ptr [esp + 0x30]
// 0088be45  898c24b4000000       mov dword ptr [esp + 0xb4], ecx
// 0088be4c  898c24d4000000       mov dword ptr [esp + 0xd4], ecx
// 0088be53  6a14                 push 0x14
// 0088be55  8d4c2444             lea ecx, [esp + 0x44]
// 0088be59  89442448             mov dword ptr [esp + 0x48], eax
// 0088be5d  89442478             mov dword ptr [esp + 0x78], eax
// 0088be61  89842488000000       mov dword ptr [esp + 0x88], eax
// 0088be68  89842498000000       mov dword ptr [esp + 0x98], eax
// 0088be6f  898424a8000000       mov dword ptr [esp + 0xa8], eax
// 0088be76  898424c8000000       mov dword ptr [esp + 0xc8], eax
// 0088be7d  8b442440             mov eax, dword ptr [esp + 0x40]
// 0088be81  51                   push ecx
// 0088be82  83c2fd               add edx, -3
// 0088be85  56                   push esi
// 0088be86  895c2454             mov dword ptr [esp + 0x54], ebx
// 0088be8a  896c2458             mov dword ptr [esp + 0x58], ebp
// 0088be8e  896c2464             mov dword ptr [esp + 0x64], ebp
// 0088be92  895c2468             mov dword ptr [esp + 0x68], ebx
// 0088be96  c744247401000000     mov dword ptr [esp + 0x74], 1
// 0088be9e  895c2478             mov dword ptr [esp + 0x78], ebx
// 0088bea2  899c2484000000       mov dword ptr [esp + 0x84], ebx
// 0088bea9  89ac2488000000       mov dword ptr [esp + 0x88], ebp
// 0088beb0  89ac2494000000       mov dword ptr [esp + 0x94], ebp
// 0088beb7  899c2498000000       mov dword ptr [esp + 0x98], ebx
// 0088bebe  c78424a400000001000000 mov dword ptr [esp + 0xa4], 1
// 0088bec9  899c24a8000000       mov dword ptr [esp + 0xa8], ebx
// 0088bed0  89ac24b4000000       mov dword ptr [esp + 0xb4], ebp
// 0088bed7  899c24b8000000       mov dword ptr [esp + 0xb8], ebx
// 0088bede  899c24c4000000       mov dword ptr [esp + 0xc4], ebx
// 0088bee5  89ac24c8000000       mov dword ptr [esp + 0xc8], ebp
// 0088beec  899424cc000000       mov dword ptr [esp + 0xcc], edx
// 0088bef3  c78424d400000001000000 mov dword ptr [esp + 0xd4], 1
// 0088befe  899c24d8000000       mov dword ptr [esp + 0xd8], ebx
// 0088bf05  898424dc000000       mov dword ptr [esp + 0xdc], eax
// 0088bf0c  899c24e4000000       mov dword ptr [esp + 0xe4], ebx
// 0088bf13  89ac24e8000000       mov dword ptr [esp + 0xe8], ebp
// 0088bf1a  e8e153f7ff           call 0x801300
// 0088bf1f  8bc8                 mov ecx, eax
// 0088bf21  e84a41f7ff           call 0x800070
// 0088bf26  e957030000           jmp 0x88c282
// 0088bf2b  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 0088bf2f  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0088bf33  8d4501               lea eax, [ebp + 1]
// 0088bf36  896c2454             mov dword ptr [esp + 0x54], ebp
// 0088bf3a  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 0088bf3e  83c5fe               add ebp, -2
// 0088bf41  894c2440             mov dword ptr [esp + 0x40], ecx
// 0088bf45  894c2460             mov dword ptr [esp + 0x60], ecx
// 0088bf49  896c2464             mov dword ptr [esp + 0x64], ebp
// 0088bf4d  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 0088bf51  89442444             mov dword ptr [esp + 0x44], eax
// 0088bf55  8d4101               lea eax, [ecx + 1]
// 0088bf58  83c102               add ecx, 2
// 0088bf5b  894c2414             mov dword ptr [esp + 0x14], ecx
// 0088bf5f  898c24a0000000       mov dword ptr [esp + 0xa0], ecx
// 0088bf66  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0088bf6a  83caff               or edx, 0xffffffff
// 0088bf6d  896c2474             mov dword ptr [esp + 0x74], ebp
// 0088bf71  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 0088bf75  41                   inc ecx
// 0088bf76  45                   inc ebp
// 0088bf77  898c24a4000000       mov dword ptr [esp + 0xa4], ecx
// 0088bf7e  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0088bf82  89ac2484000000       mov dword ptr [esp + 0x84], ebp
// 0088bf89  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 0088bf8d  83c102               add ecx, 2
// 0088bf90  8954244c             mov dword ptr [esp + 0x4c], edx
// 0088bf94  89542458             mov dword ptr [esp + 0x58], edx
// 0088bf98  89542478             mov dword ptr [esp + 0x78], edx
// 0088bf9c  89942488000000       mov dword ptr [esp + 0x88], edx
// 0088bfa3  89942498000000       mov dword ptr [esp + 0x98], edx
// 0088bfaa  899424a8000000       mov dword ptr [esp + 0xa8], edx
// 0088bfb1  899424bc000000       mov dword ptr [esp + 0xbc], edx
// 0088bfb8  899424c8000000       mov dword ptr [esp + 0xc8], edx
// 0088bfbf  8b542434             mov edx, dword ptr [esp + 0x34]
// 0088bfc3  83c5fe               add ebp, -2
// 0088bfc6  898c24b4000000       mov dword ptr [esp + 0xb4], ecx
// 0088bfcd  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0088bfd1  83c2fd               add edx, -3
// 0088bfd4  895c2448             mov dword ptr [esp + 0x48], ebx
// 0088bfd8  89442450             mov dword ptr [esp + 0x50], eax
// 0088bfdc  895c245c             mov dword ptr [esp + 0x5c], ebx
// 0088bfe0  895c2468             mov dword ptr [esp + 0x68], ebx
// 0088bfe4  c744246c01000000     mov dword ptr [esp + 0x6c], 1
// 0088bfec  89442470             mov dword ptr [esp + 0x70], eax
// 0088bff0  89ac2494000000       mov dword ptr [esp + 0x94], ebp
// 0088bff7  898c24c0000000       mov dword ptr [esp + 0xc0], ecx
// 0088bffe  89ac24c4000000       mov dword ptr [esp + 0xc4], ebp
// 0088c005  899424d4000000       mov dword ptr [esp + 0xd4], edx
// 0088c00c  c78424dc00000001000000 mov dword ptr [esp + 0xdc], 1
// 0088c017  e902020000           jmp 0x88c21e
// 0088c01c  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 0088c020  8d45fe               lea eax, [ebp - 2]
// 0088c023  8b542428             mov edx, dword ptr [esp + 0x28]
// 0088c027  4d                   dec ebp
// 0088c028  896c2454             mov dword ptr [esp + 0x54], ebp
// 0088c02c  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 0088c030  4d                   dec ebp
// 0088c031  896c2460             mov dword ptr [esp + 0x60], ebp
// 0088c035  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 0088c039  83c5fe               add ebp, -2
// 0088c03c  896c243c             mov dword ptr [esp + 0x3c], ebp
// 0088c040  896c2470             mov dword ptr [esp + 0x70], ebp
// 0088c044  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 0088c048  4d                   dec ebp
// 0088c049  896c2474             mov dword ptr [esp + 0x74], ebp
// 0088c04d  8b6c243c             mov ebp, dword ptr [esp + 0x3c]
// 0088c051  b901000000           mov ecx, 1
// 0088c056  89ac2490000000       mov dword ptr [esp + 0x90], ebp
// 0088c05d  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 0088c061  89542440             mov dword ptr [esp + 0x40], edx
// 0088c065  42                   inc edx
// 0088c066  83c502               add ebp, 2
// 0088c069  89542450             mov dword ptr [esp + 0x50], edx
// 0088c06d  89942480000000       mov dword ptr [esp + 0x80], edx
// 0088c074  899424b0000000       mov dword ptr [esp + 0xb0], edx
// 0088c07b  8b542434             mov edx, dword ptr [esp + 0x34]
// 0088c07f  89ac24a0000000       mov dword ptr [esp + 0xa0], ebp
// 0088c086  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 0088c08a  83c2fd               add edx, -3
// 0088c08d  89442444             mov dword ptr [esp + 0x44], eax
// 0088c091  894c244c             mov dword ptr [esp + 0x4c], ecx
// 0088c095  89442464             mov dword ptr [esp + 0x64], eax
// 0088c099  894c246c             mov dword ptr [esp + 0x6c], ecx
// 0088c09d  894c2478             mov dword ptr [esp + 0x78], ecx
// 0088c0a1  89842484000000       mov dword ptr [esp + 0x84], eax
// 0088c0a8  898c248c000000       mov dword ptr [esp + 0x8c], ecx
// 0088c0af  89842494000000       mov dword ptr [esp + 0x94], eax
// 0088c0b6  898c2498000000       mov dword ptr [esp + 0x98], ecx
// 0088c0bd  898424a4000000       mov dword ptr [esp + 0xa4], eax
// 0088c0c4  898c24bc000000       mov dword ptr [esp + 0xbc], ecx
// 0088c0cb  898424c4000000       mov dword ptr [esp + 0xc4], eax
// 0088c0d2  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 0088c0d6  898c24c8000000       mov dword ptr [esp + 0xc8], ecx
// 0088c0dd  898c24dc000000       mov dword ptr [esp + 0xdc], ecx
// 0088c0e4  83c5fd               add ebp, -3
// 0088c0e7  6a14                 push 0x14
// 0088c0e9  8d4c2444             lea ecx, [esp + 0x44]
// 0088c0ed  895c244c             mov dword ptr [esp + 0x4c], ebx
// 0088c0f1  c744245cffffffff     mov dword ptr [esp + 0x5c], 0xffffffff
// 0088c0f9  895c2460             mov dword ptr [esp + 0x60], ebx
// 0088c0fd  895c246c             mov dword ptr [esp + 0x6c], ebx
// 0088c101  899c2480000000       mov dword ptr [esp + 0x80], ebx
// 0088c108  899c248c000000       mov dword ptr [esp + 0x8c], ebx
// 0088c10f  c78424ac000000ffffffff mov dword ptr [esp + 0xac], 0xffffffff
// 0088c11a  899424b8000000       mov dword ptr [esp + 0xb8], edx
// 0088c121  89ac24c4000000       mov dword ptr [esp + 0xc4], ebp
// 0088c128  898424d4000000       mov dword ptr [esp + 0xd4], eax
// 0088c12f  899424d8000000       mov dword ptr [esp + 0xd8], edx
// 0088c136  51                   push ecx
// 0088c137  e913010000           jmp 0x88c24f
// 0088c13c  8b442430             mov eax, dword ptr [esp + 0x30]
// 0088c140  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0088c144  8d68ff               lea ebp, [eax - 1]
// 0088c147  896c2440             mov dword ptr [esp + 0x40], ebp
// 0088c14b  896c2460             mov dword ptr [esp + 0x60], ebp
// 0088c14f  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 0088c153  83c5fe               add ebp, -2
// 0088c156  896c2464             mov dword ptr [esp + 0x64], ebp
// 0088c15a  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 0088c15e  896c2474             mov dword ptr [esp + 0x74], ebp
// 0088c162  83c5fe               add ebp, -2
// 0088c165  8d5101               lea edx, [ecx + 1]
// 0088c168  89ac2494000000       mov dword ptr [esp + 0x94], ebp
// 0088c16f  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 0088c173  89542444             mov dword ptr [esp + 0x44], edx
// 0088c177  89942484000000       mov dword ptr [esp + 0x84], edx
// 0088c17e  83c5fd               add ebp, -3
// 0088c181  899424a4000000       mov dword ptr [esp + 0xa4], edx
// 0088c188  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0088c18c  83c202               add edx, 2
// 0088c18f  89ac24a0000000       mov dword ptr [esp + 0xa0], ebp
// 0088c196  89ac24c0000000       mov dword ptr [esp + 0xc0], ebp
// 0088c19d  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 0088c1a1  83c0fe               add eax, -2
// 0088c1a4  899424b4000000       mov dword ptr [esp + 0xb4], edx
// 0088c1ab  8d55fe               lea edx, [ebp - 2]
// 0088c1ae  894c2454             mov dword ptr [esp + 0x54], ecx
// 0088c1b2  b901000000           mov ecx, 1
// 0088c1b7  83c5fd               add ebp, -3
// 0088c1ba  895c2448             mov dword ptr [esp + 0x48], ebx
// 0088c1be  c744244cffffffff     mov dword ptr [esp + 0x4c], 0xffffffff
// 0088c1c6  89442450             mov dword ptr [esp + 0x50], eax
// 0088c1ca  894c2458             mov dword ptr [esp + 0x58], ecx
// 0088c1ce  895c245c             mov dword ptr [esp + 0x5c], ebx
// 0088c1d2  895c2468             mov dword ptr [esp + 0x68], ebx
// 0088c1d6  894c246c             mov dword ptr [esp + 0x6c], ecx
// 0088c1da  89442470             mov dword ptr [esp + 0x70], eax
// 0088c1de  894c2478             mov dword ptr [esp + 0x78], ecx
// 0088c1e2  898c2488000000       mov dword ptr [esp + 0x88], ecx
// 0088c1e9  898c2498000000       mov dword ptr [esp + 0x98], ecx
// 0088c1f0  898c24a8000000       mov dword ptr [esp + 0xa8], ecx
// 0088c1f7  c78424bc000000ffffffff mov dword ptr [esp + 0xbc], 0xffffffff
// 0088c202  899424c4000000       mov dword ptr [esp + 0xc4], edx
// 0088c209  898c24c8000000       mov dword ptr [esp + 0xc8], ecx
// 0088c210  89ac24d4000000       mov dword ptr [esp + 0xd4], ebp
// 0088c217  898c24dc000000       mov dword ptr [esp + 0xdc], ecx
// 0088c21e  89842480000000       mov dword ptr [esp + 0x80], eax
// 0088c225  89842490000000       mov dword ptr [esp + 0x90], eax
// 0088c22c  898424b0000000       mov dword ptr [esp + 0xb0], eax
// 0088c233  898424d0000000       mov dword ptr [esp + 0xd0], eax
// 0088c23a  6a14                 push 0x14
// 0088c23c  8d442444             lea eax, [esp + 0x44]
// 0088c240  899c2480000000       mov dword ptr [esp + 0x80], ebx
// 0088c247  899c2490000000       mov dword ptr [esp + 0x90], ebx
// 0088c24e  50                   push eax
// 0088c24f  56                   push esi
// 0088c250  899c24a8000000       mov dword ptr [esp + 0xa8], ebx
// 0088c257  899c24b8000000       mov dword ptr [esp + 0xb8], ebx
// 0088c25e  899c24c4000000       mov dword ptr [esp + 0xc4], ebx
// 0088c265  899c24d8000000       mov dword ptr [esp + 0xd8], ebx
// 0088c26c  899c24e4000000       mov dword ptr [esp + 0xe4], ebx
// 0088c273  e88850f7ff           call 0x801300
// 0088c278  8bc8                 mov ecx, eax
// 0088c27a  e8f13df7ff           call 0x800070
// 0088c27f  83cdff               or ebp, 0xffffffff
// 0088c282  8b5f44               mov ebx, dword ptr [edi + 0x44]
// 0088c285  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0088c289  8b491c               mov ecx, dword ptr [ecx + 0x1c]
// 0088c28c  8b11                 mov edx, dword ptr [ecx]
// 0088c28e  6a01                 push 1
// 0088c290  83ec10               sub esp, 0x10
// 0088c293  8bc4                 mov eax, esp
// 0088c295  8918                 mov dword ptr [eax], ebx
// 0088c297  8b5f48               mov ebx, dword ptr [edi + 0x48]
// 0088c29a  895804               mov dword ptr [eax + 4], ebx
// 0088c29d  8b5f4c               mov ebx, dword ptr [edi + 0x4c]
// 0088c2a0  895808               mov dword ptr [eax + 8], ebx
// 0088c2a3  8b5f50               mov ebx, dword ptr [edi + 0x50]
// 0088c2a6  57                   push edi
// 0088c2a7  89580c               mov dword ptr [eax + 0xc], ebx
// 0088c2aa  8b4268               mov eax, dword ptr [edx + 0x68]
// 0088c2ad  56                   push esi
// 0088c2ae  ffd0                 call eax
// 0088c2b0  8d8c24f4000000       lea ecx, [esp + 0xf4]
// 0088c2b7  89ac2414010000       mov dword ptr [esp + 0x114], ebp
// 0088c2be  c78424f4000000e06da500 mov dword ptr [esp + 0xf4], 0xa56de0
// 0088c2c9  e89233b8ff           call 0x40f660
// 0088c2ce  8b8c240c010000       mov ecx, dword ptr [esp + 0x10c]
// 0088c2d5  64890d00000000       mov dword ptr fs:[0], ecx
// 0088c2dc  59                   pop ecx
// 0088c2dd  5f                   pop edi
// 0088c2de  5e                   pop esi
// 0088c2df  5d                   pop ebp
// 0088c2e0  5b                   pop ebx
// 0088c2e1  81c404010000         add esp, 0x104
// 0088c2e7  c20800               ret 8
// 0088c2ea  8bff                 mov edi, edi
// 0088c2ec  d4bd                 aam 0xbd
// 0088c2ee  8800                 mov byte ptr [eax], al
// 0088c2f0  2bbf88001cc0         sub edi, dword ptr [edi - 0x3fe3ff78]
// 0088c2f6  8800                 mov byte ptr [eax], al
// 0088c2f8  3cc1                 cmp al, 0xc1
// 0088c2fa  8800                 mov byte ptr [eax], al
// copied from an identical function in another client (function ?DrawSingleButton@CAppearanceSetPropertyPageFlat@CXTPTabPaintManager@@UAEXPAVCDC@@PAVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/TabManager/XTPTabPaintManagerAppearance.cpp