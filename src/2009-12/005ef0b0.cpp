// roc 2009-12 005ef0b0  unit: G3D::Log  size: 1465 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005ef0b0
//
// 005ef0b0  6aff                 push -1
// 005ef0b2  6870f29300           push 0x93f270
// 005ef0b7  64a100000000         mov eax, dword ptr fs:[0]
// 005ef0bd  50                   push eax
// 005ef0be  64892500000000       mov dword ptr fs:[0], esp
// 005ef0c5  81ec78040000         sub esp, 0x478
// 005ef0cb  53                   push ebx
// 005ef0cc  55                   push ebp
// 005ef0cd  8bac2490040000       mov ebp, dword ptr [esp + 0x490]
// 005ef0d4  8b4544               mov eax, dword ptr [ebp + 0x44]
// 005ef0d7  56                   push esi
// 005ef0d8  8bf1                 mov esi, ecx
// 005ef0da  8d4801               lea ecx, [eax + 1]
// 005ef0dd  3b4d3c               cmp ecx, dword ptr [ebp + 0x3c]
// 005ef0e0  57                   push edi
// 005ef0e1  89742420             mov dword ptr [esp + 0x20], esi
// 005ef0e5  7e0f                 jle 0x5ef0f6
// 005ef0e7  8b5534               mov edx, dword ptr [ebp + 0x34]
// 005ef0ea  6a01                 push 1
// 005ef0ec  03d0                 add edx, eax
// 005ef0ee  52                   push edx
// 005ef0ef  8bcd                 mov ecx, ebp
// 005ef0f1  e8ca600000           call 0x5f51c0
// 005ef0f6  8b4544               mov eax, dword ptr [ebp + 0x44]
// 005ef0f9  8b4d40               mov ecx, dword ptr [ebp + 0x40]
// 005ef0fc  8a1408               mov dl, byte ptr [eax + ecx]
// 005ef0ff  40                   inc eax
// 005ef100  8d4801               lea ecx, [eax + 1]
// 005ef103  3b4d3c               cmp ecx, dword ptr [ebp + 0x3c]
// 005ef106  88542417             mov byte ptr [esp + 0x17], dl
// 005ef10a  894544               mov dword ptr [ebp + 0x44], eax
// 005ef10d  7e0f                 jle 0x5ef11e
// 005ef10f  8b5534               mov edx, dword ptr [ebp + 0x34]
// 005ef112  6a01                 push 1
// 005ef114  03d0                 add edx, eax
// 005ef116  52                   push edx
// 005ef117  8bcd                 mov ecx, ebp
// 005ef119  e8a2600000           call 0x5f51c0
// 005ef11e  ff4544               inc dword ptr [ebp + 0x44]
// 005ef121  8b4544               mov eax, dword ptr [ebp + 0x44]
// 005ef124  8d4801               lea ecx, [eax + 1]
// 005ef127  3b4d3c               cmp ecx, dword ptr [ebp + 0x3c]
// 005ef12a  7e0f                 jle 0x5ef13b
// 005ef12c  8b5534               mov edx, dword ptr [ebp + 0x34]
// 005ef12f  6a01                 push 1
// 005ef131  03d0                 add edx, eax
// 005ef133  52                   push edx
// 005ef134  8bcd                 mov ecx, ebp
// 005ef136  e885600000           call 0x5f51c0
// 005ef13b  8b4544               mov eax, dword ptr [ebp + 0x44]
// 005ef13e  8b4d40               mov ecx, dword ptr [ebp + 0x40]
// 005ef141  8a1408               mov dl, byte ptr [eax + ecx]
// 005ef144  40                   inc eax
// 005ef145  8d4801               lea ecx, [eax + 1]
// 005ef148  3b4d3c               cmp ecx, dword ptr [ebp + 0x3c]
// 005ef14b  88542415             mov byte ptr [esp + 0x15], dl
// 005ef14f  894544               mov dword ptr [ebp + 0x44], eax
// 005ef152  7e0f                 jle 0x5ef163
// 005ef154  8b5534               mov edx, dword ptr [ebp + 0x34]
// 005ef157  6a01                 push 1
// 005ef159  03d0                 add edx, eax
// 005ef15b  52                   push edx
// 005ef15c  8bcd                 mov ecx, ebp
// 005ef15e  e85d600000           call 0x5f51c0
// 005ef163  8b4544               mov eax, dword ptr [ebp + 0x44]
// 005ef166  8b4d40               mov ecx, dword ptr [ebp + 0x40]
// 005ef169  8a1408               mov dl, byte ptr [eax + ecx]
// 005ef16c  40                   inc eax
// 005ef16d  8bcd                 mov ecx, ebp
// 005ef16f  88542416             mov byte ptr [esp + 0x16], dl
// 005ef173  894544               mov dword ptr [ebp + 0x44], eax
// 005ef176  e8559deaff           call 0x498ed0
// 005ef17b  0fb7c0               movzx eax, ax
// 005ef17e  8bcd                 mov ecx, ebp
// 005ef180  89442424             mov dword ptr [esp + 0x24], eax
// 005ef184  e8479deaff           call 0x498ed0
// 005ef189  0fb7c8               movzx ecx, ax
// 005ef18c  894c2418             mov dword ptr [esp + 0x18], ecx
// 005ef190  8bcd                 mov ecx, ebp
// 005ef192  e8399deaff           call 0x498ed0
// 005ef197  0fb7d0               movzx edx, ax
// 005ef19a  8bcd                 mov ecx, ebp
// 005ef19c  89542410             mov dword ptr [esp + 0x10], edx
// 005ef1a0  e82b9deaff           call 0x498ed0
// 005ef1a5  0fb7c0               movzx eax, ax
// 005ef1a8  8bcd                 mov ecx, ebp
// 005ef1aa  8944241c             mov dword ptr [esp + 0x1c], eax
// 005ef1ae  e81d9deaff           call 0x498ed0
// 005ef1b3  8bcd                 mov ecx, ebp
// 005ef1b5  e8169deaff           call 0x498ed0
// 005ef1ba  b90f000000           mov ecx, 0xf
// 005ef1bf  8d8424de000000       lea eax, [esp + 0xde]
// 005ef1c6  eb08                 jmp 0x5ef1d0
// 005ef1c8  8da42400000000       lea esp, [esp]
// 005ef1cf  90                   nop 
// 005ef1d0  c640fe00             mov byte ptr [eax - 2], 0
// 005ef1d4  c640ff00             mov byte ptr [eax - 1], 0
// 005ef1d8  c60000               mov byte ptr [eax], 0
// 005ef1db  83c003               add eax, 3
// 005ef1de  83e901               sub ecx, 1
// 005ef1e1  79ed                 jns 0x5ef1d0
// 005ef1e3  8d8c24dc000000       lea ecx, [esp + 0xdc]
// 005ef1ea  51                   push ecx
// 005ef1eb  6a30                 push 0x30
// 005ef1ed  8bcd                 mov ecx, ebp
// 005ef1ef  e8cc640000           call 0x5f56c0
// 005ef1f4  8b4d34               mov ecx, dword ptr [ebp + 0x34]
// 005ef1f7  8b5544               mov edx, dword ptr [ebp + 0x44]
// 005ef1fa  8d441101             lea eax, [ecx + edx + 1]
// 005ef1fe  2bc1                 sub eax, ecx
// 005ef200  894544               mov dword ptr [ebp + 0x44], eax
// 005ef203  7805                 js 0x5ef20a
// 005ef205  3b453c               cmp eax, dword ptr [ebp + 0x3c]
// 005ef208  7e0c                 jle 0x5ef216
// 005ef20a  03c1                 add eax, ecx
// 005ef20c  6a00                 push 0
// 005ef20e  50                   push eax
// 005ef20f  8bcd                 mov ecx, ebp
// 005ef211  e8aa5f0000           call 0x5f51c0
// 005ef216  8b4544               mov eax, dword ptr [ebp + 0x44]
// 005ef219  8d4801               lea ecx, [eax + 1]
// 005ef21c  3b4d3c               cmp ecx, dword ptr [ebp + 0x3c]
// 005ef21f  7e0f                 jle 0x5ef230
// 005ef221  8b5534               mov edx, dword ptr [ebp + 0x34]
// 005ef224  6a01                 push 1
// 005ef226  03d0                 add edx, eax
// 005ef228  52                   push edx
// 005ef229  8bcd                 mov ecx, ebp
// 005ef22b  e8905f0000           call 0x5f51c0
// 005ef230  8b4544               mov eax, dword ptr [ebp + 0x44]
// 005ef233  8b4d40               mov ecx, dword ptr [ebp + 0x40]
// 005ef236  8a1c08               mov bl, byte ptr [eax + ecx]
// 005ef239  40                   inc eax
// 005ef23a  8bcd                 mov ecx, ebp
// 005ef23c  894544               mov dword ptr [ebp + 0x44], eax
// 005ef23f  e88c9ceaff           call 0x498ed0
// 005ef244  8bcd                 mov ecx, ebp
// 005ef246  e8859ceaff           call 0x498ed0
// 005ef24b  8b4d34               mov ecx, dword ptr [ebp + 0x34]
// 005ef24e  8b5544               mov edx, dword ptr [ebp + 0x44]
// 005ef251  0fb7f8               movzx edi, ax
// 005ef254  8d44113a             lea eax, [ecx + edx + 0x3a]
// 005ef258  2bc1                 sub eax, ecx
// 005ef25a  894544               mov dword ptr [ebp + 0x44], eax
// 005ef25d  7805                 js 0x5ef264
// 005ef25f  3b453c               cmp eax, dword ptr [ebp + 0x3c]
// 005ef262  7e0c                 jle 0x5ef270
// 005ef264  03c1                 add eax, ecx
// 005ef266  6a00                 push 0
// 005ef268  50                   push eax
// 005ef269  8bcd                 mov ecx, ebp
// 005ef26b  e8505f0000           call 0x5f51c0
// 005ef270  0fb7442424           movzx eax, word ptr [esp + 0x24]
// 005ef275  0fb74c2410           movzx ecx, word ptr [esp + 0x10]
// 005ef27a  0fb7542418           movzx edx, word ptr [esp + 0x18]
// 005ef27f  2bc8                 sub ecx, eax
// 005ef281  0fb744241c           movzx eax, word ptr [esp + 0x1c]
// 005ef286  2bc2                 sub eax, edx
// 005ef288  41                   inc ecx
// 005ef289  40                   inc eax
// 005ef28a  807c24170a           cmp byte ptr [esp + 0x17], 0xa
// 005ef28f  894e08               mov dword ptr [esi + 8], ecx
// 005ef292  89460c               mov dword ptr [esi + 0xc], eax
// 005ef295  c7461003000000       mov dword ptr [esi + 0x10], 3
// 005ef29c  0f8575030000         jne 0x5ef617
// 005ef2a2  807c241501           cmp byte ptr [esp + 0x15], 1
// 005ef2a7  0f856a030000         jne 0x5ef617
// 005ef2ad  807c241608           cmp byte ptr [esp + 0x16], 8
// 005ef2b2  0f850d030000         jne 0x5ef5c5
// 005ef2b8  80fb01               cmp bl, 1
// 005ef2bb  7409                 je 0x5ef2c6
// 005ef2bd  80fb03               cmp bl, 3
// 005ef2c0  0f85ff020000         jne 0x5ef5c5
// 005ef2c6  0fafc1               imul eax, ecx
// 005ef2c9  8d0440               lea eax, [eax + eax*2]
// 005ef2cc  50                   push eax
// 005ef2cd  e8ceafffff           call 0x5ea2a0
// 005ef2d2  83c404               add esp, 4
// 005ef2d5  89442418             mov dword ptr [esp + 0x18], eax
// 005ef2d9  894604               mov dword ptr [esi + 4], eax
// 005ef2dc  6683ff01             cmp di, 1
// 005ef2e0  0f85f5000000         jne 0x5ef3db
// 005ef2e6  80fb03               cmp bl, 3
// 005ef2e9  0f85ec000000         jne 0x5ef3db
// 005ef2ef  33c9                 xor ecx, ecx
// 005ef2f1  394e0c               cmp dword ptr [esi + 0xc], ecx
// 005ef2f4  894c2410             mov dword ptr [esp + 0x10], ecx
// 005ef2f8  0f8ec2000000         jle 0x5ef3c0
// 005ef2fe  8bff                 mov edi, edi
// 005ef300  33db                 xor ebx, ebx
// 005ef302  8b4608               mov eax, dword ptr [esi + 8]
// 005ef305  8bf8                 mov edi, eax
// 005ef307  0faff9               imul edi, ecx
// 005ef30a  03c7                 add eax, edi
// 005ef30c  3bf8                 cmp edi, eax
// 005ef30e  8944241c             mov dword ptr [esp + 0x1c], eax
// 005ef312  0f8d90000000         jge 0x5ef3a8
// 005ef318  eb06                 jmp 0x5ef320
// 005ef31a  8d9b00000000         lea ebx, [ebx]
// 005ef320  8b4544               mov eax, dword ptr [ebp + 0x44]
// 005ef323  8d4801               lea ecx, [eax + 1]
// 005ef326  3b4d3c               cmp ecx, dword ptr [ebp + 0x3c]
// 005ef329  7e0f                 jle 0x5ef33a
// 005ef32b  8b5534               mov edx, dword ptr [ebp + 0x34]
// 005ef32e  6a01                 push 1
// 005ef330  03d0                 add edx, eax
// 005ef332  52                   push edx
// 005ef333  8bcd                 mov ecx, ebp
// 005ef335  e8865e0000           call 0x5f51c0
// 005ef33a  8b4544               mov eax, dword ptr [ebp + 0x44]
// 005ef33d  8b4d40               mov ecx, dword ptr [ebp + 0x40]
// 005ef340  8a1408               mov dl, byte ptr [eax + ecx]
// 005ef343  40                   inc eax
// 005ef344  894544               mov dword ptr [ebp + 0x44], eax
// 005ef347  be01000000           mov esi, 1
// 005ef34c  80fac0               cmp dl, 0xc0
// 005ef34f  722a                 jb 0x5ef37b
// 005ef351  0fb6f2               movzx esi, dl
// 005ef354  8d5001               lea edx, [eax + 1]
// 005ef357  83e63f               and esi, 0x3f
// 005ef35a  3b553c               cmp edx, dword ptr [ebp + 0x3c]
// 005ef35d  7e0f                 jle 0x5ef36e
// 005ef35f  8b4d34               mov ecx, dword ptr [ebp + 0x34]
// 005ef362  03c8                 add ecx, eax
// 005ef364  6a01                 push 1
// 005ef366  51                   push ecx
// 005ef367  8bcd                 mov ecx, ebp
// 005ef369  e8525e0000           call 0x5f51c0
// 005ef36e  8b4544               mov eax, dword ptr [ebp + 0x44]
// 005ef371  8b5540               mov edx, dword ptr [ebp + 0x40]
// 005ef374  8a1410               mov dl, byte ptr [eax + edx]
// 005ef377  40                   inc eax
// 005ef378  894544               mov dword ptr [ebp + 0x44], eax
// 005ef37b  8d4eff               lea ecx, [esi - 1]
// 005ef37e  85c9                 test ecx, ecx
// 005ef380  7c18                 jl 0x5ef39a
// 005ef382  8d047b               lea eax, [ebx + edi*2]
// 005ef385  03c7                 add eax, edi
// 005ef387  03442418             add eax, dword ptr [esp + 0x18]
// 005ef38b  8d7c0f01             lea edi, [edi + ecx + 1]
// 005ef38f  90                   nop 
// 005ef390  8810                 mov byte ptr [eax], dl
// 005ef392  49                   dec ecx
// 005ef393  83c003               add eax, 3
// 005ef396  85c9                 test ecx, ecx
// 005ef398  7df6                 jge 0x5ef390
// 005ef39a  3b7c241c             cmp edi, dword ptr [esp + 0x1c]
// 005ef39e  7c80                 jl 0x5ef320
// 005ef3a0  8b742420             mov esi, dword ptr [esp + 0x20]
// 005ef3a4  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005ef3a8  43                   inc ebx
// 005ef3a9  83fb03               cmp ebx, 3
// 005ef3ac  0f8c50ffffff         jl 0x5ef302
// 005ef3b2  41                   inc ecx
// 005ef3b3  3b4e0c               cmp ecx, dword ptr [esi + 0xc]
// 005ef3b6  894c2410             mov dword ptr [esp + 0x10], ecx
// 005ef3ba  0f8c40ffffff         jl 0x5ef300
// 005ef3c0  8b8c2488040000       mov ecx, dword ptr [esp + 0x488]
// 005ef3c7  5f                   pop edi
// 005ef3c8  5e                   pop esi
// 005ef3c9  5d                   pop ebp
// 005ef3ca  5b                   pop ebx
// 005ef3cb  64890d00000000       mov dword ptr fs:[0], ecx
// 005ef3d2  81c484040000         add esp, 0x484
// 005ef3d8  c20400               ret 4
// 005ef3db  80fb01               cmp bl, 1
// 005ef3de  0f858c010000         jne 0x5ef570
// 005ef3e4  68f07d4200           push 0x427df0
// 005ef3e9  6800010000           push 0x100
// 005ef3ee  6a03                 push 3
// 005ef3f0  8d842494010000       lea eax, [esp + 0x194]
// 005ef3f7  50                   push eax
// 005ef3f8  e8b346e1ff           call 0x403ab0
// 005ef3fd  8b4538               mov eax, dword ptr [ebp + 0x38]
// 005ef400  8b7d44               mov edi, dword ptr [ebp + 0x44]
// 005ef403  037d34               add edi, dword ptr [ebp + 0x34]
// 005ef406  05fffcffff           add eax, 0xfffffcff
// 005ef40b  50                   push eax
// 005ef40c  8bcd                 mov ecx, ebp
// 005ef40e  e8ddceffff           call 0x5ec2f0
// 005ef413  8bcd                 mov ecx, ebp
// 005ef415  e8f6ceffff           call 0x5ec310
// 005ef41a  3c0c                 cmp al, 0xc
// 005ef41c  0f8489000000         je 0x5ef4ab
// 005ef422  687c249c00           push 0x9c247c
// 005ef427  8d4c242c             lea ecx, [esp + 0x2c]
// 005ef42b  ff15f4b69800         call dword ptr [0x98b6f4]
// 005ef431  8d4c2428             lea ecx, [esp + 0x28]
// 005ef435  51                   push ecx
// 005ef436  c784249404000004000000 mov dword ptr [esp + 0x494], 4
// 005ef441  e86acaffff           call 0x5ebeb0
// 005ef446  8bc8                 mov ecx, eax
// 005ef448  e8a3cbffff           call 0x5ebff0
// 005ef44d  83cbff               or ebx, 0xffffffff
// 005ef450  8d4c2428             lea ecx, [esp + 0x28]
// 005ef454  899c2490040000       mov dword ptr [esp + 0x490], ebx
// 005ef45b  ff15e4b69800         call dword ptr [0x98b6e4]
// 005ef461  8d542428             lea edx, [esp + 0x28]
// 005ef465  52                   push edx
// 005ef466  8bcd                 mov ecx, ebp
// 005ef468  e853ceffff           call 0x5ec2c0
// 005ef46d  83781810             cmp dword ptr [eax + 0x18], 0x10
// 005ef471  c784249004000005000000 mov dword ptr [esp + 0x490], 5
// 005ef47c  7205                 jb 0x5ef483
// 005ef47e  8b4004               mov eax, dword ptr [eax + 4]
// 005ef481  eb03                 jmp 0x5ef486
// 005ef483  83c004               add eax, 4
// 005ef486  50                   push eax
// 005ef487  6828249c00           push 0x9c2428
// 005ef48c  e81fcaffff           call 0x5ebeb0
// 005ef491  50                   push eax
// 005ef492  e889cdffff           call 0x5ec220
// 005ef497  83c40c               add esp, 0xc
// 005ef49a  8d4c2428             lea ecx, [esp + 0x28]
// 005ef49e  899c2490040000       mov dword ptr [esp + 0x490], ebx
// 005ef4a5  ff15e4b69800         call dword ptr [0x98b6e4]
// 005ef4ab  8d842488010000       lea eax, [esp + 0x188]
// 005ef4b2  50                   push eax
// 005ef4b3  6800030000           push 0x300
// 005ef4b8  8bcd                 mov ecx, ebp
// 005ef4ba  e801620000           call 0x5f56c0
// 005ef4bf  57                   push edi
// 005ef4c0  8bcd                 mov ecx, ebp
// 005ef4c2  e829ceffff           call 0x5ec2f0
// 005ef4c7  8b560c               mov edx, dword ptr [esi + 0xc]
// 005ef4ca  0faf5608             imul edx, dword ptr [esi + 8]
// 005ef4ce  8b4e04               mov ecx, dword ptr [esi + 4]
// 005ef4d1  33ff                 xor edi, edi
// 005ef4d3  894c2418             mov dword ptr [esp + 0x18], ecx
// 005ef4d7  897c2410             mov dword ptr [esp + 0x10], edi
// 005ef4db  85d2                 test edx, edx
// 005ef4dd  0f8eddfeffff         jle 0x5ef3c0
// 005ef4e3  8b4544               mov eax, dword ptr [ebp + 0x44]
// 005ef4e6  8d4801               lea ecx, [eax + 1]
// 005ef4e9  3b4d3c               cmp ecx, dword ptr [ebp + 0x3c]
// 005ef4ec  7e0f                 jle 0x5ef4fd
// 005ef4ee  8b5534               mov edx, dword ptr [ebp + 0x34]
// 005ef4f1  6a01                 push 1
// 005ef4f3  03d0                 add edx, eax
// 005ef4f5  52                   push edx
// 005ef4f6  8bcd                 mov ecx, ebp
// 005ef4f8  e8c35c0000           call 0x5f51c0
// 005ef4fd  8b4d44               mov ecx, dword ptr [ebp + 0x44]
// 005ef500  8b4540               mov eax, dword ptr [ebp + 0x40]
// 005ef503  8a0401               mov al, byte ptr [ecx + eax]
// 005ef506  41                   inc ecx
// 005ef507  894d44               mov dword ptr [ebp + 0x44], ecx
// 005ef50a  b301                 mov bl, 1
// 005ef50c  3cc0                 cmp al, 0xc0
// 005ef50e  720c                 jb 0x5ef51c
// 005ef510  8ad8                 mov bl, al
// 005ef512  8bcd                 mov ecx, ebp
// 005ef514  80e33f               and bl, 0x3f
// 005ef517  e8f4cdffff           call 0x5ec310
// 005ef51c  0fb6c0               movzx eax, al
// 005ef51f  8d8c0488010000       lea ecx, [esp + eax + 0x188]
// 005ef526  8d0c41               lea ecx, [ecx + eax*2]
// 005ef529  0fb6c3               movzx eax, bl
// 005ef52c  83e801               sub eax, 1
// 005ef52f  782b                 js 0x5ef55c
// 005ef531  8b542418             mov edx, dword ptr [esp + 0x18]
// 005ef535  8d347a               lea esi, [edx + edi*2]
// 005ef538  668b11               mov dx, word ptr [ecx]
// 005ef53b  03f7                 add esi, edi
// 005ef53d  668916               mov word ptr [esi], dx
// 005ef540  8a4902               mov cl, byte ptr [ecx + 2]
// 005ef543  40                   inc eax
// 005ef544  01442410             add dword ptr [esp + 0x10], eax
// 005ef548  884e02               mov byte ptr [esi + 2], cl
// 005ef54b  8d7e03               lea edi, [esi + 3]
// 005ef54e  8d4c40fd             lea ecx, [eax + eax*2 - 3]
// 005ef552  f3a4                 rep movsb byte ptr es:[edi], byte ptr [esi]
// 005ef554  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 005ef558  8b742420             mov esi, dword ptr [esp + 0x20]
// 005ef55c  8b560c               mov edx, dword ptr [esi + 0xc]
// 005ef55f  0faf5608             imul edx, dword ptr [esi + 8]
// 005ef563  3bfa                 cmp edi, edx
// 005ef565  0f8c78ffffff         jl 0x5ef4e3
// 005ef56b  e950feffff           jmp 0x5ef3c0
// 005ef570  680c249c00           push 0x9c240c
// 005ef575  8d4c2464             lea ecx, [esp + 0x64]
// 005ef579  ff15f4b69800         call dword ptr [0x98b6f4]
// 005ef57f  8d84240c010000       lea eax, [esp + 0x10c]
// 005ef586  50                   push eax
// 005ef587  8bcd                 mov ecx, ebp
// 005ef589  c784249404000006000000 mov dword ptr [esp + 0x494], 6
// 005ef594  e827cdffff           call 0x5ec2c0
// 005ef599  50                   push eax
// 005ef59a  8d4c2464             lea ecx, [esp + 0x64]
// 005ef59e  51                   push ecx
// 005ef59f  8d8c2430010000       lea ecx, [esp + 0x130]
// 005ef5a6  c684249804000007     mov byte ptr [esp + 0x498], 7
// 005ef5ae  e88d72edff           call 0x4c6840
// 005ef5b3  689014aa00           push 0xaa1490
// 005ef5b8  8d94242c010000       lea edx, [esp + 0x12c]
// 005ef5bf  52                   push edx
// 005ef5c0  e8b3522000           call 0x7f4878
// 005ef5c5  68d8239c00           push 0x9c23d8
// 005ef5ca  8d4c242c             lea ecx, [esp + 0x2c]
// 005ef5ce  ff15f4b69800         call dword ptr [0x98b6f4]
// 005ef5d4  8d442444             lea eax, [esp + 0x44]
// 005ef5d8  50                   push eax
// 005ef5d9  8bcd                 mov ecx, ebp
// 005ef5db  c784249404000002000000 mov dword ptr [esp + 0x494], 2
// 005ef5e6  e8d5ccffff           call 0x5ec2c0
// 005ef5eb  50                   push eax
// 005ef5ec  8d4c242c             lea ecx, [esp + 0x2c]
// 005ef5f0  51                   push ecx
// 005ef5f1  8d8c2484000000       lea ecx, [esp + 0x84]
// 005ef5f8  c684249804000003     mov byte ptr [esp + 0x498], 3
// 005ef600  e83b72edff           call 0x4c6840
// 005ef605  689014aa00           push 0xaa1490
// 005ef60a  8d942480000000       lea edx, [esp + 0x80]
// 005ef611  52                   push edx
// 005ef612  e861522000           call 0x7f4878
// 005ef617  68c0239c00           push 0x9c23c0
// 005ef61c  8d4c242c             lea ecx, [esp + 0x2c]
// 005ef620  ff15f4b69800         call dword ptr [0x98b6f4]
// 005ef626  8d442444             lea eax, [esp + 0x44]
// 005ef62a  50                   push eax
// 005ef62b  8bcd                 mov ecx, ebp
// 005ef62d  c784249404000000000000 mov dword ptr [esp + 0x494], 0
// 005ef638  e883ccffff           call 0x5ec2c0
// 005ef63d  50                   push eax
// 005ef63e  8d4c242c             lea ecx, [esp + 0x2c]
// 005ef642  51                   push ecx
// 005ef643  8d8c2484000000       lea ecx, [esp + 0x84]
// 005ef64a  c684249804000001     mov byte ptr [esp + 0x498], 1
// 005ef652  e8e971edff           call 0x4c6840
// 005ef657  689014aa00           push 0xaa1490
// 005ef65c  8d942480000000       lea edx, [esp + 0x80]
// 005ef663  52                   push edx
// 005ef664  e80f522000           call 0x7f4878
// library g3d-6.09-rbx2008/G3Dcpp\GImage.cpp (function ?decodePCX@GImage@G3D@@AAEXAAVBinaryInput@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/GImage.cpp
