// roc 2011-06 00829240  unit: CXTPToolBar  size: 1172 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00829240
//
// 00829240  6aff                 push -1
// 00829242  688039a000           push 0xa03980
// 00829247  64a100000000         mov eax, dword ptr fs:[0]
// 0082924d  50                   push eax
// 0082924e  83ec20               sub esp, 0x20
// 00829251  53                   push ebx
// 00829252  55                   push ebp
// 00829253  56                   push esi
// 00829254  57                   push edi
// 00829255  a12058c900           mov eax, dword ptr [0xc95820]
// 0082925a  33c4                 xor eax, esp
// 0082925c  50                   push eax
// 0082925d  8d442434             lea eax, [esp + 0x34]
// 00829261  64a300000000         mov dword ptr fs:[0], eax
// 00829267  8bd9                 mov ebx, ecx
// 00829269  e82218ffff           call 0x81aa90
// 0082926e  33f6                 xor esi, esi
// 00829270  8944242c             mov dword ptr [esp + 0x2c], eax
// 00829274  3bc6                 cmp eax, esi
// 00829276  0f8442040000         je 0x8296be
// 0082927c  8b83fc000000         mov eax, dword ptr [ebx + 0xfc]
// 00829282  8b483c               mov ecx, dword ptr [eax + 0x3c]
// 00829285  3bce                 cmp ecx, esi
// 00829287  7408                 je 0x829291
// 00829289  56                   push esi
// 0082928a  e8b1050300           call 0x859840
// 0082928f  eb29                 jmp 0x8292ba
// 00829291  6a44                 push 0x44
// 00829293  e8c60dfeff           call 0x80a05e
// 00829298  83c404               add esp, 4
// 0082929b  89442428             mov dword ptr [esp + 0x28], eax
// 0082929f  8974243c             mov dword ptr [esp + 0x3c], esi
// 008292a3  3bc6                 cmp eax, esi
// 008292a5  7409                 je 0x8292b0
// 008292a7  8bc8                 mov ecx, eax
// 008292a9  e852f30200           call 0x858600
// 008292ae  eb02                 jmp 0x8292b2
// 008292b0  33c0                 xor eax, eax
// 008292b2  c744243cffffffff     mov dword ptr [esp + 0x3c], 0xffffffff
// 008292ba  33ed                 xor ebp, ebp
// 008292bc  8bcb                 mov ecx, ebx
// 008292be  8944241c             mov dword ptr [esp + 0x1c], eax
// 008292c2  896c2418             mov dword ptr [esp + 0x18], ebp
// 008292c6  e84525ffff           call 0x81b810
// 008292cb  85c0                 test eax, eax
// 008292cd  7e63                 jle 0x829332
// 008292cf  90                   nop 
// 008292d0  56                   push esi
// 008292d1  8bcb                 mov ecx, ebx
// 008292d3  e84825ffff           call 0x81b820
// 008292d8  f680d000000010       test byte ptr [eax + 0xd0], 0x10
// 008292df  7459                 je 0x82933a
// 008292e1  8b8bfc000000         mov ecx, dword ptr [ebx + 0xfc]
// 008292e7  8babcc000000         mov ebp, dword ptr [ebx + 0xcc]
// 008292ed  8bbbd0000000         mov edi, dword ptr [ebx + 0xd0]
// 008292f3  56                   push esi
// 008292f4  e887db0200           call 0x856e80
// 008292f9  83ffff               cmp edi, -1
// 008292fc  7410                 je 0x82930e
// 008292fe  33c9                 xor ecx, ecx
// 00829300  3bf7                 cmp esi, edi
// 00829302  0f9dc1               setge cl
// 00829305  49                   dec ecx
// 00829306  03cf                 add ecx, edi
// 00829308  898bd0000000         mov dword ptr [ebx + 0xd0], ecx
// 0082930e  83fdff               cmp ebp, -1
// 00829311  7410                 je 0x829323
// 00829313  33d2                 xor edx, edx
// 00829315  3bf5                 cmp esi, ebp
// 00829317  0f9dc2               setge dl
// 0082931a  4a                   dec edx
// 0082931b  03d5                 add edx, ebp
// 0082931d  8993cc000000         mov dword ptr [ebx + 0xcc], edx
// 00829323  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 00829327  8bcb                 mov ecx, ebx
// 00829329  e8e224ffff           call 0x81b810
// 0082932e  3bf0                 cmp esi, eax
// 00829330  7c9e                 jl 0x8292d0
// 00829332  33ff                 xor edi, edi
// 00829334  897c2414             mov dword ptr [esp + 0x14], edi
// 00829338  eb0e                 jmp 0x829348
// 0082933a  46                   inc esi
// 0082933b  ebea                 jmp 0x829327
// 0082933d  8d4900               lea ecx, [ecx]
// 00829340  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 00829344  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00829348  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0082934c  3b6e2c               cmp ebp, dword ptr [esi + 0x2c]
// 0082934f  7c0f                 jl 0x829360
// 00829351  8bcb                 mov ecx, ebx
// 00829353  e8b824ffff           call 0x81b810
// 00829358  3bf8                 cmp edi, eax
// 0082935a  0f8dd2020000         jge 0x829632
// 00829360  8b462c               mov eax, dword ptr [esi + 0x2c]
// 00829363  3be8                 cmp ebp, eax
// 00829365  7d13                 jge 0x82937a
// 00829367  85ed                 test ebp, ebp
// 00829369  7c0f                 jl 0x82937a
// 0082936b  3be8                 cmp ebp, eax
// 0082936d  7d0b                 jge 0x82937a
// 0082936f  8b4628               mov eax, dword ptr [esi + 0x28]
// 00829372  8d2ca8               lea ebp, [eax + ebp*4]
// 00829375  8b6d00               mov ebp, dword ptr [ebp]
// 00829378  eb02                 jmp 0x82937c
// 0082937a  33ed                 xor ebp, ebp
// 0082937c  8bcb                 mov ecx, ebx
// 0082937e  e88d24ffff           call 0x81b810
// 00829383  3bf8                 cmp edi, eax
// 00829385  7d1a                 jge 0x8293a1
// 00829387  8b83fc000000         mov eax, dword ptr [ebx + 0xfc]
// 0082938d  85ff                 test edi, edi
// 0082938f  7c10                 jl 0x8293a1
// 00829391  3b782c               cmp edi, dword ptr [eax + 0x2c]
// 00829394  7d0b                 jge 0x8293a1
// 00829396  8b4828               mov ecx, dword ptr [eax + 0x28]
// 00829399  8b34b9               mov esi, dword ptr [ecx + edi*4]
// 0082939c  8d04b9               lea eax, [ecx + edi*4]
// 0082939f  eb02                 jmp 0x8293a3
// 008293a1  33f6                 xor esi, esi
// 008293a3  8b93fc000000         mov edx, dword ptr [ebx + 0xfc]
// 008293a9  6a01                 push 1
// 008293ab  57                   push edi
// 008293ac  55                   push ebp
// 008293ad  52                   push edx
// 008293ae  8bcb                 mov ecx, ebx
// 008293b0  e8ebfbffff           call 0x828fa0
// 008293b5  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008293b9  6a00                 push 0
// 008293bb  8bf8                 mov edi, eax
// 008293bd  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008293c1  50                   push eax
// 008293c2  56                   push esi
// 008293c3  51                   push ecx
// 008293c4  8bcb                 mov ecx, ebx
// 008293c6  e8d5fbffff           call 0x828fa0
// 008293cb  89442424             mov dword ptr [esp + 0x24], eax
// 008293cf  83ffff               cmp edi, -1
// 008293d2  0f857e000000         jne 0x829456
// 008293d8  85ed                 test ebp, ebp
// 008293da  747a                 je 0x829456
// 008293dc  8b442414             mov eax, dword ptr [esp + 0x14]
// 008293e0  8b93cc000000         mov edx, dword ptr [ebx + 0xcc]
// 008293e6  8b8bfc000000         mov ecx, dword ptr [ebx + 0xfc]
// 008293ec  8bbbd0000000         mov edi, dword ptr [ebx + 0xd0]
// 008293f2  6a00                 push 0
// 008293f4  50                   push eax
// 008293f5  55                   push ebp
// 008293f6  89542430             mov dword ptr [esp + 0x30], edx
// 008293fa  e841f90200           call 0x858d40
// 008293ff  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00829403  8bf0                 mov esi, eax
// 00829405  83ffff               cmp edi, -1
// 00829408  740f                 je 0x829419
// 0082940a  33c9                 xor ecx, ecx
// 0082940c  3bef                 cmp ebp, edi
// 0082940e  0f9ec1               setle cl
// 00829411  03cf                 add ecx, edi
// 00829413  898bd0000000         mov dword ptr [ebx + 0xd0], ecx
// 00829419  8b442424             mov eax, dword ptr [esp + 0x24]
// 0082941d  83f8ff               cmp eax, -1
// 00829420  740f                 je 0x829431
// 00829422  33d2                 xor edx, edx
// 00829424  3be8                 cmp ebp, eax
// 00829426  0f9ec2               setle dl
// 00829429  03d0                 add edx, eax
// 0082942b  8993cc000000         mov dword ptr [ebx + 0xcc], edx
// 00829431  8b8ed0000000         mov ecx, dword ptr [esi + 0xd0]
// 00829437  8b06                 mov eax, dword ptr [esi]
// 00829439  8b9094000000         mov edx, dword ptr [eax + 0x94]
// 0082943f  83c910               or ecx, 0x10
// 00829442  51                   push ecx
// 00829443  8bce                 mov ecx, esi
// 00829445  896c2428             mov dword ptr [esp + 0x28], ebp
// 00829449  ffd2                 call edx
// 0082944b  ff442418             inc dword ptr [esp + 0x18]
// 0082944f  45                   inc ebp
// 00829450  896c2414             mov dword ptr [esp + 0x14], ebp
// 00829454  eb1f                 jmp 0x829475
// 00829456  3b7c2414             cmp edi, dword ptr [esp + 0x14]
// 0082945a  7506                 jne 0x829462
// 0082945c  ff442418             inc dword ptr [esp + 0x18]
// 00829460  eb0f                 jmp 0x829471
// 00829462  83f8ff               cmp eax, -1
// 00829465  740a                 je 0x829471
// 00829467  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0082946b  50                   push eax
// 0082946c  e80fda0200           call 0x856e80
// 00829471  ff442414             inc dword ptr [esp + 0x14]
// 00829475  85f6                 test esi, esi
// 00829477  0f84c3feffff         je 0x829340
// 0082947d  8b8684000000         mov eax, dword ptr [esi + 0x84]
// 00829483  3dbd230000           cmp eax, 0x23bd
// 00829488  0f84b2feffff         je 0x829340
// 0082948e  3dbc230000           cmp eax, 0x23bc
// 00829493  0f84a7feffff         je 0x829340
// 00829499  8b865c010000         mov eax, dword ptr [esi + 0x15c]
// 0082949f  85c0                 test eax, eax
// 008294a1  740a                 je 0x8294ad
// 008294a3  83783c00             cmp dword ptr [eax + 0x3c], 0
// 008294a7  0f8493feffff         je 0x829340
// 008294ad  f686d0000000c1       test byte ptr [esi + 0xd0], 0xc1
// 008294b4  0f8586feffff         jne 0x829340
// 008294ba  8b06                 mov eax, dword ptr [esi]
// 008294bc  8b9030010000         mov edx, dword ptr [eax + 0x130]
// 008294c2  8bce                 mov ecx, esi
// 008294c4  ffd2                 call edx
// 008294c6  85c0                 test eax, eax
// 008294c8  0f8472feffff         je 0x829340
// 008294ce  687c010000           push 0x17c
// 008294d3  e8860bfeff           call 0x80a05e
// 008294d8  83c404               add esp, 4
// 008294db  89442430             mov dword ptr [esp + 0x30], eax
// 008294df  c744243c01000000     mov dword ptr [esp + 0x3c], 1
// 008294e7  85c0                 test eax, eax
// 008294e9  7409                 je 0x8294f4
// 008294eb  8bc8                 mov ecx, eax
// 008294ed  e87ed8ffff           call 0x826d70
// 008294f2  eb02                 jmp 0x8294f6
// 008294f4  33c0                 xor eax, eax
// 008294f6  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 008294fa  8b89fc000000         mov ecx, dword ptr [ecx + 0xfc]
// 00829500  6a00                 push 0
// 00829502  83cdff               or ebp, 0xffffffff
// 00829505  55                   push ebp
// 00829506  6a00                 push 0
// 00829508  6a00                 push 0
// 0082950a  50                   push eax
// 0082950b  896c2450             mov dword ptr [esp + 0x50], ebp
// 0082950f  e88c050300           call 0x859aa0
// 00829514  8b16                 mov edx, dword ptr [esi]
// 00829516  8b5258               mov edx, dword ptr [edx + 0x58]
// 00829519  8bf8                 mov edi, eax
// 0082951b  8d442428             lea eax, [esp + 0x28]
// 0082951f  50                   push eax
// 00829520  8bce                 mov ecx, esi
// 00829522  ffd2                 call edx
// 00829524  8bc8                 mov ecx, eax
// 00829526  c744243c02000000     mov dword ptr [esp + 0x3c], 2
// 0082952e  ff15c82da400         call dword ptr [0xa42dc8]
// 00829534  50                   push eax
// 00829535  8bcf                 mov ecx, edi
// 00829537  e8c438feff           call 0x80ce00
// 0082953c  8d4c2428             lea ecx, [esp + 0x28]
// 00829540  896c243c             mov dword ptr [esp + 0x3c], ebp
// 00829544  ff15082ea400         call dword ptr [0xa42e08]
// 0082954a  8b86fc000000         mov eax, dword ptr [esi + 0xfc]
// 00829550  83f802               cmp eax, 2
// 00829553  740f                 je 0x829564
// 00829555  83f803               cmp eax, 3
// 00829558  740a                 je 0x829564
// 0082955a  83f804               cmp eax, 4
// 0082955d  7405                 je 0x829564
// 0082955f  83f801               cmp eax, 1
// 00829562  751e                 jne 0x829582
// 00829564  8bce                 mov ecx, esi
// 00829566  e8252efeff           call 0x80c390
// 0082956b  398788000000         cmp dword ptr [edi + 0x88], eax
// 00829571  740f                 je 0x829582
// 00829573  6a01                 push 1
// 00829575  8bcf                 mov ecx, edi
// 00829577  898788000000         mov dword ptr [edi + 0x88], eax
// 0082957d  e80e38feff           call 0x80cd90
// 00829582  8d86e0000000         lea eax, [esi + 0xe0]
// 00829588  50                   push eax
// 00829589  8d4c2424             lea ecx, [esp + 0x24]
// 0082958d  ff15e42da400         call dword ptr [0xa42de4]
// 00829593  8d4c2420             lea ecx, [esp + 0x20]
// 00829597  c744243c03000000     mov dword ptr [esp + 0x3c], 3
// 0082959f  ff15b026a400         call dword ptr [0xa426b0]
// 008295a5  84c0                 test al, al
// 008295a7  7421                 je 0x8295ca
// 008295a9  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 008295ad  e85e9aecff           call 0x6f3010
// 008295b2  8b8e84000000         mov ecx, dword ptr [esi + 0x84]
// 008295b8  8b10                 mov edx, dword ptr [eax]
// 008295ba  8d6c2420             lea ebp, [esp + 0x20]
// 008295be  55                   push ebp
// 008295bf  51                   push ecx
// 008295c0  8bc8                 mov ecx, eax
// 008295c2  8b4258               mov eax, dword ptr [edx + 0x58]
// 008295c5  ffd0                 call eax
// 008295c7  83cdff               or ebp, 0xffffffff
// 008295ca  8d4c2420             lea ecx, [esp + 0x20]
// 008295ce  ff15c82da400         call dword ptr [0xa42dc8]
// 008295d4  50                   push eax
// 008295d5  8d8fe0000000         lea ecx, [edi + 0xe0]
// 008295db  ff15a42da400         call dword ptr [0xa42da4]
// 008295e1  8b17                 mov edx, dword ptr [edi]
// 008295e3  8b5268               mov edx, dword ptr [edx + 0x68]
// 008295e6  33c0                 xor eax, eax
// 008295e8  396c2424             cmp dword ptr [esp + 0x24], ebp
// 008295ec  8bcf                 mov ecx, edi
// 008295ee  0f95c0               setne al
// 008295f1  50                   push eax
// 008295f2  ffd2                 call edx
// 008295f4  8b86d0000000         mov eax, dword ptr [esi + 0xd0]
// 008295fa  c1e804               shr eax, 4
// 008295fd  f7d0                 not eax
// 008295ff  83e001               and eax, 1
// 00829602  3987a0000000         cmp dword ptr [edi + 0xa0], eax
// 00829608  740f                 je 0x829619
// 0082960a  6a01                 push 1
// 0082960c  8bcf                 mov ecx, edi
// 0082960e  8987a0000000         mov dword ptr [edi + 0xa0], eax
// 00829614  e87737feff           call 0x80cd90
// 00829619  8d4c2420             lea ecx, [esp + 0x20]
// 0082961d  89b774010000         mov dword ptr [edi + 0x174], esi
// 00829623  896c243c             mov dword ptr [esp + 0x3c], ebp
// 00829627  ff15082ea400         call dword ptr [0xa42e08]
// 0082962d  e90efdffff           jmp 0x829340
// 00829632  8bce                 mov ecx, esi
// 00829634  e8a10ffeff           call 0x80a5da
// 00829639  8b83fc000000         mov eax, dword ptr [ebx + 0xfc]
// 0082963f  83783c00             cmp dword ptr [eax + 0x3c], 0
// 00829643  7479                 je 0x8296be
// 00829645  83bb8c01000000       cmp dword ptr [ebx + 0x18c], 0
// 0082964c  7570                 jne 0x8296be
// 0082964e  83bb8801000000       cmp dword ptr [ebx + 0x188], 0
// 00829655  7467                 je 0x8296be
// 00829657  687c010000           push 0x17c
// 0082965c  e8fd09feff           call 0x80a05e
// 00829661  83c404               add esp, 4
// 00829664  89442430             mov dword ptr [esp + 0x30], eax
// 00829668  c744243c04000000     mov dword ptr [esp + 0x3c], 4
// 00829670  85c0                 test eax, eax
// 00829672  7409                 je 0x82967d
// 00829674  8bc8                 mov ecx, eax
// 00829676  e8f5d6ffff           call 0x826d70
// 0082967b  eb02                 jmp 0x82967f
// 0082967d  33c0                 xor eax, eax
// 0082967f  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00829683  8b89fc000000         mov ecx, dword ptr [ecx + 0xfc]
// 00829689  6a00                 push 0
// 0082968b  6aff                 push -1
// 0082968d  6a00                 push 0
// 0082968f  68a3230000           push 0x23a3
// 00829694  50                   push eax
// 00829695  c7442450ffffffff     mov dword ptr [esp + 0x50], 0xffffffff
// 0082969d  e8fe030300           call 0x859aa0
// 008296a2  8bf0                 mov esi, eax
// 008296a4  6a08                 push 8
// 008296a6  8bce                 mov ecx, esi
// 008296a8  e8d331feff           call 0x80c880
// 008296ad  8b16                 mov edx, dword ptr [esi]
// 008296af  8b4264               mov eax, dword ptr [edx + 0x64]
// 008296b2  6a01                 push 1
// 008296b4  8bce                 mov ecx, esi
// 008296b6  ffd0                 call eax
// 008296b8  899e78010000         mov dword ptr [esi + 0x178], ebx
// 008296be  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008296c2  64890d00000000       mov dword ptr fs:[0], ecx
// 008296c9  59                   pop ecx
// 008296ca  5f                   pop edi
// 008296cb  5e                   pop esi
// 008296cc  5d                   pop ebp
// 008296cd  5b                   pop ebx
// 008296ce  83c42c               add esp, 0x2c
// 008296d1  c20400               ret 4
// copied from an identical function in another client (function ?BuildCustomizePopup@CXTPToolBar@@AAEXPAVCXTPCommandBar@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPToolBar.cpp