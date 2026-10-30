// roc 2009-12 00872f20  unit: CXTPRibbonTheme  size: 1491 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00872f20
//
// 00872f20  6aff                 push -1
// 00872f22  6890ff9500           push 0x95ff90
// 00872f27  64a100000000         mov eax, dword ptr fs:[0]
// 00872f2d  50                   push eax
// 00872f2e  81ec80000000         sub esp, 0x80
// 00872f34  53                   push ebx
// 00872f35  55                   push ebp
// 00872f36  56                   push esi
// 00872f37  57                   push edi
// 00872f38  a10052b600           mov eax, dword ptr [0xb65200]
// 00872f3d  33c4                 xor eax, esp
// 00872f3f  50                   push eax
// 00872f40  8d842494000000       lea eax, [esp + 0x94]
// 00872f47  64a300000000         mov dword ptr fs:[0], eax
// 00872f4d  8bf9                 mov edi, ecx
// 00872f4f  8bb424ac000000       mov esi, dword ptr [esp + 0xac]
// 00872f56  8b06                 mov eax, dword ptr [esi]
// 00872f58  8b506c               mov edx, dword ptr [eax + 0x6c]
// 00872f5b  8bae58010000         mov ebp, dword ptr [esi + 0x158]
// 00872f61  8bce                 mov ecx, esi
// 00872f63  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00872f6b  ffd2                 call edx
// 00872f6d  85c0                 test eax, eax
// 00872f6f  7408                 je 0x872f79
// 00872f71  c744241401000000     mov dword ptr [esp + 0x14], 1
// 00872f79  8b06                 mov eax, dword ptr [esi]
// 00872f7b  8b90b4000000         mov edx, dword ptr [eax + 0xb4]
// 00872f81  8bce                 mov ecx, esi
// 00872f83  ffd2                 call edx
// 00872f85  bb02000000           mov ebx, 2
// 00872f8a  85c0                 test eax, eax
// 00872f8c  7404                 je 0x872f92
// 00872f8e  895c2414             mov dword ptr [esp + 0x14], ebx
// 00872f92  85ed                 test ebp, ebp
// 00872f94  0f85da000000         jne 0x873074
// 00872f9a  39ac24b0000000       cmp dword ptr [esp + 0xb0], ebp
// 00872fa1  0f84a6000000         je 0x87304d
// 00872fa7  687813a000           push 0xa01378
// 00872fac  8bcf                 mov ecx, edi
// 00872fae  e84dbd0000           call 0x87ed00
// 00872fb3  8be8                 mov ebp, eax
// 00872fb5  85ed                 test ebp, ebp
// 00872fb7  0f8490000000         je 0x87304d
// 00872fbd  8b8ec4000000         mov ecx, dword ptr [esi + 0xc4]
// 00872fc3  8b96c8000000         mov edx, dword ptr [esi + 0xc8]
// 00872fc9  8b86c0000000         mov eax, dword ptr [esi + 0xc0]
// 00872fcf  894c2448             mov dword ptr [esp + 0x48], ecx
// 00872fd3  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00872fd7  6a03                 push 3
// 00872fd9  89542450             mov dword ptr [esp + 0x50], edx
// 00872fdd  51                   push ecx
// 00872fde  8944244c             mov dword ptr [esp + 0x4c], eax
// 00872fe2  8b86cc000000         mov eax, dword ptr [esi + 0xcc]
// 00872fe8  8d54247c             lea edx, [esp + 0x7c]
// 00872fec  52                   push edx
// 00872fed  8bcd                 mov ecx, ebp
// 00872fef  895c2470             mov dword ptr [esp + 0x70], ebx
// 00872ff3  895c2474             mov dword ptr [esp + 0x74], ebx
// 00872ff7  895c2478             mov dword ptr [esp + 0x78], ebx
// 00872ffb  895c247c             mov dword ptr [esp + 0x7c], ebx
// 00872fff  8944245c             mov dword ptr [esp + 0x5c], eax
// 00873003  e8b8d80600           call 0x8e08c0
// 00873008  56                   push esi
// 00873009  8bd8                 mov ebx, eax
// 0087300b  e8f0edffff           call 0x871e00
// 00873010  8b0b                 mov ecx, dword ptr [ebx]
// 00873012  8b5304               mov edx, dword ptr [ebx + 4]
// 00873015  83c404               add esp, 4
// 00873018  50                   push eax
// 00873019  68ff00ff00           push 0xff00ff
// 0087301e  8d44246c             lea eax, [esp + 0x6c]
// 00873022  50                   push eax
// 00873023  83ec10               sub esp, 0x10
// 00873026  8bc4                 mov eax, esp
// 00873028  8908                 mov dword ptr [eax], ecx
// 0087302a  8b4b08               mov ecx, dword ptr [ebx + 8]
// 0087302d  895004               mov dword ptr [eax + 4], edx
// 00873030  8b530c               mov edx, dword ptr [ebx + 0xc]
// 00873033  894808               mov dword ptr [eax + 8], ecx
// 00873036  8b8c24c4000000       mov ecx, dword ptr [esp + 0xc4]
// 0087303d  89500c               mov dword ptr [eax + 0xc], edx
// 00873040  8d442460             lea eax, [esp + 0x60]
// 00873044  50                   push eax
// 00873045  51                   push ecx
// 00873046  8bcd                 mov ecx, ebp
// 00873048  e883e20600           call 0x8e12d0
// 0087304d  8b8424b0000000       mov eax, dword ptr [esp + 0xb0]
// 00873054  8b8c24a8000000       mov ecx, dword ptr [esp + 0xa8]
// 0087305b  8b17                 mov edx, dword ptr [edi]
// 0087305d  8b525c               mov edx, dword ptr [edx + 0x5c]
// 00873060  50                   push eax
// 00873061  56                   push esi
// 00873062  8bb424ac000000       mov esi, dword ptr [esp + 0xac]
// 00873069  51                   push ecx
// 0087306a  56                   push esi
// 0087306b  8bcf                 mov ecx, edi
// 0087306d  ffd2                 call edx
// 0087306f  e961040000           jmp 0x8734d5
// 00873074  83bc24b000000000     cmp dword ptr [esp + 0xb0], 0
// 0087307c  8b9c24a8000000       mov ebx, dword ptr [esp + 0xa8]
// 00873083  0f841f010000         je 0x8731a8
// 00873089  8b86c0000000         mov eax, dword ptr [esi + 0xc0]
// 0087308f  8b8ec4000000         mov ecx, dword ptr [esi + 0xc4]
// 00873095  8b96c8000000         mov edx, dword ptr [esi + 0xc8]
// 0087309b  89442464             mov dword ptr [esp + 0x64], eax
// 0087309f  8b86cc000000         mov eax, dword ptr [esi + 0xcc]
// 008730a5  894c2468             mov dword ptr [esp + 0x68], ecx
// 008730a9  8bcd                 mov ecx, ebp
// 008730ab  8954246c             mov dword ptr [esp + 0x6c], edx
// 008730af  89442470             mov dword ptr [esp + 0x70], eax
// 008730b3  e848640700           call 0x8e9500
// 008730b8  8b8094000000         mov eax, dword ptr [eax + 0x94]
// 008730be  85c0                 test eax, eax
// 008730c0  746f                 je 0x873131
// 008730c2  50                   push eax
// 008730c3  8d4c2420             lea ecx, [esp + 0x20]
// 008730c7  51                   push ecx
// 008730c8  e8d3dfffff           call 0x8710a0
// 008730cd  83c408               add esp, 8
// 008730d0  8bc8                 mov ecx, eax
// 008730d2  c784249c00000000000000 mov dword ptr [esp + 0x9c], 0
// 008730dd  ff1580de9800         call dword ptr [0x98de80]
// 008730e3  50                   push eax
// 008730e4  8d54241c             lea edx, [esp + 0x1c]
// 008730e8  686013a000           push 0xa01360
// 008730ed  52                   push edx
// 008730ee  e83ddfffff           call 0x871030
// 008730f3  83c40c               add esp, 0xc
// 008730f6  8bc8                 mov ecx, eax
// 008730f8  c684249c00000001     mov byte ptr [esp + 0x9c], 1
// 00873100  ff1580de9800         call dword ptr [0x98de80]
// 00873106  50                   push eax
// 00873107  8bcf                 mov ecx, edi
// 00873109  e8f2bb0000           call 0x87ed00
// 0087310e  8d4c2418             lea ecx, [esp + 0x18]
// 00873112  8be8                 mov ebp, eax
// 00873114  ff15c0de9800         call dword ptr [0x98dec0]
// 0087311a  8d4c241c             lea ecx, [esp + 0x1c]
// 0087311e  c784249c000000ffffffff mov dword ptr [esp + 0x9c], 0xffffffff
// 00873129  ff15c0de9800         call dword ptr [0x98dec0]
// 0087312f  eb0e                 jmp 0x87313f
// 00873131  684c13a000           push 0xa0134c
// 00873136  8bcf                 mov ecx, edi
// 00873138  e8c3bb0000           call 0x87ed00
// 0087313d  8be8                 mov ebp, eax
// 0087313f  85ed                 test ebp, ebp
// 00873141  7465                 je 0x8731a8
// 00873143  8b442414             mov eax, dword ptr [esp + 0x14]
// 00873147  6a03                 push 3
// 00873149  50                   push eax
// 0087314a  8d4c244c             lea ecx, [esp + 0x4c]
// 0087314e  51                   push ecx
// 0087314f  8bcd                 mov ecx, ebp
// 00873151  c784248c00000005000000 mov dword ptr [esp + 0x8c], 5
// 0087315c  e85fd70600           call 0x8e08c0
// 00873161  83ec10               sub esp, 0x10
// 00873164  8bcc                 mov ecx, esp
// 00873166  ba05000000           mov edx, 5
// 0087316b  8911                 mov dword ptr [ecx], edx
// 0087316d  895104               mov dword ptr [ecx + 4], edx
// 00873170  895108               mov dword ptr [ecx + 8], edx
// 00873173  8b942490000000       mov edx, dword ptr [esp + 0x90]
// 0087317a  89510c               mov dword ptr [ecx + 0xc], edx
// 0087317d  8b10                 mov edx, dword ptr [eax]
// 0087317f  83ec10               sub esp, 0x10
// 00873182  8bcc                 mov ecx, esp
// 00873184  8911                 mov dword ptr [ecx], edx
// 00873186  8b5004               mov edx, dword ptr [eax + 4]
// 00873189  895104               mov dword ptr [ecx + 4], edx
// 0087318c  8b5008               mov edx, dword ptr [eax + 8]
// 0087318f  8b400c               mov eax, dword ptr [eax + 0xc]
// 00873192  895108               mov dword ptr [ecx + 8], edx
// 00873195  89410c               mov dword ptr [ecx + 0xc], eax
// 00873198  8d8c2484000000       lea ecx, [esp + 0x84]
// 0087319f  51                   push ecx
// 008731a0  53                   push ebx
// 008731a1  8bcd                 mov ecx, ebp
// 008731a3  e8e8cf0600           call 0x8e0190
// 008731a8  8b8710010000         mov eax, dword ptr [edi + 0x110]
// 008731ae  8d6c00fd             lea ebp, [eax + eax - 3]
// 008731b2  83fd2a               cmp ebp, 0x2a
// 008731b5  7d05                 jge 0x8731bc
// 008731b7  bd2a000000           mov ebp, 0x2a
// 008731bc  8b8714010000         mov eax, dword ptr [edi + 0x114]
// 008731c2  8d1440               lea edx, [eax + eax*2]
// 008731c5  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 008731cb  89542428             mov dword ptr [esp + 0x28], edx
// 008731cf  8b17                 mov edx, dword ptr [edi]
// 008731d1  6a00                 push 0
// 008731d3  50                   push eax
// 008731d4  8b82e0000000         mov eax, dword ptr [edx + 0xe0]
// 008731da  8bcf                 mov ecx, edi
// 008731dc  896c244c             mov dword ptr [esp + 0x4c], ebp
// 008731e0  ffd0                 call eax
// 008731e2  50                   push eax
// 008731e3  53                   push ebx
// 008731e4  8d8c248c000000       lea ecx, [esp + 0x8c]
// 008731eb  e87084fdff           call 0x84b660
// 008731f0  8bcf                 mov ecx, edi
// 008731f2  c784249c00000002000000 mov dword ptr [esp + 0x9c], 2
// 008731fd  e83eadf8ff           call 0x7fdf40
// 00873202  83bc24b000000000     cmp dword ptr [esp + 0xb0], 0
// 0087320a  89442424             mov dword ptr [esp + 0x24], eax
// 0087320e  0f844f020000         je 0x873463
// 00873214  8b16                 mov edx, dword ptr [esi]
// 00873216  8b82a8000000         mov eax, dword ptr [edx + 0xa8]
// 0087321c  6a00                 push 0
// 0087321e  8bce                 mov ecx, esi
// 00873220  ffd0                 call eax
// 00873222  8b96c0000000         mov edx, dword ptr [esi + 0xc0]
// 00873228  8baecc000000         mov ebp, dword ptr [esi + 0xcc]
// 0087322e  33c9                 xor ecx, ecx
// 00873230  85c0                 test eax, eax
// 00873232  0f95c1               setne cl
// 00873235  89542464             mov dword ptr [esp + 0x64], edx
// 00873239  8b96c4000000         mov edx, dword ptr [esi + 0xc4]
// 0087323f  89542468             mov dword ptr [esp + 0x68], edx
// 00873243  8b96c8000000         mov edx, dword ptr [esi + 0xc8]
// 00873249  89442418             mov dword ptr [esp + 0x18], eax
// 0087324d  8954246c             mov dword ptr [esp + 0x6c], edx
// 00873251  896c2470             mov dword ptr [esp + 0x70], ebp
// 00873255  85c9                 test ecx, ecx
// 00873257  0f848b010000         je 0x8733e8
// 0087325d  8bc8                 mov ecx, eax
// 0087325f  e80c26c6ff           call 0x4d5870
// 00873264  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00873268  89442420             mov dword ptr [esp + 0x20], eax
// 0087326c  e80faafdff           call 0x84dc80
// 00873271  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 00873275  89442434             mov dword ptr [esp + 0x34], eax
// 00873279  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 0087327d  03c1                 add eax, ecx
// 0087327f  99                   cdq 
// 00873280  2bc2                 sub eax, edx
// 00873282  8b542468             mov edx, dword ptr [esp + 0x68]
// 00873286  8bc8                 mov ecx, eax
// 00873288  8b442434             mov eax, dword ptr [esp + 0x34]
// 0087328c  83c204               add edx, 4
// 0087328f  8954241c             mov dword ptr [esp + 0x1c], edx
// 00873293  99                   cdq 
// 00873294  2bc2                 sub eax, edx
// 00873296  d1f9                 sar ecx, 1
// 00873298  d1f8                 sar eax, 1
// 0087329a  894c2414             mov dword ptr [esp + 0x14], ecx
// 0087329e  2bc8                 sub ecx, eax
// 008732a0  837c243414           cmp dword ptr [esp + 0x34], 0x14
// 008732a5  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008732a9  894c242c             mov dword ptr [esp + 0x2c], ecx
// 008732ad  89442430             mov dword ptr [esp + 0x30], eax
// 008732b1  0f8dbb000000         jge 0x873372
// 008732b7  683413a000           push 0xa01334
// 008732bc  8bcf                 mov ecx, edi
// 008732be  e83dba0000           call 0x87ed00
// 008732c3  8be8                 mov ebp, eax
// 008732c5  8bcd                 mov ecx, ebp
// 008732c7  e874d60600           call 0x8e0940
// 008732cc  8bcd                 mov ecx, ebp
// 008732ce  8944241c             mov dword ptr [esp + 0x1c], eax
// 008732d2  e889d60600           call 0x8e0960
// 008732d7  8bcd                 mov ecx, ebp
// 008732d9  89442454             mov dword ptr [esp + 0x54], eax
// 008732dd  e87ed60600           call 0x8e0960
// 008732e2  8b542454             mov edx, dword ptr [esp + 0x54]
// 008732e6  8bc8                 mov ecx, eax
// 008732e8  8b442414             mov eax, dword ptr [esp + 0x14]
// 008732ec  d1e9                 shr ecx, 1
// 008732ee  2bc1                 sub eax, ecx
// 008732f0  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008732f4  89442474             mov dword ptr [esp + 0x74], eax
// 008732f8  03c2                 add eax, edx
// 008732fa  8944247c             mov dword ptr [esp + 0x7c], eax
// 008732fe  8b442468             mov eax, dword ptr [esp + 0x68]
// 00873302  83c002               add eax, 2
// 00873305  03c8                 add ecx, eax
// 00873307  89442478             mov dword ptr [esp + 0x78], eax
// 0087330b  898c2480000000       mov dword ptr [esp + 0x80], ecx
// 00873312  85ed                 test ebp, ebp
// 00873314  744d                 je 0x873363
// 00873316  6a01                 push 1
// 00873318  6a00                 push 0
// 0087331a  8d54245c             lea edx, [esp + 0x5c]
// 0087331e  52                   push edx
// 0087331f  8bcd                 mov ecx, ebp
// 00873321  e89ad50600           call 0x8e08c0
// 00873326  33d2                 xor edx, edx
// 00873328  83ec10               sub esp, 0x10
// 0087332b  8bcc                 mov ecx, esp
// 0087332d  8911                 mov dword ptr [ecx], edx
// 0087332f  895104               mov dword ptr [ecx + 4], edx
// 00873332  895108               mov dword ptr [ecx + 8], edx
// 00873335  89510c               mov dword ptr [ecx + 0xc], edx
// 00873338  8b10                 mov edx, dword ptr [eax]
// 0087333a  83ec10               sub esp, 0x10
// 0087333d  8bcc                 mov ecx, esp
// 0087333f  8911                 mov dword ptr [ecx], edx
// 00873341  8b5004               mov edx, dword ptr [eax + 4]
// 00873344  895104               mov dword ptr [ecx + 4], edx
// 00873347  8b5008               mov edx, dword ptr [eax + 8]
// 0087334a  8b400c               mov eax, dword ptr [eax + 0xc]
// 0087334d  895108               mov dword ptr [ecx + 8], edx
// 00873350  89410c               mov dword ptr [ecx + 0xc], eax
// 00873353  8d8c2494000000       lea ecx, [esp + 0x94]
// 0087335a  51                   push ecx
// 0087335b  53                   push ebx
// 0087335c  8bcd                 mov ecx, ebp
// 0087335e  e82dce0600           call 0x8e0190
// 00873363  8b542468             mov edx, dword ptr [esp + 0x68]
// 00873367  8b6c2470             mov ebp, dword ptr [esp + 0x70]
// 0087336b  83c209               add edx, 9
// 0087336e  89542430             mov dword ptr [esp + 0x30], edx
// 00873372  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 00873378  83f8ff               cmp eax, -1
// 0087337b  750f                 jne 0x87338c
// 0087337d  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 00873383  85c9                 test ecx, ecx
// 00873385  7405                 je 0x87338c
// 00873387  e82432f8ff           call 0x7f65b0
// 0087338c  8b16                 mov edx, dword ptr [esi]
// 0087338e  89442414             mov dword ptr [esp + 0x14], eax
// 00873392  8b07                 mov eax, dword ptr [edi]
// 00873394  8944241c             mov dword ptr [esp + 0x1c], eax
// 00873398  8b82b4000000         mov eax, dword ptr [edx + 0xb4]
// 0087339e  6a01                 push 1
// 008733a0  8bce                 mov ecx, esi
// 008733a2  ffd0                 call eax
// 008733a4  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008733a8  8b16                 mov edx, dword ptr [esi]
// 008733aa  50                   push eax
// 008733ab  8b4278               mov eax, dword ptr [edx + 0x78]
// 008733ae  6a00                 push 0
// 008733b0  51                   push ecx
// 008733b1  8bce                 mov ecx, esi
// 008733b3  ffd0                 call eax
// 008733b5  8b16                 mov edx, dword ptr [esi]
// 008733b7  50                   push eax
// 008733b8  8b426c               mov eax, dword ptr [edx + 0x6c]
// 008733bb  8bce                 mov ecx, esi
// 008733bd  ffd0                 call eax
// 008733bf  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 008733c3  8b542434             mov edx, dword ptr [esp + 0x34]
// 008733c7  50                   push eax
// 008733c8  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 008733cc  51                   push ecx
// 008733cd  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 008733d1  52                   push edx
// 008733d2  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 008733d6  50                   push eax
// 008733d7  8b442440             mov eax, dword ptr [esp + 0x40]
// 008733db  51                   push ecx
// 008733dc  52                   push edx
// 008733dd  8b90c0000000         mov edx, dword ptr [eax + 0xc0]
// 008733e3  53                   push ebx
// 008733e4  8bcf                 mov ecx, edi
// 008733e6  ffd2                 call edx
// 008733e8  8b442464             mov eax, dword ptr [esp + 0x64]
// 008733ec  8b54246c             mov edx, dword ptr [esp + 0x6c]
// 008733f0  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 008733f4  896c2460             mov dword ptr [esp + 0x60], ebp
// 008733f8  2baf60060000         sub ebp, dword ptr [edi + 0x660]
// 008733fe  89442454             mov dword ptr [esp + 0x54], eax
// 00873402  8b03                 mov eax, dword ptr [ebx]
// 00873404  83ed02               sub ebp, 2
// 00873407  8954245c             mov dword ptr [esp + 0x5c], edx
// 0087340b  8b17                 mov edx, dword ptr [edi]
// 0087340d  896c2460             mov dword ptr [esp + 0x60], ebp
// 00873411  2b6c2424             sub ebp, dword ptr [esp + 0x24]
// 00873415  894c2458             mov dword ptr [esp + 0x58], ecx
// 00873419  89442424             mov dword ptr [esp + 0x24], eax
// 0087341d  8b427c               mov eax, dword ptr [edx + 0x7c]
// 00873420  56                   push esi
// 00873421  8bcf                 mov ecx, edi
// 00873423  ffd0                 call eax
// 00873425  8b542424             mov edx, dword ptr [esp + 0x24]
// 00873429  50                   push eax
// 0087342a  8b4238               mov eax, dword ptr [edx + 0x38]
// 0087342d  8bcb                 mov ecx, ebx
// 0087342f  ffd0                 call eax
// 00873431  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 00873435  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 00873439  6a01                 push 1
// 0087343b  6a00                 push 0
// 0087343d  6a01                 push 1
// 0087343f  83ec10               sub esp, 0x10
// 00873442  8bc4                 mov eax, esp
// 00873444  8908                 mov dword ptr [eax], ecx
// 00873446  8b4c247c             mov ecx, dword ptr [esp + 0x7c]
// 0087344a  896804               mov dword ptr [eax + 4], ebp
// 0087344d  56                   push esi
// 0087344e  895008               mov dword ptr [eax + 8], edx
// 00873451  53                   push ebx
// 00873452  8d542478             lea edx, [esp + 0x78]
// 00873456  89480c               mov dword ptr [eax + 0xc], ecx
// 00873459  52                   push edx
// 0087345a  8bcf                 mov ecx, edi
// 0087345c  e80fbdf8ff           call 0x7ff170
// 00873461  eb47                 jmp 0x8734aa
// 00873463  8d4c2434             lea ecx, [esp + 0x34]
// 00873467  e8c47dfdff           call 0x84b230
// 0087346c  8b10                 mov edx, dword ptr [eax]
// 0087346e  6a01                 push 1
// 00873470  6a00                 push 0
// 00873472  6a00                 push 0
// 00873474  83ec10               sub esp, 0x10
// 00873477  8bcc                 mov ecx, esp
// 00873479  8911                 mov dword ptr [ecx], edx
// 0087347b  8b5004               mov edx, dword ptr [eax + 4]
// 0087347e  895104               mov dword ptr [ecx + 4], edx
// 00873481  8b5008               mov edx, dword ptr [eax + 8]
// 00873484  8b400c               mov eax, dword ptr [eax + 0xc]
// 00873487  895108               mov dword ptr [ecx + 8], edx
// 0087348a  56                   push esi
// 0087348b  89410c               mov dword ptr [ecx + 0xc], eax
// 0087348e  53                   push ebx
// 0087348f  8d4c2478             lea ecx, [esp + 0x78]
// 00873493  51                   push ecx
// 00873494  8bcf                 mov ecx, edi
// 00873496  e8d5bcf8ff           call 0x7ff170
// 0087349b  8b442454             mov eax, dword ptr [esp + 0x54]
// 0087349f  83c005               add eax, 5
// 008734a2  3be8                 cmp ebp, eax
// 008734a4  7f04                 jg 0x8734aa
// 008734a6  89442444             mov dword ptr [esp + 0x44], eax
// 008734aa  8bb424a4000000       mov esi, dword ptr [esp + 0xa4]
// 008734b1  8b542444             mov edx, dword ptr [esp + 0x44]
// 008734b5  8b442428             mov eax, dword ptr [esp + 0x28]
// 008734b9  8d8c2484000000       lea ecx, [esp + 0x84]
// 008734c0  8916                 mov dword ptr [esi], edx
// 008734c2  894604               mov dword ptr [esi + 4], eax
// 008734c5  c784249c000000ffffffff mov dword ptr [esp + 0x9c], 0xffffffff
// 008734d0  e80b82fdff           call 0x84b6e0
// 008734d5  8bc6                 mov eax, esi
// 008734d7  8b8c2494000000       mov ecx, dword ptr [esp + 0x94]
// 008734de  64890d00000000       mov dword ptr fs:[0], ecx
// 008734e5  59                   pop ecx
// 008734e6  5f                   pop edi
// 008734e7  5e                   pop esi
// 008734e8  5d                   pop ebp
// 008734e9  5b                   pop ebx
// 008734ea  81c48c000000         add esp, 0x8c
// 008734f0  c21000               ret 0x10
// copied from an identical function in another client (function ?DrawControlGroupPopup@CXTPRibbonTheme@@UAE?AVCSize@@PAVCDC@@PAVCXTPControlPopup@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/Ribbon/XTPRibbonTheme.cpp