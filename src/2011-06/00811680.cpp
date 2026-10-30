// roc 2011-06 00811680  unit: CXTPPaintManager  size: 903 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00811680
//
// 00811680  6aff                 push -1
// 00811682  684225a000           push 0xa02542
// 00811687  64a100000000         mov eax, dword ptr fs:[0]
// 0081168d  50                   push eax
// 0081168e  83ec1c               sub esp, 0x1c
// 00811691  53                   push ebx
// 00811692  55                   push ebp
// 00811693  56                   push esi
// 00811694  57                   push edi
// 00811695  a12058c900           mov eax, dword ptr [0xc95820]
// 0081169a  33c4                 xor eax, esp
// 0081169c  50                   push eax
// 0081169d  8d442430             lea eax, [esp + 0x30]
// 008116a1  64a300000000         mov dword ptr fs:[0], eax
// 008116a7  8bd9                 mov ebx, ecx
// 008116a9  8b742448             mov esi, dword ptr [esp + 0x48]
// 008116ad  8b06                 mov eax, dword ptr [esi]
// 008116af  8b5058               mov edx, dword ptr [eax + 0x58]
// 008116b2  8d4c2414             lea ecx, [esp + 0x14]
// 008116b6  51                   push ecx
// 008116b7  8bce                 mov ecx, esi
// 008116b9  ffd2                 call edx
// 008116bb  8d442414             lea eax, [esp + 0x14]
// 008116bf  50                   push eax
// 008116c0  8d4c244c             lea ecx, [esp + 0x4c]
// 008116c4  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 008116cc  ff15e42da400         call dword ptr [0xa42de4]
// 008116d2  8d4c2448             lea ecx, [esp + 0x48]
// 008116d6  51                   push ecx
// 008116d7  c644243c01           mov byte ptr [esp + 0x3c], 1
// 008116dc  e85fe1ffff           call 0x80f840
// 008116e1  83c404               add esp, 4
// 008116e4  837c245c00           cmp dword ptr [esp + 0x5c], 0
// 008116e9  0f85c6000000         jne 0x8117b5
// 008116ef  8d4c2448             lea ecx, [esp + 0x48]
// 008116f3  ff15b026a400         call dword ptr [0xa426b0]
// 008116f9  84c0                 test al, al
// 008116fb  7407                 je 0x811704
// 008116fd  b86056a600           mov eax, 0xa65660
// 00811702  eb0a                 jmp 0x81170e
// 00811704  8d4c2448             lea ecx, [esp + 0x48]
// 00811708  ff15c82da400         call dword ptr [0xa42dc8]
// 0081170e  50                   push eax
// 0081170f  8d4c2468             lea ecx, [esp + 0x68]
// 00811713  ff15002ea400         call dword ptr [0xa42e00]
// 00811719  8d542420             lea edx, [esp + 0x20]
// 0081171d  52                   push edx
// 0081171e  8d4c2468             lea ecx, [esp + 0x68]
// 00811722  ff15a826a400         call dword ptr [0xa426a8]
// 00811728  50                   push eax
// 00811729  8d4c246c             lea ecx, [esp + 0x6c]
// 0081172d  ff15c82da400         call dword ptr [0xa42dc8]
// 00811733  50                   push eax
// 00811734  8b442450             mov eax, dword ptr [esp + 0x50]
// 00811738  8b4808               mov ecx, dword ptr [eax + 8]
// 0081173b  51                   push ecx
// 0081173c  ff153801a400         call dword ptr [0xa40138]
// 00811742  8b742420             mov esi, dword ptr [esp + 0x20]
// 00811746  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0081174a  8d4c2464             lea ecx, [esp + 0x64]
// 0081174e  89742418             mov dword ptr [esp + 0x18], esi
// 00811752  897c241c             mov dword ptr [esp + 0x1c], edi
// 00811756  ff15082ea400         call dword ptr [0xa42e08]
// 0081175c  837c246800           cmp dword ptr [esp + 0x68], 0
// 00811761  7415                 je 0x811778
// 00811763  33d2                 xor edx, edx
// 00811765  39938c000000         cmp dword ptr [ebx + 0x8c], edx
// 0081176b  0f94c2               sete dl
// 0081176e  8d541208             lea edx, [edx + edx + 8]
// 00811772  03f2                 add esi, edx
// 00811774  89742418             mov dword ptr [esp + 0x18], esi
// 00811778  837c246000           cmp dword ptr [esp + 0x60], 0
// 0081177d  741f                 je 0x81179e
// 0081177f  89742424             mov dword ptr [esp + 0x24], esi
// 00811783  8b742440             mov esi, dword ptr [esp + 0x40]
// 00811787  8d442420             lea eax, [esp + 0x20]
// 0081178b  897c2420             mov dword ptr [esp + 0x20], edi
// 0081178f  8b08                 mov ecx, dword ptr [eax]
// 00811791  8b5004               mov edx, dword ptr [eax + 4]
// 00811794  890e                 mov dword ptr [esi], ecx
// 00811796  895604               mov dword ptr [esi + 4], edx
// 00811799  e93d020000           jmp 0x8119db
// 0081179e  8b742440             mov esi, dword ptr [esp + 0x40]
// 008117a2  8d442418             lea eax, [esp + 0x18]
// 008117a6  8b08                 mov ecx, dword ptr [eax]
// 008117a8  8b5004               mov edx, dword ptr [eax + 4]
// 008117ab  890e                 mov dword ptr [esi], ecx
// 008117ad  895604               mov dword ptr [esi + 4], edx
// 008117b0  e926020000           jmp 0x8119db
// 008117b5  837c246000           cmp dword ptr [esp + 0x60], 0
// 008117ba  8b6c2444             mov ebp, dword ptr [esp + 0x44]
// 008117be  0f85e0000000         jne 0x8118a4
// 008117c4  8d442448             lea eax, [esp + 0x48]
// 008117c8  50                   push eax
// 008117c9  8d4c2424             lea ecx, [esp + 0x24]
// 008117cd  51                   push ecx
// 008117ce  8bcd                 mov ecx, ebp
// 008117d0  e8eb9fc7ff           call 0x48b7c0
// 008117d5  8b7c2468             mov edi, dword ptr [esp + 0x68]
// 008117d9  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 008117dd  f7df                 neg edi
// 008117df  1bff                 sbb edi, edi
// 008117e1  83e705               and edi, 5
// 008117e4  0338                 add edi, dword ptr [eax]
// 008117e6  837c246400           cmp dword ptr [esp + 0x64], 0
// 008117eb  7411                 je 0x8117fe
// 008117ed  8bc1                 mov eax, ecx
// 008117ef  2b44244c             sub eax, dword ptr [esp + 0x4c]
// 008117f3  2bc7                 sub eax, edi
// 008117f5  99                   cdq 
// 008117f6  2bc2                 sub eax, edx
// 008117f8  d1f8                 sar eax, 1
// 008117fa  0144244c             add dword ptr [esp + 0x4c], eax
// 008117fe  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 00811802  6a00                 push 0
// 00811804  6a00                 push 0
// 00811806  83ec10               sub esp, 0x10
// 00811809  8bc4                 mov eax, esp
// 0081180b  8910                 mov dword ptr [eax], edx
// 0081180d  8b542468             mov edx, dword ptr [esp + 0x68]
// 00811811  895004               mov dword ptr [eax + 4], edx
// 00811814  894808               mov dword ptr [eax + 8], ecx
// 00811817  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 0081181b  89480c               mov dword ptr [eax + 0xc], ecx
// 0081181e  8d542460             lea edx, [esp + 0x60]
// 00811822  52                   push edx
// 00811823  8d442430             lea eax, [esp + 0x30]
// 00811827  50                   push eax
// 00811828  56                   push esi
// 00811829  55                   push ebp
// 0081182a  8bcb                 mov ecx, ebx
// 0081182c  e88ff5ffff           call 0x810dc0
// 00811831  837c246800           cmp dword ptr [esp + 0x68], 0
// 00811836  0f848e010000         je 0x8119ca
// 0081183c  8b542450             mov edx, dword ptr [esp + 0x50]
// 00811840  8b442458             mov eax, dword ptr [esp + 0x58]
// 00811844  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00811848  03c2                 add eax, edx
// 0081184a  99                   cdq 
// 0081184b  03cf                 add ecx, edi
// 0081184d  2bc2                 sub eax, edx
// 0081184f  8bf8                 mov edi, eax
// 00811851  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 00811857  d1ff                 sar edi, 1
// 00811859  894c2420             mov dword ptr [esp + 0x20], ecx
// 0081185d  83f8ff               cmp eax, -1
// 00811860  750f                 jne 0x811871
// 00811862  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 00811868  85c9                 test ecx, ecx
// 0081186a  7405                 je 0x811871
// 0081186c  e8efb3ffff           call 0x80cc60
// 00811871  8b16                 mov edx, dword ptr [esi]
// 00811873  8b2b                 mov ebp, dword ptr [ebx]
// 00811875  6a00                 push 0
// 00811877  50                   push eax
// 00811878  8b82b4000000         mov eax, dword ptr [edx + 0xb4]
// 0081187e  8bce                 mov ecx, esi
// 00811880  ffd0                 call eax
// 00811882  8b16                 mov edx, dword ptr [esi]
// 00811884  50                   push eax
// 00811885  8b426c               mov eax, dword ptr [edx + 0x6c]
// 00811888  8bce                 mov ecx, esi
// 0081188a  ffd0                 call eax
// 0081188c  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00811890  8b542450             mov edx, dword ptr [esp + 0x50]
// 00811894  50                   push eax
// 00811895  8b85f4000000         mov eax, dword ptr [ebp + 0xf4]
// 0081189b  57                   push edi
// 0081189c  51                   push ecx
// 0081189d  56                   push esi
// 0081189e  52                   push edx
// 0081189f  e922010000           jmp 0x8119c6
// 008118a4  8b542450             mov edx, dword ptr [esp + 0x50]
// 008118a8  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 008118ac  8b442454             mov eax, dword ptr [esp + 0x54]
// 008118b0  894c2420             mov dword ptr [esp + 0x20], ecx
// 008118b4  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 008118b8  89542424             mov dword ptr [esp + 0x24], edx
// 008118bc  8d542448             lea edx, [esp + 0x48]
// 008118c0  89442428             mov dword ptr [esp + 0x28], eax
// 008118c4  52                   push edx
// 008118c5  8d44241c             lea eax, [esp + 0x1c]
// 008118c9  894c2430             mov dword ptr [esp + 0x30], ecx
// 008118cd  50                   push eax
// 008118ce  8bcd                 mov ecx, ebp
// 008118d0  e8eb9ec7ff           call 0x48b7c0
// 008118d5  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 008118d9  8b7c2454             mov edi, dword ptr [esp + 0x54]
// 008118dd  f7d9                 neg ecx
// 008118df  1bc9                 sbb ecx, ecx
// 008118e1  8bc7                 mov eax, edi
// 008118e3  2b44241c             sub eax, dword ptr [esp + 0x1c]
// 008118e7  83e105               and ecx, 5
// 008118ea  2b44244c             sub eax, dword ptr [esp + 0x4c]
// 008118ee  014c2418             add dword ptr [esp + 0x18], ecx
// 008118f2  40                   inc eax
// 008118f3  99                   cdq 
// 008118f4  2bc2                 sub eax, edx
// 008118f6  d1f8                 sar eax, 1
// 008118f8  8bcf                 mov ecx, edi
// 008118fa  2bc8                 sub ecx, eax
// 008118fc  837c246400           cmp dword ptr [esp + 0x64], 0
// 00811901  894c244c             mov dword ptr [esp + 0x4c], ecx
// 00811905  7416                 je 0x81191d
// 00811907  8b442458             mov eax, dword ptr [esp + 0x58]
// 0081190b  2b442450             sub eax, dword ptr [esp + 0x50]
// 0081190f  2b442418             sub eax, dword ptr [esp + 0x18]
// 00811913  40                   inc eax
// 00811914  99                   cdq 
// 00811915  2bc2                 sub eax, edx
// 00811917  d1f8                 sar eax, 1
// 00811919  01442450             add dword ptr [esp + 0x50], eax
// 0081191d  8b542460             mov edx, dword ptr [esp + 0x60]
// 00811921  6a00                 push 0
// 00811923  52                   push edx
// 00811924  8b542460             mov edx, dword ptr [esp + 0x60]
// 00811928  83ec10               sub esp, 0x10
// 0081192b  8bc4                 mov eax, esp
// 0081192d  8908                 mov dword ptr [eax], ecx
// 0081192f  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 00811933  894804               mov dword ptr [eax + 4], ecx
// 00811936  897808               mov dword ptr [eax + 8], edi
// 00811939  89500c               mov dword ptr [eax + 0xc], edx
// 0081193c  8d442460             lea eax, [esp + 0x60]
// 00811940  50                   push eax
// 00811941  8d4c2430             lea ecx, [esp + 0x30]
// 00811945  51                   push ecx
// 00811946  56                   push esi
// 00811947  55                   push ebp
// 00811948  8bcb                 mov ecx, ebx
// 0081194a  e871f4ffff           call 0x810dc0
// 0081194f  837c246800           cmp dword ptr [esp + 0x68], 0
// 00811954  7474                 je 0x8119ca
// 00811956  8b542428             mov edx, dword ptr [esp + 0x28]
// 0081195a  8b442420             mov eax, dword ptr [esp + 0x20]
// 0081195e  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 00811962  03c2                 add eax, edx
// 00811964  99                   cdq 
// 00811965  2bc2                 sub eax, edx
// 00811967  8b542418             mov edx, dword ptr [esp + 0x18]
// 0081196b  8bf8                 mov edi, eax
// 0081196d  8d4411ff             lea eax, [ecx + edx - 1]
// 00811971  89442424             mov dword ptr [esp + 0x24], eax
// 00811975  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 0081197b  d1ff                 sar edi, 1
// 0081197d  83f8ff               cmp eax, -1
// 00811980  750f                 jne 0x811991
// 00811982  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 00811988  85c9                 test ecx, ecx
// 0081198a  7405                 je 0x811991
// 0081198c  e8cfb2ffff           call 0x80cc60
// 00811991  8b542460             mov edx, dword ptr [esp + 0x60]
// 00811995  8b0b                 mov ecx, dword ptr [ebx]
// 00811997  52                   push edx
// 00811998  50                   push eax
// 00811999  8b06                 mov eax, dword ptr [esi]
// 0081199b  8b90b4000000         mov edx, dword ptr [eax + 0xb4]
// 008119a1  894c2470             mov dword ptr [esp + 0x70], ecx
// 008119a5  8bce                 mov ecx, esi
// 008119a7  ffd2                 call edx
// 008119a9  50                   push eax
// 008119aa  8b06                 mov eax, dword ptr [esi]
// 008119ac  8b506c               mov edx, dword ptr [eax + 0x6c]
// 008119af  8bce                 mov ecx, esi
// 008119b1  ffd2                 call edx
// 008119b3  8b542474             mov edx, dword ptr [esp + 0x74]
// 008119b7  50                   push eax
// 008119b8  8b442434             mov eax, dword ptr [esp + 0x34]
// 008119bc  50                   push eax
// 008119bd  8b82f4000000         mov eax, dword ptr [edx + 0xf4]
// 008119c3  57                   push edi
// 008119c4  56                   push esi
// 008119c5  55                   push ebp
// 008119c6  8bcb                 mov ecx, ebx
// 008119c8  ffd0                 call eax
// 008119ca  8b742440             mov esi, dword ptr [esp + 0x40]
// 008119ce  c70600000000         mov dword ptr [esi], 0
// 008119d4  c7460400000000       mov dword ptr [esi + 4], 0
// 008119db  8d4c2448             lea ecx, [esp + 0x48]
// 008119df  ff15082ea400         call dword ptr [0xa42e08]
// 008119e5  8d4c2414             lea ecx, [esp + 0x14]
// 008119e9  ff15082ea400         call dword ptr [0xa42e08]
// 008119ef  8bc6                 mov eax, esi
// 008119f1  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 008119f5  64890d00000000       mov dword ptr fs:[0], ecx
// 008119fc  59                   pop ecx
// 008119fd  5f                   pop edi
// 008119fe  5e                   pop esi
// 008119ff  5d                   pop ebp
// 00811a00  5b                   pop ebx
// 00811a01  83c428               add esp, 0x28
// 00811a04  c22c00               ret 0x2c
// copied from an identical function in another client (function ?DrawControlText@CXTPPaintManager@@QAE?AVCSize@@PAVCDC@@PAVCXTPControl@@VCRect@@HHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPPaintManager.cpp