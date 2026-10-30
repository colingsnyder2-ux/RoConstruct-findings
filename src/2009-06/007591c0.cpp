// roc 2009-06 007591c0  unit: CRobloxTreeCtrl  size: 1544 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007591c0
//
// 007591c0  6aff                 push -1
// 007591c2  68527c8700           push 0x877c52
// 007591c7  64a100000000         mov eax, dword ptr fs:[0]
// 007591cd  50                   push eax
// 007591ce  81ec78010000         sub esp, 0x178
// 007591d4  a1304fa200           mov eax, dword ptr [0xa24f30]
// 007591d9  33c4                 xor eax, esp
// 007591db  89842474010000       mov dword ptr [esp + 0x174], eax
// 007591e2  53                   push ebx
// 007591e3  55                   push ebp
// 007591e4  56                   push esi
// 007591e5  57                   push edi
// 007591e6  a1304fa200           mov eax, dword ptr [0xa24f30]
// 007591eb  33c4                 xor eax, esp
// 007591ed  50                   push eax
// 007591ee  8d84248c010000       lea eax, [esp + 0x18c]
// 007591f5  64a300000000         mov dword ptr fs:[0], eax
// 007591fb  8bb4249c010000       mov esi, dword ptr [esp + 0x19c]
// 00759202  8be9                 mov ebp, ecx
// 00759204  8b4534               mov eax, dword ptr [ebp + 0x34]
// 00759207  8b5020               mov edx, dword ptr [eax + 0x20]
// 0075920a  8d8c24bc000000       lea ecx, [esp + 0xbc]
// 00759211  51                   push ecx
// 00759212  52                   push edx
// 00759213  ff1514ee8900         call dword ptr [0x89ee14]
// 00759219  8b4500               mov eax, dword ptr [ebp]
// 0075921c  8b5070               mov edx, dword ptr [eax + 0x70]
// 0075921f  8bcd                 mov ecx, ebp
// 00759221  ffd2                 call edx
// 00759223  8bd8                 mov ebx, eax
// 00759225  8b4500               mov eax, dword ptr [ebp]
// 00759228  8b5074               mov edx, dword ptr [eax + 0x74]
// 0075922b  8bcd                 mov ecx, ebp
// 0075922d  895c2444             mov dword ptr [esp + 0x44], ebx
// 00759231  ffd2                 call edx
// 00759233  33ff                 xor edi, edi
// 00759235  89442448             mov dword ptr [esp + 0x48], eax
// 00759239  3bf7                 cmp esi, edi
// 0075923b  7504                 jne 0x759241
// 0075923d  33f6                 xor esi, esi
// 0075923f  eb03                 jmp 0x759244
// 00759241  8b7604               mov esi, dword ptr [esi + 4]
// 00759244  8d8424bc000000       lea eax, [esp + 0xbc]
// 0075924b  50                   push eax
// 0075924c  56                   push esi
// 0075924d  8d4c247c             lea ecx, [esp + 0x7c]
// 00759251  e8da720100           call 0x770530
// 00759256  53                   push ebx
// 00759257  8d8c24c0000000       lea ecx, [esp + 0xc0]
// 0075925e  51                   push ecx
// 0075925f  8d4c247c             lea ecx, [esp + 0x7c]
// 00759263  89bc249c010000       mov dword ptr [esp + 0x19c], edi
// 0075926a  e86105fcff           call 0x7197d0
// 0075926f  8b4d34               mov ecx, dword ptr [ebp + 0x34]
// 00759272  8b442478             mov eax, dword ptr [esp + 0x78]
// 00759276  8b11                 mov edx, dword ptr [ecx]
// 00759278  8b9220010000         mov edx, dword ptr [edx + 0x120]
// 0075927e  57                   push edi
// 0075927f  50                   push eax
// 00759280  6a0f                 push 0xf
// 00759282  ffd2                 call edx
// 00759284  8d4c2474             lea ecx, [esp + 0x74]
// 00759288  39bc24a0010000       cmp dword ptr [esp + 0x1a0], edi
// 0075928f  0f84f9040000         je 0x75978e
// 00759295  e8382d0f00           call 0x84bfd2
// 0075929a  8bcd                 mov ecx, ebp
// 0075929c  89442460             mov dword ptr [esp + 0x60], eax
// 007592a0  e8cbd6ffff           call 0x756970
// 007592a5  8b3590ee8900         mov esi, dword ptr [0x89ee90]
// 007592ab  84c0                 test al, al
// 007592ad  7424                 je 0x7592d3
// 007592af  8b4534               mov eax, dword ptr [ebp + 0x34]
// 007592b2  8b4020               mov eax, dword ptr [eax + 0x20]
// 007592b5  57                   push edi
// 007592b6  57                   push edi
// 007592b7  680f110000           push 0x110f
// 007592bc  50                   push eax
// 007592bd  ffd6                 call esi
// 007592bf  50                   push eax
// 007592c0  e83dfafbff           call 0x718d02
// 007592c5  85c0                 test eax, eax
// 007592c7  740a                 je 0x7592d3
// 007592c9  c744245401000000     mov dword ptr [esp + 0x54], 1
// 007592d1  eb07                 jmp 0x7592da
// 007592d3  897c2454             mov dword ptr [esp + 0x54], edi
// 007592d7  897d10               mov dword ptr [ebp + 0x10], edi
// 007592da  8b4d34               mov ecx, dword ptr [ebp + 0x34]
// 007592dd  e8582e0f00           call 0x84c13a
// 007592e2  89442450             mov dword ptr [esp + 0x50], eax
// 007592e6  ff1578ee8900         call dword ptr [0x89ee78]
// 007592ec  50                   push eax
// 007592ed  e810fafbff           call 0x718d02
// 007592f2  8b4d34               mov ecx, dword ptr [ebp + 0x34]
// 007592f5  3bc1                 cmp eax, ecx
// 007592f7  0f94c2               sete dl
// 007592fa  8854245c             mov byte ptr [esp + 0x5c], dl
// 007592fe  e8d92b0f00           call 0x84bedc
// 00759303  57                   push edi
// 00759304  89442450             mov dword ptr [esp + 0x50], eax
// 00759308  8b4534               mov eax, dword ptr [ebp + 0x34]
// 0075930b  8b4020               mov eax, dword ptr [eax + 0x20]
// 0075930e  6a05                 push 5
// 00759310  680a110000           push 0x110a
// 00759315  50                   push eax
// 00759316  ffd6                 call esi
// 00759318  57                   push edi
// 00759319  8bd8                 mov ebx, eax
// 0075931b  8b4534               mov eax, dword ptr [ebp + 0x34]
// 0075931e  8b4820               mov ecx, dword ptr [eax + 0x20]
// 00759321  57                   push edi
// 00759322  6810110000           push 0x1110
// 00759327  51                   push ecx
// 00759328  ffd6                 call esi
// 0075932a  6a00                 push 0
// 0075932c  8bf8                 mov edi, eax
// 0075932e  8b4534               mov eax, dword ptr [ebp + 0x34]
// 00759331  8b5020               mov edx, dword ptr [eax + 0x20]
// 00759334  6a00                 push 0
// 00759336  6a31                 push 0x31
// 00759338  52                   push edx
// 00759339  47                   inc edi
// 0075933a  ffd6                 call esi
// 0075933c  50                   push eax
// 0075933d  e8f401fcff           call 0x719536
// 00759342  8b5004               mov edx, dword ptr [eax + 4]
// 00759345  8d8c244c010000       lea ecx, [esp + 0x14c]
// 0075934c  51                   push ecx
// 0075934d  6a3c                 push 0x3c
// 0075934f  52                   push edx
// 00759350  ff1564e18900         call dword ptr [0x89e164]
// 00759356  85c0                 test eax, eax
// 00759358  7519                 jne 0x759373
// 0075935a  8d84244c010000       lea eax, [esp + 0x14c]
// 00759361  50                   push eax
// 00759362  6a3c                 push 0x3c
// 00759364  6a11                 push 0x11
// 00759366  ff1534e18900         call dword ptr [0x89e134]
// 0075936c  50                   push eax
// 0075936d  ff1564e18900         call dword ptr [0x89e164]
// 00759373  85db                 test ebx, ebx
// 00759375  0f8401040000         je 0x75977c
// 0075937b  eb0d                 jmp 0x75938a
// 0075937d  8d4900               lea ecx, [ecx]
// 00759380  8b7c2458             mov edi, dword ptr [esp + 0x58]
// 00759384  8b3590ee8900         mov esi, dword ptr [0x89ee90]
// 0075938a  8bcf                 mov ecx, edi
// 0075938c  4f                   dec edi
// 0075938d  897c2458             mov dword ptr [esp + 0x58], edi
// 00759391  85c9                 test ecx, ecx
// 00759393  0f84e3030000         je 0x75977c
// 00759399  8b4d34               mov ecx, dword ptr [ebp + 0x34]
// 0075939c  6a01                 push 1
// 0075939e  8d542430             lea edx, [esp + 0x30]
// 007593a2  52                   push edx
// 007593a3  53                   push ebx
// 007593a4  e82500fcff           call 0x7193ce
// 007593a9  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 007593ad  8b542434             mov edx, dword ptr [esp + 0x34]
// 007593b1  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 007593b5  8b7c2444             mov edi, dword ptr [esp + 0x44]
// 007593b9  898c24a8000000       mov dword ptr [esp + 0xa8], ecx
// 007593c0  8b8c24c4000000       mov ecx, dword ptr [esp + 0xc4]
// 007593c7  899424ac000000       mov dword ptr [esp + 0xac], edx
// 007593ce  898424a4000000       mov dword ptr [esp + 0xa4], eax
// 007593d5  8b442438             mov eax, dword ptr [esp + 0x38]
// 007593d9  57                   push edi
// 007593da  8d9424a8000000       lea edx, [esp + 0xa8]
// 007593e1  898c24b0000000       mov dword ptr [esp + 0xb0], ecx
// 007593e8  52                   push edx
// 007593e9  8d4c247c             lea ecx, [esp + 0x7c]
// 007593ed  898424b8000000       mov dword ptr [esp + 0xb8], eax
// 007593f4  e8d703fcff           call 0x7197d0
// 007593f9  6a0b                 push 0xb
// 007593fb  53                   push ebx
// 007593fc  8bcd                 mov ecx, ebp
// 007593fe  e8fde1ffff           call 0x757600
// 00759403  6a00                 push 0
// 00759405  8944241c             mov dword ptr [esp + 0x1c], eax
// 00759409  8b4534               mov eax, dword ptr [ebp + 0x34]
// 0075940c  8b4020               mov eax, dword ptr [eax + 0x20]
// 0075940f  6a08                 push 8
// 00759411  680a110000           push 0x110a
// 00759416  50                   push eax
// 00759417  ffd6                 call esi
// 00759419  85c0                 test eax, eax
// 0075941b  7422                 je 0x75943f
// 0075941d  f644241802           test byte ptr [esp + 0x18], 2
// 00759422  741b                 je 0x75943f
// 00759424  8b4534               mov eax, dword ptr [ebp + 0x34]
// 00759427  8b4820               mov ecx, dword ptr [eax + 0x20]
// 0075942a  6a00                 push 0
// 0075942c  6a08                 push 8
// 0075942e  680a110000           push 0x110a
// 00759433  51                   push ecx
// 00759434  ffd6                 call esi
// 00759436  3bd8                 cmp ebx, eax
// 00759438  7405                 je 0x75943f
// 0075943a  8374241802           xor dword ptr [esp + 0x18], 2
// 0075943f  8b442418             mov eax, dword ptr [esp + 0x18]
// 00759443  8b74245c             mov esi, dword ptr [esp + 0x5c]
// 00759447  a80a                 test al, 0xa
// 00759449  ba00000000           mov edx, 0
// 0075944e  0f95c2               setne dl
// 00759451  395d14               cmp dword ptr [ebp + 0x14], ebx
// 00759454  57                   push edi
// 00759455  8b7c2450             mov edi, dword ptr [esp + 0x50]
// 00759459  57                   push edi
// 0075945a  56                   push esi
// 0075945b  50                   push eax
// 0075945c  89542434             mov dword ptr [esp + 0x34], edx
// 00759460  8b5500               mov edx, dword ptr [ebp]
// 00759463  8b4238               mov eax, dword ptr [edx + 0x38]
// 00759466  8bcd                 mov ecx, ebp
// 00759468  0f94442427           sete byte ptr [esp + 0x27]
// 0075946d  ffd0                 call eax
// 0075946f  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00759473  8b5500               mov edx, dword ptr [ebp]
// 00759476  8b5278               mov edx, dword ptr [edx + 0x78]
// 00759479  89442428             mov dword ptr [esp + 0x28], eax
// 0075947d  8b442448             mov eax, dword ptr [esp + 0x48]
// 00759481  50                   push eax
// 00759482  57                   push edi
// 00759483  56                   push esi
// 00759484  51                   push ecx
// 00759485  8bcd                 mov ecx, ebp
// 00759487  ffd2                 call edx
// 00759489  89442420             mov dword ptr [esp + 0x20], eax
// 0075948d  395d10               cmp dword ptr [ebp + 0x10], ebx
// 00759490  750c                 jne 0x75949e
// 00759492  8b442444             mov eax, dword ptr [esp + 0x44]
// 00759496  89442428             mov dword ptr [esp + 0x28], eax
// 0075949a  89442420             mov dword ptr [esp + 0x20], eax
// 0075949e  6a3c                 push 0x3c
// 007594a0  b90f000000           mov ecx, 0xf
// 007594a5  8db42450010000       lea esi, [esp + 0x150]
// 007594ac  8dbc2414010000       lea edi, [esp + 0x114]
// 007594b3  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 007594b5  8d8424d0000000       lea eax, [esp + 0xd0]
// 007594bc  83ceff               or esi, 0xffffffff
// 007594bf  6a00                 push 0
// 007594c1  50                   push eax
// 007594c2  89b42414010000       mov dword ptr [esp + 0x114], esi
// 007594c9  89b42418010000       mov dword ptr [esp + 0x118], esi
// 007594d0  e89f07fcff           call 0x719c74
// 007594d5  83c40c               add esp, 0xc
// 007594d8  8d8c24cc000000       lea ecx, [esp + 0xcc]
// 007594df  51                   push ecx
// 007594e0  53                   push ebx
// 007594e1  8d4d18               lea ecx, [ebp + 0x18]
// 007594e4  e8f7f8ffff           call 0x758de0
// 007594e9  85c0                 test eax, eax
// 007594eb  744b                 je 0x759538
// 007594ed  837c242400           cmp dword ptr [esp + 0x24], 0
// 007594f2  7525                 jne 0x759519
// 007594f4  837c245000           cmp dword ptr [esp + 0x50], 0
// 007594f9  741e                 je 0x759519
// 007594fb  8b842408010000       mov eax, dword ptr [esp + 0x108]
// 00759502  3bc6                 cmp eax, esi
// 00759504  7404                 je 0x75950a
// 00759506  89442420             mov dword ptr [esp + 0x20], eax
// 0075950a  8b84240c010000       mov eax, dword ptr [esp + 0x10c]
// 00759511  3bc6                 cmp eax, esi
// 00759513  7404                 je 0x759519
// 00759515  89442428             mov dword ptr [esp + 0x28], eax
// 00759519  80bc24e800000000     cmp byte ptr [esp + 0xe8], 0
// 00759521  7415                 je 0x759538
// 00759523  b90f000000           mov ecx, 0xf
// 00759528  8db424cc000000       lea esi, [esp + 0xcc]
// 0075952f  8dbc2410010000       lea edi, [esp + 0x110]
// 00759536  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 00759538  8b5500               mov edx, dword ptr [ebp]
// 0075953b  8b4228               mov eax, dword ptr [edx + 0x28]
// 0075953e  53                   push ebx
// 0075953f  8bcd                 mov ecx, ebp
// 00759541  ffd0                 call eax
// 00759543  85c0                 test eax, eax
// 00759545  740b                 je 0x759552
// 00759547  c7842420010000bc020000 mov dword ptr [esp + 0x120], 0x2bc
// 00759552  f744244c00020000     test dword ptr [esp + 0x4c], 0x200
// 0075955a  7455                 je 0x7595b1
// 0075955c  807c241700           cmp byte ptr [esp + 0x17], 0
// 00759561  0f95c0               setne al
// 00759564  88842425010000       mov byte ptr [esp + 0x125], al
// 0075956b  84c0                 test al, al
// 0075956d  7442                 je 0x7595b1
// 0075956f  837c242400           cmp dword ptr [esp + 0x24], 0
// 00759574  753b                 jne 0x7595b1
// 00759576  e8d5730000           call 0x760950
// 0075957b  8bc8                 mov ecx, eax
// 0075957d  e8fe730000           call 0x760980
// 00759582  84c0                 test al, al
// 00759584  7519                 jne 0x75959f
// 00759586  e8c5730000           call 0x760950
// 0075958b  8bc8                 mov ecx, eax
// 0075958d  e85e7c0000           call 0x7611f0
// 00759592  84c0                 test al, al
// 00759594  7509                 jne 0x75959f
// 00759596  e885b5ffff           call 0x754b20
// 0075959b  6a1a                 push 0x1a
// 0075959d  eb07                 jmp 0x7595a6
// 0075959f  e87cb5ffff           call 0x754b20
// 007595a4  6a0d                 push 0xd
// 007595a6  8bc8                 mov ecx, eax
// 007595a8  e8f3acffff           call 0x7542a0
// 007595ad  89442420             mov dword ptr [esp + 0x20], eax
// 007595b1  c744244000000000     mov dword ptr [esp + 0x40], 0
// 007595b9  c744243ce8bb8b00     mov dword ptr [esp + 0x3c], 0x8bbbe8
// 007595c1  8d8c2410010000       lea ecx, [esp + 0x110]
// 007595c8  51                   push ecx
// 007595c9  c684249801000001     mov byte ptr [esp + 0x198], 1
// 007595d1  ff15ece08900         call dword ptr [0x89e0ec]
// 007595d7  50                   push eax
// 007595d8  8d4c2440             lea ecx, [esp + 0x40]
// 007595dc  e821fafbff           call 0x719002
// 007595e1  8d54243c             lea edx, [esp + 0x3c]
// 007595e5  52                   push edx
// 007595e6  8d4c2478             lea ecx, [esp + 0x78]
// 007595ea  e8f5290f00           call 0x84bfe4
// 007595ef  8b4d34               mov ecx, dword ptr [ebp + 0x34]
// 007595f2  8bf8                 mov edi, eax
// 007595f4  53                   push ebx
// 007595f5  8d442420             lea eax, [esp + 0x20]
// 007595f9  50                   push eax
// 007595fa  e8bf2b0f00           call 0x84c1be
// 007595ff  8d8c24b4000000       lea ecx, [esp + 0xb4]
// 00759606  51                   push ecx
// 00759607  8d4c2420             lea ecx, [esp + 0x20]
// 0075960b  c684249801000002     mov byte ptr [esp + 0x198], 2
// 00759613  ff1554fb8900         call dword ptr [0x89fb54]
// 00759619  50                   push eax
// 0075961a  8d4c2424             lea ecx, [esp + 0x24]
// 0075961e  ff15d0fc8900         call dword ptr [0x89fcd0]
// 00759624  8b942484000000       mov edx, dword ptr [esp + 0x84]
// 0075962b  50                   push eax
// 0075962c  52                   push edx
// 0075962d  ff1550e18900         call dword ptr [0x89e150]
// 00759633  8b542434             mov edx, dword ptr [esp + 0x34]
// 00759637  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0075963b  8b8c24b4000000       mov ecx, dword ptr [esp + 0xb4]
// 00759642  2bd0                 sub edx, eax
// 00759644  3bd1                 cmp edx, ecx
// 00759646  7d08                 jge 0x759650
// 00759648  8d440102             lea eax, [ecx + eax + 2]
// 0075964c  89442434             mov dword ptr [esp + 0x34], eax
// 00759650  8b742428             mov esi, dword ptr [esp + 0x28]
// 00759654  56                   push esi
// 00759655  8d4c2478             lea ecx, [esp + 0x78]
// 00759659  e88c290f00           call 0x84bfea
// 0075965e  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00759662  51                   push ecx
// 00759663  8d4c2478             lea ecx, [esp + 0x78]
// 00759667  e884290f00           call 0x84bff0
// 0075966c  837c242400           cmp dword ptr [esp + 0x24], 0
// 00759671  740f                 je 0x759682
// 00759673  56                   push esi
// 00759674  8d542430             lea edx, [esp + 0x30]
// 00759678  52                   push edx
// 00759679  8d4c247c             lea ecx, [esp + 0x7c]
// 0075967d  e84e01fcff           call 0x7197d0
// 00759682  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00759686  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0075968a  8b542434             mov edx, dword ptr [esp + 0x34]
// 0075968e  6a00                 push 0
// 00759690  894c246c             mov dword ptr [esp + 0x6c], ecx
// 00759694  89442468             mov dword ptr [esp + 0x68], eax
// 00759698  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 0075969c  6a03                 push 3
// 0075969e  8d4c246c             lea ecx, [esp + 0x6c]
// 007596a2  51                   push ecx
// 007596a3  89542478             mov dword ptr [esp + 0x78], edx
// 007596a7  8944247c             mov dword ptr [esp + 0x7c], eax
// 007596ab  ff15f8ed8900         call dword ptr [0x89edf8]
// 007596b1  8b742474             mov esi, dword ptr [esp + 0x74]
// 007596b5  6824080000           push 0x824
// 007596ba  8d542468             lea edx, [esp + 0x68]
// 007596be  52                   push edx
// 007596bf  8d4c2424             lea ecx, [esp + 0x24]
// 007596c3  83c670               add esi, 0x70
// 007596c6  ff1554fb8900         call dword ptr [0x89fb54]
// 007596cc  50                   push eax
// 007596cd  8d4c2428             lea ecx, [esp + 0x28]
// 007596d1  ff15d0fc8900         call dword ptr [0x89fcd0]
// 007596d7  50                   push eax
// 007596d8  8b06                 mov eax, dword ptr [esi]
// 007596da  8d8c2484000000       lea ecx, [esp + 0x84]
// 007596e1  ffd0                 call eax
// 007596e3  f644241801           test byte ptr [esp + 0x18], 1
// 007596e8  743d                 je 0x759727
// 007596ea  837c245400           cmp dword ptr [esp + 0x54], 0
// 007596ef  7536                 jne 0x759727
// 007596f1  837c245000           cmp dword ptr [esp + 0x50], 0
// 007596f6  742f                 je 0x759727
// 007596f8  ff1578ee8900         call dword ptr [0x89ee78]
// 007596fe  50                   push eax
// 007596ff  e8fef5fbff           call 0x718d02
// 00759704  3b4534               cmp eax, dword ptr [ebp + 0x34]
// 00759707  751e                 jne 0x759727
// 00759709  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0075970d  51                   push ecx
// 0075970e  8d4c2478             lea ecx, [esp + 0x78]
// 00759712  e8d9280f00           call 0x84bff0
// 00759717  8b442478             mov eax, dword ptr [esp + 0x78]
// 0075971b  8d54242c             lea edx, [esp + 0x2c]
// 0075971f  52                   push edx
// 00759720  50                   push eax
// 00759721  ff15e0ee8900         call dword ptr [0x89eee0]
// 00759727  57                   push edi
// 00759728  8d4c2478             lea ecx, [esp + 0x78]
// 0075972c  e8b3280f00           call 0x84bfe4
// 00759731  8d4c243c             lea ecx, [esp + 0x3c]
// 00759735  e8bcf8fbff           call 0x718ff6
// 0075973a  8b4534               mov eax, dword ptr [ebp + 0x34]
// 0075973d  8b4820               mov ecx, dword ptr [eax + 0x20]
// 00759740  53                   push ebx
// 00759741  6a06                 push 6
// 00759743  680a110000           push 0x110a
// 00759748  51                   push ecx
// 00759749  ff1590ee8900         call dword ptr [0x89ee90]
// 0075974f  8d4c241c             lea ecx, [esp + 0x1c]
// 00759753  8bd8                 mov ebx, eax
// 00759755  ff1510fd8900         call dword ptr [0x89fd10]
// 0075975b  8d4c243c             lea ecx, [esp + 0x3c]
// 0075975f  c684249401000000     mov byte ptr [esp + 0x194], 0
// 00759767  c744243ce8bb8b00     mov dword ptr [esp + 0x3c], 0x8bbbe8
// 0075976f  e85c5dcbff           call 0x40f4d0
// 00759774  85db                 test ebx, ebx
// 00759776  0f8504fcffff         jne 0x759380
// 0075977c  8b542460             mov edx, dword ptr [esp + 0x60]
// 00759780  52                   push edx
// 00759781  8d4c2478             lea ecx, [esp + 0x78]
// 00759785  e84e280f00           call 0x84bfd8
// 0075978a  8d4c2474             lea ecx, [esp + 0x74]
// 0075978e  c7842494010000ffffffff mov dword ptr [esp + 0x194], 0xffffffff
// 00759799  e8a26f0100           call 0x770740
// 0075979e  8b8c248c010000       mov ecx, dword ptr [esp + 0x18c]
// 007597a5  64890d00000000       mov dword ptr fs:[0], ecx
// 007597ac  59                   pop ecx
// 007597ad  5f                   pop edi
// 007597ae  5e                   pop esi
// 007597af  5d                   pop ebp
// 007597b0  5b                   pop ebx
// 007597b1  8b8c2474010000       mov ecx, dword ptr [esp + 0x174]
// 007597b8  33cc                 xor ecx, esp
// 007597ba  e8bb0dfcff           call 0x71a57a
// 007597bf  81c484010000         add esp, 0x184
// 007597c5  c20800               ret 8
// copied from an identical function in another client (function ?DoPaint@CXTTreeBase@@MAEXAAVCDC@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTTreeBase.cpp