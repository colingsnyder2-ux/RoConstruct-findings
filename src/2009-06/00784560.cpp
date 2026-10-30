// roc 2009-06 00784560  unit: CXTColorDialog  size: 879 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00784560
//
// 00784560  6aff                 push -1
// 00784562  688ca48700           push 0x87a48c
// 00784567  64a100000000         mov eax, dword ptr fs:[0]
// 0078456d  50                   push eax
// 0078456e  81ec9c000000         sub esp, 0x9c
// 00784574  a1304fa200           mov eax, dword ptr [0xa24f30]
// 00784579  33c4                 xor eax, esp
// 0078457b  89842498000000       mov dword ptr [esp + 0x98], eax
// 00784582  55                   push ebp
// 00784583  56                   push esi
// 00784584  57                   push edi
// 00784585  a1304fa200           mov eax, dword ptr [0xa24f30]
// 0078458a  33c4                 xor eax, esp
// 0078458c  50                   push eax
// 0078458d  8d8424ac000000       lea eax, [esp + 0xac]
// 00784594  64a300000000         mov dword ptr fs:[0], eax
// 0078459a  8bf1                 mov esi, ecx
// 0078459c  56                   push esi
// 0078459d  8d4c2458             lea ecx, [esp + 0x58]
// 007845a1  e8224ef9ff           call 0x7193c8
// 007845a6  6a01                 push 1
// 007845a8  8d4c2458             lea ecx, [esp + 0x58]
// 007845ac  c78424b800000000000000 mov dword ptr [esp + 0xb8], 0
// 007845b7  e84a790c00           call 0x84bf06
// 007845bc  e85f05fdff           call 0x754b20
// 007845c1  6a08                 push 8
// 007845c3  8bc8                 mov ecx, eax
// 007845c5  e8d6fcfcff           call 0x7542a0
// 007845ca  50                   push eax
// 007845cb  8d4c2458             lea ecx, [esp + 0x58]
// 007845cf  e81c7a0c00           call 0x84bff0
// 007845d4  8b4620               mov eax, dword ptr [esi + 0x20]
// 007845d7  6a00                 push 0
// 007845d9  6a00                 push 0
// 007845db  6a31                 push 0x31
// 007845dd  50                   push eax
// 007845de  ff1590ee8900         call dword ptr [0x89ee90]
// 007845e4  50                   push eax
// 007845e5  e84c4ff9ff           call 0x719536
// 007845ea  50                   push eax
// 007845eb  8d4c2458             lea ecx, [esp + 0x58]
// 007845ef  51                   push ecx
// 007845f0  8d4c244c             lea ecx, [esp + 0x4c]
// 007845f4  e867c2feff           call 0x770860
// 007845f9  6a02                 push 2
// 007845fb  8bce                 mov ecx, esi
// 007845fd  c68424b800000001     mov byte ptr [esp + 0xb8], 1
// 00784605  e8f252f9ff           call 0x7198fc
// 0078460a  50                   push eax
// 0078460b  8d4c2438             lea ecx, [esp + 0x38]
// 0078460f  e85cbefeff           call 0x770470
// 00784614  8d542434             lea edx, [esp + 0x34]
// 00784618  52                   push edx
// 00784619  8bce                 mov ecx, esi
// 0078461b  e88453f9ff           call 0x7199a4
// 00784620  56                   push esi
// 00784621  8d4c2418             lea ecx, [esp + 0x18]
// 00784625  e8a6befeff           call 0x7704d0
// 0078462a  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 0078462e  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00784632  8b2dbced8900         mov ebp, dword ptr [0x89edbc]
// 00784638  8944241c             mov dword ptr [esp + 0x1c], eax
// 0078463c  8b442420             mov eax, dword ptr [esp + 0x20]
// 00784640  83e820               sub eax, 0x20
// 00784643  89442420             mov dword ptr [esp + 0x20], eax
// 00784647  83c0be               add eax, -0x42
// 0078464a  f686ac00000040       test byte ptr [esi + 0xac], 0x40
// 00784651  894c2414             mov dword ptr [esp + 0x14], ecx
// 00784655  89442418             mov dword ptr [esp + 0x18], eax
// 00784659  746b                 je 0x7846c6
// 0078465b  6a03                 push 3
// 0078465d  6a03                 push 3
// 0078465f  8d54241c             lea edx, [esp + 0x1c]
// 00784663  52                   push edx
// 00784664  ffd5                 call ebp
// 00784666  e8b504fdff           call 0x754b20
// 0078466b  6a15                 push 0x15
// 0078466d  8bc8                 mov ecx, eax
// 0078466f  e82cfcfcff           call 0x7542a0
// 00784674  8bf8                 mov edi, eax
// 00784676  e8a504fdff           call 0x754b20
// 0078467b  57                   push edi
// 0078467c  6a14                 push 0x14
// 0078467e  8bc8                 mov ecx, eax
// 00784680  e81bfcfcff           call 0x7542a0
// 00784685  50                   push eax
// 00784686  8d44241c             lea eax, [esp + 0x1c]
// 0078468a  50                   push eax
// 0078468b  8d4c2460             lea ecx, [esp + 0x60]
// 0078468f  e83651f9ff           call 0x7197ca
// 00784694  6afd                 push -3
// 00784696  6afd                 push -3
// 00784698  8d4c241c             lea ecx, [esp + 0x1c]
// 0078469c  51                   push ecx
// 0078469d  ffd5                 call ebp
// 0078469f  e87c04fdff           call 0x754b20
// 007846a4  6a14                 push 0x14
// 007846a6  8bc8                 mov ecx, eax
// 007846a8  e8f3fbfcff           call 0x7542a0
// 007846ad  8bf8                 mov edi, eax
// 007846af  e86c04fdff           call 0x754b20
// 007846b4  57                   push edi
// 007846b5  6a10                 push 0x10
// 007846b7  8bc8                 mov ecx, eax
// 007846b9  e8e2fbfcff           call 0x7542a0
// 007846be  50                   push eax
// 007846bf  8d54241c             lea edx, [esp + 0x1c]
// 007846c3  52                   push edx
// 007846c4  eb25                 jmp 0x7846eb
// 007846c6  e85504fdff           call 0x754b20
// 007846cb  6a06                 push 6
// 007846cd  8bc8                 mov ecx, eax
// 007846cf  e8ccfbfcff           call 0x7542a0
// 007846d4  8bf8                 mov edi, eax
// 007846d6  e84504fdff           call 0x754b20
// 007846db  57                   push edi
// 007846dc  6a06                 push 6
// 007846de  8bc8                 mov ecx, eax
// 007846e0  e8bbfbfcff           call 0x7542a0
// 007846e5  50                   push eax
// 007846e6  8d44241c             lea eax, [esp + 0x1c]
// 007846ea  50                   push eax
// 007846eb  8d4c2460             lea ecx, [esp + 0x60]
// 007846ef  e8d650f9ff           call 0x7197ca
// 007846f4  8b442418             mov eax, dword ptr [esp + 0x18]
// 007846f8  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007846fc  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00784700  89442428             mov dword ptr [esp + 0x28], eax
// 00784704  894c2424             mov dword ptr [esp + 0x24], ecx
// 00784708  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0078470c  83c0ea               add eax, -0x16
// 0078470f  894c2430             mov dword ptr [esp + 0x30], ecx
// 00784713  89442428             mov dword ptr [esp + 0x28], eax
// 00784717  83c016               add eax, 0x16
// 0078471a  8d4c2410             lea ecx, [esp + 0x10]
// 0078471e  8954242c             mov dword ptr [esp + 0x2c], edx
// 00784722  89442430             mov dword ptr [esp + 0x30], eax
// 00784726  ff15bcfc8900         call dword ptr [0x89fcbc]
// 0078472c  c68424b400000002     mov byte ptr [esp + 0xb4], 2
// 00784734  e8076a0100           call 0x79b140
// 00784739  8b10                 mov edx, dword ptr [eax]
// 0078473b  8b5208               mov edx, dword ptr [edx + 8]
// 0078473e  6888240000           push 0x2488
// 00784743  8d4c2414             lea ecx, [esp + 0x14]
// 00784747  51                   push ecx
// 00784748  8bc8                 mov ecx, eax
// 0078474a  ffd2                 call edx
// 0078474c  8b7c2454             mov edi, dword ptr [esp + 0x54]
// 00784750  6a25                 push 0x25
// 00784752  8d442428             lea eax, [esp + 0x28]
// 00784756  50                   push eax
// 00784757  8d4c2418             lea ecx, [esp + 0x18]
// 0078475b  83c770               add edi, 0x70
// 0078475e  ff1554fb8900         call dword ptr [0x89fb54]
// 00784764  50                   push eax
// 00784765  8d4c241c             lea ecx, [esp + 0x1c]
// 00784769  ff15d0fc8900         call dword ptr [0x89fcd0]
// 0078476f  8b17                 mov edx, dword ptr [edi]
// 00784771  50                   push eax
// 00784772  8d4c2464             lea ecx, [esp + 0x64]
// 00784776  ffd2                 call edx
// 00784778  8b442414             mov eax, dword ptr [esp + 0x14]
// 0078477c  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00784780  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00784784  89442424             mov dword ptr [esp + 0x24], eax
// 00784788  8b442420             mov eax, dword ptr [esp + 0x20]
// 0078478c  894c2428             mov dword ptr [esp + 0x28], ecx
// 00784790  89442430             mov dword ptr [esp + 0x30], eax
// 00784794  89442428             mov dword ptr [esp + 0x28], eax
// 00784798  83c016               add eax, 0x16
// 0078479b  8954242c             mov dword ptr [esp + 0x2c], edx
// 0078479f  89442430             mov dword ptr [esp + 0x30], eax
// 007847a3  e898690100           call 0x79b140
// 007847a8  8b10                 mov edx, dword ptr [eax]
// 007847aa  8b5208               mov edx, dword ptr [edx + 8]
// 007847ad  6889240000           push 0x2489
// 007847b2  8d4c2414             lea ecx, [esp + 0x14]
// 007847b6  51                   push ecx
// 007847b7  8bc8                 mov ecx, eax
// 007847b9  ffd2                 call edx
// 007847bb  8b7c2454             mov edi, dword ptr [esp + 0x54]
// 007847bf  6a25                 push 0x25
// 007847c1  8d442428             lea eax, [esp + 0x28]
// 007847c5  50                   push eax
// 007847c6  8d4c2418             lea ecx, [esp + 0x18]
// 007847ca  83c770               add edi, 0x70
// 007847cd  ff1554fb8900         call dword ptr [0x89fb54]
// 007847d3  50                   push eax
// 007847d4  8d4c241c             lea ecx, [esp + 0x1c]
// 007847d8  ff15d0fc8900         call dword ptr [0x89fcd0]
// 007847de  8b17                 mov edx, dword ptr [edi]
// 007847e0  50                   push eax
// 007847e1  8d4c2464             lea ecx, [esp + 0x64]
// 007847e5  ffd2                 call edx
// 007847e7  6aff                 push -1
// 007847e9  6aff                 push -1
// 007847eb  8d44241c             lea eax, [esp + 0x1c]
// 007847ef  50                   push eax
// 007847f0  ffd5                 call ebp
// 007847f2  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 007847f6  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007847fa  8bc5                 mov eax, ebp
// 007847fc  2bc1                 sub eax, ecx
// 007847fe  99                   cdq 
// 007847ff  2bc2                 sub eax, edx
// 00784801  8b542414             mov edx, dword ptr [esp + 0x14]
// 00784805  899604010000         mov dword ptr [esi + 0x104], edx
// 0078480b  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0078480f  8bf8                 mov edi, eax
// 00784811  8d8604010000         lea eax, [esi + 0x104]
// 00784817  894804               mov dword ptr [eax + 4], ecx
// 0078481a  895008               mov dword ptr [eax + 8], edx
// 0078481d  8b9624010000         mov edx, dword ptr [esi + 0x124]
// 00784823  d1ff                 sar edi, 1
// 00784825  03cf                 add ecx, edi
// 00784827  89680c               mov dword ptr [eax + 0xc], ebp
// 0078482a  52                   push edx
// 0078482b  898e10010000         mov dword ptr [esi + 0x110], ecx
// 00784831  50                   push eax
// 00784832  8d4c245c             lea ecx, [esp + 0x5c]
// 00784836  e8954ff9ff           call 0x7197d0
// 0078483b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0078483f  8b542418             mov edx, dword ptr [esp + 0x18]
// 00784843  898e14010000         mov dword ptr [esi + 0x114], ecx
// 00784849  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0078484d  8d8614010000         lea eax, [esi + 0x114]
// 00784853  895004               mov dword ptr [eax + 4], edx
// 00784856  8b9628010000         mov edx, dword ptr [esi + 0x128]
// 0078485c  894808               mov dword ptr [eax + 8], ecx
// 0078485f  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00784863  89480c               mov dword ptr [eax + 0xc], ecx
// 00784866  2bcf                 sub ecx, edi
// 00784868  52                   push edx
// 00784869  898e18010000         mov dword ptr [esi + 0x118], ecx
// 0078486f  50                   push eax
// 00784870  8d4c245c             lea ecx, [esp + 0x5c]
// 00784874  e8574ff9ff           call 0x7197d0
// 00784879  8d4c2410             lea ecx, [esp + 0x10]
// 0078487d  ff1510fd8900         call dword ptr [0x89fd10]
// 00784883  8d4c2444             lea ecx, [esp + 0x44]
// 00784887  c68424b400000000     mov byte ptr [esp + 0xb4], 0
// 0078488f  e84cc0feff           call 0x7708e0
// 00784894  8d4c2454             lea ecx, [esp + 0x54]
// 00784898  c78424b4000000ffffffff mov dword ptr [esp + 0xb4], 0xffffffff
// 007848a3  e81a4bf9ff           call 0x7193c2
// 007848a8  8b8c24ac000000       mov ecx, dword ptr [esp + 0xac]
// 007848af  64890d00000000       mov dword ptr fs:[0], ecx
// 007848b6  59                   pop ecx
// 007848b7  5f                   pop edi
// 007848b8  5e                   pop esi
// 007848b9  5d                   pop ebp
// 007848ba  8b8c2498000000       mov ecx, dword ptr [esp + 0x98]
// 007848c1  33cc                 xor ecx, esp
// 007848c3  e8b25cf9ff           call 0x71a57a
// 007848c8  81c4a8000000         add esp, 0xa8
// 007848ce  c3                   ret 
// copied from an identical function in another client (function ?OnPaint@CXTColorDialog@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTColorDialog.cpp