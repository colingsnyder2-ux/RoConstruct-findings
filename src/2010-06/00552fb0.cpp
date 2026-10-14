// roc 2010-06 00552fb0  unit: G3D::Log  size: 1465 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00552fb0
//
// 00552fb0  6aff                 push -1
// 00552fb2  68d0109900           push 0x9910d0
// 00552fb7  64a100000000         mov eax, dword ptr fs:[0]
// 00552fbd  50                   push eax
// 00552fbe  64892500000000       mov dword ptr fs:[0], esp
// 00552fc5  81ec78040000         sub esp, 0x478
// 00552fcb  53                   push ebx
// 00552fcc  55                   push ebp
// 00552fcd  8bac2490040000       mov ebp, dword ptr [esp + 0x490]
// 00552fd4  8b4544               mov eax, dword ptr [ebp + 0x44]
// 00552fd7  56                   push esi
// 00552fd8  8bf1                 mov esi, ecx
// 00552fda  8d4801               lea ecx, [eax + 1]
// 00552fdd  3b4d3c               cmp ecx, dword ptr [ebp + 0x3c]
// 00552fe0  57                   push edi
// 00552fe1  89742420             mov dword ptr [esp + 0x20], esi
// 00552fe5  7e0f                 jle 0x552ff6
// 00552fe7  8b5534               mov edx, dword ptr [ebp + 0x34]
// 00552fea  6a01                 push 1
// 00552fec  03d0                 add edx, eax
// 00552fee  52                   push edx
// 00552fef  8bcd                 mov ecx, ebp
// 00552ff1  e85a580000           call 0x558850
// 00552ff6  8b4544               mov eax, dword ptr [ebp + 0x44]
// 00552ff9  8b4d40               mov ecx, dword ptr [ebp + 0x40]
// 00552ffc  8a1408               mov dl, byte ptr [eax + ecx]
// 00552fff  40                   inc eax
// 00553000  8d4801               lea ecx, [eax + 1]
// 00553003  3b4d3c               cmp ecx, dword ptr [ebp + 0x3c]
// 00553006  88542417             mov byte ptr [esp + 0x17], dl
// 0055300a  894544               mov dword ptr [ebp + 0x44], eax
// 0055300d  7e0f                 jle 0x55301e
// 0055300f  8b5534               mov edx, dword ptr [ebp + 0x34]
// 00553012  6a01                 push 1
// 00553014  03d0                 add edx, eax
// 00553016  52                   push edx
// 00553017  8bcd                 mov ecx, ebp
// 00553019  e832580000           call 0x558850
// 0055301e  ff4544               inc dword ptr [ebp + 0x44]
// 00553021  8b4544               mov eax, dword ptr [ebp + 0x44]
// 00553024  8d4801               lea ecx, [eax + 1]
// 00553027  3b4d3c               cmp ecx, dword ptr [ebp + 0x3c]
// 0055302a  7e0f                 jle 0x55303b
// 0055302c  8b5534               mov edx, dword ptr [ebp + 0x34]
// 0055302f  6a01                 push 1
// 00553031  03d0                 add edx, eax
// 00553033  52                   push edx
// 00553034  8bcd                 mov ecx, ebp
// 00553036  e815580000           call 0x558850
// 0055303b  8b4544               mov eax, dword ptr [ebp + 0x44]
// 0055303e  8b4d40               mov ecx, dword ptr [ebp + 0x40]
// 00553041  8a1408               mov dl, byte ptr [eax + ecx]
// 00553044  40                   inc eax
// 00553045  8d4801               lea ecx, [eax + 1]
// 00553048  3b4d3c               cmp ecx, dword ptr [ebp + 0x3c]
// 0055304b  88542415             mov byte ptr [esp + 0x15], dl
// 0055304f  894544               mov dword ptr [ebp + 0x44], eax
// 00553052  7e0f                 jle 0x553063
// 00553054  8b5534               mov edx, dword ptr [ebp + 0x34]
// 00553057  6a01                 push 1
// 00553059  03d0                 add edx, eax
// 0055305b  52                   push edx
// 0055305c  8bcd                 mov ecx, ebp
// 0055305e  e8ed570000           call 0x558850
// 00553063  8b4544               mov eax, dword ptr [ebp + 0x44]
// 00553066  8b4d40               mov ecx, dword ptr [ebp + 0x40]
// 00553069  8a1408               mov dl, byte ptr [eax + ecx]
// 0055306c  40                   inc eax
// 0055306d  8bcd                 mov ecx, ebp
// 0055306f  88542416             mov byte ptr [esp + 0x16], dl
// 00553073  894544               mov dword ptr [ebp + 0x44], eax
// 00553076  e875d1ffff           call 0x5501f0
// 0055307b  0fb7c0               movzx eax, ax
// 0055307e  8bcd                 mov ecx, ebp
// 00553080  89442424             mov dword ptr [esp + 0x24], eax
// 00553084  e867d1ffff           call 0x5501f0
// 00553089  0fb7c8               movzx ecx, ax
// 0055308c  894c2418             mov dword ptr [esp + 0x18], ecx
// 00553090  8bcd                 mov ecx, ebp
// 00553092  e859d1ffff           call 0x5501f0
// 00553097  0fb7d0               movzx edx, ax
// 0055309a  8bcd                 mov ecx, ebp
// 0055309c  89542410             mov dword ptr [esp + 0x10], edx
// 005530a0  e84bd1ffff           call 0x5501f0
// 005530a5  0fb7c0               movzx eax, ax
// 005530a8  8bcd                 mov ecx, ebp
// 005530aa  8944241c             mov dword ptr [esp + 0x1c], eax
// 005530ae  e83dd1ffff           call 0x5501f0
// 005530b3  8bcd                 mov ecx, ebp
// 005530b5  e836d1ffff           call 0x5501f0
// 005530ba  b90f000000           mov ecx, 0xf
// 005530bf  8d8424de000000       lea eax, [esp + 0xde]
// 005530c6  eb08                 jmp 0x5530d0
// 005530c8  8da42400000000       lea esp, [esp]
// 005530cf  90                   nop 
// 005530d0  c640fe00             mov byte ptr [eax - 2], 0
// 005530d4  c640ff00             mov byte ptr [eax - 1], 0
// 005530d8  c60000               mov byte ptr [eax], 0
// 005530db  83c003               add eax, 3
// 005530de  83e901               sub ecx, 1
// 005530e1  79ed                 jns 0x5530d0
// 005530e3  8d8c24dc000000       lea ecx, [esp + 0xdc]
// 005530ea  51                   push ecx
// 005530eb  6a30                 push 0x30
// 005530ed  8bcd                 mov ecx, ebp
// 005530ef  e8bc5c0000           call 0x558db0
// 005530f4  8b4d34               mov ecx, dword ptr [ebp + 0x34]
// 005530f7  8b5544               mov edx, dword ptr [ebp + 0x44]
// 005530fa  8d441101             lea eax, [ecx + edx + 1]
// 005530fe  2bc1                 sub eax, ecx
// 00553100  894544               mov dword ptr [ebp + 0x44], eax
// 00553103  7805                 js 0x55310a
// 00553105  3b453c               cmp eax, dword ptr [ebp + 0x3c]
// 00553108  7e0c                 jle 0x553116
// 0055310a  03c1                 add eax, ecx
// 0055310c  6a00                 push 0
// 0055310e  50                   push eax
// 0055310f  8bcd                 mov ecx, ebp
// 00553111  e83a570000           call 0x558850
// 00553116  8b4544               mov eax, dword ptr [ebp + 0x44]
// 00553119  8d4801               lea ecx, [eax + 1]
// 0055311c  3b4d3c               cmp ecx, dword ptr [ebp + 0x3c]
// 0055311f  7e0f                 jle 0x553130
// 00553121  8b5534               mov edx, dword ptr [ebp + 0x34]
// 00553124  6a01                 push 1
// 00553126  03d0                 add edx, eax
// 00553128  52                   push edx
// 00553129  8bcd                 mov ecx, ebp
// 0055312b  e820570000           call 0x558850
// 00553130  8b4544               mov eax, dword ptr [ebp + 0x44]
// 00553133  8b4d40               mov ecx, dword ptr [ebp + 0x40]
// 00553136  8a1c08               mov bl, byte ptr [eax + ecx]
// 00553139  40                   inc eax
// 0055313a  8bcd                 mov ecx, ebp
// 0055313c  894544               mov dword ptr [ebp + 0x44], eax
// 0055313f  e8acd0ffff           call 0x5501f0
// 00553144  8bcd                 mov ecx, ebp
// 00553146  e8a5d0ffff           call 0x5501f0
// 0055314b  8b4d34               mov ecx, dword ptr [ebp + 0x34]
// 0055314e  8b5544               mov edx, dword ptr [ebp + 0x44]
// 00553151  0fb7f8               movzx edi, ax
// 00553154  8d44113a             lea eax, [ecx + edx + 0x3a]
// 00553158  2bc1                 sub eax, ecx
// 0055315a  894544               mov dword ptr [ebp + 0x44], eax
// 0055315d  7805                 js 0x553164
// 0055315f  3b453c               cmp eax, dword ptr [ebp + 0x3c]
// 00553162  7e0c                 jle 0x553170
// 00553164  03c1                 add eax, ecx
// 00553166  6a00                 push 0
// 00553168  50                   push eax
// 00553169  8bcd                 mov ecx, ebp
// 0055316b  e8e0560000           call 0x558850
// 00553170  0fb7442424           movzx eax, word ptr [esp + 0x24]
// 00553175  0fb74c2410           movzx ecx, word ptr [esp + 0x10]
// 0055317a  0fb7542418           movzx edx, word ptr [esp + 0x18]
// 0055317f  2bc8                 sub ecx, eax
// 00553181  0fb744241c           movzx eax, word ptr [esp + 0x1c]
// 00553186  2bc2                 sub eax, edx
// 00553188  41                   inc ecx
// 00553189  40                   inc eax
// 0055318a  807c24170a           cmp byte ptr [esp + 0x17], 0xa
// 0055318f  894e08               mov dword ptr [esi + 8], ecx
// 00553192  89460c               mov dword ptr [esi + 0xc], eax
// 00553195  c7461003000000       mov dword ptr [esi + 0x10], 3
// 0055319c  0f8575030000         jne 0x553517
// 005531a2  807c241501           cmp byte ptr [esp + 0x15], 1
// 005531a7  0f856a030000         jne 0x553517
// 005531ad  807c241608           cmp byte ptr [esp + 0x16], 8
// 005531b2  0f850d030000         jne 0x5534c5
// 005531b8  80fb01               cmp bl, 1
// 005531bb  7409                 je 0x5531c6
// 005531bd  80fb03               cmp bl, 3
// 005531c0  0f85ff020000         jne 0x5534c5
// 005531c6  0fafc1               imul eax, ecx
// 005531c9  8d0440               lea eax, [eax + eax*2]
// 005531cc  50                   push eax
// 005531cd  e8ce79fbff           call 0x50aba0
// 005531d2  83c404               add esp, 4
// 005531d5  89442418             mov dword ptr [esp + 0x18], eax
// 005531d9  894604               mov dword ptr [esi + 4], eax
// 005531dc  6683ff01             cmp di, 1
// 005531e0  0f85f5000000         jne 0x5532db
// 005531e6  80fb03               cmp bl, 3
// 005531e9  0f85ec000000         jne 0x5532db
// 005531ef  33c9                 xor ecx, ecx
// 005531f1  394e0c               cmp dword ptr [esi + 0xc], ecx
// 005531f4  894c2410             mov dword ptr [esp + 0x10], ecx
// 005531f8  0f8ec2000000         jle 0x5532c0
// 005531fe  8bff                 mov edi, edi
// 00553200  33db                 xor ebx, ebx
// 00553202  8b4608               mov eax, dword ptr [esi + 8]
// 00553205  8bf8                 mov edi, eax
// 00553207  0faff9               imul edi, ecx
// 0055320a  03c7                 add eax, edi
// 0055320c  3bf8                 cmp edi, eax
// 0055320e  8944241c             mov dword ptr [esp + 0x1c], eax
// 00553212  0f8d90000000         jge 0x5532a8
// 00553218  eb06                 jmp 0x553220
// 0055321a  8d9b00000000         lea ebx, [ebx]
// 00553220  8b4544               mov eax, dword ptr [ebp + 0x44]
// 00553223  8d4801               lea ecx, [eax + 1]
// 00553226  3b4d3c               cmp ecx, dword ptr [ebp + 0x3c]
// 00553229  7e0f                 jle 0x55323a
// 0055322b  8b5534               mov edx, dword ptr [ebp + 0x34]
// 0055322e  6a01                 push 1
// 00553230  03d0                 add edx, eax
// 00553232  52                   push edx
// 00553233  8bcd                 mov ecx, ebp
// 00553235  e816560000           call 0x558850
// 0055323a  8b4544               mov eax, dword ptr [ebp + 0x44]
// 0055323d  8b4d40               mov ecx, dword ptr [ebp + 0x40]
// 00553240  8a1408               mov dl, byte ptr [eax + ecx]
// 00553243  40                   inc eax
// 00553244  894544               mov dword ptr [ebp + 0x44], eax
// 00553247  be01000000           mov esi, 1
// 0055324c  80fac0               cmp dl, 0xc0
// 0055324f  722a                 jb 0x55327b
// 00553251  0fb6f2               movzx esi, dl
// 00553254  8d5001               lea edx, [eax + 1]
// 00553257  83e63f               and esi, 0x3f
// 0055325a  3b553c               cmp edx, dword ptr [ebp + 0x3c]
// 0055325d  7e0f                 jle 0x55326e
// 0055325f  8b4d34               mov ecx, dword ptr [ebp + 0x34]
// 00553262  03c8                 add ecx, eax
// 00553264  6a01                 push 1
// 00553266  51                   push ecx
// 00553267  8bcd                 mov ecx, ebp
// 00553269  e8e2550000           call 0x558850
// 0055326e  8b4544               mov eax, dword ptr [ebp + 0x44]
// 00553271  8b5540               mov edx, dword ptr [ebp + 0x40]
// 00553274  8a1410               mov dl, byte ptr [eax + edx]
// 00553277  40                   inc eax
// 00553278  894544               mov dword ptr [ebp + 0x44], eax
// 0055327b  8d4eff               lea ecx, [esi - 1]
// 0055327e  85c9                 test ecx, ecx
// 00553280  7c18                 jl 0x55329a
// 00553282  8d047b               lea eax, [ebx + edi*2]
// 00553285  03c7                 add eax, edi
// 00553287  03442418             add eax, dword ptr [esp + 0x18]
// 0055328b  8d7c0f01             lea edi, [edi + ecx + 1]
// 0055328f  90                   nop 
// 00553290  8810                 mov byte ptr [eax], dl
// 00553292  49                   dec ecx
// 00553293  83c003               add eax, 3
// 00553296  85c9                 test ecx, ecx
// 00553298  7df6                 jge 0x553290
// 0055329a  3b7c241c             cmp edi, dword ptr [esp + 0x1c]
// 0055329e  7c80                 jl 0x553220
// 005532a0  8b742420             mov esi, dword ptr [esp + 0x20]
// 005532a4  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005532a8  43                   inc ebx
// 005532a9  83fb03               cmp ebx, 3
// 005532ac  0f8c50ffffff         jl 0x553202
// 005532b2  41                   inc ecx
// 005532b3  3b4e0c               cmp ecx, dword ptr [esi + 0xc]
// 005532b6  894c2410             mov dword ptr [esp + 0x10], ecx
// 005532ba  0f8c40ffffff         jl 0x553200
// 005532c0  8b8c2488040000       mov ecx, dword ptr [esp + 0x488]
// 005532c7  5f                   pop edi
// 005532c8  5e                   pop esi
// 005532c9  5d                   pop ebp
// 005532ca  5b                   pop ebx
// 005532cb  64890d00000000       mov dword ptr fs:[0], ecx
// 005532d2  81c484040000         add esp, 0x484
// 005532d8  c20400               ret 4
// 005532db  80fb01               cmp bl, 1
// 005532de  0f858c010000         jne 0x553470
// 005532e4  6810824200           push 0x428210
// 005532e9  6800010000           push 0x100
// 005532ee  6a03                 push 3
// 005532f0  8d842494010000       lea eax, [esp + 0x194]
// 005532f7  50                   push eax
// 005532f8  e81308ebff           call 0x403b10
// 005532fd  8b4538               mov eax, dword ptr [ebp + 0x38]
// 00553300  8b7d44               mov edi, dword ptr [ebp + 0x44]
// 00553303  037d34               add edi, dword ptr [ebp + 0x34]
// 00553306  05fffcffff           add eax, 0xfffffcff
// 0055330b  50                   push eax
// 0055330c  8bcd                 mov ecx, ebp
// 0055330e  e88dceffff           call 0x5501a0
// 00553313  8bcd                 mov ecx, ebp
// 00553315  e8a6ceffff           call 0x5501c0
// 0055331a  3c0c                 cmp al, 0xc
// 0055331c  0f8489000000         je 0x5533ab
// 00553322  681c03a200           push 0xa2031c
// 00553327  8d4c242c             lea ecx, [esp + 0x2c]
// 0055332b  ff1510a49e00         call dword ptr [0x9ea410]
// 00553331  8d4c2428             lea ecx, [esp + 0x28]
// 00553335  51                   push ecx
// 00553336  c784249404000004000000 mov dword ptr [esp + 0x494], 4
// 00553341  e8aac1ffff           call 0x54f4f0
// 00553346  8bc8                 mov ecx, eax
// 00553348  e8e3c2ffff           call 0x54f630
// 0055334d  83cbff               or ebx, 0xffffffff
// 00553350  8d4c2428             lea ecx, [esp + 0x28]
// 00553354  899c2490040000       mov dword ptr [esp + 0x490], ebx
// 0055335b  ff1500a49e00         call dword ptr [0x9ea400]
// 00553361  8d542428             lea edx, [esp + 0x28]
// 00553365  52                   push edx
// 00553366  8bcd                 mov ecx, ebp
// 00553368  e803ceffff           call 0x550170
// 0055336d  83781810             cmp dword ptr [eax + 0x18], 0x10
// 00553371  c784249004000005000000 mov dword ptr [esp + 0x490], 5
// 0055337c  7205                 jb 0x553383
// 0055337e  8b4004               mov eax, dword ptr [eax + 4]
// 00553381  eb03                 jmp 0x553386
// 00553383  83c004               add eax, 4
// 00553386  50                   push eax
// 00553387  68c802a200           push 0xa202c8
// 0055338c  e85fc1ffff           call 0x54f4f0
// 00553391  50                   push eax
// 00553392  e8c9c4ffff           call 0x54f860
// 00553397  83c40c               add esp, 0xc
// 0055339a  8d4c2428             lea ecx, [esp + 0x28]
// 0055339e  899c2490040000       mov dword ptr [esp + 0x490], ebx
// 005533a5  ff1500a49e00         call dword ptr [0x9ea400]
// 005533ab  8d842488010000       lea eax, [esp + 0x188]
// 005533b2  50                   push eax
// 005533b3  6800030000           push 0x300
// 005533b8  8bcd                 mov ecx, ebp
// 005533ba  e8f1590000           call 0x558db0
// 005533bf  57                   push edi
// 005533c0  8bcd                 mov ecx, ebp
// 005533c2  e8d9cdffff           call 0x5501a0
// 005533c7  8b560c               mov edx, dword ptr [esi + 0xc]
// 005533ca  0faf5608             imul edx, dword ptr [esi + 8]
// 005533ce  8b4e04               mov ecx, dword ptr [esi + 4]
// 005533d1  33ff                 xor edi, edi
// 005533d3  894c2418             mov dword ptr [esp + 0x18], ecx
// 005533d7  897c2410             mov dword ptr [esp + 0x10], edi
// 005533db  85d2                 test edx, edx
// 005533dd  0f8eddfeffff         jle 0x5532c0
// 005533e3  8b4544               mov eax, dword ptr [ebp + 0x44]
// 005533e6  8d4801               lea ecx, [eax + 1]
// 005533e9  3b4d3c               cmp ecx, dword ptr [ebp + 0x3c]
// 005533ec  7e0f                 jle 0x5533fd
// 005533ee  8b5534               mov edx, dword ptr [ebp + 0x34]
// 005533f1  6a01                 push 1
// 005533f3  03d0                 add edx, eax
// 005533f5  52                   push edx
// 005533f6  8bcd                 mov ecx, ebp
// 005533f8  e853540000           call 0x558850
// 005533fd  8b4d44               mov ecx, dword ptr [ebp + 0x44]
// 00553400  8b4540               mov eax, dword ptr [ebp + 0x40]
// 00553403  8a0401               mov al, byte ptr [ecx + eax]
// 00553406  41                   inc ecx
// 00553407  894d44               mov dword ptr [ebp + 0x44], ecx
// 0055340a  b301                 mov bl, 1
// 0055340c  3cc0                 cmp al, 0xc0
// 0055340e  720c                 jb 0x55341c
// 00553410  8ad8                 mov bl, al
// 00553412  8bcd                 mov ecx, ebp
// 00553414  80e33f               and bl, 0x3f
// 00553417  e8a4cdffff           call 0x5501c0
// 0055341c  0fb6c0               movzx eax, al
// 0055341f  8d8c0488010000       lea ecx, [esp + eax + 0x188]
// 00553426  8d0c41               lea ecx, [ecx + eax*2]
// 00553429  0fb6c3               movzx eax, bl
// 0055342c  83e801               sub eax, 1
// 0055342f  782b                 js 0x55345c
// 00553431  8b542418             mov edx, dword ptr [esp + 0x18]
// 00553435  8d347a               lea esi, [edx + edi*2]
// 00553438  668b11               mov dx, word ptr [ecx]
// 0055343b  03f7                 add esi, edi
// 0055343d  668916               mov word ptr [esi], dx
// 00553440  8a4902               mov cl, byte ptr [ecx + 2]
// 00553443  40                   inc eax
// 00553444  01442410             add dword ptr [esp + 0x10], eax
// 00553448  884e02               mov byte ptr [esi + 2], cl
// 0055344b  8d7e03               lea edi, [esi + 3]
// 0055344e  8d4c40fd             lea ecx, [eax + eax*2 - 3]
// 00553452  f3a4                 rep movsb byte ptr es:[edi], byte ptr [esi]
// 00553454  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00553458  8b742420             mov esi, dword ptr [esp + 0x20]
// 0055345c  8b560c               mov edx, dword ptr [esi + 0xc]
// 0055345f  0faf5608             imul edx, dword ptr [esi + 8]
// 00553463  3bfa                 cmp edi, edx
// 00553465  0f8c78ffffff         jl 0x5533e3
// 0055346b  e950feffff           jmp 0x5532c0
// 00553470  68ac02a200           push 0xa202ac
// 00553475  8d4c2464             lea ecx, [esp + 0x64]
// 00553479  ff1510a49e00         call dword ptr [0x9ea410]
// 0055347f  8d84240c010000       lea eax, [esp + 0x10c]
// 00553486  50                   push eax
// 00553487  8bcd                 mov ecx, ebp
// 00553489  c784249404000006000000 mov dword ptr [esp + 0x494], 6
// 00553494  e8d7ccffff           call 0x550170
// 00553499  50                   push eax
// 0055349a  8d4c2464             lea ecx, [esp + 0x64]
// 0055349e  51                   push ecx
// 0055349f  8d8c2430010000       lea ecx, [esp + 0x130]
// 005534a6  c684249804000007     mov byte ptr [esp + 0x498], 7
// 005534ae  e84d05f3ff           call 0x483a00
// 005534b3  6894edb000           push 0xb0ed94
// 005534b8  8d94242c010000       lea edx, [esp + 0x12c]
// 005534bf  52                   push edx
// 005534c0  e8ed542500           call 0x7a89b2
// 005534c5  687802a200           push 0xa20278
// 005534ca  8d4c242c             lea ecx, [esp + 0x2c]
// 005534ce  ff1510a49e00         call dword ptr [0x9ea410]
// 005534d4  8d442444             lea eax, [esp + 0x44]
// 005534d8  50                   push eax
// 005534d9  8bcd                 mov ecx, ebp
// 005534db  c784249404000002000000 mov dword ptr [esp + 0x494], 2
// 005534e6  e885ccffff           call 0x550170
// 005534eb  50                   push eax
// 005534ec  8d4c242c             lea ecx, [esp + 0x2c]
// 005534f0  51                   push ecx
// 005534f1  8d8c2484000000       lea ecx, [esp + 0x84]
// 005534f8  c684249804000003     mov byte ptr [esp + 0x498], 3
// 00553500  e8fb04f3ff           call 0x483a00
// 00553505  6894edb000           push 0xb0ed94
// 0055350a  8d942480000000       lea edx, [esp + 0x80]
// 00553511  52                   push edx
// 00553512  e89b542500           call 0x7a89b2
// 00553517  686002a200           push 0xa20260
// 0055351c  8d4c242c             lea ecx, [esp + 0x2c]
// 00553520  ff1510a49e00         call dword ptr [0x9ea410]
// 00553526  8d442444             lea eax, [esp + 0x44]
// 0055352a  50                   push eax
// 0055352b  8bcd                 mov ecx, ebp
// 0055352d  c784249404000000000000 mov dword ptr [esp + 0x494], 0
// 00553538  e833ccffff           call 0x550170
// 0055353d  50                   push eax
// 0055353e  8d4c242c             lea ecx, [esp + 0x2c]
// 00553542  51                   push ecx
// 00553543  8d8c2484000000       lea ecx, [esp + 0x84]
// 0055354a  c684249804000001     mov byte ptr [esp + 0x498], 1
// 00553552  e8a904f3ff           call 0x483a00
// 00553557  6894edb000           push 0xb0ed94
// 0055355c  8d942480000000       lea edx, [esp + 0x80]
// 00553563  52                   push edx
// 00553564  e849542500           call 0x7a89b2
// library g3d-6.09-rbx2008/G3Dcpp\GImage.cpp (function ?decodePCX@GImage@G3D@@AAEXAAVBinaryInput@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/GImage.cpp
