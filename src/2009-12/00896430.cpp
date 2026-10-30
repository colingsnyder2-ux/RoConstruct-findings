// roc 2009-12 00896430  unit: CXTPRibbonBar  size: 992 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00896430
//
// 00896430  6aff                 push -1
// 00896432  68e0179600           push 0x9617e0
// 00896437  64a100000000         mov eax, dword ptr fs:[0]
// 0089643d  50                   push eax
// 0089643e  83ec68               sub esp, 0x68
// 00896441  53                   push ebx
// 00896442  55                   push ebp
// 00896443  56                   push esi
// 00896444  57                   push edi
// 00896445  a10052b600           mov eax, dword ptr [0xb65200]
// 0089644a  33c4                 xor eax, esp
// 0089644c  50                   push eax
// 0089644d  8d44247c             lea eax, [esp + 0x7c]
// 00896451  64a300000000         mov dword ptr fs:[0], eax
// 00896457  8bf1                 mov esi, ecx
// 00896459  e872e8ffff           call 0x894cd0
// 0089645e  85c0                 test eax, eax
// 00896460  0f8496030000         je 0x8967fc
// 00896466  83be4802000000       cmp dword ptr [esi + 0x248], 0
// 0089646d  8b862c020000         mov eax, dword ptr [esi + 0x22c]
// 00896473  8b8e30020000         mov ecx, dword ptr [esi + 0x230]
// 00896479  8b9e34020000         mov ebx, dword ptr [esi + 0x234]
// 0089647f  8b9638020000         mov edx, dword ptr [esi + 0x238]
// 00896485  89442448             mov dword ptr [esp + 0x48], eax
// 00896489  894c244c             mov dword ptr [esp + 0x4c], ecx
// 0089648d  895c2450             mov dword ptr [esp + 0x50], ebx
// 00896491  89542454             mov dword ptr [esp + 0x54], edx
// 00896495  754a                 jne 0x8964e1
// 00896497  83be4c02000000       cmp dword ptr [esi + 0x24c], 0
// 0089649e  7441                 je 0x8964e1
// 008964a0  8b8e6c020000         mov ecx, dword ptr [esi + 0x26c]
// 008964a6  85c9                 test ecx, ecx
// 008964a8  7422                 je 0x8964cc
// 008964aa  8d442428             lea eax, [esp + 0x28]
// 008964ae  50                   push eax
// 008964af  e8fcf6f5ff           call 0x7f5bb0
// 008964b4  8b4808               mov ecx, dword ptr [eax + 8]
// 008964b7  2b08                 sub ecx, dword ptr [eax]
// 008964b9  8dbe1c020000         lea edi, [esi + 0x21c]
// 008964bf  83c102               add ecx, 2
// 008964c2  03d9                 add ebx, ecx
// 008964c4  895c2450             mov dword ptr [esp + 0x50], ebx
// 008964c8  891f                 mov dword ptr [edi], ebx
// 008964ca  eb22                 jmp 0x8964ee
// 008964cc  b90c000000           mov ecx, 0xc
// 008964d1  03d9                 add ebx, ecx
// 008964d3  8dbe1c020000         lea edi, [esi + 0x21c]
// 008964d9  895c2450             mov dword ptr [esp + 0x50], ebx
// 008964dd  891f                 mov dword ptr [edi], ebx
// 008964df  eb0d                 jmp 0x8964ee
// 008964e1  83861c02000046       add dword ptr [esi + 0x21c], 0x46
// 008964e8  8dbe1c020000         lea edi, [esi + 0x21c]
// 008964ee  8bce                 mov ecx, esi
// 008964f0  e89b0bf7ff           call 0x807090
// 008964f5  8bd8                 mov ebx, eax
// 008964f7  8bcb                 mov ecx, ebx
// 008964f9  e874ff0800           call 0x926472
// 008964fe  8bcb                 mov ecx, ebx
// 00896500  8be8                 mov ebp, eax
// 00896502  e871ff0800           call 0x926478
// 00896507  8b9680020000         mov edx, dword ptr [esi + 0x280]
// 0089650d  2480                 and al, 0x80
// 0089650f  33c9                 xor ecx, ecx
// 00896511  3c80                 cmp al, 0x80
// 00896513  8b4240               mov eax, dword ptr [edx + 0x40]
// 00896516  0f94c1               sete cl
// 00896519  014704               add dword ptr [edi + 4], eax
// 0089651c  83470cfd             add dword ptr [edi + 0xc], -3
// 00896520  8b8680020000         mov eax, dword ptr [esi + 0x280]
// 00896526  8b5044               mov edx, dword ptr [eax + 0x44]
// 00896529  89542424             mov dword ptr [esp + 0x24], edx
// 0089652d  33d2                 xor edx, edx
// 0089652f  8bc5                 mov eax, ebp
// 00896531  2500000001           and eax, 0x1000000
// 00896536  3d00000001           cmp eax, 0x1000000
// 0089653b  0f94c2               sete dl
// 0089653e  33db                 xor ebx, ebx
// 00896540  8bc5                 mov eax, ebp
// 00896542  2500000800           and eax, 0x80000
// 00896547  c744242001000000     mov dword ptr [esp + 0x20], 1
// 0089654f  89542418             mov dword ptr [esp + 0x18], edx
// 00896553  8bd5                 mov edx, ebp
// 00896555  81e200000100         and edx, 0x10000
// 0089655b  81fa00000100         cmp edx, 0x10000
// 00896561  0f94c3               sete bl
// 00896564  8bd5                 mov edx, ebp
// 00896566  81e200000200         and edx, 0x20000
// 0089656c  895c241c             mov dword ptr [esp + 0x1c], ebx
// 00896570  33db                 xor ebx, ebx
// 00896572  81fa00000200         cmp edx, 0x20000
// 00896578  0f94c3               sete bl
// 0089657b  8bd3                 mov edx, ebx
// 0089657d  89542428             mov dword ptr [esp + 0x28], edx
// 00896581  85c9                 test ecx, ecx
// 00896583  7518                 jne 0x89659d
// 00896585  85c0                 test eax, eax
// 00896587  7414                 je 0x89659d
// 00896589  394c241c             cmp dword ptr [esp + 0x1c], ecx
// 0089658d  7504                 jne 0x896593
// 0089658f  85d2                 test edx, edx
// 00896591  740a                 je 0x89659d
// 00896593  c744241401000000     mov dword ptr [esp + 0x14], 1
// 0089659b  eb08                 jmp 0x8965a5
// 0089659d  c744241400000000     mov dword ptr [esp + 0x14], 0
// 008965a5  8bd8                 mov ebx, eax
// 008965a7  85c0                 test eax, eax
// 008965a9  743a                 je 0x8965e5
// 008965ab  85c9                 test ecx, ecx
// 008965ad  7536                 jne 0x8965e5
// 008965af  8bce                 mov ecx, esi
// 008965b1  e8da0af7ff           call 0x807090
// 008965b6  8b4020               mov eax, dword ptr [eax + 0x20]
// 008965b9  6a00                 push 0
// 008965bb  50                   push eax
// 008965bc  ff15f4cb9800         call dword ptr [0x98cbf4]
// 008965c2  50                   push eax
// 008965c3  e822d9f5ff           call 0x7f3eea
// 008965c8  85c0                 test eax, eax
// 008965ca  7419                 je 0x8965e5
// 008965cc  8b4804               mov ecx, dword ptr [eax + 4]
// 008965cf  6a00                 push 0
// 008965d1  6860f00000           push 0xf060
// 008965d6  51                   push ecx
// 008965d7  ff15f0c99800         call dword ptr [0x98c9f0]
// 008965dd  a803                 test al, 3
// 008965df  7404                 je 0x8965e5
// 008965e1  33c9                 xor ecx, ecx
// 008965e3  eb04                 jmp 0x8965e9
// 008965e5  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008965e9  33c0                 xor eax, eax
// 008965eb  39442418             cmp dword ptr [esp + 0x18], eax
// 008965ef  740e                 je 0x8965ff
// 008965f1  f7c500000040         test ebp, 0x40000000
// 008965f7  7406                 je 0x8965ff
// 008965f9  33db                 xor ebx, ebx
// 008965fb  89442414             mov dword ptr [esp + 0x14], eax
// 008965ff  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 00896603  3be8                 cmp ebp, eax
// 00896605  7509                 jne 0x896610
// 00896607  3bd8                 cmp ebx, eax
// 00896609  7405                 je 0x896610
// 0089660b  b801000000           mov eax, 1
// 00896610  57                   push edi
// 00896611  51                   push ecx
// 00896612  50                   push eax
// 00896613  6860f00000           push 0xf060
// 00896618  8bce                 mov ecx, esi
// 0089661a  e821fcffff           call 0x896240
// 0089661f  85ed                 test ebp, ebp
// 00896621  7511                 jne 0x896634
// 00896623  396c2414             cmp dword ptr [esp + 0x14], ebp
// 00896627  740b                 je 0x896634
// 00896629  396c2418             cmp dword ptr [esp + 0x18], ebp
// 0089662d  7405                 je 0x896634
// 0089662f  8d4501               lea eax, [ebp + 1]
// 00896632  eb02                 jmp 0x896636
// 00896634  33c0                 xor eax, eax
// 00896636  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0089663a  57                   push edi
// 0089663b  53                   push ebx
// 0089663c  50                   push eax
// 0089663d  6820f10000           push 0xf120
// 00896642  8bce                 mov ecx, esi
// 00896644  e8f7fbffff           call 0x896240
// 00896649  85ed                 test ebp, ebp
// 0089664b  7511                 jne 0x89665e
// 0089664d  396c2414             cmp dword ptr [esp + 0x14], ebp
// 00896651  740b                 je 0x89665e
// 00896653  396c2418             cmp dword ptr [esp + 0x18], ebp
// 00896657  7505                 jne 0x89665e
// 00896659  8d4501               lea eax, [ebp + 1]
// 0089665c  eb02                 jmp 0x896660
// 0089665e  33c0                 xor eax, eax
// 00896660  57                   push edi
// 00896661  53                   push ebx
// 00896662  50                   push eax
// 00896663  6830f00000           push 0xf030
// 00896668  8bce                 mov ecx, esi
// 0089666a  e8d1fbffff           call 0x896240
// 0089666f  85ed                 test ebp, ebp
// 00896671  750b                 jne 0x89667e
// 00896673  396c2414             cmp dword ptr [esp + 0x14], ebp
// 00896677  7405                 je 0x89667e
// 00896679  8d4501               lea eax, [ebp + 1]
// 0089667c  eb02                 jmp 0x896680
// 0089667e  33c0                 xor eax, eax
// 00896680  8b542428             mov edx, dword ptr [esp + 0x28]
// 00896684  57                   push edi
// 00896685  52                   push edx
// 00896686  50                   push eax
// 00896687  6820f00000           push 0xf020
// 0089668c  8bce                 mov ecx, esi
// 0089668e  e8adfbffff           call 0x896240
// 00896693  85ed                 test ebp, ebp
// 00896695  7407                 je 0x89669e
// 00896697  8386240200009c       add dword ptr [esi + 0x224], -0x64
// 0089669e  8b8e28020000         mov ecx, dword ptr [esi + 0x228]
// 008966a4  8b9624020000         mov edx, dword ptr [esi + 0x224]
// 008966aa  8b9e20020000         mov ebx, dword ptr [esi + 0x220]
// 008966b0  8b860c020000         mov eax, dword ptr [esi + 0x20c]
// 008966b6  51                   push ecx
// 008966b7  8dae0c020000         lea ebp, [esi + 0x20c]
// 008966bd  52                   push edx
// 008966be  53                   push ebx
// 008966bf  83c046               add eax, 0x46
// 008966c2  50                   push eax
// 008966c3  55                   push ebp
// 008966c4  ff1538ca9800         call dword ptr [0x98ca38]
// 008966ca  56                   push esi
// 008966cb  8d4c246c             lea ecx, [esp + 0x6c]
// 008966cf  e802e0f5ff           call 0x7f46d6
// 008966d4  8bce                 mov ecx, esi
// 008966d6  c784248400000000000000 mov dword ptr [esp + 0x84], 0
// 008966e1  e88ae5ffff           call 0x894c70
// 008966e6  05b4050000           add eax, 0x5b4
// 008966eb  50                   push eax
// 008966ec  8d44246c             lea eax, [esp + 0x6c]
// 008966f0  50                   push eax
// 008966f1  8d4c2460             lea ecx, [esp + 0x60]
// 008966f5  e8664ffbff           call 0x84b660
// 008966fa  8d9e94020000         lea ebx, [esi + 0x294]
// 00896700  53                   push ebx
// 00896701  8bce                 mov ecx, esi
// 00896703  c684248800000001     mov byte ptr [esp + 0x88], 1
// 0089670b  e88009f7ff           call 0x807090
// 00896710  8bc8                 mov ecx, eax
// 00896712  e831d7f5ff           call 0x7f3e48
// 00896717  8d4c2428             lea ecx, [esp + 0x28]
// 0089671b  51                   push ecx
// 0089671c  8bcb                 mov ecx, ebx
// 0089671e  ff15b4dd9800         call dword ptr [0x98ddb4]
// 00896724  50                   push eax
// 00896725  8bcb                 mov ecx, ebx
// 00896727  ff1580de9800         call dword ptr [0x98de80]
// 0089672d  8b542478             mov edx, dword ptr [esp + 0x78]
// 00896731  50                   push eax
// 00896732  52                   push edx
// 00896733  ff156cb19800         call dword ptr [0x98b16c]
// 00896739  8b4508               mov eax, dword ptr [ebp + 8]
// 0089673c  8b742428             mov esi, dword ptr [esp + 0x28]
// 00896740  2b4500               sub eax, dword ptr [ebp]
// 00896743  83c614               add esi, 0x14
// 00896746  3bc6                 cmp eax, esi
// 00896748  7d06                 jge 0x896750
// 0089674a  8b7508               mov esi, dword ptr [ebp + 8]
// 0089674d  2b7500               sub esi, dword ptr [ebp]
// 00896750  8b4d00               mov ecx, dword ptr [ebp]
// 00896753  8b5504               mov edx, dword ptr [ebp + 4]
// 00896756  8b4508               mov eax, dword ptr [ebp + 8]
// 00896759  2bc1                 sub eax, ecx
// 0089675b  8954243c             mov dword ptr [esp + 0x3c], edx
// 0089675f  8b550c               mov edx, dword ptr [ebp + 0xc]
// 00896762  2bc6                 sub eax, esi
// 00896764  89542444             mov dword ptr [esp + 0x44], edx
// 00896768  99                   cdq 
// 00896769  2bc2                 sub eax, edx
// 0089676b  d1f8                 sar eax, 1
// 0089676d  03c8                 add ecx, eax
// 0089676f  894c2438             mov dword ptr [esp + 0x38], ecx
// 00896773  03ce                 add ecx, esi
// 00896775  8d442438             lea eax, [esp + 0x38]
// 00896779  894c2440             mov dword ptr [esp + 0x40], ecx
// 0089677d  50                   push eax
// 0089677e  8d4c244c             lea ecx, [esp + 0x4c]
// 00896782  51                   push ecx
// 00896783  8d542430             lea edx, [esp + 0x30]
// 00896787  52                   push edx
// 00896788  ff15dcca9800         call dword ptr [0x98cadc]
// 0089678e  85c0                 test eax, eax
// 00896790  7429                 je 0x8967bb
// 00896792  8b4708               mov eax, dword ptr [edi + 8]
// 00896795  2b07                 sub eax, dword ptr [edi]
// 00896797  3bc6                 cmp eax, esi
// 00896799  7d05                 jge 0x8967a0
// 0089679b  8b7708               mov esi, dword ptr [edi + 8]
// 0089679e  2b37                 sub esi, dword ptr [edi]
// 008967a0  8b4708               mov eax, dword ptr [edi + 8]
// 008967a3  2b07                 sub eax, dword ptr [edi]
// 008967a5  2bc6                 sub eax, esi
// 008967a7  99                   cdq 
// 008967a8  2bc2                 sub eax, edx
// 008967aa  d1f8                 sar eax, 1
// 008967ac  0307                 add eax, dword ptr [edi]
// 008967ae  8d0c30               lea ecx, [eax + esi]
// 008967b1  89442438             mov dword ptr [esp + 0x38], eax
// 008967b5  894c2440             mov dword ptr [esp + 0x40], ecx
// 008967b9  eb04                 jmp 0x8967bf
// 008967bb  8b442438             mov eax, dword ptr [esp + 0x38]
// 008967bf  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 008967c3  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 008967c7  894500               mov dword ptr [ebp], eax
// 008967ca  8b442440             mov eax, dword ptr [esp + 0x40]
// 008967ce  895504               mov dword ptr [ebp + 4], edx
// 008967d1  894508               mov dword ptr [ebp + 8], eax
// 008967d4  894d0c               mov dword ptr [ebp + 0xc], ecx
// 008967d7  8d4c2458             lea ecx, [esp + 0x58]
// 008967db  c684248400000000     mov byte ptr [esp + 0x84], 0
// 008967e3  e8f84efbff           call 0x84b6e0
// 008967e8  8d4c2468             lea ecx, [esp + 0x68]
// 008967ec  c7842484000000ffffffff mov dword ptr [esp + 0x84], 0xffffffff
// 008967f7  e8d4def5ff           call 0x7f46d0
// 008967fc  8b4c247c             mov ecx, dword ptr [esp + 0x7c]
// 00896800  64890d00000000       mov dword ptr fs:[0], ecx
// 00896807  59                   pop ecx
// 00896808  5f                   pop edi
// 00896809  5e                   pop esi
// 0089680a  5d                   pop ebp
// 0089680b  5b                   pop ebx
// 0089680c  83c474               add esp, 0x74
// 0089680f  c3                   ret 
// copied from an identical function in another client (function ?RepositionCaptionButtons@CXTPRibbonBar@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Ribbon\XTPRibbonBar.cpp