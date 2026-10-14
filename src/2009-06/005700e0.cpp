// roc 2009-06 005700e0  unit: G3D::Log  size: 1465 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005700e0
//
// 005700e0  6aff                 push -1
// 005700e2  6830038600           push 0x860330
// 005700e7  64a100000000         mov eax, dword ptr fs:[0]
// 005700ed  50                   push eax
// 005700ee  64892500000000       mov dword ptr fs:[0], esp
// 005700f5  81ec78040000         sub esp, 0x478
// 005700fb  53                   push ebx
// 005700fc  55                   push ebp
// 005700fd  8bac2490040000       mov ebp, dword ptr [esp + 0x490]
// 00570104  8b4544               mov eax, dword ptr [ebp + 0x44]
// 00570107  56                   push esi
// 00570108  8bf1                 mov esi, ecx
// 0057010a  8d4801               lea ecx, [eax + 1]
// 0057010d  3b4d3c               cmp ecx, dword ptr [ebp + 0x3c]
// 00570110  57                   push edi
// 00570111  89742420             mov dword ptr [esp + 0x20], esi
// 00570115  7e0f                 jle 0x570126
// 00570117  8b5534               mov edx, dword ptr [ebp + 0x34]
// 0057011a  6a01                 push 1
// 0057011c  03d0                 add edx, eax
// 0057011e  52                   push edx
// 0057011f  8bcd                 mov ecx, ebp
// 00570121  e82a460000           call 0x574750
// 00570126  8b4544               mov eax, dword ptr [ebp + 0x44]
// 00570129  8b4d40               mov ecx, dword ptr [ebp + 0x40]
// 0057012c  8a1408               mov dl, byte ptr [eax + ecx]
// 0057012f  40                   inc eax
// 00570130  8d4801               lea ecx, [eax + 1]
// 00570133  3b4d3c               cmp ecx, dword ptr [ebp + 0x3c]
// 00570136  88542417             mov byte ptr [esp + 0x17], dl
// 0057013a  894544               mov dword ptr [ebp + 0x44], eax
// 0057013d  7e0f                 jle 0x57014e
// 0057013f  8b5534               mov edx, dword ptr [ebp + 0x34]
// 00570142  6a01                 push 1
// 00570144  03d0                 add edx, eax
// 00570146  52                   push edx
// 00570147  8bcd                 mov ecx, ebp
// 00570149  e802460000           call 0x574750
// 0057014e  ff4544               inc dword ptr [ebp + 0x44]
// 00570151  8b4544               mov eax, dword ptr [ebp + 0x44]
// 00570154  8d4801               lea ecx, [eax + 1]
// 00570157  3b4d3c               cmp ecx, dword ptr [ebp + 0x3c]
// 0057015a  7e0f                 jle 0x57016b
// 0057015c  8b5534               mov edx, dword ptr [ebp + 0x34]
// 0057015f  6a01                 push 1
// 00570161  03d0                 add edx, eax
// 00570163  52                   push edx
// 00570164  8bcd                 mov ecx, ebp
// 00570166  e8e5450000           call 0x574750
// 0057016b  8b4544               mov eax, dword ptr [ebp + 0x44]
// 0057016e  8b4d40               mov ecx, dword ptr [ebp + 0x40]
// 00570171  8a1408               mov dl, byte ptr [eax + ecx]
// 00570174  40                   inc eax
// 00570175  8d4801               lea ecx, [eax + 1]
// 00570178  3b4d3c               cmp ecx, dword ptr [ebp + 0x3c]
// 0057017b  88542415             mov byte ptr [esp + 0x15], dl
// 0057017f  894544               mov dword ptr [ebp + 0x44], eax
// 00570182  7e0f                 jle 0x570193
// 00570184  8b5534               mov edx, dword ptr [ebp + 0x34]
// 00570187  6a01                 push 1
// 00570189  03d0                 add edx, eax
// 0057018b  52                   push edx
// 0057018c  8bcd                 mov ecx, ebp
// 0057018e  e8bd450000           call 0x574750
// 00570193  8b4544               mov eax, dword ptr [ebp + 0x44]
// 00570196  8b4d40               mov ecx, dword ptr [ebp + 0x40]
// 00570199  8a1408               mov dl, byte ptr [eax + ecx]
// 0057019c  40                   inc eax
// 0057019d  8bcd                 mov ecx, ebp
// 0057019f  88542416             mov byte ptr [esp + 0x16], dl
// 005701a3  894544               mov dword ptr [ebp + 0x44], eax
// 005701a6  e815adf0ff           call 0x47aec0
// 005701ab  0fb7c0               movzx eax, ax
// 005701ae  8bcd                 mov ecx, ebp
// 005701b0  89442424             mov dword ptr [esp + 0x24], eax
// 005701b4  e807adf0ff           call 0x47aec0
// 005701b9  0fb7c8               movzx ecx, ax
// 005701bc  894c2418             mov dword ptr [esp + 0x18], ecx
// 005701c0  8bcd                 mov ecx, ebp
// 005701c2  e8f9acf0ff           call 0x47aec0
// 005701c7  0fb7d0               movzx edx, ax
// 005701ca  8bcd                 mov ecx, ebp
// 005701cc  89542410             mov dword ptr [esp + 0x10], edx
// 005701d0  e8ebacf0ff           call 0x47aec0
// 005701d5  0fb7c0               movzx eax, ax
// 005701d8  8bcd                 mov ecx, ebp
// 005701da  8944241c             mov dword ptr [esp + 0x1c], eax
// 005701de  e8ddacf0ff           call 0x47aec0
// 005701e3  8bcd                 mov ecx, ebp
// 005701e5  e8d6acf0ff           call 0x47aec0
// 005701ea  b90f000000           mov ecx, 0xf
// 005701ef  8d8424de000000       lea eax, [esp + 0xde]
// 005701f6  eb08                 jmp 0x570200
// 005701f8  8da42400000000       lea esp, [esp]
// 005701ff  90                   nop 
// 00570200  c640fe00             mov byte ptr [eax - 2], 0
// 00570204  c640ff00             mov byte ptr [eax - 1], 0
// 00570208  c60000               mov byte ptr [eax], 0
// 0057020b  83c003               add eax, 3
// 0057020e  83e901               sub ecx, 1
// 00570211  79ed                 jns 0x570200
// 00570213  8d8c24dc000000       lea ecx, [esp + 0xdc]
// 0057021a  51                   push ecx
// 0057021b  6a30                 push 0x30
// 0057021d  8bcd                 mov ecx, ebp
// 0057021f  e87c4a0000           call 0x574ca0
// 00570224  8b4d34               mov ecx, dword ptr [ebp + 0x34]
// 00570227  8b5544               mov edx, dword ptr [ebp + 0x44]
// 0057022a  8d441101             lea eax, [ecx + edx + 1]
// 0057022e  2bc1                 sub eax, ecx
// 00570230  894544               mov dword ptr [ebp + 0x44], eax
// 00570233  7805                 js 0x57023a
// 00570235  3b453c               cmp eax, dword ptr [ebp + 0x3c]
// 00570238  7e0c                 jle 0x570246
// 0057023a  03c1                 add eax, ecx
// 0057023c  6a00                 push 0
// 0057023e  50                   push eax
// 0057023f  8bcd                 mov ecx, ebp
// 00570241  e80a450000           call 0x574750
// 00570246  8b4544               mov eax, dword ptr [ebp + 0x44]
// 00570249  8d4801               lea ecx, [eax + 1]
// 0057024c  3b4d3c               cmp ecx, dword ptr [ebp + 0x3c]
// 0057024f  7e0f                 jle 0x570260
// 00570251  8b5534               mov edx, dword ptr [ebp + 0x34]
// 00570254  6a01                 push 1
// 00570256  03d0                 add edx, eax
// 00570258  52                   push edx
// 00570259  8bcd                 mov ecx, ebp
// 0057025b  e8f0440000           call 0x574750
// 00570260  8b4544               mov eax, dword ptr [ebp + 0x44]
// 00570263  8b4d40               mov ecx, dword ptr [ebp + 0x40]
// 00570266  8a1c08               mov bl, byte ptr [eax + ecx]
// 00570269  40                   inc eax
// 0057026a  8bcd                 mov ecx, ebp
// 0057026c  894544               mov dword ptr [ebp + 0x44], eax
// 0057026f  e84cacf0ff           call 0x47aec0
// 00570274  8bcd                 mov ecx, ebp
// 00570276  e845acf0ff           call 0x47aec0
// 0057027b  8b4d34               mov ecx, dword ptr [ebp + 0x34]
// 0057027e  8b5544               mov edx, dword ptr [ebp + 0x44]
// 00570281  0fb7f8               movzx edi, ax
// 00570284  8d44113a             lea eax, [ecx + edx + 0x3a]
// 00570288  2bc1                 sub eax, ecx
// 0057028a  894544               mov dword ptr [ebp + 0x44], eax
// 0057028d  7805                 js 0x570294
// 0057028f  3b453c               cmp eax, dword ptr [ebp + 0x3c]
// 00570292  7e0c                 jle 0x5702a0
// 00570294  03c1                 add eax, ecx
// 00570296  6a00                 push 0
// 00570298  50                   push eax
// 00570299  8bcd                 mov ecx, ebp
// 0057029b  e8b0440000           call 0x574750
// 005702a0  0fb7442424           movzx eax, word ptr [esp + 0x24]
// 005702a5  0fb74c2410           movzx ecx, word ptr [esp + 0x10]
// 005702aa  0fb7542418           movzx edx, word ptr [esp + 0x18]
// 005702af  2bc8                 sub ecx, eax
// 005702b1  0fb744241c           movzx eax, word ptr [esp + 0x1c]
// 005702b6  2bc2                 sub eax, edx
// 005702b8  41                   inc ecx
// 005702b9  40                   inc eax
// 005702ba  807c24170a           cmp byte ptr [esp + 0x17], 0xa
// 005702bf  894e08               mov dword ptr [esi + 8], ecx
// 005702c2  89460c               mov dword ptr [esi + 0xc], eax
// 005702c5  c7461003000000       mov dword ptr [esi + 0x10], 3
// 005702cc  0f8575030000         jne 0x570647
// 005702d2  807c241501           cmp byte ptr [esp + 0x15], 1
// 005702d7  0f856a030000         jne 0x570647
// 005702dd  807c241608           cmp byte ptr [esp + 0x16], 8
// 005702e2  0f850d030000         jne 0x5705f5
// 005702e8  80fb01               cmp bl, 1
// 005702eb  7409                 je 0x5702f6
// 005702ed  80fb03               cmp bl, 3
// 005702f0  0f85ff020000         jne 0x5705f5
// 005702f6  0fafc1               imul eax, ecx
// 005702f9  8d0440               lea eax, [eax + eax*2]
// 005702fc  50                   push eax
// 005702fd  e83eaeffff           call 0x56b140
// 00570302  83c404               add esp, 4
// 00570305  89442418             mov dword ptr [esp + 0x18], eax
// 00570309  894604               mov dword ptr [esi + 4], eax
// 0057030c  6683ff01             cmp di, 1
// 00570310  0f85f5000000         jne 0x57040b
// 00570316  80fb03               cmp bl, 3
// 00570319  0f85ec000000         jne 0x57040b
// 0057031f  33c9                 xor ecx, ecx
// 00570321  394e0c               cmp dword ptr [esi + 0xc], ecx
// 00570324  894c2410             mov dword ptr [esp + 0x10], ecx
// 00570328  0f8ec2000000         jle 0x5703f0
// 0057032e  8bff                 mov edi, edi
// 00570330  33db                 xor ebx, ebx
// 00570332  8b4608               mov eax, dword ptr [esi + 8]
// 00570335  8bf8                 mov edi, eax
// 00570337  0faff9               imul edi, ecx
// 0057033a  03c7                 add eax, edi
// 0057033c  3bf8                 cmp edi, eax
// 0057033e  8944241c             mov dword ptr [esp + 0x1c], eax
// 00570342  0f8d90000000         jge 0x5703d8
// 00570348  eb06                 jmp 0x570350
// 0057034a  8d9b00000000         lea ebx, [ebx]
// 00570350  8b4544               mov eax, dword ptr [ebp + 0x44]
// 00570353  8d4801               lea ecx, [eax + 1]
// 00570356  3b4d3c               cmp ecx, dword ptr [ebp + 0x3c]
// 00570359  7e0f                 jle 0x57036a
// 0057035b  8b5534               mov edx, dword ptr [ebp + 0x34]
// 0057035e  6a01                 push 1
// 00570360  03d0                 add edx, eax
// 00570362  52                   push edx
// 00570363  8bcd                 mov ecx, ebp
// 00570365  e8e6430000           call 0x574750
// 0057036a  8b4544               mov eax, dword ptr [ebp + 0x44]
// 0057036d  8b4d40               mov ecx, dword ptr [ebp + 0x40]
// 00570370  8a1408               mov dl, byte ptr [eax + ecx]
// 00570373  40                   inc eax
// 00570374  894544               mov dword ptr [ebp + 0x44], eax
// 00570377  be01000000           mov esi, 1
// 0057037c  80fac0               cmp dl, 0xc0
// 0057037f  722a                 jb 0x5703ab
// 00570381  0fb6f2               movzx esi, dl
// 00570384  8d5001               lea edx, [eax + 1]
// 00570387  83e63f               and esi, 0x3f
// 0057038a  3b553c               cmp edx, dword ptr [ebp + 0x3c]
// 0057038d  7e0f                 jle 0x57039e
// 0057038f  8b4d34               mov ecx, dword ptr [ebp + 0x34]
// 00570392  03c8                 add ecx, eax
// 00570394  6a01                 push 1
// 00570396  51                   push ecx
// 00570397  8bcd                 mov ecx, ebp
// 00570399  e8b2430000           call 0x574750
// 0057039e  8b4544               mov eax, dword ptr [ebp + 0x44]
// 005703a1  8b5540               mov edx, dword ptr [ebp + 0x40]
// 005703a4  8a1410               mov dl, byte ptr [eax + edx]
// 005703a7  40                   inc eax
// 005703a8  894544               mov dword ptr [ebp + 0x44], eax
// 005703ab  8d4eff               lea ecx, [esi - 1]
// 005703ae  85c9                 test ecx, ecx
// 005703b0  7c18                 jl 0x5703ca
// 005703b2  8d047b               lea eax, [ebx + edi*2]
// 005703b5  03c7                 add eax, edi
// 005703b7  03442418             add eax, dword ptr [esp + 0x18]
// 005703bb  8d7c0f01             lea edi, [edi + ecx + 1]
// 005703bf  90                   nop 
// 005703c0  8810                 mov byte ptr [eax], dl
// 005703c2  49                   dec ecx
// 005703c3  83c003               add eax, 3
// 005703c6  85c9                 test ecx, ecx
// 005703c8  7df6                 jge 0x5703c0
// 005703ca  3b7c241c             cmp edi, dword ptr [esp + 0x1c]
// 005703ce  7c80                 jl 0x570350
// 005703d0  8b742420             mov esi, dword ptr [esp + 0x20]
// 005703d4  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005703d8  43                   inc ebx
// 005703d9  83fb03               cmp ebx, 3
// 005703dc  0f8c50ffffff         jl 0x570332
// 005703e2  41                   inc ecx
// 005703e3  3b4e0c               cmp ecx, dword ptr [esi + 0xc]
// 005703e6  894c2410             mov dword ptr [esp + 0x10], ecx
// 005703ea  0f8c40ffffff         jl 0x570330
// 005703f0  8b8c2488040000       mov ecx, dword ptr [esp + 0x488]
// 005703f7  5f                   pop edi
// 005703f8  5e                   pop esi
// 005703f9  5d                   pop ebp
// 005703fa  5b                   pop ebx
// 005703fb  64890d00000000       mov dword ptr fs:[0], ecx
// 00570402  81c484040000         add esp, 0x484
// 00570408  c20400               ret 4
// 0057040b  80fb01               cmp bl, 1
// 0057040e  0f858c010000         jne 0x5705a0
// 00570414  6880714200           push 0x427180
// 00570419  6800010000           push 0x100
// 0057041e  6a03                 push 3
// 00570420  8d842494010000       lea eax, [esp + 0x194]
// 00570427  50                   push eax
// 00570428  e87338e9ff           call 0x403ca0
// 0057042d  8b4538               mov eax, dword ptr [ebp + 0x38]
// 00570430  8b7d44               mov edi, dword ptr [ebp + 0x44]
// 00570433  037d34               add edi, dword ptr [ebp + 0x34]
// 00570436  05fffcffff           add eax, 0xfffffcff
// 0057043b  50                   push eax
// 0057043c  8bcd                 mov ecx, ebp
// 0057043e  e89dcdffff           call 0x56d1e0
// 00570443  8bcd                 mov ecx, ebp
// 00570445  e8b6cdffff           call 0x56d200
// 0057044a  3c0c                 cmp al, 0xc
// 0057044c  0f8489000000         je 0x5704db
// 00570452  68f4b58c00           push 0x8cb5f4
// 00570457  8d4c242c             lea ecx, [esp + 0x2c]
// 0057045b  ff15b4e48900         call dword ptr [0x89e4b4]
// 00570461  8d4c2428             lea ecx, [esp + 0x28]
// 00570465  51                   push ecx
// 00570466  c784249404000004000000 mov dword ptr [esp + 0x494], 4
// 00570471  e82ac9ffff           call 0x56cda0
// 00570476  8bc8                 mov ecx, eax
// 00570478  e863caffff           call 0x56cee0
// 0057047d  83cbff               or ebx, 0xffffffff
// 00570480  8d4c2428             lea ecx, [esp + 0x28]
// 00570484  899c2490040000       mov dword ptr [esp + 0x490], ebx
// 0057048b  ff15c4e48900         call dword ptr [0x89e4c4]
// 00570491  8d542428             lea edx, [esp + 0x28]
// 00570495  52                   push edx
// 00570496  8bcd                 mov ecx, ebp
// 00570498  e813cdffff           call 0x56d1b0
// 0057049d  83781810             cmp dword ptr [eax + 0x18], 0x10
// 005704a1  c784249004000005000000 mov dword ptr [esp + 0x490], 5
// 005704ac  7205                 jb 0x5704b3
// 005704ae  8b4004               mov eax, dword ptr [eax + 4]
// 005704b1  eb03                 jmp 0x5704b6
// 005704b3  83c004               add eax, 4
// 005704b6  50                   push eax
// 005704b7  68a0b58c00           push 0x8cb5a0
// 005704bc  e8dfc8ffff           call 0x56cda0
// 005704c1  50                   push eax
// 005704c2  e849ccffff           call 0x56d110
// 005704c7  83c40c               add esp, 0xc
// 005704ca  8d4c2428             lea ecx, [esp + 0x28]
// 005704ce  899c2490040000       mov dword ptr [esp + 0x490], ebx
// 005704d5  ff15c4e48900         call dword ptr [0x89e4c4]
// 005704db  8d842488010000       lea eax, [esp + 0x188]
// 005704e2  50                   push eax
// 005704e3  6800030000           push 0x300
// 005704e8  8bcd                 mov ecx, ebp
// 005704ea  e8b1470000           call 0x574ca0
// 005704ef  57                   push edi
// 005704f0  8bcd                 mov ecx, ebp
// 005704f2  e8e9ccffff           call 0x56d1e0
// 005704f7  8b560c               mov edx, dword ptr [esi + 0xc]
// 005704fa  0faf5608             imul edx, dword ptr [esi + 8]
// 005704fe  8b4e04               mov ecx, dword ptr [esi + 4]
// 00570501  33ff                 xor edi, edi
// 00570503  894c2418             mov dword ptr [esp + 0x18], ecx
// 00570507  897c2410             mov dword ptr [esp + 0x10], edi
// 0057050b  85d2                 test edx, edx
// 0057050d  0f8eddfeffff         jle 0x5703f0
// 00570513  8b4544               mov eax, dword ptr [ebp + 0x44]
// 00570516  8d4801               lea ecx, [eax + 1]
// 00570519  3b4d3c               cmp ecx, dword ptr [ebp + 0x3c]
// 0057051c  7e0f                 jle 0x57052d
// 0057051e  8b5534               mov edx, dword ptr [ebp + 0x34]
// 00570521  6a01                 push 1
// 00570523  03d0                 add edx, eax
// 00570525  52                   push edx
// 00570526  8bcd                 mov ecx, ebp
// 00570528  e823420000           call 0x574750
// 0057052d  8b4d44               mov ecx, dword ptr [ebp + 0x44]
// 00570530  8b4540               mov eax, dword ptr [ebp + 0x40]
// 00570533  8a0401               mov al, byte ptr [ecx + eax]
// 00570536  41                   inc ecx
// 00570537  894d44               mov dword ptr [ebp + 0x44], ecx
// 0057053a  b301                 mov bl, 1
// 0057053c  3cc0                 cmp al, 0xc0
// 0057053e  720c                 jb 0x57054c
// 00570540  8ad8                 mov bl, al
// 00570542  8bcd                 mov ecx, ebp
// 00570544  80e33f               and bl, 0x3f
// 00570547  e8b4ccffff           call 0x56d200
// 0057054c  0fb6c0               movzx eax, al
// 0057054f  8d8c0488010000       lea ecx, [esp + eax + 0x188]
// 00570556  8d0c41               lea ecx, [ecx + eax*2]
// 00570559  0fb6c3               movzx eax, bl
// 0057055c  83e801               sub eax, 1
// 0057055f  782b                 js 0x57058c
// 00570561  8b542418             mov edx, dword ptr [esp + 0x18]
// 00570565  8d347a               lea esi, [edx + edi*2]
// 00570568  668b11               mov dx, word ptr [ecx]
// 0057056b  03f7                 add esi, edi
// 0057056d  668916               mov word ptr [esi], dx
// 00570570  8a4902               mov cl, byte ptr [ecx + 2]
// 00570573  40                   inc eax
// 00570574  01442410             add dword ptr [esp + 0x10], eax
// 00570578  884e02               mov byte ptr [esi + 2], cl
// 0057057b  8d7e03               lea edi, [esi + 3]
// 0057057e  8d4c40fd             lea ecx, [eax + eax*2 - 3]
// 00570582  f3a4                 rep movsb byte ptr es:[edi], byte ptr [esi]
// 00570584  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00570588  8b742420             mov esi, dword ptr [esp + 0x20]
// 0057058c  8b560c               mov edx, dword ptr [esi + 0xc]
// 0057058f  0faf5608             imul edx, dword ptr [esi + 8]
// 00570593  3bfa                 cmp edi, edx
// 00570595  0f8c78ffffff         jl 0x570513
// 0057059b  e950feffff           jmp 0x5703f0
// 005705a0  6884b58c00           push 0x8cb584
// 005705a5  8d4c2464             lea ecx, [esp + 0x64]
// 005705a9  ff15b4e48900         call dword ptr [0x89e4b4]
// 005705af  8d84240c010000       lea eax, [esp + 0x10c]
// 005705b6  50                   push eax
// 005705b7  8bcd                 mov ecx, ebp
// 005705b9  c784249404000006000000 mov dword ptr [esp + 0x494], 6
// 005705c4  e8e7cbffff           call 0x56d1b0
// 005705c9  50                   push eax
// 005705ca  8d4c2464             lea ecx, [esp + 0x64]
// 005705ce  51                   push ecx
// 005705cf  8d8c2430010000       lea ecx, [esp + 0x130]
// 005705d6  c684249804000007     mov byte ptr [esp + 0x498], 7
// 005705de  e8bd99f2ff           call 0x499fa0
// 005705e3  68308a9800           push 0x988a30
// 005705e8  8d94242c010000       lea edx, [esp + 0x12c]
// 005705ef  52                   push edx
// 005705f0  e855941a00           call 0x719a4a
// 005705f5  6850b58c00           push 0x8cb550
// 005705fa  8d4c242c             lea ecx, [esp + 0x2c]
// 005705fe  ff15b4e48900         call dword ptr [0x89e4b4]
// 00570604  8d442444             lea eax, [esp + 0x44]
// 00570608  50                   push eax
// 00570609  8bcd                 mov ecx, ebp
// 0057060b  c784249404000002000000 mov dword ptr [esp + 0x494], 2
// 00570616  e895cbffff           call 0x56d1b0
// 0057061b  50                   push eax
// 0057061c  8d4c242c             lea ecx, [esp + 0x2c]
// 00570620  51                   push ecx
// 00570621  8d8c2484000000       lea ecx, [esp + 0x84]
// 00570628  c684249804000003     mov byte ptr [esp + 0x498], 3
// 00570630  e86b99f2ff           call 0x499fa0
// 00570635  68308a9800           push 0x988a30
// 0057063a  8d942480000000       lea edx, [esp + 0x80]
// 00570641  52                   push edx
// 00570642  e803941a00           call 0x719a4a
// 00570647  6838b58c00           push 0x8cb538
// 0057064c  8d4c242c             lea ecx, [esp + 0x2c]
// 00570650  ff15b4e48900         call dword ptr [0x89e4b4]
// 00570656  8d442444             lea eax, [esp + 0x44]
// 0057065a  50                   push eax
// 0057065b  8bcd                 mov ecx, ebp
// 0057065d  c784249404000000000000 mov dword ptr [esp + 0x494], 0
// 00570668  e843cbffff           call 0x56d1b0
// 0057066d  50                   push eax
// 0057066e  8d4c242c             lea ecx, [esp + 0x2c]
// 00570672  51                   push ecx
// 00570673  8d8c2484000000       lea ecx, [esp + 0x84]
// 0057067a  c684249804000001     mov byte ptr [esp + 0x498], 1
// 00570682  e81999f2ff           call 0x499fa0
// 00570687  68308a9800           push 0x988a30
// 0057068c  8d942480000000       lea edx, [esp + 0x80]
// 00570693  52                   push edx
// 00570694  e8b1931a00           call 0x719a4a
// library g3d-6.09-rbx2008/G3Dcpp\GImage.cpp (function ?decodePCX@GImage@G3D@@AAEXAAVBinaryInput@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/GImage.cpp
