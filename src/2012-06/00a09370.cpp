// roc 2012-06 00a09370  unit: CXTPOffice2007Theme  size: 3422 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a09370
//
// 00a09370  6aff                 push -1
// 00a09372  68f832ae00           push 0xae32f8
// 00a09377  64a100000000         mov eax, dword ptr fs:[0]
// 00a0937d  50                   push eax
// 00a0937e  81ec38010000         sub esp, 0x138
// 00a09384  53                   push ebx
// 00a09385  55                   push ebp
// 00a09386  56                   push esi
// 00a09387  57                   push edi
// 00a09388  a1d027e000           mov eax, dword ptr [0xe027d0]
// 00a0938d  33c4                 xor eax, esp
// 00a0938f  50                   push eax
// 00a09390  8d84244c010000       lea eax, [esp + 0x14c]
// 00a09397  64a300000000         mov dword ptr fs:[0], eax
// 00a0939d  8bf9                 mov edi, ecx
// 00a0939f  8bb42460010000       mov esi, dword ptr [esp + 0x160]
// 00a093a6  8b4608               mov eax, dword ptr [esi + 8]
// 00a093a9  50                   push eax
// 00a093aa  e8b792f7ff           call 0x982666
// 00a093af  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 00a093b2  8bd8                 mov ebx, eax
// 00a093b4  894c2418             mov dword ptr [esp + 0x18], ecx
// 00a093b8  53                   push ebx
// 00a093b9  8d8c2410010000       lea ecx, [esp + 0x110]
// 00a093c0  895c2440             mov dword ptr [esp + 0x40], ebx
// 00a093c4  e8d7bdfcff           call 0x9d51a0
// 00a093c9  8d94240c010000       lea edx, [esp + 0x10c]
// 00a093d0  52                   push edx
// 00a093d1  8bcb                 mov ecx, ebx
// 00a093d3  e8d692f7ff           call 0x9826ae
// 00a093d8  53                   push ebx
// 00a093d9  8d4c2420             lea ecx, [esp + 0x20]
// 00a093dd  e85ebdfcff           call 0x9d5140
// 00a093e2  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00a093e6  2b8c2418010000       sub ecx, dword ptr [esp + 0x118]
// 00a093ed  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00a093f1  8bac240c010000       mov ebp, dword ptr [esp + 0x10c]
// 00a093f8  894c2454             mov dword ptr [esp + 0x54], ecx
// 00a093fc  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00a09400  2be8                 sub ebp, eax
// 00a09402  f7d9                 neg ecx
// 00a09404  f7d8                 neg eax
// 00a09406  51                   push ecx
// 00a09407  50                   push eax
// 00a09408  8d442424             lea eax, [esp + 0x24]
// 00a0940c  50                   push eax
// 00a0940d  ff15f43ab200         call dword ptr [0xb23af4]
// 00a09413  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00a09417  8b542424             mov edx, dword ptr [esp + 0x24]
// 00a0941b  8b442428             mov eax, dword ptr [esp + 0x28]
// 00a0941f  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 00a09423  898c24a4000000       mov dword ptr [esp + 0xa4], ecx
// 00a0942a  8bce                 mov ecx, esi
// 00a0942c  899424ac000000       mov dword ptr [esp + 0xac], edx
// 00a09433  898424b0000000       mov dword ptr [esp + 0xb0], eax
// 00a0943a  e8a1740600           call 0xa708e0
// 00a0943f  8d4c2458             lea ecx, [esp + 0x58]
// 00a09443  51                   push ecx
// 00a09444  8bce                 mov ecx, esi
// 00a09446  89442444             mov dword ptr [esp + 0x44], eax
// 00a0944a  03d8                 add ebx, eax
// 00a0944c  c744245c00000000     mov dword ptr [esp + 0x5c], 0
// 00a09454  e847760600           call 0xa70aa0
// 00a09459  898424c4000000       mov dword ptr [esp + 0xc4], eax
// 00a09460  85c0                 test eax, eax
// 00a09462  8b8424b0000000       mov eax, dword ptr [esp + 0xb0]
// 00a09469  7409                 je 0xa09474
// 00a0946b  2b442458             sub eax, dword ptr [esp + 0x58]
// 00a0946f  2bc3                 sub eax, ebx
// 00a09471  48                   dec eax
// 00a09472  eb02                 jmp 0xa09476
// 00a09474  2bc3                 sub eax, ebx
// 00a09476  89442414             mov dword ptr [esp + 0x14], eax
// 00a0947a  85ed                 test ebp, ebp
// 00a0947c  7e3c                 jle 0xa094ba
// 00a0947e  837c241800           cmp dword ptr [esp + 0x18], 0
// 00a09483  7408                 je 0xa0948d
// 00a09485  8b87cc050000         mov eax, dword ptr [edi + 0x5cc]
// 00a0948b  eb06                 jmp 0xa09493
// 00a0948d  8b87dc050000         mov eax, dword ptr [edi + 0x5dc]
// 00a09493  8b9424b0000000       mov edx, dword ptr [esp + 0xb0]
// 00a0949a  8bb4245c010000       mov esi, dword ptr [esp + 0x15c]
// 00a094a1  50                   push eax
// 00a094a2  8b442420             mov eax, dword ptr [esp + 0x20]
// 00a094a6  2bd3                 sub edx, ebx
// 00a094a8  52                   push edx
// 00a094a9  6a01                 push 1
// 00a094ab  53                   push ebx
// 00a094ac  50                   push eax
// 00a094ad  8bce                 mov ecx, esi
// 00a094af  e8dc000900           call 0xa99590
// 00a094b4  8b442414             mov eax, dword ptr [esp + 0x14]
// 00a094b8  eb07                 jmp 0xa094c1
// 00a094ba  8bb4245c010000       mov esi, dword ptr [esp + 0x15c]
// 00a094c1  83fd01               cmp ebp, 1
// 00a094c4  7e2b                 jle 0xa094f1
// 00a094c6  837c241800           cmp dword ptr [esp + 0x18], 0
// 00a094cb  7408                 je 0xa094d5
// 00a094cd  8b8fd0050000         mov ecx, dword ptr [edi + 0x5d0]
// 00a094d3  eb06                 jmp 0xa094db
// 00a094d5  8b8fe0050000         mov ecx, dword ptr [edi + 0x5e0]
// 00a094db  51                   push ecx
// 00a094dc  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00a094e0  50                   push eax
// 00a094e1  6a01                 push 1
// 00a094e3  41                   inc ecx
// 00a094e4  53                   push ebx
// 00a094e5  51                   push ecx
// 00a094e6  8bce                 mov ecx, esi
// 00a094e8  e8a3000900           call 0xa99590
// 00a094ed  8b442414             mov eax, dword ptr [esp + 0x14]
// 00a094f1  83fd02               cmp ebp, 2
// 00a094f4  7e2d                 jle 0xa09523
// 00a094f6  837c241800           cmp dword ptr [esp + 0x18], 0
// 00a094fb  7408                 je 0xa09505
// 00a094fd  8b8fd4050000         mov ecx, dword ptr [edi + 0x5d4]
// 00a09503  eb06                 jmp 0xa0950b
// 00a09505  8b8fe4050000         mov ecx, dword ptr [edi + 0x5e4]
// 00a0950b  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00a0950f  51                   push ecx
// 00a09510  50                   push eax
// 00a09511  6a01                 push 1
// 00a09513  53                   push ebx
// 00a09514  83c202               add edx, 2
// 00a09517  52                   push edx
// 00a09518  8bce                 mov ecx, esi
// 00a0951a  e871000900           call 0xa99590
// 00a0951f  8b442414             mov eax, dword ptr [esp + 0x14]
// 00a09523  83fd03               cmp ebp, 3
// 00a09526  7e2f                 jle 0xa09557
// 00a09528  837c241800           cmp dword ptr [esp + 0x18], 0
// 00a0952d  7408                 je 0xa09537
// 00a0952f  8b8fd8050000         mov ecx, dword ptr [edi + 0x5d8]
// 00a09535  eb06                 jmp 0xa0953d
// 00a09537  8b8fe8050000         mov ecx, dword ptr [edi + 0x5e8]
// 00a0953d  51                   push ecx
// 00a0953e  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00a09542  50                   push eax
// 00a09543  8d45fd               lea eax, [ebp - 3]
// 00a09546  50                   push eax
// 00a09547  83c103               add ecx, 3
// 00a0954a  53                   push ebx
// 00a0954b  51                   push ecx
// 00a0954c  8bce                 mov ecx, esi
// 00a0954e  e83d000900           call 0xa99590
// 00a09553  8b442414             mov eax, dword ptr [esp + 0x14]
// 00a09557  85ed                 test ebp, ebp
// 00a09559  7e34                 jle 0xa0958f
// 00a0955b  837c241800           cmp dword ptr [esp + 0x18], 0
// 00a09560  7408                 je 0xa0956a
// 00a09562  8b87cc050000         mov eax, dword ptr [edi + 0x5cc]
// 00a09568  eb06                 jmp 0xa09570
// 00a0956a  8b87dc050000         mov eax, dword ptr [edi + 0x5dc]
// 00a09570  8b542424             mov edx, dword ptr [esp + 0x24]
// 00a09574  50                   push eax
// 00a09575  8b8424b4000000       mov eax, dword ptr [esp + 0xb4]
// 00a0957c  2bc3                 sub eax, ebx
// 00a0957e  50                   push eax
// 00a0957f  6a01                 push 1
// 00a09581  53                   push ebx
// 00a09582  4a                   dec edx
// 00a09583  52                   push edx
// 00a09584  8bce                 mov ecx, esi
// 00a09586  e805000900           call 0xa99590
// 00a0958b  8b442414             mov eax, dword ptr [esp + 0x14]
// 00a0958f  83fd01               cmp ebp, 1
// 00a09592  7e2d                 jle 0xa095c1
// 00a09594  837c241800           cmp dword ptr [esp + 0x18], 0
// 00a09599  7408                 je 0xa095a3
// 00a0959b  8b8fd0050000         mov ecx, dword ptr [edi + 0x5d0]
// 00a095a1  eb06                 jmp 0xa095a9
// 00a095a3  8b8fe0050000         mov ecx, dword ptr [edi + 0x5e0]
// 00a095a9  51                   push ecx
// 00a095aa  50                   push eax
// 00a095ab  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00a095af  6a01                 push 1
// 00a095b1  53                   push ebx
// 00a095b2  83c0fe               add eax, -2
// 00a095b5  50                   push eax
// 00a095b6  8bce                 mov ecx, esi
// 00a095b8  e8d3ff0800           call 0xa99590
// 00a095bd  8b442414             mov eax, dword ptr [esp + 0x14]
// 00a095c1  83fd02               cmp ebp, 2
// 00a095c4  7e2d                 jle 0xa095f3
// 00a095c6  837c241800           cmp dword ptr [esp + 0x18], 0
// 00a095cb  7408                 je 0xa095d5
// 00a095cd  8b8fd4050000         mov ecx, dword ptr [edi + 0x5d4]
// 00a095d3  eb06                 jmp 0xa095db
// 00a095d5  8b8fe4050000         mov ecx, dword ptr [edi + 0x5e4]
// 00a095db  51                   push ecx
// 00a095dc  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00a095e0  50                   push eax
// 00a095e1  6a01                 push 1
// 00a095e3  83c1fd               add ecx, -3
// 00a095e6  53                   push ebx
// 00a095e7  51                   push ecx
// 00a095e8  8bce                 mov ecx, esi
// 00a095ea  e8a1ff0800           call 0xa99590
// 00a095ef  8b442414             mov eax, dword ptr [esp + 0x14]
// 00a095f3  83fd03               cmp ebp, 3
// 00a095f6  7e2a                 jle 0xa09622
// 00a095f8  837c241800           cmp dword ptr [esp + 0x18], 0
// 00a095fd  7408                 je 0xa09607
// 00a095ff  8b8fd8050000         mov ecx, dword ptr [edi + 0x5d8]
// 00a09605  eb06                 jmp 0xa0960d
// 00a09607  8b8fe8050000         mov ecx, dword ptr [edi + 0x5e8]
// 00a0960d  51                   push ecx
// 00a0960e  50                   push eax
// 00a0960f  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00a09613  8d55fd               lea edx, [ebp - 3]
// 00a09616  52                   push edx
// 00a09617  53                   push ebx
// 00a09618  2bc5                 sub eax, ebp
// 00a0961a  50                   push eax
// 00a0961b  8bce                 mov ecx, esi
// 00a0961d  e86eff0800           call 0xa99590
// 00a09622  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00a09626  85db                 test ebx, ebx
// 00a09628  7420                 je 0xa0964a
// 00a0962a  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00a0962e  e89fff0800           call 0xa995d2
// 00a09633  a900000001           test eax, 0x1000000
// 00a09638  7408                 je 0xa09642
// 00a0963a  8b87d8050000         mov eax, dword ptr [edi + 0x5d8]
// 00a09640  eb0e                 jmp 0xa09650
// 00a09642  8b87cc050000         mov eax, dword ptr [edi + 0x5cc]
// 00a09648  eb06                 jmp 0xa09650
// 00a0964a  8b87dc050000         mov eax, dword ptr [edi + 0x5dc]
// 00a09650  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00a09654  8b542428             mov edx, dword ptr [esp + 0x28]
// 00a09658  50                   push eax
// 00a09659  8b442420             mov eax, dword ptr [esp + 0x20]
// 00a0965d  6a01                 push 1
// 00a0965f  2bc8                 sub ecx, eax
// 00a09661  51                   push ecx
// 00a09662  4a                   dec edx
// 00a09663  52                   push edx
// 00a09664  50                   push eax
// 00a09665  8bce                 mov ecx, esi
// 00a09667  e824ff0800           call 0xa99590
// 00a0966c  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 00a09670  83f901               cmp ecx, 1
// 00a09673  7e35                 jle 0xa096aa
// 00a09675  85db                 test ebx, ebx
// 00a09677  7408                 je 0xa09681
// 00a09679  8b87d8050000         mov eax, dword ptr [edi + 0x5d8]
// 00a0967f  eb06                 jmp 0xa09687
// 00a09681  8b87e8050000         mov eax, dword ptr [edi + 0x5e8]
// 00a09687  8b542424             mov edx, dword ptr [esp + 0x24]
// 00a0968b  50                   push eax
// 00a0968c  8d41ff               lea eax, [ecx - 1]
// 00a0968f  50                   push eax
// 00a09690  8b442424             mov eax, dword ptr [esp + 0x24]
// 00a09694  2bd0                 sub edx, eax
// 00a09696  83ea02               sub edx, 2
// 00a09699  52                   push edx
// 00a0969a  8b542434             mov edx, dword ptr [esp + 0x34]
// 00a0969e  2bd1                 sub edx, ecx
// 00a096a0  52                   push edx
// 00a096a1  40                   inc eax
// 00a096a2  50                   push eax
// 00a096a3  8bce                 mov ecx, esi
// 00a096a5  e8e6fe0800           call 0xa99590
// 00a096aa  8b442420             mov eax, dword ptr [esp + 0x20]
// 00a096ae  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00a096b2  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00a096b6  03c8                 add ecx, eax
// 00a096b8  89442470             mov dword ptr [esp + 0x70], eax
// 00a096bc  8b442424             mov eax, dword ptr [esp + 0x24]
// 00a096c0  894c2478             mov dword ptr [esp + 0x78], ecx
// 00a096c4  8b8c2460010000       mov ecx, dword ptr [esp + 0x160]
// 00a096cb  8954246c             mov dword ptr [esp + 0x6c], edx
// 00a096cf  89442474             mov dword ptr [esp + 0x74], eax
// 00a096d3  e888710600           call 0xa70860
// 00a096d8  85c0                 test eax, eax
// 00a096da  0f8481050000         je 0xa09c61
// 00a096e0  85f6                 test esi, esi
// 00a096e2  7403                 je 0xa096e7
// 00a096e4  8b7604               mov esi, dword ptr [esi + 4]
// 00a096e7  8d4c246c             lea ecx, [esp + 0x6c]
// 00a096eb  51                   push ecx
// 00a096ec  56                   push esi
// 00a096ed  8d8c2424010000       lea ecx, [esp + 0x124]
// 00a096f4  e807bbfcff           call 0x9d5200
// 00a096f9  68a8c0c100           push 0xc1c0a8
// 00a096fe  8bcf                 mov ecx, edi
// 00a09700  c784245801000000000000 mov dword ptr [esp + 0x158], 0
// 00a0970b  e860e1ffff           call 0xa07870
// 00a09710  33db                 xor ebx, ebx
// 00a09712  395c2418             cmp dword ptr [esp + 0x18], ebx
// 00a09716  6a02                 push 2
// 00a09718  0f94c3               sete bl
// 00a0971b  8bf0                 mov esi, eax
// 00a0971d  8d9424b8000000       lea edx, [esp + 0xb8]
// 00a09724  8bce                 mov ecx, esi
// 00a09726  53                   push ebx
// 00a09727  52                   push edx
// 00a09728  e8c3c30500           call 0xa65af0
// 00a0972d  8b8c24bc000000       mov ecx, dword ptr [esp + 0xbc]
// 00a09734  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00a09738  8bc1                 mov eax, ecx
// 00a0973a  2b8424b4000000       sub eax, dword ptr [esp + 0xb4]
// 00a09741  899424cc000000       mov dword ptr [esp + 0xcc], edx
// 00a09748  03c2                 add eax, edx
// 00a0974a  8b542420             mov edx, dword ptr [esp + 0x20]
// 00a0974e  899424d0000000       mov dword ptr [esp + 0xd0], edx
// 00a09755  898424d4000000       mov dword ptr [esp + 0xd4], eax
// 00a0975c  8b442478             mov eax, dword ptr [esp + 0x78]
// 00a09760  33d2                 xor edx, edx
// 00a09762  83ec10               sub esp, 0x10
// 00a09765  898424e8000000       mov dword ptr [esp + 0xe8], eax
// 00a0976c  8bc4                 mov eax, esp
// 00a0976e  8910                 mov dword ptr [eax], edx
// 00a09770  89942498000000       mov dword ptr [esp + 0x98], edx
// 00a09777  ba05000000           mov edx, 5
// 00a0977c  895004               mov dword ptr [eax + 4], edx
// 00a0977f  8b942498000000       mov edx, dword ptr [esp + 0x98]
// 00a09786  895008               mov dword ptr [eax + 8], edx
// 00a09789  83ec10               sub esp, 0x10
// 00a0978c  ba03000000           mov edx, 3
// 00a09791  89500c               mov dword ptr [eax + 0xc], edx
// 00a09794  8b9424d4000000       mov edx, dword ptr [esp + 0xd4]
// 00a0979b  8bc4                 mov eax, esp
// 00a0979d  8910                 mov dword ptr [eax], edx
// 00a0979f  8b9424d8000000       mov edx, dword ptr [esp + 0xd8]
// 00a097a6  895004               mov dword ptr [eax + 4], edx
// 00a097a9  894808               mov dword ptr [eax + 8], ecx
// 00a097ac  8b8c24e0000000       mov ecx, dword ptr [esp + 0xe0]
// 00a097b3  89480c               mov dword ptr [eax + 0xc], ecx
// 00a097b6  8d9424ec000000       lea edx, [esp + 0xec]
// 00a097bd  52                   push edx
// 00a097be  8d842440010000       lea eax, [esp + 0x140]
// 00a097c5  50                   push eax
// 00a097c6  8bce                 mov ecx, esi
// 00a097c8  e8f3bb0500           call 0xa653c0
// 00a097cd  6898c0c100           push 0xc1c098
// 00a097d2  8bcf                 mov ecx, edi
// 00a097d4  e897e0ffff           call 0xa07870
// 00a097d9  6a02                 push 2
// 00a097db  53                   push ebx
// 00a097dc  8d8c24ac000000       lea ecx, [esp + 0xac]
// 00a097e3  8bf0                 mov esi, eax
// 00a097e5  51                   push ecx
// 00a097e6  8bce                 mov ecx, esi
// 00a097e8  e803c30500           call 0xa65af0
// 00a097ed  8b8c24a4000000       mov ecx, dword ptr [esp + 0xa4]
// 00a097f4  8b442424             mov eax, dword ptr [esp + 0x24]
// 00a097f8  8bd1                 mov edx, ecx
// 00a097fa  2b9424ac000000       sub edx, dword ptr [esp + 0xac]
// 00a09801  8984249c000000       mov dword ptr [esp + 0x9c], eax
// 00a09808  03d0                 add edx, eax
// 00a0980a  8b442478             mov eax, dword ptr [esp + 0x78]
// 00a0980e  89942494000000       mov dword ptr [esp + 0x94], edx
// 00a09815  8b542420             mov edx, dword ptr [esp + 0x20]
// 00a09819  89942498000000       mov dword ptr [esp + 0x98], edx
// 00a09820  33d2                 xor edx, edx
// 00a09822  898424a0000000       mov dword ptr [esp + 0xa0], eax
// 00a09829  89942488000000       mov dword ptr [esp + 0x88], edx
// 00a09830  83ec10               sub esp, 0x10
// 00a09833  8bc4                 mov eax, esp
// 00a09835  8910                 mov dword ptr [eax], edx
// 00a09837  ba05000000           mov edx, 5
// 00a0983c  895004               mov dword ptr [eax + 4], edx
// 00a0983f  8b942498000000       mov edx, dword ptr [esp + 0x98]
// 00a09846  895008               mov dword ptr [eax + 8], edx
// 00a09849  83ec10               sub esp, 0x10
// 00a0984c  ba03000000           mov edx, 3
// 00a09851  89500c               mov dword ptr [eax + 0xc], edx
// 00a09854  8b9424cc000000       mov edx, dword ptr [esp + 0xcc]
// 00a0985b  8bc4                 mov eax, esp
// 00a0985d  8908                 mov dword ptr [eax], ecx
// 00a0985f  8b8c24c8000000       mov ecx, dword ptr [esp + 0xc8]
// 00a09866  894804               mov dword ptr [eax + 4], ecx
// 00a09869  8b8c24d0000000       mov ecx, dword ptr [esp + 0xd0]
// 00a09870  895008               mov dword ptr [eax + 8], edx
// 00a09873  89480c               mov dword ptr [eax + 0xc], ecx
// 00a09876  8d9424b4000000       lea edx, [esp + 0xb4]
// 00a0987d  52                   push edx
// 00a0987e  8d842440010000       lea eax, [esp + 0x140]
// 00a09885  50                   push eax
// 00a09886  8bce                 mov ecx, esi
// 00a09888  e833bb0500           call 0xa653c0
// 00a0988d  686cc0c100           push 0xc1c06c
// 00a09892  8bcf                 mov ecx, edi
// 00a09894  e8d7dfffff           call 0xa07870
// 00a09899  8b8c24d4000000       mov ecx, dword ptr [esp + 0xd4]
// 00a098a0  2b8c24cc000000       sub ecx, dword ptr [esp + 0xcc]
// 00a098a7  8b542420             mov edx, dword ptr [esp + 0x20]
// 00a098ab  034c241c             add ecx, dword ptr [esp + 0x1c]
// 00a098af  8bf0                 mov esi, eax
// 00a098b1  8b8424a4000000       mov eax, dword ptr [esp + 0xa4]
// 00a098b8  2b8424ac000000       sub eax, dword ptr [esp + 0xac]
// 00a098bf  6a02                 push 2
// 00a098c1  03442428             add eax, dword ptr [esp + 0x28]
// 00a098c5  894c2460             mov dword ptr [esp + 0x60], ecx
// 00a098c9  53                   push ebx
// 00a098ca  8d8c2488000000       lea ecx, [esp + 0x88]
// 00a098d1  8944246c             mov dword ptr [esp + 0x6c], eax
// 00a098d5  8b842480000000       mov eax, dword ptr [esp + 0x80]
// 00a098dc  51                   push ecx
// 00a098dd  8bce                 mov ecx, esi
// 00a098df  8954246c             mov dword ptr [esp + 0x6c], edx
// 00a098e3  89442474             mov dword ptr [esp + 0x74], eax
// 00a098e7  e804c20500           call 0xa65af0
// 00a098ec  33d2                 xor edx, edx
// 00a098ee  83ec10               sub esp, 0x10
// 00a098f1  8bcc                 mov ecx, esp
// 00a098f3  8911                 mov dword ptr [ecx], edx
// 00a098f5  ba05000000           mov edx, 5
// 00a098fa  895104               mov dword ptr [ecx + 4], edx
// 00a098fd  33d2                 xor edx, edx
// 00a098ff  895108               mov dword ptr [ecx + 8], edx
// 00a09902  83ec10               sub esp, 0x10
// 00a09905  ba03000000           mov edx, 3
// 00a0990a  89510c               mov dword ptr [ecx + 0xc], edx
// 00a0990d  8b10                 mov edx, dword ptr [eax]
// 00a0990f  8bcc                 mov ecx, esp
// 00a09911  8911                 mov dword ptr [ecx], edx
// 00a09913  8b5004               mov edx, dword ptr [eax + 4]
// 00a09916  895104               mov dword ptr [ecx + 4], edx
// 00a09919  8b5008               mov edx, dword ptr [eax + 8]
// 00a0991c  8b400c               mov eax, dword ptr [eax + 0xc]
// 00a0991f  895108               mov dword ptr [ecx + 8], edx
// 00a09922  89410c               mov dword ptr [ecx + 0xc], eax
// 00a09925  8d4c247c             lea ecx, [esp + 0x7c]
// 00a09929  51                   push ecx
// 00a0992a  8d942440010000       lea edx, [esp + 0x140]
// 00a09931  52                   push edx
// 00a09932  8bce                 mov ecx, esi
// 00a09934  e887ba0500           call 0xa653c0
// 00a09939  8b742470             mov esi, dword ptr [esp + 0x70]
// 00a0993d  8b942460010000       mov edx, dword ptr [esp + 0x160]
// 00a09944  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 00a09948  037240               add esi, dword ptr [edx + 0x40]
// 00a0994b  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 00a0994f  89442444             mov dword ptr [esp + 0x44], eax
// 00a09953  8b442478             mov eax, dword ptr [esp + 0x78]
// 00a09957  894c244c             mov dword ptr [esp + 0x4c], ecx
// 00a0995b  c744244407000000     mov dword ptr [esp + 0x44], 7
// 00a09963  89742448             mov dword ptr [esp + 0x48], esi
// 00a09967  83e803               sub eax, 3
// 00a0996a  89442450             mov dword ptr [esp + 0x50], eax
// 00a0996e  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00a09972  50                   push eax
// 00a09973  8bcf                 mov ecx, edi
// 00a09975  e806f9ffff           call 0xa09280
// 00a0997a  898424c8000000       mov dword ptr [esp + 0xc8], eax
// 00a09981  85c0                 test eax, eax
// 00a09983  0f84dc000000         je 0xa09a65
// 00a09989  6a32                 push 0x32
// 00a0998b  ff15fc3bb200         call dword ptr [0xb23bfc]
// 00a09991  6a31                 push 0x31
// 00a09993  89442418             mov dword ptr [esp + 0x18], eax
// 00a09997  ff15fc3bb200         call dword ptr [0xb23bfc]
// 00a0999d  8b8c2460010000       mov ecx, dword ptr [esp + 0x160]
// 00a099a4  8944242c             mov dword ptr [esp + 0x2c], eax
// 00a099a8  8b4140               mov eax, dword ptr [ecx + 0x40]
// 00a099ab  8d48ff               lea ecx, [eax - 1]
// 00a099ae  8b442478             mov eax, dword ptr [esp + 0x78]
// 00a099b2  2b442470             sub eax, dword ptr [esp + 0x70]
// 00a099b6  2bc1                 sub eax, ecx
// 00a099b8  2b442414             sub eax, dword ptr [esp + 0x14]
// 00a099bc  99                   cdq 
// 00a099bd  2bc2                 sub eax, edx
// 00a099bf  d1f8                 sar eax, 1
// 00a099c1  03c1                 add eax, ecx
// 00a099c3  89842490000000       mov dword ptr [esp + 0x90], eax
// 00a099ca  e8c1d7fcff           call 0x9d7190
// 00a099cf  8d94241c010000       lea edx, [esp + 0x11c]
// 00a099d6  52                   push edx
// 00a099d7  e804c6fcff           call 0x9d5fe0
// 00a099dc  83c404               add esp, 4
// 00a099df  89442440             mov dword ptr [esp + 0x40], eax
// 00a099e3  83e001               and eax, 1
// 00a099e6  8944247c             mov dword ptr [esp + 0x7c], eax
// 00a099ea  741d                 je 0xa09a09
// 00a099ec  e89fd7fcff           call 0x9d7190
// 00a099f1  8b442440             mov eax, dword ptr [esp + 0x40]
// 00a099f5  83c808               or eax, 8
// 00a099f8  50                   push eax
// 00a099f9  8d8c2420010000       lea ecx, [esp + 0x120]
// 00a09a00  51                   push ecx
// 00a09a01  e80ac6fcff           call 0x9d6010
// 00a09a06  83c408               add esp, 8
// 00a09a09  8b542414             mov edx, dword ptr [esp + 0x14]
// 00a09a0d  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00a09a11  8b8c24c8000000       mov ecx, dword ptr [esp + 0xc8]
// 00a09a18  6a03                 push 3
// 00a09a1a  6a00                 push 0
// 00a09a1c  6a00                 push 0
// 00a09a1e  52                   push edx
// 00a09a1f  8b9424a0000000       mov edx, dword ptr [esp + 0xa0]
// 00a09a26  50                   push eax
// 00a09a27  8b842434010000       mov eax, dword ptr [esp + 0x134]
// 00a09a2e  51                   push ecx
// 00a09a2f  52                   push edx
// 00a09a30  6a07                 push 7
// 00a09a32  50                   push eax
// 00a09a33  ff15383db200         call dword ptr [0xb23d38]
// 00a09a39  837c247c00           cmp dword ptr [esp + 0x7c], 0
// 00a09a3e  741a                 je 0xa09a5a
// 00a09a40  e84bd7fcff           call 0x9d7190
// 00a09a45  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00a09a49  51                   push ecx
// 00a09a4a  8d942420010000       lea edx, [esp + 0x120]
// 00a09a51  52                   push edx
// 00a09a52  e8b9c5fcff           call 0x9d6010
// 00a09a57  83c408               add esp, 8
// 00a09a5a  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00a09a5e  83c00c               add eax, 0xc
// 00a09a61  89442444             mov dword ptr [esp + 0x44], eax
// 00a09a65  8b8c2460010000       mov ecx, dword ptr [esp + 0x160]
// 00a09a6c  8b5128               mov edx, dword ptr [ecx + 0x28]
// 00a09a6f  8b422c               mov eax, dword ptr [edx + 0x2c]
// 00a09a72  33c9                 xor ecx, ecx
// 00a09a74  89542440             mov dword ptr [esp + 0x40], edx
// 00a09a78  894c2414             mov dword ptr [esp + 0x14], ecx
// 00a09a7c  85c0                 test eax, eax
// 00a09a7e  7f69                 jg 0xa09ae9
// 00a09a80  8b442418             mov eax, dword ptr [esp + 0x18]
// 00a09a84  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00a09a88  296c244c             sub dword ptr [esp + 0x4c], ebp
// 00a09a8c  8b17                 mov edx, dword ptr [edi]
// 00a09a8e  8b9234010000         mov edx, dword ptr [edx + 0x134]
// 00a09a94  50                   push eax
// 00a09a95  51                   push ecx
// 00a09a96  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00a09a9a  83ec10               sub esp, 0x10
// 00a09a9d  8bc4                 mov eax, esp
// 00a09a9f  8908                 mov dword ptr [eax], ecx
// 00a09aa1  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 00a09aa5  897004               mov dword ptr [eax + 4], esi
// 00a09aa8  894808               mov dword ptr [eax + 8], ecx
// 00a09aab  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 00a09aaf  89480c               mov dword ptr [eax + 0xc], ecx
// 00a09ab2  8d842434010000       lea eax, [esp + 0x134]
// 00a09ab9  50                   push eax
// 00a09aba  8bcf                 mov ecx, edi
// 00a09abc  ffd2                 call edx
// 00a09abe  8d8c241c010000       lea ecx, [esp + 0x11c]
// 00a09ac5  c7842454010000ffffffff mov dword ptr [esp + 0x154], 0xffffffff
// 00a09ad0  e83bb9fcff           call 0x9d5410
// 00a09ad5  8bb4245c010000       mov esi, dword ptr [esp + 0x15c]
// 00a09adc  e9ec020000           jmp 0xa09dcd
// 00a09ae1  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00a09ae5  8b542440             mov edx, dword ptr [esp + 0x40]
// 00a09ae9  85c9                 test ecx, ecx
// 00a09aeb  7c18                 jl 0xa09b05
// 00a09aed  3bc8                 cmp ecx, eax
// 00a09aef  7d14                 jge 0xa09b05
// 00a09af1  3b4a2c               cmp ecx, dword ptr [edx + 0x2c]
// 00a09af4  0f8d62010000         jge 0xa09c5c
// 00a09afa  8b5228               mov edx, dword ptr [edx + 0x28]
// 00a09afd  8b348a               mov esi, dword ptr [edx + ecx*4]
// 00a09b00  8d048a               lea eax, [edx + ecx*4]
// 00a09b03  eb02                 jmp 0xa09b07
// 00a09b05  33f6                 xor esi, esi
// 00a09b07  8b06                 mov eax, dword ptr [esi]
// 00a09b09  8b9080000000         mov edx, dword ptr [eax + 0x80]
// 00a09b0f  6a00                 push 0
// 00a09b11  8bce                 mov ecx, esi
// 00a09b13  ffd2                 call edx
// 00a09b15  85c0                 test eax, eax
// 00a09b17  0f841e010000         je 0xa09c3b
// 00a09b1d  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 00a09b23  83f8ff               cmp eax, -1
// 00a09b26  750f                 jne 0xa09b37
// 00a09b28  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 00a09b2e  85c9                 test ecx, ecx
// 00a09b30  7405                 je 0xa09b37
// 00a09b32  e8e9b3f7ff           call 0x984f20
// 00a09b37  85c0                 test eax, eax
// 00a09b39  740e                 je 0xa09b49
// 00a09b3b  837c241800           cmp dword ptr [esp + 0x18], 0
// 00a09b40  7407                 je 0xa09b49
// 00a09b42  b901000000           mov ecx, 1
// 00a09b47  eb02                 jmp 0xa09b4b
// 00a09b49  33c9                 xor ecx, ecx
// 00a09b4b  8b8684000000         mov eax, dword ptr [esi + 0x84]
// 00a09b51  8b96c0000000         mov edx, dword ptr [esi + 0xc0]
// 00a09b57  8944247c             mov dword ptr [esp + 0x7c], eax
// 00a09b5b  8b86c4000000         mov eax, dword ptr [esi + 0xc4]
// 00a09b61  89442430             mov dword ptr [esp + 0x30], eax
// 00a09b65  8b86cc000000         mov eax, dword ptr [esi + 0xcc]
// 00a09b6b  89442438             mov dword ptr [esp + 0x38], eax
// 00a09b6f  8b07                 mov eax, dword ptr [edi]
// 00a09b71  8954242c             mov dword ptr [esp + 0x2c], edx
// 00a09b75  8b96c8000000         mov edx, dword ptr [esi + 0xc8]
// 00a09b7b  0530010000           add eax, 0x130
// 00a09b80  89542434             mov dword ptr [esp + 0x34], edx
// 00a09b84  8b16                 mov edx, dword ptr [esi]
// 00a09b86  89842490000000       mov dword ptr [esp + 0x90], eax
// 00a09b8d  8b4278               mov eax, dword ptr [edx + 0x78]
// 00a09b90  51                   push ecx
// 00a09b91  8bce                 mov ecx, esi
// 00a09b93  ffd0                 call eax
// 00a09b95  8b16                 mov edx, dword ptr [esi]
// 00a09b97  50                   push eax
// 00a09b98  8b426c               mov eax, dword ptr [edx + 0x6c]
// 00a09b9b  8bce                 mov ecx, esi
// 00a09b9d  ffd0                 call eax
// 00a09b9f  8b8c2484000000       mov ecx, dword ptr [esp + 0x84]
// 00a09ba6  8b542434             mov edx, dword ptr [esp + 0x34]
// 00a09baa  50                   push eax
// 00a09bab  51                   push ecx
// 00a09bac  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00a09bb0  83ec10               sub esp, 0x10
// 00a09bb3  8bc4                 mov eax, esp
// 00a09bb5  8910                 mov dword ptr [eax], edx
// 00a09bb7  8b542454             mov edx, dword ptr [esp + 0x54]
// 00a09bbb  894804               mov dword ptr [eax + 4], ecx
// 00a09bbe  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 00a09bc2  895008               mov dword ptr [eax + 8], edx
// 00a09bc5  89480c               mov dword ptr [eax + 0xc], ecx
// 00a09bc8  8b8424b0000000       mov eax, dword ptr [esp + 0xb0]
// 00a09bcf  8d94243c010000       lea edx, [esp + 0x13c]
// 00a09bd6  52                   push edx
// 00a09bd7  8b10                 mov edx, dword ptr [eax]
// 00a09bd9  8bcf                 mov ecx, edi
// 00a09bdb  ffd2                 call edx
// 00a09bdd  8b8ec4000000         mov ecx, dword ptr [esi + 0xc4]
// 00a09be3  8b86c0000000         mov eax, dword ptr [esi + 0xc0]
// 00a09be9  3944244c             cmp dword ptr [esp + 0x4c], eax
// 00a09bed  8b96c8000000         mov edx, dword ptr [esi + 0xc8]
// 00a09bf3  898c2484000000       mov dword ptr [esp + 0x84], ecx
// 00a09bfa  8b8ecc000000         mov ecx, dword ptr [esi + 0xcc]
// 00a09c00  89942488000000       mov dword ptr [esp + 0x88], edx
// 00a09c07  898c248c000000       mov dword ptr [esp + 0x8c], ecx
// 00a09c0e  7c2b                 jl 0xa09c3b
// 00a09c10  8b96c4000000         mov edx, dword ptr [esi + 0xc4]
// 00a09c16  8b8ec8000000         mov ecx, dword ptr [esi + 0xc8]
// 00a09c1c  89942484000000       mov dword ptr [esp + 0x84], edx
// 00a09c23  8b96cc000000         mov edx, dword ptr [esi + 0xcc]
// 00a09c29  898c2488000000       mov dword ptr [esp + 0x88], ecx
// 00a09c30  8994248c000000       mov dword ptr [esp + 0x8c], edx
// 00a09c37  8944244c             mov dword ptr [esp + 0x4c], eax
// 00a09c3b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00a09c3f  8b442440             mov eax, dword ptr [esp + 0x40]
// 00a09c43  8b402c               mov eax, dword ptr [eax + 0x2c]
// 00a09c46  41                   inc ecx
// 00a09c47  3bc8                 cmp ecx, eax
// 00a09c49  894c2414             mov dword ptr [esp + 0x14], ecx
// 00a09c4d  0f8c8efeffff         jl 0xa09ae1
// 00a09c53  8b742448             mov esi, dword ptr [esp + 0x48]
// 00a09c57  e924feffff           jmp 0xa09a80
// 00a09c5c  e85f87f7ff           call 0x9823c0
// 00a09c61  68a8c0c100           push 0xc1c0a8
// 00a09c66  8bcf                 mov ecx, edi
// 00a09c68  e803dcffff           call 0xa07870
// 00a09c6d  33c9                 xor ecx, ecx
// 00a09c6f  85db                 test ebx, ebx
// 00a09c71  0f94c1               sete cl
// 00a09c74  6a02                 push 2
// 00a09c76  8d542448             lea edx, [esp + 0x48]
// 00a09c7a  89442440             mov dword ptr [esp + 0x40], eax
// 00a09c7e  8bd9                 mov ebx, ecx
// 00a09c80  53                   push ebx
// 00a09c81  52                   push edx
// 00a09c82  8bc8                 mov ecx, eax
// 00a09c84  e867be0500           call 0xa65af0
// 00a09c89  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00a09c8d  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 00a09c91  8d1428               lea edx, [eax + ebp]
// 00a09c94  8944245c             mov dword ptr [esp + 0x5c], eax
// 00a09c98  8b442478             mov eax, dword ptr [esp + 0x78]
// 00a09c9c  894c2460             mov dword ptr [esp + 0x60], ecx
// 00a09ca0  33c9                 xor ecx, ecx
// 00a09ca2  83ec10               sub esp, 0x10
// 00a09ca5  89442478             mov dword ptr [esp + 0x78], eax
// 00a09ca9  8bc4                 mov eax, esp
// 00a09cab  8908                 mov dword ptr [eax], ecx
// 00a09cad  898c24cc000000       mov dword ptr [esp + 0xcc], ecx
// 00a09cb4  b905000000           mov ecx, 5
// 00a09cb9  894804               mov dword ptr [eax + 4], ecx
// 00a09cbc  8b8c24cc000000       mov ecx, dword ptr [esp + 0xcc]
// 00a09cc3  894808               mov dword ptr [eax + 8], ecx
// 00a09cc6  83ec10               sub esp, 0x10
// 00a09cc9  b903000000           mov ecx, 3
// 00a09cce  89480c               mov dword ptr [eax + 0xc], ecx
// 00a09cd1  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 00a09cd5  8bc4                 mov eax, esp
// 00a09cd7  89942484000000       mov dword ptr [esp + 0x84], edx
// 00a09cde  8b542464             mov edx, dword ptr [esp + 0x64]
// 00a09ce2  8910                 mov dword ptr [eax], edx
// 00a09ce4  8b542470             mov edx, dword ptr [esp + 0x70]
// 00a09ce8  894804               mov dword ptr [eax + 4], ecx
// 00a09ceb  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 00a09cef  896808               mov dword ptr [eax + 8], ebp
// 00a09cf2  89500c               mov dword ptr [eax + 0xc], edx
// 00a09cf5  8d44247c             lea eax, [esp + 0x7c]
// 00a09cf9  50                   push eax
// 00a09cfa  56                   push esi
// 00a09cfb  896c2474             mov dword ptr [esp + 0x74], ebp
// 00a09cff  e8bcb60500           call 0xa653c0
// 00a09d04  6898c0c100           push 0xc1c098
// 00a09d09  8bcf                 mov ecx, edi
// 00a09d0b  e860dbffff           call 0xa07870
// 00a09d10  6a02                 push 2
// 00a09d12  53                   push ebx
// 00a09d13  8d8c24bc000000       lea ecx, [esp + 0xbc]
// 00a09d1a  51                   push ecx
// 00a09d1b  8bc8                 mov ecx, eax
// 00a09d1d  89442448             mov dword ptr [esp + 0x48], eax
// 00a09d21  e8cabd0500           call 0xa65af0
// 00a09d26  8b10                 mov edx, dword ptr [eax]
// 00a09d28  89542444             mov dword ptr [esp + 0x44], edx
// 00a09d2c  8b4804               mov ecx, dword ptr [eax + 4]
// 00a09d2f  894c2448             mov dword ptr [esp + 0x48], ecx
// 00a09d33  8b4808               mov ecx, dword ptr [eax + 8]
// 00a09d36  894c244c             mov dword ptr [esp + 0x4c], ecx
// 00a09d3a  8b500c               mov edx, dword ptr [eax + 0xc]
// 00a09d3d  8bc1                 mov eax, ecx
// 00a09d3f  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00a09d43  89542450             mov dword ptr [esp + 0x50], edx
// 00a09d47  8bd1                 mov edx, ecx
// 00a09d49  2bd5                 sub edx, ebp
// 00a09d4b  89942494000000       mov dword ptr [esp + 0x94], edx
// 00a09d52  8b542470             mov edx, dword ptr [esp + 0x70]
// 00a09d56  2bc5                 sub eax, ebp
// 00a09d58  89942498000000       mov dword ptr [esp + 0x98], edx
// 00a09d5f  898c249c000000       mov dword ptr [esp + 0x9c], ecx
// 00a09d66  8b4c2478             mov ecx, dword ptr [esp + 0x78]
// 00a09d6a  33d2                 xor edx, edx
// 00a09d6c  89442444             mov dword ptr [esp + 0x44], eax
// 00a09d70  898c24a0000000       mov dword ptr [esp + 0xa0], ecx
// 00a09d77  899424bc000000       mov dword ptr [esp + 0xbc], edx
// 00a09d7e  83ec10               sub esp, 0x10
// 00a09d81  8bcc                 mov ecx, esp
// 00a09d83  8911                 mov dword ptr [ecx], edx
// 00a09d85  ba05000000           mov edx, 5
// 00a09d8a  895104               mov dword ptr [ecx + 4], edx
// 00a09d8d  8b9424cc000000       mov edx, dword ptr [esp + 0xcc]
// 00a09d94  895108               mov dword ptr [ecx + 8], edx
// 00a09d97  83ec10               sub esp, 0x10
// 00a09d9a  ba03000000           mov edx, 3
// 00a09d9f  89510c               mov dword ptr [ecx + 0xc], edx
// 00a09da2  8b54246c             mov edx, dword ptr [esp + 0x6c]
// 00a09da6  8bcc                 mov ecx, esp
// 00a09da8  8901                 mov dword ptr [ecx], eax
// 00a09daa  8b442468             mov eax, dword ptr [esp + 0x68]
// 00a09dae  894104               mov dword ptr [ecx + 4], eax
// 00a09db1  8b442470             mov eax, dword ptr [esp + 0x70]
// 00a09db5  895108               mov dword ptr [ecx + 8], edx
// 00a09db8  89410c               mov dword ptr [ecx + 0xc], eax
// 00a09dbb  8d8c24b4000000       lea ecx, [esp + 0xb4]
// 00a09dc2  51                   push ecx
// 00a09dc3  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 00a09dc7  56                   push esi
// 00a09dc8  e8f3b50500           call 0xa653c0
// 00a09dcd  83bc24c400000000     cmp dword ptr [esp + 0xc4], 0
// 00a09dd5  0f84d7020000         je 0xa0a0b2
// 00a09ddb  68a0c1c100           push 0xc1c1a0
// 00a09de0  8bcf                 mov ecx, edi
// 00a09de2  e889daffff           call 0xa07870
// 00a09de7  8bc8                 mov ecx, eax
// 00a09de9  89442414             mov dword ptr [esp + 0x14], eax
// 00a09ded  e87ebd0500           call 0xa65b70
// 00a09df2  89442438             mov dword ptr [esp + 0x38], eax
// 00a09df6  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00a09dfa  40                   inc eax
// 00a09dfb  898424dc000000       mov dword ptr [esp + 0xdc], eax
// 00a09e02  8b442428             mov eax, dword ptr [esp + 0x28]
// 00a09e06  8d55ff               lea edx, [ebp - 1]
// 00a09e09  89542434             mov dword ptr [esp + 0x34], edx
// 00a09e0d  8bd0                 mov edx, eax
// 00a09e0f  2b542458             sub edx, dword ptr [esp + 0x58]
// 00a09e13  2b442454             sub eax, dword ptr [esp + 0x54]
// 00a09e17  2b542454             sub edx, dword ptr [esp + 0x54]
// 00a09e1b  83ec10               sub esp, 0x10
// 00a09e1e  899424f0000000       mov dword ptr [esp + 0xf0], edx
// 00a09e25  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00a09e29  03d5                 add edx, ebp
// 00a09e2b  899424f4000000       mov dword ptr [esp + 0xf4], edx
// 00a09e32  33d2                 xor edx, edx
// 00a09e34  898424f8000000       mov dword ptr [esp + 0xf8], eax
// 00a09e3b  8bc4                 mov eax, esp
// 00a09e3d  8910                 mov dword ptr [eax], edx
// 00a09e3f  895004               mov dword ptr [eax + 4], edx
// 00a09e42  895008               mov dword ptr [eax + 8], edx
// 00a09e45  89500c               mov dword ptr [eax + 0xc], edx
// 00a09e48  33c9                 xor ecx, ecx
// 00a09e4a  83ec10               sub esp, 0x10
// 00a09e4d  8bc4                 mov eax, esp
// 00a09e4f  8908                 mov dword ptr [eax], ecx
// 00a09e51  89942488000000       mov dword ptr [esp + 0x88], edx
// 00a09e58  8b542454             mov edx, dword ptr [esp + 0x54]
// 00a09e5c  894804               mov dword ptr [eax + 4], ecx
// 00a09e5f  895008               mov dword ptr [eax + 8], edx
// 00a09e62  894c244c             mov dword ptr [esp + 0x4c], ecx
// 00a09e66  894c2450             mov dword ptr [esp + 0x50], ecx
// 00a09e6a  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 00a09e6e  8d9424fc000000       lea edx, [esp + 0xfc]
// 00a09e75  52                   push edx
// 00a09e76  89480c               mov dword ptr [eax + 0xc], ecx
// 00a09e79  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00a09e7d  56                   push esi
// 00a09e7e  e83db50500           call 0xa653c0
// 00a09e83  687cc1c100           push 0xc1c17c
// 00a09e88  8bcf                 mov ecx, edi
// 00a09e8a  e8e1d9ffff           call 0xa07870
// 00a09e8f  8bc8                 mov ecx, eax
// 00a09e91  89442414             mov dword ptr [esp + 0x14], eax
// 00a09e95  e8d6bc0500           call 0xa65b70
// 00a09e9a  50                   push eax
// 00a09e9b  8d45ff               lea eax, [ebp - 1]
// 00a09e9e  50                   push eax
// 00a09e9f  6a00                 push 0
// 00a09ea1  6a00                 push 0
// 00a09ea3  8d4c243c             lea ecx, [esp + 0x3c]
// 00a09ea7  51                   push ecx
// 00a09ea8  ff156c3bb200         call dword ptr [0xb23b6c]
// 00a09eae  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00a09eb2  8b442428             mov eax, dword ptr [esp + 0x28]
// 00a09eb6  8bd1                 mov edx, ecx
// 00a09eb8  2bd5                 sub edx, ebp
// 00a09eba  899424ec000000       mov dword ptr [esp + 0xec], edx
// 00a09ec1  8bd0                 mov edx, eax
// 00a09ec3  2b542458             sub edx, dword ptr [esp + 0x58]
// 00a09ec7  2b442454             sub eax, dword ptr [esp + 0x54]
// 00a09ecb  2b542454             sub edx, dword ptr [esp + 0x54]
// 00a09ecf  49                   dec ecx
// 00a09ed0  899424f0000000       mov dword ptr [esp + 0xf0], edx
// 00a09ed7  898c24f4000000       mov dword ptr [esp + 0xf4], ecx
// 00a09ede  33c9                 xor ecx, ecx
// 00a09ee0  33d2                 xor edx, edx
// 00a09ee2  83ec10               sub esp, 0x10
// 00a09ee5  89842408010000       mov dword ptr [esp + 0x108], eax
// 00a09eec  8bc4                 mov eax, esp
// 00a09eee  8908                 mov dword ptr [eax], ecx
// 00a09ef0  895004               mov dword ptr [eax + 4], edx
// 00a09ef3  894808               mov dword ptr [eax + 8], ecx
// 00a09ef6  89480c               mov dword ptr [eax + 0xc], ecx
// 00a09ef9  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00a09efd  8b542440             mov edx, dword ptr [esp + 0x40]
// 00a09f01  83ec10               sub esp, 0x10
// 00a09f04  8bc4                 mov eax, esp
// 00a09f06  8908                 mov dword ptr [eax], ecx
// 00a09f08  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 00a09f0c  895004               mov dword ptr [eax + 4], edx
// 00a09f0f  8b542458             mov edx, dword ptr [esp + 0x58]
// 00a09f13  894808               mov dword ptr [eax + 8], ecx
// 00a09f16  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00a09f1a  89500c               mov dword ptr [eax + 0xc], edx
// 00a09f1d  8d84240c010000       lea eax, [esp + 0x10c]
// 00a09f24  50                   push eax
// 00a09f25  56                   push esi
// 00a09f26  e895b40500           call 0xa653c0
// 00a09f2b  83fd03               cmp ebp, 3
// 00a09f2e  0f8e7e010000         jle 0xa0a0b2
// 00a09f34  68e4c8c100           push 0xc1c8e4
// 00a09f39  8bcf                 mov ecx, edi
// 00a09f3b  e830d9ffff           call 0xa07870
// 00a09f40  6a02                 push 2
// 00a09f42  53                   push ebx
// 00a09f43  8d4c2464             lea ecx, [esp + 0x64]
// 00a09f47  51                   push ecx
// 00a09f48  8bc8                 mov ecx, eax
// 00a09f4a  89442420             mov dword ptr [esp + 0x20], eax
// 00a09f4e  e89dbb0500           call 0xa65af0
// 00a09f53  8b10                 mov edx, dword ptr [eax]
// 00a09f55  8954242c             mov dword ptr [esp + 0x2c], edx
// 00a09f59  8b4804               mov ecx, dword ptr [eax + 4]
// 00a09f5c  894c2430             mov dword ptr [esp + 0x30], ecx
// 00a09f60  8b4808               mov ecx, dword ptr [eax + 8]
// 00a09f63  894c2434             mov dword ptr [esp + 0x34], ecx
// 00a09f67  8b400c               mov eax, dword ptr [eax + 0xc]
// 00a09f6a  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00a09f6e  898c2494000000       mov dword ptr [esp + 0x94], ecx
// 00a09f75  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00a09f79  2bc8                 sub ecx, eax
// 00a09f7b  034c2428             add ecx, dword ptr [esp + 0x28]
// 00a09f7f  89442438             mov dword ptr [esp + 0x38], eax
// 00a09f83  8b442434             mov eax, dword ptr [esp + 0x34]
// 00a09f87  2bc2                 sub eax, edx
// 00a09f89  0344241c             add eax, dword ptr [esp + 0x1c]
// 00a09f8d  68ff00ff00           push 0xff00ff
// 00a09f92  898424a0000000       mov dword ptr [esp + 0xa0], eax
// 00a09f99  33c0                 xor eax, eax
// 00a09f9b  89442460             mov dword ptr [esp + 0x60], eax
// 00a09f9f  89442464             mov dword ptr [esp + 0x64], eax
// 00a09fa3  89442468             mov dword ptr [esp + 0x68], eax
// 00a09fa7  8944246c             mov dword ptr [esp + 0x6c], eax
// 00a09fab  898c249c000000       mov dword ptr [esp + 0x9c], ecx
// 00a09fb2  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00a09fb6  8d442460             lea eax, [esp + 0x60]
// 00a09fba  50                   push eax
// 00a09fbb  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00a09fbf  83ec10               sub esp, 0x10
// 00a09fc2  898c24b8000000       mov dword ptr [esp + 0xb8], ecx
// 00a09fc9  8bcc                 mov ecx, esp
// 00a09fcb  8911                 mov dword ptr [ecx], edx
// 00a09fcd  8b542448             mov edx, dword ptr [esp + 0x48]
// 00a09fd1  895104               mov dword ptr [ecx + 4], edx
// 00a09fd4  8b542450             mov edx, dword ptr [esp + 0x50]
// 00a09fd8  894108               mov dword ptr [ecx + 8], eax
// 00a09fdb  8d8424ac000000       lea eax, [esp + 0xac]
// 00a09fe2  50                   push eax
// 00a09fe3  89510c               mov dword ptr [ecx + 0xc], edx
// 00a09fe6  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00a09fea  56                   push esi
// 00a09feb  e840c00500           call 0xa66030
// 00a09ff0  83fd03               cmp ebp, 3
// 00a09ff3  0f8eb9000000         jle 0xa0a0b2
// 00a09ff9  68d0c8c100           push 0xc1c8d0
// 00a09ffe  8bcf                 mov ecx, edi
// 00a0a000  e86bd8ffff           call 0xa07870
// 00a0a005  6a02                 push 2
// 00a0a007  53                   push ebx
// 00a0a008  8d4c2464             lea ecx, [esp + 0x64]
// 00a0a00c  8bf8                 mov edi, eax
// 00a0a00e  51                   push ecx
// 00a0a00f  8bcf                 mov ecx, edi
// 00a0a011  e8daba0500           call 0xa65af0
// 00a0a016  8b10                 mov edx, dword ptr [eax]
// 00a0a018  8954242c             mov dword ptr [esp + 0x2c], edx
// 00a0a01c  8b5804               mov ebx, dword ptr [eax + 4]
// 00a0a01f  895c2430             mov dword ptr [esp + 0x30], ebx
// 00a0a023  8b6808               mov ebp, dword ptr [eax + 8]
// 00a0a026  8bca                 mov ecx, edx
// 00a0a028  2bcd                 sub ecx, ebp
// 00a0a02a  034c2424             add ecx, dword ptr [esp + 0x24]
// 00a0a02e  896c2434             mov dword ptr [esp + 0x34], ebp
// 00a0a032  8b400c               mov eax, dword ptr [eax + 0xc]
// 00a0a035  898c2480000000       mov dword ptr [esp + 0x80], ecx
// 00a0a03c  89442438             mov dword ptr [esp + 0x38], eax
// 00a0a040  8bcb                 mov ecx, ebx
// 00a0a042  2bc8                 sub ecx, eax
// 00a0a044  8b442428             mov eax, dword ptr [esp + 0x28]
// 00a0a048  03c8                 add ecx, eax
// 00a0a04a  8984248c000000       mov dword ptr [esp + 0x8c], eax
// 00a0a051  33c0                 xor eax, eax
// 00a0a053  68ff00ff00           push 0xff00ff
// 00a0a058  89842400010000       mov dword ptr [esp + 0x100], eax
// 00a0a05f  89842404010000       mov dword ptr [esp + 0x104], eax
// 00a0a066  89842408010000       mov dword ptr [esp + 0x108], eax
// 00a0a06d  8984240c010000       mov dword ptr [esp + 0x10c], eax
// 00a0a074  898c2488000000       mov dword ptr [esp + 0x88], ecx
// 00a0a07b  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00a0a07f  8d842400010000       lea eax, [esp + 0x100]
// 00a0a086  50                   push eax
// 00a0a087  83ec10               sub esp, 0x10
// 00a0a08a  898c24a0000000       mov dword ptr [esp + 0xa0], ecx
// 00a0a091  8bcc                 mov ecx, esp
// 00a0a093  8911                 mov dword ptr [ecx], edx
// 00a0a095  8b542450             mov edx, dword ptr [esp + 0x50]
// 00a0a099  895904               mov dword ptr [ecx + 4], ebx
// 00a0a09c  8d842498000000       lea eax, [esp + 0x98]
// 00a0a0a3  896908               mov dword ptr [ecx + 8], ebp
// 00a0a0a6  50                   push eax
// 00a0a0a7  89510c               mov dword ptr [ecx + 0xc], edx
// 00a0a0aa  56                   push esi
// 00a0a0ab  8bcf                 mov ecx, edi
// 00a0a0ad  e87ebf0500           call 0xa66030
// 00a0a0b2  8b8c244c010000       mov ecx, dword ptr [esp + 0x14c]
// 00a0a0b9  64890d00000000       mov dword ptr fs:[0], ecx
// 00a0a0c0  59                   pop ecx
// 00a0a0c1  5f                   pop edi
// 00a0a0c2  5e                   pop esi
// 00a0a0c3  5d                   pop ebp
// 00a0a0c4  5b                   pop ebx
// 00a0a0c5  81c444010000         add esp, 0x144
// 00a0a0cb  c20800               ret 8
// copied from an identical function in another client (function ?DrawRibbonFrame@CXTPOffice2007Theme@@UAEXPAVCDC@@PAVCXTPOffice2007FrameHook@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\CommandBars\XTPOffice2007Theme.cpp