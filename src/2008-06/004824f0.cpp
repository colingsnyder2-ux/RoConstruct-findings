// roc 2008-06 004824f0  unit: G3D::Win32Window  size: 1034 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004824f0
//
// 004824f0  55                   push ebp
// 004824f1  8bec                 mov ebp, esp
// 004824f3  6aff                 push -1
// 004824f5  68b3537c00           push 0x7c53b3
// 004824fa  64a100000000         mov eax, dword ptr fs:[0]
// 00482500  50                   push eax
// 00482501  64892500000000       mov dword ptr fs:[0], esp
// 00482508  83ec70               sub esp, 0x70
// 0048250b  53                   push ebx
// 0048250c  33db                 xor ebx, ebx
// 0048250e  895de8               mov dword ptr [ebp - 0x18], ebx
// 00482511  56                   push esi
// 00482512  8bf1                 mov esi, ecx
// 00482514  895e08               mov dword ptr [esi + 8], ebx
// 00482517  895e0c               mov dword ptr [esi + 0xc], ebx
// 0048251a  895e04               mov dword ptr [esi + 4], ebx
// 0048251d  57                   push edi
// 0048251e  8965f0               mov dword ptr [ebp - 0x10], esp
// 00482521  8975d0               mov dword ptr [ebp - 0x30], esi
// 00482524  895e10               mov dword ptr [esi + 0x10], ebx
// 00482527  895e14               mov dword ptr [esi + 0x14], ebx
// 0048252a  895e18               mov dword ptr [esi + 0x18], ebx
// 0048252d  d9ee                 fldz 
// 0048252f  c7062cf58100         mov dword ptr [esi], 0x81f52c
// 00482535  d9561c               fst dword ptr [esi + 0x1c]
// 00482538  8d7e28               lea edi, [esi + 0x28]
// 0048253b  d95e20               fstp dword ptr [esi + 0x20]
// 0048253e  8bcf                 mov ecx, edi
// 00482540  895dfc               mov dword ptr [ebp - 4], ebx
// 00482543  e89887fdff           call 0x45ace0
// 00482548  8d8e88000000         lea ecx, [esi + 0x88]
// 0048254e  c645fc01             mov byte ptr [ebp - 4], 1
// 00482552  ff1560248000         call dword ptr [0x802460]
// 00482558  899eb4010000         mov dword ptr [esi + 0x1b4], ebx
// 0048255e  c786b801000014f38100 mov dword ptr [esi + 0x1b8], 0x81f314
// 00482568  6a10                 push 0x10
// 0048256a  6a28                 push 0x28
// 0048256c  c645fc02             mov byte ptr [ebp - 4], 2
// 00482570  c786bc010000f8f08100 mov dword ptr [esi + 0x1bc], 0x81f0f8
// 0048257a  c786c80100000a000000 mov dword ptr [esi + 0x1c8], 0xa
// 00482584  899ec0010000         mov dword ptr [esi + 0x1c0], ebx
// 0048258a  e8f15f0800           call 0x508580
// 0048258f  8b8ec8010000         mov ecx, dword ptr [esi + 0x1c8]
// 00482595  03c9                 add ecx, ecx
// 00482597  03c9                 add ecx, ecx
// 00482599  51                   push ecx
// 0048259a  53                   push ebx
// 0048259b  50                   push eax
// 0048259c  8986c4010000         mov dword ptr [esi + 0x1c4], eax
// 004825a2  e889640800           call 0x508a30
// 004825a7  83c414               add esp, 0x14
// 004825aa  899edc010000         mov dword ptr [esi + 0x1dc], ebx
// 004825b0  899ee0010000         mov dword ptr [esi + 0x1e0], ebx
// 004825b6  899ed8010000         mov dword ptr [esi + 0x1d8], ebx
// 004825bc  c645fc04             mov byte ptr [ebp - 4], 4
// 004825c0  c686ec01000001       mov byte ptr [esi + 0x1ec], 1
// 004825c7  889eaf000000         mov byte ptr [esi + 0xaf], bl
// 004825cd  e86ef9ffff           call 0x481f40
// 004825d2  899ea4000000         mov dword ptr [esi + 0xa4], ebx
// 004825d8  c686ac00000001       mov byte ptr [esi + 0xac], 1
// 004825df  889ead000000         mov byte ptr [esi + 0xad], bl
// 004825e5  889eae000000         mov byte ptr [esi + 0xae], bl
// 004825eb  ff1530228000         call dword ptr [0x802230]
// 004825f1  8986d4010000         mov dword ptr [esi + 0x1d4], eax
// 004825f7  381d85f59600         cmp byte ptr [0x96f585], bl
// 004825fd  7505                 jne 0x482604
// 004825ff  e89cccffff           call 0x47f2a0
// 00482604  8b5508               mov edx, dword ptr [ebp + 8]
// 00482607  52                   push edx
// 00482608  8bcf                 mov ecx, edi
// 0048260a  e811c4ffff           call 0x47ea20
// 0048260f  6816b78000           push 0x80b716
// 00482614  8d4d84               lea ecx, [ebp - 0x7c]
// 00482617  ff1558248000         call dword ptr [0x802458]
// 0048261d  8b07                 mov eax, dword ptr [edi]
// 0048261f  8b4e2c               mov ecx, dword ptr [esi + 0x2c]
// 00482622  8945c4               mov dword ptr [ebp - 0x3c], eax
// 00482625  8b4508               mov eax, dword ptr [ebp + 8]
// 00482628  c645fc05             mov byte ptr [ebp - 4], 5
// 0048262c  895dbc               mov dword ptr [ebp - 0x44], ebx
// 0048262f  895dc0               mov dword ptr [ebp - 0x40], ebx
// 00482632  894dc8               mov dword ptr [ebp - 0x38], ecx
// 00482635  38583d               cmp byte ptr [eax + 0x3d], bl
// 00482638  7415                 je 0x48264f
// 0048263a  c745e00000ca00       mov dword ptr [ebp - 0x20], 0xca0000
// 00482641  38583c               cmp byte ptr [eax + 0x3c], bl
// 00482644  7410                 je 0x482656
// 00482646  c745e00000ce00       mov dword ptr [ebp - 0x20], 0xce0000
// 0048264d  eb07                 jmp 0x482656
// 0048264f  c745e000000080       mov dword ptr [ebp - 0x20], 0x80000000
// 00482656  8b55e0               mov edx, dword ptr [ebp - 0x20]
// 00482659  53                   push ebx
// 0048265a  52                   push edx
// 0048265b  8d45bc               lea eax, [ebp - 0x44]
// 0048265e  50                   push eax
// 0048265f  ff15b82c8000         call dword ptr [0x802cb8]
// 00482665  8b4dbc               mov ecx, dword ptr [ebp - 0x44]
// 00482668  8bd1                 mov edx, ecx
// 0048266a  f7da                 neg edx
// 0048266c  8955d4               mov dword ptr [ebp - 0x2c], edx
// 0048266f  8b55c0               mov edx, dword ptr [ebp - 0x40]
// 00482672  db45d4               fild dword ptr [ebp - 0x2c]
// 00482675  8bc2                 mov eax, edx
// 00482677  f7d8                 neg eax
// 00482679  8945d4               mov dword ptr [ebp - 0x2c], eax
// 0048267c  d95e1c               fstp dword ptr [esi + 0x1c]
// 0048267f  8b45c4               mov eax, dword ptr [ebp - 0x3c]
// 00482682  db45d4               fild dword ptr [ebp - 0x2c]
// 00482685  2bc1                 sub eax, ecx
// 00482687  8945d8               mov dword ptr [ebp - 0x28], eax
// 0048268a  8b45c8               mov eax, dword ptr [ebp - 0x38]
// 0048268d  d95e20               fstp dword ptr [esi + 0x20]
// 00482690  2bc2                 sub eax, edx
// 00482692  8945dc               mov dword ptr [ebp - 0x24], eax
// 00482695  8b4508               mov eax, dword ptr [ebp + 8]
// 00482698  33ff                 xor edi, edi
// 0048269a  895de4               mov dword ptr [ebp - 0x1c], ebx
// 0048269d  385829               cmp byte ptr [eax + 0x29], bl
// 004826a0  7534                 jne 0x4826d6
// 004826a2  385810               cmp byte ptr [eax + 0x10], bl
// 004826a5  7426                 je 0x4826cd
// 004826a7  53                   push ebx
// 004826a8  ff154c2d8000         call dword ptr [0x802d4c]
// 004826ae  2b45d8               sub eax, dword ptr [ebp - 0x28]
// 004826b1  6a01                 push 1
// 004826b3  99                   cdq 
// 004826b4  2bc2                 sub eax, edx
// 004826b6  8bf8                 mov edi, eax
// 004826b8  d1ff                 sar edi, 1
// 004826ba  ff154c2d8000         call dword ptr [0x802d4c]
// 004826c0  2b45dc               sub eax, dword ptr [ebp - 0x24]
// 004826c3  99                   cdq 
// 004826c4  2bc2                 sub eax, edx
// 004826c6  d1f8                 sar eax, 1
// 004826c8  8945e4               mov dword ptr [ebp - 0x1c], eax
// 004826cb  eb09                 jmp 0x4826d6
// 004826cd  8b480c               mov ecx, dword ptr [eax + 0xc]
// 004826d0  8b7808               mov edi, dword ptr [eax + 8]
// 004826d3  894de4               mov dword ptr [ebp - 0x1c], ecx
// 004826d6  837d9c10             cmp dword ptr [ebp - 0x64], 0x10
// 004826da  8b45e4               mov eax, dword ptr [ebp - 0x1c]
// 004826dd  897e30               mov dword ptr [esi + 0x30], edi
// 004826e0  89becc010000         mov dword ptr [esi + 0x1cc], edi
// 004826e6  894634               mov dword ptr [esi + 0x34], eax
// 004826e9  8986d0010000         mov dword ptr [esi + 0x1d0], eax
// 004826ef  7208                 jb 0x4826f9
// 004826f1  8b5588               mov edx, dword ptr [ebp - 0x78]
// 004826f4  8955d4               mov dword ptr [ebp - 0x2c], edx
// 004826f7  eb06                 jmp 0x4826ff
// 004826f9  8d4588               lea eax, [ebp - 0x78]
// 004826fc  8945d4               mov dword ptr [ebp - 0x2c], eax
// 004826ff  53                   push ebx
// 00482700  53                   push ebx
// 00482701  ff15bc218000         call dword ptr [0x8021bc]
// 00482707  8b4ddc               mov ecx, dword ptr [ebp - 0x24]
// 0048270a  8b55d8               mov edx, dword ptr [ebp - 0x28]
// 0048270d  50                   push eax
// 0048270e  8b45e4               mov eax, dword ptr [ebp - 0x1c]
// 00482711  53                   push ebx
// 00482712  53                   push ebx
// 00482713  51                   push ecx
// 00482714  8b4de0               mov ecx, dword ptr [ebp - 0x20]
// 00482717  52                   push edx
// 00482718  8b55d4               mov edx, dword ptr [ebp - 0x2c]
// 0048271b  50                   push eax
// 0048271c  57                   push edi
// 0048271d  51                   push ecx
// 0048271e  52                   push edx
// 0048271f  e83cedffff           call 0x481460
// 00482724  50                   push eax
// 00482725  53                   push ebx
// 00482726  ff15c02d8000         call dword ptr [0x802dc0]
// 0048272c  8bf8                 mov edi, eax
// 0048272e  381dd3f79600         cmp byte ptr [0x96f7d3], bl
// 00482734  0f8588000000         jne 0x4827c2
// 0048273a  3bfb                 cmp edi, ebx
// 0048273c  0f8580000000         jne 0x4827c2
// 00482742  e8f9810800           call 0x50a940
// 00482747  391d8c279400         cmp dword ptr [0x94278c], ebx
// 0048274d  7444                 je 0x482793
// 0048274f  6816b78000           push 0x80b716
// 00482754  8d4da0               lea ecx, [ebp - 0x60]
// 00482757  ff1558248000         call dword ptr [0x802458]
// 0048275d  6a01                 push 1
// 0048275f  68d3f79600           push 0x96f7d3
// 00482764  68ab000000           push 0xab
// 00482769  68c0f28100           push 0x81f2c0
// 0048276e  8d45a0               lea eax, [ebp - 0x60]
// 00482771  50                   push eax
// 00482772  6818f58100           push 0x81f518
// 00482777  c645fc06             mov byte ptr [ebp - 4], 6
// 0048277b  c745e801000000       mov dword ptr [ebp - 0x18], 1
// 00482782  ff158c279400         call dword ptr [0x94278c]
// 00482788  83c418               add esp, 0x18
// 0048278b  c645ef01             mov byte ptr [ebp - 0x11], 1
// 0048278f  84c0                 test al, al
// 00482791  7503                 jne 0x482796
// 00482793  885def               mov byte ptr [ebp - 0x11], bl
// 00482796  f645e801             test byte ptr [ebp - 0x18], 1
// 0048279a  c745fc05000000       mov dword ptr [ebp - 4], 5
// 004827a1  740d                 je 0x4827b0
// 004827a3  8365e8fe             and dword ptr [ebp - 0x18], 0xfffffffe
// 004827a7  8d4da0               lea ecx, [ebp - 0x60]
// 004827aa  ff1568248000         call dword ptr [0x802468]
// 004827b0  385def               cmp byte ptr [ebp - 0x11], bl
// 004827b3  7408                 je 0x4827bd
// 004827b5  6aff                 push -1
// 004827b7  ff15f4278000         call dword ptr [0x8027f4]
// 004827bd  e8ee810800           call 0x50a9b0
// 004827c2  56                   push esi
// 004827c3  6aeb                 push -0x15
// 004827c5  57                   push edi
// 004827c6  89bee8010000         mov dword ptr [esi + 0x1e8], edi
// 004827cc  ff15d82d8000         call dword ptr [0x802dd8]
// 004827d2  8b4d08               mov ecx, dword ptr [ebp + 8]
// 004827d5  38593e               cmp byte ptr [ecx + 0x3e], bl
// 004827d8  7409                 je 0x4827e3
// 004827da  6a05                 push 5
// 004827dc  57                   push edi
// 004827dd  ff15bc2c8000         call dword ptr [0x802cbc]
// 004827e3  385e51               cmp byte ptr [esi + 0x51], bl
// 004827e6  0f84a6000000         je 0x482892
// 004827ec  8b463c               mov eax, dword ptr [esi + 0x3c]
// 004827ef  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 004827f2  8d1440               lea edx, [eax + eax*2]
// 004827f5  035640               add edx, dword ptr [esi + 0x40]
// 004827f8  8b462c               mov eax, dword ptr [esi + 0x2c]
// 004827fb  52                   push edx
// 004827fc  50                   push eax
// 004827fd  8b4660               mov eax, dword ptr [esi + 0x60]
// 00482800  51                   push ecx
// 00482801  e82ac8ffff           call 0x47f030
// 00482806  83c40c               add esp, 0xc
// 00482809  84c0                 test al, al
// 0048280b  0f8581000000         jne 0x482892
// 00482811  381dd2f79600         cmp byte ptr [0x96f7d2], bl
// 00482817  7579                 jne 0x482892
// 00482819  e822810800           call 0x50a940
// 0048281e  391d8c279400         cmp dword ptr [0x94278c], ebx
// 00482824  7441                 je 0x482867
// 00482826  68fcf48100           push 0x81f4fc
// 0048282b  8d4da0               lea ecx, [ebp - 0x60]
// 0048282e  ff1558248000         call dword ptr [0x802458]
// 00482834  834de802             or dword ptr [ebp - 0x18], 2
// 00482838  6a01                 push 1
// 0048283a  68d2f79600           push 0x96f7d2
// 0048283f  68b9000000           push 0xb9
// 00482844  68c0f28100           push 0x81f2c0
// 00482849  8d55a0               lea edx, [ebp - 0x60]
// 0048284c  52                   push edx
// 0048284d  681ce28100           push 0x81e21c
// 00482852  c645fc07             mov byte ptr [ebp - 4], 7
// 00482856  ff158c279400         call dword ptr [0x94278c]
// 0048285c  83c418               add esp, 0x18
// 0048285f  c6450b01             mov byte ptr [ebp + 0xb], 1
// 00482863  84c0                 test al, al
// 00482865  7503                 jne 0x48286a
// 00482867  885d0b               mov byte ptr [ebp + 0xb], bl
// 0048286a  f645e802             test byte ptr [ebp - 0x18], 2
// 0048286e  c745fc05000000       mov dword ptr [ebp - 4], 5
// 00482875  7409                 je 0x482880
// 00482877  8d4da0               lea ecx, [ebp - 0x60]
// 0048287a  ff1568248000         call dword ptr [0x802468]
// 00482880  385d0b               cmp byte ptr [ebp + 0xb], bl
// 00482883  7408                 je 0x48288d
// 00482885  6aff                 push -1
// 00482887  ff15f4278000         call dword ptr [0x8027f4]
// 0048288d  e81e810800           call 0x50a9b0
// 00482892  8b450c               mov eax, dword ptr [ebp + 0xc]
// 00482895  50                   push eax
// 00482896  57                   push edi
// 00482897  8bce                 mov ecx, esi
// 00482899  e832edffff           call 0x4815d0
// 0048289e  8d7e68               lea edi, [esi + 0x68]
// 004828a1  6860978100           push 0x819760
// 004828a6  57                   push edi
// 004828a7  ff15cc238000         call dword ptr [0x8023cc]
// 004828ad  83c408               add esp, 8
// 004828b0  84c0                 test al, al
// 004828b2  0f84b2000000         je 0x48296a
// 004828b8  c745a85c978100       mov dword ptr [ebp - 0x58], 0x81975c
// 004828bf  895db8               mov dword ptr [ebp - 0x48], ebx
// 004828c2  895db4               mov dword ptr [ebp - 0x4c], ebx
// 004828c5  895db0               mov dword ptr [ebp - 0x50], ebx
// 004828c8  895dac               mov dword ptr [ebp - 0x54], ebx
// 004828cb  6a08                 push 8
// 004828cd  57                   push edi
// 004828ce  8d4da8               lea ecx, [ebp - 0x58]
// 004828d1  c645fc09             mov byte ptr [ebp - 4], 9
// 004828d5  e8b6db0800           call 0x510490
// 004828da  8d4da8               lea ecx, [ebp - 0x58]
// 004828dd  51                   push ecx
// 004828de  8bce                 mov ecx, esi
// 004828e0  e8ebe4ffff           call 0x480dd0
// 004828e5  8d4da8               lea ecx, [ebp - 0x58]
// 004828e8  c645fc08             mov byte ptr [ebp - 4], 8
// 004828ec  e83fb90800           call 0x50e230
// 004828f1  c745fc05000000       mov dword ptr [ebp - 4], 5
// 004828f8  eb70                 jmp 0x48296a
// library g3d-6.09-rbx2008/GLG3Dcpp\Win32Window.cpp (function ??0Win32Window@G3D@@AAE@ABVSettings@GWindow@1@_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09-rbx2008 GLG3Dcpp/Win32Window.cpp
