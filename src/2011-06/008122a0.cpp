// roc 2011-06 008122a0  unit: CXTPPaintManager  size: 1248 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008122a0
//
// 008122a0  6aff                 push -1
// 008122a2  687925a000           push 0xa02579
// 008122a7  64a100000000         mov eax, dword ptr fs:[0]
// 008122ad  50                   push eax
// 008122ae  83ec48               sub esp, 0x48
// 008122b1  53                   push ebx
// 008122b2  55                   push ebp
// 008122b3  56                   push esi
// 008122b4  57                   push edi
// 008122b5  a12058c900           mov eax, dword ptr [0xc95820]
// 008122ba  33c4                 xor eax, esp
// 008122bc  50                   push eax
// 008122bd  8d44245c             lea eax, [esp + 0x5c]
// 008122c1  64a300000000         mov dword ptr fs:[0], eax
// 008122c7  8bf9                 mov edi, ecx
// 008122c9  837c247800           cmp dword ptr [esp + 0x78], 0
// 008122ce  8b742474             mov esi, dword ptr [esp + 0x74]
// 008122d2  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 008122d8  8b80f8000000         mov eax, dword ptr [eax + 0xf8]
// 008122de  0f841c020000         je 0x812500
// 008122e4  83f802               cmp eax, 2
// 008122e7  751b                 jne 0x812304
// 008122e9  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 008122ed  8b07                 mov eax, dword ptr [edi]
// 008122ef  8b4058               mov eax, dword ptr [eax + 0x58]
// 008122f2  6a01                 push 1
// 008122f4  56                   push esi
// 008122f5  51                   push ecx
// 008122f6  8d542430             lea edx, [esp + 0x30]
// 008122fa  52                   push edx
// 008122fb  8bcf                 mov ecx, edi
// 008122fd  ffd0                 call eax
// 008122ff  e9e6010000           jmp 0x8124ea
// 00812304  8b86c8000000         mov eax, dword ptr [esi + 0xc8]
// 0081230a  8b8ec0000000         mov ecx, dword ptr [esi + 0xc0]
// 00812310  8b9ec0000000         mov ebx, dword ptr [esi + 0xc0]
// 00812316  8b96c4000000         mov edx, dword ptr [esi + 0xc4]
// 0081231c  89442444             mov dword ptr [esp + 0x44], eax
// 00812320  89442434             mov dword ptr [esp + 0x34], eax
// 00812324  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 0081232a  894c243c             mov dword ptr [esp + 0x3c], ecx
// 0081232e  8b8ecc000000         mov ecx, dword ptr [esi + 0xcc]
// 00812334  83c302               add ebx, 2
// 00812337  89542440             mov dword ptr [esp + 0x40], edx
// 0081233b  894c2448             mov dword ptr [esp + 0x48], ecx
// 0081233f  89542430             mov dword ptr [esp + 0x30], edx
// 00812343  894c2438             mov dword ptr [esp + 0x38], ecx
// 00812347  83f8ff               cmp eax, -1
// 0081234a  750f                 jne 0x81235b
// 0081234c  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 00812352  85c9                 test ecx, ecx
// 00812354  7405                 je 0x81235b
// 00812356  e805a9ffff           call 0x80cc60
// 0081235b  8bce                 mov ecx, esi
// 0081235d  89442478             mov dword ptr [esp + 0x78], eax
// 00812361  e85a950800           call 0x89b8c0
// 00812366  8b6c2470             mov ebp, dword ptr [esp + 0x70]
// 0081236a  85c0                 test eax, eax
// 0081236c  0f84ab000000         je 0x81241d
// 00812372  8b16                 mov edx, dword ptr [esi]
// 00812374  8b92cc000000         mov edx, dword ptr [edx + 0xcc]
// 0081237a  8d442414             lea eax, [esp + 0x14]
// 0081237e  50                   push eax
// 0081237f  8bce                 mov ecx, esi
// 00812381  ffd2                 call edx
// 00812383  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00812387  8b06                 mov eax, dword ptr [esi]
// 00812389  8b90a8000000         mov edx, dword ptr [eax + 0xa8]
// 0081238f  51                   push ecx
// 00812390  8bce                 mov ecx, esi
// 00812392  ffd2                 call edx
// 00812394  8bd8                 mov ebx, eax
// 00812396  8bcb                 mov ecx, ebx
// 00812398  e8331e0900           call 0x8a41d0
// 0081239d  0faf442414           imul eax, dword ptr [esp + 0x14]
// 008123a2  8bcb                 mov ecx, ebx
// 008123a4  89442470             mov dword ptr [esp + 0x70], eax
// 008123a8  e8e36f0500           call 0x869390
// 008123ad  8bc8                 mov ecx, eax
// 008123af  8b442470             mov eax, dword ptr [esp + 0x70]
// 008123b3  99                   cdq 
// 008123b4  f7f9                 idiv ecx
// 008123b6  8b542440             mov edx, dword ptr [esp + 0x40]
// 008123ba  6a01                 push 1
// 008123bc  6a00                 push 0
// 008123be  6a00                 push 0
// 008123c0  89442424             mov dword ptr [esp + 0x24], eax
// 008123c4  8b442454             mov eax, dword ptr [esp + 0x54]
// 008123c8  03c2                 add eax, edx
// 008123ca  99                   cdq 
// 008123cb  2bc2                 sub eax, edx
// 008123cd  8bc8                 mov ecx, eax
// 008123cf  8b442424             mov eax, dword ptr [esp + 0x24]
// 008123d3  99                   cdq 
// 008123d4  2bc2                 sub eax, edx
// 008123d6  8b542448             mov edx, dword ptr [esp + 0x48]
// 008123da  83c203               add edx, 3
// 008123dd  89542430             mov dword ptr [esp + 0x30], edx
// 008123e1  8b942484000000       mov edx, dword ptr [esp + 0x84]
// 008123e8  52                   push edx
// 008123e9  8b542428             mov edx, dword ptr [esp + 0x28]
// 008123ed  6a00                 push 0
// 008123ef  6a00                 push 0
// 008123f1  53                   push ebx
// 008123f2  52                   push edx
// 008123f3  8b542434             mov edx, dword ptr [esp + 0x34]
// 008123f7  d1f9                 sar ecx, 1
// 008123f9  d1f8                 sar eax, 1
// 008123fb  2bc8                 sub ecx, eax
// 008123fd  8b07                 mov eax, dword ptr [edi]
// 008123ff  52                   push edx
// 00812400  8b90c0000000         mov edx, dword ptr [eax + 0xc0]
// 00812406  51                   push ecx
// 00812407  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0081240b  51                   push ecx
// 0081240c  55                   push ebp
// 0081240d  8bcf                 mov ecx, edi
// 0081240f  ffd2                 call edx
// 00812411  8b442414             mov eax, dword ptr [esp + 0x14]
// 00812415  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00812419  8d5c0106             lea ebx, [ecx + eax + 6]
// 0081241d  8b16                 mov edx, dword ptr [esi]
// 0081241f  8b8284000000         mov eax, dword ptr [edx + 0x84]
// 00812425  8bce                 mov ecx, esi
// 00812427  ffd0                 call eax
// 00812429  85c0                 test eax, eax
// 0081242b  0f84b9000000         je 0x8124ea
// 00812431  85ff                 test edi, edi
// 00812433  7510                 jne 0x812445
// 00812435  6a11                 push 0x11
// 00812437  ff153001a400         call dword ptr [0xa40130]
// 0081243d  50                   push eax
// 0081243e  e82587ffff           call 0x80ab68
// 00812443  eb06                 jmp 0x81244b
// 00812445  8d87f0000000         lea eax, [edi + 0xf0]
// 0081244b  50                   push eax
// 0081244c  55                   push ebp
// 0081244d  8d4c241c             lea ecx, [esp + 0x1c]
// 00812451  e8caac0400           call 0x85d120
// 00812456  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 0081245c  8b8800010000         mov ecx, dword ptr [eax + 0x100]
// 00812462  8b80f8000000         mov eax, dword ptr [eax + 0xf8]
// 00812468  8b5500               mov edx, dword ptr [ebp]
// 0081246b  51                   push ecx
// 0081246c  50                   push eax
// 0081246d  8b842480000000       mov eax, dword ptr [esp + 0x80]
// 00812474  6a00                 push 0
// 00812476  6a00                 push 0
// 00812478  50                   push eax
// 00812479  89942484000000       mov dword ptr [esp + 0x84], edx
// 00812480  8b17                 mov edx, dword ptr [edi]
// 00812482  8b9280000000         mov edx, dword ptr [edx + 0x80]
// 00812488  6a00                 push 0
// 0081248a  6a00                 push 0
// 0081248c  8bcf                 mov ecx, edi
// 0081248e  c784248000000000000000 mov dword ptr [esp + 0x80], 0
// 00812499  ffd2                 call edx
// 0081249b  50                   push eax
// 0081249c  8b442474             mov eax, dword ptr [esp + 0x74]
// 008124a0  8b5038               mov edx, dword ptr [eax + 0x38]
// 008124a3  8bcd                 mov ecx, ebp
// 008124a5  ffd2                 call edx
// 008124a7  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 008124ab  8b542434             mov edx, dword ptr [esp + 0x34]
// 008124af  6a00                 push 0
// 008124b1  6a00                 push 0
// 008124b3  6a00                 push 0
// 008124b5  6a01                 push 1
// 008124b7  83ec10               sub esp, 0x10
// 008124ba  8bc4                 mov eax, esp
// 008124bc  8918                 mov dword ptr [eax], ebx
// 008124be  894804               mov dword ptr [eax + 4], ecx
// 008124c1  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 008124c5  56                   push esi
// 008124c6  895008               mov dword ptr [eax + 8], edx
// 008124c9  55                   push ebp
// 008124ca  8d54244c             lea edx, [esp + 0x4c]
// 008124ce  89480c               mov dword ptr [eax + 0xc], ecx
// 008124d1  52                   push edx
// 008124d2  8bcf                 mov ecx, edi
// 008124d4  e8a7f1ffff           call 0x811680
// 008124d9  8d4c2414             lea ecx, [esp + 0x14]
// 008124dd  c7442464ffffffff     mov dword ptr [esp + 0x64], 0xffffffff
// 008124e5  e8b6ac0400           call 0x85d1a0
// 008124ea  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 008124ee  c70000000000         mov dword ptr [eax], 0
// 008124f4  c7400400000000       mov dword ptr [eax + 4], 0
// 008124fb  e96a020000           jmp 0x81276a
// 00812500  8b16                 mov edx, dword ptr [esi]
// 00812502  8b5258               mov edx, dword ptr [edx + 0x58]
// 00812505  33c9                 xor ecx, ecx
// 00812507  83f802               cmp eax, 2
// 0081250a  0f94c1               sete cl
// 0081250d  8d442474             lea eax, [esp + 0x74]
// 00812511  50                   push eax
// 00812512  894c247c             mov dword ptr [esp + 0x7c], ecx
// 00812516  8bce                 mov ecx, esi
// 00812518  ffd2                 call edx
// 0081251a  8d442474             lea eax, [esp + 0x74]
// 0081251e  50                   push eax
// 0081251f  c744246801000000     mov dword ptr [esp + 0x68], 1
// 00812527  e814d3ffff           call 0x80f840
// 0081252c  8b5c2474             mov ebx, dword ptr [esp + 0x74]
// 00812530  83c404               add esp, 4
// 00812533  8d8fa4000000         lea ecx, [edi + 0xa4]
// 00812539  51                   push ecx
// 0081253a  53                   push ebx
// 0081253b  8d4c2454             lea ecx, [esp + 0x54]
// 0081253f  e8dcab0400           call 0x85d120
// 00812544  8baf14010000         mov ebp, dword ptr [edi + 0x114]
// 0081254a  c644246402           mov byte ptr [esp + 0x64], 2
// 0081254f  85ed                 test ebp, ebp
// 00812551  7f44                 jg 0x812597
// 00812553  8b4308               mov eax, dword ptr [ebx + 8]
// 00812556  8b2d3801a400         mov ebp, dword ptr [0xa40138]
// 0081255c  8d542424             lea edx, [esp + 0x24]
// 00812560  52                   push edx
// 00812561  6a01                 push 1
// 00812563  686056a600           push 0xa65660
// 00812568  50                   push eax
// 00812569  ffd5                 call ebp
// 0081256b  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0081256f  83c107               add ecx, 7
// 00812572  83f914               cmp ecx, 0x14
// 00812575  7d07                 jge 0x81257e
// 00812577  bd14000000           mov ebp, 0x14
// 0081257c  eb19                 jmp 0x812597
// 0081257e  8b4308               mov eax, dword ptr [ebx + 8]
// 00812581  8d542424             lea edx, [esp + 0x24]
// 00812585  52                   push edx
// 00812586  6a01                 push 1
// 00812588  686056a600           push 0xa65660
// 0081258d  50                   push eax
// 0081258e  ffd5                 call ebp
// 00812590  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 00812594  83c507               add ebp, 7
// 00812597  8b1ddc01a400         mov ebx, dword ptr [0xa401dc]
// 0081259d  6a0e                 push 0xe
// 0081259f  6a09                 push 9
// 008125a1  55                   push ebp
// 008125a2  ffd3                 call ebx
// 008125a4  40                   inc eax
// 008125a5  83f80f               cmp eax, 0xf
// 008125a8  7d07                 jge 0x8125b1
// 008125aa  b80f000000           mov eax, 0xf
// 008125af  eb08                 jmp 0x8125b9
// 008125b1  6a0e                 push 0xe
// 008125b3  6a09                 push 9
// 008125b5  55                   push ebp
// 008125b6  ffd3                 call ebx
// 008125b8  40                   inc eax
// 008125b9  3986a4010000         cmp dword ptr [esi + 0x1a4], eax
// 008125bf  7410                 je 0x8125d1
// 008125c1  8986a4010000         mov dword ptr [esi + 0x1a4], eax
// 008125c7  c7869c01000001000000 mov dword ptr [esi + 0x19c], 1
// 008125d1  8d87f0000000         lea eax, [edi + 0xf0]
// 008125d7  50                   push eax
// 008125d8  8d4c2450             lea ecx, [esp + 0x50]
// 008125dc  e84f960400           call 0x85bc30
// 008125e1  8b16                 mov edx, dword ptr [esi]
// 008125e3  8b8284000000         mov eax, dword ptr [edx + 0x84]
// 008125e9  8bce                 mov ecx, esi
// 008125eb  ffd0                 call eax
// 008125ed  8bd8                 mov ebx, eax
// 008125ef  85db                 test ebx, ebx
// 008125f1  7449                 je 0x81263c
// 008125f3  83bf1401000000       cmp dword ptr [edi + 0x114], 0
// 008125fa  7540                 jne 0x81263c
// 008125fc  8b542470             mov edx, dword ptr [esp + 0x70]
// 00812600  8b4208               mov eax, dword ptr [edx + 8]
// 00812603  8d4c2424             lea ecx, [esp + 0x24]
// 00812607  51                   push ecx
// 00812608  6a01                 push 1
// 0081260a  686056a600           push 0xa65660
// 0081260f  50                   push eax
// 00812610  ff153801a400         call dword ptr [0xa40138]
// 00812616  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0081261a  83c107               add ecx, 7
// 0081261d  3be9                 cmp ebp, ecx
// 0081261f  7f1b                 jg 0x81263c
// 00812621  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 00812625  6a01                 push 1
// 00812627  686056a600           push 0xa65660
// 0081262c  8d54241c             lea edx, [esp + 0x1c]
// 00812630  52                   push edx
// 00812631  e8fadaffff           call 0x810130
// 00812636  8b6804               mov ebp, dword ptr [eax + 4]
// 00812639  83c507               add ebp, 7
// 0081263c  8d442424             lea eax, [esp + 0x24]
// 00812640  50                   push eax
// 00812641  8d4c2478             lea ecx, [esp + 0x78]
// 00812645  ff15a826a400         call dword ptr [0xa426a8]
// 0081264b  50                   push eax
// 0081264c  8d4c247c             lea ecx, [esp + 0x7c]
// 00812650  ff15c82da400         call dword ptr [0xa42dc8]
// 00812656  8b4c2478             mov ecx, dword ptr [esp + 0x78]
// 0081265a  8b5108               mov edx, dword ptr [ecx + 8]
// 0081265d  50                   push eax
// 0081265e  52                   push edx
// 0081265f  ff153801a400         call dword ptr [0xa40138]
// 00812665  8b442424             mov eax, dword ptr [esp + 0x24]
// 00812669  83c005               add eax, 5
// 0081266c  837c247800           cmp dword ptr [esp + 0x78], 0
// 00812671  89442470             mov dword ptr [esp + 0x70], eax
// 00812675  744b                 je 0x8126c2
// 00812677  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 0081267d  8b17                 mov edx, dword ptr [edi]
// 0081267f  50                   push eax
// 00812680  8b8204010000         mov eax, dword ptr [edx + 0x104]
// 00812686  8bcf                 mov ecx, edi
// 00812688  ffd0                 call eax
// 0081268a  8bbf80000000         mov edi, dword ptr [edi + 0x80]
// 00812690  03f8                 add edi, eax
// 00812692  037c2470             add edi, dword ptr [esp + 0x70]
// 00812696  39bea0010000         cmp dword ptr [esi + 0x1a0], edi
// 0081269c  7410                 je 0x8126ae
// 0081269e  89bea0010000         mov dword ptr [esi + 0x1a0], edi
// 008126a4  c7869c01000001000000 mov dword ptr [esi + 0x19c], 1
// 008126ae  8bb660010000         mov esi, dword ptr [esi + 0x160]
// 008126b4  8d0c06               lea ecx, [esi + eax]
// 008126b7  8b74246c             mov esi, dword ptr [esp + 0x6c]
// 008126bb  890e                 mov dword ptr [esi], ecx
// 008126bd  e98b000000           jmp 0x81274d
// 008126c2  8bce                 mov ecx, esi
// 008126c4  e8f7910800           call 0x89b8c0
// 008126c9  8bf8                 mov edi, eax
// 008126cb  85ff                 test edi, edi
// 008126cd  7418                 je 0x8126e7
// 008126cf  8b16                 mov edx, dword ptr [esi]
// 008126d1  8b92cc000000         mov edx, dword ptr [edx + 0xcc]
// 008126d7  8d442424             lea eax, [esp + 0x24]
// 008126db  50                   push eax
// 008126dc  8bce                 mov ecx, esi
// 008126de  ffd2                 call edx
// 008126e0  8b00                 mov eax, dword ptr [eax]
// 008126e2  83c004               add eax, 4
// 008126e5  eb02                 jmp 0x8126e9
// 008126e7  33c0                 xor eax, eax
// 008126e9  f7db                 neg ebx
// 008126eb  1bdb                 sbb ebx, ebx
// 008126ed  235c2470             and ebx, dword ptr [esp + 0x70]
// 008126f1  03d8                 add ebx, eax
// 008126f3  85ff                 test edi, edi
// 008126f5  7432                 je 0x812729
// 008126f7  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 008126fd  8b01                 mov eax, dword ptr [ecx]
// 008126ff  8b805c010000         mov eax, dword ptr [eax + 0x15c]
// 00812705  8d54242c             lea edx, [esp + 0x2c]
// 00812709  52                   push edx
// 0081270a  ffd0                 call eax
// 0081270c  3b6804               cmp ebp, dword ptr [eax + 4]
// 0081270f  7f18                 jg 0x812729
// 00812711  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 00812717  8b11                 mov edx, dword ptr [ecx]
// 00812719  8b925c010000         mov edx, dword ptr [edx + 0x15c]
// 0081271f  8d44243c             lea eax, [esp + 0x3c]
// 00812723  50                   push eax
// 00812724  ffd2                 call edx
// 00812726  8b6804               mov ebp, dword ptr [eax + 4]
// 00812729  399ea0010000         cmp dword ptr [esi + 0x1a0], ebx
// 0081272f  7410                 je 0x812741
// 00812731  899ea0010000         mov dword ptr [esi + 0x1a0], ebx
// 00812737  c7869c01000001000000 mov dword ptr [esi + 0x19c], 1
// 00812741  8b8660010000         mov eax, dword ptr [esi + 0x160]
// 00812747  8b74246c             mov esi, dword ptr [esp + 0x6c]
// 0081274b  8906                 mov dword ptr [esi], eax
// 0081274d  8d4c244c             lea ecx, [esp + 0x4c]
// 00812751  896e04               mov dword ptr [esi + 4], ebp
// 00812754  c644246401           mov byte ptr [esp + 0x64], 1
// 00812759  e842aa0400           call 0x85d1a0
// 0081275e  8d4c2474             lea ecx, [esp + 0x74]
// 00812762  ff15082ea400         call dword ptr [0xa42e08]
// 00812768  8bc6                 mov eax, esi
// 0081276a  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 0081276e  64890d00000000       mov dword ptr fs:[0], ecx
// 00812775  59                   pop ecx
// 00812776  5f                   pop edi
// 00812777  5e                   pop esi
// 00812778  5d                   pop ebp
// 00812779  5b                   pop ebx
// 0081277a  83c454               add esp, 0x54
// 0081277d  c21000               ret 0x10
// copied from an identical function in another client (function ?DrawControlComboBox@CXTPPaintManager@@UAE?AVCSize@@PAVCDC@@PAVCXTPControlComboBox@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPPaintManager.cpp