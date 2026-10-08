// roc 2007-03 00608450  unit: seg_00600000  size: 709 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00608450
//
// 00608450  64a100000000         mov eax, dword ptr fs:[0]
// 00608456  6aff                 push -1
// 00608458  68926f7500           push 0x756f92
// 0060845d  50                   push eax
// 0060845e  64892500000000       mov dword ptr fs:[0], esp
// 00608465  8b442418             mov eax, dword ptr [esp + 0x18]
// 00608469  83ec48               sub esp, 0x48
// 0060846c  80782d00             cmp byte ptr [eax + 0x2d], 0
// 00608470  55                   push ebp
// 00608471  8be9                 mov ebp, ecx
// 00608473  7459                 je 0x6084ce
// 00608475  68dc3e7800           push 0x783edc
// 0060847a  8d4c240c             lea ecx, [esp + 0xc]
// 0060847e  ff1578e77700         call dword ptr [0x77e778]
// 00608484  8d4c2424             lea ecx, [esp + 0x24]
// 00608488  c744245400000000     mov dword ptr [esp + 0x54], 0
// 00608490  ff1560e97700         call dword ptr [0x77e960]
// 00608496  8d442408             lea eax, [esp + 8]
// 0060849a  50                   push eax
// 0060849b  8d4c2434             lea ecx, [esp + 0x34]
// 0060849f  c644245801           mov byte ptr [esp + 0x58], 1
// 006084a4  c7442428383e7800     mov dword ptr [esp + 0x28], 0x783e38
// 006084ac  ff157ce77700         call dword ptr [0x77e77c]
// 006084b2  68ccf38300           push 0x83f3cc
// 006084b7  8d4c2428             lea ecx, [esp + 0x28]
// 006084bb  51                   push ecx
// 006084bc  c644245c00           mov byte ptr [esp + 0x5c], 0
// 006084c1  c744242c503e7800     mov dword ptr [esp + 0x2c], 0x783e50
// 006084c9  e8606b0100           call 0x61f02e
// 006084ce  53                   push ebx
// 006084cf  56                   push esi
// 006084d0  8bd8                 mov ebx, eax
// 006084d2  57                   push edi
// 006084d3  8d4c246c             lea ecx, [esp + 0x6c]
// 006084d7  895c2410             mov dword ptr [esp + 0x10], ebx
// 006084db  e89051f2ff           call 0x52d670
// 006084e0  8b03                 mov eax, dword ptr [ebx]
// 006084e2  80782d00             cmp byte ptr [eax + 0x2d], 0
// 006084e6  7405                 je 0x6084ed
// 006084e8  8b7b08               mov edi, dword ptr [ebx + 8]
// 006084eb  eb18                 jmp 0x608505
// 006084ed  8b5308               mov edx, dword ptr [ebx + 8]
// 006084f0  807a2d00             cmp byte ptr [edx + 0x2d], 0
// 006084f4  7404                 je 0x6084fa
// 006084f6  8bf8                 mov edi, eax
// 006084f8  eb0b                 jmp 0x608505
// 006084fa  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 006084fe  3bcb                 cmp ecx, ebx
// 00608500  8b7908               mov edi, dword ptr [ecx + 8]
// 00608503  756b                 jne 0x608570
// 00608505  807f2d00             cmp byte ptr [edi + 0x2d], 0
// 00608509  8b7304               mov esi, dword ptr [ebx + 4]
// 0060850c  7503                 jne 0x608511
// 0060850e  897704               mov dword ptr [edi + 4], esi
// 00608511  8b4504               mov eax, dword ptr [ebp + 4]
// 00608514  395804               cmp dword ptr [eax + 4], ebx
// 00608517  7505                 jne 0x60851e
// 00608519  897804               mov dword ptr [eax + 4], edi
// 0060851c  eb0b                 jmp 0x608529
// 0060851e  391e                 cmp dword ptr [esi], ebx
// 00608520  7504                 jne 0x608526
// 00608522  893e                 mov dword ptr [esi], edi
// 00608524  eb03                 jmp 0x608529
// 00608526  897e08               mov dword ptr [esi + 8], edi
// 00608529  8b5d04               mov ebx, dword ptr [ebp + 4]
// 0060852c  8b03                 mov eax, dword ptr [ebx]
// 0060852e  3b442410             cmp eax, dword ptr [esp + 0x10]
// 00608532  7515                 jne 0x608549
// 00608534  807f2d00             cmp byte ptr [edi + 0x2d], 0
// 00608538  7404                 je 0x60853e
// 0060853a  8bc6                 mov eax, esi
// 0060853c  eb09                 jmp 0x608547
// 0060853e  57                   push edi
// 0060853f  e8dc0bf6ff           call 0x569120
// 00608544  83c404               add esp, 4
// 00608547  8903                 mov dword ptr [ebx], eax
// 00608549  8b5d04               mov ebx, dword ptr [ebp + 4]
// 0060854c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00608550  394b08               cmp dword ptr [ebx + 8], ecx
// 00608553  7572                 jne 0x6085c7
// 00608555  807f2d00             cmp byte ptr [edi + 0x2d], 0
// 00608559  7407                 je 0x608562
// 0060855b  8bc6                 mov eax, esi
// 0060855d  894308               mov dword ptr [ebx + 8], eax
// 00608560  eb65                 jmp 0x6085c7
// 00608562  57                   push edi
// 00608563  e8a8f8ffff           call 0x607e10
// 00608568  83c404               add esp, 4
// 0060856b  894308               mov dword ptr [ebx + 8], eax
// 0060856e  eb57                 jmp 0x6085c7
// 00608570  894804               mov dword ptr [eax + 4], ecx
// 00608573  8b13                 mov edx, dword ptr [ebx]
// 00608575  8911                 mov dword ptr [ecx], edx
// 00608577  3b4b08               cmp ecx, dword ptr [ebx + 8]
// 0060857a  7504                 jne 0x608580
// 0060857c  8bf1                 mov esi, ecx
// 0060857e  eb1a                 jmp 0x60859a
// 00608580  807f2d00             cmp byte ptr [edi + 0x2d], 0
// 00608584  8b7104               mov esi, dword ptr [ecx + 4]
// 00608587  7503                 jne 0x60858c
// 00608589  897704               mov dword ptr [edi + 4], esi
// 0060858c  893e                 mov dword ptr [esi], edi
// 0060858e  8b4308               mov eax, dword ptr [ebx + 8]
// 00608591  894108               mov dword ptr [ecx + 8], eax
// 00608594  8b5308               mov edx, dword ptr [ebx + 8]
// 00608597  894a04               mov dword ptr [edx + 4], ecx
// 0060859a  8b4504               mov eax, dword ptr [ebp + 4]
// 0060859d  395804               cmp dword ptr [eax + 4], ebx
// 006085a0  7505                 jne 0x6085a7
// 006085a2  894804               mov dword ptr [eax + 4], ecx
// 006085a5  eb0e                 jmp 0x6085b5
// 006085a7  8b4304               mov eax, dword ptr [ebx + 4]
// 006085aa  3918                 cmp dword ptr [eax], ebx
// 006085ac  7504                 jne 0x6085b2
// 006085ae  8908                 mov dword ptr [eax], ecx
// 006085b0  eb03                 jmp 0x6085b5
// 006085b2  894808               mov dword ptr [eax + 8], ecx
// 006085b5  8b4304               mov eax, dword ptr [ebx + 4]
// 006085b8  894104               mov dword ptr [ecx + 4], eax
// 006085bb  8a532c               mov dl, byte ptr [ebx + 0x2c]
// 006085be  8a412c               mov al, byte ptr [ecx + 0x2c]
// 006085c1  88512c               mov byte ptr [ecx + 0x2c], dl
// 006085c4  88432c               mov byte ptr [ebx + 0x2c], al
// 006085c7  8b442410             mov eax, dword ptr [esp + 0x10]
// 006085cb  b301                 mov bl, 1
// 006085cd  38582c               cmp byte ptr [eax + 0x2c], bl
// 006085d0  0f85f2000000         jne 0x6086c8
// 006085d6  8b4d04               mov ecx, dword ptr [ebp + 4]
// 006085d9  3b7904               cmp edi, dword ptr [ecx + 4]
// 006085dc  0f84e3000000         je 0x6086c5
// 006085e2  385f2c               cmp byte ptr [edi + 0x2c], bl
// 006085e5  0f85da000000         jne 0x6086c5
// 006085eb  8b06                 mov eax, dword ptr [esi]
// 006085ed  3bf8                 cmp edi, eax
// 006085ef  7563                 jne 0x608654
// 006085f1  8b4608               mov eax, dword ptr [esi + 8]
// 006085f4  80782c00             cmp byte ptr [eax + 0x2c], 0
// 006085f8  7512                 jne 0x60860c
// 006085fa  88582c               mov byte ptr [eax + 0x2c], bl
// 006085fd  56                   push esi
// 006085fe  8bcd                 mov ecx, ebp
// 00608600  c6462c00             mov byte ptr [esi + 0x2c], 0
// 00608604  e887a7f3ff           call 0x542d90
// 00608609  8b4608               mov eax, dword ptr [esi + 8]
// 0060860c  80782d00             cmp byte ptr [eax + 0x2d], 0
// 00608610  7572                 jne 0x608684
// 00608612  8b10                 mov edx, dword ptr [eax]
// 00608614  385a2c               cmp byte ptr [edx + 0x2c], bl
// 00608617  7508                 jne 0x608621
// 00608619  8b4808               mov ecx, dword ptr [eax + 8]
// 0060861c  38592c               cmp byte ptr [ecx + 0x2c], bl
// 0060861f  745f                 je 0x608680
// 00608621  8b4808               mov ecx, dword ptr [eax + 8]
// 00608624  38592c               cmp byte ptr [ecx + 0x2c], bl
// 00608627  7512                 jne 0x60863b
// 00608629  885a2c               mov byte ptr [edx + 0x2c], bl
// 0060862c  50                   push eax
// 0060862d  8bcd                 mov ecx, ebp
// 0060862f  c6402c00             mov byte ptr [eax + 0x2c], 0
// 00608633  e8289df6ff           call 0x572360
// 00608638  8b4608               mov eax, dword ptr [esi + 8]
// 0060863b  8a4e2c               mov cl, byte ptr [esi + 0x2c]
// 0060863e  88482c               mov byte ptr [eax + 0x2c], cl
// 00608641  885e2c               mov byte ptr [esi + 0x2c], bl
// 00608644  8b5008               mov edx, dword ptr [eax + 8]
// 00608647  56                   push esi
// 00608648  8bcd                 mov ecx, ebp
// 0060864a  885a2c               mov byte ptr [edx + 0x2c], bl
// 0060864d  e83ea7f3ff           call 0x542d90
// 00608652  eb71                 jmp 0x6086c5
// 00608654  80782c00             cmp byte ptr [eax + 0x2c], 0
// 00608658  7511                 jne 0x60866b
// 0060865a  88582c               mov byte ptr [eax + 0x2c], bl
// 0060865d  56                   push esi
// 0060865e  8bcd                 mov ecx, ebp
// 00608660  c6462c00             mov byte ptr [esi + 0x2c], 0
// 00608664  e8f79cf6ff           call 0x572360
// 00608669  8b06                 mov eax, dword ptr [esi]
// 0060866b  80782d00             cmp byte ptr [eax + 0x2d], 0
// 0060866f  7513                 jne 0x608684
// 00608671  8b5008               mov edx, dword ptr [eax + 8]
// 00608674  385a2c               cmp byte ptr [edx + 0x2c], bl
// 00608677  751e                 jne 0x608697
// 00608679  8b08                 mov ecx, dword ptr [eax]
// 0060867b  38592c               cmp byte ptr [ecx + 0x2c], bl
// 0060867e  7517                 jne 0x608697
// 00608680  c6402c00             mov byte ptr [eax + 0x2c], 0
// 00608684  8b5504               mov edx, dword ptr [ebp + 4]
// 00608687  8bfe                 mov edi, esi
// 00608689  3b7a04               cmp edi, dword ptr [edx + 4]
// 0060868c  8b7604               mov esi, dword ptr [esi + 4]
// 0060868f  0f854dffffff         jne 0x6085e2
// 00608695  eb2e                 jmp 0x6086c5
// 00608697  8b08                 mov ecx, dword ptr [eax]
// 00608699  38592c               cmp byte ptr [ecx + 0x2c], bl
// 0060869c  7511                 jne 0x6086af
// 0060869e  885a2c               mov byte ptr [edx + 0x2c], bl
// 006086a1  50                   push eax
// 006086a2  8bcd                 mov ecx, ebp
// 006086a4  c6402c00             mov byte ptr [eax + 0x2c], 0
// 006086a8  e8e3a6f3ff           call 0x542d90
// 006086ad  8b06                 mov eax, dword ptr [esi]
// 006086af  8a4e2c               mov cl, byte ptr [esi + 0x2c]
// 006086b2  88482c               mov byte ptr [eax + 0x2c], cl
// 006086b5  885e2c               mov byte ptr [esi + 0x2c], bl
// 006086b8  8b10                 mov edx, dword ptr [eax]
// 006086ba  56                   push esi
// 006086bb  8bcd                 mov ecx, ebp
// 006086bd  885a2c               mov byte ptr [edx + 0x2c], bl
// 006086c0  e89b9cf6ff           call 0x572360
// 006086c5  885f2c               mov byte ptr [edi + 0x2c], bl
// 006086c8  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006086cc  83c10c               add ecx, 0xc
// 006086cf  ff158ce77700         call dword ptr [0x77e78c]
// 006086d5  8b442410             mov eax, dword ptr [esp + 0x10]
// 006086d9  50                   push eax
// 006086da  e8115a0100           call 0x61e0f0
// 006086df  8b4508               mov eax, dword ptr [ebp + 8]
// 006086e2  83c404               add esp, 4
// 006086e5  85c0                 test eax, eax
// 006086e7  5f                   pop edi
// 006086e8  5e                   pop esi
// 006086e9  5b                   pop ebx
// 006086ea  7606                 jbe 0x6086f2
// 006086ec  83c0ff               add eax, -1
// 006086ef  894508               mov dword ptr [ebp + 8], eax
// 006086f2  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 006086f6  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 006086fa  8b542464             mov edx, dword ptr [esp + 0x64]
// 006086fe  8908                 mov dword ptr [eax], ecx
// 00608700  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00608704  895004               mov dword ptr [eax + 4], edx
// 00608707  5d                   pop ebp
// 00608708  64890d00000000       mov dword ptr fs:[0], ecx
// 0060870f  83c454               add esp, 0x54
// 00608712  c20c00               ret 0xc
// library rbxgs/v8datamodel\Camera.cpp (function ?erase@?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4CameraType@Camera@RBX@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4CameraType@Camera@RBX@@@std@@@2@$0A@@std@@@std@@QAE?AViterator@12@V312@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp
