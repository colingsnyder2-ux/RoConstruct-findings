// roc 2009-06 00725410  unit: CXTPPaintManager  size: 1248 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00725410
//
// 00725410  6aff                 push -1
// 00725412  68c94f8700           push 0x874fc9
// 00725417  64a100000000         mov eax, dword ptr fs:[0]
// 0072541d  50                   push eax
// 0072541e  83ec48               sub esp, 0x48
// 00725421  53                   push ebx
// 00725422  55                   push ebp
// 00725423  56                   push esi
// 00725424  57                   push edi
// 00725425  a1304fa200           mov eax, dword ptr [0xa24f30]
// 0072542a  33c4                 xor eax, esp
// 0072542c  50                   push eax
// 0072542d  8d44245c             lea eax, [esp + 0x5c]
// 00725431  64a300000000         mov dword ptr fs:[0], eax
// 00725437  8bf9                 mov edi, ecx
// 00725439  837c247800           cmp dword ptr [esp + 0x78], 0
// 0072543e  8b742474             mov esi, dword ptr [esp + 0x74]
// 00725442  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 00725448  8b80f8000000         mov eax, dword ptr [eax + 0xf8]
// 0072544e  0f841c020000         je 0x725670
// 00725454  83f802               cmp eax, 2
// 00725457  751b                 jne 0x725474
// 00725459  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 0072545d  8b07                 mov eax, dword ptr [edi]
// 0072545f  8b4058               mov eax, dword ptr [eax + 0x58]
// 00725462  6a01                 push 1
// 00725464  56                   push esi
// 00725465  51                   push ecx
// 00725466  8d542430             lea edx, [esp + 0x30]
// 0072546a  52                   push edx
// 0072546b  8bcf                 mov ecx, edi
// 0072546d  ffd0                 call eax
// 0072546f  e9e6010000           jmp 0x72565a
// 00725474  8b86c8000000         mov eax, dword ptr [esi + 0xc8]
// 0072547a  8b8ec0000000         mov ecx, dword ptr [esi + 0xc0]
// 00725480  8b9ec0000000         mov ebx, dword ptr [esi + 0xc0]
// 00725486  8b96c4000000         mov edx, dword ptr [esi + 0xc4]
// 0072548c  89442444             mov dword ptr [esp + 0x44], eax
// 00725490  89442434             mov dword ptr [esp + 0x34], eax
// 00725494  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 0072549a  894c243c             mov dword ptr [esp + 0x3c], ecx
// 0072549e  8b8ecc000000         mov ecx, dword ptr [esi + 0xcc]
// 007254a4  83c302               add ebx, 2
// 007254a7  89542440             mov dword ptr [esp + 0x40], edx
// 007254ab  894c2448             mov dword ptr [esp + 0x48], ecx
// 007254af  89542430             mov dword ptr [esp + 0x30], edx
// 007254b3  894c2438             mov dword ptr [esp + 0x38], ecx
// 007254b7  83f8ff               cmp eax, -1
// 007254ba  750f                 jne 0x7254cb
// 007254bc  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 007254c2  85c9                 test ecx, ecx
// 007254c4  7405                 je 0x7254cb
// 007254c6  e8d5a9ffff           call 0x71fea0
// 007254cb  8bce                 mov ecx, esi
// 007254cd  89442478             mov dword ptr [esp + 0x78], eax
// 007254d1  e8ea5bffff           call 0x71b0c0
// 007254d6  8b6c2470             mov ebp, dword ptr [esp + 0x70]
// 007254da  85c0                 test eax, eax
// 007254dc  0f84ab000000         je 0x72558d
// 007254e2  8b16                 mov edx, dword ptr [esi]
// 007254e4  8b92cc000000         mov edx, dword ptr [edx + 0xcc]
// 007254ea  8d442414             lea eax, [esp + 0x14]
// 007254ee  50                   push eax
// 007254ef  8bce                 mov ecx, esi
// 007254f1  ffd2                 call edx
// 007254f3  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007254f7  8b06                 mov eax, dword ptr [esi]
// 007254f9  8b90a8000000         mov edx, dword ptr [eax + 0xa8]
// 007254ff  51                   push ecx
// 00725500  8bce                 mov ecx, esi
// 00725502  ffd2                 call edx
// 00725504  8bd8                 mov ebx, eax
// 00725506  8bcb                 mov ecx, ebx
// 00725508  e8a3790200           call 0x74ceb0
// 0072550d  0faf442414           imul eax, dword ptr [esp + 0x14]
// 00725512  8bcb                 mov ecx, ebx
// 00725514  89442470             mov dword ptr [esp + 0x70], eax
// 00725518  e8032d0a00           call 0x7c8220
// 0072551d  8bc8                 mov ecx, eax
// 0072551f  8b442470             mov eax, dword ptr [esp + 0x70]
// 00725523  99                   cdq 
// 00725524  f7f9                 idiv ecx
// 00725526  8b542440             mov edx, dword ptr [esp + 0x40]
// 0072552a  6a01                 push 1
// 0072552c  6a00                 push 0
// 0072552e  6a00                 push 0
// 00725530  89442424             mov dword ptr [esp + 0x24], eax
// 00725534  8b442454             mov eax, dword ptr [esp + 0x54]
// 00725538  03c2                 add eax, edx
// 0072553a  99                   cdq 
// 0072553b  2bc2                 sub eax, edx
// 0072553d  8bc8                 mov ecx, eax
// 0072553f  8b442424             mov eax, dword ptr [esp + 0x24]
// 00725543  99                   cdq 
// 00725544  2bc2                 sub eax, edx
// 00725546  8b542448             mov edx, dword ptr [esp + 0x48]
// 0072554a  83c203               add edx, 3
// 0072554d  89542430             mov dword ptr [esp + 0x30], edx
// 00725551  8b942484000000       mov edx, dword ptr [esp + 0x84]
// 00725558  52                   push edx
// 00725559  8b542428             mov edx, dword ptr [esp + 0x28]
// 0072555d  6a00                 push 0
// 0072555f  6a00                 push 0
// 00725561  53                   push ebx
// 00725562  52                   push edx
// 00725563  8b542434             mov edx, dword ptr [esp + 0x34]
// 00725567  d1f9                 sar ecx, 1
// 00725569  d1f8                 sar eax, 1
// 0072556b  2bc8                 sub ecx, eax
// 0072556d  8b07                 mov eax, dword ptr [edi]
// 0072556f  52                   push edx
// 00725570  8b90c0000000         mov edx, dword ptr [eax + 0xc0]
// 00725576  51                   push ecx
// 00725577  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0072557b  51                   push ecx
// 0072557c  55                   push ebp
// 0072557d  8bcf                 mov ecx, edi
// 0072557f  ffd2                 call edx
// 00725581  8b442414             mov eax, dword ptr [esp + 0x14]
// 00725585  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00725589  8d5c0106             lea ebx, [ecx + eax + 6]
// 0072558d  8b16                 mov edx, dword ptr [esi]
// 0072558f  8b8284000000         mov eax, dword ptr [edx + 0x84]
// 00725595  8bce                 mov ecx, esi
// 00725597  ffd0                 call eax
// 00725599  85c0                 test eax, eax
// 0072559b  0f84b9000000         je 0x72565a
// 007255a1  85ff                 test edi, edi
// 007255a3  7510                 jne 0x7255b5
// 007255a5  6a11                 push 0x11
// 007255a7  ff1534e18900         call dword ptr [0x89e134]
// 007255ad  50                   push eax
// 007255ae  e8833fffff           call 0x719536
// 007255b3  eb06                 jmp 0x7255bb
// 007255b5  8d87f0000000         lea eax, [edi + 0xf0]
// 007255bb  50                   push eax
// 007255bc  55                   push ebp
// 007255bd  8d4c241c             lea ecx, [esp + 0x1c]
// 007255c1  e89ab20400           call 0x770860
// 007255c6  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 007255cc  8b8800010000         mov ecx, dword ptr [eax + 0x100]
// 007255d2  8b80f8000000         mov eax, dword ptr [eax + 0xf8]
// 007255d8  8b5500               mov edx, dword ptr [ebp]
// 007255db  51                   push ecx
// 007255dc  50                   push eax
// 007255dd  8b842480000000       mov eax, dword ptr [esp + 0x80]
// 007255e4  6a00                 push 0
// 007255e6  6a00                 push 0
// 007255e8  50                   push eax
// 007255e9  89942484000000       mov dword ptr [esp + 0x84], edx
// 007255f0  8b17                 mov edx, dword ptr [edi]
// 007255f2  8b9280000000         mov edx, dword ptr [edx + 0x80]
// 007255f8  6a00                 push 0
// 007255fa  6a00                 push 0
// 007255fc  8bcf                 mov ecx, edi
// 007255fe  c784248000000000000000 mov dword ptr [esp + 0x80], 0
// 00725609  ffd2                 call edx
// 0072560b  50                   push eax
// 0072560c  8b442474             mov eax, dword ptr [esp + 0x74]
// 00725610  8b5038               mov edx, dword ptr [eax + 0x38]
// 00725613  8bcd                 mov ecx, ebp
// 00725615  ffd2                 call edx
// 00725617  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0072561b  8b542434             mov edx, dword ptr [esp + 0x34]
// 0072561f  6a00                 push 0
// 00725621  6a00                 push 0
// 00725623  6a00                 push 0
// 00725625  6a01                 push 1
// 00725627  83ec10               sub esp, 0x10
// 0072562a  8bc4                 mov eax, esp
// 0072562c  8918                 mov dword ptr [eax], ebx
// 0072562e  894804               mov dword ptr [eax + 4], ecx
// 00725631  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 00725635  56                   push esi
// 00725636  895008               mov dword ptr [eax + 8], edx
// 00725639  55                   push ebp
// 0072563a  8d54244c             lea edx, [esp + 0x4c]
// 0072563e  89480c               mov dword ptr [eax + 0xc], ecx
// 00725641  52                   push edx
// 00725642  8bcf                 mov ecx, edi
// 00725644  e8a7f1ffff           call 0x7247f0
// 00725649  8d4c2414             lea ecx, [esp + 0x14]
// 0072564d  c7442464ffffffff     mov dword ptr [esp + 0x64], 0xffffffff
// 00725655  e886b20400           call 0x7708e0
// 0072565a  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 0072565e  c70000000000         mov dword ptr [eax], 0
// 00725664  c7400400000000       mov dword ptr [eax + 4], 0
// 0072566b  e96a020000           jmp 0x7258da
// 00725670  8b16                 mov edx, dword ptr [esi]
// 00725672  8b5258               mov edx, dword ptr [edx + 0x58]
// 00725675  33c9                 xor ecx, ecx
// 00725677  83f802               cmp eax, 2
// 0072567a  0f94c1               sete cl
// 0072567d  8d442474             lea eax, [esp + 0x74]
// 00725681  50                   push eax
// 00725682  894c247c             mov dword ptr [esp + 0x7c], ecx
// 00725686  8bce                 mov ecx, esi
// 00725688  ffd2                 call edx
// 0072568a  8d442474             lea eax, [esp + 0x74]
// 0072568e  50                   push eax
// 0072568f  c744246801000000     mov dword ptr [esp + 0x68], 1
// 00725697  e874d3ffff           call 0x722a10
// 0072569c  8b5c2474             mov ebx, dword ptr [esp + 0x74]
// 007256a0  83c404               add esp, 4
// 007256a3  8d8fa4000000         lea ecx, [edi + 0xa4]
// 007256a9  51                   push ecx
// 007256aa  53                   push ebx
// 007256ab  8d4c2454             lea ecx, [esp + 0x54]
// 007256af  e8acb10400           call 0x770860
// 007256b4  8baf14010000         mov ebp, dword ptr [edi + 0x114]
// 007256ba  c644246402           mov byte ptr [esp + 0x64], 2
// 007256bf  85ed                 test ebp, ebp
// 007256c1  7f44                 jg 0x725707
// 007256c3  8b4308               mov eax, dword ptr [ebx + 8]
// 007256c6  8b2d50e18900         mov ebp, dword ptr [0x89e150]
// 007256cc  8d542424             lea edx, [esp + 0x24]
// 007256d0  52                   push edx
// 007256d1  6a01                 push 1
// 007256d3  68f8338b00           push 0x8b33f8
// 007256d8  50                   push eax
// 007256d9  ffd5                 call ebp
// 007256db  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 007256df  83c107               add ecx, 7
// 007256e2  83f914               cmp ecx, 0x14
// 007256e5  7d07                 jge 0x7256ee
// 007256e7  bd14000000           mov ebp, 0x14
// 007256ec  eb19                 jmp 0x725707
// 007256ee  8b4308               mov eax, dword ptr [ebx + 8]
// 007256f1  8d542424             lea edx, [esp + 0x24]
// 007256f5  52                   push edx
// 007256f6  6a01                 push 1
// 007256f8  68f8338b00           push 0x8b33f8
// 007256fd  50                   push eax
// 007256fe  ffd5                 call ebp
// 00725700  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 00725704  83c507               add ebp, 7
// 00725707  8b1d74e28900         mov ebx, dword ptr [0x89e274]
// 0072570d  6a0e                 push 0xe
// 0072570f  6a09                 push 9
// 00725711  55                   push ebp
// 00725712  ffd3                 call ebx
// 00725714  40                   inc eax
// 00725715  83f80f               cmp eax, 0xf
// 00725718  7d07                 jge 0x725721
// 0072571a  b80f000000           mov eax, 0xf
// 0072571f  eb08                 jmp 0x725729
// 00725721  6a0e                 push 0xe
// 00725723  6a09                 push 9
// 00725725  55                   push ebp
// 00725726  ffd3                 call ebx
// 00725728  40                   inc eax
// 00725729  3986a4010000         cmp dword ptr [esi + 0x1a4], eax
// 0072572f  7410                 je 0x725741
// 00725731  8986a4010000         mov dword ptr [esi + 0x1a4], eax
// 00725737  c7869c01000001000000 mov dword ptr [esi + 0x19c], 1
// 00725741  8d87f0000000         lea eax, [edi + 0xf0]
// 00725747  50                   push eax
// 00725748  8d4c2450             lea ecx, [esp + 0x50]
// 0072574c  e89f9c0400           call 0x76f3f0
// 00725751  8b16                 mov edx, dword ptr [esi]
// 00725753  8b8284000000         mov eax, dword ptr [edx + 0x84]
// 00725759  8bce                 mov ecx, esi
// 0072575b  ffd0                 call eax
// 0072575d  8bd8                 mov ebx, eax
// 0072575f  85db                 test ebx, ebx
// 00725761  7449                 je 0x7257ac
// 00725763  83bf1401000000       cmp dword ptr [edi + 0x114], 0
// 0072576a  7540                 jne 0x7257ac
// 0072576c  8b542470             mov edx, dword ptr [esp + 0x70]
// 00725770  8b4208               mov eax, dword ptr [edx + 8]
// 00725773  8d4c2424             lea ecx, [esp + 0x24]
// 00725777  51                   push ecx
// 00725778  6a01                 push 1
// 0072577a  68f8338b00           push 0x8b33f8
// 0072577f  50                   push eax
// 00725780  ff1550e18900         call dword ptr [0x89e150]
// 00725786  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0072578a  83c107               add ecx, 7
// 0072578d  3be9                 cmp ebp, ecx
// 0072578f  7f1b                 jg 0x7257ac
// 00725791  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 00725795  6a01                 push 1
// 00725797  68f8338b00           push 0x8b33f8
// 0072579c  8d54241c             lea edx, [esp + 0x1c]
// 007257a0  52                   push edx
// 007257a1  e8badbffff           call 0x723360
// 007257a6  8b6804               mov ebp, dword ptr [eax + 4]
// 007257a9  83c507               add ebp, 7
// 007257ac  8d442424             lea eax, [esp + 0x24]
// 007257b0  50                   push eax
// 007257b1  8d4c2478             lea ecx, [esp + 0x78]
// 007257b5  ff1554fb8900         call dword ptr [0x89fb54]
// 007257bb  50                   push eax
// 007257bc  8d4c247c             lea ecx, [esp + 0x7c]
// 007257c0  ff15d0fc8900         call dword ptr [0x89fcd0]
// 007257c6  8b4c2478             mov ecx, dword ptr [esp + 0x78]
// 007257ca  8b5108               mov edx, dword ptr [ecx + 8]
// 007257cd  50                   push eax
// 007257ce  52                   push edx
// 007257cf  ff1550e18900         call dword ptr [0x89e150]
// 007257d5  8b442424             mov eax, dword ptr [esp + 0x24]
// 007257d9  83c005               add eax, 5
// 007257dc  837c247800           cmp dword ptr [esp + 0x78], 0
// 007257e1  89442470             mov dword ptr [esp + 0x70], eax
// 007257e5  744b                 je 0x725832
// 007257e7  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 007257ed  8b17                 mov edx, dword ptr [edi]
// 007257ef  50                   push eax
// 007257f0  8b8204010000         mov eax, dword ptr [edx + 0x104]
// 007257f6  8bcf                 mov ecx, edi
// 007257f8  ffd0                 call eax
// 007257fa  8bbf80000000         mov edi, dword ptr [edi + 0x80]
// 00725800  03f8                 add edi, eax
// 00725802  037c2470             add edi, dword ptr [esp + 0x70]
// 00725806  39bea0010000         cmp dword ptr [esi + 0x1a0], edi
// 0072580c  7410                 je 0x72581e
// 0072580e  89bea0010000         mov dword ptr [esi + 0x1a0], edi
// 00725814  c7869c01000001000000 mov dword ptr [esi + 0x19c], 1
// 0072581e  8bb660010000         mov esi, dword ptr [esi + 0x160]
// 00725824  8d0c06               lea ecx, [esi + eax]
// 00725827  8b74246c             mov esi, dword ptr [esp + 0x6c]
// 0072582b  890e                 mov dword ptr [esi], ecx
// 0072582d  e98b000000           jmp 0x7258bd
// 00725832  8bce                 mov ecx, esi
// 00725834  e88758ffff           call 0x71b0c0
// 00725839  8bf8                 mov edi, eax
// 0072583b  85ff                 test edi, edi
// 0072583d  7418                 je 0x725857
// 0072583f  8b16                 mov edx, dword ptr [esi]
// 00725841  8b92cc000000         mov edx, dword ptr [edx + 0xcc]
// 00725847  8d442424             lea eax, [esp + 0x24]
// 0072584b  50                   push eax
// 0072584c  8bce                 mov ecx, esi
// 0072584e  ffd2                 call edx
// 00725850  8b00                 mov eax, dword ptr [eax]
// 00725852  83c004               add eax, 4
// 00725855  eb02                 jmp 0x725859
// 00725857  33c0                 xor eax, eax
// 00725859  f7db                 neg ebx
// 0072585b  1bdb                 sbb ebx, ebx
// 0072585d  235c2470             and ebx, dword ptr [esp + 0x70]
// 00725861  03d8                 add ebx, eax
// 00725863  85ff                 test edi, edi
// 00725865  7432                 je 0x725899
// 00725867  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 0072586d  8b01                 mov eax, dword ptr [ecx]
// 0072586f  8b805c010000         mov eax, dword ptr [eax + 0x15c]
// 00725875  8d54242c             lea edx, [esp + 0x2c]
// 00725879  52                   push edx
// 0072587a  ffd0                 call eax
// 0072587c  3b6804               cmp ebp, dword ptr [eax + 4]
// 0072587f  7f18                 jg 0x725899
// 00725881  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 00725887  8b11                 mov edx, dword ptr [ecx]
// 00725889  8b925c010000         mov edx, dword ptr [edx + 0x15c]
// 0072588f  8d44243c             lea eax, [esp + 0x3c]
// 00725893  50                   push eax
// 00725894  ffd2                 call edx
// 00725896  8b6804               mov ebp, dword ptr [eax + 4]
// 00725899  399ea0010000         cmp dword ptr [esi + 0x1a0], ebx
// 0072589f  7410                 je 0x7258b1
// 007258a1  899ea0010000         mov dword ptr [esi + 0x1a0], ebx
// 007258a7  c7869c01000001000000 mov dword ptr [esi + 0x19c], 1
// 007258b1  8b8660010000         mov eax, dword ptr [esi + 0x160]
// 007258b7  8b74246c             mov esi, dword ptr [esp + 0x6c]
// 007258bb  8906                 mov dword ptr [esi], eax
// 007258bd  8d4c244c             lea ecx, [esp + 0x4c]
// 007258c1  896e04               mov dword ptr [esi + 4], ebp
// 007258c4  c644246401           mov byte ptr [esp + 0x64], 1
// 007258c9  e812b00400           call 0x7708e0
// 007258ce  8d4c2474             lea ecx, [esp + 0x74]
// 007258d2  ff1510fd8900         call dword ptr [0x89fd10]
// 007258d8  8bc6                 mov eax, esi
// 007258da  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 007258de  64890d00000000       mov dword ptr fs:[0], ecx
// 007258e5  59                   pop ecx
// 007258e6  5f                   pop edi
// 007258e7  5e                   pop esi
// 007258e8  5d                   pop ebp
// 007258e9  5b                   pop ebx
// 007258ea  83c454               add esp, 0x54
// 007258ed  c21000               ret 0x10
// copied from an identical function in another client (function ?DrawControlComboBox@CXTPPaintManager@@UAE?AVCSize@@PAVCDC@@PAVCXTPControlComboBox@@H@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPPaintManager.cpp