// roc 2009-12 00888610  unit: XTPPaintThemes::CXTPOfficeTheme  size: 961 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00888610
//
// 00888610  83ec48               sub esp, 0x48
// 00888613  53                   push ebx
// 00888614  8b5c245c             mov ebx, dword ptr [esp + 0x5c]
// 00888618  55                   push ebp
// 00888619  56                   push esi
// 0088861a  57                   push edi
// 0088861b  8bf9                 mov edi, ecx
// 0088861d  85db                 test ebx, ebx
// 0088861f  7523                 jne 0x888644
// 00888621  8b442464             mov eax, dword ptr [esp + 0x64]
// 00888625  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 00888629  8b74245c             mov esi, dword ptr [esp + 0x5c]
// 0088862d  53                   push ebx
// 0088862e  50                   push eax
// 0088862f  51                   push ecx
// 00888630  56                   push esi
// 00888631  8bcf                 mov ecx, edi
// 00888633  e8c878f7ff           call 0x7fff00
// 00888638  8bc6                 mov eax, esi
// 0088863a  5f                   pop edi
// 0088863b  5e                   pop esi
// 0088863c  5d                   pop ebp
// 0088863d  5b                   pop ebx
// 0088863e  83c448               add esp, 0x48
// 00888641  c21000               ret 0x10
// 00888644  8b742464             mov esi, dword ptr [esp + 0x64]
// 00888648  8b9600010000         mov edx, dword ptr [esi + 0x100]
// 0088864e  33c0                 xor eax, eax
// 00888650  83baf800000002       cmp dword ptr [edx + 0xf8], 2
// 00888657  8b16                 mov edx, dword ptr [esi]
// 00888659  0f94c0               sete al
// 0088865c  8bce                 mov ecx, esi
// 0088865e  89442410             mov dword ptr [esp + 0x10], eax
// 00888662  8b426c               mov eax, dword ptr [edx + 0x6c]
// 00888665  ffd0                 call eax
// 00888667  89442468             mov dword ptr [esp + 0x68], eax
// 0088866b  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 00888671  83f8ff               cmp eax, -1
// 00888674  750f                 jne 0x888685
// 00888676  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 0088867c  85c9                 test ecx, ecx
// 0088867e  7405                 je 0x888685
// 00888680  e82bdff6ff           call 0x7f65b0
// 00888685  53                   push ebx
// 00888686  8b5c2464             mov ebx, dword ptr [esp + 0x64]
// 0088868a  56                   push esi
// 0088868b  53                   push ebx
// 0088868c  8d4c2424             lea ecx, [esp + 0x24]
// 00888690  51                   push ecx
// 00888691  8bcf                 mov ecx, edi
// 00888693  89442474             mov dword ptr [esp + 0x74], eax
// 00888697  e86478f7ff           call 0x7fff00
// 0088869c  8b8ec0000000         mov ecx, dword ptr [esi + 0xc0]
// 008886a2  038e80010000         add ecx, dword ptr [esi + 0x180]
// 008886a8  837c246400           cmp dword ptr [esp + 0x64], 0
// 008886ad  8baec4000000         mov ebp, dword ptr [esi + 0xc4]
// 008886b3  8b96c8000000         mov edx, dword ptr [esi + 0xc8]
// 008886b9  8b86cc000000         mov eax, dword ptr [esi + 0xcc]
// 008886bf  896c241c             mov dword ptr [esp + 0x1c], ebp
// 008886c3  89542420             mov dword ptr [esp + 0x20], edx
// 008886c7  89442424             mov dword ptr [esp + 0x24], eax
// 008886cb  894c2418             mov dword ptr [esp + 0x18], ecx
// 008886cf  754e                 jne 0x88871f
// 008886d1  8b442468             mov eax, dword ptr [esp + 0x68]
// 008886d5  41                   inc ecx
// 008886d6  83f802               cmp eax, 2
// 008886d9  7409                 je 0x8886e4
// 008886db  83f803               cmp eax, 3
// 008886de  7404                 je 0x8886e4
// 008886e0  33c0                 xor eax, eax
// 008886e2  eb05                 jmp 0x8886e9
// 008886e4  b801000000           mov eax, 1
// 008886e9  33d2                 xor edx, edx
// 008886eb  85c0                 test eax, eax
// 008886ed  0f94c2               sete dl
// 008886f0  6a0f                 push 0xf
// 008886f2  8d14d520000000       lea edx, [edx*8 + 0x20]
// 008886f9  52                   push edx
// 008886fa  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 008886fe  83ec10               sub esp, 0x10
// 00888701  8bc4                 mov eax, esp
// 00888703  8908                 mov dword ptr [eax], ecx
// 00888705  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00888709  896804               mov dword ptr [eax + 4], ebp
// 0088870c  894808               mov dword ptr [eax + 8], ecx
// 0088870f  53                   push ebx
// 00888710  8bcf                 mov ecx, edi
// 00888712  89500c               mov dword ptr [eax + 0xc], edx
// 00888715  e84660f7ff           call 0x7fe760
// 0088871a  e99a000000           jmp 0x8887b9
// 0088871f  8baeac010000         mov ebp, dword ptr [esi + 0x1ac]
// 00888725  6a05                 push 5
// 00888727  8bcf                 mov ecx, edi
// 00888729  e8124ff7ff           call 0x7fd640
// 0088872e  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00888732  8b542420             mov edx, dword ptr [esp + 0x20]
// 00888736  50                   push eax
// 00888737  8b442420             mov eax, dword ptr [esp + 0x20]
// 0088873b  2bc8                 sub ecx, eax
// 0088873d  83e902               sub ecx, 2
// 00888740  f7dd                 neg ebp
// 00888742  1bed                 sbb ebp, ebp
// 00888744  83e510               and ebp, 0x10
// 00888747  83c502               add ebp, 2
// 0088874a  2bd5                 sub edx, ebp
// 0088874c  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 00888750  51                   push ecx
// 00888751  2bd5                 sub edx, ebp
// 00888753  52                   push edx
// 00888754  40                   inc eax
// 00888755  50                   push eax
// 00888756  8d4501               lea eax, [ebp + 1]
// 00888759  50                   push eax
// 0088875a  8bcb                 mov ecx, ebx
// 0088875c  e835dd0900           call 0x926496
// 00888761  837c246800           cmp dword ptr [esp + 0x68], 0
// 00888766  7422                 je 0x88878a
// 00888768  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0088876c  8b542420             mov edx, dword ptr [esp + 0x20]
// 00888770  6a20                 push 0x20
// 00888772  6a20                 push 0x20
// 00888774  83ec10               sub esp, 0x10
// 00888777  8bc4                 mov eax, esp
// 00888779  8928                 mov dword ptr [eax], ebp
// 0088877b  894804               mov dword ptr [eax + 4], ecx
// 0088877e  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00888782  895008               mov dword ptr [eax + 8], edx
// 00888785  89480c               mov dword ptr [eax + 0xc], ecx
// 00888788  eb27                 jmp 0x8887b1
// 0088878a  837c241000           cmp dword ptr [esp + 0x10], 0
// 0088878f  7428                 je 0x8887b9
// 00888791  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00888795  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00888799  6a35                 push 0x35
// 0088879b  6a35                 push 0x35
// 0088879d  83ec10               sub esp, 0x10
// 008887a0  8bc4                 mov eax, esp
// 008887a2  8928                 mov dword ptr [eax], ebp
// 008887a4  895004               mov dword ptr [eax + 4], edx
// 008887a7  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 008887ab  894808               mov dword ptr [eax + 8], ecx
// 008887ae  89500c               mov dword ptr [eax + 0xc], edx
// 008887b1  53                   push ebx
// 008887b2  8bcf                 mov ecx, edi
// 008887b4  e88750f7ff           call 0x7fd840
// 008887b9  83beac01000000       cmp dword ptr [esi + 0x1ac], 0
// 008887c0  0f84f0010000         je 0x8889b6
// 008887c6  8b06                 mov eax, dword ptr [esi]
// 008887c8  8b5078               mov edx, dword ptr [eax + 0x78]
// 008887cb  8bce                 mov ecx, esi
// 008887cd  ffd2                 call edx
// 008887cf  89442460             mov dword ptr [esp + 0x60], eax
// 008887d3  8d442428             lea eax, [esp + 0x28]
// 008887d7  50                   push eax
// 008887d8  8bce                 mov ecx, esi
// 008887da  e831310000           call 0x88b910
// 008887df  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 008887e3  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008887e7  8b742428             mov esi, dword ptr [esp + 0x28]
// 008887eb  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 008887ef  8944243c             mov dword ptr [esp + 0x3c], eax
// 008887f3  03c1                 add eax, ecx
// 008887f5  99                   cdq 
// 008887f6  2bc2                 sub eax, edx
// 008887f8  8b542434             mov edx, dword ptr [esp + 0x34]
// 008887fc  8bc8                 mov ecx, eax
// 008887fe  d1f9                 sar ecx, 1
// 00888800  837c246400           cmp dword ptr [esp + 0x64], 0
// 00888805  89742438             mov dword ptr [esp + 0x38], esi
// 00888809  896c2440             mov dword ptr [esp + 0x40], ebp
// 0088880d  894c2444             mov dword ptr [esp + 0x44], ecx
// 00888811  89742448             mov dword ptr [esp + 0x48], esi
// 00888815  894c244c             mov dword ptr [esp + 0x4c], ecx
// 00888819  896c2450             mov dword ptr [esp + 0x50], ebp
// 0088881d  89542454             mov dword ptr [esp + 0x54], edx
// 00888821  0f84c5000000         je 0x8888ec
// 00888827  837c246800           cmp dword ptr [esp + 0x68], 0
// 0088882c  8bcf                 mov ecx, edi
// 0088882e  7523                 jne 0x888853
// 00888830  6a05                 push 5
// 00888832  e8094ef7ff           call 0x7fd640
// 00888837  50                   push eax
// 00888838  6a05                 push 5
// 0088883a  8bcf                 mov ecx, edi
// 0088883c  e8ff4df7ff           call 0x7fd640
// 00888841  50                   push eax
// 00888842  8d442430             lea eax, [esp + 0x30]
// 00888846  50                   push eax
// 00888847  8bcb                 mov ecx, ebx
// 00888849  e8aabdf6ff           call 0x7f45f8
// 0088884e  e995000000           jmp 0x8888e8
// 00888853  6a1f                 push 0x1f
// 00888855  e8e64df7ff           call 0x7fd640
// 0088885a  50                   push eax
// 0088885b  8d4c242c             lea ecx, [esp + 0x2c]
// 0088885f  51                   push ecx
// 00888860  8bcb                 mov ecx, ebx
// 00888862  e897bdf6ff           call 0x7f45fe
// 00888867  8b442460             mov eax, dword ptr [esp + 0x60]
// 0088886b  83f803               cmp eax, 3
// 0088886e  7511                 jne 0x888881
// 00888870  6a21                 push 0x21
// 00888872  8bcf                 mov ecx, edi
// 00888874  e8c74df7ff           call 0x7fd640
// 00888879  50                   push eax
// 0088887a  8d54243c             lea edx, [esp + 0x3c]
// 0088887e  52                   push edx
// 0088887f  eb14                 jmp 0x888895
// 00888881  83f804               cmp eax, 4
// 00888884  7516                 jne 0x88889c
// 00888886  6a21                 push 0x21
// 00888888  8bcf                 mov ecx, edi
// 0088888a  e8b14df7ff           call 0x7fd640
// 0088888f  50                   push eax
// 00888890  8d44244c             lea eax, [esp + 0x4c]
// 00888894  50                   push eax
// 00888895  8bcb                 mov ecx, ebx
// 00888897  e862bdf6ff           call 0x7f45fe
// 0088889c  8b742434             mov esi, dword ptr [esp + 0x34]
// 008888a0  2b74242c             sub esi, dword ptr [esp + 0x2c]
// 008888a4  6a20                 push 0x20
// 008888a6  8bcf                 mov ecx, edi
// 008888a8  e8934df7ff           call 0x7fd640
// 008888ad  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 008888b1  8b542428             mov edx, dword ptr [esp + 0x28]
// 008888b5  50                   push eax
// 008888b6  56                   push esi
// 008888b7  6a01                 push 1
// 008888b9  51                   push ecx
// 008888ba  52                   push edx
// 008888bb  8bcb                 mov ecx, ebx
// 008888bd  e8d4db0900           call 0x926496
// 008888c2  8b742430             mov esi, dword ptr [esp + 0x30]
// 008888c6  2b742428             sub esi, dword ptr [esp + 0x28]
// 008888ca  6a20                 push 0x20
// 008888cc  8bcf                 mov ecx, edi
// 008888ce  e86d4df7ff           call 0x7fd640
// 008888d3  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008888d7  50                   push eax
// 008888d8  8b442450             mov eax, dword ptr [esp + 0x50]
// 008888dc  6a01                 push 1
// 008888de  56                   push esi
// 008888df  50                   push eax
// 008888e0  51                   push ecx
// 008888e1  8bcb                 mov ecx, ebx
// 008888e3  e8aedb0900           call 0x926496
// 008888e8  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 008888ec  8b542440             mov edx, dword ptr [esp + 0x40]
// 008888f0  8b442438             mov eax, dword ptr [esp + 0x38]
// 008888f4  03c2                 add eax, edx
// 008888f6  99                   cdq 
// 008888f7  2bc2                 sub eax, edx
// 008888f9  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 008888fd  8bf0                 mov esi, eax
// 008888ff  8d040a               lea eax, [edx + ecx]
// 00888902  99                   cdq 
// 00888903  2bc2                 sub eax, edx
// 00888905  8be8                 mov ebp, eax
// 00888907  d1fe                 sar esi, 1
// 00888909  8d4602               lea eax, [esi + 2]
// 0088890c  89442410             mov dword ptr [esp + 0x10], eax
// 00888910  33c0                 xor eax, eax
// 00888912  d1fd                 sar ebp, 1
// 00888914  39442464             cmp dword ptr [esp + 0x64], eax
// 00888918  8d4d02               lea ecx, [ebp + 2]
// 0088891b  0f95c0               setne al
// 0088891e  894c2460             mov dword ptr [esp + 0x60], ecx
// 00888922  8d56fe               lea edx, [esi - 2]
// 00888925  8bcf                 mov ecx, edi
// 00888927  89542418             mov dword ptr [esp + 0x18], edx
// 0088892b  83c011               add eax, 0x11
// 0088892e  50                   push eax
// 0088892f  89442468             mov dword ptr [esp + 0x68], eax
// 00888933  e8084df7ff           call 0x7fd640
// 00888938  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0088893c  8b542418             mov edx, dword ptr [esp + 0x18]
// 00888940  50                   push eax
// 00888941  8b442464             mov eax, dword ptr [esp + 0x64]
// 00888945  50                   push eax
// 00888946  51                   push ecx
// 00888947  50                   push eax
// 00888948  52                   push edx
// 00888949  55                   push ebp
// 0088894a  56                   push esi
// 0088894b  53                   push ebx
// 0088894c  e83f5df7ff           call 0x7fe690
// 00888951  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 00888955  8b442468             mov eax, dword ptr [esp + 0x68]
// 00888959  03c1                 add eax, ecx
// 0088895b  99                   cdq 
// 0088895c  2bc2                 sub eax, edx
// 0088895e  8b54246c             mov edx, dword ptr [esp + 0x6c]
// 00888962  8bf0                 mov esi, eax
// 00888964  8b442474             mov eax, dword ptr [esp + 0x74]
// 00888968  03c2                 add eax, edx
// 0088896a  99                   cdq 
// 0088896b  2bc2                 sub eax, edx
// 0088896d  d1fe                 sar esi, 1
// 0088896f  8be8                 mov ebp, eax
// 00888971  8d4e02               lea ecx, [esi + 2]
// 00888974  894c2438             mov dword ptr [esp + 0x38], ecx
// 00888978  8b8c2484000000       mov ecx, dword ptr [esp + 0x84]
// 0088897f  83c420               add esp, 0x20
// 00888982  d1fd                 sar ebp, 1
// 00888984  8d55fe               lea edx, [ebp - 2]
// 00888987  8d46fe               lea eax, [esi - 2]
// 0088898a  51                   push ecx
// 0088898b  8bcf                 mov ecx, edi
// 0088898d  89542464             mov dword ptr [esp + 0x64], edx
// 00888991  89442414             mov dword ptr [esp + 0x14], eax
// 00888995  e8a64cf7ff           call 0x7fd640
// 0088899a  8b542418             mov edx, dword ptr [esp + 0x18]
// 0088899e  50                   push eax
// 0088899f  8b442464             mov eax, dword ptr [esp + 0x64]
// 008889a3  50                   push eax
// 008889a4  52                   push edx
// 008889a5  50                   push eax
// 008889a6  8b442420             mov eax, dword ptr [esp + 0x20]
// 008889aa  50                   push eax
// 008889ab  55                   push ebp
// 008889ac  56                   push esi
// 008889ad  53                   push ebx
// 008889ae  e8dd5cf7ff           call 0x7fe690
// 008889b3  83c420               add esp, 0x20
// 008889b6  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 008889ba  5f                   pop edi
// 008889bb  5e                   pop esi
// 008889bc  5d                   pop ebp
// 008889bd  c70000000000         mov dword ptr [eax], 0
// 008889c3  c7400400000000       mov dword ptr [eax + 4], 0
// 008889ca  5b                   pop ebx
// 008889cb  83c448               add esp, 0x48
// 008889ce  c21000               ret 0x10
// copied from an identical function in another client (function ?DrawControlEdit@CXTPOfficeTheme@XTPPaintThemes@@MAE?AVCSize@@PAVCDC@@PAVCXTPControlEdit@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPOfficeTheme.cpp