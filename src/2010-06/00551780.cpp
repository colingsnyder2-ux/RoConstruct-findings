// roc 2010-06 00551780  unit: G3D::Log  size: 2810 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00551780
//
// 00551780  64a100000000         mov eax, dword ptr fs:[0]
// 00551786  6aff                 push -1
// 00551788  68a40f9900           push 0x990fa4
// 0055178d  50                   push eax
// 0055178e  64892500000000       mov dword ptr fs:[0], esp
// 00551795  81ece0000000         sub esp, 0xe0
// 0055179b  53                   push ebx
// 0055179c  8b9c24f4000000       mov ebx, dword ptr [esp + 0xf4]
// 005517a3  55                   push ebp
// 005517a4  56                   push esi
// 005517a5  8bf1                 mov esi, ecx
// 005517a7  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 005517aa  8bc1                 mov eax, ecx
// 005517ac  f7d8                 neg eax
// 005517ae  894344               mov dword ptr [ebx + 0x44], eax
// 005517b1  bd00000000           mov ebp, 0
// 005517b6  7805                 js 0x5517bd
// 005517b8  3b433c               cmp eax, dword ptr [ebx + 0x3c]
// 005517bb  7e0b                 jle 0x5517c8
// 005517bd  03c1                 add eax, ecx
// 005517bf  55                   push ebp
// 005517c0  50                   push eax
// 005517c1  8bcb                 mov ecx, ebx
// 005517c3  e888700000           call 0x558850
// 005517c8  6a02                 push 2
// 005517ca  8d442474             lea eax, [esp + 0x74]
// 005517ce  50                   push eax
// 005517cf  8bcb                 mov ecx, ebx
// 005517d1  e81a760000           call 0x558df0
// 005517d6  8d4c2470             lea ecx, [esp + 0x70]
// 005517da  688801a200           push 0xa20188
// 005517df  51                   push ecx
// 005517e0  89ac24fc000000       mov dword ptr [esp + 0xfc], ebp
// 005517e7  ff159ca49e00         call dword ptr [0x9ea49c]
// 005517ed  83c408               add esp, 8
// 005517f0  84c0                 test al, al
// 005517f2  744f                 je 0x551843
// 005517f4  687801a200           push 0xa20178
// 005517f9  8d4c2434             lea ecx, [esp + 0x34]
// 005517fd  ff1510a49e00         call dword ptr [0x9ea410]
// 00551803  8d542454             lea edx, [esp + 0x54]
// 00551807  52                   push edx
// 00551808  8bcb                 mov ecx, ebx
// 0055180a  c68424f800000001     mov byte ptr [esp + 0xf8], 1
// 00551812  e859e9ffff           call 0x550170
// 00551817  50                   push eax
// 00551818  8d442434             lea eax, [esp + 0x34]
// 0055181c  50                   push eax
// 0055181d  8d8c2494000000       lea ecx, [esp + 0x94]
// 00551824  c68424fc00000002     mov byte ptr [esp + 0xfc], 2
// 0055182c  e8cf21f3ff           call 0x483a00
// 00551831  6894edb000           push 0xb0ed94
// 00551836  8d8c2490000000       lea ecx, [esp + 0x90]
// 0055183d  51                   push ecx
// 0055183e  e86f712500           call 0x7a89b2
// 00551843  c7461003000000       mov dword ptr [esi + 0x10], 3
// 0055184a  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 0055184d  8b5344               mov edx, dword ptr [ebx + 0x44]
// 00551850  8d441110             lea eax, [ecx + edx + 0x10]
// 00551854  2bc1                 sub eax, ecx
// 00551856  894344               mov dword ptr [ebx + 0x44], eax
// 00551859  7805                 js 0x551860
// 0055185b  3b433c               cmp eax, dword ptr [ebx + 0x3c]
// 0055185e  7e0b                 jle 0x55186b
// 00551860  03c1                 add eax, ecx
// 00551862  55                   push ebp
// 00551863  50                   push eax
// 00551864  8bcb                 mov ecx, ebx
// 00551866  e8e56f0000           call 0x558850
// 0055186b  8bcb                 mov ecx, ebx
// 0055186d  e8ced9ffff           call 0x54f240
// 00551872  8bcb                 mov ecx, ebx
// 00551874  894608               mov dword ptr [esi + 8], eax
// 00551877  e8c4d9ffff           call 0x54f240
// 0055187c  89460c               mov dword ptr [esi + 0xc], eax
// 0055187f  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 00551882  8b4344               mov eax, dword ptr [ebx + 0x44]
// 00551885  8d440102             lea eax, [ecx + eax + 2]
// 00551889  2bc1                 sub eax, ecx
// 0055188b  894344               mov dword ptr [ebx + 0x44], eax
// 0055188e  7805                 js 0x551895
// 00551890  3b433c               cmp eax, dword ptr [ebx + 0x3c]
// 00551893  7e0b                 jle 0x5518a0
// 00551895  03c1                 add eax, ecx
// 00551897  55                   push ebp
// 00551898  50                   push eax
// 00551899  8bcb                 mov ecx, ebx
// 0055189b  e8b06f0000           call 0x558850
// 005518a0  57                   push edi
// 005518a1  8bcb                 mov ecx, ebx
// 005518a3  e848e9ffff           call 0x5501f0
// 005518a8  0fb7f8               movzx edi, ax
// 005518ab  8bcb                 mov ecx, ebx
// 005518ad  897c2420             mov dword ptr [esp + 0x20], edi
// 005518b1  e88ad9ffff           call 0x54f240
// 005518b6  3bc5                 cmp eax, ebp
// 005518b8  744f                 je 0x551909
// 005518ba  685801a200           push 0xa20158
// 005518bf  8d4c2438             lea ecx, [esp + 0x38]
// 005518c3  ff1510a49e00         call dword ptr [0x9ea410]
// 005518c9  8d4c2458             lea ecx, [esp + 0x58]
// 005518cd  51                   push ecx
// 005518ce  8bcb                 mov ecx, ebx
// 005518d0  c68424fc00000003     mov byte ptr [esp + 0xfc], 3
// 005518d8  e893e8ffff           call 0x550170
// 005518dd  50                   push eax
// 005518de  8d542438             lea edx, [esp + 0x38]
// 005518e2  52                   push edx
// 005518e3  8d8c2498000000       lea ecx, [esp + 0x98]
// 005518ea  c684240001000004     mov byte ptr [esp + 0x100], 4
// 005518f2  e80921f3ff           call 0x483a00
// 005518f7  6894edb000           push 0xb0ed94
// 005518fc  8d842494000000       lea eax, [esp + 0x94]
// 00551903  50                   push eax
// 00551904  e8a9702500           call 0x7a89b2
// 00551909  6683ff08             cmp di, 8
// 0055190d  0f873a010000         ja 0x551a4d
// 00551913  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 00551916  8b5344               mov edx, dword ptr [ebx + 0x44]
// 00551919  8d44110c             lea eax, [ecx + edx + 0xc]
// 0055191d  2bc1                 sub eax, ecx
// 0055191f  894344               mov dword ptr [ebx + 0x44], eax
// 00551922  7805                 js 0x551929
// 00551924  3b433c               cmp eax, dword ptr [ebx + 0x3c]
// 00551927  7e0c                 jle 0x551935
// 00551929  03c1                 add eax, ecx
// 0055192b  6a00                 push 0
// 0055192d  50                   push eax
// 0055192e  8bcb                 mov ecx, ebx
// 00551930  e81b6f0000           call 0x558850
// 00551935  8bcb                 mov ecx, ebx
// 00551937  e804d9ffff           call 0x54f240
// 0055193c  8d3c40               lea edi, [eax + eax*2]
// 0055193f  57                   push edi
// 00551940  897c2428             mov dword ptr [esp + 0x28], edi
// 00551944  e85792fbff           call 0x50aba0
// 00551949  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 0055194c  8be8                 mov ebp, eax
// 0055194e  8b4344               mov eax, dword ptr [ebx + 0x44]
// 00551951  8d440104             lea eax, [ecx + eax + 4]
// 00551955  83c404               add esp, 4
// 00551958  2bc1                 sub eax, ecx
// 0055195a  894344               mov dword ptr [ebx + 0x44], eax
// 0055195d  7805                 js 0x551964
// 0055195f  3b433c               cmp eax, dword ptr [ebx + 0x3c]
// 00551962  7e0c                 jle 0x551970
// 00551964  03c1                 add eax, ecx
// 00551966  6a00                 push 0
// 00551968  50                   push eax
// 00551969  8bcb                 mov ecx, ebx
// 0055196b  e8e06e0000           call 0x558850
// 00551970  85ff                 test edi, edi
// 00551972  0f8ed5000000         jle 0x551a4d
// 00551978  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0055197c  49                   dec ecx
// 0055197d  b8abaaaaaa           mov eax, 0xaaaaaaab
// 00551982  f7e1                 mul ecx
// 00551984  d1ea                 shr edx, 1
// 00551986  42                   inc edx
// 00551987  8d7d01               lea edi, [ebp + 1]
// 0055198a  89542418             mov dword ptr [esp + 0x18], edx
// 0055198e  8bff                 mov edi, edi
// 00551990  8b4344               mov eax, dword ptr [ebx + 0x44]
// 00551993  8d5001               lea edx, [eax + 1]
// 00551996  3b533c               cmp edx, dword ptr [ebx + 0x3c]
// 00551999  7e0f                 jle 0x5519aa
// 0055199b  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 0055199e  03c8                 add ecx, eax
// 005519a0  6a01                 push 1
// 005519a2  51                   push ecx
// 005519a3  8bcb                 mov ecx, ebx
// 005519a5  e8a66e0000           call 0x558850
// 005519aa  8b4344               mov eax, dword ptr [ebx + 0x44]
// 005519ad  8b5340               mov edx, dword ptr [ebx + 0x40]
// 005519b0  8a0c10               mov cl, byte ptr [eax + edx]
// 005519b3  40                   inc eax
// 005519b4  8d5001               lea edx, [eax + 1]
// 005519b7  3b533c               cmp edx, dword ptr [ebx + 0x3c]
// 005519ba  884c241f             mov byte ptr [esp + 0x1f], cl
// 005519be  894344               mov dword ptr [ebx + 0x44], eax
// 005519c1  7e0f                 jle 0x5519d2
// 005519c3  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 005519c6  03c8                 add ecx, eax
// 005519c8  6a01                 push 1
// 005519ca  51                   push ecx
// 005519cb  8bcb                 mov ecx, ebx
// 005519cd  e87e6e0000           call 0x558850
// 005519d2  8b4344               mov eax, dword ptr [ebx + 0x44]
// 005519d5  8b5340               mov edx, dword ptr [ebx + 0x40]
// 005519d8  8a0c10               mov cl, byte ptr [eax + edx]
// 005519db  40                   inc eax
// 005519dc  8d5001               lea edx, [eax + 1]
// 005519df  3b533c               cmp edx, dword ptr [ebx + 0x3c]
// 005519e2  884c2413             mov byte ptr [esp + 0x13], cl
// 005519e6  894344               mov dword ptr [ebx + 0x44], eax
// 005519e9  7e0f                 jle 0x5519fa
// 005519eb  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 005519ee  03c8                 add ecx, eax
// 005519f0  6a01                 push 1
// 005519f2  51                   push ecx
// 005519f3  8bcb                 mov ecx, ebx
// 005519f5  e8566e0000           call 0x558850
// 005519fa  8b4344               mov eax, dword ptr [ebx + 0x44]
// 005519fd  8b5340               mov edx, dword ptr [ebx + 0x40]
// 00551a00  8a0c10               mov cl, byte ptr [eax + edx]
// 00551a03  40                   inc eax
// 00551a04  8d5001               lea edx, [eax + 1]
// 00551a07  3b533c               cmp edx, dword ptr [ebx + 0x3c]
// 00551a0a  884c242f             mov byte ptr [esp + 0x2f], cl
// 00551a0e  894344               mov dword ptr [ebx + 0x44], eax
// 00551a11  7e0f                 jle 0x551a22
// 00551a13  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 00551a16  03c8                 add ecx, eax
// 00551a18  6a01                 push 1
// 00551a1a  51                   push ecx
// 00551a1b  8bcb                 mov ecx, ebx
// 00551a1d  e82e6e0000           call 0x558850
// 00551a22  0fb654242f           movzx edx, byte ptr [esp + 0x2f]
// 00551a27  8a4c2413             mov cl, byte ptr [esp + 0x13]
// 00551a2b  b801000000           mov eax, 1
// 00551a30  014344               add dword ptr [ebx + 0x44], eax
// 00551a33  8857ff               mov byte ptr [edi - 1], dl
// 00551a36  0fb654241f           movzx edx, byte ptr [esp + 0x1f]
// 00551a3b  880f                 mov byte ptr [edi], cl
// 00551a3d  885701               mov byte ptr [edi + 1], dl
// 00551a40  83c703               add edi, 3
// 00551a43  29442418             sub dword ptr [esp + 0x18], eax
// 00551a47  0f8543ffffff         jne 0x551990
// 00551a4d  8b460c               mov eax, dword ptr [esi + 0xc]
// 00551a50  b9ffffffff           mov ecx, 0xffffffff
// 00551a55  85c0                 test eax, eax
// 00551a57  7d15                 jge 0x551a6e
// 00551a59  f7d8                 neg eax
// 00551a5b  89460c               mov dword ptr [esi + 0xc], eax
// 00551a5e  33ff                 xor edi, edi
// 00551a60  89442428             mov dword ptr [esp + 0x28], eax
// 00551a64  c744243001000000     mov dword ptr [esp + 0x30], 1
// 00551a6c  eb0b                 jmp 0x551a79
// 00551a6e  8d78ff               lea edi, [eax - 1]
// 00551a71  894c2428             mov dword ptr [esp + 0x28], ecx
// 00551a75  894c2430             mov dword ptr [esp + 0x30], ecx
// 00551a79  8b4608               mov eax, dword ptr [esi + 8]
// 00551a7c  0faf460c             imul eax, dword ptr [esi + 0xc]
// 00551a80  8d0440               lea eax, [eax + eax*2]
// 00551a83  50                   push eax
// 00551a84  e81791fbff           call 0x50aba0
// 00551a89  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00551a8d  83c404               add esp, 4
// 00551a90  894604               mov dword ptr [esi + 4], eax
// 00551a93  6683f901             cmp cx, 1
// 00551a97  0f8515030000         jne 0x551db2
// 00551a9d  8b4608               mov eax, dword ptr [esi + 8]
// 00551aa0  83c007               add eax, 7
// 00551aa3  c1f803               sar eax, 3
// 00551aa6  8bc8                 mov ecx, eax
// 00551aa8  83e103               and ecx, 3
// 00551aab  89442420             mov dword ptr [esp + 0x20], eax
// 00551aaf  740d                 je 0x551abe
// 00551ab1  ba04000000           mov edx, 4
// 00551ab6  2bd1                 sub edx, ecx
// 00551ab8  03c2                 add eax, edx
// 00551aba  89442420             mov dword ptr [esp + 0x20], eax
// 00551abe  897c2418             mov dword ptr [esp + 0x18], edi
// 00551ac2  3b7c2428             cmp edi, dword ptr [esp + 0x28]
// 00551ac6  0f84ac060000         je 0x552178
// 00551acc  8b542420             mov edx, dword ptr [esp + 0x20]
// 00551ad0  8bcf                 mov ecx, edi
// 00551ad2  8b7e08               mov edi, dword ptr [esi + 8]
// 00551ad5  0faff9               imul edi, ecx
// 00551ad8  33c0                 xor eax, eax
// 00551ada  89442414             mov dword ptr [esp + 0x14], eax
// 00551ade  8d3c7f               lea edi, [edi + edi*2]
// 00551ae1  85d2                 test edx, edx
// 00551ae3  0f8eb2020000         jle 0x551d9b
// 00551ae9  89542424             mov dword ptr [esp + 0x24], edx
// 00551aed  8d4900               lea ecx, [ecx]
// 00551af0  8b4b44               mov ecx, dword ptr [ebx + 0x44]
// 00551af3  8d5101               lea edx, [ecx + 1]
// 00551af6  3b533c               cmp edx, dword ptr [ebx + 0x3c]
// 00551af9  7e13                 jle 0x551b0e
// 00551afb  8b4334               mov eax, dword ptr [ebx + 0x34]
// 00551afe  03c1                 add eax, ecx
// 00551b00  6a01                 push 1
// 00551b02  50                   push eax
// 00551b03  8bcb                 mov ecx, ebx
// 00551b05  e8466d0000           call 0x558850
// 00551b0a  8b442414             mov eax, dword ptr [esp + 0x14]
// 00551b0e  8b5344               mov edx, dword ptr [ebx + 0x44]
// 00551b11  8b4b40               mov ecx, dword ptr [ebx + 0x40]
// 00551b14  8a0c0a               mov cl, byte ptr [edx + ecx]
// 00551b17  42                   inc edx
// 00551b18  895344               mov dword ptr [ebx + 0x44], edx
// 00551b1b  3b4608               cmp eax, dword ptr [esi + 8]
// 00551b1e  884c2413             mov byte ptr [esp + 0x13], cl
// 00551b22  0f8d60020000         jge 0x551d88
// 00551b28  8b5604               mov edx, dword ptr [esi + 4]
// 00551b2b  0fb6c9               movzx ecx, cl
// 00551b2e  c1e907               shr ecx, 7
// 00551b31  8d0c49               lea ecx, [ecx + ecx*2]
// 00551b34  894c2414             mov dword ptr [esp + 0x14], ecx
// 00551b38  0fb60c29             movzx ecx, byte ptr [ecx + ebp]
// 00551b3c  880c17               mov byte ptr [edi + edx], cl
// 00551b3f  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00551b43  0fb64c2901           movzx ecx, byte ptr [ecx + ebp + 1]
// 00551b48  8b5604               mov edx, dword ptr [esi + 4]
// 00551b4b  884c3a01             mov byte ptr [edx + edi + 1], cl
// 00551b4f  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00551b53  0fb64c2902           movzx ecx, byte ptr [ecx + ebp + 2]
// 00551b58  8b5604               mov edx, dword ptr [esi + 4]
// 00551b5b  884c3a02             mov byte ptr [edx + edi + 2], cl
// 00551b5f  8a4c2413             mov cl, byte ptr [esp + 0x13]
// 00551b63  40                   inc eax
// 00551b64  83c703               add edi, 3
// 00551b67  3b4608               cmp eax, dword ptr [esi + 8]
// 00551b6a  89442414             mov dword ptr [esp + 0x14], eax
// 00551b6e  0f8d14020000         jge 0x551d88
// 00551b74  8b5604               mov edx, dword ptr [esi + 4]
// 00551b77  0fb6c9               movzx ecx, cl
// 00551b7a  c1e906               shr ecx, 6
// 00551b7d  83e101               and ecx, 1
// 00551b80  8d0c49               lea ecx, [ecx + ecx*2]
// 00551b83  894c2414             mov dword ptr [esp + 0x14], ecx
// 00551b87  0fb60c29             movzx ecx, byte ptr [ecx + ebp]
// 00551b8b  880c17               mov byte ptr [edi + edx], cl
// 00551b8e  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00551b92  0fb64c2901           movzx ecx, byte ptr [ecx + ebp + 1]
// 00551b97  8b5604               mov edx, dword ptr [esi + 4]
// 00551b9a  884c3a01             mov byte ptr [edx + edi + 1], cl
// 00551b9e  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00551ba2  0fb64c2902           movzx ecx, byte ptr [ecx + ebp + 2]
// 00551ba7  8b5604               mov edx, dword ptr [esi + 4]
// 00551baa  884c3a02             mov byte ptr [edx + edi + 2], cl
// 00551bae  8a4c2413             mov cl, byte ptr [esp + 0x13]
// 00551bb2  40                   inc eax
// 00551bb3  83c703               add edi, 3
// 00551bb6  3b4608               cmp eax, dword ptr [esi + 8]
// 00551bb9  89442414             mov dword ptr [esp + 0x14], eax
// 00551bbd  0f8dc5010000         jge 0x551d88
// 00551bc3  8b5604               mov edx, dword ptr [esi + 4]
// 00551bc6  0fb6c9               movzx ecx, cl
// 00551bc9  c1e905               shr ecx, 5
// 00551bcc  83e101               and ecx, 1
// 00551bcf  8d0c49               lea ecx, [ecx + ecx*2]
// 00551bd2  894c2414             mov dword ptr [esp + 0x14], ecx
// 00551bd6  0fb60c29             movzx ecx, byte ptr [ecx + ebp]
// 00551bda  880c17               mov byte ptr [edi + edx], cl
// 00551bdd  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00551be1  0fb64c2901           movzx ecx, byte ptr [ecx + ebp + 1]
// 00551be6  8b5604               mov edx, dword ptr [esi + 4]
// 00551be9  884c3a01             mov byte ptr [edx + edi + 1], cl
// 00551bed  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00551bf1  0fb64c2902           movzx ecx, byte ptr [ecx + ebp + 2]
// 00551bf6  8b5604               mov edx, dword ptr [esi + 4]
// 00551bf9  884c3a02             mov byte ptr [edx + edi + 2], cl
// 00551bfd  8a4c2413             mov cl, byte ptr [esp + 0x13]
// 00551c01  40                   inc eax
// 00551c02  83c703               add edi, 3
// 00551c05  3b4608               cmp eax, dword ptr [esi + 8]
// 00551c08  89442414             mov dword ptr [esp + 0x14], eax
// 00551c0c  0f8d76010000         jge 0x551d88
// 00551c12  8b5604               mov edx, dword ptr [esi + 4]
// 00551c15  0fb6c9               movzx ecx, cl
// 00551c18  c1e904               shr ecx, 4
// 00551c1b  83e101               and ecx, 1
// 00551c1e  8d0c49               lea ecx, [ecx + ecx*2]
// 00551c21  894c2414             mov dword ptr [esp + 0x14], ecx
// 00551c25  0fb60c29             movzx ecx, byte ptr [ecx + ebp]
// 00551c29  880c17               mov byte ptr [edi + edx], cl
// 00551c2c  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00551c30  0fb64c2901           movzx ecx, byte ptr [ecx + ebp + 1]
// 00551c35  8b5604               mov edx, dword ptr [esi + 4]
// 00551c38  884c3a01             mov byte ptr [edx + edi + 1], cl
// 00551c3c  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00551c40  0fb64c2902           movzx ecx, byte ptr [ecx + ebp + 2]
// 00551c45  8b5604               mov edx, dword ptr [esi + 4]
// 00551c48  884c3a02             mov byte ptr [edx + edi + 2], cl
// 00551c4c  8a4c2413             mov cl, byte ptr [esp + 0x13]
// 00551c50  40                   inc eax
// 00551c51  83c703               add edi, 3
// 00551c54  3b4608               cmp eax, dword ptr [esi + 8]
// 00551c57  89442414             mov dword ptr [esp + 0x14], eax
// 00551c5b  0f8d27010000         jge 0x551d88
// 00551c61  8b5604               mov edx, dword ptr [esi + 4]
// 00551c64  0fb6c9               movzx ecx, cl
// 00551c67  c1e903               shr ecx, 3
// 00551c6a  83e101               and ecx, 1
// 00551c6d  8d0c49               lea ecx, [ecx + ecx*2]
// 00551c70  894c2414             mov dword ptr [esp + 0x14], ecx
// 00551c74  0fb60c29             movzx ecx, byte ptr [ecx + ebp]
// 00551c78  880c17               mov byte ptr [edi + edx], cl
// 00551c7b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00551c7f  0fb64c2901           movzx ecx, byte ptr [ecx + ebp + 1]
// 00551c84  8b5604               mov edx, dword ptr [esi + 4]
// 00551c87  884c3a01             mov byte ptr [edx + edi + 1], cl
// 00551c8b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00551c8f  0fb64c2902           movzx ecx, byte ptr [ecx + ebp + 2]
// 00551c94  8b5604               mov edx, dword ptr [esi + 4]
// 00551c97  884c3a02             mov byte ptr [edx + edi + 2], cl
// 00551c9b  8a4c2413             mov cl, byte ptr [esp + 0x13]
// 00551c9f  40                   inc eax
// 00551ca0  83c703               add edi, 3
// 00551ca3  3b4608               cmp eax, dword ptr [esi + 8]
// 00551ca6  89442414             mov dword ptr [esp + 0x14], eax
// 00551caa  0f8dd8000000         jge 0x551d88
// 00551cb0  8b5604               mov edx, dword ptr [esi + 4]
// 00551cb3  0fb6c9               movzx ecx, cl
// 00551cb6  c1e902               shr ecx, 2
// 00551cb9  83e101               and ecx, 1
// 00551cbc  8d0c49               lea ecx, [ecx + ecx*2]
// 00551cbf  894c2414             mov dword ptr [esp + 0x14], ecx
// 00551cc3  0fb60c29             movzx ecx, byte ptr [ecx + ebp]
// 00551cc7  880c17               mov byte ptr [edi + edx], cl
// 00551cca  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00551cce  0fb64c2901           movzx ecx, byte ptr [ecx + ebp + 1]
// 00551cd3  8b5604               mov edx, dword ptr [esi + 4]
// 00551cd6  884c3a01             mov byte ptr [edx + edi + 1], cl
// 00551cda  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00551cde  0fb64c2902           movzx ecx, byte ptr [ecx + ebp + 2]
// 00551ce3  8b5604               mov edx, dword ptr [esi + 4]
// 00551ce6  884c3a02             mov byte ptr [edx + edi + 2], cl
// 00551cea  8a4c2413             mov cl, byte ptr [esp + 0x13]
// 00551cee  40                   inc eax
// 00551cef  83c703               add edi, 3
// 00551cf2  3b4608               cmp eax, dword ptr [esi + 8]
// 00551cf5  89442414             mov dword ptr [esp + 0x14], eax
// 00551cf9  0f8d89000000         jge 0x551d88
// 00551cff  8b5604               mov edx, dword ptr [esi + 4]
// 00551d02  0fb6c9               movzx ecx, cl
// 00551d05  d1e9                 shr ecx, 1
// 00551d07  83e101               and ecx, 1
// 00551d0a  8d0c49               lea ecx, [ecx + ecx*2]
// 00551d0d  894c2414             mov dword ptr [esp + 0x14], ecx
// 00551d11  0fb60c29             movzx ecx, byte ptr [ecx + ebp]
// 00551d15  880c17               mov byte ptr [edi + edx], cl
// 00551d18  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00551d1c  0fb64c2901           movzx ecx, byte ptr [ecx + ebp + 1]
// 00551d21  8b5604               mov edx, dword ptr [esi + 4]
// 00551d24  884c3a01             mov byte ptr [edx + edi + 1], cl
// 00551d28  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00551d2c  0fb64c2902           movzx ecx, byte ptr [ecx + ebp + 2]
// 00551d31  8b5604               mov edx, dword ptr [esi + 4]
// 00551d34  884c3a02             mov byte ptr [edx + edi + 2], cl
// 00551d38  8a4c2413             mov cl, byte ptr [esp + 0x13]
// 00551d3c  40                   inc eax
// 00551d3d  83c703               add edi, 3
// 00551d40  3b4608               cmp eax, dword ptr [esi + 8]
// 00551d43  89442414             mov dword ptr [esp + 0x14], eax
// 00551d47  7d3f                 jge 0x551d88
// 00551d49  8b5604               mov edx, dword ptr [esi + 4]
// 00551d4c  0fb6c9               movzx ecx, cl
// 00551d4f  83e101               and ecx, 1
// 00551d52  8d0c49               lea ecx, [ecx + ecx*2]
// 00551d55  894c2414             mov dword ptr [esp + 0x14], ecx
// 00551d59  0fb60c29             movzx ecx, byte ptr [ecx + ebp]
// 00551d5d  880c17               mov byte ptr [edi + edx], cl
// 00551d60  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00551d64  0fb64c2901           movzx ecx, byte ptr [ecx + ebp + 1]
// 00551d69  8b5604               mov edx, dword ptr [esi + 4]
// 00551d6c  884c3a01             mov byte ptr [edx + edi + 1], cl
// 00551d70  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00551d74  0fb64c2902           movzx ecx, byte ptr [ecx + ebp + 2]
// 00551d79  8b5604               mov edx, dword ptr [esi + 4]
// 00551d7c  40                   inc eax
// 00551d7d  884c3a02             mov byte ptr [edx + edi + 2], cl
// 00551d81  89442414             mov dword ptr [esp + 0x14], eax
// 00551d85  83c703               add edi, 3
// 00551d88  836c242401           sub dword ptr [esp + 0x24], 1
// 00551d8d  0f855dfdffff         jne 0x551af0
// 00551d93  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00551d97  8b542420             mov edx, dword ptr [esp + 0x20]
// 00551d9b  034c2430             add ecx, dword ptr [esp + 0x30]
// 00551d9f  894c2418             mov dword ptr [esp + 0x18], ecx
// 00551da3  3b4c2428             cmp ecx, dword ptr [esp + 0x28]
// 00551da7  0f8525fdffff         jne 0x551ad2
// 00551dad  e9c6030000           jmp 0x552178
// 00551db2  6683f904             cmp cx, 4
// 00551db6  0f8522010000         jne 0x551ede
// 00551dbc  8b4608               mov eax, dword ptr [esi + 8]
// 00551dbf  40                   inc eax
// 00551dc0  d1f8                 sar eax, 1
// 00551dc2  8bc8                 mov ecx, eax
// 00551dc4  83e103               and ecx, 3
// 00551dc7  89442424             mov dword ptr [esp + 0x24], eax
// 00551dcb  740d                 je 0x551dda
// 00551dcd  ba04000000           mov edx, 4
// 00551dd2  2bd1                 sub edx, ecx
// 00551dd4  03c2                 add eax, edx
// 00551dd6  89442424             mov dword ptr [esp + 0x24], eax
// 00551dda  897c2418             mov dword ptr [esp + 0x18], edi
// 00551dde  3b7c2428             cmp edi, dword ptr [esp + 0x28]
// 00551de2  0f8490030000         je 0x552178
// 00551de8  eb06                 jmp 0x551df0
// 00551dea  8d9b00000000         lea ebx, [ebx]
// 00551df0  8b7e08               mov edi, dword ptr [esi + 8]
// 00551df3  8b442418             mov eax, dword ptr [esp + 0x18]
// 00551df7  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00551dfb  0faff8               imul edi, eax
// 00551dfe  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00551e06  8d3c7f               lea edi, [edi + edi*2]
// 00551e09  85c9                 test ecx, ecx
// 00551e0b  0f8eb6000000         jle 0x551ec7
// 00551e11  894c2420             mov dword ptr [esp + 0x20], ecx
// 00551e15  8b4344               mov eax, dword ptr [ebx + 0x44]
// 00551e18  8d4801               lea ecx, [eax + 1]
// 00551e1b  3b4b3c               cmp ecx, dword ptr [ebx + 0x3c]
// 00551e1e  7e0f                 jle 0x551e2f
// 00551e20  8b5334               mov edx, dword ptr [ebx + 0x34]
// 00551e23  6a01                 push 1
// 00551e25  03d0                 add edx, eax
// 00551e27  52                   push edx
// 00551e28  8bcb                 mov ecx, ebx
// 00551e2a  e8216a0000           call 0x558850
// 00551e2f  8b4344               mov eax, dword ptr [ebx + 0x44]
// 00551e32  8b4b40               mov ecx, dword ptr [ebx + 0x40]
// 00551e35  8a0c08               mov cl, byte ptr [eax + ecx]
// 00551e38  8b542414             mov edx, dword ptr [esp + 0x14]
// 00551e3c  40                   inc eax
// 00551e3d  894344               mov dword ptr [ebx + 0x44], eax
// 00551e40  0fb6c1               movzx eax, cl
// 00551e43  8bc8                 mov ecx, eax
// 00551e45  83e00f               and eax, 0xf
// 00551e48  c1e904               shr ecx, 4
// 00551e4b  3b5608               cmp edx, dword ptr [esi + 8]
// 00551e4e  8d0440               lea eax, [eax + eax*2]
// 00551e51  8d0c49               lea ecx, [ecx + ecx*2]
// 00551e54  89442454             mov dword ptr [esp + 0x54], eax
// 00551e58  7d2c                 jge 0x551e86
// 00551e5a  0fb61429             movzx edx, byte ptr [ecx + ebp]
// 00551e5e  8b4604               mov eax, dword ptr [esi + 4]
// 00551e61  ff442414             inc dword ptr [esp + 0x14]
// 00551e65  881407               mov byte ptr [edi + eax], dl
// 00551e68  0fb6542901           movzx edx, byte ptr [ecx + ebp + 1]
// 00551e6d  8b4604               mov eax, dword ptr [esi + 4]
// 00551e70  88543801             mov byte ptr [eax + edi + 1], dl
// 00551e74  8b4604               mov eax, dword ptr [esi + 4]
// 00551e77  8a4c2902             mov cl, byte ptr [ecx + ebp + 2]
// 00551e7b  884c3802             mov byte ptr [eax + edi + 2], cl
// 00551e7f  8b442454             mov eax, dword ptr [esp + 0x54]
// 00551e83  83c703               add edi, 3
// 00551e86  8b542414             mov edx, dword ptr [esp + 0x14]
// 00551e8a  3b5608               cmp edx, dword ptr [esi + 8]
// 00551e8d  7d29                 jge 0x551eb8
// 00551e8f  0fb61428             movzx edx, byte ptr [eax + ebp]
// 00551e93  8b4e04               mov ecx, dword ptr [esi + 4]
// 00551e96  ff442414             inc dword ptr [esp + 0x14]
// 00551e9a  88140f               mov byte ptr [edi + ecx], dl
// 00551e9d  0fb6542801           movzx edx, byte ptr [eax + ebp + 1]
// 00551ea2  8b4e04               mov ecx, dword ptr [esi + 4]
// 00551ea5  88543901             mov byte ptr [ecx + edi + 1], dl
// 00551ea9  0fb6542802           movzx edx, byte ptr [eax + ebp + 2]
// 00551eae  8b4e04               mov ecx, dword ptr [esi + 4]
// 00551eb1  88543902             mov byte ptr [ecx + edi + 2], dl
// 00551eb5  83c703               add edi, 3
// 00551eb8  836c242001           sub dword ptr [esp + 0x20], 1
// 00551ebd  0f8552ffffff         jne 0x551e15
// 00551ec3  8b442418             mov eax, dword ptr [esp + 0x18]
// 00551ec7  03442430             add eax, dword ptr [esp + 0x30]
// 00551ecb  89442418             mov dword ptr [esp + 0x18], eax
// 00551ecf  3b442428             cmp eax, dword ptr [esp + 0x28]
// 00551ed3  0f8517ffffff         jne 0x551df0
// 00551ed9  e99a020000           jmp 0x552178
// 00551ede  6683f908             cmp cx, 8
// 00551ee2  0f85d6000000         jne 0x551fbe
// 00551ee8  8b4e08               mov ecx, dword ptr [esi + 8]
// 00551eeb  8bc1                 mov eax, ecx
// 00551eed  83e003               and eax, 3
// 00551ef0  894c2420             mov dword ptr [esp + 0x20], ecx
// 00551ef4  740d                 je 0x551f03
// 00551ef6  ba04000000           mov edx, 4
// 00551efb  2bd0                 sub edx, eax
// 00551efd  03ca                 add ecx, edx
// 00551eff  894c2420             mov dword ptr [esp + 0x20], ecx
// 00551f03  8bcf                 mov ecx, edi
// 00551f05  897c2418             mov dword ptr [esp + 0x18], edi
// 00551f09  3b7c2428             cmp edi, dword ptr [esp + 0x28]
// 00551f0d  0f8465020000         je 0x552178
// 00551f13  eb0b                 jmp 0x551f20
// 00551f15  8da42400000000       lea esp, [esp]
// 00551f1c  8d642400             lea esp, [esp]
// 00551f20  8b442420             mov eax, dword ptr [esp + 0x20]
// 00551f24  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00551f2c  85c0                 test eax, eax
// 00551f2e  7e77                 jle 0x551fa7
// 00551f30  89442424             mov dword ptr [esp + 0x24], eax
// 00551f34  8b4344               mov eax, dword ptr [ebx + 0x44]
// 00551f37  8d4801               lea ecx, [eax + 1]
// 00551f3a  3b4b3c               cmp ecx, dword ptr [ebx + 0x3c]
// 00551f3d  7e0f                 jle 0x551f4e
// 00551f3f  8b5334               mov edx, dword ptr [ebx + 0x34]
// 00551f42  6a01                 push 1
// 00551f44  03d0                 add edx, eax
// 00551f46  52                   push edx
// 00551f47  8bcb                 mov ecx, ebx
// 00551f49  e802690000           call 0x558850
// 00551f4e  8b4344               mov eax, dword ptr [ebx + 0x44]
// 00551f51  8b4b40               mov ecx, dword ptr [ebx + 0x40]
// 00551f54  8a0c08               mov cl, byte ptr [eax + ecx]
// 00551f57  40                   inc eax
// 00551f58  894344               mov dword ptr [ebx + 0x44], eax
// 00551f5b  8b4608               mov eax, dword ptr [esi + 8]
// 00551f5e  39442414             cmp dword ptr [esp + 0x14], eax
// 00551f62  7d38                 jge 0x551f9c
// 00551f64  0faf442418           imul eax, dword ptr [esp + 0x18]
// 00551f69  03442414             add eax, dword ptr [esp + 0x14]
// 00551f6d  8b5604               mov edx, dword ptr [esi + 4]
// 00551f70  ff442414             inc dword ptr [esp + 0x14]
// 00551f74  0fb6f9               movzx edi, cl
// 00551f77  8d3c7f               lea edi, [edi + edi*2]
// 00551f7a  0fb60c2f             movzx ecx, byte ptr [edi + ebp]
// 00551f7e  8d0440               lea eax, [eax + eax*2]
// 00551f81  880c10               mov byte ptr [eax + edx], cl
// 00551f84  0fb64c2f01           movzx ecx, byte ptr [edi + ebp + 1]
// 00551f89  8b5604               mov edx, dword ptr [esi + 4]
// 00551f8c  884c0201             mov byte ptr [edx + eax + 1], cl
// 00551f90  0fb64c2f02           movzx ecx, byte ptr [edi + ebp + 2]
// 00551f95  8b5604               mov edx, dword ptr [esi + 4]
// 00551f98  884c0202             mov byte ptr [edx + eax + 2], cl
// 00551f9c  836c242401           sub dword ptr [esp + 0x24], 1
// 00551fa1  7591                 jne 0x551f34
// 00551fa3  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00551fa7  034c2430             add ecx, dword ptr [esp + 0x30]
// 00551fab  894c2418             mov dword ptr [esp + 0x18], ecx
// 00551faf  3b4c2428             cmp ecx, dword ptr [esp + 0x28]
// 00551fb3  0f8567ffffff         jne 0x551f20
// 00551fb9  e9ba010000           jmp 0x552178
// 00551fbe  6683f910             cmp cx, 0x10
// 00551fc2  7565                 jne 0x552029
// 00551fc4  50                   push eax
// 00551fc5  e8e68bfbff           call 0x50abb0
// 00551fca  55                   push ebp
// 00551fcb  c7460400000000       mov dword ptr [esi + 4], 0
// 00551fd2  e8d98bfbff           call 0x50abb0
// 00551fd7  83c408               add esp, 8
// 00551fda  683801a200           push 0xa20138
// 00551fdf  8d4c2438             lea ecx, [esp + 0x38]
// 00551fe3  ff1510a49e00         call dword ptr [0x9ea410]
// 00551fe9  8d542458             lea edx, [esp + 0x58]
// 00551fed  52                   push edx
// 00551fee  8bcb                 mov ecx, ebx
// 00551ff0  c68424fc00000005     mov byte ptr [esp + 0xfc], 5
// 00551ff8  e873e1ffff           call 0x550170
// 00551ffd  50                   push eax
// 00551ffe  8d442438             lea eax, [esp + 0x38]
// 00552002  50                   push eax
// 00552003  8d8c2498000000       lea ecx, [esp + 0x98]
// 0055200a  c684240001000006     mov byte ptr [esp + 0x100], 6
// 00552012  e8e919f3ff           call 0x483a00
// 00552017  6894edb000           push 0xb0ed94
// 0055201c  8d8c2494000000       lea ecx, [esp + 0x94]
// 00552023  51                   push ecx
// 00552024  e889692500           call 0x7a89b2
// 00552029  6683f918             cmp cx, 0x18
// 0055202d  0f857e010000         jne 0x5521b1
// 00552033  6a14                 push 0x14
// 00552035  8bcb                 mov ecx, ebx
// 00552037  e804e2ffff           call 0x550240
// 0055203c  8b4608               mov eax, dword ptr [esi + 8]
// 0055203f  8d0440               lea eax, [eax + eax*2]
// 00552042  83e003               and eax, 3
// 00552045  740d                 je 0x552054
// 00552047  b904000000           mov ecx, 4
// 0055204c  2bc8                 sub ecx, eax
// 0055204e  894c2420             mov dword ptr [esp + 0x20], ecx
// 00552052  eb08                 jmp 0x55205c
// 00552054  c744242000000000     mov dword ptr [esp + 0x20], 0
// 0055205c  897c2418             mov dword ptr [esp + 0x18], edi
// 00552060  3b7c2428             cmp edi, dword ptr [esp + 0x28]
// 00552064  0f840e010000         je 0x552178
// 0055206a  8d9b00000000         lea ebx, [ebx]
// 00552070  8b4608               mov eax, dword ptr [esi + 8]
// 00552073  8bf8                 mov edi, eax
// 00552075  0faf7c2418           imul edi, dword ptr [esp + 0x18]
// 0055207a  8d3c7f               lea edi, [edi + edi*2]
// 0055207d  c744242400000000     mov dword ptr [esp + 0x24], 0
// 00552085  85c0                 test eax, eax
// 00552087  0f8eac000000         jle 0x552139
// 0055208d  8d4900               lea ecx, [ecx]
// 00552090  8b4344               mov eax, dword ptr [ebx + 0x44]
// 00552093  8d5001               lea edx, [eax + 1]
// 00552096  3b533c               cmp edx, dword ptr [ebx + 0x3c]
// 00552099  7e0f                 jle 0x5520aa
// 0055209b  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 0055209e  03c8                 add ecx, eax
// 005520a0  6a01                 push 1
// 005520a2  51                   push ecx
// 005520a3  8bcb                 mov ecx, ebx
// 005520a5  e8a6670000           call 0x558850
// 005520aa  8b4344               mov eax, dword ptr [ebx + 0x44]
// 005520ad  8b5340               mov edx, dword ptr [ebx + 0x40]
// 005520b0  8a0c10               mov cl, byte ptr [eax + edx]
// 005520b3  40                   inc eax
// 005520b4  8d5001               lea edx, [eax + 1]
// 005520b7  3b533c               cmp edx, dword ptr [ebx + 0x3c]
// 005520ba  884c241f             mov byte ptr [esp + 0x1f], cl
// 005520be  894344               mov dword ptr [ebx + 0x44], eax
// 005520c1  7e0f                 jle 0x5520d2
// 005520c3  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 005520c6  03c8                 add ecx, eax
// 005520c8  6a01                 push 1
// 005520ca  51                   push ecx
// 005520cb  8bcb                 mov ecx, ebx
// 005520cd  e87e670000           call 0x558850
// 005520d2  8b4344               mov eax, dword ptr [ebx + 0x44]
// 005520d5  8b5340               mov edx, dword ptr [ebx + 0x40]
// 005520d8  8a0c10               mov cl, byte ptr [eax + edx]
// 005520db  40                   inc eax
// 005520dc  8d5001               lea edx, [eax + 1]
// 005520df  3b533c               cmp edx, dword ptr [ebx + 0x3c]
// 005520e2  884c2413             mov byte ptr [esp + 0x13], cl
// 005520e6  894344               mov dword ptr [ebx + 0x44], eax
// 005520e9  7e0f                 jle 0x5520fa
// 005520eb  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 005520ee  03c8                 add ecx, eax
// 005520f0  6a01                 push 1
// 005520f2  51                   push ecx
// 005520f3  8bcb                 mov ecx, ebx
// 005520f5  e856670000           call 0x558850
// 005520fa  8b4344               mov eax, dword ptr [ebx + 0x44]
// 005520fd  8b5340               mov edx, dword ptr [ebx + 0x40]
// 00552100  8a0c10               mov cl, byte ptr [eax + edx]
// 00552103  8a542413             mov dl, byte ptr [esp + 0x13]
// 00552107  40                   inc eax
// 00552108  894344               mov dword ptr [ebx + 0x44], eax
// 0055210b  8b4604               mov eax, dword ptr [esi + 4]
// 0055210e  880c07               mov byte ptr [edi + eax], cl
// 00552111  8b4e04               mov ecx, dword ptr [esi + 4]
// 00552114  88543901             mov byte ptr [ecx + edi + 1], dl
// 00552118  0fb64c241f           movzx ecx, byte ptr [esp + 0x1f]
// 0055211d  8b4604               mov eax, dword ptr [esi + 4]
// 00552120  884c3802             mov byte ptr [eax + edi + 2], cl
// 00552124  8b442424             mov eax, dword ptr [esp + 0x24]
// 00552128  40                   inc eax
// 00552129  83c703               add edi, 3
// 0055212c  3b4608               cmp eax, dword ptr [esi + 8]
// 0055212f  89442424             mov dword ptr [esp + 0x24], eax
// 00552133  0f8c57ffffff         jl 0x552090
// 00552139  837c242000           cmp dword ptr [esp + 0x20], 0
// 0055213e  7422                 je 0x552162
// 00552140  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 00552143  8b5344               mov edx, dword ptr [ebx + 0x44]
// 00552146  8d441102             lea eax, [ecx + edx + 2]
// 0055214a  2bc1                 sub eax, ecx
// 0055214c  894344               mov dword ptr [ebx + 0x44], eax
// 0055214f  7805                 js 0x552156
// 00552151  3b433c               cmp eax, dword ptr [ebx + 0x3c]
// 00552154  7e0c                 jle 0x552162
// 00552156  03c1                 add eax, ecx
// 00552158  6a00                 push 0
// 0055215a  50                   push eax
// 0055215b  8bcb                 mov ecx, ebx
// 0055215d  e8ee660000           call 0x558850
// 00552162  8b442418             mov eax, dword ptr [esp + 0x18]
// 00552166  03442430             add eax, dword ptr [esp + 0x30]
// 0055216a  89442418             mov dword ptr [esp + 0x18], eax
// 0055216e  3b442428             cmp eax, dword ptr [esp + 0x28]
// 00552172  0f85f8feffff         jne 0x552070
// 00552178  55                   push ebp
// 00552179  e8328afbff           call 0x50abb0
// 0055217e  83c404               add esp, 4
// 00552181  8d4c2474             lea ecx, [esp + 0x74]
// 00552185  c78424f8000000ffffffff mov dword ptr [esp + 0xf8], 0xffffffff
// 00552190  ff1500a49e00         call dword ptr [0x9ea400]
// 00552196  8b8c24f0000000       mov ecx, dword ptr [esp + 0xf0]
// 0055219d  5f                   pop edi
// 0055219e  5e                   pop esi
// 0055219f  5d                   pop ebp
// 005521a0  5b                   pop ebx
// 005521a1  64890d00000000       mov dword ptr fs:[0], ecx
// 005521a8  81c4ec000000         add esp, 0xec
// 005521ae  c20400               ret 4
// 005521b1  50                   push eax
// 005521b2  6683f920             cmp cx, 0x20
// 005521b6  7564                 jne 0x55221c
// 005521b8  e8f389fbff           call 0x50abb0
// 005521bd  55                   push ebp
// 005521be  c7460400000000       mov dword ptr [esi + 4], 0
// 005521c5  e8e689fbff           call 0x50abb0
// 005521ca  83c408               add esp, 8
// 005521cd  681801a200           push 0xa20118
// 005521d2  8d4c2438             lea ecx, [esp + 0x38]
// 005521d6  ff1510a49e00         call dword ptr [0x9ea410]
// 005521dc  8d442458             lea eax, [esp + 0x58]
// 005521e0  50                   push eax
// 005521e1  8bcb                 mov ecx, ebx
// 005521e3  c68424fc00000007     mov byte ptr [esp + 0xfc], 7
// 005521eb  e880dfffff           call 0x550170
// 005521f0  50                   push eax
// 005521f1  8d4c2438             lea ecx, [esp + 0x38]
// 005521f5  51                   push ecx
// 005521f6  8d8c2498000000       lea ecx, [esp + 0x98]
// 005521fd  c684240001000008     mov byte ptr [esp + 0x100], 8
// 00552205  e8f617f3ff           call 0x483a00
// 0055220a  6894edb000           push 0xb0ed94
// 0055220f  8d942494000000       lea edx, [esp + 0x94]
// 00552216  52                   push edx
// 00552217  e896672500           call 0x7a89b2
// 0055221c  e88f89fbff           call 0x50abb0
// 00552221  83c404               add esp, 4
// 00552224  680801a200           push 0xa20108
// 00552229  8d4c2438             lea ecx, [esp + 0x38]
// 0055222d  c7460400000000       mov dword ptr [esi + 4], 0
// 00552234  ff1510a49e00         call dword ptr [0x9ea410]
// 0055223a  8d442458             lea eax, [esp + 0x58]
// 0055223e  50                   push eax
// 0055223f  8bcb                 mov ecx, ebx
// 00552241  c68424fc00000009     mov byte ptr [esp + 0xfc], 9
// 00552249  e822dfffff           call 0x550170
// 0055224e  50                   push eax
// 0055224f  8d4c2438             lea ecx, [esp + 0x38]
// 00552253  51                   push ecx
// 00552254  8d8c2498000000       lea ecx, [esp + 0x98]
// 0055225b  c68424000100000a     mov byte ptr [esp + 0x100], 0xa
// 00552263  e89817f3ff           call 0x483a00
// 00552268  6894edb000           push 0xb0ed94
// 0055226d  8d942494000000       lea edx, [esp + 0x94]
// 00552274  52                   push edx
// 00552275  e838672500           call 0x7a89b2
// library g3d-6.09-rbx2008/G3Dcpp\GImage_bmp.cpp (function ?decodeBMP@GImage@G3D@@AAEXAAVBinaryInput@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/GImage_bmp.cpp
