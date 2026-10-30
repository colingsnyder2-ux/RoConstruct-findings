// roc 2010-06 00885fb0  unit: CXTPTabPaintManager  size: 2792 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00885fb0
//
// 00885fb0  6aff                 push -1
// 00885fb2  6892b19b00           push 0x9bb192
// 00885fb7  64a100000000         mov eax, dword ptr fs:[0]
// 00885fbd  50                   push eax
// 00885fbe  83ec60               sub esp, 0x60
// 00885fc1  53                   push ebx
// 00885fc2  55                   push ebp
// 00885fc3  56                   push esi
// 00885fc4  57                   push edi
// 00885fc5  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 00885fca  33c4                 xor eax, esp
// 00885fcc  50                   push eax
// 00885fcd  8d442474             lea eax, [esp + 0x74]
// 00885fd1  64a300000000         mov dword ptr fs:[0], eax
// 00885fd7  8bf1                 mov esi, ecx
// 00885fd9  8b9c2488000000       mov ebx, dword ptr [esp + 0x88]
// 00885fe0  8b7b60               mov edi, dword ptr [ebx + 0x60]
// 00885fe3  8bcf                 mov ecx, edi
// 00885fe5  897c2420             mov dword ptr [esp + 0x20], edi
// 00885fe9  e852c5ffff           call 0x882540
// 00885fee  8944242c             mov dword ptr [esp + 0x2c], eax
// 00885ff2  8b07                 mov eax, dword ptr [edi]
// 00885ff4  8b5048               mov edx, dword ptr [eax + 0x48]
// 00885ff7  8bcf                 mov ecx, edi
// 00885ff9  ffd2                 call edx
// 00885ffb  83f802               cmp eax, 2
// 00885ffe  7411                 je 0x886011
// 00886000  8b07                 mov eax, dword ptr [edi]
// 00886002  8b5048               mov edx, dword ptr [eax + 0x48]
// 00886005  8bcf                 mov ecx, edi
// 00886007  ffd2                 call edx
// 00886009  85c0                 test eax, eax
// 0088600b  7404                 je 0x886011
// 0088600d  33c0                 xor eax, eax
// 0088600f  eb05                 jmp 0x886016
// 00886011  b801000000           mov eax, 1
// 00886016  33c9                 xor ecx, ecx
// 00886018  85c0                 test eax, eax
// 0088601a  0f94c1               sete cl
// 0088601d  837c242c05           cmp dword ptr [esp + 0x2c], 5
// 00886022  8be9                 mov ebp, ecx
// 00886024  896c2418             mov dword ptr [esp + 0x18], ebp
// 00886028  750d                 jne 0x886037
// 0088602a  33d2                 xor edx, edx
// 0088602c  85ed                 test ebp, ebp
// 0088602e  0f94c2               sete dl
// 00886031  8bea                 mov ebp, edx
// 00886033  89542418             mov dword ptr [esp + 0x18], edx
// 00886037  8d442414             lea eax, [esp + 0x14]
// 0088603b  50                   push eax
// 0088603c  8bcb                 mov ecx, ebx
// 0088603e  e85dc1ffff           call 0x8821a0
// 00886043  837e2800             cmp dword ptr [esi + 0x28], 0
// 00886047  c744247c00000000     mov dword ptr [esp + 0x7c], 0
// 0088604f  7422                 je 0x886073
// 00886051  8b4b60               mov ecx, dword ptr [ebx + 0x60]
// 00886054  395904               cmp dword ptr [ecx + 4], ebx
// 00886057  751a                 jne 0x886073
// 00886059  837f1c00             cmp dword ptr [edi + 0x1c], 0
// 0088605d  7414                 je 0x886073
// 0088605f  85ed                 test ebp, ebp
// 00886061  7408                 je 0x88606b
// 00886063  8d8624010000         lea eax, [esi + 0x124]
// 00886069  eb18                 jmp 0x886083
// 0088606b  8d8614010000         lea eax, [esi + 0x114]
// 00886071  eb10                 jmp 0x886083
// 00886073  8d861c010000         lea eax, [esi + 0x11c]
// 00886079  85ed                 test ebp, ebp
// 0088607b  7506                 jne 0x886083
// 0088607d  8d860c010000         lea eax, [esi + 0x10c]
// 00886083  8bac2484000000       mov ebp, dword ptr [esp + 0x84]
// 0088608a  50                   push eax
// 0088608b  55                   push ebp
// 0088608c  8d4c245c             lea ecx, [esp + 0x5c]
// 00886090  e80b96f7ff           call 0x7ff6a0
// 00886095  8b868c000000         mov eax, dword ptr [esi + 0x8c]
// 0088609b  8b9688000000         mov edx, dword ptr [esi + 0x88]
// 008860a1  8d4c243c             lea ecx, [esp + 0x3c]
// 008860a5  51                   push ecx
// 008860a6  6a00                 push 0
// 008860a8  89442448             mov dword ptr [esp + 0x48], eax
// 008860ac  53                   push ebx
// 008860ad  83ec08               sub esp, 8
// 008860b0  8bc4                 mov eax, esp
// 008860b2  89542450             mov dword ptr [esp + 0x50], edx
// 008860b6  c70000000000         mov dword ptr [eax], 0
// 008860bc  c7400400000000       mov dword ptr [eax + 4], 0
// 008860c3  8b17                 mov edx, dword ptr [edi]
// 008860c5  8b4244               mov eax, dword ptr [edx + 0x44]
// 008860c8  8964243c             mov dword ptr [esp + 0x3c], esp
// 008860cc  55                   push ebp
// 008860cd  8bcf                 mov ecx, edi
// 008860cf  c684249400000001     mov byte ptr [esp + 0x94], 1
// 008860d7  ffd0                 call eax
// 008860d9  837c242c03           cmp dword ptr [esp + 0x2c], 3
// 008860de  89442424             mov dword ptr [esp + 0x24], eax
// 008860e2  750c                 jne 0x8860f0
// 008860e4  8b4b60               mov ecx, dword ptr [ebx + 0x60]
// 008860e7  395904               cmp dword ptr [ecx + 4], ebx
// 008860ea  7404                 je 0x8860f0
// 008860ec  33c0                 xor eax, eax
// 008860ee  eb05                 jmp 0x8860f5
// 008860f0  b801000000           mov eax, 1
// 008860f5  89442428             mov dword ptr [esp + 0x28], eax
// 008860f9  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 00886101  85c0                 test eax, eax
// 00886103  7471                 je 0x886176
// 00886105  8b4374               mov eax, dword ptr [ebx + 0x74]
// 00886108  85c0                 test eax, eax
// 0088610a  7e6a                 jle 0x886176
// 0088610c  33ed                 xor ebp, ebp
// 0088610e  3bc5                 cmp eax, ebp
// 00886110  896c241c             mov dword ptr [esp + 0x1c], ebp
// 00886114  7e60                 jle 0x886176
// 00886116  85ed                 test ebp, ebp
// 00886118  0f8c98000000         jl 0x8861b6
// 0088611e  3b6b74               cmp ebp, dword ptr [ebx + 0x74]
// 00886121  0f8d8f000000         jge 0x8861b6
// 00886127  8b5370               mov edx, dword ptr [ebx + 0x70]
// 0088612a  8b0caa               mov ecx, dword ptr [edx + ebp*4]
// 0088612d  8d04aa               lea eax, [edx + ebp*4]
// 00886130  8b4108               mov eax, dword ptr [ecx + 8]
// 00886133  83f802               cmp eax, 2
// 00886136  740d                 je 0x886145
// 00886138  83f801               cmp eax, 1
// 0088613b  7527                 jne 0x886164
// 0088613d  8b4360               mov eax, dword ptr [ebx + 0x60]
// 00886140  395804               cmp dword ptr [eax + 4], ebx
// 00886143  751f                 jne 0x886164
// 00886145  8b11                 mov edx, dword ptr [ecx]
// 00886147  8b5208               mov edx, dword ptr [edx + 8]
// 0088614a  8d442444             lea eax, [esp + 0x44]
// 0088614e  50                   push eax
// 0088614f  ffd2                 call edx
// 00886151  837c241800           cmp dword ptr [esp + 0x18], 0
// 00886156  8b442448             mov eax, dword ptr [esp + 0x48]
// 0088615a  7504                 jne 0x886160
// 0088615c  8b442444             mov eax, dword ptr [esp + 0x44]
// 00886160  0144241c             add dword ptr [esp + 0x1c], eax
// 00886164  45                   inc ebp
// 00886165  3b6b74               cmp ebp, dword ptr [ebx + 0x74]
// 00886168  7cac                 jl 0x886116
// 0088616a  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 0088616f  7e05                 jle 0x886176
// 00886171  8344241c03           add dword ptr [esp + 0x1c], 3
// 00886176  83bc249c00000000     cmp dword ptr [esp + 0x9c], 0
// 0088617e  0f8473060000         je 0x8867f7
// 00886184  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 00886189  0f8e93010000         jle 0x886322
// 0088618f  8b8ee4000000         mov ecx, dword ptr [esi + 0xe4]
// 00886195  8b01                 mov eax, dword ptr [ecx]
// 00886197  8b942484000000       mov edx, dword ptr [esp + 0x84]
// 0088619e  8b4008               mov eax, dword ptr [eax + 8]
// 008861a1  53                   push ebx
// 008861a2  52                   push edx
// 008861a3  ffd0                 call eax
// 008861a5  837c241800           cmp dword ptr [esp + 0x18], 0
// 008861aa  740f                 je 0x8861bb
// 008861ac  83ac249800000003     sub dword ptr [esp + 0x98], 3
// 008861b4  eb0d                 jmp 0x8861c3
// 008861b6  e8911af2ff           call 0x7a7c4c
// 008861bb  83ac249400000003     sub dword ptr [esp + 0x94], 3
// 008861c3  8b4b74               mov ecx, dword ptr [ebx + 0x74]
// 008861c6  83c1ff               add ecx, -1
// 008861c9  898c249c000000       mov dword ptr [esp + 0x9c], ecx
// 008861d0  0f884c010000         js 0x886322
// 008861d6  85c9                 test ecx, ecx
// 008861d8  7cdc                 jl 0x8861b6
// 008861da  3b4b74               cmp ecx, dword ptr [ebx + 0x74]
// 008861dd  7dd7                 jge 0x8861b6
// 008861df  8b4370               mov eax, dword ptr [ebx + 0x70]
// 008861e2  8d148d00000000       lea edx, [ecx*4]
// 008861e9  8b2c10               mov ebp, dword ptr [eax + edx]
// 008861ec  03c2                 add eax, edx
// 008861ee  8b4508               mov eax, dword ptr [ebp + 8]
// 008861f1  83f802               cmp eax, 2
// 008861f4  7415                 je 0x88620b
// 008861f6  83f801               cmp eax, 1
// 008861f9  0f8513010000         jne 0x886312
// 008861ff  8b5360               mov edx, dword ptr [ebx + 0x60]
// 00886202  395a04               cmp dword ptr [edx + 4], ebx
// 00886205  0f8507010000         jne 0x886312
// 0088620b  8b4500               mov eax, dword ptr [ebp]
// 0088620e  8b5008               mov edx, dword ptr [eax + 8]
// 00886211  8d4c242c             lea ecx, [esp + 0x2c]
// 00886215  51                   push ecx
// 00886216  8bcd                 mov ecx, ebp
// 00886218  ffd2                 call edx
// 0088621a  83ec10               sub esp, 0x10
// 0088621d  837c242800           cmp dword ptr [esp + 0x28], 0
// 00886222  7557                 jne 0x88627b
// 00886224  8b8c24a0000000       mov ecx, dword ptr [esp + 0xa0]
// 0088622b  8b8424a8000000       mov eax, dword ptr [esp + 0xa8]
// 00886232  8b7c2440             mov edi, dword ptr [esp + 0x40]
// 00886236  03c1                 add eax, ecx
// 00886238  99                   cdq 
// 00886239  2bc2                 sub eax, edx
// 0088623b  8bc8                 mov ecx, eax
// 0088623d  8bc7                 mov eax, edi
// 0088623f  99                   cdq 
// 00886240  2bc2                 sub eax, edx
// 00886242  d1f9                 sar ecx, 1
// 00886244  d1f8                 sar eax, 1
// 00886246  8d1c08               lea ebx, [eax + ecx]
// 00886249  2bc7                 sub eax, edi
// 0088624b  8bbc24a4000000       mov edi, dword ptr [esp + 0xa4]
// 00886252  03c1                 add eax, ecx
// 00886254  8bcc                 mov ecx, esp
// 00886256  8bd7                 mov edx, edi
// 00886258  2b54243c             sub edx, dword ptr [esp + 0x3c]
// 0088625c  8911                 mov dword ptr [ecx], edx
// 0088625e  894104               mov dword ptr [ecx + 4], eax
// 00886261  897908               mov dword ptr [ecx + 8], edi
// 00886264  89590c               mov dword ptr [ecx + 0xc], ebx
// 00886267  8bcd                 mov ecx, ebp
// 00886269  e8a2c0ffff           call 0x882310
// 0088626e  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00886272  29942494000000       sub dword ptr [esp + 0x94], edx
// 00886279  eb56                 jmp 0x8862d1
// 0088627b  8b8c249c000000       mov ecx, dword ptr [esp + 0x9c]
// 00886282  8b8424a4000000       mov eax, dword ptr [esp + 0xa4]
// 00886289  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 0088628d  8b9c24a8000000       mov ebx, dword ptr [esp + 0xa8]
// 00886294  03c1                 add eax, ecx
// 00886296  99                   cdq 
// 00886297  2bc2                 sub eax, edx
// 00886299  8bc8                 mov ecx, eax
// 0088629b  8bc7                 mov eax, edi
// 0088629d  99                   cdq 
// 0088629e  2bc2                 sub eax, edx
// 008862a0  d1f9                 sar ecx, 1
// 008862a2  d1f8                 sar eax, 1
// 008862a4  8bd1                 mov edx, ecx
// 008862a6  2bd0                 sub edx, eax
// 008862a8  03d7                 add edx, edi
// 008862aa  2bc8                 sub ecx, eax
// 008862ac  8bc4                 mov eax, esp
// 008862ae  8bfb                 mov edi, ebx
// 008862b0  2b7c2440             sub edi, dword ptr [esp + 0x40]
// 008862b4  8908                 mov dword ptr [eax], ecx
// 008862b6  897804               mov dword ptr [eax + 4], edi
// 008862b9  895008               mov dword ptr [eax + 8], edx
// 008862bc  8bcd                 mov ecx, ebp
// 008862be  89580c               mov dword ptr [eax + 0xc], ebx
// 008862c1  e84ac0ffff           call 0x882310
// 008862c6  8b542430             mov edx, dword ptr [esp + 0x30]
// 008862ca  29942498000000       sub dword ptr [esp + 0x98], edx
// 008862d1  8b84249c000000       mov eax, dword ptr [esp + 0x9c]
// 008862d8  8b8c2488000000       mov ecx, dword ptr [esp + 0x88]
// 008862df  3b4174               cmp eax, dword ptr [ecx + 0x74]
// 008862e2  0f8dcefeffff         jge 0x8861b6
// 008862e8  8b4970               mov ecx, dword ptr [ecx + 0x70]
// 008862eb  03c0                 add eax, eax
// 008862ed  03c0                 add eax, eax
// 008862ef  03c8                 add ecx, eax
// 008862f1  8b842484000000       mov eax, dword ptr [esp + 0x84]
// 008862f8  8b09                 mov ecx, dword ptr [ecx]
// 008862fa  50                   push eax
// 008862fb  e890c8ffff           call 0x882b90
// 00886300  8b9c2488000000       mov ebx, dword ptr [esp + 0x88]
// 00886307  8b8c249c000000       mov ecx, dword ptr [esp + 0x9c]
// 0088630e  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00886312  83e901               sub ecx, 1
// 00886315  898c249c000000       mov dword ptr [esp + 0x9c], ecx
// 0088631c  0f89b4feffff         jns 0x8861d6
// 00886322  8b8ee4000000         mov ecx, dword ptr [esi + 0xe4]
// 00886328  8b11                 mov edx, dword ptr [ecx]
// 0088632a  8b842484000000       mov eax, dword ptr [esp + 0x84]
// 00886331  8b5208               mov edx, dword ptr [edx + 8]
// 00886334  53                   push ebx
// 00886335  50                   push eax
// 00886336  ffd2                 call edx
// 00886338  8b84248c000000       mov eax, dword ptr [esp + 0x8c]
// 0088633f  8b8c2490000000       mov ecx, dword ptr [esp + 0x90]
// 00886346  8b942494000000       mov edx, dword ptr [esp + 0x94]
// 0088634d  8944242c             mov dword ptr [esp + 0x2c], eax
// 00886351  8b842498000000       mov eax, dword ptr [esp + 0x98]
// 00886358  89442438             mov dword ptr [esp + 0x38], eax
// 0088635c  8b4320               mov eax, dword ptr [ebx + 0x20]
// 0088635f  2b4324               sub eax, dword ptr [ebx + 0x24]
// 00886362  837c241800           cmp dword ptr [esp + 0x18], 0
// 00886367  894c2430             mov dword ptr [esp + 0x30], ecx
// 0088636b  89542434             mov dword ptr [esp + 0x34], edx
// 0088636f  0f8440020000         je 0x8865b5
// 00886375  85c0                 test eax, eax
// 00886377  7e18                 jle 0x886391
// 00886379  99                   cdq 
// 0088637a  2bc2                 sub eax, edx
// 0088637c  d1f8                 sar eax, 1
// 0088637e  f7d8                 neg eax
// 00886380  50                   push eax
// 00886381  6a00                 push 0
// 00886383  8d8c2494000000       lea ecx, [esp + 0x94]
// 0088638a  51                   push ecx
// 0088638b  ff15dcbb9e00         call dword ptr [0x9ebbdc]
// 00886391  8b5670               mov edx, dword ptr [esi + 0x70]
// 00886394  035660               add edx, dword ptr [esi + 0x60]
// 00886397  8bcf                 mov ecx, edi
// 00886399  01942490000000       add dword ptr [esp + 0x90], edx
// 008863a0  8b07                 mov eax, dword ptr [edi]
// 008863a2  8b5048               mov edx, dword ptr [eax + 0x48]
// 008863a5  ffd2                 call edx
// 008863a7  83f803               cmp eax, 3
// 008863aa  7508                 jne 0x8863b4
// 008863ac  8b4664               mov eax, dword ptr [esi + 0x64]
// 008863af  8b4e6c               mov ecx, dword ptr [esi + 0x6c]
// 008863b2  eb06                 jmp 0x8863ba
// 008863b4  8b466c               mov eax, dword ptr [esi + 0x6c]
// 008863b7  8b4e64               mov ecx, dword ptr [esi + 0x64]
// 008863ba  018c248c000000       add dword ptr [esp + 0x8c], ecx
// 008863c1  29842494000000       sub dword ptr [esp + 0x94], eax
// 008863c8  837c242400           cmp dword ptr [esp + 0x24], 0
// 008863cd  7470                 je 0x88643f
// 008863cf  8b8c2494000000       mov ecx, dword ptr [esp + 0x94]
// 008863d6  8b84248c000000       mov eax, dword ptr [esp + 0x8c]
// 008863dd  8bac2490000000       mov ebp, dword ptr [esp + 0x90]
// 008863e4  03c1                 add eax, ecx
// 008863e6  99                   cdq 
// 008863e7  2bc2                 sub eax, edx
// 008863e9  8bc8                 mov ecx, eax
// 008863eb  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 008863ef  99                   cdq 
// 008863f0  2bc2                 sub eax, edx
// 008863f2  8b942498000000       mov edx, dword ptr [esp + 0x98]
// 008863f9  d1f9                 sar ecx, 1
// 008863fb  d1f8                 sar eax, 1
// 008863fd  2bd5                 sub edx, ebp
// 008863ff  2bc8                 sub ecx, eax
// 00886401  3b542440             cmp edx, dword ptr [esp + 0x40]
// 00886405  8d7dff               lea edi, [ebp - 1]
// 00886408  7e26                 jle 0x886430
// 0088640a  8b442420             mov eax, dword ptr [esp + 0x20]
// 0088640e  8b10                 mov edx, dword ptr [eax]
// 00886410  8b5244               mov edx, dword ptr [edx + 0x44]
// 00886413  8d6c243c             lea ebp, [esp + 0x3c]
// 00886417  55                   push ebp
// 00886418  6a01                 push 1
// 0088641a  53                   push ebx
// 0088641b  57                   push edi
// 0088641c  51                   push ecx
// 0088641d  8b8c2498000000       mov ecx, dword ptr [esp + 0x98]
// 00886424  51                   push ecx
// 00886425  8bc8                 mov ecx, eax
// 00886427  ffd2                 call edx
// 00886429  8bac2490000000       mov ebp, dword ptr [esp + 0x90]
// 00886430  8b442440             mov eax, dword ptr [esp + 0x40]
// 00886434  8d4c2802             lea ecx, [eax + ebp + 2]
// 00886438  898c2490000000       mov dword ptr [esp + 0x90], ecx
// 0088643f  837c242800           cmp dword ptr [esp + 0x28], 0
// 00886444  0f8449030000         je 0x886793
// 0088644a  8b942490000000       mov edx, dword ptr [esp + 0x90]
// 00886451  83c208               add edx, 8
// 00886454  39942498000000       cmp dword ptr [esp + 0x98], edx
// 0088645b  0f8e32030000         jle 0x886793
// 00886461  8d442444             lea eax, [esp + 0x44]
// 00886465  50                   push eax
// 00886466  8d4c2418             lea ecx, [esp + 0x18]
// 0088646a  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 00886470  50                   push eax
// 00886471  8d4c241c             lea ecx, [esp + 0x1c]
// 00886475  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 0088647b  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 00886482  8b5108               mov edx, dword ptr [ecx + 8]
// 00886485  50                   push eax
// 00886486  52                   push edx
// 00886487  ff1594a19e00         call dword ptr [0x9ea194]
// 0088648d  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00886491  8b01                 mov eax, dword ptr [ecx]
// 00886493  8bbc2494000000       mov edi, dword ptr [esp + 0x94]
// 0088649a  8b5048               mov edx, dword ptr [eax + 0x48]
// 0088649d  2bbc248c000000       sub edi, dword ptr [esp + 0x8c]
// 008864a4  ffd2                 call edx
// 008864a6  33c9                 xor ecx, ecx
// 008864a8  83f803               cmp eax, 3
// 008864ab  0f94c1               sete cl
// 008864ae  8bac2498000000       mov ebp, dword ptr [esp + 0x98]
// 008864b5  8bc7                 mov eax, edi
// 008864b7  8b7e78               mov edi, dword ptr [esi + 0x78]
// 008864ba  83c7fc               add edi, -4
// 008864bd  2bc1                 sub eax, ecx
// 008864bf  2b442448             sub eax, dword ptr [esp + 0x48]
// 008864c3  8b8c2494000000       mov ecx, dword ptr [esp + 0x94]
// 008864ca  99                   cdq 
// 008864cb  2bc2                 sub eax, edx
// 008864cd  d1f8                 sar eax, 1
// 008864cf  2bc8                 sub ecx, eax
// 008864d1  8bc1                 mov eax, ecx
// 008864d3  2b842490000000       sub eax, dword ptr [esp + 0x90]
// 008864da  33d2                 xor edx, edx
// 008864dc  03c5                 add eax, ebp
// 008864de  85ff                 test edi, edi
// 008864e0  0f9cc2               setl dl
// 008864e3  898c248c000000       mov dword ptr [esp + 0x8c], ecx
// 008864ea  89842494000000       mov dword ptr [esp + 0x94], eax
// 008864f1  4a                   dec edx
// 008864f2  23d7                 and edx, edi
// 008864f4  8b7e68               mov edi, dword ptr [esi + 0x68]
// 008864f7  03fa                 add edi, edx
// 008864f9  2bef                 sub ebp, edi
// 008864fb  83be9800000000       cmp dword ptr [esi + 0x98], 0
// 00886502  89ac2498000000       mov dword ptr [esp + 0x98], ebp
// 00886509  751a                 jne 0x886525
// 0088650b  8d542414             lea edx, [esp + 0x14]
// 0088650f  52                   push edx
// 00886510  8bce                 mov ecx, esi
// 00886512  e869e5ffff           call 0x884a80
// 00886517  8b842494000000       mov eax, dword ptr [esp + 0x94]
// 0088651e  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 00886525  83be9000000000       cmp dword ptr [esi + 0x90], 0
// 0088652c  743c                 je 0x88656a
// 0088652e  6820090000           push 0x920
// 00886533  83ec10               sub esp, 0x10
// 00886536  8bd4                 mov edx, esp
// 00886538  890a                 mov dword ptr [edx], ecx
// 0088653a  8b8c24a4000000       mov ecx, dword ptr [esp + 0xa4]
// 00886541  894a04               mov dword ptr [edx + 4], ecx
// 00886544  894208               mov dword ptr [edx + 8], eax
// 00886547  8b8424ac000000       mov eax, dword ptr [esp + 0xac]
// 0088654e  8d4c2428             lea ecx, [esp + 0x28]
// 00886552  89420c               mov dword ptr [edx + 0xc], eax
// 00886555  8b942498000000       mov edx, dword ptr [esp + 0x98]
// 0088655c  51                   push ecx
// 0088655d  52                   push edx
// 0088655e  8bce                 mov ecx, esi
// 00886560  e8cbecffff           call 0x885230
// 00886565  e929020000           jmp 0x886793
// 0088656a  8b8694000000         mov eax, dword ptr [esi + 0x94]
// 00886570  8bac2484000000       mov ebp, dword ptr [esp + 0x84]
// 00886577  8b7d00               mov edi, dword ptr [ebp]
// 0088657a  f7d8                 neg eax
// 0088657c  1bc0                 sbb eax, eax
// 0088657e  2500800000           and eax, 0x8000
// 00886583  0d20090000           or eax, 0x920
// 00886588  50                   push eax
// 00886589  8d842490000000       lea eax, [esp + 0x90]
// 00886590  50                   push eax
// 00886591  8d4c241c             lea ecx, [esp + 0x1c]
// 00886595  83c770               add edi, 0x70
// 00886598  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 0088659e  50                   push eax
// 0088659f  8d4c2420             lea ecx, [esp + 0x20]
// 008865a3  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 008865a9  8b17                 mov edx, dword ptr [edi]
// 008865ab  50                   push eax
// 008865ac  8bcd                 mov ecx, ebp
// 008865ae  ffd2                 call edx
// 008865b0  e9de010000           jmp 0x886793
// 008865b5  85c0                 test eax, eax
// 008865b7  7e18                 jle 0x8865d1
// 008865b9  99                   cdq 
// 008865ba  2bc2                 sub eax, edx
// 008865bc  d1f8                 sar eax, 1
// 008865be  6a00                 push 0
// 008865c0  f7d8                 neg eax
// 008865c2  50                   push eax
// 008865c3  8d842494000000       lea eax, [esp + 0x94]
// 008865ca  50                   push eax
// 008865cb  ff15dcbb9e00         call dword ptr [0x9ebbdc]
// 008865d1  8b4e70               mov ecx, dword ptr [esi + 0x70]
// 008865d4  034e60               add ecx, dword ptr [esi + 0x60]
// 008865d7  018c248c000000       add dword ptr [esp + 0x8c], ecx
// 008865de  8b17                 mov edx, dword ptr [edi]
// 008865e0  8b4248               mov eax, dword ptr [edx + 0x48]
// 008865e3  8bcf                 mov ecx, edi
// 008865e5  ffd0                 call eax
// 008865e7  83f802               cmp eax, 2
// 008865ea  7508                 jne 0x8865f4
// 008865ec  8b4664               mov eax, dword ptr [esi + 0x64]
// 008865ef  8b4e6c               mov ecx, dword ptr [esi + 0x6c]
// 008865f2  eb06                 jmp 0x8865fa
// 008865f4  8b466c               mov eax, dword ptr [esi + 0x6c]
// 008865f7  8b4e64               mov ecx, dword ptr [esi + 0x64]
// 008865fa  29842498000000       sub dword ptr [esp + 0x98], eax
// 00886601  8b442424             mov eax, dword ptr [esp + 0x24]
// 00886605  018c2490000000       add dword ptr [esp + 0x90], ecx
// 0088660c  85c0                 test eax, eax
// 0088660e  7473                 je 0x886683
// 00886610  8b8c2490000000       mov ecx, dword ptr [esp + 0x90]
// 00886617  8b942498000000       mov edx, dword ptr [esp + 0x98]
// 0088661e  8bac2494000000       mov ebp, dword ptr [esp + 0x94]
// 00886625  8d0411               lea eax, [ecx + edx]
// 00886628  99                   cdq 
// 00886629  2bc2                 sub eax, edx
// 0088662b  8bc8                 mov ecx, eax
// 0088662d  8b442440             mov eax, dword ptr [esp + 0x40]
// 00886631  99                   cdq 
// 00886632  2bc2                 sub eax, edx
// 00886634  d1f8                 sar eax, 1
// 00886636  d1f9                 sar ecx, 1
// 00886638  2bc8                 sub ecx, eax
// 0088663a  8b84248c000000       mov eax, dword ptr [esp + 0x8c]
// 00886641  2be8                 sub ebp, eax
// 00886643  3b6c243c             cmp ebp, dword ptr [esp + 0x3c]
// 00886647  8d50ff               lea edx, [eax - 1]
// 0088664a  7e22                 jle 0x88666e
// 0088664c  8b07                 mov eax, dword ptr [edi]
// 0088664e  8d6c243c             lea ebp, [esp + 0x3c]
// 00886652  55                   push ebp
// 00886653  6a01                 push 1
// 00886655  53                   push ebx
// 00886656  51                   push ecx
// 00886657  8b8c2494000000       mov ecx, dword ptr [esp + 0x94]
// 0088665e  52                   push edx
// 0088665f  8b5044               mov edx, dword ptr [eax + 0x44]
// 00886662  51                   push ecx
// 00886663  8bcf                 mov ecx, edi
// 00886665  ffd2                 call edx
// 00886667  8b84248c000000       mov eax, dword ptr [esp + 0x8c]
// 0088666e  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00886672  8d4c0802             lea ecx, [eax + ecx + 2]
// 00886676  8b442424             mov eax, dword ptr [esp + 0x24]
// 0088667a  898c248c000000       mov dword ptr [esp + 0x8c], ecx
// 00886681  eb07                 jmp 0x88668a
// 00886683  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 0088668a  837c242800           cmp dword ptr [esp + 0x28], 0
// 0088668f  0f84fe000000         je 0x886793
// 00886695  8b942494000000       mov edx, dword ptr [esp + 0x94]
// 0088669c  3bd1                 cmp edx, ecx
// 0088669e  0f8eef000000         jle 0x886793
// 008866a4  f7d8                 neg eax
// 008866a6  1bc0                 sbb eax, eax
// 008866a8  83e002               and eax, 2
// 008866ab  2b4678               sub eax, dword ptr [esi + 0x78]
// 008866ae  2b4668               sub eax, dword ptr [esi + 0x68]
// 008866b1  03d0                 add edx, eax
// 008866b3  83be9000000000       cmp dword ptr [esi + 0x90], 0
// 008866ba  89942494000000       mov dword ptr [esp + 0x94], edx
// 008866c1  7450                 je 0x886713
// 008866c3  8b8698000000         mov eax, dword ptr [esi + 0x98]
// 008866c9  f7d8                 neg eax
// 008866cb  1bc0                 sbb eax, eax
// 008866cd  2500080000           and eax, 0x800
// 008866d2  0b869c000000         or eax, dword ptr [esi + 0x9c]
// 008866d8  83c820               or eax, 0x20
// 008866db  50                   push eax
// 008866dc  83ec10               sub esp, 0x10
// 008866df  8bc4                 mov eax, esp
// 008866e1  8908                 mov dword ptr [eax], ecx
// 008866e3  8b8c24a4000000       mov ecx, dword ptr [esp + 0xa4]
// 008866ea  894804               mov dword ptr [eax + 4], ecx
// 008866ed  8b8c2498000000       mov ecx, dword ptr [esp + 0x98]
// 008866f4  895008               mov dword ptr [eax + 8], edx
// 008866f7  8b9424ac000000       mov edx, dword ptr [esp + 0xac]
// 008866fe  89500c               mov dword ptr [eax + 0xc], edx
// 00886701  8d442428             lea eax, [esp + 0x28]
// 00886705  50                   push eax
// 00886706  51                   push ecx
// 00886707  8bce                 mov ecx, esi
// 00886709  e822ebffff           call 0x885230
// 0088670e  e980000000           jmp 0x886793
// 00886713  83bea000000000       cmp dword ptr [esi + 0xa0], 0
// 0088671a  7415                 je 0x886731
// 0088671c  8d542414             lea edx, [esp + 0x14]
// 00886720  52                   push edx
// 00886721  8bce                 mov ecx, esi
// 00886723  e858e3ffff           call 0x884a80
// 00886728  83bea000000000       cmp dword ptr [esi + 0xa0], 0
// 0088672f  750d                 jne 0x88673e
// 00886731  83be9800000000       cmp dword ptr [esi + 0x98], 0
// 00886738  7504                 jne 0x88673e
// 0088673a  33c9                 xor ecx, ecx
// 0088673c  eb05                 jmp 0x886743
// 0088673e  b900080000           mov ecx, 0x800
// 00886743  8b8694000000         mov eax, dword ptr [esi + 0x94]
// 00886749  f7d8                 neg eax
// 0088674b  1bc0                 sbb eax, eax
// 0088674d  2500800000           and eax, 0x8000
// 00886752  0b869c000000         or eax, dword ptr [esi + 0x9c]
// 00886758  8d94248c000000       lea edx, [esp + 0x8c]
// 0088675f  0bc1                 or eax, ecx
// 00886761  8b8c2484000000       mov ecx, dword ptr [esp + 0x84]
// 00886768  8b39                 mov edi, dword ptr [ecx]
// 0088676a  83c820               or eax, 0x20
// 0088676d  50                   push eax
// 0088676e  52                   push edx
// 0088676f  8d4c241c             lea ecx, [esp + 0x1c]
// 00886773  83c770               add edi, 0x70
// 00886776  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 0088677c  50                   push eax
// 0088677d  8d4c2420             lea ecx, [esp + 0x20]
// 00886781  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 00886787  8b8c2490000000       mov ecx, dword ptr [esp + 0x90]
// 0088678e  50                   push eax
// 0088678f  8b07                 mov eax, dword ptr [edi]
// 00886791  ffd0                 call eax
// 00886793  8b4b60               mov ecx, dword ptr [ebx + 0x60]
// 00886796  395904               cmp dword ptr [ecx + 4], ebx
// 00886799  753d                 jne 0x8867d8
// 0088679b  8b11                 mov edx, dword ptr [ecx]
// 0088679d  8b4278               mov eax, dword ptr [edx + 0x78]
// 008867a0  ffd0                 call eax
// 008867a2  85c0                 test eax, eax
// 008867a4  7432                 je 0x8867d8
// 008867a6  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 008867aa  8b16                 mov edx, dword ptr [esi]
// 008867ac  8b5274               mov edx, dword ptr [edx + 0x74]
// 008867af  83ec10               sub esp, 0x10
// 008867b2  8bc4                 mov eax, esp
// 008867b4  8908                 mov dword ptr [eax], ecx
// 008867b6  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 008867ba  894804               mov dword ptr [eax + 4], ecx
// 008867bd  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 008867c1  894808               mov dword ptr [eax + 8], ecx
// 008867c4  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 008867c8  89480c               mov dword ptr [eax + 0xc], ecx
// 008867cb  8b842494000000       mov eax, dword ptr [esp + 0x94]
// 008867d2  53                   push ebx
// 008867d3  50                   push eax
// 008867d4  8bce                 mov ecx, esi
// 008867d6  ffd2                 call edx
// 008867d8  8d4c2454             lea ecx, [esp + 0x54]
// 008867dc  c644247c00           mov byte ptr [esp + 0x7c], 0
// 008867e1  e83a8ff7ff           call 0x7ff720
// 008867e6  8d4c2414             lea ecx, [esp + 0x14]
// 008867ea  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 008867f0  33c0                 xor eax, eax
// 008867f2  e98b020000           jmp 0x886a82
// 008867f7  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 008867fb  83f802               cmp eax, 2
// 008867fe  751a                 jne 0x88681a
// 00886800  8b86d4000000         mov eax, dword ptr [esi + 0xd4]
// 00886806  8b8ed0000000         mov ecx, dword ptr [esi + 0xd0]
// 0088680c  8b96d8000000         mov edx, dword ptr [esi + 0xd8]
// 00886812  50                   push eax
// 00886813  51                   push ecx
// 00886814  52                   push edx
// 00886815  e945020000           jmp 0x886a5f
// 0088681a  83f803               cmp eax, 3
// 0088681d  0f85b4010000         jne 0x8869d7
// 00886823  837c242800           cmp dword ptr [esp + 0x28], 0
// 00886828  7526                 jne 0x886850
// 0088682a  837c241800           cmp dword ptr [esp + 0x18], 0
// 0088682f  8b442440             mov eax, dword ptr [esp + 0x40]
// 00886833  7504                 jne 0x886839
// 00886835  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00886839  8b8ed4000000         mov ecx, dword ptr [esi + 0xd4]
// 0088683f  8b96d0000000         mov edx, dword ptr [esi + 0xd0]
// 00886845  51                   push ecx
// 00886846  52                   push edx
// 00886847  83c008               add eax, 8
// 0088684a  50                   push eax
// 0088684b  e90f020000           jmp 0x886a5f
// 00886850  837e2800             cmp dword ptr [esi + 0x28], 0
// 00886854  7414                 je 0x88686a
// 00886856  837f1c00             cmp dword ptr [edi + 0x1c], 0
// 0088685a  740e                 je 0x88686a
// 0088685c  8b442418             mov eax, dword ptr [esp + 0x18]
// 00886860  50                   push eax
// 00886861  8bce                 mov ecx, esi
// 00886863  e888e0ffff           call 0x8848f0
// 00886868  eb13                 jmp 0x88687d
// 0088686a  837c241800           cmp dword ptr [esp + 0x18], 0
// 0088686f  8d861c010000         lea eax, [esi + 0x11c]
// 00886875  7506                 jne 0x88687d
// 00886877  8d860c010000         lea eax, [esi + 0x10c]
// 0088687d  8b8c2484000000       mov ecx, dword ptr [esp + 0x84]
// 00886884  50                   push eax
// 00886885  51                   push ecx
// 00886886  8d4c246c             lea ecx, [esp + 0x6c]
// 0088688a  e8118ef7ff           call 0x7ff6a0
// 0088688f  8b475c               mov eax, dword ptr [edi + 0x5c]
// 00886892  33d2                 xor edx, edx
// 00886894  3bc2                 cmp eax, edx
// 00886896  c644247c02           mov byte ptr [esp + 0x7c], 2
// 0088689b  8994249c000000       mov dword ptr [esp + 0x9c], edx
// 008868a2  89942488000000       mov dword ptr [esp + 0x88], edx
// 008868a9  0f8ed0000000         jle 0x88697f
// 008868af  eb07                 jmp 0x8868b8
// 008868b1  8b942488000000       mov edx, dword ptr [esp + 0x88]
// 008868b8  33c9                 xor ecx, ecx
// 008868ba  3bd1                 cmp edx, ecx
// 008868bc  894c2444             mov dword ptr [esp + 0x44], ecx
// 008868c0  894c2448             mov dword ptr [esp + 0x48], ecx
// 008868c4  894c244c             mov dword ptr [esp + 0x4c], ecx
// 008868c8  894c2450             mov dword ptr [esp + 0x50], ecx
// 008868cc  7c1a                 jl 0x8868e8
// 008868ce  3bd0                 cmp edx, eax
// 008868d0  7d16                 jge 0x8868e8
// 008868d2  8b442420             mov eax, dword ptr [esp + 0x20]
// 008868d6  3b505c               cmp edx, dword ptr [eax + 0x5c]
// 008868d9  0f8dd7f8ffff         jge 0x8861b6
// 008868df  8b4058               mov eax, dword ptr [eax + 0x58]
// 008868e2  8b0c90               mov ecx, dword ptr [eax + edx*4]
// 008868e5  8d0490               lea eax, [eax + edx*4]
// 008868e8  8d542428             lea edx, [esp + 0x28]
// 008868ec  52                   push edx
// 008868ed  e8aeb8ffff           call 0x8821a0
// 008868f2  8be8                 mov ebp, eax
// 008868f4  8b8698000000         mov eax, dword ptr [esi + 0x98]
// 008868fa  8b9c2484000000       mov ebx, dword ptr [esp + 0x84]
// 00886901  8b3b                 mov edi, dword ptr [ebx]
// 00886903  f7d8                 neg eax
// 00886905  1bc0                 sbb eax, eax
// 00886907  2500080000           and eax, 0x800
// 0088690c  0d20050000           or eax, 0x520
// 00886911  50                   push eax
// 00886912  8d442448             lea eax, [esp + 0x48]
// 00886916  50                   push eax
// 00886917  8bcd                 mov ecx, ebp
// 00886919  c684248400000003     mov byte ptr [esp + 0x84], 3
// 00886921  83c770               add edi, 0x70
// 00886924  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 0088692a  50                   push eax
// 0088692b  8bcd                 mov ecx, ebp
// 0088692d  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 00886933  8b17                 mov edx, dword ptr [edi]
// 00886935  50                   push eax
// 00886936  8bcb                 mov ecx, ebx
// 00886938  ffd2                 call edx
// 0088693a  8d4c2428             lea ecx, [esp + 0x28]
// 0088693e  c644247c02           mov byte ptr [esp + 0x7c], 2
// 00886943  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 00886949  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 0088694d  2b442444             sub eax, dword ptr [esp + 0x44]
// 00886951  3984249c000000       cmp dword ptr [esp + 0x9c], eax
// 00886958  7f07                 jg 0x886961
// 0088695a  8984249c000000       mov dword ptr [esp + 0x9c], eax
// 00886961  8b8c2488000000       mov ecx, dword ptr [esp + 0x88]
// 00886968  8b442420             mov eax, dword ptr [esp + 0x20]
// 0088696c  8b405c               mov eax, dword ptr [eax + 0x5c]
// 0088696f  41                   inc ecx
// 00886970  3bc8                 cmp ecx, eax
// 00886972  898c2488000000       mov dword ptr [esp + 0x88], ecx
// 00886979  0f8c32ffffff         jl 0x8868b1
// 0088697f  837c242400           cmp dword ptr [esp + 0x24], 0
// 00886984  7504                 jne 0x88698a
// 00886986  33c0                 xor eax, eax
// 00886988  eb0f                 jmp 0x886999
// 0088698a  837c241800           cmp dword ptr [esp + 0x18], 0
// 0088698f  8b442440             mov eax, dword ptr [esp + 0x40]
// 00886993  7504                 jne 0x886999
// 00886995  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00886999  8b8ed4000000         mov ecx, dword ptr [esi + 0xd4]
// 0088699f  8b96d0000000         mov edx, dword ptr [esi + 0xd0]
// 008869a5  51                   push ecx
// 008869a6  8b4e78               mov ecx, dword ptr [esi + 0x78]
// 008869a9  034e70               add ecx, dword ptr [esi + 0x70]
// 008869ac  52                   push edx
// 008869ad  03c8                 add ecx, eax
// 008869af  038c24a4000000       add ecx, dword ptr [esp + 0xa4]
// 008869b6  034c2424             add ecx, dword ptr [esp + 0x24]
// 008869ba  51                   push ecx
// 008869bb  8bce                 mov ecx, esi
// 008869bd  e88ee0ffff           call 0x884a50
// 008869c2  8d4c2464             lea ecx, [esp + 0x64]
// 008869c6  8bf0                 mov esi, eax
// 008869c8  c644247c01           mov byte ptr [esp + 0x7c], 1
// 008869cd  e84e8df7ff           call 0x7ff720
// 008869d2  e991000000           jmp 0x886a68
// 008869d7  8b8698000000         mov eax, dword ptr [esi + 0x98]
// 008869dd  8bbc2484000000       mov edi, dword ptr [esp + 0x84]
// 008869e4  8b1f                 mov ebx, dword ptr [edi]
// 008869e6  f7d8                 neg eax
// 008869e8  1bc0                 sbb eax, eax
// 008869ea  2500080000           and eax, 0x800
// 008869ef  0d20050000           or eax, 0x520
// 008869f4  50                   push eax
// 008869f5  8d942490000000       lea edx, [esp + 0x90]
// 008869fc  52                   push edx
// 008869fd  8d4c241c             lea ecx, [esp + 0x1c]
// 00886a01  83c370               add ebx, 0x70
// 00886a04  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 00886a0a  50                   push eax
// 00886a0b  8d4c2420             lea ecx, [esp + 0x20]
// 00886a0f  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 00886a15  50                   push eax
// 00886a16  8b03                 mov eax, dword ptr [ebx]
// 00886a18  8bcf                 mov ecx, edi
// 00886a1a  ffd0                 call eax
// 00886a1c  837c242400           cmp dword ptr [esp + 0x24], 0
// 00886a21  7504                 jne 0x886a27
// 00886a23  33c0                 xor eax, eax
// 00886a25  eb0f                 jmp 0x886a36
// 00886a27  837c241800           cmp dword ptr [esp + 0x18], 0
// 00886a2c  8b442440             mov eax, dword ptr [esp + 0x40]
// 00886a30  7504                 jne 0x886a36
// 00886a32  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00886a36  8b8ed4000000         mov ecx, dword ptr [esi + 0xd4]
// 00886a3c  8b96d0000000         mov edx, dword ptr [esi + 0xd0]
// 00886a42  51                   push ecx
// 00886a43  8b4e78               mov ecx, dword ptr [esi + 0x78]
// 00886a46  034e70               add ecx, dword ptr [esi + 0x70]
// 00886a49  52                   push edx
// 00886a4a  2b8c2494000000       sub ecx, dword ptr [esp + 0x94]
// 00886a51  03c8                 add ecx, eax
// 00886a53  038c249c000000       add ecx, dword ptr [esp + 0x9c]
// 00886a5a  034c2424             add ecx, dword ptr [esp + 0x24]
// 00886a5e  51                   push ecx
// 00886a5f  8bce                 mov ecx, esi
// 00886a61  e8eadfffff           call 0x884a50
// 00886a66  8bf0                 mov esi, eax
// 00886a68  8d4c2454             lea ecx, [esp + 0x54]
// 00886a6c  c644247c00           mov byte ptr [esp + 0x7c], 0
// 00886a71  e8aa8cf7ff           call 0x7ff720
// 00886a76  8d4c2414             lea ecx, [esp + 0x14]
// 00886a7a  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 00886a80  8bc6                 mov eax, esi
// 00886a82  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 00886a86  64890d00000000       mov dword ptr fs:[0], ecx
// 00886a8d  59                   pop ecx
// 00886a8e  5f                   pop edi
// 00886a8f  5e                   pop esi
// 00886a90  5d                   pop ebp
// 00886a91  5b                   pop ebx
// 00886a92  83c46c               add esp, 0x6c
// 00886a95  c21c00               ret 0x1c
// copied from an identical function in another client (function ?DrawSingleButtonIconAndText@CXTPTabPaintManager@@UAEHPAVCDC@@PAVCXTPTabManagerItem@@VCRect@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\TabManager\XTPTabPaintManager.cpp