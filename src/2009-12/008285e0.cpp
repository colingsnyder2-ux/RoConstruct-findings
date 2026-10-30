// roc 2009-12 008285e0  unit: CXTPReportHeader  size: 1078 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008285e0
//
// 008285e0  6aff                 push -1
// 008285e2  686bb89500           push 0x95b86b
// 008285e7  64a100000000         mov eax, dword ptr fs:[0]
// 008285ed  50                   push eax
// 008285ee  81ec08010000         sub esp, 0x108
// 008285f4  53                   push ebx
// 008285f5  55                   push ebp
// 008285f6  56                   push esi
// 008285f7  57                   push edi
// 008285f8  a10052b600           mov eax, dword ptr [0xb65200]
// 008285fd  33c4                 xor eax, esp
// 008285ff  50                   push eax
// 00828600  8d84241c010000       lea eax, [esp + 0x11c]
// 00828607  64a300000000         mov dword ptr fs:[0], eax
// 0082860d  8bf1                 mov esi, ecx
// 0082860f  8b8c2440010000       mov ecx, dword ptr [esp + 0x140]
// 00828616  8b4624               mov eax, dword ptr [esi + 0x24]
// 00828619  8b8010010000         mov eax, dword ptr [eax + 0x110]
// 0082861f  6a00                 push 0
// 00828621  f7d9                 neg ecx
// 00828623  51                   push ecx
// 00828624  8d942438010000       lea edx, [esp + 0x138]
// 0082862b  52                   push edx
// 0082862c  89442430             mov dword ptr [esp + 0x30], eax
// 00828630  ff156ccc9800         call dword ptr [0x98cc6c]
// 00828636  8b842430010000       mov eax, dword ptr [esp + 0x130]
// 0082863d  8b8c2434010000       mov ecx, dword ptr [esp + 0x134]
// 00828644  8b942438010000       mov edx, dword ptr [esp + 0x138]
// 0082864b  894660               mov dword ptr [esi + 0x60], eax
// 0082864e  8b84243c010000       mov eax, dword ptr [esp + 0x13c]
// 00828655  894e64               mov dword ptr [esi + 0x64], ecx
// 00828658  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 0082865b  51                   push ecx
// 0082865c  895668               mov dword ptr [esi + 0x68], edx
// 0082865f  8d4c243c             lea ecx, [esp + 0x3c]
// 00828663  89466c               mov dword ptr [esi + 0x6c], eax
// 00828666  e8652c0200           call 0x84b2d0
// 0082866b  8bbc2434010000       mov edi, dword ptr [esp + 0x134]
// 00828672  8b9c243c010000       mov ebx, dword ptr [esp + 0x13c]
// 00828679  8bce                 mov ecx, esi
// 0082867b  897c243c             mov dword ptr [esp + 0x3c], edi
// 0082867f  895c2444             mov dword ptr [esp + 0x44], ebx
// 00828683  e898fcffff           call 0x828320
// 00828688  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0082868c  8b28                 mov ebp, dword ptr [eax]
// 0082868e  83ec10               sub esp, 0x10
// 00828691  8bd4                 mov edx, esp
// 00828693  890a                 mov dword ptr [edx], ecx
// 00828695  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 00828699  897a04               mov dword ptr [edx + 4], edi
// 0082869c  894a08               mov dword ptr [edx + 8], ecx
// 0082869f  895a0c               mov dword ptr [edx + 0xc], ebx
// 008286a2  8b94243c010000       mov edx, dword ptr [esp + 0x13c]
// 008286a9  8bc8                 mov ecx, eax
// 008286ab  8b8590000000         mov eax, dword ptr [ebp + 0x90]
// 008286b1  52                   push edx
// 008286b2  ffd0                 call eax
// 008286b4  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008286b7  8b4130               mov eax, dword ptr [ecx + 0x30]
// 008286ba  8bac2430010000       mov ebp, dword ptr [esp + 0x130]
// 008286c1  33db                 xor ebx, ebx
// 008286c3  896c2434             mov dword ptr [esp + 0x34], ebp
// 008286c7  8944242c             mov dword ptr [esp + 0x2c], eax
// 008286cb  895c2428             mov dword ptr [esp + 0x28], ebx
// 008286cf  85c0                 test eax, eax
// 008286d1  0f8ef6000000         jle 0x8287cd
// 008286d7  8b4620               mov eax, dword ptr [esi + 0x20]
// 008286da  85db                 test ebx, ebx
// 008286dc  0f8cd6000000         jl 0x8287b8
// 008286e2  3b5830               cmp ebx, dword ptr [eax + 0x30]
// 008286e5  0f8dcd000000         jge 0x8287b8
// 008286eb  8b502c               mov edx, dword ptr [eax + 0x2c]
// 008286ee  8b3c9a               mov edi, dword ptr [edx + ebx*4]
// 008286f1  8d049a               lea eax, [edx + ebx*4]
// 008286f4  85ff                 test edi, edi
// 008286f6  0f84bc000000         je 0x8287b8
// 008286fc  8bcf                 mov ecx, edi
// 008286fe  e8bdb30800           call 0x8b3ac0
// 00828703  85c0                 test eax, eax
// 00828705  0f84ad000000         je 0x8287b8
// 0082870b  8b9c243c010000       mov ebx, dword ptr [esp + 0x13c]
// 00828712  8bcf                 mov ecx, edi
// 00828714  e867faffff           call 0x828180
// 00828719  8b8c2434010000       mov ecx, dword ptr [esp + 0x134]
// 00828720  8bd5                 mov edx, ebp
// 00828722  89576c               mov dword ptr [edi + 0x6c], edx
// 00828725  03c5                 add eax, ebp
// 00828727  8bd3                 mov edx, ebx
// 00828729  895c2420             mov dword ptr [esp + 0x20], ebx
// 0082872d  894f70               mov dword ptr [edi + 0x70], ecx
// 00828730  2bd9                 sub ebx, ecx
// 00828732  894774               mov dword ptr [edi + 0x74], eax
// 00828735  896c2414             mov dword ptr [esp + 0x14], ebp
// 00828739  894c2418             mov dword ptr [esp + 0x18], ecx
// 0082873d  8944241c             mov dword ptr [esp + 0x1c], eax
// 00828741  895778               mov dword ptr [edi + 0x78], edx
// 00828744  85db                 test ebx, ebx
// 00828746  7e5c                 jle 0x8287a4
// 00828748  8d442414             lea eax, [esp + 0x14]
// 0082874c  50                   push eax
// 0082874d  8d4c243c             lea ecx, [esp + 0x3c]
// 00828751  51                   push ecx
// 00828752  8d542450             lea edx, [esp + 0x50]
// 00828756  52                   push edx
// 00828757  ff15dcca9800         call dword ptr [0x98cadc]
// 0082875d  85c0                 test eax, eax
// 0082875f  743f                 je 0x8287a0
// 00828761  8bce                 mov ecx, esi
// 00828763  e8b8fbffff           call 0x828320
// 00828768  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0082876c  8b18                 mov ebx, dword ptr [eax]
// 0082876e  6a00                 push 0
// 00828770  83ec10               sub esp, 0x10
// 00828773  8bd4                 mov edx, esp
// 00828775  890a                 mov dword ptr [edx], ecx
// 00828777  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0082877b  894a04               mov dword ptr [edx + 4], ecx
// 0082877e  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00828782  894a08               mov dword ptr [edx + 8], ecx
// 00828785  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00828789  56                   push esi
// 0082878a  894a0c               mov dword ptr [edx + 0xc], ecx
// 0082878d  8b942444010000       mov edx, dword ptr [esp + 0x144]
// 00828794  57                   push edi
// 00828795  8bc8                 mov ecx, eax
// 00828797  8b8398000000         mov eax, dword ptr [ebx + 0x98]
// 0082879d  52                   push edx
// 0082879e  ffd0                 call eax
// 008287a0  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008287a4  2b442414             sub eax, dword ptr [esp + 0x14]
// 008287a8  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 008287ac  03e8                 add ebp, eax
// 008287ae  c7879000000000000000 mov dword ptr [edi + 0x90], 0
// 008287b8  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 008287bc  43                   inc ebx
// 008287bd  3bd8                 cmp ebx, eax
// 008287bf  895c2428             mov dword ptr [esp + 0x28], ebx
// 008287c3  0f8c0effffff         jl 0x8286d7
// 008287c9  896c2434             mov dword ptr [esp + 0x34], ebp
// 008287cd  33db                 xor ebx, ebx
// 008287cf  395c2424             cmp dword ptr [esp + 0x24], ebx
// 008287d3  c744243000000000     mov dword ptr [esp + 0x30], 0
// 008287db  895c2428             mov dword ptr [esp + 0x28], ebx
// 008287df  0f8e75010000         jle 0x82895a
// 008287e5  eb0d                 jmp 0x8287f4
// 008287e7  eb07                 jmp 0x8287f0
// 008287e9  8da42400000000       lea esp, [esp]
// 008287f0  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 008287f4  3bd8                 cmp ebx, eax
// 008287f6  0f8d5e010000         jge 0x82895a
// 008287fc  8b4620               mov eax, dword ptr [esi + 0x20]
// 008287ff  85db                 test ebx, ebx
// 00828801  0f8c43010000         jl 0x82894a
// 00828807  3b5830               cmp ebx, dword ptr [eax + 0x30]
// 0082880a  0f8d3a010000         jge 0x82894a
// 00828810  8b482c               mov ecx, dword ptr [eax + 0x2c]
// 00828813  8b3c99               mov edi, dword ptr [ecx + ebx*4]
// 00828816  8d0499               lea eax, [ecx + ebx*4]
// 00828819  85ff                 test edi, edi
// 0082881b  0f8429010000         je 0x82894a
// 00828821  8bcf                 mov ecx, edi
// 00828823  e898b20800           call 0x8b3ac0
// 00828828  85c0                 test eax, eax
// 0082882a  0f841a010000         je 0x82894a
// 00828830  8b9c243c010000       mov ebx, dword ptr [esp + 0x13c]
// 00828837  8bcf                 mov ecx, edi
// 00828839  e842f9ffff           call 0x828180
// 0082883e  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00828842  03c1                 add eax, ecx
// 00828844  8be9                 mov ebp, ecx
// 00828846  8b8c2434010000       mov ecx, dword ptr [esp + 0x134]
// 0082884d  8bd3                 mov edx, ebx
// 0082884f  896f6c               mov dword ptr [edi + 0x6c], ebp
// 00828852  894f70               mov dword ptr [edi + 0x70], ecx
// 00828855  2bd9                 sub ebx, ecx
// 00828857  894774               mov dword ptr [edi + 0x74], eax
// 0082885a  896c2414             mov dword ptr [esp + 0x14], ebp
// 0082885e  894c2418             mov dword ptr [esp + 0x18], ecx
// 00828862  8944241c             mov dword ptr [esp + 0x1c], eax
// 00828866  89542420             mov dword ptr [esp + 0x20], edx
// 0082886a  895778               mov dword ptr [edi + 0x78], edx
// 0082886d  85db                 test ebx, ebx
// 0082886f  0f8ec1000000         jle 0x828936
// 00828875  8d542414             lea edx, [esp + 0x14]
// 00828879  52                   push edx
// 0082887a  8d44243c             lea eax, [esp + 0x3c]
// 0082887e  50                   push eax
// 0082887f  8d4c2450             lea ecx, [esp + 0x50]
// 00828883  51                   push ecx
// 00828884  ff15dcca9800         call dword ptr [0x98cadc]
// 0082888a  85c0                 test eax, eax
// 0082888c  0f84a0000000         je 0x828932
// 00828892  8bce                 mov ecx, esi
// 00828894  e887faffff           call 0x828320
// 00828899  8b4f6c               mov ecx, dword ptr [edi + 0x6c]
// 0082889c  8b28                 mov ebp, dword ptr [eax]
// 0082889e  8b9c242c010000       mov ebx, dword ptr [esp + 0x12c]
// 008288a5  83ec10               sub esp, 0x10
// 008288a8  8bd4                 mov edx, esp
// 008288aa  890a                 mov dword ptr [edx], ecx
// 008288ac  8b4f70               mov ecx, dword ptr [edi + 0x70]
// 008288af  894a04               mov dword ptr [edx + 4], ecx
// 008288b2  8b4f74               mov ecx, dword ptr [edi + 0x74]
// 008288b5  894a08               mov dword ptr [edx + 8], ecx
// 008288b8  8b4f78               mov ecx, dword ptr [edi + 0x78]
// 008288bb  894a0c               mov dword ptr [edx + 0xc], ecx
// 008288be  8b9590000000         mov edx, dword ptr [ebp + 0x90]
// 008288c4  53                   push ebx
// 008288c5  8bc8                 mov ecx, eax
// 008288c7  ffd2                 call edx
// 008288c9  8bce                 mov ecx, esi
// 008288cb  e850faffff           call 0x828320
// 008288d0  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008288d4  8b28                 mov ebp, dword ptr [eax]
// 008288d6  6a00                 push 0
// 008288d8  83ec10               sub esp, 0x10
// 008288db  8bd4                 mov edx, esp
// 008288dd  890a                 mov dword ptr [edx], ecx
// 008288df  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 008288e3  894a04               mov dword ptr [edx + 4], ecx
// 008288e6  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 008288ea  894a08               mov dword ptr [edx + 8], ecx
// 008288ed  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008288f1  56                   push esi
// 008288f2  894a0c               mov dword ptr [edx + 0xc], ecx
// 008288f5  8b9598000000         mov edx, dword ptr [ebp + 0x98]
// 008288fb  57                   push edi
// 008288fc  53                   push ebx
// 008288fd  8bc8                 mov ecx, eax
// 008288ff  ffd2                 call edx
// 00828901  837c242401           cmp dword ptr [esp + 0x24], 1
// 00828906  752a                 jne 0x828932
// 00828908  8bce                 mov ecx, esi
// 0082890a  e811faffff           call 0x828320
// 0082890f  f680a402000004       test byte ptr [eax + 0x2a4], 4
// 00828916  741a                 je 0x828932
// 00828918  e803faffff           call 0x828320
// 0082891d  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 00828920  8b10                 mov edx, dword ptr [eax]
// 00828922  8b527c               mov edx, dword ptr [edx + 0x7c]
// 00828925  6a00                 push 0
// 00828927  51                   push ecx
// 00828928  8d4c241c             lea ecx, [esp + 0x1c]
// 0082892c  51                   push ecx
// 0082892d  53                   push ebx
// 0082892e  8bc8                 mov ecx, eax
// 00828930  ffd2                 call edx
// 00828932  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00828936  2b442414             sub eax, dword ptr [esp + 0x14]
// 0082893a  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 0082893e  01442430             add dword ptr [esp + 0x30], eax
// 00828942  ff4c2424             dec dword ptr [esp + 0x24]
// 00828946  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 0082894a  43                   inc ebx
// 0082894b  837c242400           cmp dword ptr [esp + 0x24], 0
// 00828950  895c2428             mov dword ptr [esp + 0x28], ebx
// 00828954  0f8f96feffff         jg 0x8287f0
// 0082895a  8b7c2440             mov edi, dword ptr [esp + 0x40]
// 0082895e  3bef                 cmp ebp, edi
// 00828960  0f8d94000000         jge 0x8289fa
// 00828966  8b442438             mov eax, dword ptr [esp + 0x38]
// 0082896a  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0082896e  8b5c243c             mov ebx, dword ptr [esp + 0x3c]
// 00828972  6a01                 push 1
// 00828974  6a00                 push 0
// 00828976  6aff                 push -1
// 00828978  89442420             mov dword ptr [esp + 0x20], eax
// 0082897c  83c70a               add edi, 0xa
// 0082897f  6a00                 push 0
// 00828981  8bc7                 mov eax, edi
// 00828983  2bc5                 sub eax, ebp
// 00828985  50                   push eax
// 00828986  6856fd9900           push 0x99fd56
// 0082898b  894c2438             mov dword ptr [esp + 0x38], ecx
// 0082898f  6a00                 push 0
// 00828991  8d4c2474             lea ecx, [esp + 0x74]
// 00828995  e806f7ffff           call 0x8280a0
// 0082899a  8b5620               mov edx, dword ptr [esi + 0x20]
// 0082899d  8bce                 mov ecx, esi
// 0082899f  c784242401000000000000 mov dword ptr [esp + 0x124], 0
// 008289aa  899424b0000000       mov dword ptr [esp + 0xb0], edx
// 008289b1  e86af9ffff           call 0x828320
// 008289b6  6a00                 push 0
// 008289b8  83ec10               sub esp, 0x10
// 008289bb  8bd4                 mov edx, esp
// 008289bd  892a                 mov dword ptr [edx], ebp
// 008289bf  895a04               mov dword ptr [edx + 4], ebx
// 008289c2  897a08               mov dword ptr [edx + 8], edi
// 008289c5  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 008289c9  897a0c               mov dword ptr [edx + 0xc], edi
// 008289cc  56                   push esi
// 008289cd  8d542470             lea edx, [esp + 0x70]
// 008289d1  52                   push edx
// 008289d2  8b942448010000       mov edx, dword ptr [esp + 0x148]
// 008289d9  8bc8                 mov ecx, eax
// 008289db  8b00                 mov eax, dword ptr [eax]
// 008289dd  8b8098000000         mov eax, dword ptr [eax + 0x98]
// 008289e3  52                   push edx
// 008289e4  ffd0                 call eax
// 008289e6  8d4c2458             lea ecx, [esp + 0x58]
// 008289ea  c7842424010000ffffffff mov dword ptr [esp + 0x124], 0xffffffff
// 008289f5  e816f4ffff           call 0x827e10
// 008289fa  8b8c241c010000       mov ecx, dword ptr [esp + 0x11c]
// 00828a01  64890d00000000       mov dword ptr fs:[0], ecx
// 00828a08  59                   pop ecx
// 00828a09  5f                   pop edi
// 00828a0a  5e                   pop esi
// 00828a0b  5d                   pop ebp
// 00828a0c  5b                   pop ebx
// 00828a0d  81c414010000         add esp, 0x114
// 00828a13  c21800               ret 0x18
// copied from an identical function in another client (function ?Draw@CXTPReportHeader@@MAEXPAVCDC@@VCRect@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\ReportControl\XTPReportHeader.cpp