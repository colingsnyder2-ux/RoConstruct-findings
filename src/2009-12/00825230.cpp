// roc 2009-12 00825230  unit: CXTPReportControl  size: 1904 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00825230
//
// 00825230  6aff                 push -1
// 00825232  68a1b49500           push 0x95b4a1
// 00825237  64a100000000         mov eax, dword ptr fs:[0]
// 0082523d  50                   push eax
// 0082523e  83ec30               sub esp, 0x30
// 00825241  53                   push ebx
// 00825242  55                   push ebp
// 00825243  56                   push esi
// 00825244  57                   push edi
// 00825245  a10052b600           mov eax, dword ptr [0xb65200]
// 0082524a  33c4                 xor eax, esp
// 0082524c  50                   push eax
// 0082524d  8d442444             lea eax, [esp + 0x44]
// 00825251  64a300000000         mov dword ptr fs:[0], eax
// 00825257  8bf1                 mov esi, ecx
// 00825259  33ff                 xor edi, edi
// 0082525b  57                   push edi
// 0082525c  897c2418             mov dword ptr [esp + 0x18], edi
// 00825260  e8cbf8ffff           call 0x824b30
// 00825265  8bce                 mov ecx, esi
// 00825267  e89472ffff           call 0x81c500
// 0082526c  89be8c020000         mov dword ptr [esi + 0x28c], edi
// 00825272  e8e992ffff           call 0x81e560
// 00825277  85c0                 test eax, eax
// 00825279  7416                 je 0x825291
// 0082527b  8bce                 mov ecx, esi
// 0082527d  e8de92ffff           call 0x81e560
// 00825282  8b10                 mov edx, dword ptr [eax]
// 00825284  8bc8                 mov ecx, eax
// 00825286  8b4260               mov eax, dword ptr [edx + 0x60]
// 00825289  ffd0                 call eax
// 0082528b  89442434             mov dword ptr [esp + 0x34], eax
// 0082528f  eb04                 jmp 0x825295
// 00825291  897c2434             mov dword ptr [esp + 0x34], edi
// 00825295  8b8e28010000         mov ecx, dword ptr [esi + 0x128]
// 0082529b  e800920000           call 0x82e4a0
// 008252a0  8b8ee0000000         mov ecx, dword ptr [esi + 0xe0]
// 008252a6  83cbff               or ebx, 0xffffffff
// 008252a9  899e1c010000         mov dword ptr [esi + 0x11c], ebx
// 008252af  899e20010000         mov dword ptr [esi + 0x120], ebx
// 008252b5  899e24010000         mov dword ptr [esi + 0x124], ebx
// 008252bb  8b11                 mov edx, dword ptr [ecx]
// 008252bd  8b4258               mov eax, dword ptr [edx + 0x58]
// 008252c0  6a01                 push 1
// 008252c2  ffd0                 call eax
// 008252c4  8b8ee4000000         mov ecx, dword ptr [esi + 0xe4]
// 008252ca  8b11                 mov edx, dword ptr [ecx]
// 008252cc  8b4258               mov eax, dword ptr [edx + 0x58]
// 008252cf  6a01                 push 1
// 008252d1  ffd0                 call eax
// 008252d3  8b9644020000         mov edx, dword ptr [esi + 0x244]
// 008252d9  8b4258               mov eax, dword ptr [edx + 0x58]
// 008252dc  8d8e44020000         lea ecx, [esi + 0x244]
// 008252e2  57                   push edi
// 008252e3  ffd0                 call eax
// 008252e5  8b8ef8000000         mov ecx, dword ptr [esi + 0xf8]
// 008252eb  8b11                 mov edx, dword ptr [ecx]
// 008252ed  8b4258               mov eax, dword ptr [edx + 0x58]
// 008252f0  6a01                 push 1
// 008252f2  ffd0                 call eax
// 008252f4  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 008252fa  8b11                 mov edx, dword ptr [ecx]
// 008252fc  8b4258               mov eax, dword ptr [edx + 0x58]
// 008252ff  6a01                 push 1
// 00825301  ffd0                 call eax
// 00825303  8bce                 mov ecx, esi
// 00825305  e83692ffff           call 0x81e540
// 0082530a  85c0                 test eax, eax
// 0082530c  7462                 je 0x825370
// 0082530e  8b16                 mov edx, dword ptr [esi]
// 00825310  8b82e8010000         mov eax, dword ptr [edx + 0x1e8]
// 00825316  8bce                 mov ecx, esi
// 00825318  ffd0                 call eax
// 0082531a  8bf8                 mov edi, eax
// 0082531c  8b86e8000000         mov eax, dword ptr [esi + 0xe8]
// 00825322  8b4834               mov ecx, dword ptr [eax + 0x34]
// 00825325  8b17                 mov edx, dword ptr [edi]
// 00825327  8b5258               mov edx, dword ptr [edx + 0x58]
// 0082532a  51                   push ecx
// 0082532b  56                   push esi
// 0082532c  8bcf                 mov ecx, edi
// 0082532e  ffd2                 call edx
// 00825330  c7475c01000000       mov dword ptr [edi + 0x5c], 1
// 00825337  8b86e0000000         mov eax, dword ptr [esi + 0xe0]
// 0082533d  8b28                 mov ebp, dword ptr [eax]
// 0082533f  8b8ee8000000         mov ecx, dword ptr [esi + 0xe8]
// 00825345  83c578               add ebp, 0x78
// 00825348  e8d3780000           call 0x82cc20
// 0082534d  8b8ee0000000         mov ecx, dword ptr [esi + 0xe0]
// 00825353  8b5500               mov edx, dword ptr [ebp]
// 00825356  50                   push eax
// 00825357  57                   push edi
// 00825358  ffd2                 call edx
// 0082535a  8b8ee8000000         mov ecx, dword ptr [esi + 0xe8]
// 00825360  e8bb780000           call 0x82cc20
// 00825365  89868c020000         mov dword ptr [esi + 0x28c], eax
// 0082536b  e974050000           jmp 0x8258e4
// 00825370  8b8ee8000000         mov ecx, dword ptr [esi + 0xe8]
// 00825376  8b06                 mov eax, dword ptr [esi]
// 00825378  8b96e4000000         mov edx, dword ptr [esi + 0xe4]
// 0082537e  8b80c0010000         mov eax, dword ptr [eax + 0x1c0]
// 00825384  51                   push ecx
// 00825385  57                   push edi
// 00825386  52                   push edx
// 00825387  8bce                 mov ecx, esi
// 00825389  ffd0                 call eax
// 0082538b  8b8ee4000000         mov ecx, dword ptr [esi + 0xe4]
// 00825391  e88a780000           call 0x82cc20
// 00825396  8b16                 mov edx, dword ptr [esi]
// 00825398  8b92b4010000         mov edx, dword ptr [edx + 0x1b4]
// 0082539e  89868c020000         mov dword ptr [esi + 0x28c], eax
// 008253a4  8b86e4000000         mov eax, dword ptr [esi + 0xe4]
// 008253aa  50                   push eax
// 008253ab  8bce                 mov ecx, esi
// 008253ad  ffd2                 call edx
// 008253af  8b86ec000000         mov eax, dword ptr [esi + 0xec]
// 008253b5  8b4820               mov ecx, dword ptr [eax + 0x20]
// 008253b8  897c2430             mov dword ptr [esp + 0x30], edi
// 008253bc  e8af04cbff           call 0x4d5870
// 008253c1  85c0                 test eax, eax
// 008253c3  0f8e12030000         jle 0x8256db
// 008253c9  6a3c                 push 0x3c
// 008253cb  e830e3ffff           call 0x823700
// 008253d0  8be8                 mov ebp, eax
// 008253d2  896c2440             mov dword ptr [esp + 0x40], ebp
// 008253d6  897c244c             mov dword ptr [esp + 0x4c], edi
// 008253da  3bef                 cmp ebp, edi
// 008253dc  7414                 je 0x8253f2
// 008253de  8bcd                 mov ecx, ebp
// 008253e0  e88b990000           call 0x82ed70
// 008253e5  c74500b44b9f00       mov dword ptr [ebp], 0x9f4bb4
// 008253ec  896c2418             mov dword ptr [esp + 0x18], ebp
// 008253f0  eb06                 jmp 0x8253f8
// 008253f2  897c2418             mov dword ptr [esp + 0x18], edi
// 008253f6  8bef                 mov ebp, edi
// 008253f8  8b8eec000000         mov ecx, dword ptr [esi + 0xec]
// 008253fe  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 00825401  895c244c             mov dword ptr [esp + 0x4c], ebx
// 00825405  e86604cbff           call 0x4d5870
// 0082540a  8b8ee8000000         mov ecx, dword ptr [esi + 0xe8]
// 00825410  8bf8                 mov edi, eax
// 00825412  47                   inc edi
// 00825413  e808780000           call 0x82cc20
// 00825418  99                   cdq 
// 00825419  f7ff                 idiv edi
// 0082541b  3d2c010000           cmp eax, 0x12c
// 00825420  7f05                 jg 0x825427
// 00825422  b82c010000           mov eax, 0x12c
// 00825427  8b5500               mov edx, dword ptr [ebp]
// 0082542a  53                   push ebx
// 0082542b  50                   push eax
// 0082542c  8b8294000000         mov eax, dword ptr [edx + 0x94]
// 00825432  8bcd                 mov ecx, ebp
// 00825434  ffd0                 call eax
// 00825436  8b8ee4000000         mov ecx, dword ptr [esi + 0xe4]
// 0082543c  33ff                 xor edi, edi
// 0082543e  897c242c             mov dword ptr [esp + 0x2c], edi
// 00825442  e8d9770000           call 0x82cc20
// 00825447  85c0                 test eax, eax
// 00825449  0f8e7b020000         jle 0x8256ca
// 0082544f  8b8ee4000000         mov ecx, dword ptr [esi + 0xe4]
// 00825455  8b11                 mov edx, dword ptr [ecx]
// 00825457  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0082545b  8b525c               mov edx, dword ptr [edx + 0x5c]
// 0082545e  50                   push eax
// 0082545f  ffd2                 call edx
// 00825461  8bd8                 mov ebx, eax
// 00825463  33c0                 xor eax, eax
// 00825465  8944241c             mov dword ptr [esp + 0x1c], eax
// 00825469  89442428             mov dword ptr [esp + 0x28], eax
// 0082546d  8b86ec000000         mov eax, dword ptr [esi + 0xec]
// 00825473  8b4820               mov ecx, dword ptr [eax + 0x20]
// 00825476  895c2420             mov dword ptr [esp + 0x20], ebx
// 0082547a  e8f103cbff           call 0x4d5870
// 0082547f  85c0                 test eax, eax
// 00825481  0f8e03020000         jle 0x82568a
// 00825487  eb0b                 jmp 0x825494
// 00825489  8da42400000000       lea esp, [esp]
// 00825490  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 00825494  8b8eec000000         mov ecx, dword ptr [esi + 0xec]
// 0082549a  8b542428             mov edx, dword ptr [esp + 0x28]
// 0082549e  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 008254a1  52                   push edx
// 008254a2  e809810400           call 0x86d5b0
// 008254a7  8be8                 mov ebp, eax
// 008254a9  8b03                 mov eax, dword ptr [ebx]
// 008254ab  8b5060               mov edx, dword ptr [eax + 0x60]
// 008254ae  55                   push ebp
// 008254af  8bcb                 mov ecx, ebx
// 008254b1  ffd2                 call edx
// 008254b3  8bc8                 mov ecx, eax
// 008254b5  e886580000           call 0x82ad40
// 008254ba  85c0                 test eax, eax
// 008254bc  7416                 je 0x8254d4
// 008254be  8b10                 mov edx, dword ptr [eax]
// 008254c0  8b5274               mov edx, dword ptr [edx + 0x74]
// 008254c3  55                   push ebp
// 008254c4  8d4c2440             lea ecx, [esp + 0x40]
// 008254c8  51                   push ecx
// 008254c9  8bc8                 mov ecx, eax
// 008254cb  ffd2                 call edx
// 008254cd  b901000000           mov ecx, 1
// 008254d2  eb14                 jmp 0x8254e8
// 008254d4  6856fd9900           push 0x99fd56
// 008254d9  8d4c243c             lea ecx, [esp + 0x3c]
// 008254dd  ff15b8de9800         call dword ptr [0x98deb8]
// 008254e3  b902000000           mov ecx, 2
// 008254e8  094c2414             or dword ptr [esp + 0x14], ecx
// 008254ec  894c244c             mov dword ptr [esp + 0x4c], ecx
// 008254f0  50                   push eax
// 008254f1  8d4c2428             lea ecx, [esp + 0x28]
// 008254f5  ff1594de9800         call dword ptr [0x98de94]
// 008254fb  c744244c03000000     mov dword ptr [esp + 0x4c], 3
// 00825503  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 00825507  f6c302               test bl, 2
// 0082550a  7411                 je 0x82551d
// 0082550c  83e3fd               and ebx, 0xfffffffd
// 0082550f  8d4c2438             lea ecx, [esp + 0x38]
// 00825513  895c2414             mov dword ptr [esp + 0x14], ebx
// 00825517  ff15c0de9800         call dword ptr [0x98dec0]
// 0082551d  c644244c05           mov byte ptr [esp + 0x4c], 5
// 00825522  f6c301               test bl, 1
// 00825525  7411                 je 0x825538
// 00825527  83e3fe               and ebx, 0xfffffffe
// 0082552a  8d4c243c             lea ecx, [esp + 0x3c]
// 0082552e  895c2414             mov dword ptr [esp + 0x14], ebx
// 00825532  ff15c0de9800         call dword ptr [0x98dec0]
// 00825538  85ff                 test edi, edi
// 0082553a  743b                 je 0x825577
// 0082553c  8b07                 mov eax, dword ptr [edi]
// 0082553e  8b90fc000000         mov edx, dword ptr [eax + 0xfc]
// 00825544  8baee8000000         mov ebp, dword ptr [esi + 0xe8]
// 0082554a  8d4c2440             lea ecx, [esp + 0x40]
// 0082554e  51                   push ecx
// 0082554f  8bcf                 mov ecx, edi
// 00825551  ffd2                 call edx
// 00825553  8b5500               mov edx, dword ptr [ebp]
// 00825556  8b525c               mov edx, dword ptr [edx + 0x5c]
// 00825559  8d4c2424             lea ecx, [esp + 0x24]
// 0082555d  51                   push ecx
// 0082555e  83cb04               or ebx, 4
// 00825561  50                   push eax
// 00825562  8bcd                 mov ecx, ebp
// 00825564  c644245406           mov byte ptr [esp + 0x54], 6
// 00825569  895c241c             mov dword ptr [esp + 0x1c], ebx
// 0082556d  ffd2                 call edx
// 0082556f  85c0                 test eax, eax
// 00825571  7504                 jne 0x825577
// 00825573  b301                 mov bl, 1
// 00825575  eb02                 jmp 0x825579
// 00825577  32db                 xor bl, bl
// 00825579  f644241404           test byte ptr [esp + 0x14], 4
// 0082557e  c744244c05000000     mov dword ptr [esp + 0x4c], 5
// 00825586  740f                 je 0x825597
// 00825588  83642414fb           and dword ptr [esp + 0x14], 0xfffffffb
// 0082558d  8d4c2440             lea ecx, [esp + 0x40]
// 00825591  ff15c0de9800         call dword ptr [0x98dec0]
// 00825597  84db                 test bl, bl
// 00825599  744b                 je 0x8255e6
// 0082559b  8b07                 mov eax, dword ptr [edi]
// 0082559d  8b90c0000000         mov edx, dword ptr [eax + 0xc0]
// 008255a3  8bcf                 mov ecx, edi
// 008255a5  897c241c             mov dword ptr [esp + 0x1c], edi
// 008255a9  ffd2                 call edx
// 008255ab  85c0                 test eax, eax
// 008255ad  0f8487000000         je 0x82563a
// 008255b3  8b07                 mov eax, dword ptr [edi]
// 008255b5  8b90b8000000         mov edx, dword ptr [eax + 0xb8]
// 008255bb  8bcf                 mov ecx, edi
// 008255bd  ffd2                 call edx
// 008255bf  8bd8                 mov ebx, eax
// 008255c1  8b07                 mov eax, dword ptr [edi]
// 008255c3  8b2b                 mov ebp, dword ptr [ebx]
// 008255c5  8b90b8000000         mov edx, dword ptr [eax + 0xb8]
// 008255cb  8bcf                 mov ecx, edi
// 008255cd  83c55c               add ebp, 0x5c
// 008255d0  ffd2                 call edx
// 008255d2  8bc8                 mov ecx, eax
// 008255d4  e847760000           call 0x82cc20
// 008255d9  48                   dec eax
// 008255da  50                   push eax
// 008255db  8b4500               mov eax, dword ptr [ebp]
// 008255de  8bcb                 mov ecx, ebx
// 008255e0  ffd0                 call eax
// 008255e2  8bf8                 mov edi, eax
// 008255e4  eb54                 jmp 0x82563a
// 008255e6  8b16                 mov edx, dword ptr [esi]
// 008255e8  8b82ec010000         mov eax, dword ptr [edx + 0x1ec]
// 008255ee  8bce                 mov ecx, esi
// 008255f0  ffd0                 call eax
// 008255f2  ff442430             inc dword ptr [esp + 0x30]
// 008255f6  8bf8                 mov edi, eax
// 008255f8  8b17                 mov edx, dword ptr [edi]
// 008255fa  8b4258               mov eax, dword ptr [edx + 0x58]
// 008255fd  6a00                 push 0
// 008255ff  56                   push esi
// 00825600  8bcf                 mov ecx, edi
// 00825602  ffd0                 call eax
// 00825604  8d4c2424             lea ecx, [esp + 0x24]
// 00825608  ff1580de9800         call dword ptr [0x98de80]
// 0082560e  50                   push eax
// 0082560f  8bcf                 mov ecx, edi
// 00825611  e8cae30700           call 0x8a39e0
// 00825616  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0082561a  57                   push edi
// 0082561b  85c9                 test ecx, ecx
// 0082561d  740a                 je 0x825629
// 0082561f  8b11                 mov edx, dword ptr [ecx]
// 00825621  8b82bc000000         mov eax, dword ptr [edx + 0xbc]
// 00825627  eb09                 jmp 0x825632
// 00825629  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0082562d  8b11                 mov edx, dword ptr [ecx]
// 0082562f  8b4260               mov eax, dword ptr [edx + 0x60]
// 00825632  ffd0                 call eax
// 00825634  897c241c             mov dword ptr [esp + 0x1c], edi
// 00825638  33ff                 xor edi, edi
// 0082563a  8d4c2424             lea ecx, [esp + 0x24]
// 0082563e  c744244cffffffff     mov dword ptr [esp + 0x4c], 0xffffffff
// 00825646  ff15c0de9800         call dword ptr [0x98dec0]
// 0082564c  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 00825650  8b8eec000000         mov ecx, dword ptr [esi + 0xec]
// 00825656  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 00825659  43                   inc ebx
// 0082565a  895c2428             mov dword ptr [esp + 0x28], ebx
// 0082565e  e80d02cbff           call 0x4d5870
// 00825663  3bd8                 cmp ebx, eax
// 00825665  0f8c25feffff         jl 0x825490
// 0082566b  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0082566f  85c9                 test ecx, ecx
// 00825671  740f                 je 0x825682
// 00825673  8b11                 mov edx, dword ptr [ecx]
// 00825675  8b442420             mov eax, dword ptr [esp + 0x20]
// 00825679  8b92bc000000         mov edx, dword ptr [edx + 0xbc]
// 0082567f  50                   push eax
// 00825680  ffd2                 call edx
// 00825682  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 00825686  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 0082568a  83c304               add ebx, 4
// 0082568d  53                   push ebx
// 0082568e  ff150cb29800         call dword ptr [0x98b20c]
// 00825694  8b7d00               mov edi, dword ptr [ebp]
// 00825697  8bcd                 mov ecx, ebp
// 00825699  83c75c               add edi, 0x5c
// 0082569c  e87f750000           call 0x82cc20
// 008256a1  48                   dec eax
// 008256a2  50                   push eax
// 008256a3  8b07                 mov eax, dword ptr [edi]
// 008256a5  8bcd                 mov ecx, ebp
// 008256a7  ffd0                 call eax
// 008256a9  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 008256ad  8b8ee4000000         mov ecx, dword ptr [esi + 0xe4]
// 008256b3  43                   inc ebx
// 008256b4  8bf8                 mov edi, eax
// 008256b6  895c242c             mov dword ptr [esp + 0x2c], ebx
// 008256ba  e861750000           call 0x82cc20
// 008256bf  3bd8                 cmp ebx, eax
// 008256c1  0f8c88fdffff         jl 0x82544f
// 008256c7  83cbff               or ebx, 0xffffffff
// 008256ca  8b8ee4000000         mov ecx, dword ptr [esi + 0xe4]
// 008256d0  e807e7fcff           call 0x7f3ddc
// 008256d5  89aee4000000         mov dword ptr [esi + 0xe4], ebp
// 008256db  8b8ee0000000         mov ecx, dword ptr [esi + 0xe0]
// 008256e1  8b39                 mov edi, dword ptr [ecx]
// 008256e3  8b8ee8000000         mov ecx, dword ptr [esi + 0xe8]
// 008256e9  53                   push ebx
// 008256ea  81c794000000         add edi, 0x94
// 008256f0  e82b750000           call 0x82cc20
// 008256f5  8b542434             mov edx, dword ptr [esp + 0x34]
// 008256f9  8b8ee0000000         mov ecx, dword ptr [esi + 0xe0]
// 008256ff  8d44100a             lea eax, [eax + edx + 0xa]
// 00825703  8b17                 mov edx, dword ptr [edi]
// 00825705  50                   push eax
// 00825706  ffd2                 call edx
// 00825708  8b8ee4000000         mov ecx, dword ptr [esi + 0xe4]
// 0082570e  33ff                 xor edi, edi
// 00825710  e80b750000           call 0x82cc20
// 00825715  85c0                 test eax, eax
// 00825717  7e49                 jle 0x825762
// 00825719  8da42400000000       lea esp, [esp]
// 00825720  8b8ee4000000         mov ecx, dword ptr [esi + 0xe4]
// 00825726  8b01                 mov eax, dword ptr [ecx]
// 00825728  8b505c               mov edx, dword ptr [eax + 0x5c]
// 0082572b  57                   push edi
// 0082572c  ffd2                 call edx
// 0082572e  8b2e                 mov ebp, dword ptr [esi]
// 00825730  8b8ee0000000         mov ecx, dword ptr [esi + 0xe0]
// 00825736  8bd8                 mov ebx, eax
// 00825738  53                   push ebx
// 00825739  81c5d0010000         add ebp, 0x1d0
// 0082573f  e8dc740000           call 0x82cc20
// 00825744  50                   push eax
// 00825745  8b4500               mov eax, dword ptr [ebp]
// 00825748  8bce                 mov ecx, esi
// 0082574a  ffd0                 call eax
// 0082574c  897b6c               mov dword ptr [ebx + 0x6c], edi
// 0082574f  8b8ee4000000         mov ecx, dword ptr [esi + 0xe4]
// 00825755  47                   inc edi
// 00825756  e8c5740000           call 0x82cc20
// 0082575b  3bf8                 cmp edi, eax
// 0082575d  7cc1                 jl 0x825720
// 0082575f  83cbff               or ebx, 0xffffffff
// 00825762  8b8ee0000000         mov ecx, dword ptr [esi + 0xe0]
// 00825768  899e1c010000         mov dword ptr [esi + 0x11c], ebx
// 0082576e  899e20010000         mov dword ptr [esi + 0x120], ebx
// 00825774  899e24010000         mov dword ptr [esi + 0x124], ebx
// 0082577a  e8a1740000           call 0x82cc20
// 0082577f  8bd8                 mov ebx, eax
// 00825781  33ed                 xor ebp, ebp
// 00825783  85db                 test ebx, ebx
// 00825785  7e70                 jle 0x8257f7
// 00825787  eb07                 jmp 0x825790
// 00825789  8da42400000000       lea esp, [esp]
// 00825790  8b8ee0000000         mov ecx, dword ptr [esi + 0xe0]
// 00825796  8b11                 mov edx, dword ptr [ecx]
// 00825798  8b425c               mov eax, dword ptr [edx + 0x5c]
// 0082579b  55                   push ebp
// 0082579c  ffd0                 call eax
// 0082579e  8bf8                 mov edi, eax
// 008257a0  85ff                 test edi, edi
// 008257a2  744e                 je 0x8257f2
// 008257a4  8b17                 mov edx, dword ptr [edi]
// 008257a6  8b82f8000000         mov eax, dword ptr [edx + 0xf8]
// 008257ac  55                   push ebp
// 008257ad  8bcf                 mov ecx, edi
// 008257af  ffd0                 call eax
// 008257b1  837c243400           cmp dword ptr [esp + 0x34], 0
// 008257b6  c7475c01000000       mov dword ptr [edi + 0x5c], 1
// 008257bd  7433                 je 0x8257f2
// 008257bf  8b17                 mov edx, dword ptr [edi]
// 008257c1  8b4260               mov eax, dword ptr [edx + 0x60]
// 008257c4  8bcf                 mov ecx, edi
// 008257c6  ffd0                 call eax
// 008257c8  3b442434             cmp eax, dword ptr [esp + 0x34]
// 008257cc  7524                 jne 0x8257f2
// 008257ce  8b17                 mov edx, dword ptr [edi]
// 008257d0  8b426c               mov eax, dword ptr [edx + 0x6c]
// 008257d3  8bcf                 mov ecx, edi
// 008257d5  ffd0                 call eax
// 008257d7  83be0002000000       cmp dword ptr [esi + 0x200], 0
// 008257de  89861c010000         mov dword ptr [esi + 0x11c], eax
// 008257e4  740c                 je 0x8257f2
// 008257e6  8b8e28010000         mov ecx, dword ptr [esi + 0x128]
// 008257ec  57                   push edi
// 008257ed  e89e900000           call 0x82e890
// 008257f2  45                   inc ebp
// 008257f3  3beb                 cmp ebp, ebx
// 008257f5  7c99                 jl 0x825790
// 008257f7  8b8ef0000000         mov ecx, dword ptr [esi + 0xf0]
// 008257fd  33ed                 xor ebp, ebp
// 008257ff  e81c740000           call 0x82cc20
// 00825804  85c0                 test eax, eax
// 00825806  7e68                 jle 0x825870
// 00825808  eb06                 jmp 0x825810
// 0082580a  8d9b00000000         lea ebx, [ebx]
// 00825810  8b8ef0000000         mov ecx, dword ptr [esi + 0xf0]
// 00825816  55                   push ebp
// 00825817  e814740000           call 0x82cc30
// 0082581c  8b16                 mov edx, dword ptr [esi]
// 0082581e  8bd8                 mov ebx, eax
// 00825820  8b82f0010000         mov eax, dword ptr [edx + 0x1f0]
// 00825826  8bce                 mov ecx, esi
// 00825828  ffd0                 call eax
// 0082582a  8bf8                 mov edi, eax
// 0082582c  8b17                 mov edx, dword ptr [edi]
// 0082582e  8b4258               mov eax, dword ptr [edx + 0x58]
// 00825831  53                   push ebx
// 00825832  56                   push esi
// 00825833  8bcf                 mov ecx, edi
// 00825835  ffd0                 call eax
// 00825837  8b17                 mov edx, dword ptr [edi]
// 00825839  8b82f8000000         mov eax, dword ptr [edx + 0xf8]
// 0082583f  55                   push ebp
// 00825840  8bcf                 mov ecx, edi
// 00825842  ffd0                 call eax
// 00825844  c7477001000000       mov dword ptr [edi + 0x70], 1
// 0082584b  c7474c00000000       mov dword ptr [edi + 0x4c], 0
// 00825852  8b8ef8000000         mov ecx, dword ptr [esi + 0xf8]
// 00825858  8b11                 mov edx, dword ptr [ecx]
// 0082585a  8b4260               mov eax, dword ptr [edx + 0x60]
// 0082585d  57                   push edi
// 0082585e  ffd0                 call eax
// 00825860  8b8ef0000000         mov ecx, dword ptr [esi + 0xf0]
// 00825866  45                   inc ebp
// 00825867  e8b4730000           call 0x82cc20
// 0082586c  3be8                 cmp ebp, eax
// 0082586e  7ca0                 jl 0x825810
// 00825870  8b8ef4000000         mov ecx, dword ptr [esi + 0xf4]
// 00825876  33ed                 xor ebp, ebp
// 00825878  e8a3730000           call 0x82cc20
// 0082587d  85c0                 test eax, eax
// 0082587f  7e60                 jle 0x8258e1
// 00825881  8b8ef4000000         mov ecx, dword ptr [esi + 0xf4]
// 00825887  55                   push ebp
// 00825888  e8a3730000           call 0x82cc30
// 0082588d  8b16                 mov edx, dword ptr [esi]
// 0082588f  8bd8                 mov ebx, eax
// 00825891  8b82f0010000         mov eax, dword ptr [edx + 0x1f0]
// 00825897  8bce                 mov ecx, esi
// 00825899  ffd0                 call eax
// 0082589b  8bf8                 mov edi, eax
// 0082589d  8b17                 mov edx, dword ptr [edi]
// 0082589f  8b4258               mov eax, dword ptr [edx + 0x58]
// 008258a2  53                   push ebx
// 008258a3  56                   push esi
// 008258a4  8bcf                 mov ecx, edi
// 008258a6  ffd0                 call eax
// 008258a8  8b17                 mov edx, dword ptr [edi]
// 008258aa  8b82f8000000         mov eax, dword ptr [edx + 0xf8]
// 008258b0  55                   push ebp
// 008258b1  8bcf                 mov ecx, edi
// 008258b3  ffd0                 call eax
// 008258b5  c7477002000000       mov dword ptr [edi + 0x70], 2
// 008258bc  c7474c00000000       mov dword ptr [edi + 0x4c], 0
// 008258c3  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 008258c9  8b11                 mov edx, dword ptr [ecx]
// 008258cb  8b4260               mov eax, dword ptr [edx + 0x60]
// 008258ce  57                   push edi
// 008258cf  ffd0                 call eax
// 008258d1  8b8ef4000000         mov ecx, dword ptr [esi + 0xf4]
// 008258d7  45                   inc ebp
// 008258d8  e843730000           call 0x82cc20
// 008258dd  3be8                 cmp ebp, eax
// 008258df  7ca0                 jl 0x825881
// 008258e1  83cbff               or ebx, 0xffffffff
// 008258e4  8bce                 mov ecx, esi
// 008258e6  e8a571ffff           call 0x81ca90
// 008258eb  8bce                 mov ecx, esi
// 008258ed  e86ea5ffff           call 0x81fe60
// 008258f2  8b16                 mov edx, dword ptr [esi]
// 008258f4  8b8264010000         mov eax, dword ptr [edx + 0x164]
// 008258fa  8bce                 mov ecx, esi
// 008258fc  ffd0                 call eax
// 008258fe  8bce                 mov ecx, esi
// 00825900  e80b6cffff           call 0x81c510
// 00825905  8bce                 mov ecx, esi
// 00825907  399e1c010000         cmp dword ptr [esi + 0x11c], ebx
// 0082590d  7546                 jne 0x825955
// 0082590f  6a00                 push 0
// 00825911  e88a7cffff           call 0x81d5a0
// 00825916  8b8ee0000000         mov ecx, dword ptr [esi + 0xe0]
// 0082591c  e8ff720000           call 0x82cc20
// 00825921  85c0                 test eax, eax
// 00825923  7e3d                 jle 0x825962
// 00825925  83be0002000000       cmp dword ptr [esi + 0x200], 0
// 0082592c  c7861c01000000000000 mov dword ptr [esi + 0x11c], 0
// 00825936  742a                 je 0x825962
// 00825938  8b8ee0000000         mov ecx, dword ptr [esi + 0xe0]
// 0082593e  8b11                 mov edx, dword ptr [ecx]
// 00825940  8b425c               mov eax, dword ptr [edx + 0x5c]
// 00825943  6a00                 push 0
// 00825945  ffd0                 call eax
// 00825947  8b8e28010000         mov ecx, dword ptr [esi + 0x128]
// 0082594d  50                   push eax
// 0082594e  e83d8f0000           call 0x82e890
// 00825953  eb0d                 jmp 0x825962
// 00825955  e8068cffff           call 0x81e560
// 0082595a  50                   push eax
// 0082595b  8bce                 mov ecx, esi
// 0082595d  e82ea2ffff           call 0x81fb90
// 00825962  83be1802000000       cmp dword ptr [esi + 0x218], 0
// 00825969  751a                 jne 0x825985
// 0082596b  83bed801000000       cmp dword ptr [esi + 0x1d8], 0
// 00825972  7411                 je 0x825985
// 00825974  8b8eec000000         mov ecx, dword ptr [esi + 0xec]
// 0082597a  e8e17b0400           call 0x86d560
// 0082597f  898618020000         mov dword ptr [esi + 0x218], eax
// 00825985  8bce                 mov ecx, esi
// 00825987  e864d4ffff           call 0x822df0
// 0082598c  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00825990  64890d00000000       mov dword ptr fs:[0], ecx
// 00825997  59                   pop ecx
// 00825998  5f                   pop edi
// 00825999  5e                   pop esi
// 0082599a  5d                   pop ebp
// 0082599b  5b                   pop ebx
// 0082599c  83c43c               add esp, 0x3c
// 0082599f  c3                   ret 
// copied from an identical function in another client (function ?Populate@CXTPReportControl@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\ReportControl\XTPReportControl.cpp