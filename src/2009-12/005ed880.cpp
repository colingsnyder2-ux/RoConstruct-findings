// roc 2009-12 005ed880  unit: G3D::Log  size: 2810 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005ed880
//
// 005ed880  64a100000000         mov eax, dword ptr fs:[0]
// 005ed886  6aff                 push -1
// 005ed888  6844f19300           push 0x93f144
// 005ed88d  50                   push eax
// 005ed88e  64892500000000       mov dword ptr fs:[0], esp
// 005ed895  81ece0000000         sub esp, 0xe0
// 005ed89b  53                   push ebx
// 005ed89c  8b9c24f4000000       mov ebx, dword ptr [esp + 0xf4]
// 005ed8a3  55                   push ebp
// 005ed8a4  56                   push esi
// 005ed8a5  8bf1                 mov esi, ecx
// 005ed8a7  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 005ed8aa  8bc1                 mov eax, ecx
// 005ed8ac  f7d8                 neg eax
// 005ed8ae  894344               mov dword ptr [ebx + 0x44], eax
// 005ed8b1  bd00000000           mov ebp, 0
// 005ed8b6  7805                 js 0x5ed8bd
// 005ed8b8  3b433c               cmp eax, dword ptr [ebx + 0x3c]
// 005ed8bb  7e0b                 jle 0x5ed8c8
// 005ed8bd  03c1                 add eax, ecx
// 005ed8bf  55                   push ebp
// 005ed8c0  50                   push eax
// 005ed8c1  8bcb                 mov ecx, ebx
// 005ed8c3  e8f8780000           call 0x5f51c0
// 005ed8c8  6a02                 push 2
// 005ed8ca  8d442474             lea eax, [esp + 0x74]
// 005ed8ce  50                   push eax
// 005ed8cf  8bcb                 mov ecx, ebx
// 005ed8d1  e82a7e0000           call 0x5f5700
// 005ed8d6  8d4c2470             lea ecx, [esp + 0x70]
// 005ed8da  6800239c00           push 0x9c2300
// 005ed8df  51                   push ecx
// 005ed8e0  89ac24fc000000       mov dword ptr [esp + 0xfc], ebp
// 005ed8e7  ff156cb69800         call dword ptr [0x98b66c]
// 005ed8ed  83c408               add esp, 8
// 005ed8f0  84c0                 test al, al
// 005ed8f2  744f                 je 0x5ed943
// 005ed8f4  68f0229c00           push 0x9c22f0
// 005ed8f9  8d4c2434             lea ecx, [esp + 0x34]
// 005ed8fd  ff15f4b69800         call dword ptr [0x98b6f4]
// 005ed903  8d542454             lea edx, [esp + 0x54]
// 005ed907  52                   push edx
// 005ed908  8bcb                 mov ecx, ebx
// 005ed90a  c68424f800000001     mov byte ptr [esp + 0xf8], 1
// 005ed912  e8a9e9ffff           call 0x5ec2c0
// 005ed917  50                   push eax
// 005ed918  8d442434             lea eax, [esp + 0x34]
// 005ed91c  50                   push eax
// 005ed91d  8d8c2494000000       lea ecx, [esp + 0x94]
// 005ed924  c68424fc00000002     mov byte ptr [esp + 0xfc], 2
// 005ed92c  e80f8fedff           call 0x4c6840
// 005ed931  689014aa00           push 0xaa1490
// 005ed936  8d8c2490000000       lea ecx, [esp + 0x90]
// 005ed93d  51                   push ecx
// 005ed93e  e8356f2000           call 0x7f4878
// 005ed943  c7461003000000       mov dword ptr [esi + 0x10], 3
// 005ed94a  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 005ed94d  8b5344               mov edx, dword ptr [ebx + 0x44]
// 005ed950  8d441110             lea eax, [ecx + edx + 0x10]
// 005ed954  2bc1                 sub eax, ecx
// 005ed956  894344               mov dword ptr [ebx + 0x44], eax
// 005ed959  7805                 js 0x5ed960
// 005ed95b  3b433c               cmp eax, dword ptr [ebx + 0x3c]
// 005ed95e  7e0b                 jle 0x5ed96b
// 005ed960  03c1                 add eax, ecx
// 005ed962  55                   push ebp
// 005ed963  50                   push eax
// 005ed964  8bcb                 mov ecx, ebx
// 005ed966  e855780000           call 0x5f51c0
// 005ed96b  8bcb                 mov ecx, ebx
// 005ed96d  e8aeb5eaff           call 0x498f20
// 005ed972  8bcb                 mov ecx, ebx
// 005ed974  894608               mov dword ptr [esi + 8], eax
// 005ed977  e8a4b5eaff           call 0x498f20
// 005ed97c  89460c               mov dword ptr [esi + 0xc], eax
// 005ed97f  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 005ed982  8b4344               mov eax, dword ptr [ebx + 0x44]
// 005ed985  8d440102             lea eax, [ecx + eax + 2]
// 005ed989  2bc1                 sub eax, ecx
// 005ed98b  894344               mov dword ptr [ebx + 0x44], eax
// 005ed98e  7805                 js 0x5ed995
// 005ed990  3b433c               cmp eax, dword ptr [ebx + 0x3c]
// 005ed993  7e0b                 jle 0x5ed9a0
// 005ed995  03c1                 add eax, ecx
// 005ed997  55                   push ebp
// 005ed998  50                   push eax
// 005ed999  8bcb                 mov ecx, ebx
// 005ed99b  e820780000           call 0x5f51c0
// 005ed9a0  57                   push edi
// 005ed9a1  8bcb                 mov ecx, ebx
// 005ed9a3  e828b5eaff           call 0x498ed0
// 005ed9a8  0fb7f8               movzx edi, ax
// 005ed9ab  8bcb                 mov ecx, ebx
// 005ed9ad  897c2420             mov dword ptr [esp + 0x20], edi
// 005ed9b1  e86ab5eaff           call 0x498f20
// 005ed9b6  3bc5                 cmp eax, ebp
// 005ed9b8  744f                 je 0x5eda09
// 005ed9ba  68d0229c00           push 0x9c22d0
// 005ed9bf  8d4c2438             lea ecx, [esp + 0x38]
// 005ed9c3  ff15f4b69800         call dword ptr [0x98b6f4]
// 005ed9c9  8d4c2458             lea ecx, [esp + 0x58]
// 005ed9cd  51                   push ecx
// 005ed9ce  8bcb                 mov ecx, ebx
// 005ed9d0  c68424fc00000003     mov byte ptr [esp + 0xfc], 3
// 005ed9d8  e8e3e8ffff           call 0x5ec2c0
// 005ed9dd  50                   push eax
// 005ed9de  8d542438             lea edx, [esp + 0x38]
// 005ed9e2  52                   push edx
// 005ed9e3  8d8c2498000000       lea ecx, [esp + 0x98]
// 005ed9ea  c684240001000004     mov byte ptr [esp + 0x100], 4
// 005ed9f2  e8498eedff           call 0x4c6840
// 005ed9f7  689014aa00           push 0xaa1490
// 005ed9fc  8d842494000000       lea eax, [esp + 0x94]
// 005eda03  50                   push eax
// 005eda04  e86f6e2000           call 0x7f4878
// 005eda09  6683ff08             cmp di, 8
// 005eda0d  0f873a010000         ja 0x5edb4d
// 005eda13  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 005eda16  8b5344               mov edx, dword ptr [ebx + 0x44]
// 005eda19  8d44110c             lea eax, [ecx + edx + 0xc]
// 005eda1d  2bc1                 sub eax, ecx
// 005eda1f  894344               mov dword ptr [ebx + 0x44], eax
// 005eda22  7805                 js 0x5eda29
// 005eda24  3b433c               cmp eax, dword ptr [ebx + 0x3c]
// 005eda27  7e0c                 jle 0x5eda35
// 005eda29  03c1                 add eax, ecx
// 005eda2b  6a00                 push 0
// 005eda2d  50                   push eax
// 005eda2e  8bcb                 mov ecx, ebx
// 005eda30  e88b770000           call 0x5f51c0
// 005eda35  8bcb                 mov ecx, ebx
// 005eda37  e8e4b4eaff           call 0x498f20
// 005eda3c  8d3c40               lea edi, [eax + eax*2]
// 005eda3f  57                   push edi
// 005eda40  897c2428             mov dword ptr [esp + 0x28], edi
// 005eda44  e857c8ffff           call 0x5ea2a0
// 005eda49  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 005eda4c  8be8                 mov ebp, eax
// 005eda4e  8b4344               mov eax, dword ptr [ebx + 0x44]
// 005eda51  8d440104             lea eax, [ecx + eax + 4]
// 005eda55  83c404               add esp, 4
// 005eda58  2bc1                 sub eax, ecx
// 005eda5a  894344               mov dword ptr [ebx + 0x44], eax
// 005eda5d  7805                 js 0x5eda64
// 005eda5f  3b433c               cmp eax, dword ptr [ebx + 0x3c]
// 005eda62  7e0c                 jle 0x5eda70
// 005eda64  03c1                 add eax, ecx
// 005eda66  6a00                 push 0
// 005eda68  50                   push eax
// 005eda69  8bcb                 mov ecx, ebx
// 005eda6b  e850770000           call 0x5f51c0
// 005eda70  85ff                 test edi, edi
// 005eda72  0f8ed5000000         jle 0x5edb4d
// 005eda78  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005eda7c  49                   dec ecx
// 005eda7d  b8abaaaaaa           mov eax, 0xaaaaaaab
// 005eda82  f7e1                 mul ecx
// 005eda84  d1ea                 shr edx, 1
// 005eda86  42                   inc edx
// 005eda87  8d7d01               lea edi, [ebp + 1]
// 005eda8a  89542418             mov dword ptr [esp + 0x18], edx
// 005eda8e  8bff                 mov edi, edi
// 005eda90  8b4344               mov eax, dword ptr [ebx + 0x44]
// 005eda93  8d5001               lea edx, [eax + 1]
// 005eda96  3b533c               cmp edx, dword ptr [ebx + 0x3c]
// 005eda99  7e0f                 jle 0x5edaaa
// 005eda9b  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 005eda9e  03c8                 add ecx, eax
// 005edaa0  6a01                 push 1
// 005edaa2  51                   push ecx
// 005edaa3  8bcb                 mov ecx, ebx
// 005edaa5  e816770000           call 0x5f51c0
// 005edaaa  8b4344               mov eax, dword ptr [ebx + 0x44]
// 005edaad  8b5340               mov edx, dword ptr [ebx + 0x40]
// 005edab0  8a0c10               mov cl, byte ptr [eax + edx]
// 005edab3  40                   inc eax
// 005edab4  8d5001               lea edx, [eax + 1]
// 005edab7  3b533c               cmp edx, dword ptr [ebx + 0x3c]
// 005edaba  884c241f             mov byte ptr [esp + 0x1f], cl
// 005edabe  894344               mov dword ptr [ebx + 0x44], eax
// 005edac1  7e0f                 jle 0x5edad2
// 005edac3  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 005edac6  03c8                 add ecx, eax
// 005edac8  6a01                 push 1
// 005edaca  51                   push ecx
// 005edacb  8bcb                 mov ecx, ebx
// 005edacd  e8ee760000           call 0x5f51c0
// 005edad2  8b4344               mov eax, dword ptr [ebx + 0x44]
// 005edad5  8b5340               mov edx, dword ptr [ebx + 0x40]
// 005edad8  8a0c10               mov cl, byte ptr [eax + edx]
// 005edadb  40                   inc eax
// 005edadc  8d5001               lea edx, [eax + 1]
// 005edadf  3b533c               cmp edx, dword ptr [ebx + 0x3c]
// 005edae2  884c2413             mov byte ptr [esp + 0x13], cl
// 005edae6  894344               mov dword ptr [ebx + 0x44], eax
// 005edae9  7e0f                 jle 0x5edafa
// 005edaeb  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 005edaee  03c8                 add ecx, eax
// 005edaf0  6a01                 push 1
// 005edaf2  51                   push ecx
// 005edaf3  8bcb                 mov ecx, ebx
// 005edaf5  e8c6760000           call 0x5f51c0
// 005edafa  8b4344               mov eax, dword ptr [ebx + 0x44]
// 005edafd  8b5340               mov edx, dword ptr [ebx + 0x40]
// 005edb00  8a0c10               mov cl, byte ptr [eax + edx]
// 005edb03  40                   inc eax
// 005edb04  8d5001               lea edx, [eax + 1]
// 005edb07  3b533c               cmp edx, dword ptr [ebx + 0x3c]
// 005edb0a  884c242f             mov byte ptr [esp + 0x2f], cl
// 005edb0e  894344               mov dword ptr [ebx + 0x44], eax
// 005edb11  7e0f                 jle 0x5edb22
// 005edb13  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 005edb16  03c8                 add ecx, eax
// 005edb18  6a01                 push 1
// 005edb1a  51                   push ecx
// 005edb1b  8bcb                 mov ecx, ebx
// 005edb1d  e89e760000           call 0x5f51c0
// 005edb22  0fb654242f           movzx edx, byte ptr [esp + 0x2f]
// 005edb27  8a4c2413             mov cl, byte ptr [esp + 0x13]
// 005edb2b  b801000000           mov eax, 1
// 005edb30  014344               add dword ptr [ebx + 0x44], eax
// 005edb33  8857ff               mov byte ptr [edi - 1], dl
// 005edb36  0fb654241f           movzx edx, byte ptr [esp + 0x1f]
// 005edb3b  880f                 mov byte ptr [edi], cl
// 005edb3d  885701               mov byte ptr [edi + 1], dl
// 005edb40  83c703               add edi, 3
// 005edb43  29442418             sub dword ptr [esp + 0x18], eax
// 005edb47  0f8543ffffff         jne 0x5eda90
// 005edb4d  8b460c               mov eax, dword ptr [esi + 0xc]
// 005edb50  b9ffffffff           mov ecx, 0xffffffff
// 005edb55  85c0                 test eax, eax
// 005edb57  7d15                 jge 0x5edb6e
// 005edb59  f7d8                 neg eax
// 005edb5b  89460c               mov dword ptr [esi + 0xc], eax
// 005edb5e  33ff                 xor edi, edi
// 005edb60  89442428             mov dword ptr [esp + 0x28], eax
// 005edb64  c744243001000000     mov dword ptr [esp + 0x30], 1
// 005edb6c  eb0b                 jmp 0x5edb79
// 005edb6e  8d78ff               lea edi, [eax - 1]
// 005edb71  894c2428             mov dword ptr [esp + 0x28], ecx
// 005edb75  894c2430             mov dword ptr [esp + 0x30], ecx
// 005edb79  8b4608               mov eax, dword ptr [esi + 8]
// 005edb7c  0faf460c             imul eax, dword ptr [esi + 0xc]
// 005edb80  8d0440               lea eax, [eax + eax*2]
// 005edb83  50                   push eax
// 005edb84  e817c7ffff           call 0x5ea2a0
// 005edb89  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005edb8d  83c404               add esp, 4
// 005edb90  894604               mov dword ptr [esi + 4], eax
// 005edb93  6683f901             cmp cx, 1
// 005edb97  0f8515030000         jne 0x5edeb2
// 005edb9d  8b4608               mov eax, dword ptr [esi + 8]
// 005edba0  83c007               add eax, 7
// 005edba3  c1f803               sar eax, 3
// 005edba6  8bc8                 mov ecx, eax
// 005edba8  83e103               and ecx, 3
// 005edbab  89442420             mov dword ptr [esp + 0x20], eax
// 005edbaf  740d                 je 0x5edbbe
// 005edbb1  ba04000000           mov edx, 4
// 005edbb6  2bd1                 sub edx, ecx
// 005edbb8  03c2                 add eax, edx
// 005edbba  89442420             mov dword ptr [esp + 0x20], eax
// 005edbbe  897c2418             mov dword ptr [esp + 0x18], edi
// 005edbc2  3b7c2428             cmp edi, dword ptr [esp + 0x28]
// 005edbc6  0f84ac060000         je 0x5ee278
// 005edbcc  8b542420             mov edx, dword ptr [esp + 0x20]
// 005edbd0  8bcf                 mov ecx, edi
// 005edbd2  8b7e08               mov edi, dword ptr [esi + 8]
// 005edbd5  0faff9               imul edi, ecx
// 005edbd8  33c0                 xor eax, eax
// 005edbda  89442414             mov dword ptr [esp + 0x14], eax
// 005edbde  8d3c7f               lea edi, [edi + edi*2]
// 005edbe1  85d2                 test edx, edx
// 005edbe3  0f8eb2020000         jle 0x5ede9b
// 005edbe9  89542424             mov dword ptr [esp + 0x24], edx
// 005edbed  8d4900               lea ecx, [ecx]
// 005edbf0  8b4b44               mov ecx, dword ptr [ebx + 0x44]
// 005edbf3  8d5101               lea edx, [ecx + 1]
// 005edbf6  3b533c               cmp edx, dword ptr [ebx + 0x3c]
// 005edbf9  7e13                 jle 0x5edc0e
// 005edbfb  8b4334               mov eax, dword ptr [ebx + 0x34]
// 005edbfe  03c1                 add eax, ecx
// 005edc00  6a01                 push 1
// 005edc02  50                   push eax
// 005edc03  8bcb                 mov ecx, ebx
// 005edc05  e8b6750000           call 0x5f51c0
// 005edc0a  8b442414             mov eax, dword ptr [esp + 0x14]
// 005edc0e  8b5344               mov edx, dword ptr [ebx + 0x44]
// 005edc11  8b4b40               mov ecx, dword ptr [ebx + 0x40]
// 005edc14  8a0c0a               mov cl, byte ptr [edx + ecx]
// 005edc17  42                   inc edx
// 005edc18  895344               mov dword ptr [ebx + 0x44], edx
// 005edc1b  3b4608               cmp eax, dword ptr [esi + 8]
// 005edc1e  884c2413             mov byte ptr [esp + 0x13], cl
// 005edc22  0f8d60020000         jge 0x5ede88
// 005edc28  8b5604               mov edx, dword ptr [esi + 4]
// 005edc2b  0fb6c9               movzx ecx, cl
// 005edc2e  c1e907               shr ecx, 7
// 005edc31  8d0c49               lea ecx, [ecx + ecx*2]
// 005edc34  894c2414             mov dword ptr [esp + 0x14], ecx
// 005edc38  0fb60c29             movzx ecx, byte ptr [ecx + ebp]
// 005edc3c  880c17               mov byte ptr [edi + edx], cl
// 005edc3f  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005edc43  0fb64c2901           movzx ecx, byte ptr [ecx + ebp + 1]
// 005edc48  8b5604               mov edx, dword ptr [esi + 4]
// 005edc4b  884c3a01             mov byte ptr [edx + edi + 1], cl
// 005edc4f  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005edc53  0fb64c2902           movzx ecx, byte ptr [ecx + ebp + 2]
// 005edc58  8b5604               mov edx, dword ptr [esi + 4]
// 005edc5b  884c3a02             mov byte ptr [edx + edi + 2], cl
// 005edc5f  8a4c2413             mov cl, byte ptr [esp + 0x13]
// 005edc63  40                   inc eax
// 005edc64  83c703               add edi, 3
// 005edc67  3b4608               cmp eax, dword ptr [esi + 8]
// 005edc6a  89442414             mov dword ptr [esp + 0x14], eax
// 005edc6e  0f8d14020000         jge 0x5ede88
// 005edc74  8b5604               mov edx, dword ptr [esi + 4]
// 005edc77  0fb6c9               movzx ecx, cl
// 005edc7a  c1e906               shr ecx, 6
// 005edc7d  83e101               and ecx, 1
// 005edc80  8d0c49               lea ecx, [ecx + ecx*2]
// 005edc83  894c2414             mov dword ptr [esp + 0x14], ecx
// 005edc87  0fb60c29             movzx ecx, byte ptr [ecx + ebp]
// 005edc8b  880c17               mov byte ptr [edi + edx], cl
// 005edc8e  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005edc92  0fb64c2901           movzx ecx, byte ptr [ecx + ebp + 1]
// 005edc97  8b5604               mov edx, dword ptr [esi + 4]
// 005edc9a  884c3a01             mov byte ptr [edx + edi + 1], cl
// 005edc9e  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005edca2  0fb64c2902           movzx ecx, byte ptr [ecx + ebp + 2]
// 005edca7  8b5604               mov edx, dword ptr [esi + 4]
// 005edcaa  884c3a02             mov byte ptr [edx + edi + 2], cl
// 005edcae  8a4c2413             mov cl, byte ptr [esp + 0x13]
// 005edcb2  40                   inc eax
// 005edcb3  83c703               add edi, 3
// 005edcb6  3b4608               cmp eax, dword ptr [esi + 8]
// 005edcb9  89442414             mov dword ptr [esp + 0x14], eax
// 005edcbd  0f8dc5010000         jge 0x5ede88
// 005edcc3  8b5604               mov edx, dword ptr [esi + 4]
// 005edcc6  0fb6c9               movzx ecx, cl
// 005edcc9  c1e905               shr ecx, 5
// 005edccc  83e101               and ecx, 1
// 005edccf  8d0c49               lea ecx, [ecx + ecx*2]
// 005edcd2  894c2414             mov dword ptr [esp + 0x14], ecx
// 005edcd6  0fb60c29             movzx ecx, byte ptr [ecx + ebp]
// 005edcda  880c17               mov byte ptr [edi + edx], cl
// 005edcdd  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005edce1  0fb64c2901           movzx ecx, byte ptr [ecx + ebp + 1]
// 005edce6  8b5604               mov edx, dword ptr [esi + 4]
// 005edce9  884c3a01             mov byte ptr [edx + edi + 1], cl
// 005edced  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005edcf1  0fb64c2902           movzx ecx, byte ptr [ecx + ebp + 2]
// 005edcf6  8b5604               mov edx, dword ptr [esi + 4]
// 005edcf9  884c3a02             mov byte ptr [edx + edi + 2], cl
// 005edcfd  8a4c2413             mov cl, byte ptr [esp + 0x13]
// 005edd01  40                   inc eax
// 005edd02  83c703               add edi, 3
// 005edd05  3b4608               cmp eax, dword ptr [esi + 8]
// 005edd08  89442414             mov dword ptr [esp + 0x14], eax
// 005edd0c  0f8d76010000         jge 0x5ede88
// 005edd12  8b5604               mov edx, dword ptr [esi + 4]
// 005edd15  0fb6c9               movzx ecx, cl
// 005edd18  c1e904               shr ecx, 4
// 005edd1b  83e101               and ecx, 1
// 005edd1e  8d0c49               lea ecx, [ecx + ecx*2]
// 005edd21  894c2414             mov dword ptr [esp + 0x14], ecx
// 005edd25  0fb60c29             movzx ecx, byte ptr [ecx + ebp]
// 005edd29  880c17               mov byte ptr [edi + edx], cl
// 005edd2c  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005edd30  0fb64c2901           movzx ecx, byte ptr [ecx + ebp + 1]
// 005edd35  8b5604               mov edx, dword ptr [esi + 4]
// 005edd38  884c3a01             mov byte ptr [edx + edi + 1], cl
// 005edd3c  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005edd40  0fb64c2902           movzx ecx, byte ptr [ecx + ebp + 2]
// 005edd45  8b5604               mov edx, dword ptr [esi + 4]
// 005edd48  884c3a02             mov byte ptr [edx + edi + 2], cl
// 005edd4c  8a4c2413             mov cl, byte ptr [esp + 0x13]
// 005edd50  40                   inc eax
// 005edd51  83c703               add edi, 3
// 005edd54  3b4608               cmp eax, dword ptr [esi + 8]
// 005edd57  89442414             mov dword ptr [esp + 0x14], eax
// 005edd5b  0f8d27010000         jge 0x5ede88
// 005edd61  8b5604               mov edx, dword ptr [esi + 4]
// 005edd64  0fb6c9               movzx ecx, cl
// 005edd67  c1e903               shr ecx, 3
// 005edd6a  83e101               and ecx, 1
// 005edd6d  8d0c49               lea ecx, [ecx + ecx*2]
// 005edd70  894c2414             mov dword ptr [esp + 0x14], ecx
// 005edd74  0fb60c29             movzx ecx, byte ptr [ecx + ebp]
// 005edd78  880c17               mov byte ptr [edi + edx], cl
// 005edd7b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005edd7f  0fb64c2901           movzx ecx, byte ptr [ecx + ebp + 1]
// 005edd84  8b5604               mov edx, dword ptr [esi + 4]
// 005edd87  884c3a01             mov byte ptr [edx + edi + 1], cl
// 005edd8b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005edd8f  0fb64c2902           movzx ecx, byte ptr [ecx + ebp + 2]
// 005edd94  8b5604               mov edx, dword ptr [esi + 4]
// 005edd97  884c3a02             mov byte ptr [edx + edi + 2], cl
// 005edd9b  8a4c2413             mov cl, byte ptr [esp + 0x13]
// 005edd9f  40                   inc eax
// 005edda0  83c703               add edi, 3
// 005edda3  3b4608               cmp eax, dword ptr [esi + 8]
// 005edda6  89442414             mov dword ptr [esp + 0x14], eax
// 005eddaa  0f8dd8000000         jge 0x5ede88
// 005eddb0  8b5604               mov edx, dword ptr [esi + 4]
// 005eddb3  0fb6c9               movzx ecx, cl
// 005eddb6  c1e902               shr ecx, 2
// 005eddb9  83e101               and ecx, 1
// 005eddbc  8d0c49               lea ecx, [ecx + ecx*2]
// 005eddbf  894c2414             mov dword ptr [esp + 0x14], ecx
// 005eddc3  0fb60c29             movzx ecx, byte ptr [ecx + ebp]
// 005eddc7  880c17               mov byte ptr [edi + edx], cl
// 005eddca  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005eddce  0fb64c2901           movzx ecx, byte ptr [ecx + ebp + 1]
// 005eddd3  8b5604               mov edx, dword ptr [esi + 4]
// 005eddd6  884c3a01             mov byte ptr [edx + edi + 1], cl
// 005eddda  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005eddde  0fb64c2902           movzx ecx, byte ptr [ecx + ebp + 2]
// 005edde3  8b5604               mov edx, dword ptr [esi + 4]
// 005edde6  884c3a02             mov byte ptr [edx + edi + 2], cl
// 005eddea  8a4c2413             mov cl, byte ptr [esp + 0x13]
// 005eddee  40                   inc eax
// 005eddef  83c703               add edi, 3
// 005eddf2  3b4608               cmp eax, dword ptr [esi + 8]
// 005eddf5  89442414             mov dword ptr [esp + 0x14], eax
// 005eddf9  0f8d89000000         jge 0x5ede88
// 005eddff  8b5604               mov edx, dword ptr [esi + 4]
// 005ede02  0fb6c9               movzx ecx, cl
// 005ede05  d1e9                 shr ecx, 1
// 005ede07  83e101               and ecx, 1
// 005ede0a  8d0c49               lea ecx, [ecx + ecx*2]
// 005ede0d  894c2414             mov dword ptr [esp + 0x14], ecx
// 005ede11  0fb60c29             movzx ecx, byte ptr [ecx + ebp]
// 005ede15  880c17               mov byte ptr [edi + edx], cl
// 005ede18  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005ede1c  0fb64c2901           movzx ecx, byte ptr [ecx + ebp + 1]
// 005ede21  8b5604               mov edx, dword ptr [esi + 4]
// 005ede24  884c3a01             mov byte ptr [edx + edi + 1], cl
// 005ede28  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005ede2c  0fb64c2902           movzx ecx, byte ptr [ecx + ebp + 2]
// 005ede31  8b5604               mov edx, dword ptr [esi + 4]
// 005ede34  884c3a02             mov byte ptr [edx + edi + 2], cl
// 005ede38  8a4c2413             mov cl, byte ptr [esp + 0x13]
// 005ede3c  40                   inc eax
// 005ede3d  83c703               add edi, 3
// 005ede40  3b4608               cmp eax, dword ptr [esi + 8]
// 005ede43  89442414             mov dword ptr [esp + 0x14], eax
// 005ede47  7d3f                 jge 0x5ede88
// 005ede49  8b5604               mov edx, dword ptr [esi + 4]
// 005ede4c  0fb6c9               movzx ecx, cl
// 005ede4f  83e101               and ecx, 1
// 005ede52  8d0c49               lea ecx, [ecx + ecx*2]
// 005ede55  894c2414             mov dword ptr [esp + 0x14], ecx
// 005ede59  0fb60c29             movzx ecx, byte ptr [ecx + ebp]
// 005ede5d  880c17               mov byte ptr [edi + edx], cl
// 005ede60  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005ede64  0fb64c2901           movzx ecx, byte ptr [ecx + ebp + 1]
// 005ede69  8b5604               mov edx, dword ptr [esi + 4]
// 005ede6c  884c3a01             mov byte ptr [edx + edi + 1], cl
// 005ede70  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005ede74  0fb64c2902           movzx ecx, byte ptr [ecx + ebp + 2]
// 005ede79  8b5604               mov edx, dword ptr [esi + 4]
// 005ede7c  40                   inc eax
// 005ede7d  884c3a02             mov byte ptr [edx + edi + 2], cl
// 005ede81  89442414             mov dword ptr [esp + 0x14], eax
// 005ede85  83c703               add edi, 3
// 005ede88  836c242401           sub dword ptr [esp + 0x24], 1
// 005ede8d  0f855dfdffff         jne 0x5edbf0
// 005ede93  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005ede97  8b542420             mov edx, dword ptr [esp + 0x20]
// 005ede9b  034c2430             add ecx, dword ptr [esp + 0x30]
// 005ede9f  894c2418             mov dword ptr [esp + 0x18], ecx
// 005edea3  3b4c2428             cmp ecx, dword ptr [esp + 0x28]
// 005edea7  0f8525fdffff         jne 0x5edbd2
// 005edead  e9c6030000           jmp 0x5ee278
// 005edeb2  6683f904             cmp cx, 4
// 005edeb6  0f8522010000         jne 0x5edfde
// 005edebc  8b4608               mov eax, dword ptr [esi + 8]
// 005edebf  40                   inc eax
// 005edec0  d1f8                 sar eax, 1
// 005edec2  8bc8                 mov ecx, eax
// 005edec4  83e103               and ecx, 3
// 005edec7  89442424             mov dword ptr [esp + 0x24], eax
// 005edecb  740d                 je 0x5ededa
// 005edecd  ba04000000           mov edx, 4
// 005eded2  2bd1                 sub edx, ecx
// 005eded4  03c2                 add eax, edx
// 005eded6  89442424             mov dword ptr [esp + 0x24], eax
// 005ededa  897c2418             mov dword ptr [esp + 0x18], edi
// 005edede  3b7c2428             cmp edi, dword ptr [esp + 0x28]
// 005edee2  0f8490030000         je 0x5ee278
// 005edee8  eb06                 jmp 0x5edef0
// 005edeea  8d9b00000000         lea ebx, [ebx]
// 005edef0  8b7e08               mov edi, dword ptr [esi + 8]
// 005edef3  8b442418             mov eax, dword ptr [esp + 0x18]
// 005edef7  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005edefb  0faff8               imul edi, eax
// 005edefe  c744241400000000     mov dword ptr [esp + 0x14], 0
// 005edf06  8d3c7f               lea edi, [edi + edi*2]
// 005edf09  85c9                 test ecx, ecx
// 005edf0b  0f8eb6000000         jle 0x5edfc7
// 005edf11  894c2420             mov dword ptr [esp + 0x20], ecx
// 005edf15  8b4344               mov eax, dword ptr [ebx + 0x44]
// 005edf18  8d4801               lea ecx, [eax + 1]
// 005edf1b  3b4b3c               cmp ecx, dword ptr [ebx + 0x3c]
// 005edf1e  7e0f                 jle 0x5edf2f
// 005edf20  8b5334               mov edx, dword ptr [ebx + 0x34]
// 005edf23  6a01                 push 1
// 005edf25  03d0                 add edx, eax
// 005edf27  52                   push edx
// 005edf28  8bcb                 mov ecx, ebx
// 005edf2a  e891720000           call 0x5f51c0
// 005edf2f  8b4344               mov eax, dword ptr [ebx + 0x44]
// 005edf32  8b4b40               mov ecx, dword ptr [ebx + 0x40]
// 005edf35  8a0c08               mov cl, byte ptr [eax + ecx]
// 005edf38  8b542414             mov edx, dword ptr [esp + 0x14]
// 005edf3c  40                   inc eax
// 005edf3d  894344               mov dword ptr [ebx + 0x44], eax
// 005edf40  0fb6c1               movzx eax, cl
// 005edf43  8bc8                 mov ecx, eax
// 005edf45  83e00f               and eax, 0xf
// 005edf48  c1e904               shr ecx, 4
// 005edf4b  3b5608               cmp edx, dword ptr [esi + 8]
// 005edf4e  8d0440               lea eax, [eax + eax*2]
// 005edf51  8d0c49               lea ecx, [ecx + ecx*2]
// 005edf54  89442454             mov dword ptr [esp + 0x54], eax
// 005edf58  7d2c                 jge 0x5edf86
// 005edf5a  0fb61429             movzx edx, byte ptr [ecx + ebp]
// 005edf5e  8b4604               mov eax, dword ptr [esi + 4]
// 005edf61  ff442414             inc dword ptr [esp + 0x14]
// 005edf65  881407               mov byte ptr [edi + eax], dl
// 005edf68  0fb6542901           movzx edx, byte ptr [ecx + ebp + 1]
// 005edf6d  8b4604               mov eax, dword ptr [esi + 4]
// 005edf70  88543801             mov byte ptr [eax + edi + 1], dl
// 005edf74  8b4604               mov eax, dword ptr [esi + 4]
// 005edf77  8a4c2902             mov cl, byte ptr [ecx + ebp + 2]
// 005edf7b  884c3802             mov byte ptr [eax + edi + 2], cl
// 005edf7f  8b442454             mov eax, dword ptr [esp + 0x54]
// 005edf83  83c703               add edi, 3
// 005edf86  8b542414             mov edx, dword ptr [esp + 0x14]
// 005edf8a  3b5608               cmp edx, dword ptr [esi + 8]
// 005edf8d  7d29                 jge 0x5edfb8
// 005edf8f  0fb61428             movzx edx, byte ptr [eax + ebp]
// 005edf93  8b4e04               mov ecx, dword ptr [esi + 4]
// 005edf96  ff442414             inc dword ptr [esp + 0x14]
// 005edf9a  88140f               mov byte ptr [edi + ecx], dl
// 005edf9d  0fb6542801           movzx edx, byte ptr [eax + ebp + 1]
// 005edfa2  8b4e04               mov ecx, dword ptr [esi + 4]
// 005edfa5  88543901             mov byte ptr [ecx + edi + 1], dl
// 005edfa9  0fb6542802           movzx edx, byte ptr [eax + ebp + 2]
// 005edfae  8b4e04               mov ecx, dword ptr [esi + 4]
// 005edfb1  88543902             mov byte ptr [ecx + edi + 2], dl
// 005edfb5  83c703               add edi, 3
// 005edfb8  836c242001           sub dword ptr [esp + 0x20], 1
// 005edfbd  0f8552ffffff         jne 0x5edf15
// 005edfc3  8b442418             mov eax, dword ptr [esp + 0x18]
// 005edfc7  03442430             add eax, dword ptr [esp + 0x30]
// 005edfcb  89442418             mov dword ptr [esp + 0x18], eax
// 005edfcf  3b442428             cmp eax, dword ptr [esp + 0x28]
// 005edfd3  0f8517ffffff         jne 0x5edef0
// 005edfd9  e99a020000           jmp 0x5ee278
// 005edfde  6683f908             cmp cx, 8
// 005edfe2  0f85d6000000         jne 0x5ee0be
// 005edfe8  8b4e08               mov ecx, dword ptr [esi + 8]
// 005edfeb  8bc1                 mov eax, ecx
// 005edfed  83e003               and eax, 3
// 005edff0  894c2420             mov dword ptr [esp + 0x20], ecx
// 005edff4  740d                 je 0x5ee003
// 005edff6  ba04000000           mov edx, 4
// 005edffb  2bd0                 sub edx, eax
// 005edffd  03ca                 add ecx, edx
// 005edfff  894c2420             mov dword ptr [esp + 0x20], ecx
// 005ee003  8bcf                 mov ecx, edi
// 005ee005  897c2418             mov dword ptr [esp + 0x18], edi
// 005ee009  3b7c2428             cmp edi, dword ptr [esp + 0x28]
// 005ee00d  0f8465020000         je 0x5ee278
// 005ee013  eb0b                 jmp 0x5ee020
// 005ee015  8da42400000000       lea esp, [esp]
// 005ee01c  8d642400             lea esp, [esp]
// 005ee020  8b442420             mov eax, dword ptr [esp + 0x20]
// 005ee024  c744241400000000     mov dword ptr [esp + 0x14], 0
// 005ee02c  85c0                 test eax, eax
// 005ee02e  7e77                 jle 0x5ee0a7
// 005ee030  89442424             mov dword ptr [esp + 0x24], eax
// 005ee034  8b4344               mov eax, dword ptr [ebx + 0x44]
// 005ee037  8d4801               lea ecx, [eax + 1]
// 005ee03a  3b4b3c               cmp ecx, dword ptr [ebx + 0x3c]
// 005ee03d  7e0f                 jle 0x5ee04e
// 005ee03f  8b5334               mov edx, dword ptr [ebx + 0x34]
// 005ee042  6a01                 push 1
// 005ee044  03d0                 add edx, eax
// 005ee046  52                   push edx
// 005ee047  8bcb                 mov ecx, ebx
// 005ee049  e872710000           call 0x5f51c0
// 005ee04e  8b4344               mov eax, dword ptr [ebx + 0x44]
// 005ee051  8b4b40               mov ecx, dword ptr [ebx + 0x40]
// 005ee054  8a0c08               mov cl, byte ptr [eax + ecx]
// 005ee057  40                   inc eax
// 005ee058  894344               mov dword ptr [ebx + 0x44], eax
// 005ee05b  8b4608               mov eax, dword ptr [esi + 8]
// 005ee05e  39442414             cmp dword ptr [esp + 0x14], eax
// 005ee062  7d38                 jge 0x5ee09c
// 005ee064  0faf442418           imul eax, dword ptr [esp + 0x18]
// 005ee069  03442414             add eax, dword ptr [esp + 0x14]
// 005ee06d  8b5604               mov edx, dword ptr [esi + 4]
// 005ee070  ff442414             inc dword ptr [esp + 0x14]
// 005ee074  0fb6f9               movzx edi, cl
// 005ee077  8d3c7f               lea edi, [edi + edi*2]
// 005ee07a  0fb60c2f             movzx ecx, byte ptr [edi + ebp]
// 005ee07e  8d0440               lea eax, [eax + eax*2]
// 005ee081  880c10               mov byte ptr [eax + edx], cl
// 005ee084  0fb64c2f01           movzx ecx, byte ptr [edi + ebp + 1]
// 005ee089  8b5604               mov edx, dword ptr [esi + 4]
// 005ee08c  884c0201             mov byte ptr [edx + eax + 1], cl
// 005ee090  0fb64c2f02           movzx ecx, byte ptr [edi + ebp + 2]
// 005ee095  8b5604               mov edx, dword ptr [esi + 4]
// 005ee098  884c0202             mov byte ptr [edx + eax + 2], cl
// 005ee09c  836c242401           sub dword ptr [esp + 0x24], 1
// 005ee0a1  7591                 jne 0x5ee034
// 005ee0a3  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005ee0a7  034c2430             add ecx, dword ptr [esp + 0x30]
// 005ee0ab  894c2418             mov dword ptr [esp + 0x18], ecx
// 005ee0af  3b4c2428             cmp ecx, dword ptr [esp + 0x28]
// 005ee0b3  0f8567ffffff         jne 0x5ee020
// 005ee0b9  e9ba010000           jmp 0x5ee278
// 005ee0be  6683f910             cmp cx, 0x10
// 005ee0c2  7565                 jne 0x5ee129
// 005ee0c4  50                   push eax
// 005ee0c5  e8d6e0f6ff           call 0x55c1a0
// 005ee0ca  55                   push ebp
// 005ee0cb  c7460400000000       mov dword ptr [esi + 4], 0
// 005ee0d2  e8c9e0f6ff           call 0x55c1a0
// 005ee0d7  83c408               add esp, 8
// 005ee0da  68b0229c00           push 0x9c22b0
// 005ee0df  8d4c2438             lea ecx, [esp + 0x38]
// 005ee0e3  ff15f4b69800         call dword ptr [0x98b6f4]
// 005ee0e9  8d542458             lea edx, [esp + 0x58]
// 005ee0ed  52                   push edx
// 005ee0ee  8bcb                 mov ecx, ebx
// 005ee0f0  c68424fc00000005     mov byte ptr [esp + 0xfc], 5
// 005ee0f8  e8c3e1ffff           call 0x5ec2c0
// 005ee0fd  50                   push eax
// 005ee0fe  8d442438             lea eax, [esp + 0x38]
// 005ee102  50                   push eax
// 005ee103  8d8c2498000000       lea ecx, [esp + 0x98]
// 005ee10a  c684240001000006     mov byte ptr [esp + 0x100], 6
// 005ee112  e82987edff           call 0x4c6840
// 005ee117  689014aa00           push 0xaa1490
// 005ee11c  8d8c2494000000       lea ecx, [esp + 0x94]
// 005ee123  51                   push ecx
// 005ee124  e84f672000           call 0x7f4878
// 005ee129  6683f918             cmp cx, 0x18
// 005ee12d  0f857e010000         jne 0x5ee2b1
// 005ee133  6a14                 push 0x14
// 005ee135  8bcb                 mov ecx, ebx
// 005ee137  e804e2ffff           call 0x5ec340
// 005ee13c  8b4608               mov eax, dword ptr [esi + 8]
// 005ee13f  8d0440               lea eax, [eax + eax*2]
// 005ee142  83e003               and eax, 3
// 005ee145  740d                 je 0x5ee154
// 005ee147  b904000000           mov ecx, 4
// 005ee14c  2bc8                 sub ecx, eax
// 005ee14e  894c2420             mov dword ptr [esp + 0x20], ecx
// 005ee152  eb08                 jmp 0x5ee15c
// 005ee154  c744242000000000     mov dword ptr [esp + 0x20], 0
// 005ee15c  897c2418             mov dword ptr [esp + 0x18], edi
// 005ee160  3b7c2428             cmp edi, dword ptr [esp + 0x28]
// 005ee164  0f840e010000         je 0x5ee278
// 005ee16a  8d9b00000000         lea ebx, [ebx]
// 005ee170  8b4608               mov eax, dword ptr [esi + 8]
// 005ee173  8bf8                 mov edi, eax
// 005ee175  0faf7c2418           imul edi, dword ptr [esp + 0x18]
// 005ee17a  8d3c7f               lea edi, [edi + edi*2]
// 005ee17d  c744242400000000     mov dword ptr [esp + 0x24], 0
// 005ee185  85c0                 test eax, eax
// 005ee187  0f8eac000000         jle 0x5ee239
// 005ee18d  8d4900               lea ecx, [ecx]
// 005ee190  8b4344               mov eax, dword ptr [ebx + 0x44]
// 005ee193  8d5001               lea edx, [eax + 1]
// 005ee196  3b533c               cmp edx, dword ptr [ebx + 0x3c]
// 005ee199  7e0f                 jle 0x5ee1aa
// 005ee19b  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 005ee19e  03c8                 add ecx, eax
// 005ee1a0  6a01                 push 1
// 005ee1a2  51                   push ecx
// 005ee1a3  8bcb                 mov ecx, ebx
// 005ee1a5  e816700000           call 0x5f51c0
// 005ee1aa  8b4344               mov eax, dword ptr [ebx + 0x44]
// 005ee1ad  8b5340               mov edx, dword ptr [ebx + 0x40]
// 005ee1b0  8a0c10               mov cl, byte ptr [eax + edx]
// 005ee1b3  40                   inc eax
// 005ee1b4  8d5001               lea edx, [eax + 1]
// 005ee1b7  3b533c               cmp edx, dword ptr [ebx + 0x3c]
// 005ee1ba  884c241f             mov byte ptr [esp + 0x1f], cl
// 005ee1be  894344               mov dword ptr [ebx + 0x44], eax
// 005ee1c1  7e0f                 jle 0x5ee1d2
// 005ee1c3  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 005ee1c6  03c8                 add ecx, eax
// 005ee1c8  6a01                 push 1
// 005ee1ca  51                   push ecx
// 005ee1cb  8bcb                 mov ecx, ebx
// 005ee1cd  e8ee6f0000           call 0x5f51c0
// 005ee1d2  8b4344               mov eax, dword ptr [ebx + 0x44]
// 005ee1d5  8b5340               mov edx, dword ptr [ebx + 0x40]
// 005ee1d8  8a0c10               mov cl, byte ptr [eax + edx]
// 005ee1db  40                   inc eax
// 005ee1dc  8d5001               lea edx, [eax + 1]
// 005ee1df  3b533c               cmp edx, dword ptr [ebx + 0x3c]
// 005ee1e2  884c2413             mov byte ptr [esp + 0x13], cl
// 005ee1e6  894344               mov dword ptr [ebx + 0x44], eax
// 005ee1e9  7e0f                 jle 0x5ee1fa
// 005ee1eb  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 005ee1ee  03c8                 add ecx, eax
// 005ee1f0  6a01                 push 1
// 005ee1f2  51                   push ecx
// 005ee1f3  8bcb                 mov ecx, ebx
// 005ee1f5  e8c66f0000           call 0x5f51c0
// 005ee1fa  8b4344               mov eax, dword ptr [ebx + 0x44]
// 005ee1fd  8b5340               mov edx, dword ptr [ebx + 0x40]
// 005ee200  8a0c10               mov cl, byte ptr [eax + edx]
// 005ee203  8a542413             mov dl, byte ptr [esp + 0x13]
// 005ee207  40                   inc eax
// 005ee208  894344               mov dword ptr [ebx + 0x44], eax
// 005ee20b  8b4604               mov eax, dword ptr [esi + 4]
// 005ee20e  880c07               mov byte ptr [edi + eax], cl
// 005ee211  8b4e04               mov ecx, dword ptr [esi + 4]
// 005ee214  88543901             mov byte ptr [ecx + edi + 1], dl
// 005ee218  0fb64c241f           movzx ecx, byte ptr [esp + 0x1f]
// 005ee21d  8b4604               mov eax, dword ptr [esi + 4]
// 005ee220  884c3802             mov byte ptr [eax + edi + 2], cl
// 005ee224  8b442424             mov eax, dword ptr [esp + 0x24]
// 005ee228  40                   inc eax
// 005ee229  83c703               add edi, 3
// 005ee22c  3b4608               cmp eax, dword ptr [esi + 8]
// 005ee22f  89442424             mov dword ptr [esp + 0x24], eax
// 005ee233  0f8c57ffffff         jl 0x5ee190
// 005ee239  837c242000           cmp dword ptr [esp + 0x20], 0
// 005ee23e  7422                 je 0x5ee262
// 005ee240  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 005ee243  8b5344               mov edx, dword ptr [ebx + 0x44]
// 005ee246  8d441102             lea eax, [ecx + edx + 2]
// 005ee24a  2bc1                 sub eax, ecx
// 005ee24c  894344               mov dword ptr [ebx + 0x44], eax
// 005ee24f  7805                 js 0x5ee256
// 005ee251  3b433c               cmp eax, dword ptr [ebx + 0x3c]
// 005ee254  7e0c                 jle 0x5ee262
// 005ee256  03c1                 add eax, ecx
// 005ee258  6a00                 push 0
// 005ee25a  50                   push eax
// 005ee25b  8bcb                 mov ecx, ebx
// 005ee25d  e85e6f0000           call 0x5f51c0
// 005ee262  8b442418             mov eax, dword ptr [esp + 0x18]
// 005ee266  03442430             add eax, dword ptr [esp + 0x30]
// 005ee26a  89442418             mov dword ptr [esp + 0x18], eax
// 005ee26e  3b442428             cmp eax, dword ptr [esp + 0x28]
// 005ee272  0f85f8feffff         jne 0x5ee170
// 005ee278  55                   push ebp
// 005ee279  e822dff6ff           call 0x55c1a0
// 005ee27e  83c404               add esp, 4
// 005ee281  8d4c2474             lea ecx, [esp + 0x74]
// 005ee285  c78424f8000000ffffffff mov dword ptr [esp + 0xf8], 0xffffffff
// 005ee290  ff15e4b69800         call dword ptr [0x98b6e4]
// 005ee296  8b8c24f0000000       mov ecx, dword ptr [esp + 0xf0]
// 005ee29d  5f                   pop edi
// 005ee29e  5e                   pop esi
// 005ee29f  5d                   pop ebp
// 005ee2a0  5b                   pop ebx
// 005ee2a1  64890d00000000       mov dword ptr fs:[0], ecx
// 005ee2a8  81c4ec000000         add esp, 0xec
// 005ee2ae  c20400               ret 4
// 005ee2b1  50                   push eax
// 005ee2b2  6683f920             cmp cx, 0x20
// 005ee2b6  7564                 jne 0x5ee31c
// 005ee2b8  e8e3def6ff           call 0x55c1a0
// 005ee2bd  55                   push ebp
// 005ee2be  c7460400000000       mov dword ptr [esi + 4], 0
// 005ee2c5  e8d6def6ff           call 0x55c1a0
// 005ee2ca  83c408               add esp, 8
// 005ee2cd  6890229c00           push 0x9c2290
// 005ee2d2  8d4c2438             lea ecx, [esp + 0x38]
// 005ee2d6  ff15f4b69800         call dword ptr [0x98b6f4]
// 005ee2dc  8d442458             lea eax, [esp + 0x58]
// 005ee2e0  50                   push eax
// 005ee2e1  8bcb                 mov ecx, ebx
// 005ee2e3  c68424fc00000007     mov byte ptr [esp + 0xfc], 7
// 005ee2eb  e8d0dfffff           call 0x5ec2c0
// 005ee2f0  50                   push eax
// 005ee2f1  8d4c2438             lea ecx, [esp + 0x38]
// 005ee2f5  51                   push ecx
// 005ee2f6  8d8c2498000000       lea ecx, [esp + 0x98]
// 005ee2fd  c684240001000008     mov byte ptr [esp + 0x100], 8
// 005ee305  e83685edff           call 0x4c6840
// 005ee30a  689014aa00           push 0xaa1490
// 005ee30f  8d942494000000       lea edx, [esp + 0x94]
// 005ee316  52                   push edx
// 005ee317  e85c652000           call 0x7f4878
// 005ee31c  e87fdef6ff           call 0x55c1a0
// 005ee321  83c404               add esp, 4
// 005ee324  6880229c00           push 0x9c2280
// 005ee329  8d4c2438             lea ecx, [esp + 0x38]
// 005ee32d  c7460400000000       mov dword ptr [esi + 4], 0
// 005ee334  ff15f4b69800         call dword ptr [0x98b6f4]
// 005ee33a  8d442458             lea eax, [esp + 0x58]
// 005ee33e  50                   push eax
// 005ee33f  8bcb                 mov ecx, ebx
// 005ee341  c68424fc00000009     mov byte ptr [esp + 0xfc], 9
// 005ee349  e872dfffff           call 0x5ec2c0
// 005ee34e  50                   push eax
// 005ee34f  8d4c2438             lea ecx, [esp + 0x38]
// 005ee353  51                   push ecx
// 005ee354  8d8c2498000000       lea ecx, [esp + 0x98]
// 005ee35b  c68424000100000a     mov byte ptr [esp + 0x100], 0xa
// 005ee363  e8d884edff           call 0x4c6840
// 005ee368  689014aa00           push 0xaa1490
// 005ee36d  8d942494000000       lea edx, [esp + 0x94]
// 005ee374  52                   push edx
// 005ee375  e8fe642000           call 0x7f4878
// library g3d-6.09-rbx2008/G3Dcpp\GImage_bmp.cpp (function ?decodeBMP@GImage@G3D@@AAEXAAVBinaryInput@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/GImage_bmp.cpp
