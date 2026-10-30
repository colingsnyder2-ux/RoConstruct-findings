// roc 2009-12 00800380  unit: CXTPPaintManager  size: 1248 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00800380
//
// 00800380  6aff                 push -1
// 00800382  68b9929500           push 0x9592b9
// 00800387  64a100000000         mov eax, dword ptr fs:[0]
// 0080038d  50                   push eax
// 0080038e  83ec48               sub esp, 0x48
// 00800391  53                   push ebx
// 00800392  55                   push ebp
// 00800393  56                   push esi
// 00800394  57                   push edi
// 00800395  a10052b600           mov eax, dword ptr [0xb65200]
// 0080039a  33c4                 xor eax, esp
// 0080039c  50                   push eax
// 0080039d  8d44245c             lea eax, [esp + 0x5c]
// 008003a1  64a300000000         mov dword ptr fs:[0], eax
// 008003a7  8bf9                 mov edi, ecx
// 008003a9  837c247800           cmp dword ptr [esp + 0x78], 0
// 008003ae  8b742474             mov esi, dword ptr [esp + 0x74]
// 008003b2  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 008003b8  8b80f8000000         mov eax, dword ptr [eax + 0xf8]
// 008003be  0f841c020000         je 0x8005e0
// 008003c4  83f802               cmp eax, 2
// 008003c7  751b                 jne 0x8003e4
// 008003c9  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 008003cd  8b07                 mov eax, dword ptr [edi]
// 008003cf  8b4058               mov eax, dword ptr [eax + 0x58]
// 008003d2  6a01                 push 1
// 008003d4  56                   push esi
// 008003d5  51                   push ecx
// 008003d6  8d542430             lea edx, [esp + 0x30]
// 008003da  52                   push edx
// 008003db  8bcf                 mov ecx, edi
// 008003dd  ffd0                 call eax
// 008003df  e9e6010000           jmp 0x8005ca
// 008003e4  8b86c8000000         mov eax, dword ptr [esi + 0xc8]
// 008003ea  8b8ec0000000         mov ecx, dword ptr [esi + 0xc0]
// 008003f0  8b9ec0000000         mov ebx, dword ptr [esi + 0xc0]
// 008003f6  8b96c4000000         mov edx, dword ptr [esi + 0xc4]
// 008003fc  89442444             mov dword ptr [esp + 0x44], eax
// 00800400  89442434             mov dword ptr [esp + 0x34], eax
// 00800404  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 0080040a  894c243c             mov dword ptr [esp + 0x3c], ecx
// 0080040e  8b8ecc000000         mov ecx, dword ptr [esi + 0xcc]
// 00800414  83c302               add ebx, 2
// 00800417  89542440             mov dword ptr [esp + 0x40], edx
// 0080041b  894c2448             mov dword ptr [esp + 0x48], ecx
// 0080041f  89542430             mov dword ptr [esp + 0x30], edx
// 00800423  894c2438             mov dword ptr [esp + 0x38], ecx
// 00800427  83f8ff               cmp eax, -1
// 0080042a  750f                 jne 0x80043b
// 0080042c  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 00800432  85c9                 test ecx, ecx
// 00800434  7405                 je 0x80043b
// 00800436  e87561ffff           call 0x7f65b0
// 0080043b  8bce                 mov ecx, esi
// 0080043d  89442478             mov dword ptr [esp + 0x78], eax
// 00800441  e87a8effff           call 0x7f92c0
// 00800446  8b6c2470             mov ebp, dword ptr [esp + 0x70]
// 0080044a  85c0                 test eax, eax
// 0080044c  0f84ab000000         je 0x8004fd
// 00800452  8b16                 mov edx, dword ptr [esi]
// 00800454  8b92cc000000         mov edx, dword ptr [edx + 0xcc]
// 0080045a  8d442414             lea eax, [esp + 0x14]
// 0080045e  50                   push eax
// 0080045f  8bce                 mov ecx, esi
// 00800461  ffd2                 call edx
// 00800463  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00800467  8b06                 mov eax, dword ptr [esi]
// 00800469  8b90a8000000         mov edx, dword ptr [eax + 0xa8]
// 0080046f  51                   push ecx
// 00800470  8bce                 mov ecx, esi
// 00800472  ffd2                 call edx
// 00800474  8bd8                 mov ebx, eax
// 00800476  8bcb                 mov ecx, ebx
// 00800478  e8f353cdff           call 0x4d5870
// 0080047d  0faf442414           imul eax, dword ptr [esp + 0x14]
// 00800482  8bcb                 mov ecx, ebx
// 00800484  89442470             mov dword ptr [esp + 0x70], eax
// 00800488  e8f3d70400           call 0x84dc80
// 0080048d  8bc8                 mov ecx, eax
// 0080048f  8b442470             mov eax, dword ptr [esp + 0x70]
// 00800493  99                   cdq 
// 00800494  f7f9                 idiv ecx
// 00800496  8b542440             mov edx, dword ptr [esp + 0x40]
// 0080049a  6a01                 push 1
// 0080049c  6a00                 push 0
// 0080049e  6a00                 push 0
// 008004a0  89442424             mov dword ptr [esp + 0x24], eax
// 008004a4  8b442454             mov eax, dword ptr [esp + 0x54]
// 008004a8  03c2                 add eax, edx
// 008004aa  99                   cdq 
// 008004ab  2bc2                 sub eax, edx
// 008004ad  8bc8                 mov ecx, eax
// 008004af  8b442424             mov eax, dword ptr [esp + 0x24]
// 008004b3  99                   cdq 
// 008004b4  2bc2                 sub eax, edx
// 008004b6  8b542448             mov edx, dword ptr [esp + 0x48]
// 008004ba  83c203               add edx, 3
// 008004bd  89542430             mov dword ptr [esp + 0x30], edx
// 008004c1  8b942484000000       mov edx, dword ptr [esp + 0x84]
// 008004c8  52                   push edx
// 008004c9  8b542428             mov edx, dword ptr [esp + 0x28]
// 008004cd  6a00                 push 0
// 008004cf  6a00                 push 0
// 008004d1  53                   push ebx
// 008004d2  52                   push edx
// 008004d3  8b542434             mov edx, dword ptr [esp + 0x34]
// 008004d7  d1f9                 sar ecx, 1
// 008004d9  d1f8                 sar eax, 1
// 008004db  2bc8                 sub ecx, eax
// 008004dd  8b07                 mov eax, dword ptr [edi]
// 008004df  52                   push edx
// 008004e0  8b90c0000000         mov edx, dword ptr [eax + 0xc0]
// 008004e6  51                   push ecx
// 008004e7  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 008004eb  51                   push ecx
// 008004ec  55                   push ebp
// 008004ed  8bcf                 mov ecx, edi
// 008004ef  ffd2                 call edx
// 008004f1  8b442414             mov eax, dword ptr [esp + 0x14]
// 008004f5  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 008004f9  8d5c0106             lea ebx, [ecx + eax + 6]
// 008004fd  8b16                 mov edx, dword ptr [esi]
// 008004ff  8b8284000000         mov eax, dword ptr [edx + 0x84]
// 00800505  8bce                 mov ecx, esi
// 00800507  ffd0                 call eax
// 00800509  85c0                 test eax, eax
// 0080050b  0f84b9000000         je 0x8005ca
// 00800511  85ff                 test edi, edi
// 00800513  7510                 jne 0x800525
// 00800515  6a11                 push 0x11
// 00800517  ff1590b19800         call dword ptr [0x98b190]
// 0080051d  50                   push eax
// 0080051e  e8413effff           call 0x7f4364
// 00800523  eb06                 jmp 0x80052b
// 00800525  8d87f0000000         lea eax, [edi + 0xf0]
// 0080052b  50                   push eax
// 0080052c  55                   push ebp
// 0080052d  8d4c241c             lea ecx, [esp + 0x1c]
// 00800531  e82ab10400           call 0x84b660
// 00800536  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 0080053c  8b8800010000         mov ecx, dword ptr [eax + 0x100]
// 00800542  8b80f8000000         mov eax, dword ptr [eax + 0xf8]
// 00800548  8b5500               mov edx, dword ptr [ebp]
// 0080054b  51                   push ecx
// 0080054c  50                   push eax
// 0080054d  8b842480000000       mov eax, dword ptr [esp + 0x80]
// 00800554  6a00                 push 0
// 00800556  6a00                 push 0
// 00800558  50                   push eax
// 00800559  89942484000000       mov dword ptr [esp + 0x84], edx
// 00800560  8b17                 mov edx, dword ptr [edi]
// 00800562  8b9280000000         mov edx, dword ptr [edx + 0x80]
// 00800568  6a00                 push 0
// 0080056a  6a00                 push 0
// 0080056c  8bcf                 mov ecx, edi
// 0080056e  c784248000000000000000 mov dword ptr [esp + 0x80], 0
// 00800579  ffd2                 call edx
// 0080057b  50                   push eax
// 0080057c  8b442474             mov eax, dword ptr [esp + 0x74]
// 00800580  8b5038               mov edx, dword ptr [eax + 0x38]
// 00800583  8bcd                 mov ecx, ebp
// 00800585  ffd2                 call edx
// 00800587  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0080058b  8b542434             mov edx, dword ptr [esp + 0x34]
// 0080058f  6a00                 push 0
// 00800591  6a00                 push 0
// 00800593  6a00                 push 0
// 00800595  6a01                 push 1
// 00800597  83ec10               sub esp, 0x10
// 0080059a  8bc4                 mov eax, esp
// 0080059c  8918                 mov dword ptr [eax], ebx
// 0080059e  894804               mov dword ptr [eax + 4], ecx
// 008005a1  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 008005a5  56                   push esi
// 008005a6  895008               mov dword ptr [eax + 8], edx
// 008005a9  55                   push ebp
// 008005aa  8d54244c             lea edx, [esp + 0x4c]
// 008005ae  89480c               mov dword ptr [eax + 0xc], ecx
// 008005b1  52                   push edx
// 008005b2  8bcf                 mov ecx, edi
// 008005b4  e8a7f1ffff           call 0x7ff760
// 008005b9  8d4c2414             lea ecx, [esp + 0x14]
// 008005bd  c7442464ffffffff     mov dword ptr [esp + 0x64], 0xffffffff
// 008005c5  e816b10400           call 0x84b6e0
// 008005ca  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 008005ce  c70000000000         mov dword ptr [eax], 0
// 008005d4  c7400400000000       mov dword ptr [eax + 4], 0
// 008005db  e96a020000           jmp 0x80084a
// 008005e0  8b16                 mov edx, dword ptr [esi]
// 008005e2  8b5258               mov edx, dword ptr [edx + 0x58]
// 008005e5  33c9                 xor ecx, ecx
// 008005e7  83f802               cmp eax, 2
// 008005ea  0f94c1               sete cl
// 008005ed  8d442474             lea eax, [esp + 0x74]
// 008005f1  50                   push eax
// 008005f2  894c247c             mov dword ptr [esp + 0x7c], ecx
// 008005f6  8bce                 mov ecx, esi
// 008005f8  ffd2                 call edx
// 008005fa  8d442474             lea eax, [esp + 0x74]
// 008005fe  50                   push eax
// 008005ff  c744246801000000     mov dword ptr [esp + 0x68], 1
// 00800607  e8c4d2ffff           call 0x7fd8d0
// 0080060c  8b5c2474             mov ebx, dword ptr [esp + 0x74]
// 00800610  83c404               add esp, 4
// 00800613  8d8fa4000000         lea ecx, [edi + 0xa4]
// 00800619  51                   push ecx
// 0080061a  53                   push ebx
// 0080061b  8d4c2454             lea ecx, [esp + 0x54]
// 0080061f  e83cb00400           call 0x84b660
// 00800624  8baf14010000         mov ebp, dword ptr [edi + 0x114]
// 0080062a  c644246402           mov byte ptr [esp + 0x64], 2
// 0080062f  85ed                 test ebp, ebp
// 00800631  7f44                 jg 0x800677
// 00800633  8b4308               mov eax, dword ptr [ebx + 8]
// 00800636  8b2d6cb19800         mov ebp, dword ptr [0x98b16c]
// 0080063c  8d542424             lea edx, [esp + 0x24]
// 00800640  52                   push edx
// 00800641  6a01                 push 1
// 00800643  6868619a00           push 0x9a6168
// 00800648  50                   push eax
// 00800649  ffd5                 call ebp
// 0080064b  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0080064f  83c107               add ecx, 7
// 00800652  83f914               cmp ecx, 0x14
// 00800655  7d07                 jge 0x80065e
// 00800657  bd14000000           mov ebp, 0x14
// 0080065c  eb19                 jmp 0x800677
// 0080065e  8b4308               mov eax, dword ptr [ebx + 8]
// 00800661  8d542424             lea edx, [esp + 0x24]
// 00800665  52                   push edx
// 00800666  6a01                 push 1
// 00800668  6868619a00           push 0x9a6168
// 0080066d  50                   push eax
// 0080066e  ffd5                 call ebp
// 00800670  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 00800674  83c507               add ebp, 7
// 00800677  8b1da0b29800         mov ebx, dword ptr [0x98b2a0]
// 0080067d  6a0e                 push 0xe
// 0080067f  6a09                 push 9
// 00800681  55                   push ebp
// 00800682  ffd3                 call ebx
// 00800684  40                   inc eax
// 00800685  83f80f               cmp eax, 0xf
// 00800688  7d07                 jge 0x800691
// 0080068a  b80f000000           mov eax, 0xf
// 0080068f  eb08                 jmp 0x800699
// 00800691  6a0e                 push 0xe
// 00800693  6a09                 push 9
// 00800695  55                   push ebp
// 00800696  ffd3                 call ebx
// 00800698  40                   inc eax
// 00800699  3986a4010000         cmp dword ptr [esi + 0x1a4], eax
// 0080069f  7410                 je 0x8006b1
// 008006a1  8986a4010000         mov dword ptr [esi + 0x1a4], eax
// 008006a7  c7869c01000001000000 mov dword ptr [esi + 0x19c], 1
// 008006b1  8d87f0000000         lea eax, [edi + 0xf0]
// 008006b7  50                   push eax
// 008006b8  8d4c2450             lea ecx, [esp + 0x50]
// 008006bc  e8bf9a0400           call 0x84a180
// 008006c1  8b16                 mov edx, dword ptr [esi]
// 008006c3  8b8284000000         mov eax, dword ptr [edx + 0x84]
// 008006c9  8bce                 mov ecx, esi
// 008006cb  ffd0                 call eax
// 008006cd  8bd8                 mov ebx, eax
// 008006cf  85db                 test ebx, ebx
// 008006d1  7449                 je 0x80071c
// 008006d3  83bf1401000000       cmp dword ptr [edi + 0x114], 0
// 008006da  7540                 jne 0x80071c
// 008006dc  8b542470             mov edx, dword ptr [esp + 0x70]
// 008006e0  8b4208               mov eax, dword ptr [edx + 8]
// 008006e3  8d4c2424             lea ecx, [esp + 0x24]
// 008006e7  51                   push ecx
// 008006e8  6a01                 push 1
// 008006ea  6868619a00           push 0x9a6168
// 008006ef  50                   push eax
// 008006f0  ff156cb19800         call dword ptr [0x98b16c]
// 008006f6  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008006fa  83c107               add ecx, 7
// 008006fd  3be9                 cmp ebp, ecx
// 008006ff  7f1b                 jg 0x80071c
// 00800701  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 00800705  6a01                 push 1
// 00800707  6868619a00           push 0x9a6168
// 0080070c  8d54241c             lea edx, [esp + 0x1c]
// 00800710  52                   push edx
// 00800711  e8fadaffff           call 0x7fe210
// 00800716  8b6804               mov ebp, dword ptr [eax + 4]
// 00800719  83c507               add ebp, 7
// 0080071c  8d442424             lea eax, [esp + 0x24]
// 00800720  50                   push eax
// 00800721  8d4c2478             lea ecx, [esp + 0x78]
// 00800725  ff15b4dd9800         call dword ptr [0x98ddb4]
// 0080072b  50                   push eax
// 0080072c  8d4c247c             lea ecx, [esp + 0x7c]
// 00800730  ff1580de9800         call dword ptr [0x98de80]
// 00800736  8b4c2478             mov ecx, dword ptr [esp + 0x78]
// 0080073a  8b5108               mov edx, dword ptr [ecx + 8]
// 0080073d  50                   push eax
// 0080073e  52                   push edx
// 0080073f  ff156cb19800         call dword ptr [0x98b16c]
// 00800745  8b442424             mov eax, dword ptr [esp + 0x24]
// 00800749  83c005               add eax, 5
// 0080074c  837c247800           cmp dword ptr [esp + 0x78], 0
// 00800751  89442470             mov dword ptr [esp + 0x70], eax
// 00800755  744b                 je 0x8007a2
// 00800757  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 0080075d  8b17                 mov edx, dword ptr [edi]
// 0080075f  50                   push eax
// 00800760  8b8204010000         mov eax, dword ptr [edx + 0x104]
// 00800766  8bcf                 mov ecx, edi
// 00800768  ffd0                 call eax
// 0080076a  8bbf80000000         mov edi, dword ptr [edi + 0x80]
// 00800770  03f8                 add edi, eax
// 00800772  037c2470             add edi, dword ptr [esp + 0x70]
// 00800776  39bea0010000         cmp dword ptr [esi + 0x1a0], edi
// 0080077c  7410                 je 0x80078e
// 0080077e  89bea0010000         mov dword ptr [esi + 0x1a0], edi
// 00800784  c7869c01000001000000 mov dword ptr [esi + 0x19c], 1
// 0080078e  8bb660010000         mov esi, dword ptr [esi + 0x160]
// 00800794  8d0c06               lea ecx, [esi + eax]
// 00800797  8b74246c             mov esi, dword ptr [esp + 0x6c]
// 0080079b  890e                 mov dword ptr [esi], ecx
// 0080079d  e98b000000           jmp 0x80082d
// 008007a2  8bce                 mov ecx, esi
// 008007a4  e8178bffff           call 0x7f92c0
// 008007a9  8bf8                 mov edi, eax
// 008007ab  85ff                 test edi, edi
// 008007ad  7418                 je 0x8007c7
// 008007af  8b16                 mov edx, dword ptr [esi]
// 008007b1  8b92cc000000         mov edx, dword ptr [edx + 0xcc]
// 008007b7  8d442424             lea eax, [esp + 0x24]
// 008007bb  50                   push eax
// 008007bc  8bce                 mov ecx, esi
// 008007be  ffd2                 call edx
// 008007c0  8b00                 mov eax, dword ptr [eax]
// 008007c2  83c004               add eax, 4
// 008007c5  eb02                 jmp 0x8007c9
// 008007c7  33c0                 xor eax, eax
// 008007c9  f7db                 neg ebx
// 008007cb  1bdb                 sbb ebx, ebx
// 008007cd  235c2470             and ebx, dword ptr [esp + 0x70]
// 008007d1  03d8                 add ebx, eax
// 008007d3  85ff                 test edi, edi
// 008007d5  7432                 je 0x800809
// 008007d7  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 008007dd  8b01                 mov eax, dword ptr [ecx]
// 008007df  8b805c010000         mov eax, dword ptr [eax + 0x15c]
// 008007e5  8d54242c             lea edx, [esp + 0x2c]
// 008007e9  52                   push edx
// 008007ea  ffd0                 call eax
// 008007ec  3b6804               cmp ebp, dword ptr [eax + 4]
// 008007ef  7f18                 jg 0x800809
// 008007f1  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 008007f7  8b11                 mov edx, dword ptr [ecx]
// 008007f9  8b925c010000         mov edx, dword ptr [edx + 0x15c]
// 008007ff  8d44243c             lea eax, [esp + 0x3c]
// 00800803  50                   push eax
// 00800804  ffd2                 call edx
// 00800806  8b6804               mov ebp, dword ptr [eax + 4]
// 00800809  399ea0010000         cmp dword ptr [esi + 0x1a0], ebx
// 0080080f  7410                 je 0x800821
// 00800811  899ea0010000         mov dword ptr [esi + 0x1a0], ebx
// 00800817  c7869c01000001000000 mov dword ptr [esi + 0x19c], 1
// 00800821  8b8660010000         mov eax, dword ptr [esi + 0x160]
// 00800827  8b74246c             mov esi, dword ptr [esp + 0x6c]
// 0080082b  8906                 mov dword ptr [esi], eax
// 0080082d  8d4c244c             lea ecx, [esp + 0x4c]
// 00800831  896e04               mov dword ptr [esi + 4], ebp
// 00800834  c644246401           mov byte ptr [esp + 0x64], 1
// 00800839  e8a2ae0400           call 0x84b6e0
// 0080083e  8d4c2474             lea ecx, [esp + 0x74]
// 00800842  ff15c0de9800         call dword ptr [0x98dec0]
// 00800848  8bc6                 mov eax, esi
// 0080084a  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 0080084e  64890d00000000       mov dword ptr fs:[0], ecx
// 00800855  59                   pop ecx
// 00800856  5f                   pop edi
// 00800857  5e                   pop esi
// 00800858  5d                   pop ebp
// 00800859  5b                   pop ebx
// 0080085a  83c454               add esp, 0x54
// 0080085d  c21000               ret 0x10
// copied from an identical function in another client (function ?DrawControlComboBox@CXTPPaintManager@@UAE?AVCSize@@PAVCDC@@PAVCXTPControlComboBox@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPPaintManager.cpp