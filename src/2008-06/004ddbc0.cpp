// from server: 100% by auto
// roc 2008-06 004ddbc0  unit: RBX::RenderBase::Mesh::Level  size: 616 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004ddbc0
//
// 004ddbc0  55                   push ebp
// 004ddbc1  8bec                 mov ebp, esp
// 004ddbc3  6aff                 push -1
// 004ddbc5  68a0a27c00           push 0x7ca2a0
// 004ddbca  64a100000000         mov eax, dword ptr fs:[0]
// 004ddbd0  50                   push eax
// 004ddbd1  64892500000000       mov dword ptr fs:[0], esp
// 004ddbd8  83ec18               sub esp, 0x18
// 004ddbdb  53                   push ebx
// 004ddbdc  56                   push esi
// 004ddbdd  8bf1                 mov esi, ecx
// 004ddbdf  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 004ddbe2  57                   push edi
// 004ddbe3  8965f0               mov dword ptr [ebp - 0x10], esp
// 004ddbe6  85c9                 test ecx, ecx
// 004ddbe8  7505                 jne 0x4ddbef
// 004ddbea  894dec               mov dword ptr [ebp - 0x14], ecx
// 004ddbed  eb18                 jmp 0x4ddc07
// 004ddbef  8b5614               mov edx, dword ptr [esi + 0x14]
// 004ddbf2  2bd1                 sub edx, ecx
// 004ddbf4  b8abaaaa2a           mov eax, 0x2aaaaaab
// 004ddbf9  f7ea                 imul edx
// 004ddbfb  d1fa                 sar edx, 1
// 004ddbfd  8bc2                 mov eax, edx
// 004ddbff  c1e81f               shr eax, 0x1f
// 004ddc02  03c2                 add eax, edx
// 004ddc04  8945ec               mov dword ptr [ebp - 0x14], eax
// 004ddc07  8b7d10               mov edi, dword ptr [ebp + 0x10]
// 004ddc0a  85ff                 test edi, edi
// 004ddc0c  0f8403020000         je 0x4dde15
// 004ddc12  8b5e10               mov ebx, dword ptr [esi + 0x10]
// 004ddc15  8bd3                 mov edx, ebx
// 004ddc17  2bd1                 sub edx, ecx
// 004ddc19  b8abaaaa2a           mov eax, 0x2aaaaaab
// 004ddc1e  f7ea                 imul edx
// 004ddc20  d1fa                 sar edx, 1
// 004ddc22  8bc2                 mov eax, edx
// 004ddc24  c1e81f               shr eax, 0x1f
// 004ddc27  03c2                 add eax, edx
// 004ddc29  b955555515           mov ecx, 0x15555555
// 004ddc2e  2bc8                 sub ecx, eax
// 004ddc30  3bcf                 cmp ecx, edi
// 004ddc32  7305                 jae 0x4ddc39
// 004ddc34  e80791feff           call 0x4c6d40
// 004ddc39  8b4dec               mov ecx, dword ptr [ebp - 0x14]
// 004ddc3c  03c7                 add eax, edi
// 004ddc3e  3bc8                 cmp ecx, eax
// 004ddc40  0f83f1000000         jae 0x4ddd37
// 004ddc46  8bd1                 mov edx, ecx
// 004ddc48  d1ea                 shr edx, 1
// 004ddc4a  bb55555515           mov ebx, 0x15555555
// 004ddc4f  2bda                 sub ebx, edx
// 004ddc51  3bd9                 cmp ebx, ecx
// 004ddc53  730c                 jae 0x4ddc61
// 004ddc55  c745ec00000000       mov dword ptr [ebp - 0x14], 0
// 004ddc5c  8b4dec               mov ecx, dword ptr [ebp - 0x14]
// 004ddc5f  eb05                 jmp 0x4ddc66
// 004ddc61  03ca                 add ecx, edx
// 004ddc63  894dec               mov dword ptr [ebp - 0x14], ecx
// 004ddc66  3bc8                 cmp ecx, eax
// 004ddc68  7305                 jae 0x4ddc6f
// 004ddc6a  8945ec               mov dword ptr [ebp - 0x14], eax
// 004ddc6d  8bc8                 mov ecx, eax
// 004ddc6f  6a00                 push 0
// 004ddc71  51                   push ecx
// 004ddc72  e839f81a00           call 0x68d4b0
// 004ddc77  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 004ddc7a  c645e800             mov byte ptr [ebp - 0x18], 0
// 004ddc7e  8b55e8               mov edx, dword ptr [ebp - 0x18]
// 004ddc81  52                   push edx
// 004ddc82  8b5514               mov edx, dword ptr [ebp + 0x14]
// 004ddc85  52                   push edx
// 004ddc86  8d5e08               lea ebx, [esi + 8]
// 004ddc89  53                   push ebx
// 004ddc8a  50                   push eax
// 004ddc8b  894510               mov dword ptr [ebp + 0x10], eax
// 004ddc8e  8b450c               mov eax, dword ptr [ebp + 0xc]
// 004ddc91  50                   push eax
// 004ddc92  51                   push ecx
// 004ddc93  c745fc00000000       mov dword ptr [ebp - 4], 0
// 004ddc9a  e8d1e9ffff           call 0x4dc670
// 004ddc9f  8b4d14               mov ecx, dword ptr [ebp + 0x14]
// 004ddca2  83c420               add esp, 0x20
// 004ddca5  51                   push ecx
// 004ddca6  57                   push edi
// 004ddca7  50                   push eax
// 004ddca8  8bce                 mov ecx, esi
// 004ddcaa  e8e1f0ffff           call 0x4dcd90
// 004ddcaf  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 004ddcb2  c6451400             mov byte ptr [ebp + 0x14], 0
// 004ddcb6  8b5514               mov edx, dword ptr [ebp + 0x14]
// 004ddcb9  52                   push edx
// 004ddcba  8b5514               mov edx, dword ptr [ebp + 0x14]
// 004ddcbd  52                   push edx
// 004ddcbe  53                   push ebx
// 004ddcbf  50                   push eax
// 004ddcc0  8b450c               mov eax, dword ptr [ebp + 0xc]
// 004ddcc3  51                   push ecx
// 004ddcc4  50                   push eax
// 004ddcc5  e8a6e9ffff           call 0x4dc670
// 004ddcca  8b5e0c               mov ebx, dword ptr [esi + 0xc]
// 004ddccd  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 004ddcd0  2bcb                 sub ecx, ebx
// 004ddcd2  b8abaaaa2a           mov eax, 0x2aaaaaab
// 004ddcd7  f7e9                 imul ecx
// 004ddcd9  d1fa                 sar edx, 1
// 004ddcdb  8bca                 mov ecx, edx
// 004ddcdd  c1e91f               shr ecx, 0x1f
// 004ddce0  03ca                 add ecx, edx
// 004ddce2  83c418               add esp, 0x18
// 004ddce5  03f9                 add edi, ecx
// 004ddce7  85db                 test ebx, ebx
// 004ddce9  7409                 je 0x4ddcf4
// 004ddceb  53                   push ebx
// 004ddcec  e889291c00           call 0x6a067a
// 004ddcf1  83c404               add esp, 4
// 004ddcf4  8b45ec               mov eax, dword ptr [ebp - 0x14]
// 004ddcf7  8d1440               lea edx, [eax + eax*2]
// 004ddcfa  8b4510               mov eax, dword ptr [ebp + 0x10]
// 004ddcfd  8d0c90               lea ecx, [eax + edx*4]
// 004ddd00  8d147f               lea edx, [edi + edi*2]
// 004ddd03  894e14               mov dword ptr [esi + 0x14], ecx
// 004ddd06  8d0c90               lea ecx, [eax + edx*4]
// 004ddd09  894e10               mov dword ptr [esi + 0x10], ecx
// 004ddd0c  89460c               mov dword ptr [esi + 0xc], eax
// 004ddd0f  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 004ddd12  64890d00000000       mov dword ptr fs:[0], ecx
// 004ddd19  5f                   pop edi
// 004ddd1a  5e                   pop esi
// 004ddd1b  5b                   pop ebx
// 004ddd1c  8be5                 mov esp, ebp
// 004ddd1e  5d                   pop ebp
// 004ddd1f  c21000               ret 0x10
// 004ddd22  8b5510               mov edx, dword ptr [ebp + 0x10]
// 004ddd25  52                   push edx
// 004ddd26  e84f291c00           call 0x6a067a
// 004ddd2b  83c404               add esp, 4
// 004ddd2e  6a00                 push 0
// 004ddd30  6a00                 push 0
// 004ddd32  e855381c00           call 0x6a158c
// 004ddd37  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 004ddd3a  8bd3                 mov edx, ebx
// 004ddd3c  2bd1                 sub edx, ecx
// 004ddd3e  b8abaaaa2a           mov eax, 0x2aaaaaab
// 004ddd43  f7ea                 imul edx
// 004ddd45  d1fa                 sar edx, 1
// 004ddd47  8bc2                 mov eax, edx
// 004ddd49  c1e81f               shr eax, 0x1f
// 004ddd4c  03c2                 add eax, edx
// 004ddd4e  3bc7                 cmp eax, edi
// 004ddd50  8b4514               mov eax, dword ptr [ebp + 0x14]
// 004ddd53  d900                 fld dword ptr [eax]
// 004ddd55  d95ddc               fstp dword ptr [ebp - 0x24]
// 004ddd58  d94004               fld dword ptr [eax + 4]
// 004ddd5b  d95de0               fstp dword ptr [ebp - 0x20]
// 004ddd5e  d94008               fld dword ptr [eax + 8]
// 004ddd61  d95de4               fstp dword ptr [ebp - 0x1c]
// 004ddd64  7373                 jae 0x4dddd9
// 004ddd66  8d047f               lea eax, [edi + edi*2]
// 004ddd69  03c0                 add eax, eax
// 004ddd6b  03c0                 add eax, eax
// 004ddd6d  894514               mov dword ptr [ebp + 0x14], eax
// 004ddd70  03c1                 add eax, ecx
// 004ddd72  50                   push eax
// 004ddd73  53                   push ebx
// 004ddd74  51                   push ecx
// 004ddd75  8bce                 mov ecx, esi
// 004ddd77  e824faffff           call 0x4dd7a0
// 004ddd7c  8b5e10               mov ebx, dword ptr [esi + 0x10]
// 004ddd7f  8d4ddc               lea ecx, [ebp - 0x24]
// 004ddd82  51                   push ecx
// 004ddd83  8bcb                 mov ecx, ebx
// 004ddd85  2b4d0c               sub ecx, dword ptr [ebp + 0xc]
// 004ddd88  b8abaaaa2a           mov eax, 0x2aaaaaab
// 004ddd8d  f7e9                 imul ecx
// 004ddd8f  d1fa                 sar edx, 1
// 004ddd91  8bc2                 mov eax, edx
// 004ddd93  c1e81f               shr eax, 0x1f
// 004ddd96  03c2                 add eax, edx
// 004ddd98  2bf8                 sub edi, eax
// 004ddd9a  57                   push edi
// 004ddd9b  53                   push ebx
// 004ddd9c  8bce                 mov ecx, esi
// 004ddd9e  c745fc02000000       mov dword ptr [ebp - 4], 2
// 004ddda5  e8e6efffff           call 0x4dcd90
// 004dddaa  8b4514               mov eax, dword ptr [ebp + 0x14]
// 004dddad  014610               add dword ptr [esi + 0x10], eax
// 004dddb0  8b7610               mov esi, dword ptr [esi + 0x10]
// 004dddb3  8b550c               mov edx, dword ptr [ebp + 0xc]
// 004dddb6  8d4ddc               lea ecx, [ebp - 0x24]
// 004dddb9  51                   push ecx
// 004dddba  2bf0                 sub esi, eax
// 004dddbc  56                   push esi
// 004dddbd  52                   push edx
// 004dddbe  e8fd191a00           call 0x67f7c0
// 004dddc3  83c40c               add esp, 0xc
// 004dddc6  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 004dddc9  64890d00000000       mov dword ptr fs:[0], ecx
// 004dddd0  5f                   pop edi
// 004dddd1  5e                   pop esi
// 004dddd2  5b                   pop ebx
// 004dddd3  8be5                 mov esp, ebp
// 004dddd5  5d                   pop ebp
// 004dddd6  c21000               ret 0x10
// 004dddd9  8d3c7f               lea edi, [edi + edi*2]
// 004ddddc  03ff                 add edi, edi
// 004dddde  53                   push ebx
// 004ddddf  03ff                 add edi, edi
// 004ddde1  8bc3                 mov eax, ebx
// 004ddde3  2bc7                 sub eax, edi
// 004ddde5  53                   push ebx
// 004ddde6  50                   push eax
// 004ddde7  8bce                 mov ecx, esi
// 004ddde9  894514               mov dword ptr [ebp + 0x14], eax
// 004dddec  e8aff9ffff           call 0x4dd7a0
// 004dddf1  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 004dddf4  894610               mov dword ptr [esi + 0x10], eax
// 004dddf7  8b4514               mov eax, dword ptr [ebp + 0x14]
// 004dddfa  53                   push ebx
// 004dddfb  50                   push eax
// 004dddfc  51                   push ecx
// 004dddfd  e85eefffff           call 0x4dcd60
// 004dde02  8b450c               mov eax, dword ptr [ebp + 0xc]
// 004dde05  8d55dc               lea edx, [ebp - 0x24]
// 004dde08  52                   push edx
// 004dde09  03f8                 add edi, eax
// 004dde0b  57                   push edi
// 004dde0c  50                   push eax
// 004dde0d  e8ae191a00           call 0x67f7c0
// 004dde12  83c418               add esp, 0x18
// 004dde15  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 004dde18  5f                   pop edi
// 004dde19  5e                   pop esi
// 004dde1a  64890d00000000       mov dword ptr fs:[0], ecx
// 004dde21  5b                   pop ebx
// 004dde22  8be5                 mov esp, ebp
// 004dde24  5d                   pop ebp
// 004dde25  c21000               ret 0x10

// from server: 100% by auto
// roc 2008-06 004ddbc0  unit: RBX::RenderBase::Mesh::Level  size: 354 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004ddbc0
//
// 004ddbc0  55                   push ebp
// 004ddbc1  8bec                 mov ebp, esp
// 004ddbc3  6aff                 push -1
// 004ddbc5  68a0a27c00           push 0x7ca2a0
// 004ddbca  64a100000000         mov eax, dword ptr fs:[0]
// 004ddbd0  50                   push eax
// 004ddbd1  64892500000000       mov dword ptr fs:[0], esp
// 004ddbd8  83ec18               sub esp, 0x18
// 004ddbdb  53                   push ebx
// 004ddbdc  56                   push esi
// 004ddbdd  8bf1                 mov esi, ecx
// 004ddbdf  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 004ddbe2  57                   push edi
// 004ddbe3  8965f0               mov dword ptr [ebp - 0x10], esp
// 004ddbe6  85c9                 test ecx, ecx
// 004ddbe8  7505                 jne 0x4ddbef
// 004ddbea  894dec               mov dword ptr [ebp - 0x14], ecx
// 004ddbed  eb18                 jmp 0x4ddc07
// 004ddbef  8b5614               mov edx, dword ptr [esi + 0x14]
// 004ddbf2  2bd1                 sub edx, ecx
// 004ddbf4  b8abaaaa2a           mov eax, 0x2aaaaaab
// 004ddbf9  f7ea                 imul edx
// 004ddbfb  d1fa                 sar edx, 1
// 004ddbfd  8bc2                 mov eax, edx
// 004ddbff  c1e81f               shr eax, 0x1f
// 004ddc02  03c2                 add eax, edx
// 004ddc04  8945ec               mov dword ptr [ebp - 0x14], eax
// 004ddc07  8b7d10               mov edi, dword ptr [ebp + 0x10]
// 004ddc0a  85ff                 test edi, edi
// 004ddc0c  0f8403020000         je 0x4dde15
// 004ddc12  8b5e10               mov ebx, dword ptr [esi + 0x10]
// 004ddc15  8bd3                 mov edx, ebx
// 004ddc17  2bd1                 sub edx, ecx
// 004ddc19  b8abaaaa2a           mov eax, 0x2aaaaaab
// 004ddc1e  f7ea                 imul edx
// 004ddc20  d1fa                 sar edx, 1
// 004ddc22  8bc2                 mov eax, edx
// 004ddc24  c1e81f               shr eax, 0x1f
// 004ddc27  03c2                 add eax, edx
// 004ddc29  b955555515           mov ecx, 0x15555555
// 004ddc2e  2bc8                 sub ecx, eax
// 004ddc30  3bcf                 cmp ecx, edi
// 004ddc32  7305                 jae 0x4ddc39
// 004ddc34  e80791feff           call 0x4c6d40
// 004ddc39  8b4dec               mov ecx, dword ptr [ebp - 0x14]
// 004ddc3c  03c7                 add eax, edi
// 004ddc3e  3bc8                 cmp ecx, eax
// 004ddc40  0f83f1000000         jae 0x4ddd37
// 004ddc46  8bd1                 mov edx, ecx
// 004ddc48  d1ea                 shr edx, 1
// 004ddc4a  bb55555515           mov ebx, 0x15555555
// 004ddc4f  2bda                 sub ebx, edx
// 004ddc51  3bd9                 cmp ebx, ecx
// 004ddc53  730c                 jae 0x4ddc61
// 004ddc55  c745ec00000000       mov dword ptr [ebp - 0x14], 0
// 004ddc5c  8b4dec               mov ecx, dword ptr [ebp - 0x14]
// 004ddc5f  eb05                 jmp 0x4ddc66
// 004ddc61  03ca                 add ecx, edx
// 004ddc63  894dec               mov dword ptr [ebp - 0x14], ecx
// 004ddc66  3bc8                 cmp ecx, eax
// 004ddc68  7305                 jae 0x4ddc6f
// 004ddc6a  8945ec               mov dword ptr [ebp - 0x14], eax
// 004ddc6d  8bc8                 mov ecx, eax
// 004ddc6f  6a00                 push 0
// 004ddc71  51                   push ecx
// 004ddc72  e839f81a00           call 0x68d4b0
// 004ddc77  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 004ddc7a  c645e800             mov byte ptr [ebp - 0x18], 0
// 004ddc7e  8b55e8               mov edx, dword ptr [ebp - 0x18]
// 004ddc81  52                   push edx
// 004ddc82  8b5514               mov edx, dword ptr [ebp + 0x14]
// 004ddc85  52                   push edx
// 004ddc86  8d5e08               lea ebx, [esi + 8]
// 004ddc89  53                   push ebx
// 004ddc8a  50                   push eax
// 004ddc8b  894510               mov dword ptr [ebp + 0x10], eax
// 004ddc8e  8b450c               mov eax, dword ptr [ebp + 0xc]
// 004ddc91  50                   push eax
// 004ddc92  51                   push ecx
// 004ddc93  c745fc00000000       mov dword ptr [ebp - 4], 0
// 004ddc9a  e8d1e9ffff           call 0x4dc670
// 004ddc9f  8b4d14               mov ecx, dword ptr [ebp + 0x14]
// 004ddca2  83c420               add esp, 0x20
// 004ddca5  51                   push ecx
// 004ddca6  57                   push edi
// 004ddca7  50                   push eax
// 004ddca8  8bce                 mov ecx, esi
// 004ddcaa  e8e1f0ffff           call 0x4dcd90
// 004ddcaf  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 004ddcb2  c6451400             mov byte ptr [ebp + 0x14], 0
// 004ddcb6  8b5514               mov edx, dword ptr [ebp + 0x14]
// 004ddcb9  52                   push edx
// 004ddcba  8b5514               mov edx, dword ptr [ebp + 0x14]
// 004ddcbd  52                   push edx
// 004ddcbe  53                   push ebx
// 004ddcbf  50                   push eax
// 004ddcc0  8b450c               mov eax, dword ptr [ebp + 0xc]
// 004ddcc3  51                   push ecx
// 004ddcc4  50                   push eax
// 004ddcc5  e8a6e9ffff           call 0x4dc670
// 004ddcca  8b5e0c               mov ebx, dword ptr [esi + 0xc]
// 004ddccd  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 004ddcd0  2bcb                 sub ecx, ebx
// 004ddcd2  b8abaaaa2a           mov eax, 0x2aaaaaab
// 004ddcd7  f7e9                 imul ecx
// 004ddcd9  d1fa                 sar edx, 1
// 004ddcdb  8bca                 mov ecx, edx
// 004ddcdd  c1e91f               shr ecx, 0x1f
// 004ddce0  03ca                 add ecx, edx
// 004ddce2  83c418               add esp, 0x18
// 004ddce5  03f9                 add edi, ecx
// 004ddce7  85db                 test ebx, ebx
// 004ddce9  7409                 je 0x4ddcf4
// 004ddceb  53                   push ebx
// 004ddcec  e889291c00           call 0x6a067a
// 004ddcf1  83c404               add esp, 4
// 004ddcf4  8b45ec               mov eax, dword ptr [ebp - 0x14]
// 004ddcf7  8d1440               lea edx, [eax + eax*2]
// 004ddcfa  8b4510               mov eax, dword ptr [ebp + 0x10]
// 004ddcfd  8d0c90               lea ecx, [eax + edx*4]
// 004ddd00  8d147f               lea edx, [edi + edi*2]
// 004ddd03  894e14               mov dword ptr [esi + 0x14], ecx
// 004ddd06  8d0c90               lea ecx, [eax + edx*4]
// 004ddd09  894e10               mov dword ptr [esi + 0x10], ecx
// 004ddd0c  89460c               mov dword ptr [esi + 0xc], eax
// 004ddd0f  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 004ddd12  64890d00000000       mov dword ptr fs:[0], ecx
// 004ddd19  5f                   pop edi
// 004ddd1a  5e                   pop esi
// 004ddd1b  5b                   pop ebx
// 004ddd1c  8be5                 mov esp, ebp
// 004ddd1e  5d                   pop ebp
// 004ddd1f  c21000               ret 0x10
// library ogre-1.4.9/OgreMeshSerializerImpl.cpp (function ?_Insert_n@?$vector@VVector3@Ogre@@V?$allocator@VVector3@Ogre@@@std@@@std@@IAEXV?$_Vector_const_iterator@VVector3@Ogre@@V?$allocator@VVector3@Ogre@@@std@@@2@IABVVector3@Ogre@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MT
// roc-lib: ogre-1.4.9 OgreMeshSerializerImpl.cpp
