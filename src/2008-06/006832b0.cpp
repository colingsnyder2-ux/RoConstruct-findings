// roc 2008-06 006832b0  unit: Ogre::RbxSceneNode  size: 4309 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006832b0
//
// 006832b0  55                   push ebp
// 006832b1  8bec                 mov ebp, esp
// 006832b3  83e4f8               and esp, 0xfffffff8
// 006832b6  6aff                 push -1
// 006832b8  681add7d00           push 0x7ddd1a
// 006832bd  64a100000000         mov eax, dword ptr fs:[0]
// 006832c3  50                   push eax
// 006832c4  64892500000000       mov dword ptr fs:[0], esp
// 006832cb  81ecf4000000         sub esp, 0xf4
// 006832d1  53                   push ebx
// 006832d2  55                   push ebp
// 006832d3  56                   push esi
// 006832d4  8bf1                 mov esi, ecx
// 006832d6  57                   push edi
// 006832d7  89742414             mov dword ptr [esp + 0x14], esi
// 006832db  ff15e4438000         call dword ptr [0x8043e4]
// 006832e1  8bc8                 mov ecx, eax
// 006832e3  ff15ac4e8000         call dword ptr [0x804eac]
// 006832e9  8d4c2454             lea ecx, [esp + 0x54]
// 006832ed  89842480000000       mov dword ptr [esp + 0x80], eax
// 006832f4  e8e717f1ff           call 0x594ae0
// 006832f9  837e5400             cmp dword ptr [esi + 0x54], 0
// 006832fd  c784240c01000000000000 mov dword ptr [esp + 0x10c], 0
// 00683308  0f844b100000         je 0x684359
// 0068330e  8bde                 mov ebx, esi
// 00683310  8b4b50               mov ecx, dword ptr [ebx + 0x50]
// 00683313  8b533c               mov edx, dword ptr [ebx + 0x3c]
// 00683316  83c33c               add ebx, 0x3c
// 00683319  8bc1                 mov eax, ecx
// 0068331b  8b00                 mov eax, dword ptr [eax]
// 0068331d  895c2470             mov dword ptr [esp + 0x70], ebx
// 00683321  894c2424             mov dword ptr [esp + 0x24], ecx
// 00683325  89542420             mov dword ptr [esp + 0x20], edx
// 00683329  8bf2                 mov esi, edx
// 0068332b  8bf8                 mov edi, eax
// 0068332d  33ed                 xor ebp, ebp
// 0068332f  90                   nop 
// 00683330  85f6                 test esi, esi
// 00683332  7406                 je 0x68333a
// 00683334  3b742420             cmp esi, dword ptr [esp + 0x20]
// 00683338  7406                 je 0x683340
// 0068333a  ff1590288000         call dword ptr [0x802890]
// 00683340  3b7c2424             cmp edi, dword ptr [esp + 0x24]
// 00683344  746e                 je 0x6833b4
// 00683346  85f6                 test esi, esi
// 00683348  751e                 jne 0x683368
// 0068334a  ff1590288000         call dword ptr [0x802890]
// 00683350  33c0                 xor eax, eax
// 00683352  3b7814               cmp edi, dword ptr [eax + 0x14]
// 00683355  7506                 jne 0x68335d
// 00683357  ff1590288000         call dword ptr [0x802890]
// 0068335d  837f3004             cmp dword ptr [edi + 0x30], 4
// 00683361  7509                 jne 0x68336c
// 00683363  83c506               add ebp, 6
// 00683366  eb2d                 jmp 0x683395
// 00683368  8b06                 mov eax, dword ptr [esi]
// 0068336a  ebe6                 jmp 0x683352
// 0068336c  85f6                 test esi, esi
// 0068336e  751e                 jne 0x68338e
// 00683370  ff1590288000         call dword ptr [0x802890]
// 00683376  33c0                 xor eax, eax
// 00683378  3b7814               cmp edi, dword ptr [eax + 0x14]
// 0068337b  7506                 jne 0x683383
// 0068337d  ff1590288000         call dword ptr [0x802890]
// 00683383  837f3400             cmp dword ptr [edi + 0x34], 0
// 00683387  7509                 jne 0x683392
// 00683389  83c508               add ebp, 8
// 0068338c  eb07                 jmp 0x683395
// 0068338e  8b06                 mov eax, dword ptr [esi]
// 00683390  ebe6                 jmp 0x683378
// 00683392  83c502               add ebp, 2
// 00683395  85f6                 test esi, esi
// 00683397  7517                 jne 0x6833b0
// 00683399  ff1590288000         call dword ptr [0x802890]
// 0068339f  33c0                 xor eax, eax
// 006833a1  3b7814               cmp edi, dword ptr [eax + 0x14]
// 006833a4  7506                 jne 0x6833ac
// 006833a6  ff1590288000         call dword ptr [0x802890]
// 006833ac  8b3f                 mov edi, dword ptr [edi]
// 006833ae  eb80                 jmp 0x683330
// 006833b0  8b06                 mov eax, dword ptr [esi]
// 006833b2  ebed                 jmp 0x6833a1
// 006833b4  8bfd                 mov edi, ebp
// 006833b6  83fd78               cmp ebp, 0x78
// 006833b9  7305                 jae 0x6833c0
// 006833bb  bf78000000           mov edi, 0x78
// 006833c0  8b442414             mov eax, dword ptr [esp + 0x14]
// 006833c4  8b4828               mov ecx, dword ptr [eax + 0x28]
// 006833c7  85c9                 test ecx, ecx
// 006833c9  743b                 je 0x683406
// 006833cb  397924               cmp dword ptr [ecx + 0x24], edi
// 006833ce  0f838a000000         jae 0x68345e
// 006833d4  85c9                 test ecx, ecx
// 006833d6  742e                 je 0x683406
// 006833d8  8bc8                 mov ecx, eax
// 006833da  8b7110               mov esi, dword ptr [ecx + 0x10]
// 006833dd  85f6                 test esi, esi
// 006833df  7411                 je 0x6833f2
// 006833e1  8bce                 mov ecx, esi
// 006833e3  ff1524438000         call dword ptr [0x804324]
// 006833e9  56                   push esi
// 006833ea  e88bd20100           call 0x6a067a
// 006833ef  83c404               add esp, 4
// 006833f2  8b442414             mov eax, dword ptr [esp + 0x14]
// 006833f6  8d4824               lea ecx, [eax + 0x24]
// 006833f9  c7401000000000       mov dword ptr [eax + 0x10], 0
// 00683400  ff15e4468000         call dword ptr [0x8046e4]
// 00683406  8b742414             mov esi, dword ptr [esp + 0x14]
// 0068340a  57                   push edi
// 0068340b  8bce                 mov ecx, esi
// 0068340d  e88ef5ffff           call 0x6829a0
// 00683412  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 00683415  85c9                 test ecx, ecx
// 00683417  7545                 jne 0x68345e
// 00683419  68c4e78400           push 0x84e7c4
// 0068341e  8d4c2430             lea ecx, [esp + 0x30]
// 00683422  ff1558248000         call dword ptr [0x802458]
// 00683428  6a00                 push 0
// 0068342a  8d542430             lea edx, [esp + 0x30]
// 0068342e  6a02                 push 2
// 00683430  52                   push edx
// 00683431  c684241801000001     mov byte ptr [esp + 0x118], 1
// 00683439  ff15744e8000         call dword ptr [0x804e74]
// 0068343f  8bc8                 mov ecx, eax
// 00683441  ff15784e8000         call dword ptr [0x804e78]
// 00683447  8d4c242c             lea ecx, [esp + 0x2c]
// 0068344b  c684240c01000000     mov byte ptr [esp + 0x10c], 0
// 00683453  ff1568248000         call dword ptr [0x802468]
// 00683459  e9fb0e0000           jmp 0x684359
// 0068345e  6a01                 push 1
// 00683460  ff1518478000         call dword ptr [0x804718]
// 00683466  8b3b                 mov edi, dword ptr [ebx]
// 00683468  89442428             mov dword ptr [esp + 0x28], eax
// 0068346c  8b4314               mov eax, dword ptr [ebx + 0x14]
// 0068346f  8b30                 mov esi, dword ptr [eax]
// 00683471  897c2418             mov dword ptr [esp + 0x18], edi
// 00683475  8974241c             mov dword ptr [esp + 0x1c], esi
// 00683479  8b1d90288000         mov ebx, dword ptr [0x802890]
// 0068347f  85ff                 test edi, edi
// 00683481  751a                 jne 0x68349d
// 00683483  ffd3                 call ebx
// 00683485  33c0                 xor eax, eax
// 00683487  3b7014               cmp esi, dword ptr [eax + 0x14]
// 0068348a  7502                 jne 0x68348e
// 0068348c  ffd3                 call ebx
// 0068348e  8b4e2c               mov ecx, dword ptr [esi + 0x2c]
// 00683491  894c242c             mov dword ptr [esp + 0x2c], ecx
// 00683495  85ff                 test edi, edi
// 00683497  7408                 je 0x6834a1
// 00683499  8b07                 mov eax, dword ptr [edi]
// 0068349b  eb08                 jmp 0x6834a5
// 0068349d  8b07                 mov eax, dword ptr [edi]
// 0068349f  ebe6                 jmp 0x683487
// 006834a1  ffd3                 call ebx
// 006834a3  33c0                 xor eax, eax
// 006834a5  3b7014               cmp esi, dword ptr [eax + 0x14]
// 006834a8  7502                 jne 0x6834ac
// 006834aa  ffd3                 call ebx
// 006834ac  8b5630               mov edx, dword ptr [esi + 0x30]
// 006834af  89542430             mov dword ptr [esp + 0x30], edx
// 006834b3  85ff                 test edi, edi
// 006834b5  7404                 je 0x6834bb
// 006834b7  8b07                 mov eax, dword ptr [edi]
// 006834b9  eb04                 jmp 0x6834bf
// 006834bb  ffd3                 call ebx
// 006834bd  33c0                 xor eax, eax
// 006834bf  3b7014               cmp esi, dword ptr [eax + 0x14]
// 006834c2  7502                 jne 0x6834c6
// 006834c4  ffd3                 call ebx
// 006834c6  8b4634               mov eax, dword ptr [esi + 0x34]
// 006834c9  c744243800000000     mov dword ptr [esp + 0x38], 0
// 006834d1  89442434             mov dword ptr [esp + 0x34], eax
// 006834d5  85ff                 test edi, edi
// 006834d7  7406                 je 0x6834df
// 006834d9  3b7c2420             cmp edi, dword ptr [esp + 0x20]
// 006834dd  740a                 je 0x6834e9
// 006834df  8b1d90288000         mov ebx, dword ptr [0x802890]
// 006834e5  ffd3                 call ebx
// 006834e7  eb06                 jmp 0x6834ef
// 006834e9  8b1d90288000         mov ebx, dword ptr [0x802890]
// 006834ef  3b742424             cmp esi, dword ptr [esp + 0x24]
// 006834f3  0f84fe0a0000         je 0x683ff7
// 006834f9  837c243004           cmp dword ptr [esp + 0x30], 4
// 006834fe  0f8558040000         jne 0x68395c
// 00683504  85ff                 test edi, edi
// 00683506  0f857e030000         jne 0x68388a
// 0068350c  ffd3                 call ebx
// 0068350e  33c0                 xor eax, eax
// 00683510  3b7014               cmp esi, dword ptr [eax + 0x14]
// 00683513  7502                 jne 0x683517
// 00683515  ffd3                 call ebx
// 00683517  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 0068351b  d94608               fld dword ptr [esi + 8]
// 0068351e  d95d00               fstp dword ptr [ebp]
// 00683521  83c504               add ebp, 4
// 00683524  85ff                 test edi, edi
// 00683526  0f8565030000         jne 0x683891
// 0068352c  ffd3                 call ebx
// 0068352e  33c0                 xor eax, eax
// 00683530  3b7014               cmp esi, dword ptr [eax + 0x14]
// 00683533  7502                 jne 0x683537
// 00683535  ffd3                 call ebx
// 00683537  d94614               fld dword ptr [esi + 0x14]
// 0068353a  83c504               add ebp, 4
// 0068353d  d95dfc               fstp dword ptr [ebp - 4]
// 00683540  d905b8c38100         fld dword ptr [0x81c3b8]
// 00683546  d95d00               fstp dword ptr [ebp]
// 00683549  85ff                 test edi, edi
// 0068354b  0f8547030000         jne 0x683898
// 00683551  ffd3                 call ebx
// 00683553  33c0                 xor eax, eax
// 00683555  3b7014               cmp esi, dword ptr [eax + 0x14]
// 00683558  7502                 jne 0x68355c
// 0068355a  ffd3                 call ebx
// 0068355c  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 0068355f  894d04               mov dword ptr [ebp + 4], ecx
// 00683562  83c508               add ebp, 8
// 00683565  85ff                 test edi, edi
// 00683567  0f8532030000         jne 0x68389f
// 0068356d  ffd3                 call ebx
// 0068356f  33c0                 xor eax, eax
// 00683571  3b7014               cmp esi, dword ptr [eax + 0x14]
// 00683574  7502                 jne 0x683578
// 00683576  ffd3                 call ebx
// 00683578  d94618               fld dword ptr [esi + 0x18]
// 0068357b  83c504               add ebp, 4
// 0068357e  d95dfc               fstp dword ptr [ebp - 4]
// 00683581  85ff                 test edi, edi
// 00683583  0f851d030000         jne 0x6838a6
// 00683589  ffd3                 call ebx
// 0068358b  33c0                 xor eax, eax
// 0068358d  3b7014               cmp esi, dword ptr [eax + 0x14]
// 00683590  7502                 jne 0x683594
// 00683592  ffd3                 call ebx
// 00683594  d94624               fld dword ptr [esi + 0x24]
// 00683597  83c504               add ebp, 4
// 0068359a  d95dfc               fstp dword ptr [ebp - 4]
// 0068359d  85ff                 test edi, edi
// 0068359f  0f8508030000         jne 0x6838ad
// 006835a5  ffd3                 call ebx
// 006835a7  33c0                 xor eax, eax
// 006835a9  3b7014               cmp esi, dword ptr [eax + 0x14]
// 006835ac  7502                 jne 0x6835b0
// 006835ae  ffd3                 call ebx
// 006835b0  d94610               fld dword ptr [esi + 0x10]
// 006835b3  83c504               add ebp, 4
// 006835b6  d95dfc               fstp dword ptr [ebp - 4]
// 006835b9  85ff                 test edi, edi
// 006835bb  0f85f3020000         jne 0x6838b4
// 006835c1  ffd3                 call ebx
// 006835c3  33c0                 xor eax, eax
// 006835c5  3b7014               cmp esi, dword ptr [eax + 0x14]
// 006835c8  7502                 jne 0x6835cc
// 006835ca  ffd3                 call ebx
// 006835cc  d9460c               fld dword ptr [esi + 0xc]
// 006835cf  83c504               add ebp, 4
// 006835d2  d95dfc               fstp dword ptr [ebp - 4]
// 006835d5  d905b8c38100         fld dword ptr [0x81c3b8]
// 006835db  d95d00               fstp dword ptr [ebp]
// 006835de  85ff                 test edi, edi
// 006835e0  0f85d5020000         jne 0x6838bb
// 006835e6  ffd3                 call ebx
// 006835e8  33c0                 xor eax, eax
// 006835ea  3b7014               cmp esi, dword ptr [eax + 0x14]
// 006835ed  7502                 jne 0x6835f1
// 006835ef  ffd3                 call ebx
// 006835f1  8b5628               mov edx, dword ptr [esi + 0x28]
// 006835f4  895504               mov dword ptr [ebp + 4], edx
// 006835f7  83c508               add ebp, 8
// 006835fa  85ff                 test edi, edi
// 006835fc  0f85c0020000         jne 0x6838c2
// 00683602  ffd3                 call ebx
// 00683604  33c0                 xor eax, eax
// 00683606  3b7014               cmp esi, dword ptr [eax + 0x14]
// 00683609  7502                 jne 0x68360d
// 0068360b  ffd3                 call ebx
// 0068360d  d94620               fld dword ptr [esi + 0x20]
// 00683610  83c504               add ebp, 4
// 00683613  d95dfc               fstp dword ptr [ebp - 4]
// 00683616  85ff                 test edi, edi
// 00683618  0f85ab020000         jne 0x6838c9
// 0068361e  ffd3                 call ebx
// 00683620  33c0                 xor eax, eax
// 00683622  3b7014               cmp esi, dword ptr [eax + 0x14]
// 00683625  7502                 jne 0x683629
// 00683627  ffd3                 call ebx
// 00683629  d9461c               fld dword ptr [esi + 0x1c]
// 0068362c  83c504               add ebp, 4
// 0068362f  d95dfc               fstp dword ptr [ebp - 4]
// 00683632  85ff                 test edi, edi
// 00683634  0f8596020000         jne 0x6838d0
// 0068363a  ffd3                 call ebx
// 0068363c  33c0                 xor eax, eax
// 0068363e  3b7014               cmp esi, dword ptr [eax + 0x14]
// 00683641  7502                 jne 0x683645
// 00683643  ffd3                 call ebx
// 00683645  d94608               fld dword ptr [esi + 8]
// 00683648  83c504               add ebp, 4
// 0068364b  d95dfc               fstp dword ptr [ebp - 4]
// 0068364e  85ff                 test edi, edi
// 00683650  0f8581020000         jne 0x6838d7
// 00683656  ffd3                 call ebx
// 00683658  33c0                 xor eax, eax
// 0068365a  3b7014               cmp esi, dword ptr [eax + 0x14]
// 0068365d  7502                 jne 0x683661
// 0068365f  ffd3                 call ebx
// 00683661  d9460c               fld dword ptr [esi + 0xc]
// 00683664  83c504               add ebp, 4
// 00683667  d95dfc               fstp dword ptr [ebp - 4]
// 0068366a  d905b8c38100         fld dword ptr [0x81c3b8]
// 00683670  d95d00               fstp dword ptr [ebp]
// 00683673  85ff                 test edi, edi
// 00683675  0f8563020000         jne 0x6838de
// 0068367b  ffd3                 call ebx
// 0068367d  33c0                 xor eax, eax
// 0068367f  3b7014               cmp esi, dword ptr [eax + 0x14]
// 00683682  7502                 jne 0x683686
// 00683684  ffd3                 call ebx
// 00683686  8b4628               mov eax, dword ptr [esi + 0x28]
// 00683689  894504               mov dword ptr [ebp + 4], eax
// 0068368c  83c508               add ebp, 8
// 0068368f  85ff                 test edi, edi
// 00683691  0f854e020000         jne 0x6838e5
// 00683697  ffd3                 call ebx
// 00683699  33c0                 xor eax, eax
// 0068369b  3b7014               cmp esi, dword ptr [eax + 0x14]
// 0068369e  7502                 jne 0x6836a2
// 006836a0  ffd3                 call ebx
// 006836a2  d94618               fld dword ptr [esi + 0x18]
// 006836a5  83c504               add ebp, 4
// 006836a8  d95dfc               fstp dword ptr [ebp - 4]
// 006836ab  85ff                 test edi, edi
// 006836ad  0f8539020000         jne 0x6838ec
// 006836b3  ffd3                 call ebx
// 006836b5  33c0                 xor eax, eax
// 006836b7  3b7014               cmp esi, dword ptr [eax + 0x14]
// 006836ba  7502                 jne 0x6836be
// 006836bc  ffd3                 call ebx
// 006836be  d9461c               fld dword ptr [esi + 0x1c]
// 006836c1  83c504               add ebp, 4
// 006836c4  d95dfc               fstp dword ptr [ebp - 4]
// 006836c7  85ff                 test edi, edi
// 006836c9  0f8524020000         jne 0x6838f3
// 006836cf  ffd3                 call ebx
// 006836d1  33c0                 xor eax, eax
// 006836d3  3b7014               cmp esi, dword ptr [eax + 0x14]
// 006836d6  7502                 jne 0x6836da
// 006836d8  ffd3                 call ebx
// 006836da  d94608               fld dword ptr [esi + 8]
// 006836dd  83c504               add ebp, 4
// 006836e0  d95dfc               fstp dword ptr [ebp - 4]
// 006836e3  85ff                 test edi, edi
// 006836e5  0f850f020000         jne 0x6838fa
// 006836eb  ffd3                 call ebx
// 006836ed  33c0                 xor eax, eax
// 006836ef  3b7014               cmp esi, dword ptr [eax + 0x14]
// 006836f2  7502                 jne 0x6836f6
// 006836f4  ffd3                 call ebx
// 006836f6  d94614               fld dword ptr [esi + 0x14]
// 006836f9  83c504               add ebp, 4
// 006836fc  d95dfc               fstp dword ptr [ebp - 4]
// 006836ff  d905b8c38100         fld dword ptr [0x81c3b8]
// 00683705  d95d00               fstp dword ptr [ebp]
// 00683708  85ff                 test edi, edi
// 0068370a  0f85f1010000         jne 0x683901
// 00683710  ffd3                 call ebx
// 00683712  33c0                 xor eax, eax
// 00683714  3b7014               cmp esi, dword ptr [eax + 0x14]
// 00683717  7502                 jne 0x68371b
// 00683719  ffd3                 call ebx
// 0068371b  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 0068371e  894d04               mov dword ptr [ebp + 4], ecx
// 00683721  83c508               add ebp, 8
// 00683724  85ff                 test edi, edi
// 00683726  0f85dc010000         jne 0x683908
// 0068372c  ffd3                 call ebx
// 0068372e  33c0                 xor eax, eax
// 00683730  3b7014               cmp esi, dword ptr [eax + 0x14]
// 00683733  7502                 jne 0x683737
// 00683735  ffd3                 call ebx
// 00683737  d94618               fld dword ptr [esi + 0x18]
// 0068373a  83c504               add ebp, 4
// 0068373d  d95dfc               fstp dword ptr [ebp - 4]
// 00683740  85ff                 test edi, edi
// 00683742  0f85c7010000         jne 0x68390f
// 00683748  ffd3                 call ebx
// 0068374a  33c0                 xor eax, eax
// 0068374c  3b7014               cmp esi, dword ptr [eax + 0x14]
// 0068374f  7502                 jne 0x683753
// 00683751  ffd3                 call ebx
// 00683753  d94624               fld dword ptr [esi + 0x24]
// 00683756  83c504               add ebp, 4
// 00683759  d95dfc               fstp dword ptr [ebp - 4]
// 0068375c  85ff                 test edi, edi
// 0068375e  0f85b2010000         jne 0x683916
// 00683764  ffd3                 call ebx
// 00683766  33c0                 xor eax, eax
// 00683768  3b7014               cmp esi, dword ptr [eax + 0x14]
// 0068376b  7502                 jne 0x68376f
// 0068376d  ffd3                 call ebx
// 0068376f  d94610               fld dword ptr [esi + 0x10]
// 00683772  83c504               add ebp, 4
// 00683775  d95dfc               fstp dword ptr [ebp - 4]
// 00683778  85ff                 test edi, edi
// 0068377a  0f859d010000         jne 0x68391d
// 00683780  ffd3                 call ebx
// 00683782  33c0                 xor eax, eax
// 00683784  3b7014               cmp esi, dword ptr [eax + 0x14]
// 00683787  7502                 jne 0x68378b
// 00683789  ffd3                 call ebx
// 0068378b  d9460c               fld dword ptr [esi + 0xc]
// 0068378e  83c504               add ebp, 4
// 00683791  d95dfc               fstp dword ptr [ebp - 4]
// 00683794  d905b8c38100         fld dword ptr [0x81c3b8]
// 0068379a  d95d00               fstp dword ptr [ebp]
// 0068379d  85ff                 test edi, edi
// 0068379f  0f857f010000         jne 0x683924
// 006837a5  ffd3                 call ebx
// 006837a7  33c0                 xor eax, eax
// 006837a9  3b7014               cmp esi, dword ptr [eax + 0x14]
// 006837ac  7502                 jne 0x6837b0
// 006837ae  ffd3                 call ebx
// 006837b0  8b5628               mov edx, dword ptr [esi + 0x28]
// 006837b3  895504               mov dword ptr [ebp + 4], edx
// 006837b6  83c508               add ebp, 8
// 006837b9  85ff                 test edi, edi
// 006837bb  0f856a010000         jne 0x68392b
// 006837c1  ffd3                 call ebx
// 006837c3  33c0                 xor eax, eax
// 006837c5  3b7014               cmp esi, dword ptr [eax + 0x14]
// 006837c8  7502                 jne 0x6837cc
// 006837ca  ffd3                 call ebx
// 006837cc  d94620               fld dword ptr [esi + 0x20]
// 006837cf  83c504               add ebp, 4
// 006837d2  d95dfc               fstp dword ptr [ebp - 4]
// 006837d5  85ff                 test edi, edi
// 006837d7  0f8555010000         jne 0x683932
// 006837dd  ffd3                 call ebx
// 006837df  33c0                 xor eax, eax
// 006837e1  3b7014               cmp esi, dword ptr [eax + 0x14]
// 006837e4  7502                 jne 0x6837e8
// 006837e6  ffd3                 call ebx
// 006837e8  d9461c               fld dword ptr [esi + 0x1c]
// 006837eb  83c504               add ebp, 4
// 006837ee  d95dfc               fstp dword ptr [ebp - 4]
// 006837f1  85ff                 test edi, edi
// 006837f3  0f8540010000         jne 0x683939
// 006837f9  ffd3                 call ebx
// 006837fb  33c0                 xor eax, eax
// 006837fd  3b7014               cmp esi, dword ptr [eax + 0x14]
// 00683800  7502                 jne 0x683804
// 00683802  ffd3                 call ebx
// 00683804  d94610               fld dword ptr [esi + 0x10]
// 00683807  83c504               add ebp, 4
// 0068380a  d95dfc               fstp dword ptr [ebp - 4]
// 0068380d  85ff                 test edi, edi
// 0068380f  0f852b010000         jne 0x683940
// 00683815  ffd3                 call ebx
// 00683817  33c0                 xor eax, eax
// 00683819  3b7014               cmp esi, dword ptr [eax + 0x14]
// 0068381c  7502                 jne 0x683820
// 0068381e  ffd3                 call ebx
// 00683820  d94614               fld dword ptr [esi + 0x14]
// 00683823  83c504               add ebp, 4
// 00683826  d95dfc               fstp dword ptr [ebp - 4]
// 00683829  d905b8c38100         fld dword ptr [0x81c3b8]
// 0068382f  d95d00               fstp dword ptr [ebp]
// 00683832  85ff                 test edi, edi
// 00683834  0f850d010000         jne 0x683947
// 0068383a  ffd3                 call ebx
// 0068383c  33c0                 xor eax, eax
// 0068383e  3b7014               cmp esi, dword ptr [eax + 0x14]
// 00683841  7502                 jne 0x683845
// 00683843  ffd3                 call ebx
// 00683845  8b4628               mov eax, dword ptr [esi + 0x28]
// 00683848  894504               mov dword ptr [ebp + 4], eax
// 0068384b  83c508               add ebp, 8
// 0068384e  85ff                 test edi, edi
// 00683850  0f85f8000000         jne 0x68394e
// 00683856  ffd3                 call ebx
// 00683858  33c0                 xor eax, eax
// 0068385a  3b7014               cmp esi, dword ptr [eax + 0x14]
// 0068385d  7502                 jne 0x683861
// 0068385f  ffd3                 call ebx
// 00683861  d94620               fld dword ptr [esi + 0x20]
// 00683864  83c504               add ebp, 4
// 00683867  d95dfc               fstp dword ptr [ebp - 4]
// 0068386a  85ff                 test edi, edi
// 0068386c  0f85e3000000         jne 0x683955
// 00683872  ffd3                 call ebx
// 00683874  33c0                 xor eax, eax
// 00683876  3b7014               cmp esi, dword ptr [eax + 0x14]
// 00683879  7502                 jne 0x68387d
// 0068387b  ffd3                 call ebx
// 0068387d  d94624               fld dword ptr [esi + 0x24]
// 00683880  b806000000           mov eax, 6
// 00683885  e9ae060000           jmp 0x683f38
// 0068388a  8b07                 mov eax, dword ptr [edi]
// 0068388c  e97ffcffff           jmp 0x683510
// 00683891  8b07                 mov eax, dword ptr [edi]
// 00683893  e998fcffff           jmp 0x683530
// 00683898  8b07                 mov eax, dword ptr [edi]
// 0068389a  e9b6fcffff           jmp 0x683555
// 0068389f  8b07                 mov eax, dword ptr [edi]
// 006838a1  e9cbfcffff           jmp 0x683571
// 006838a6  8b07                 mov eax, dword ptr [edi]
// 006838a8  e9e0fcffff           jmp 0x68358d
// 006838ad  8b07                 mov eax, dword ptr [edi]
// 006838af  e9f5fcffff           jmp 0x6835a9
// 006838b4  8b07                 mov eax, dword ptr [edi]
// 006838b6  e90afdffff           jmp 0x6835c5
// 006838bb  8b07                 mov eax, dword ptr [edi]
// 006838bd  e928fdffff           jmp 0x6835ea
// 006838c2  8b07                 mov eax, dword ptr [edi]
// 006838c4  e93dfdffff           jmp 0x683606
// 006838c9  8b07                 mov eax, dword ptr [edi]
// 006838cb  e952fdffff           jmp 0x683622
// 006838d0  8b07                 mov eax, dword ptr [edi]
// 006838d2  e967fdffff           jmp 0x68363e
// 006838d7  8b07                 mov eax, dword ptr [edi]
// 006838d9  e97cfdffff           jmp 0x68365a
// 006838de  8b07                 mov eax, dword ptr [edi]
// 006838e0  e99afdffff           jmp 0x68367f
// 006838e5  8b07                 mov eax, dword ptr [edi]
// 006838e7  e9affdffff           jmp 0x68369b
// 006838ec  8b07                 mov eax, dword ptr [edi]
// 006838ee  e9c4fdffff           jmp 0x6836b7
// 006838f3  8b07                 mov eax, dword ptr [edi]
// 006838f5  e9d9fdffff           jmp 0x6836d3
// 006838fa  8b07                 mov eax, dword ptr [edi]
// 006838fc  e9eefdffff           jmp 0x6836ef
// 00683901  8b07                 mov eax, dword ptr [edi]
// 00683903  e90cfeffff           jmp 0x683714
// 00683908  8b07                 mov eax, dword ptr [edi]
// 0068390a  e921feffff           jmp 0x683730
// 0068390f  8b07                 mov eax, dword ptr [edi]
// 00683911  e936feffff           jmp 0x68374c
// 00683916  8b07                 mov eax, dword ptr [edi]
// 00683918  e94bfeffff           jmp 0x683768
// 0068391d  8b07                 mov eax, dword ptr [edi]
// 0068391f  e960feffff           jmp 0x683784
// 00683924  8b07                 mov eax, dword ptr [edi]
// 00683926  e97efeffff           jmp 0x6837a9
// 0068392b  8b07                 mov eax, dword ptr [edi]
// 0068392d  e993feffff           jmp 0x6837c5
// 00683932  8b07                 mov eax, dword ptr [edi]
// 00683934  e9a8feffff           jmp 0x6837e1
// 00683939  8b07                 mov eax, dword ptr [edi]
// 0068393b  e9bdfeffff           jmp 0x6837fd
// 00683940  8b07                 mov eax, dword ptr [edi]
// 00683942  e9d2feffff           jmp 0x683819
// 00683947  8b07                 mov eax, dword ptr [edi]
// 00683949  e9f0feffff           jmp 0x68383e
// 0068394e  8b07                 mov eax, dword ptr [edi]
// 00683950  e905ffffff           jmp 0x68385a
// 00683955  8b07                 mov eax, dword ptr [edi]
// 00683957  e91affffff           jmp 0x683876
// 0068395c  85ff                 test edi, edi
// 0068395e  0f857d040000         jne 0x683de1
// 00683964  ffd3                 call ebx
// 00683966  33c0                 xor eax, eax
// 00683968  3b7014               cmp esi, dword ptr [eax + 0x14]
// 0068396b  7502                 jne 0x68396f
// 0068396d  ffd3                 call ebx
// 0068396f  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 00683973  d94608               fld dword ptr [esi + 8]
// 00683976  d95d00               fstp dword ptr [ebp]
// 00683979  83c504               add ebp, 4
// 0068397c  85ff                 test edi, edi
// 0068397e  0f8564040000         jne 0x683de8
// 00683984  ffd3                 call ebx
// 00683986  33c0                 xor eax, eax
// 00683988  3b7014               cmp esi, dword ptr [eax + 0x14]
// 0068398b  7502                 jne 0x68398f
// 0068398d  ffd3                 call ebx
// 0068398f  d9460c               fld dword ptr [esi + 0xc]
// 00683992  83c504               add ebp, 4
// 00683995  d95dfc               fstp dword ptr [ebp - 4]
// 00683998  d905b8c38100         fld dword ptr [0x81c3b8]
// 0068399e  d95d00               fstp dword ptr [ebp]
// 006839a1  85ff                 test edi, edi
// 006839a3  0f8546040000         jne 0x683def
// 006839a9  ffd3                 call ebx
// 006839ab  33c0                 xor eax, eax
// 006839ad  3b7014               cmp esi, dword ptr [eax + 0x14]
// 006839b0  7502                 jne 0x6839b4
// 006839b2  ffd3                 call ebx
// 006839b4  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 006839b7  894d04               mov dword ptr [ebp + 4], ecx
// 006839ba  83c508               add ebp, 8
// 006839bd  85ff                 test edi, edi
// 006839bf  0f8531040000         jne 0x683df6
// 006839c5  ffd3                 call ebx
// 006839c7  33c0                 xor eax, eax
// 006839c9  3b7014               cmp esi, dword ptr [eax + 0x14]
// 006839cc  7502                 jne 0x6839d0
// 006839ce  ffd3                 call ebx
// 006839d0  d94618               fld dword ptr [esi + 0x18]
// 006839d3  83c504               add ebp, 4
// 006839d6  d95dfc               fstp dword ptr [ebp - 4]
// 006839d9  85ff                 test edi, edi
// 006839db  0f851c040000         jne 0x683dfd
// 006839e1  ffd3                 call ebx
// 006839e3  33c0                 xor eax, eax
// 006839e5  3b7014               cmp esi, dword ptr [eax + 0x14]
// 006839e8  7502                 jne 0x6839ec
// 006839ea  ffd3                 call ebx
// 006839ec  837c243400           cmp dword ptr [esp + 0x34], 0
// 006839f1  d9461c               fld dword ptr [esi + 0x1c]
// 006839f4  d95d00               fstp dword ptr [ebp]
// 006839f7  0f85d9040000         jne 0x683ed6
// 006839fd  85ff                 test edi, edi
// 006839ff  0f85ff030000         jne 0x683e04
// 00683a05  ffd3                 call ebx
// 00683a07  33c0                 xor eax, eax
// 00683a09  3b7014               cmp esi, dword ptr [eax + 0x14]
// 00683a0c  7502                 jne 0x683a10
// 00683a0e  ffd3                 call ebx
// 00683a10  d94610               fld dword ptr [esi + 0x10]
// 00683a13  83c508               add ebp, 8
// 00683a16  d95dfc               fstp dword ptr [ebp - 4]
// 00683a19  85ff                 test edi, edi
// 00683a1b  0f85ea030000         jne 0x683e0b
// 00683a21  ffd3                 call ebx
// 00683a23  33c0                 xor eax, eax
// 00683a25  3b7014               cmp esi, dword ptr [eax + 0x14]
// 00683a28  7502                 jne 0x683a2c
// 00683a2a  ffd3                 call ebx
// 00683a2c  d9460c               fld dword ptr [esi + 0xc]
// 00683a2f  83c504               add ebp, 4
// 00683a32  d95dfc               fstp dword ptr [ebp - 4]
// 00683a35  d905b8c38100         fld dword ptr [0x81c3b8]
// 00683a3b  d95d00               fstp dword ptr [ebp]
// 00683a3e  85ff                 test edi, edi
// 00683a40  0f85cc030000         jne 0x683e12
// 00683a46  ffd3                 call ebx
// 00683a48  33c0                 xor eax, eax
// 00683a4a  3b7014               cmp esi, dword ptr [eax + 0x14]
// 00683a4d  7502                 jne 0x683a51
// 00683a4f  ffd3                 call ebx
// 00683a51  8b5628               mov edx, dword ptr [esi + 0x28]
// 00683a54  895504               mov dword ptr [ebp + 4], edx
// 00683a57  83c508               add ebp, 8
// 00683a5a  85ff                 test edi, edi
// 00683a5c  0f85b7030000         jne 0x683e19
// 00683a62  ffd3                 call ebx
// 00683a64  33c0                 xor eax, eax
// 00683a66  3b7014               cmp esi, dword ptr [eax + 0x14]
// 00683a69  7502                 jne 0x683a6d
// 00683a6b  ffd3                 call ebx
// 00683a6d  d94618               fld dword ptr [esi + 0x18]
// 00683a70  83c504               add ebp, 4
// 00683a73  d95dfc               fstp dword ptr [ebp - 4]
// 00683a76  85ff                 test edi, edi
// 00683a78  0f85a2030000         jne 0x683e20
// 00683a7e  ffd3                 call ebx
// 00683a80  33c0                 xor eax, eax
// 00683a82  3b7014               cmp esi, dword ptr [eax + 0x14]
// 00683a85  7502                 jne 0x683a89
// 00683a87  ffd3                 call ebx
// 00683a89  d9461c               fld dword ptr [esi + 0x1c]
// 00683a8c  83c504               add ebp, 4
// 00683a8f  d95dfc               fstp dword ptr [ebp - 4]
// 00683a92  85ff                 test edi, edi
// 00683a94  0f858d030000         jne 0x683e27
// 00683a9a  ffd3                 call ebx
// 00683a9c  33c0                 xor eax, eax
// 00683a9e  3b7014               cmp esi, dword ptr [eax + 0x14]
// 00683aa1  7502                 jne 0x683aa5
// 00683aa3  ffd3                 call ebx
// 00683aa5  d94610               fld dword ptr [esi + 0x10]
// 00683aa8  83c504               add ebp, 4
// 00683aab  d95dfc               fstp dword ptr [ebp - 4]
// 00683aae  85ff                 test edi, edi
// 00683ab0  0f8578030000         jne 0x683e2e
// 00683ab6  ffd3                 call ebx
// 00683ab8  33c0                 xor eax, eax
// 00683aba  3b7014               cmp esi, dword ptr [eax + 0x14]
// 00683abd  7502                 jne 0x683ac1
// 00683abf  ffd3                 call ebx
// 00683ac1  d9460c               fld dword ptr [esi + 0xc]
// 00683ac4  83c504               add ebp, 4
// 00683ac7  d95dfc               fstp dword ptr [ebp - 4]
// 00683aca  d905b8c38100         fld dword ptr [0x81c3b8]
// 00683ad0  d95d00               fstp dword ptr [ebp]
// 00683ad3  85ff                 test edi, edi
// 00683ad5  0f855a030000         jne 0x683e35
// 00683adb  ffd3                 call ebx
// 00683add  33c0                 xor eax, eax
// 00683adf  3b7014               cmp esi, dword ptr [eax + 0x14]
// 00683ae2  7502                 jne 0x683ae6
// 00683ae4  ffd3                 call ebx
// 00683ae6  8b4628               mov eax, dword ptr [esi + 0x28]
// 00683ae9  894504               mov dword ptr [ebp + 4], eax
// 00683aec  83c508               add ebp, 8
// 00683aef  85ff                 test edi, edi
// 00683af1  0f8545030000         jne 0x683e3c
// 00683af7  ffd3                 call ebx
// 00683af9  33c0                 xor eax, eax
// 00683afb  3b7014               cmp esi, dword ptr [eax + 0x14]
// 00683afe  7502                 jne 0x683b02
// 00683b00  ffd3                 call ebx
// 00683b02  d94618               fld dword ptr [esi + 0x18]
// 00683b05  83c504               add ebp, 4
// 00683b08  d95dfc               fstp dword ptr [ebp - 4]
// 00683b0b  85ff                 test edi, edi
// 00683b0d  0f8530030000         jne 0x683e43
// 00683b13  ffd3                 call ebx
// 00683b15  33c0                 xor eax, eax
// 00683b17  3b7014               cmp esi, dword ptr [eax + 0x14]
// 00683b1a  7502                 jne 0x683b1e
// 00683b1c  ffd3                 call ebx
// 00683b1e  d9461c               fld dword ptr [esi + 0x1c]
// 00683b21  83c504               add ebp, 4
// 00683b24  d95dfc               fstp dword ptr [ebp - 4]
// 00683b27  85ff                 test edi, edi
// 00683b29  0f851b030000         jne 0x683e4a
// 00683b2f  ffd3                 call ebx
// 00683b31  33c0                 xor eax, eax
// 00683b33  3b7014               cmp esi, dword ptr [eax + 0x14]
// 00683b36  7502                 jne 0x683b3a
// 00683b38  ffd3                 call ebx
// 00683b3a  d94610               fld dword ptr [esi + 0x10]
// 00683b3d  83c504               add ebp, 4
// 00683b40  d95dfc               fstp dword ptr [ebp - 4]
// 00683b43  85ff                 test edi, edi
// 00683b45  0f8506030000         jne 0x683e51
// 00683b4b  ffd3                 call ebx
// 00683b4d  33c0                 xor eax, eax
// 00683b4f  3b7014               cmp esi, dword ptr [eax + 0x14]
// 00683b52  7502                 jne 0x683b56
// 00683b54  ffd3                 call ebx
// 00683b56  d94614               fld dword ptr [esi + 0x14]
// 00683b59  83c504               add ebp, 4
// 00683b5c  d95dfc               fstp dword ptr [ebp - 4]
// 00683b5f  d905b8c38100         fld dword ptr [0x81c3b8]
// 00683b65  d95d00               fstp dword ptr [ebp]
// 00683b68  85ff                 test edi, edi
// 00683b6a  0f85e8020000         jne 0x683e58
// 00683b70  ffd3                 call ebx
// 00683b72  33c0                 xor eax, eax
// 00683b74  3b7014               cmp esi, dword ptr [eax + 0x14]
// 00683b77  7502                 jne 0x683b7b
// 00683b79  ffd3                 call ebx
// 00683b7b  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 00683b7e  894d04               mov dword ptr [ebp + 4], ecx
// 00683b81  83c508               add ebp, 8
// 00683b84  85ff                 test edi, edi
// 00683b86  0f85d3020000         jne 0x683e5f
// 00683b8c  ffd3                 call ebx
// 00683b8e  33c0                 xor eax, eax
// 00683b90  3b7014               cmp esi, dword ptr [eax + 0x14]
// 00683b93  7502                 jne 0x683b97
// 00683b95  ffd3                 call ebx
// 00683b97  d94618               fld dword ptr [esi + 0x18]
// 00683b9a  83c504               add ebp, 4
// 00683b9d  d95dfc               fstp dword ptr [ebp - 4]
// 00683ba0  85ff                 test edi, edi
// 00683ba2  0f85be020000         jne 0x683e66
// 00683ba8  ffd3                 call ebx
// 00683baa  33c0                 xor eax, eax
// 00683bac  3b7014               cmp esi, dword ptr [eax + 0x14]
// 00683baf  7502                 jne 0x683bb3
// 00683bb1  ffd3                 call ebx
// 00683bb3  d9461c               fld dword ptr [esi + 0x1c]
// 00683bb6  83c504               add ebp, 4
// 00683bb9  d95dfc               fstp dword ptr [ebp - 4]
// 00683bbc  85ff                 test edi, edi
// 00683bbe  0f85a9020000         jne 0x683e6d
// 00683bc4  ffd3                 call ebx
// 00683bc6  33c0                 xor eax, eax
// 00683bc8  3b7014               cmp esi, dword ptr [eax + 0x14]
// 00683bcb  7502                 jne 0x683bcf
// 00683bcd  ffd3                 call ebx
// 00683bcf  d94610               fld dword ptr [esi + 0x10]
// 00683bd2  83c504               add ebp, 4
// 00683bd5  d95dfc               fstp dword ptr [ebp - 4]
// 00683bd8  85ff                 test edi, edi
// 00683bda  0f8594020000         jne 0x683e74
// 00683be0  ffd3                 call ebx
// 00683be2  33c0                 xor eax, eax
// 00683be4  3b7014               cmp esi, dword ptr [eax + 0x14]
// 00683be7  7502                 jne 0x683beb
// 00683be9  ffd3                 call ebx
// 00683beb  d94614               fld dword ptr [esi + 0x14]
// 00683bee  83c504               add ebp, 4
// 00683bf1  d95dfc               fstp dword ptr [ebp - 4]
// 00683bf4  d905b8c38100         fld dword ptr [0x81c3b8]
// 00683bfa  d95d00               fstp dword ptr [ebp]
// 00683bfd  85ff                 test edi, edi
// 00683bff  0f8576020000         jne 0x683e7b
// 00683c05  ffd3                 call ebx
// 00683c07  33c0                 xor eax, eax
// 00683c09  3b7014               cmp esi, dword ptr [eax + 0x14]
// 00683c0c  7502                 jne 0x683c10
// 00683c0e  ffd3                 call ebx
// 00683c10  8b5628               mov edx, dword ptr [esi + 0x28]
// 00683c13  895504               mov dword ptr [ebp + 4], edx
// 00683c16  83c508               add ebp, 8
// 00683c19  85ff                 test edi, edi
// 00683c1b  0f8561020000         jne 0x683e82
// 00683c21  ffd3                 call ebx
// 00683c23  33c0                 xor eax, eax
// 00683c25  3b7014               cmp esi, dword ptr [eax + 0x14]
// 00683c28  7502                 jne 0x683c2c
// 00683c2a  ffd3                 call ebx
// 00683c2c  d94618               fld dword ptr [esi + 0x18]
// 00683c2f  83c504               add ebp, 4
// 00683c32  d95dfc               fstp dword ptr [ebp - 4]
// 00683c35  85ff                 test edi, edi
// 00683c37  0f854c020000         jne 0x683e89
// 00683c3d  ffd3                 call ebx
// 00683c3f  33c0                 xor eax, eax
// 00683c41  3b7014               cmp esi, dword ptr [eax + 0x14]
// 00683c44  7502                 jne 0x683c48
// 00683c46  ffd3                 call ebx
// 00683c48  d9461c               fld dword ptr [esi + 0x1c]
// 00683c4b  83c504               add ebp, 4
// 00683c4e  d95dfc               fstp dword ptr [ebp - 4]
// 00683c51  85ff                 test edi, edi
// 00683c53  0f8537020000         jne 0x683e90
// 00683c59  ffd3                 call ebx
// 00683c5b  33c0                 xor eax, eax
// 00683c5d  3b7014               cmp esi, dword ptr [eax + 0x14]
// 00683c60  7502                 jne 0x683c64
// 00683c62  ffd3                 call ebx
// 00683c64  d94608               fld dword ptr [esi + 8]
// 00683c67  83c504               add ebp, 4
// 00683c6a  d95dfc               fstp dword ptr [ebp - 4]
// 00683c6d  85ff                 test edi, edi
// 00683c6f  0f8522020000         jne 0x683e97
// 00683c75  ffd3                 call ebx
// 00683c77  33c0                 xor eax, eax
// 00683c79  3b7014               cmp esi, dword ptr [eax + 0x14]
// 00683c7c  7502                 jne 0x683c80
// 00683c7e  ffd3                 call ebx
// 00683c80  d94614               fld dword ptr [esi + 0x14]
// 00683c83  83c504               add ebp, 4
// 00683c86  d95dfc               fstp dword ptr [ebp - 4]
// 00683c89  d905b8c38100         fld dword ptr [0x81c3b8]
// 00683c8f  d95d00               fstp dword ptr [ebp]
// 00683c92  85ff                 test edi, edi
// 00683c94  0f8504020000         jne 0x683e9e
// 00683c9a  ffd3                 call ebx
// 00683c9c  33c0                 xor eax, eax
// 00683c9e  3b7014               cmp esi, dword ptr [eax + 0x14]
// 00683ca1  7502                 jne 0x683ca5
// 00683ca3  ffd3                 call ebx
// 00683ca5  8b4628               mov eax, dword ptr [esi + 0x28]
// 00683ca8  894504               mov dword ptr [ebp + 4], eax
// 00683cab  83c508               add ebp, 8
// 00683cae  85ff                 test edi, edi
// 00683cb0  0f85ef010000         jne 0x683ea5
// 00683cb6  ffd3                 call ebx
// 00683cb8  33c0                 xor eax, eax
// 00683cba  3b7014               cmp esi, dword ptr [eax + 0x14]
// 00683cbd  7502                 jne 0x683cc1
// 00683cbf  ffd3                 call ebx
// 00683cc1  d94618               fld dword ptr [esi + 0x18]
// 00683cc4  83c504               add ebp, 4
// 00683cc7  d95dfc               fstp dword ptr [ebp - 4]
// 00683cca  85ff                 test edi, edi
// 00683ccc  0f85da010000         jne 0x683eac
// 00683cd2  ffd3                 call ebx
// 00683cd4  33c0                 xor eax, eax
// 00683cd6  3b7014               cmp esi, dword ptr [eax + 0x14]
// 00683cd9  7502                 jne 0x683cdd
// 00683cdb  ffd3                 call ebx
// 00683cdd  d9461c               fld dword ptr [esi + 0x1c]
// 00683ce0  83c504               add ebp, 4
// 00683ce3  d95dfc               fstp dword ptr [ebp - 4]
// 00683ce6  85ff                 test edi, edi
// 00683ce8  0f85c5010000         jne 0x683eb3
// 00683cee  ffd3                 call ebx
// 00683cf0  33c0                 xor eax, eax
// 00683cf2  3b7014               cmp esi, dword ptr [eax + 0x14]
// 00683cf5  7502                 jne 0x683cf9
// 00683cf7  ffd3                 call ebx
// 00683cf9  d94608               fld dword ptr [esi + 8]
// 00683cfc  83c504               add ebp, 4
// 00683cff  d95dfc               fstp dword ptr [ebp - 4]
// 00683d02  85ff                 test edi, edi
// 00683d04  0f85b0010000         jne 0x683eba
// 00683d0a  ffd3                 call ebx
// 00683d0c  33c0                 xor eax, eax
// 00683d0e  3b7014               cmp esi, dword ptr [eax + 0x14]
// 00683d11  7502                 jne 0x683d15
// 00683d13  ffd3                 call ebx
// 00683d15  d94614               fld dword ptr [esi + 0x14]
// 00683d18  83c504               add ebp, 4
// 00683d1b  d95dfc               fstp dword ptr [ebp - 4]
// 00683d1e  d905b8c38100         fld dword ptr [0x81c3b8]
// 00683d24  d95d00               fstp dword ptr [ebp]
// 00683d27  85ff                 test edi, edi
// 00683d29  0f8592010000         jne 0x683ec1
// 00683d2f  ffd3                 call ebx
// 00683d31  33c0                 xor eax, eax
// 00683d33  3b7014               cmp esi, dword ptr [eax + 0x14]
// 00683d36  7502                 jne 0x683d3a
// 00683d38  ffd3                 call ebx
// 00683d3a  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 00683d3d  894d04               mov dword ptr [ebp + 4], ecx
// 00683d40  83c508               add ebp, 8
// 00683d43  85ff                 test edi, edi
// 00683d45  0f857d010000         jne 0x683ec8
// 00683d4b  ffd3                 call ebx
// 00683d4d  33c0                 xor eax, eax
// 00683d4f  3b7014               cmp esi, dword ptr [eax + 0x14]
// 00683d52  7502                 jne 0x683d56
// 00683d54  ffd3                 call ebx
// 00683d56  d94618               fld dword ptr [esi + 0x18]
// 00683d59  83c504               add ebp, 4
// 00683d5c  d95dfc               fstp dword ptr [ebp - 4]
// 00683d5f  85ff                 test edi, edi
// 00683d61  0f8568010000         jne 0x683ecf
// 00683d67  ffd3                 call ebx
// 00683d69  33c0                 xor eax, eax
// 00683d6b  3b7014               cmp esi, dword ptr [eax + 0x14]
// 00683d6e  7502                 jne 0x683d72
// 00683d70  ffd3                 call ebx
// 00683d72  d9461c               fld dword ptr [esi + 0x1c]
// 00683d75  8d4c2418             lea ecx, [esp + 0x18]
// 00683d79  d95d00               fstp dword ptr [ebp]
// 00683d7c  83c504               add ebp, 4
// 00683d7f  e86c6bdaff           call 0x42a8f0
// 00683d84  d900                 fld dword ptr [eax]
// 00683d86  d95d00               fstp dword ptr [ebp]
// 00683d89  8d4c2418             lea ecx, [esp + 0x18]
// 00683d8d  83c504               add ebp, 4
// 00683d90  e85b6bdaff           call 0x42a8f0
// 00683d95  d94004               fld dword ptr [eax + 4]
// 00683d98  d95d00               fstp dword ptr [ebp]
// 00683d9b  83c504               add ebp, 4
// 00683d9e  d905b8c38100         fld dword ptr [0x81c3b8]
// 00683da4  8d4c2418             lea ecx, [esp + 0x18]
// 00683da8  d95d00               fstp dword ptr [ebp]
// 00683dab  e8406bdaff           call 0x42a8f0
// 00683db0  8b5020               mov edx, dword ptr [eax + 0x20]
// 00683db3  895504               mov dword ptr [ebp + 4], edx
// 00683db6  8d4c2418             lea ecx, [esp + 0x18]
// 00683dba  83c508               add ebp, 8
// 00683dbd  e82e6bdaff           call 0x42a8f0
// 00683dc2  d94010               fld dword ptr [eax + 0x10]
// 00683dc5  d95d00               fstp dword ptr [ebp]
// 00683dc8  8d4c2418             lea ecx, [esp + 0x18]
// 00683dcc  83c504               add ebp, 4
// 00683dcf  e81c6bdaff           call 0x42a8f0
// 00683dd4  d94014               fld dword ptr [eax + 0x14]
// 00683dd7  b808000000           mov eax, 8
// 00683ddc  e957010000           jmp 0x683f38
// 00683de1  8b07                 mov eax, dword ptr [edi]
// 00683de3  e980fbffff           jmp 0x683968
// 00683de8  8b07                 mov eax, dword ptr [edi]
// 00683dea  e999fbffff           jmp 0x683988
// 00683def  8b07                 mov eax, dword ptr [edi]
// 00683df1  e9b7fbffff           jmp 0x6839ad
// 00683df6  8b07                 mov eax, dword ptr [edi]
// 00683df8  e9ccfbffff           jmp 0x6839c9
// 00683dfd  8b07                 mov eax, dword ptr [edi]
// 00683dff  e9e1fbffff           jmp 0x6839e5
// 00683e04  8b07                 mov eax, dword ptr [edi]
// 00683e06  e9fefbffff           jmp 0x683a09
// 00683e0b  8b07                 mov eax, dword ptr [edi]
// 00683e0d  e913fcffff           jmp 0x683a25
// 00683e12  8b07                 mov eax, dword ptr [edi]
// 00683e14  e931fcffff           jmp 0x683a4a
// 00683e19  8b07                 mov eax, dword ptr [edi]
// 00683e1b  e946fcffff           jmp 0x683a66
// 00683e20  8b07                 mov eax, dword ptr [edi]
// 00683e22  e95bfcffff           jmp 0x683a82
// 00683e27  8b07                 mov eax, dword ptr [edi]
// 00683e29  e970fcffff           jmp 0x683a9e
// 00683e2e  8b07                 mov eax, dword ptr [edi]
// 00683e30  e985fcffff           jmp 0x683aba
// 00683e35  8b07                 mov eax, dword ptr [edi]
// 00683e37  e9a3fcffff           jmp 0x683adf
// 00683e3c  8b07                 mov eax, dword ptr [edi]
// 00683e3e  e9b8fcffff           jmp 0x683afb
// 00683e43  8b07                 mov eax, dword ptr [edi]
// 00683e45  e9cdfcffff           jmp 0x683b17
// 00683e4a  8b07                 mov eax, dword ptr [edi]
// 00683e4c  e9e2fcffff           jmp 0x683b33
// 00683e51  8b07                 mov eax, dword ptr [edi]
// 00683e53  e9f7fcffff           jmp 0x683b4f
// 00683e58  8b07                 mov eax, dword ptr [edi]
// 00683e5a  e915fdffff           jmp 0x683b74
// 00683e5f  8b07                 mov eax, dword ptr [edi]
// 00683e61  e92afdffff           jmp 0x683b90
// 00683e66  8b07                 mov eax, dword ptr [edi]
// 00683e68  e93ffdffff           jmp 0x683bac
// 00683e6d  8b07                 mov eax, dword ptr [edi]
// 00683e6f  e954fdffff           jmp 0x683bc8
// 00683e74  8b07                 mov eax, dword ptr [edi]
// 00683e76  e969fdffff           jmp 0x683be4
// 00683e7b  8b07                 mov eax, dword ptr [edi]
// 00683e7d  e987fdffff           jmp 0x683c09
// 00683e82  8b07                 mov eax, dword ptr [edi]
// 00683e84  e99cfdffff           jmp 0x683c25
// 00683e89  8b07                 mov eax, dword ptr [edi]
// 00683e8b  e9b1fdffff           jmp 0x683c41
// 00683e90  8b07                 mov eax, dword ptr [edi]
// 00683e92  e9c6fdffff           jmp 0x683c5d
// 00683e97  8b07                 mov eax, dword ptr [edi]
// 00683e99  e9dbfdffff           jmp 0x683c79
// 00683e9e  8b07                 mov eax, dword ptr [edi]
// 00683ea0  e9f9fdffff           jmp 0x683c9e
// 00683ea5  8b07                 mov eax, dword ptr [edi]
// 00683ea7  e90efeffff           jmp 0x683cba
// 00683eac  8b07                 mov eax, dword ptr [edi]
// 00683eae  e923feffff           jmp 0x683cd6
// 00683eb3  8b07                 mov eax, dword ptr [edi]
// 00683eb5  e938feffff           jmp 0x683cf2
// 00683eba  8b07                 mov eax, dword ptr [edi]
// 00683ebc  e94dfeffff           jmp 0x683d0e
// 00683ec1  8b07                 mov eax, dword ptr [edi]
// 00683ec3  e96bfeffff           jmp 0x683d33
// 00683ec8  8b07                 mov eax, dword ptr [edi]
// 00683eca  e980feffff           jmp 0x683d4f
// 00683ecf  8b07                 mov eax, dword ptr [edi]
// 00683ed1  e995feffff           jmp 0x683d6b
// 00683ed6  8d4c2418             lea ecx, [esp + 0x18]
// 00683eda  e8116adaff           call 0x42a8f0
// 00683edf  d94008               fld dword ptr [eax + 8]
// 00683ee2  d95d04               fstp dword ptr [ebp + 4]
// 00683ee5  8d4c2418             lea ecx, [esp + 0x18]
// 00683ee9  83c508               add ebp, 8
// 00683eec  e8ff69daff           call 0x42a8f0
// 00683ef1  d9400c               fld dword ptr [eax + 0xc]
// 00683ef4  d95d00               fstp dword ptr [ebp]
// 00683ef7  83c504               add ebp, 4
// 00683efa  d905b8c38100         fld dword ptr [0x81c3b8]
// 00683f00  8d4c2418             lea ecx, [esp + 0x18]
// 00683f04  d95d00               fstp dword ptr [ebp]
// 00683f07  e8e469daff           call 0x42a8f0
// 00683f0c  8b4020               mov eax, dword ptr [eax + 0x20]
// 00683f0f  894504               mov dword ptr [ebp + 4], eax
// 00683f12  8d4c2418             lea ecx, [esp + 0x18]
// 00683f16  83c508               add ebp, 8
// 00683f19  e8d269daff           call 0x42a8f0
// 00683f1e  d94010               fld dword ptr [eax + 0x10]
// 00683f21  d95d00               fstp dword ptr [ebp]
// 00683f24  8d4c2418             lea ecx, [esp + 0x18]
// 00683f28  83c504               add ebp, 4
// 00683f2b  e8c069daff           call 0x42a8f0
// 00683f30  d94014               fld dword ptr [eax + 0x14]
// 00683f33  b802000000           mov eax, 2
// 00683f38  01442438             add dword ptr [esp + 0x38], eax
// 00683f3c  d95d00               fstp dword ptr [ebp]
// 00683f3f  83c504               add ebp, 4
// 00683f42  896c2428             mov dword ptr [esp + 0x28], ebp
// 00683f46  85ff                 test edi, edi
// 00683f48  0f859e000000         jne 0x683fec
// 00683f4e  ffd3                 call ebx
// 00683f50  33c0                 xor eax, eax
// 00683f52  3b7014               cmp esi, dword ptr [eax + 0x14]
// 00683f55  7502                 jne 0x683f59
// 00683f57  ffd3                 call ebx
// 00683f59  8b36                 mov esi, dword ptr [esi]
// 00683f5b  8974241c             mov dword ptr [esp + 0x1c], esi
// 00683f5f  85ff                 test edi, edi
// 00683f61  7406                 je 0x683f69
// 00683f63  3b7c2420             cmp edi, dword ptr [esp + 0x20]
// 00683f67  7402                 je 0x683f6b
// 00683f69  ffd3                 call ebx
// 00683f6b  3b742424             cmp esi, dword ptr [esp + 0x24]
// 00683f6f  742e                 je 0x683f9f
// 00683f71  85ff                 test edi, edi
// 00683f73  757e                 jne 0x683ff3
// 00683f75  ffd3                 call ebx
// 00683f77  33c0                 xor eax, eax
// 00683f79  3b7014               cmp esi, dword ptr [eax + 0x14]
// 00683f7c  7502                 jne 0x683f80
// 00683f7e  ffd3                 call ebx
// 00683f80  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00683f84  3b4e2c               cmp ecx, dword ptr [esi + 0x2c]
// 00683f87  7516                 jne 0x683f9f
// 00683f89  8d4c2418             lea ecx, [esp + 0x18]
// 00683f8d  e85e69daff           call 0x42a8f0
// 00683f92  8b542430             mov edx, dword ptr [esp + 0x30]
// 00683f96  3b5028               cmp edx, dword ptr [eax + 0x28]
// 00683f99  0f8436f5ffff         je 0x6834d5
// 00683f9f  8b442468             mov eax, dword ptr [esp + 0x68]
// 00683fa3  8b5004               mov edx, dword ptr [eax + 4]
// 00683fa6  8d5804               lea ebx, [eax + 4]
// 00683fa9  8d4c242c             lea ecx, [esp + 0x2c]
// 00683fad  51                   push ecx
// 00683fae  52                   push edx
// 00683faf  50                   push eax
// 00683fb0  8d4c2460             lea ecx, [esp + 0x60]
// 00683fb4  e8b7ecffff           call 0x682c70
// 00683fb9  6a01                 push 1
// 00683fbb  8d4c2458             lea ecx, [esp + 0x58]
// 00683fbf  8be8                 mov ebp, eax
// 00683fc1  e8faecffff           call 0x682cc0
// 00683fc6  892b                 mov dword ptr [ebx], ebp
// 00683fc8  8b4504               mov eax, dword ptr [ebp + 4]
// 00683fcb  8928                 mov dword ptr [eax], ebp
// 00683fcd  85ff                 test edi, edi
// 00683fcf  7406                 je 0x683fd7
// 00683fd1  3b7c2420             cmp edi, dword ptr [esp + 0x20]
// 00683fd5  7406                 je 0x683fdd
// 00683fd7  ff1590288000         call dword ptr [0x802890]
// 00683fdd  3b742424             cmp esi, dword ptr [esp + 0x24]
// 00683fe1  0f84eef4ffff         je 0x6834d5
// 00683fe7  e98df4ffff           jmp 0x683479
// 00683fec  8b07                 mov eax, dword ptr [edi]
// 00683fee  e95fffffff           jmp 0x683f52
// 00683ff3  8b07                 mov eax, dword ptr [edi]
// 00683ff5  eb82                 jmp 0x683f79
// 00683ff7  8b742414             mov esi, dword ptr [esp + 0x14]
// 00683ffb  8d4e24               lea ecx, [esi + 0x24]
// 00683ffe  ff1514478000         call dword ptr [0x804714]
// 00684004  8b10                 mov edx, dword ptr [eax]
// 00684006  8bc8                 mov ecx, eax
// 00684008  8b4210               mov eax, dword ptr [edx + 0x10]
// 0068400b  ffd0                 call eax
// 0068400d  8bce                 mov ecx, esi
// 0068400f  e89ce5ffff           call 0x6825b0
// 00684014  8d4c2448             lea ecx, [esp + 0x48]
// 00684018  ff15884c8000         call dword ptr [0x804c88]
// 0068401e  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 00684022  8b542454             mov edx, dword ptr [esp + 0x54]
// 00684026  8d4610               lea eax, [esi + 0x10]
// 00684029  8b00                 mov eax, dword ptr [eax]
// 0068402b  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0068402f  8d4c2474             lea ecx, [esp + 0x74]
// 00684033  c684240c01000002     mov byte ptr [esp + 0x10c], 2
// 0068403b  89542418             mov dword ptr [esp + 0x18], edx
// 0068403f  c7400800000000       mov dword ptr [eax + 8], 0
// 00684046  ff15884c8000         call dword ptr [0x804c88]
// 0068404c  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 00684050  8b01                 mov eax, dword ptr [ecx]
// 00684052  8b5c2454             mov ebx, dword ptr [esp + 0x54]
// 00684056  8bac2480000000       mov ebp, dword ptr [esp + 0x80]
// 0068405d  8bf0                 mov esi, eax
// 0068405f  c684240c01000003     mov byte ptr [esp + 0x10c], 3
// 00684067  895c2420             mov dword ptr [esp + 0x20], ebx
// 0068406b  89742424             mov dword ptr [esp + 0x24], esi
// 0068406f  90                   nop 
// 00684070  85db                 test ebx, ebx
// 00684072  7406                 je 0x68407a
// 00684074  3b5c2418             cmp ebx, dword ptr [esp + 0x18]
// 00684078  740a                 je 0x684084
// 0068407a  8b3d90288000         mov edi, dword ptr [0x802890]
// 00684080  ffd7                 call edi
// 00684082  eb06                 jmp 0x68408a
// 00684084  8b3d90288000         mov edi, dword ptr [0x802890]
// 0068408a  3b74241c             cmp esi, dword ptr [esp + 0x1c]
// 0068408e  0f8498020000         je 0x68432c
// 00684094  85db                 test ebx, ebx
// 00684096  0f853b010000         jne 0x6841d7
// 0068409c  ffd7                 call edi
// 0068409e  33c0                 xor eax, eax
// 006840a0  3b7014               cmp esi, dword ptr [eax + 0x14]
// 006840a3  7502                 jne 0x6840a7
// 006840a5  ffd7                 call edi
// 006840a7  837e0800             cmp dword ptr [esi + 8], 0
// 006840ab  0f84b7010000         je 0x684268
// 006840b1  ff15444c8000         call dword ptr [0x804c44]
// 006840b7  8bf8                 mov edi, eax
// 006840b9  8b37                 mov esi, dword ptr [edi]
// 006840bb  8d4c2420             lea ecx, [esp + 0x20]
// 006840bf  83c650               add esi, 0x50
// 006840c2  e82968daff           call 0x42a8f0
// 006840c7  8b10                 mov edx, dword ptr [eax]
// 006840c9  52                   push edx
// 006840ca  8b16                 mov edx, dword ptr [esi]
// 006840cc  8d442430             lea eax, [esp + 0x30]
// 006840d0  50                   push eax
// 006840d1  8bcf                 mov ecx, edi
// 006840d3  ffd2                 call edx
// 006840d5  50                   push eax
// 006840d6  8d4c244c             lea ecx, [esp + 0x4c]
// 006840da  c684241001000004     mov byte ptr [esp + 0x110], 4
// 006840e2  ff15f4468000         call dword ptr [0x8046f4]
// 006840e8  8b442434             mov eax, dword ptr [esp + 0x34]
// 006840ec  c684240c01000003     mov byte ptr [esp + 0x10c], 3
// 006840f4  c744242cc46b8200     mov dword ptr [esp + 0x2c], 0x826bc4
// 006840fc  85c0                 test eax, eax
// 006840fe  7418                 je 0x684118
// 00684100  ff08                 dec dword ptr [eax]
// 00684102  8b442434             mov eax, dword ptr [esp + 0x34]
// 00684106  833800               cmp dword ptr [eax], 0
// 00684109  750d                 jne 0x684118
// 0068410b  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0068410f  8b4204               mov eax, dword ptr [edx + 4]
// 00684112  8d4c242c             lea ecx, [esp + 0x2c]
// 00684116  ffd0                 call eax
// 00684118  8d4c2474             lea ecx, [esp + 0x74]
// 0068411c  ff1510478000         call dword ptr [0x804710]
// 00684122  8d4c2448             lea ecx, [esp + 0x48]
// 00684126  8bf0                 mov esi, eax
// 00684128  ff1510478000         call dword ptr [0x804710]
// 0068412e  33ff                 xor edi, edi
// 00684130  3bc6                 cmp eax, esi
// 00684132  0f8448010000         je 0x684280
// 00684138  8b5500               mov edx, dword ptr [ebp]
// 0068413b  8b928c000000         mov edx, dword ptr [edx + 0x8c]
// 00684141  8d442448             lea eax, [esp + 0x48]
// 00684145  50                   push eax
// 00684146  be01000000           mov esi, 1
// 0068414b  56                   push esi
// 0068414c  57                   push edi
// 0068414d  8bcd                 mov ecx, ebp
// 0068414f  ffd2                 call edx
// 00684151  8b0dec468000         mov ecx, dword ptr [0x8046ec]
// 00684157  8b4500               mov eax, dword ptr [ebp]
// 0068415a  8b90b8000000         mov edx, dword ptr [eax + 0xb8]
// 00684160  51                   push ecx
// 00684161  57                   push edi
// 00684162  8bcd                 mov ecx, ebp
// 00684164  ffd2                 call edx
// 00684166  8d8c2488000000       lea ecx, [esp + 0x88]
// 0068416d  ff15f0468000         call dword ptr [0x8046f0]
// 00684173  8d8c24c4000000       lea ecx, [esp + 0xc4]
// 0068417a  ff15f0468000         call dword ptr [0x8046f0]
// 00684180  68c0e78400           push 0x84e7c0
// 00684185  8d4c244c             lea ecx, [esp + 0x4c]
// 00684189  89bc248c000000       mov dword ptr [esp + 0x8c], edi
// 00684190  ff150c478000         call dword ptr [0x80470c]
// 00684196  8bc8                 mov ecx, eax
// 00684198  ff15a84c8000         call dword ptr [0x804ca8]
// 0068419e  50                   push eax
// 0068419f  ff156c238000         call dword ptr [0x80236c]
// 006841a5  83c408               add esp, 8
// 006841a8  84c0                 test al, al
// 006841aa  7532                 jne 0x6841de
// 006841ac  8d4c2448             lea ecx, [esp + 0x48]
// 006841b0  ff150c478000         call dword ptr [0x80470c]
// 006841b6  8b10                 mov edx, dword ptr [eax]
// 006841b8  8bc8                 mov ecx, eax
// 006841ba  8b82a4000000         mov eax, dword ptr [edx + 0xa4]
// 006841c0  ffd0                 call eax
// 006841c2  83f803               cmp eax, 3
// 006841c5  7417                 je 0x6841de
// 006841c7  89bc2494000000       mov dword ptr [esp + 0x94], edi
// 006841ce  89bc248c000000       mov dword ptr [esp + 0x8c], edi
// 006841d5  eb19                 jmp 0x6841f0
// 006841d7  8b03                 mov eax, dword ptr [ebx]
// 006841d9  e9c2feffff           jmp 0x6840a0
// 006841de  c784249400000002000000 mov dword ptr [esp + 0x94], 2
// 006841e9  89b4248c000000       mov dword ptr [esp + 0x8c], esi
// 006841f0  8d4c2448             lea ecx, [esp + 0x48]
// 006841f4  51                   push ecx
// 006841f5  8d4c2478             lea ecx, [esp + 0x78]
// 006841f9  89b42494000000       mov dword ptr [esp + 0x94], esi
// 00684200  ff1514468000         call dword ptr [0x804614]
// 00684206  8b5500               mov edx, dword ptr [ebp]
// 00684209  8b929c000000         mov edx, dword ptr [edx + 0x9c]
// 0068420f  8d842488000000       lea eax, [esp + 0x88]
// 00684216  50                   push eax
// 00684217  57                   push edi
// 00684218  8bcd                 mov ecx, ebp
// 0068421a  89b424cc000000       mov dword ptr [esp + 0xcc], esi
// 00684221  89b424d4000000       mov dword ptr [esp + 0xd4], esi
// 00684228  c78424d800000002000000 mov dword ptr [esp + 0xd8], 2
// 00684233  89bc24d0000000       mov dword ptr [esp + 0xd0], edi
// 0068423a  ffd2                 call edx
// 0068423c  8b4500               mov eax, dword ptr [ebp]
// 0068423f  8b909c000000         mov edx, dword ptr [eax + 0x9c]
// 00684245  8d8c24c4000000       lea ecx, [esp + 0xc4]
// 0068424c  51                   push ecx
// 0068424d  57                   push edi
// 0068424e  8bcd                 mov ecx, ebp
// 00684250  ffd2                 call edx
// 00684252  8b4500               mov eax, dword ptr [ebp]
// 00684255  8b90a4000000         mov edx, dword ptr [eax + 0xa4]
// 0068425b  6a02                 push 2
// 0068425d  6a02                 push 2
// 0068425f  6a02                 push 2
// 00684261  57                   push edi
// 00684262  8bcd                 mov ecx, ebp
// 00684264  ffd2                 call edx
// 00684266  eb18                 jmp 0x684280
// 00684268  8b4500               mov eax, dword ptr [ebp]
// 0068426b  8b5074               mov edx, dword ptr [eax + 0x74]
// 0068426e  6a00                 push 0
// 00684270  8bcd                 mov ecx, ebp
// 00684272  ffd2                 call edx
// 00684274  8d4c2474             lea ecx, [esp + 0x74]
// 00684278  ff1508478000         call dword ptr [0x804708]
// 0068427e  33ff                 xor edi, edi
// 00684280  3bdf                 cmp ebx, edi
// 00684282  0f8595000000         jne 0x68431d
// 00684288  ff1590288000         call dword ptr [0x802890]
// 0068428e  33c0                 xor eax, eax
// 00684290  8b742424             mov esi, dword ptr [esp + 0x24]
// 00684294  3b7014               cmp esi, dword ptr [eax + 0x14]
// 00684297  7506                 jne 0x68429f
// 00684299  ff1590288000         call dword ptr [0x802890]
// 0068429f  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 006842a3  8b4710               mov eax, dword ptr [edi + 0x10]
// 006842a6  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 006842a9  83c710               add edi, 0x10
// 006842ac  89480c               mov dword ptr [eax + 0xc], ecx
// 006842af  85db                 test ebx, ebx
// 006842b1  7571                 jne 0x684324
// 006842b3  ff1590288000         call dword ptr [0x802890]
// 006842b9  33c0                 xor eax, eax
// 006842bb  3b7014               cmp esi, dword ptr [eax + 0x14]
// 006842be  7506                 jne 0x6842c6
// 006842c0  ff1590288000         call dword ptr [0x802890]
// 006842c6  8b560c               mov edx, dword ptr [esi + 0xc]
// 006842c9  8b442414             mov eax, dword ptr [esp + 0x14]
// 006842cd  895014               mov dword ptr [eax + 0x14], edx
// 006842d0  8b5500               mov edx, dword ptr [ebp]
// 006842d3  8b823c010000         mov eax, dword ptr [edx + 0x13c]
// 006842d9  57                   push edi
// 006842da  8bcd                 mov ecx, ebp
// 006842dc  ffd0                 call eax
// 006842de  85db                 test ebx, ebx
// 006842e0  7546                 jne 0x684328
// 006842e2  ff1590288000         call dword ptr [0x802890]
// 006842e8  33c0                 xor eax, eax
// 006842ea  3b7014               cmp esi, dword ptr [eax + 0x14]
// 006842ed  7506                 jne 0x6842f5
// 006842ef  ff1590288000         call dword ptr [0x802890]
// 006842f5  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 006842f8  8b07                 mov eax, dword ptr [edi]
// 006842fa  014808               add dword ptr [eax + 8], ecx
// 006842fd  6a00                 push 0
// 006842ff  8d942484000000       lea edx, [esp + 0x84]
// 00684306  52                   push edx
// 00684307  8d4c2428             lea ecx, [esp + 0x28]
// 0068430b  e8c0e7ffff           call 0x682ad0
// 00684310  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 00684314  8b742424             mov esi, dword ptr [esp + 0x24]
// 00684318  e953fdffff           jmp 0x684070
// 0068431d  8b03                 mov eax, dword ptr [ebx]
// 0068431f  e96cffffff           jmp 0x684290
// 00684324  8b03                 mov eax, dword ptr [ebx]
// 00684326  eb93                 jmp 0x6842bb
// 00684328  8b03                 mov eax, dword ptr [ebx]
// 0068432a  ebbe                 jmp 0x6842ea
// 0068432c  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 00684330  e86b32f0ff           call 0x5875a0
// 00684335  8d4c2474             lea ecx, [esp + 0x74]
// 00684339  c684240c01000002     mov byte ptr [esp + 0x10c], 2
// 00684341  ff158c4c8000         call dword ptr [0x804c8c]
// 00684347  8d4c2448             lea ecx, [esp + 0x48]
// 0068434b  c684240c01000000     mov byte ptr [esp + 0x10c], 0
// 00684353  ff158c4c8000         call dword ptr [0x804c8c]
// 00684359  8d4c2454             lea ecx, [esp + 0x54]
// 0068435d  e8dee7ffff           call 0x682b40
// 00684362  8b442454             mov eax, dword ptr [esp + 0x54]
// 00684366  50                   push eax
// 00684367  e80ec30100           call 0x6a067a
// 0068436c  8b8c2408010000       mov ecx, dword ptr [esp + 0x108]
// 00684373  83c404               add esp, 4
// 00684376  5f                   pop edi
// 00684377  64890d00000000       mov dword ptr fs:[0], ecx
// 0068437e  5e                   pop esi
// 0068437f  5d                   pop ebp
// 00684380  5b                   pop ebx
// 00684381  8be5                 mov esp, ebp
// 00684383  5d                   pop ebp
// 00684384  c3                   ret 

void func_006832b0()
{
}
