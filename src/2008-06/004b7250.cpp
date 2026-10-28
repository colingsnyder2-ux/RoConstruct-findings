// from server: 99% by coldek
// from server: 87% by coldek
// roc 2008-06 004b7250  unit: RBX::Network::Replicator::ChangePropertyItem  size: 2006 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004b7250
//
// 004b7250  6aff                 push -1
// 004b7252  68858b7c00           push 0x7c8b85
// 004b7257  64a100000000         mov eax, dword ptr fs:[0]
// 004b725d  50                   push eax
// 004b725e  64892500000000       mov dword ptr fs:[0], esp
// 004b7265  81eca0000000         sub esp, 0xa0
// 004b726b  53                   push ebx
// 004b726c  55                   push ebp
// 004b726d  56                   push esi
// 004b726e  57                   push edi
// 004b726f  8bbc24c0000000       mov edi, dword ptr [esp + 0xc0]
// 004b7276  8b4708               mov eax, dword ptr [edi + 8]
// 004b7279  8bf1                 mov esi, ecx
// 004b727b  8d4c2420             lea ecx, [esp + 0x20]
// 004b727f  51                   push ecx
// 004b7280  57                   push edi
// 004b7281  8bce                 mov ecx, esi
// 004b7283  89442454             mov dword ptr [esp + 0x54], eax
// 004b7287  e824fefeff           call 0x4a70b0
// 004b728c  8b96ec2b0000         mov edx, dword ptr [esi + 0x2bec]
// 004b7292  6a01                 push 1
// 004b7294  52                   push edx
// 004b7295  8d442450             lea eax, [esp + 0x50]
// 004b7299  33db                 xor ebx, ebx
// 004b729b  50                   push eax
// 004b729c  8bcf                 mov ecx, edi
// 004b729e  895c2454             mov dword ptr [esp + 0x54], ebx
// 004b72a2  e869dffeff           call 0x4a5210
// 004b72a7  8b8ee42b0000         mov ecx, dword ptr [esi + 0x2be4]
// 004b72ad  2b8ee02b0000         sub ecx, dword ptr [esi + 0x2be0]
// 004b72b3  8b442448             mov eax, dword ptr [esp + 0x48]
// 004b72b7  c1f902               sar ecx, 2
// 004b72ba  8bf8                 mov edi, eax
// 004b72bc  3bc1                 cmp eax, ecx
// 004b72be  7206                 jb 0x4b72c6
// 004b72c0  ff1590288000         call dword ptr [0x802890]
// 004b72c6  8b96e02b0000         mov edx, dword ptr [esi + 0x2be0]
// 004b72cc  8b2cba               mov ebp, dword ptr [edx + edi*4]
// 004b72cf  896c241c             mov dword ptr [esp + 0x1c], ebp
// 004b72d3  e8b875feff           call 0x49e890
// 004b72d8  389831010000         cmp byte ptr [eax + 0x131], bl
// 004b72de  0f84cc000000         je 0x4b73b0
// 004b72e4  6a04                 push 4
// 004b72e6  8d442470             lea eax, [esp + 0x70]
// 004b72ea  50                   push eax
// 004b72eb  8d4c2428             lea ecx, [esp + 0x28]
// 004b72ef  e84c110f00           call 0x5a8440
// 004b72f4  8bf8                 mov edi, eax
// 004b72f6  8d4c2410             lea ecx, [esp + 0x10]
// 004b72fa  51                   push ecx
// 004b72fb  899c24bc000000       mov dword ptr [esp + 0xbc], ebx
// 004b7302  e819230b00           call 0x569620
// 004b7307  83c404               add esp, 4
// 004b730a  ba10000000           mov edx, 0x10
// 004b730f  c68424b800000001     mov byte ptr [esp + 0xb8], 1
// 004b7317  395718               cmp dword ptr [edi + 0x18], edx
// 004b731a  7205                 jb 0x4b7321
// 004b731c  8b5f04               mov ebx, dword ptr [edi + 4]
// 004b731f  eb03                 jmp 0x4b7324
// 004b7321  8d5f04               lea ebx, [edi + 4]
// 004b7324  8b4d04               mov ecx, dword ptr [ebp + 4]
// 004b7327  83c104               add ecx, 4
// 004b732a  395118               cmp dword ptr [ecx + 0x18], edx
// 004b732d  7205                 jb 0x4b7334
// 004b732f  8b6904               mov ebp, dword ptr [ecx + 4]
// 004b7332  eb03                 jmp 0x4b7337
// 004b7334  8d6904               lea ebp, [ecx + 4]
// 004b7337  8b38                 mov edi, dword ptr [eax]
// 004b7339  6a01                 push 1
// 004b733b  8d8e542d0000         lea ecx, [esi + 0x2d54]
// 004b7341  e86a25ffff           call 0x4a98b0
// 004b7346  50                   push eax
// 004b7347  53                   push ebx
// 004b7348  55                   push ebp
// 004b7349  6810518200           push 0x825110
// 004b734e  6a01                 push 1
// 004b7350  57                   push edi
// 004b7351  e84a200b00           call 0x5693a0
// 004b7356  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 004b735a  83c418               add esp, 0x18
// 004b735d  c68424b800000000     mov byte ptr [esp + 0xb8], 0
// 004b7365  85c0                 test eax, eax
// 004b7367  742c                 je 0x4b7395
// 004b7369  8bf8                 mov edi, eax
// 004b736b  83c004               add eax, 4
// 004b736e  83caff               or edx, 0xffffffff
// 004b7371  f00fc110             lock xadd dword ptr [eax], edx
// 004b7375  751e                 jne 0x4b7395
// 004b7377  8b07                 mov eax, dword ptr [edi]
// 004b7379  8b5004               mov edx, dword ptr [eax + 4]
// 004b737c  8bcf                 mov ecx, edi
// 004b737e  ffd2                 call edx
// 004b7380  8d4708               lea eax, [edi + 8]
// 004b7383  83c9ff               or ecx, 0xffffffff
// 004b7386  f00fc108             lock xadd dword ptr [eax], ecx
// 004b738a  7509                 jne 0x4b7395
// 004b738c  8b17                 mov edx, dword ptr [edi]
// 004b738e  8b4208               mov eax, dword ptr [edx + 8]
// 004b7391  8bcf                 mov ecx, edi
// 004b7393  ffd0                 call eax
// 004b7395  8d4c246c             lea ecx, [esp + 0x6c]
// 004b7399  c78424b8000000ffffffff mov dword ptr [esp + 0xb8], 0xffffffff
// 004b73a4  ff1568248000         call dword ptr [0x802468]
// 004b73aa  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 004b73ae  33db                 xor ebx, ebx
// 004b73b0  895c2410             mov dword ptr [esp + 0x10], ebx
// 004b73b4  895c2414             mov dword ptr [esp + 0x14], ebx
// 004b73b8  8d4c2428             lea ecx, [esp + 0x28]
// 004b73bc  51                   push ecx
// 004b73bd  8d542424             lea edx, [esp + 0x24]
// 004b73c1  52                   push edx
// 004b73c2  c78424c000000002000000 mov dword ptr [esp + 0xc0], 2
// 004b73cd  e8ae46feff           call 0x49ba80
// 004b73d2  83c408               add esp, 8
// 004b73d5  84c0                 test al, al
// 004b73d7  0f84de010000         je 0x4b75bb
// 004b73dd  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 004b73e1  3bfb                 cmp edi, ebx
// 004b73e3  7520                 jne 0x4b7405
// 004b73e5  8b86602d0000         mov eax, dword ptr [esi + 0x2d60]
// 004b73eb  8b8e5c2d0000         mov ecx, dword ptr [esi + 0x2d5c]
// 004b73f1  8b542424             mov edx, dword ptr [esp + 0x24]
// 004b73f5  50                   push eax
// 004b73f6  8b442424             mov eax, dword ptr [esp + 0x24]
// 004b73fa  51                   push ecx
// 004b73fb  52                   push edx
// 004b73fc  50                   push eax
// 004b73fd  e8ee46ffff           call 0x4abaf0
// 004b7402  83c410               add esp, 0x10
// 004b7405  8d4c2430             lea ecx, [esp + 0x30]
// 004b7409  57                   push edi
// 004b740a  51                   push ecx
// 004b740b  e830161600           call 0x618a40
// 004b7410  83c408               add esp, 8
// 004b7413  8b10                 mov edx, dword ptr [eax]
// 004b7415  83c004               add eax, 4
// 004b7418  50                   push eax
// 004b7419  8d4c2418             lea ecx, [esp + 0x18]
// 004b741d  c68424bc00000003     mov byte ptr [esp + 0xbc], 3
// 004b7425  89542414             mov dword ptr [esp + 0x14], edx
// 004b7429  e882b1f4ff           call 0x4025b0
// 004b742e  8b442434             mov eax, dword ptr [esp + 0x34]
// 004b7432  c68424b800000002     mov byte ptr [esp + 0xb8], 2
// 004b743a  3bc3                 cmp eax, ebx
// 004b743c  742c                 je 0x4b746a
// 004b743e  8bf8                 mov edi, eax
// 004b7440  83c004               add eax, 4
// 004b7443  83c9ff               or ecx, 0xffffffff
// 004b7446  f00fc108             lock xadd dword ptr [eax], ecx
// 004b744a  751e                 jne 0x4b746a
// 004b744c  8b17                 mov edx, dword ptr [edi]
// 004b744e  8b4204               mov eax, dword ptr [edx + 4]
// 004b7451  8bcf                 mov ecx, edi
// 004b7453  ffd0                 call eax
// 004b7455  8d4f08               lea ecx, [edi + 8]
// 004b7458  83caff               or edx, 0xffffffff
// 004b745b  f00fc111             lock xadd dword ptr [ecx], edx
// 004b745f  7509                 jne 0x4b746a
// 004b7461  8b07                 mov eax, dword ptr [edi]
// 004b7463  8b5008               mov edx, dword ptr [eax + 8]
// 004b7466  8bcf                 mov ecx, edi
// 004b7468  ffd2                 call edx
// 004b746a  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004b746e  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 004b7472  8b4d1c               mov ecx, dword ptr [ebp + 0x1c]
// 004b7475  50                   push eax
// 004b7476  e8a5890b00           call 0x56fe20
// 004b747b  84c0                 test al, al
// 004b747d  0f8496020000         je 0x4b7719
// 004b7483  6a04                 push 4
// 004b7485  8d4c2454             lea ecx, [esp + 0x54]
// 004b7489  51                   push ecx
// 004b748a  8d4c2428             lea ecx, [esp + 0x28]
// 004b748e  83c510               add ebp, 0x10
// 004b7491  e8aa0f0f00           call 0x5a8440
// 004b7496  8bf8                 mov edi, eax
// 004b7498  6a04                 push 4
// 004b749a  8d542470             lea edx, [esp + 0x70]
// 004b749e  52                   push edx
// 004b749f  8d4c2428             lea ecx, [esp + 0x28]
// 004b74a3  c68424c000000004     mov byte ptr [esp + 0xc0], 4
// 004b74ab  e8900f0f00           call 0x5a8440
// 004b74b0  8bd8                 mov ebx, eax
// 004b74b2  8d442438             lea eax, [esp + 0x38]
// 004b74b6  50                   push eax
// 004b74b7  c68424bc00000005     mov byte ptr [esp + 0xbc], 5
// 004b74bf  e85c210b00           call 0x569620
// 004b74c4  83c404               add esp, 4
// 004b74c7  89442430             mov dword ptr [esp + 0x30], eax
// 004b74cb  837f1810             cmp dword ptr [edi + 0x18], 0x10
// 004b74cf  c68424b800000006     mov byte ptr [esp + 0xb8], 6
// 004b74d7  7209                 jb 0x4b74e2
// 004b74d9  8b4f04               mov ecx, dword ptr [edi + 4]
// 004b74dc  894c2428             mov dword ptr [esp + 0x28], ecx
// 004b74e0  eb07                 jmp 0x4b74e9
// 004b74e2  83c704               add edi, 4
// 004b74e5  897c2428             mov dword ptr [esp + 0x28], edi
// 004b74e9  8b5500               mov edx, dword ptr [ebp]
// 004b74ec  8b4204               mov eax, dword ptr [edx + 4]
// 004b74ef  8bcd                 mov ecx, ebp
// 004b74f1  ffd0                 call eax
// 004b74f3  ba10000000           mov edx, 0x10
// 004b74f8  39501c               cmp dword ptr [eax + 0x1c], edx
// 004b74fb  7205                 jb 0x4b7502
// 004b74fd  8b4808               mov ecx, dword ptr [eax + 8]
// 004b7500  eb03                 jmp 0x4b7505
// 004b7502  8d4808               lea ecx, [eax + 8]
// 004b7505  395318               cmp dword ptr [ebx + 0x18], edx
// 004b7508  7205                 jb 0x4b750f
// 004b750a  8b5b04               mov ebx, dword ptr [ebx + 4]
// 004b750d  eb03                 jmp 0x4b7512
// 004b750f  83c304               add ebx, 4
// 004b7512  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 004b7516  8b4204               mov eax, dword ptr [edx + 4]
// 004b7519  83c004               add eax, 4
// 004b751c  83781810             cmp dword ptr [eax + 0x18], 0x10
// 004b7520  7205                 jb 0x4b7527
// 004b7522  8b6804               mov ebp, dword ptr [eax + 4]
// 004b7525  eb03                 jmp 0x4b752a
// 004b7527  8d6804               lea ebp, [eax + 4]
// 004b752a  8b542428             mov edx, dword ptr [esp + 0x28]
// 004b752e  8b442430             mov eax, dword ptr [esp + 0x30]
// 004b7532  8b38                 mov edi, dword ptr [eax]
// 004b7534  52                   push edx
// 004b7535  51                   push ecx
// 004b7536  6a01                 push 1
// 004b7538  8d8e542d0000         lea ecx, [esi + 0x2d54]
// 004b753e  e86d23ffff           call 0x4a98b0
// 004b7543  50                   push eax
// 004b7544  53                   push ebx
// 004b7545  55                   push ebp
// 004b7546  68e0508200           push 0x8250e0
// 004b754b  6a03                 push 3
// 004b754d  57                   push edi
// 004b754e  e84d1e0b00           call 0x5693a0
// 004b7553  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 004b7557  83c420               add esp, 0x20
// 004b755a  c68424b800000005     mov byte ptr [esp + 0xb8], 5
// 004b7562  85c0                 test eax, eax
// 004b7564  742c                 je 0x4b7592
// 004b7566  8bf8                 mov edi, eax
// 004b7568  83c004               add eax, 4
// 004b756b  83c9ff               or ecx, 0xffffffff
// 004b756e  f00fc108             lock xadd dword ptr [eax], ecx
// 004b7572  751e                 jne 0x4b7592
// 004b7574  8b17                 mov edx, dword ptr [edi]
// 004b7576  8b4204               mov eax, dword ptr [edx + 4]
// 004b7579  8bcf                 mov ecx, edi
// 004b757b  ffd0                 call eax
// 004b757d  8d4f08               lea ecx, [edi + 8]
// 004b7580  83caff               or edx, 0xffffffff
// 004b7583  f00fc111             lock xadd dword ptr [ecx], edx
// 004b7587  7509                 jne 0x4b7592
// 004b7589  8b07                 mov eax, dword ptr [edi]
// 004b758b  8b5008               mov edx, dword ptr [eax + 8]
// 004b758e  8bcf                 mov ecx, edi
// 004b7590  ffd2                 call edx
// 004b7592  8d4c246c             lea ecx, [esp + 0x6c]
// 004b7596  c68424b800000004     mov byte ptr [esp + 0xb8], 4
// 004b759e  ff1568248000         call dword ptr [0x802468]
// 004b75a4  8d4c2450             lea ecx, [esp + 0x50]
// 004b75a8  c68424b800000002     mov byte ptr [esp + 0xb8], 2
// 004b75b0  ff1568248000         call dword ptr [0x802468]
// 004b75b6  e95a010000           jmp 0x4b7715
// 004b75bb  8b4504               mov eax, dword ptr [ebp + 4]
// 004b75be  50                   push eax
// 004b75bf  8d4c243c             lea ecx, [esp + 0x3c]
// 004b75c3  51                   push ecx
// 004b75c4  e8c78bf6ff           call 0x420190
// 004b75c9  83c408               add esp, 8
// 004b75cc  8b10                 mov edx, dword ptr [eax]
// 004b75ce  83c004               add eax, 4
// 004b75d1  50                   push eax
// 004b75d2  8d4c2418             lea ecx, [esp + 0x18]
// 004b75d6  c68424bc00000007     mov byte ptr [esp + 0xbc], 7
// 004b75de  89542414             mov dword ptr [esp + 0x14], edx
// 004b75e2  e8c9aff4ff           call 0x4025b0
// 004b75e7  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 004b75eb  c68424b800000002     mov byte ptr [esp + 0xb8], 2
// 004b75f3  3bfb                 cmp edi, ebx
// 004b75f5  742a                 je 0x4b7621
// 004b75f7  8d4704               lea eax, [edi + 4]
// 004b75fa  83c9ff               or ecx, 0xffffffff
// 004b75fd  f00fc108             lock xadd dword ptr [eax], ecx
// 004b7601  751e                 jne 0x4b7621
// 004b7603  8b17                 mov edx, dword ptr [edi]
// 004b7605  8b4204               mov eax, dword ptr [edx + 4]
// 004b7608  8bcf                 mov ecx, edi
// 004b760a  ffd0                 call eax
// 004b760c  8d4f08               lea ecx, [edi + 8]
// 004b760f  83caff               or edx, 0xffffffff
// 004b7612  f00fc111             lock xadd dword ptr [ecx], edx
// 004b7616  7509                 jne 0x4b7621
// 004b7618  8b07                 mov eax, dword ptr [edi]
// 004b761a  8b5008               mov edx, dword ptr [eax + 8]
// 004b761d  8bcf                 mov ecx, edi
// 004b761f  ffd2                 call edx
// 004b7621  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004b7625  3bfb                 cmp edi, ebx
// 004b7627  0f85c0000000         jne 0x4b76ed
// 004b762d  8b4504               mov eax, dword ptr [ebp + 4]
// 004b7630  83c004               add eax, 4
// 004b7633  be10000000           mov esi, 0x10
// 004b7638  397018               cmp dword ptr [eax + 0x18], esi
// 004b763b  7205                 jb 0x4b7642
// 004b763d  8b4004               mov eax, dword ptr [eax + 4]
// 004b7640  eb03                 jmp 0x4b7645
// 004b7642  83c004               add eax, 4
// 004b7645  50                   push eax
// 004b7646  8d442454             lea eax, [esp + 0x54]
// 004b764a  68b4508200           push 0x8250b4
// 004b764f  50                   push eax
// 004b7650  e8bb240500           call 0x509b10
// 004b7655  8d4c2444             lea ecx, [esp + 0x44]
// 004b7659  b308                 mov bl, 8
// 004b765b  51                   push ecx
// 004b765c  889c24c8000000       mov byte ptr [esp + 0xc8], bl
// 004b7663  e8b81f0b00           call 0x569620
// 004b7668  83c410               add esp, 0x10
// 004b766b  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 004b766f  c68424b800000009     mov byte ptr [esp + 0xb8], 9
// 004b7677  39742468             cmp dword ptr [esp + 0x68], esi
// 004b767b  7304                 jae 0x4b7681
// 004b767d  8d4c2454             lea ecx, [esp + 0x54]
// 004b7681  8b00                 mov eax, dword ptr [eax]
// 004b7683  51                   push ecx
// 004b7684  6a03                 push 3
// 004b7686  50                   push eax
// 004b7687  e8141d0b00           call 0x5693a0
// 004b768c  8b442448             mov eax, dword ptr [esp + 0x48]
// 004b7690  83c40c               add esp, 0xc
// 004b7693  889c24b8000000       mov byte ptr [esp + 0xb8], bl
// 004b769a  85c0                 test eax, eax
// 004b769c  742c                 je 0x4b76ca
// 004b769e  8bf0                 mov esi, eax
// 004b76a0  83c004               add eax, 4
// 004b76a3  83caff               or edx, 0xffffffff
// 004b76a6  f00fc110             lock xadd dword ptr [eax], edx
// 004b76aa  751e                 jne 0x4b76ca
// 004b76ac  8b06                 mov eax, dword ptr [esi]
// 004b76ae  8b5004               mov edx, dword ptr [eax + 4]
// 004b76b1  8bce                 mov ecx, esi
// 004b76b3  ffd2                 call edx
// 004b76b5  8d4608               lea eax, [esi + 8]
// 004b76b8  83c9ff               or ecx, 0xffffffff
// 004b76bb  f00fc108             lock xadd dword ptr [eax], ecx
// 004b76bf  7509                 jne 0x4b76ca
// 004b76c1  8b16                 mov edx, dword ptr [esi]
// 004b76c3  8b4208               mov eax, dword ptr [edx + 8]
// 004b76c6  8bce                 mov ecx, esi
// 004b76c8  ffd0                 call eax
// 004b76ca  8d4c2450             lea ecx, [esp + 0x50]
// 004b76ce  51                   push ecx
// 004b76cf  8d8c248c000000       lea ecx, [esp + 0x8c]
// 004b76d6  e87526f5ff           call 0x409d50
// 004b76db  68c81b8d00           push 0x8d1bc8
// 004b76e0  8d94248c000000       lea edx, [esp + 0x8c]
// 004b76e7  52                   push edx
// 004b76e8  e89f9e1e00           call 0x6a158c
// 004b76ed  8bcf                 mov ecx, edi
// 004b76ef  e86cc0ffff           call 0x4b3760
// 004b76f4  8b442424             mov eax, dword ptr [esp + 0x24]
// 004b76f8  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 004b76fc  50                   push eax
// 004b76fd  51                   push ecx
// 004b76fe  8d4f08               lea ecx, [edi + 8]
// 004b7701  e8fa0a0f00           call 0x5a8200
// 004b7706  8bcf                 mov ecx, edi
// 004b7708  e89344feff           call 0x49bba0
// 004b770d  8b17                 mov edx, dword ptr [edi]
// 004b770f  8b02                 mov eax, dword ptr [edx]
// 004b7711  8bcf                 mov ecx, edi
// 004b7713  ffd0                 call eax
// 004b7715  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 004b7719  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 004b771d  6a00                 push 0
// 004b771f  83ec08               sub esp, 8
// 004b7722  8bc4                 mov eax, esp
// 004b7724  8928                 mov dword ptr [eax], ebp
// 004b7726  8964243c             mov dword ptr [esp + 0x3c], esp
// 004b772a  897804               mov dword ptr [eax + 4], edi
// 004b772d  85ff                 test edi, edi
// 004b772f  740c                 je 0x4b773d
// 004b7731  8d4f04               lea ecx, [edi + 4]
// 004b7734  ba01000000           mov edx, 1
// 004b7739  f00fc111             lock xadd dword ptr [ecx], edx
// 004b773d  8bce                 mov ecx, esi
// 004b773f  e86cdbffff           call 0x4b52b0
// 004b7744  8b9c24c0000000       mov ebx, dword ptr [esp + 0xc0]
// 004b774b  89442430             mov dword ptr [esp + 0x30], eax
// 004b774f  83c028               add eax, 0x28
// 004b7752  50                   push eax
// 004b7753  53                   push ebx
// 004b7754  e8d7e3feff           call 0x4a5b30
// 004b7759  83c408               add esp, 8
// 004b775c  55                   push ebp
// 004b775d  53                   push ebx
// 004b775e  8bce                 mov ecx, esi
// 004b7760  e89bf7ffff           call 0x4b6f00
// 004b7765  8b06                 mov eax, dword ptr [esi]
// 004b7767  8b5040               mov edx, dword ptr [eax + 0x40]
// 004b776a  55                   push ebp
// 004b776b  8bce                 mov ecx, esi
// 004b776d  ffd2                 call edx
// 004b776f  84c0                 test al, al
// 004b7771  0f94c3               sete bl
// 004b7774  885c241b             mov byte ptr [esp + 0x1b], bl
// 004b7778  84db                 test bl, bl
// 004b777a  0f84d1000000         je 0x4b7851
// 004b7780  6a04                 push 4
// 004b7782  8d442470             lea eax, [esp + 0x70]
// 004b7786  50                   push eax
// 004b7787  8d4c2428             lea ecx, [esp + 0x28]
// 004b778b  e8b00c0f00           call 0x5a8440
// 004b7790  8bf8                 mov edi, eax
// 004b7792  8d4c2438             lea ecx, [esp + 0x38]
// 004b7796  51                   push ecx
// 004b7797  c68424bc0000000a     mov byte ptr [esp + 0xbc], 0xa
// 004b779f  e87c1e0b00           call 0x569620
// 004b77a4  83c404               add esp, 4
// 004b77a7  837f1810             cmp dword ptr [edi + 0x18], 0x10
// 004b77ab  c68424b80000000b     mov byte ptr [esp + 0xb8], 0xb
// 004b77b3  7205                 jb 0x4b77ba
// 004b77b5  8b5f04               mov ebx, dword ptr [edi + 4]
// 004b77b8  eb03                 jmp 0x4b77bd
// 004b77ba  8d5f04               lea ebx, [edi + 4]
// 004b77bd  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 004b77c1  8b4a04               mov ecx, dword ptr [edx + 4]
// 004b77c4  83c104               add ecx, 4
// 004b77c7  83791810             cmp dword ptr [ecx + 0x18], 0x10
// 004b77cb  7205                 jb 0x4b77d2
// 004b77cd  8b6904               mov ebp, dword ptr [ecx + 4]
// 004b77d0  eb03                 jmp 0x4b77d5
// 004b77d2  8d6904               lea ebp, [ecx + 4]
// 004b77d5  8b38                 mov edi, dword ptr [eax]
// 004b77d7  6a01                 push 1
// 004b77d9  8d8e542d0000         lea ecx, [esi + 0x2d54]
// 004b77df  e8cc20ffff           call 0x4a98b0
// 004b77e4  50                   push eax
// 004b77e5  53                   push ebx
// 004b77e6  55                   push ebp
// 004b77e7  6888508200           push 0x825088
// 004b77ec  6a02                 push 2
// 004b77ee  57                   push edi
// 004b77ef  e8ac1b0b00           call 0x5693a0
// 004b77f4  8b442454             mov eax, dword ptr [esp + 0x54]
// 004b77f8  83c418               add esp, 0x18
// 004b77fb  c68424b80000000a     mov byte ptr [esp + 0xb8], 0xa
// 004b7803  85c0                 test eax, eax
// 004b7805  742c                 je 0x4b7833
// 004b7807  8bf8                 mov edi, eax
// 004b7809  83c004               add eax, 4
// 004b780c  83c9ff               or ecx, 0xffffffff
// 004b780f  f00fc108             lock xadd dword ptr [eax], ecx
// 004b7813  751e                 jne 0x4b7833
// 004b7815  8b17                 mov edx, dword ptr [edi]
// 004b7817  8b4204               mov eax, dword ptr [edx + 4]
// 004b781a  8bcf                 mov ecx, edi
// 004b781c  ffd0                 call eax
// 004b781e  8d4f08               lea ecx, [edi + 8]
// 004b7821  83caff               or edx, 0xffffffff
// 004b7824  f00fc111             lock xadd dword ptr [ecx], edx
// 004b7828  7509                 jne 0x4b7833
// 004b782a  8b07                 mov eax, dword ptr [edi]
// 004b782c  8b5008               mov edx, dword ptr [eax + 8]
// 004b782f  8bcf                 mov ecx, edi
// 004b7831  ffd2                 call edx
// 004b7833  8d4c246c             lea ecx, [esp + 0x6c]
// 004b7837  c68424b800000002     mov byte ptr [esp + 0xb8], 2
// 004b783f  ff1568248000         call dword ptr [0x802468]
// 004b7845  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 004b7849  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 004b784d  8a5c241b             mov bl, byte ptr [esp + 0x1b]
// 004b7851  6a00                 push 0
// 004b7853  6844989200           push 0x929844
// 004b7858  687c909200           push 0x92907c
// 004b785d  6a00                 push 0
// 004b785f  55                   push ebp
// 004b7860  e8619f1e00           call 0x6a17c6
// 004b7865  83c414               add esp, 0x14
// 004b7868  85c0                 test eax, eax
// 004b786a  0f84b5000000         je 0x4b7925
// 004b7870  8b8c24c0000000       mov ecx, dword ptr [esp + 0xc0]
// 004b7877  8d442438             lea eax, [esp + 0x38]
// 004b787b  50                   push eax
// 004b787c  51                   push ecx
// 004b787d  8bce                 mov ecx, esi
// 004b787f  e82cf8feff           call 0x4a70b0
// 004b7884  84db                 test bl, bl
// 004b7886  7512                 jne 0x4b789a
// 004b7888  8b542424             mov edx, dword ptr [esp + 0x24]
// 004b788c  8b442420             mov eax, dword ptr [esp + 0x20]
// 004b7890  52                   push edx
// 004b7891  50                   push eax
// 004b7892  55                   push ebp
// 004b7893  8bce                 mov ecx, esi
// 004b7895  e8b619ffff           call 0x4a9250
// 004b789a  8b8c24c0000000       mov ecx, dword ptr [esp + 0xc0]
// 004b78a1  8b4108               mov eax, dword ptr [ecx + 8]
// 004b78a4  8b8e882b0000         mov ecx, dword ptr [esi + 0x2b88]
// 004b78aa  85c9                 test ecx, ecx
// 004b78ac  7416                 je 0x4b78c4
// 004b78ae  ff8174010000         inc dword ptr [ecx + 0x174]
// 004b78b4  2b44244c             sub eax, dword ptr [esp + 0x4c]
// 004b78b8  8b8e882b0000         mov ecx, dword ptr [esi + 0x2b88]
// 004b78be  018178010000         add dword ptr [ecx + 0x178], eax
// 004b78c4  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 004b78c8  8b4204               mov eax, dword ptr [edx + 4]
// 004b78cb  8986602d0000         mov dword ptr [esi + 0x2d60], eax
// 004b78d1  c78424b8000000ffffffff mov dword ptr [esp + 0xb8], 0xffffffff
// 004b78dc  85ff                 test edi, edi
// 004b78de  742a                 je 0x4b790a
// 004b78e0  8d4f04               lea ecx, [edi + 4]
// 004b78e3  83caff               or edx, 0xffffffff
// 004b78e6  f00fc111             lock xadd dword ptr [ecx], edx
// 004b78ea  751e                 jne 0x4b790a
// 004b78ec  8b07                 mov eax, dword ptr [edi]
// 004b78ee  8b5004               mov edx, dword ptr [eax + 4]
// 004b78f1  8bcf                 mov ecx, edi
// 004b78f3  ffd2                 call edx
// 004b78f5  8d4708               lea eax, [edi + 8]
// 004b78f8  83c9ff               or ecx, 0xffffffff
// 004b78fb  f00fc108             lock xadd dword ptr [eax], ecx
// 004b78ff  7509                 jne 0x4b790a
// 004b7901  8b17                 mov edx, dword ptr [edi]
// 004b7903  8b4208               mov eax, dword ptr [edx + 8]
// 004b7906  8bcf                 mov ecx, edi
// 004b7908  ffd0                 call eax
// 004b790a  8b8c24b0000000       mov ecx, dword ptr [esp + 0xb0]
// 004b7911  5f                   pop edi
// 004b7912  5e                   pop esi
// 004b7913  5d                   pop ebp
// 004b7914  64890d00000000       mov dword ptr fs:[0], ecx
// 004b791b  5b                   pop ebx
// 004b791c  81c4ac000000         add esp, 0xac
// 004b7922  c20400               ret 4
// 004b7925  84db                 test bl, bl
// 004b7927  7412                 je 0x4b793b
// 004b7929  8b8424c0000000       mov eax, dword ptr [esp + 0xc0]
// 004b7930  8d542438             lea edx, [esp + 0x38]
// 004b7934  52                   push edx
// 004b7935  50                   push eax
// 004b7936  e942ffffff           jmp 0x4b787d
// 004b793b  0fb61548169700       movzx edx, byte ptr [0x971648]
// 004b7942  52                   push edx
// 004b7943  83ec08               sub esp, 8
// 004b7946  8bd4                 mov edx, esp
// 004b7948  89642434             mov dword ptr [esp + 0x34], esp
// 004b794c  33c9                 xor ecx, ecx
// 004b794e  892a                 mov dword ptr [edx], ebp
// 004b7950  b840054b00           mov eax, 0x4b0540
// 004b7955  897a04               mov dword ptr [edx + 4], edi
// 004b7958  85ff                 test edi, edi
// 004b795a  740c                 je 0x4b7968
// 004b795c  83c704               add edi, 4
// 004b795f  ba01000000           mov edx, 1
// 004b7964  f00fc117             lock xadd dword ptr [edi], edx
// 004b7968  56                   push esi
// 004b7969  51                   push ecx
// 004b796a  50                   push eax
// 004b796b  8d442468             lea eax, [esp + 0x68]
// 004b796f  50                   push eax
// 004b7970  e8bb7effff           call 0x4af830
// 004b7975  83c41c               add esp, 0x1c
// 004b7978  50                   push eax
// 004b7979  8d8c248c000000       lea ecx, [esp + 0x8c]
// 004b7980  c68424bc0000000c     mov byte ptr [esp + 0xbc], 0xc
// 004b7988  e8f3d3ffff           call 0x4b4d80
// 004b798d  6a00                 push 0
// 004b798f  8d8c248c000000       lea ecx, [esp + 0x8c]
// 004b7996  51                   push ecx
// 004b7997  8d7d14               lea edi, [ebp + 0x14]
// 004b799a  57                   push edi
// 004b799b  8d542444             lea edx, [esp + 0x44]
// 004b799f  b30d                 mov bl, 0xd
// 004b79a1  52                   push edx
// 004b79a2  b9483f9700           mov ecx, 0x973f48
// 004b79a7  889c24c8000000       mov byte ptr [esp + 0xc8], bl
// 004b79ae  e8cd3cf7ff           call 0x42b680
// 004b79b3  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 004b79b7  50                   push eax
// 004b79b8  83c118               add ecx, 0x18
// 004b79bb  c68424bc0000000e     mov byte ptr [esp + 0xbc], 0xe
// 004b79c3  e828da0d00           call 0x5953f0
// 004b79c8  8d4c2438             lea ecx, [esp + 0x38]
// 004b79cc  889c24b8000000       mov byte ptr [esp + 0xb8], bl
// 004b79d3  e898d90d00           call 0x595370
// 004b79d8  8d8c2488000000       lea ecx, [esp + 0x88]
// 004b79df  c68424b80000000c     mov byte ptr [esp + 0xb8], 0xc
// 004b79e7  e8247dfeff           call 0x49f710
// 004b79ec  8d4c2450             lea ecx, [esp + 0x50]
// 004b79f0  c68424b800000002     mov byte ptr [esp + 0xb8], 2
// 004b79f8  e88370ffff           call 0x4aea80
// 004b79fd  8b8c24c0000000       mov ecx, dword ptr [esp + 0xc0]
// 004b7a04  8d442428             lea eax, [esp + 0x28]
// 004b7a08  50                   push eax
// 004b7a09  51                   push ecx
// 004b7a0a  8bce                 mov ecx, esi
// 004b7a0c  c7442430343d9700     mov dword ptr [esp + 0x30], 0x973d34
// 004b7a14  897c2434             mov dword ptr [esp + 0x34], edi
// 004b7a18  e893f0ffff           call 0x4b6ab0
// 004b7a1d  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 004b7a21  e962feffff           jmp 0x4b7888

// from server: 77% by king_originala
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lang: cpp
// Complete native readInstanceNew, including the cold parent-property branch.
// Native MSVCP90 checked STL and exact adjacent subscription/Instance code establish this profile.
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <stdexcept>
#include <intrin.h>
#include <utility>
#include <stddef.h>
#include <ostream>
namespace RakNet {class BitStream {public:bool ReadBits(unsigned char*,int,bool);};}
namespace boost {
namespace detail {
class sp_counted_base {public:
    sp_counted_base():use_count_(1),weak_count_(1){}
    virtual ~sp_counted_base() {}
    virtual void dispose()=0;
    virtual void destroy(){delete this;}
    long use_count_,weak_count_;
    void weak_release(){if(_InterlockedDecrement(&weak_count_)==0)destroy();}
    void release(){if(_InterlockedDecrement(&use_count_)==0){dispose();weak_release();}}
};
template<class Y>struct sp_counted_impl_p:sp_counted_base {Y*pointer;explicit sp_counted_impl_p(Y*p):pointer(p){}void dispose(){delete pointer;}};
class shared_count {public:
    sp_counted_base* pi_;
    shared_count():pi_(0){}
    
    shared_count& operator=(const shared_count& r){sp_counted_base* tmp=r.pi_;if(tmp!=pi_){if(tmp)_InterlockedIncrement(&tmp->use_count_);if(pi_)pi_->release();pi_=tmp;}return *this;}
    void swap(shared_count& r){sp_counted_base* tmp=r.pi_;r.pi_=pi_;pi_=tmp;}
    shared_count(const shared_count& r):pi_(r.pi_){if(pi_)_InterlockedIncrement(&pi_->use_count_);}
    ~shared_count(){if(pi_)pi_->release();}
};
}
namespace detail {inline void sp_enable_shared_from_this(const shared_count&,...) {}}
template<class T> class shared_ptr {
public:
    T* px; detail::shared_count pn;
    shared_ptr():px(0),pn(){}
    
    shared_ptr& operator=(const shared_ptr& r){px=r.px;pn=r.pn;return *this;}
    void swap(shared_ptr& r){std::swap(px,r.px);pn.swap(r.pn);}
    void reset(){shared_ptr().swap(*this);}
    typedef T* shared_ptr::*unspecified_bool_type;
    operator unspecified_bool_type()const{return px==0?0:&shared_ptr::px;}
    shared_ptr(const shared_ptr& r):px(r.px),pn(r.pn){}
    template<class Y> shared_ptr(const shared_ptr<Y>& r):px(r.px),pn(r.pn){}
    T* get()const{return px;}
    T* operator->()const{return px;}
};
template<class T,class U> bool operator==(const shared_ptr<T>& a,const shared_ptr<U>& b){return a.get()==b.get();}
}


namespace boost {
namespace detail {template<class T>struct empty_base{};}
template<class T,class B=detail::empty_base<T> >struct less_than_comparable1:B{};
template<class T,class B=detail::empty_base<T> >struct equality_comparable1:B{};
namespace signals {
struct basic_connection {void*signal;void*signal_data;void(*signal_disconnect)(void*,void*);};
class connection:private less_than_comparable1<connection>,private equality_comparable1<connection> {public:
 shared_ptr<basic_connection>con;bool controlling_connection;
 connection():con(),controlling_connection(false){}connection(const connection&);~connection();connection&operator=(const connection&);void disconnect()const;
 bool connected()const{return con.get()&&con->signal_disconnect;}
};
}
}
namespace boost {
struct noncopyable{};
template<class T>struct weak_ptr {T*px;void*count;};
template<class T>struct enable_shared_from_this {weak_ptr<T>weak_this;shared_ptr<T>shared_from_this();};
}
namespace G3D {std::string __cdecl format(const char*,...);}
namespace RBX {
class Name;class Instance;struct XmlElement;struct IReferenceBinder;struct ServiceProvider;
class Guid:public boost::noncopyable {public:struct Data {const Name*scope;int index;std::string readableString(int)const;};Data data;void assign(Data);};
class Name {int dictionaryIndex;public:const std::string name;const char*c_str()const{return name.c_str();}};
template<class T>struct GuidItem {virtual void onGuidChanged();bool registeredGuid;Guid guid;void registerGuid();void unregisterGuid();static __declspec(noalias) bool find(const Guid::Data&,Instance*&);};
struct Object {virtual ~Object();};template<class T>struct Creatable:Object{};
template<class T>struct AbstractFactoryProduct:Creatable<T> {virtual const Name&getClassName()const=0;};
namespace Reflection {
class ClassDescriptor {public:virtual~ClassDescriptor();const Name*name;bool operator!=(const ClassDescriptor&)const;};
struct PropertyDescriptor;struct SignalSource {virtual ~SignalSource();void*signals;};
struct DescribedBase:SignalSource {ClassDescriptor*descriptor;};
struct ChildSignal {void fire(SignalSource*,boost::shared_ptr<Instance>)const;};
}
struct Debugable {virtual void dump(std::ostream&);};
struct RaiseRange;
template<class T,class Event>struct Listener;
template<class T,class Event>struct Notifier {
 virtual ~Notifier();std::vector<Listener<T,Event>*>listeners;RaiseRange*range;
 virtual void onAddListener(Listener<T,Event>*)const;virtual void onRemoveListener(Listener<T,Event>*)const;
 __declspec(nothrow) void raise(Event)const;
};
template<class T> boost::shared_ptr<T> __cdecl shared_from(T*);
struct ChildAdded {const boost::shared_ptr<Instance>child;ChildAdded(Instance*p):child(shared_from(p)){}};
struct ChildRemoved {const boost::shared_ptr<Instance>child;ChildRemoved(Instance*p):child(shared_from(p)){}};
struct DescendentAdded;struct DescendentRemoving;struct PropertyChanged;
struct AncestorChanged {Instance*const child;Instance*const oldParent;Instance*const newParent;AncestorChanged(Instance*c,Instance*o,Instance*n):child(c),oldParent(o),newParent(n){}};
template<class T>struct Association {struct Item;std::vector<Item*>items;};
template<class T>struct CopyOnWrite:boost::noncopyable {
 boost::shared_ptr<T>object;
 operator typename boost::shared_ptr<T>::unspecified_bool_type()const{return object;}
 const T*operator->()const{return object.get();}boost::shared_ptr<T>&write();void reset();
};
class Instance:public GuidItem<Instance>,public AbstractFactoryProduct<Instance>,public Reflection::DescribedBase,public Debugable,
 public Notifier<Instance,ChildAdded>,public Notifier<Instance,ChildRemoved>,public Notifier<Instance,DescendentAdded>,public Notifier<Instance,DescendentRemoving>,public Notifier<Instance,AncestorChanged>,public Notifier<Instance,PropertyChanged>,public boost::enable_shared_from_this<Instance>,public boost::noncopyable {public:
 static boost::shared_ptr<Instance>create(const Name&);
 virtual ~Instance();virtual void setName(const std::string&);
 virtual bool askAddChild(const Instance*)const;virtual bool askSetParent(const Instance*)const;
 virtual void onAncestorChanged(const AncestorChanged&);virtual void onDescendentAdded(Instance*);virtual void onDescendentRemoving(const boost::shared_ptr<Instance>&);
 virtual void onChildAdded(Instance*);virtual void onChildRemoving(Instance*);virtual void onChildRemoved(Instance*);virtual void onLastChildRemoved();
 virtual void readProperty(const XmlElement*,IReferenceBinder&);virtual void onServiceProvider(const ServiceProvider*,const ServiceProvider*);virtual boost::shared_ptr<Instance>createChild(const Name&);virtual XmlElement*write();virtual void onChildChanged(Instance*,const PropertyChanged&);
 Association<Instance>assoc;Instance*parent;CopyOnWrite<std::vector<boost::shared_ptr<Instance> > >children;std::string name;bool archivable;
 static Reflection::ChildSignal event_childAdded,event_childRemoved;static const Reflection::PropertyDescriptor propParent;
 std::string getFullName()const;bool isAncestorOf(const Instance*)const;bool contains(const Instance*child)const;
 unsigned numChildren()const{return children?children->size():0;}
 static void signalDescendentRemoving(const boost::shared_ptr<Instance>&,Instance*,Instance*);static void signalDescendentAdded(Instance*,Instance*,Instance*);
 void raisePropertyChanged(const Reflection::PropertyDescriptor&);const Reflection::ClassDescriptor&getDesc()const{return *descriptor;}void setParent(Instance*);
};

class Service {};
class StandardOut {public:static boost::shared_ptr<StandardOut>singleton();void __cdecl print(int,const char*,...);};
namespace Reflection {struct Property {const PropertyDescriptor*descriptor;DescribedBase*instance;Property(const PropertyDescriptor&d,DescribedBase*i):descriptor(&d),instance(i){}};}
namespace Network {
struct Settings {static Settings&singleton();};
class IdSerializer:public Instance {public:void deserializeId(RakNet::BitStream&,Guid::Data&);void resolvePendingBindings(Instance*,Guid::Data);};
class PluginInterface {public:virtual~PluginInterface();};
struct ReplicationData {boost::shared_ptr<Instance>instance;boost::signals::connection added,changed;bool flag;};
class Replicator:public IdSerializer,public PluginInterface {
public:
 virtual bool wantReplicate(const Instance*)const;
 void readInstanceNew(RakNet::BitStream&);
 ReplicationData&addReplicationData(boost::shared_ptr<Instance>,bool);
 void deserializeProperties(RakNet::BitStream&,Instance*);
 void deserializeValue(RakNet::BitStream&,Reflection::Property&);
 void onPropertyChanged(boost::shared_ptr<Instance>,const Reflection::PropertyDescriptor*);
};

class SystemAddress {public:const char*ToString(bool)const;};
struct Placeholder {};
namespace SlotDetail {
class X;union FunctionBuffer {void*obj_ptr;const void*const_obj_ptr;void(*func_ptr)();struct BoundMember {void(X::*memfunc_ptr)(int);void*obj_ptr;}bound_memfunc_ptr;char data;};
struct Function {void*vtable;FunctionBuffer functor;};struct SlotBase {boost::shared_ptr<void>data;};
}
struct BoundChanged {
 typedef void(Replicator::*Method)(boost::shared_ptr<Instance>,const Reflection::PropertyDescriptor*);
 Method method;Replicator*owner;boost::shared_ptr<Instance>instance;Placeholder argument;
};
BoundChanged __cdecl bindChanged(BoundChanged::Method,Replicator*,boost::shared_ptr<Instance>,Placeholder);
struct ChangedSlot:SlotDetail::SlotBase {SlotDetail::Function slot_function;ChangedSlot(const BoundChanged&);~ChangedSlot();};
struct ChangedSignal {boost::signals::connection connect(Reflection::SignalSource*,const ChangedSlot&,int);};
extern ChangedSignal propertyChangedSignal;
extern const Reflection::PropertyDescriptor parentProperty;
extern Placeholder firstArgument;
void __cdecl reportNullBinding(Guid::Data,const char*,const Name*);
struct ReplicatorStats {};
template<class T>inline T&field(void*p,unsigned off){return *reinterpret_cast<T*>(static_cast<char*>(p)+off);}
RakNet::BitStream&operator>>(RakNet::BitStream&,bool&);
inline unsigned readClassId(RakNet::BitStream&stream,int bits){unsigned id=0;stream.ReadBits(reinterpret_cast<unsigned char*>(&id),bits,true);return id;}
void Replicator::readInstanceNew(RakNet::BitStream&stream){
 unsigned startBits=field<unsigned>(&stream,8);
 Guid::Data id;
 deserializeId(stream,id);
 const Reflection::ClassDescriptor*desc=field<std::vector<const Reflection::ClassDescriptor*> >(this,0x2bd4)[readClassId(stream,field<int>(this,0x2bec))];
 if(field<bool>(&Settings::singleton(),0x131))
  StandardOut::singleton()->print(1,"Replication: %s:%s << %s",desc->name->c_str(),id.readableString(4).c_str(),field<SystemAddress>(this,0x2d54).ToString(true));
 boost::shared_ptr<Instance>instance;
 Instance*existing;
 if(GuidItem<Instance>::find(id,existing)){
  if(!existing)reportNullBinding(id,field<const char*>(this,0x2d5c),field<const Name*>(this,0x2d60));
  instance=shared_from(existing);
  if(instance->getDesc()!=*desc)
   StandardOut::singleton()->print(3,"Replication: Bad re-binding %s-%s << %s, %s-%s",desc->name->c_str(),id.readableString(4).c_str(),field<SystemAddress>(this,0x2d54).ToString(true),instance->getClassName().c_str(),id.readableString(4).c_str());
 }else{
  instance=Instance::create(*desc->name);
  if(!instance){
   std::string message=G3D::format("Replication: Can't create object of type %s",desc->name->c_str());
   StandardOut::singleton()->print(3,message.c_str());
   throw std::runtime_error(message);
  }
  instance->unregisterGuid();
  instance->guid.assign(id);
  instance->registerGuid();
  instance->onGuidChanged();
 }
 ReplicationData&data=addReplicationData(instance,false);
 stream>>data.flag;
 deserializeProperties(stream,instance.get());
 bool blocked=!wantReplicate(instance.get());
 if(blocked)
  StandardOut::singleton()->print(2,"Replication illegal instance: %s:%s << %s",desc->name->c_str(),id.readableString(4).c_str(),field<SystemAddress>(this,0x2d54).ToString(true));
 if(dynamic_cast<Service*>(instance.get())){Guid::Data ignoredParent;deserializeId(stream,ignoredParent);}
 else if(blocked){Guid::Data ignoredParent;deserializeId(stream,ignoredParent);}
 else{
  data.changed=propertyChangedSignal.connect(instance.get(),bindChanged(&Replicator::onPropertyChanged,this,instance,firstArgument),0);
  Reflection::Property property(parentProperty,instance.get());
  deserializeValue(stream,property);
 }
 if(!blocked)resolvePendingBindings(instance.get(),id);
 unsigned endBits=field<unsigned>(&stream,8);
 if(field<boost::shared_ptr<ReplicatorStats> >(this,0x2b88).get()){++field<unsigned>(field<boost::shared_ptr<ReplicatorStats> >(this,0x2b88).get(),0x174);field<unsigned>(field<boost::shared_ptr<ReplicatorStats> >(this,0x2b88).get(),0x178)+=endBits-startBits;}
 field<const Name*>(this,0x2d60)=desc->name;
}
}
}
