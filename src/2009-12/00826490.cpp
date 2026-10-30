// roc 2009-12 00826490  unit: CXTPReportControl  size: 1045 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00826490
//
// 00826490  83ec14               sub esp, 0x14
// 00826493  53                   push ebx
// 00826494  55                   push ebp
// 00826495  56                   push esi
// 00826496  57                   push edi
// 00826497  8bf1                 mov esi, ecx
// 00826499  e892d9fcff           call 0x7f3e30
// 0082649e  8b3d30cc9800         mov edi, dword ptr [0x98cc30]
// 008264a4  6a10                 push 0x10
// 008264a6  ffd7                 call edi
// 008264a8  33db                 xor ebx, ebx
// 008264aa  6685c0               test ax, ax
// 008264ad  6a11                 push 0x11
// 008264af  0f9cc3               setl bl
// 008264b2  ffd7                 call edi
// 008264b4  33c9                 xor ecx, ecx
// 008264b6  6685c0               test ax, ax
// 008264b9  0f9cc1               setl cl
// 008264bc  8be9                 mov ebp, ecx
// 008264be  8bce                 mov ecx, esi
// 008264c0  e89b80ffff           call 0x81e560
// 008264c5  8d542428             lea edx, [esp + 0x28]
// 008264c9  52                   push edx
// 008264ca  56                   push esi
// 008264cb  8bf8                 mov edi, eax
// 008264cd  e88e5c0200           call 0x84c160
// 008264d2  8b8ee0000000         mov ecx, dword ptr [esi + 0xe0]
// 008264d8  83c408               add esp, 8
// 008264db  e840670000           call 0x82cc20
// 008264e0  85c0                 test eax, eax
// 008264e2  0f84f2020000         je 0x8267da
// 008264e8  8b442428             mov eax, dword ptr [esp + 0x28]
// 008264ec  83c0f3               add eax, -0xd
// 008264ef  83f864               cmp eax, 0x64
// 008264f2  0f87e2020000         ja 0x8267da
// 008264f8  0fb68040688200       movzx eax, byte ptr [eax + 0x826840]
// 008264ff  ff248504688200       jmp dword ptr [eax*4 + 0x826804]
// 00826506  85ed                 test ebp, ebp
// 00826508  740c                 je 0x826516
// 0082650a  8bce                 mov ecx, esi
// 0082650c  e8cfceffff           call 0x8233e0
// 00826511  e9c4020000           jmp 0x8267da
// 00826516  85ff                 test edi, edi
// 00826518  0f84bc020000         je 0x8267da
// 0082651e  8b17                 mov edx, dword ptr [edi]
// 00826520  8b82c0000000         mov eax, dword ptr [edx + 0xc0]
// 00826526  8bcf                 mov ecx, edi
// 00826528  ffd0                 call eax
// 0082652a  85c0                 test eax, eax
// 0082652c  0f84a8020000         je 0x8267da
// 00826532  8b17                 mov edx, dword ptr [edi]
// 00826534  8b4278               mov eax, dword ptr [edx + 0x78]
// 00826537  8bcf                 mov ecx, edi
// 00826539  ffd0                 call eax
// 0082653b  85c0                 test eax, eax
// 0082653d  0f8597020000         jne 0x8267da
// 00826543  8b17                 mov edx, dword ptr [edi]
// 00826545  8b427c               mov eax, dword ptr [edx + 0x7c]
// 00826548  6a01                 push 1
// 0082654a  8bcf                 mov ecx, edi
// 0082654c  ffd0                 call eax
// 0082654e  e987020000           jmp 0x8267da
// 00826553  85ed                 test ebp, ebp
// 00826555  740c                 je 0x826563
// 00826557  8bce                 mov ecx, esi
// 00826559  e822ceffff           call 0x823380
// 0082655e  e977020000           jmp 0x8267da
// 00826563  85ff                 test edi, edi
// 00826565  0f846f020000         je 0x8267da
// 0082656b  8b17                 mov edx, dword ptr [edi]
// 0082656d  8b82c0000000         mov eax, dword ptr [edx + 0xc0]
// 00826573  8bcf                 mov ecx, edi
// 00826575  ffd0                 call eax
// 00826577  85c0                 test eax, eax
// 00826579  0f845b020000         je 0x8267da
// 0082657f  8b17                 mov edx, dword ptr [edi]
// 00826581  8b4278               mov eax, dword ptr [edx + 0x78]
// 00826584  8bcf                 mov ecx, edi
// 00826586  ffd0                 call eax
// 00826588  85c0                 test eax, eax
// 0082658a  0f844a020000         je 0x8267da
// 00826590  8b17                 mov edx, dword ptr [edi]
// 00826592  8b427c               mov eax, dword ptr [edx + 0x7c]
// 00826595  6a00                 push 0
// 00826597  8bcf                 mov ecx, edi
// 00826599  ffd0                 call eax
// 0082659b  e93a020000           jmp 0x8267da
// 008265a0  85ff                 test edi, edi
// 008265a2  746b                 je 0x82660f
// 008265a4  8b17                 mov edx, dword ptr [edi]
// 008265a6  8b82c0000000         mov eax, dword ptr [edx + 0xc0]
// 008265ac  8bcf                 mov ecx, edi
// 008265ae  ffd0                 call eax
// 008265b0  85c0                 test eax, eax
// 008265b2  740d                 je 0x8265c1
// 008265b4  8b17                 mov edx, dword ptr [edi]
// 008265b6  8b4278               mov eax, dword ptr [edx + 0x78]
// 008265b9  8bcf                 mov ecx, edi
// 008265bb  ffd0                 call eax
// 008265bd  85c0                 test eax, eax
// 008265bf  7482                 je 0x826543
// 008265c1  83bed801000000       cmp dword ptr [esi + 0x1d8], 0
// 008265c8  7445                 je 0x82660f
// 008265ca  8b8e18020000         mov ecx, dword ptr [esi + 0x218]
// 008265d0  85c9                 test ecx, ecx
// 008265d2  743b                 je 0x82660f
// 008265d4  8b1e                 mov ebx, dword ptr [esi]
// 008265d6  6a01                 push 1
// 008265d8  e8a3160000           call 0x827c80
// 008265dd  8b9360020000         mov edx, dword ptr [ebx + 0x260]
// 008265e3  50                   push eax
// 008265e4  57                   push edi
// 008265e5  8bce                 mov ecx, esi
// 008265e7  ffd2                 call edx
// 008265e9  85c0                 test eax, eax
// 008265eb  0f84e9010000         je 0x8267da
// 008265f1  50                   push eax
// 008265f2  8bce                 mov ecx, esi
// 008265f4  e82794ffff           call 0x81fa20
// 008265f9  6a00                 push 0
// 008265fb  8bce                 mov ecx, esi
// 008265fd  e85e7fffff           call 0x81e560
// 00826602  50                   push eax
// 00826603  8bce                 mov ecx, esi
// 00826605  e896f3ffff           call 0x8259a0
// 0082660a  e9cb010000           jmp 0x8267da
// 0082660f  8b8e04010000         mov ecx, dword ptr [esi + 0x104]
// 00826615  55                   push ebp
// 00826616  53                   push ebx
// 00826617  e8e4010800           call 0x8a6800
// 0082661c  e9b9010000           jmp 0x8267da
// 00826621  85ff                 test edi, edi
// 00826623  0f84c3000000         je 0x8266ec
// 00826629  8b07                 mov eax, dword ptr [edi]
// 0082662b  8b90c0000000         mov edx, dword ptr [eax + 0xc0]
// 00826631  8bcf                 mov ecx, edi
// 00826633  ffd2                 call edx
// 00826635  85c0                 test eax, eax
// 00826637  741d                 je 0x826656
// 00826639  8b07                 mov eax, dword ptr [edi]
// 0082663b  8b5078               mov edx, dword ptr [eax + 0x78]
// 0082663e  8bcf                 mov ecx, edi
// 00826640  ffd2                 call edx
// 00826642  85c0                 test eax, eax
// 00826644  7410                 je 0x826656
// 00826646  8b07                 mov eax, dword ptr [edi]
// 00826648  8b507c               mov edx, dword ptr [eax + 0x7c]
// 0082664b  6a00                 push 0
// 0082664d  8bcf                 mov ecx, edi
// 0082664f  ffd2                 call edx
// 00826651  e984010000           jmp 0x8267da
// 00826656  83bed801000000       cmp dword ptr [esi + 0x1d8], 0
// 0082665d  7445                 je 0x8266a4
// 0082665f  8b8e18020000         mov ecx, dword ptr [esi + 0x218]
// 00826665  85c9                 test ecx, ecx
// 00826667  743b                 je 0x8266a4
// 00826669  8b1e                 mov ebx, dword ptr [esi]
// 0082666b  6aff                 push -1
// 0082666d  e80e160000           call 0x827c80
// 00826672  50                   push eax
// 00826673  8b8360020000         mov eax, dword ptr [ebx + 0x260]
// 00826679  57                   push edi
// 0082667a  8bce                 mov ecx, esi
// 0082667c  ffd0                 call eax
// 0082667e  85c0                 test eax, eax
// 00826680  0f8454010000         je 0x8267da
// 00826686  50                   push eax
// 00826687  8bce                 mov ecx, esi
// 00826689  e89293ffff           call 0x81fa20
// 0082668e  6a00                 push 0
// 00826690  8bce                 mov ecx, esi
// 00826692  e8c97effff           call 0x81e560
// 00826697  50                   push eax
// 00826698  8bce                 mov ecx, esi
// 0082669a  e801f3ffff           call 0x8259a0
// 0082669f  e936010000           jmp 0x8267da
// 008266a4  8b17                 mov edx, dword ptr [edi]
// 008266a6  8b82c0000000         mov eax, dword ptr [edx + 0xc0]
// 008266ac  8bcf                 mov ecx, edi
// 008266ae  ffd0                 call eax
// 008266b0  85c0                 test eax, eax
// 008266b2  7538                 jne 0x8266ec
// 008266b4  8b17                 mov edx, dword ptr [edi]
// 008266b6  8b82a8000000         mov eax, dword ptr [edx + 0xa8]
// 008266bc  8bcf                 mov ecx, edi
// 008266be  ffd0                 call eax
// 008266c0  85c0                 test eax, eax
// 008266c2  7428                 je 0x8266ec
// 008266c4  85db                 test ebx, ebx
// 008266c6  7524                 jne 0x8266ec
// 008266c8  8b17                 mov edx, dword ptr [edi]
// 008266ca  8b82a8000000         mov eax, dword ptr [edx + 0xa8]
// 008266d0  53                   push ebx
// 008266d1  8bcf                 mov ecx, edi
// 008266d3  ffd0                 call eax
// 008266d5  50                   push eax
// 008266d6  8bce                 mov ecx, esi
// 008266d8  e8c3f2ffff           call 0x8259a0
// 008266dd  8b17                 mov edx, dword ptr [edi]
// 008266df  8b427c               mov eax, dword ptr [edx + 0x7c]
// 008266e2  53                   push ebx
// 008266e3  8bcf                 mov ecx, edi
// 008266e5  ffd0                 call eax
// 008266e7  e9ee000000           jmp 0x8267da
// 008266ec  8b8e04010000         mov ecx, dword ptr [esi + 0x104]
// 008266f2  55                   push ebp
// 008266f3  53                   push ebx
// 008266f4  e807020800           call 0x8a6900
// 008266f9  e9dc000000           jmp 0x8267da
// 008266fe  8b8e04010000         mov ecx, dword ptr [esi + 0x104]
// 00826704  6a00                 push 0
// 00826706  53                   push ebx
// 00826707  e8f4fd0700           call 0x8a6500
// 0082670c  e9c9000000           jmp 0x8267da
// 00826711  8b8e04010000         mov ecx, dword ptr [esi + 0x104]
// 00826717  6a00                 push 0
// 00826719  53                   push ebx
// 0082671a  e821fe0700           call 0x8a6540
// 0082671f  e9b6000000           jmp 0x8267da
// 00826724  8b8e04010000         mov ecx, dword ptr [esi + 0x104]
// 0082672a  6a00                 push 0
// 0082672c  53                   push ebx
// 0082672d  e8defc0700           call 0x8a6410
// 00826732  e9a3000000           jmp 0x8267da
// 00826737  8b8e04010000         mov ecx, dword ptr [esi + 0x104]
// 0082673d  6a00                 push 0
// 0082673f  53                   push ebx
// 00826740  e84bfd0700           call 0x8a6490
// 00826745  e990000000           jmp 0x8267da
// 0082674a  85ff                 test edi, edi
// 0082674c  0f8488000000         je 0x8267da
// 00826752  8b17                 mov edx, dword ptr [edi]
// 00826754  8b82c0000000         mov eax, dword ptr [edx + 0xc0]
// 0082675a  8bcf                 mov ecx, edi
// 0082675c  ffd0                 call eax
// 0082675e  85c0                 test eax, eax
// 00826760  7478                 je 0x8267da
// 00826762  8b1f                 mov ebx, dword ptr [edi]
// 00826764  8b5378               mov edx, dword ptr [ebx + 0x78]
// 00826767  8bcf                 mov ecx, edi
// 00826769  ffd2                 call edx
// 0082676b  f7d8                 neg eax
// 0082676d  1bc0                 sbb eax, eax
// 0082676f  40                   inc eax
// 00826770  50                   push eax
// 00826771  8b437c               mov eax, dword ptr [ebx + 0x7c]
// 00826774  8bcf                 mov ecx, edi
// 00826776  ffd0                 call eax
// 00826778  eb60                 jmp 0x8267da
// 0082677a  83bec001000000       cmp dword ptr [esi + 0x1c0], 0
// 00826781  7457                 je 0x8267da
// 00826783  8b8e88020000         mov ecx, dword ptr [esi + 0x288]
// 00826789  e8b2350000           call 0x829d40
// 0082678e  eb4a                 jmp 0x8267da
// 00826790  8b8e04010000         mov ecx, dword ptr [esi + 0x104]
// 00826796  e865020800           call 0x8a6a00
// 0082679b  eb3d                 jmp 0x8267da
// 0082679d  83be0002000000       cmp dword ptr [esi + 0x200], 0
// 008267a4  7434                 je 0x8267da
// 008267a6  85ed                 test ebp, ebp
// 008267a8  7430                 je 0x8267da
// 008267aa  85ff                 test edi, edi
// 008267ac  742c                 je 0x8267da
// 008267ae  8b17                 mov edx, dword ptr [edi]
// 008267b0  8b4274               mov eax, dword ptr [edx + 0x74]
// 008267b3  8bcf                 mov ecx, edi
// 008267b5  ffd0                 call eax
// 008267b7  8b8e28010000         mov ecx, dword ptr [esi + 0x128]
// 008267bd  57                   push edi
// 008267be  85c0                 test eax, eax
// 008267c0  7407                 je 0x8267c9
// 008267c2  e819800000           call 0x82e7e0
// 008267c7  eb05                 jmp 0x8267ce
// 008267c9  e8e27f0000           call 0x82e7b0
// 008267ce  8b16                 mov edx, dword ptr [esi]
// 008267d0  8b82dc010000         mov eax, dword ptr [edx + 0x1dc]
// 008267d6  8bce                 mov ecx, esi
// 008267d8  ffd0                 call eax
// 008267da  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008267de  8b542430             mov edx, dword ptr [esp + 0x30]
// 008267e2  8d442410             lea eax, [esp + 0x10]
// 008267e6  50                   push eax
// 008267e7  894c2420             mov dword ptr [esp + 0x20], ecx
// 008267eb  6af1                 push -0xf
// 008267ed  8bce                 mov ecx, esi
// 008267ef  89542428             mov dword ptr [esp + 0x28], edx
// 008267f3  e878caffff           call 0x823270
// 008267f8  5f                   pop edi
// 008267f9  5e                   pop esi
// 008267fa  5d                   pop ebp
// 008267fb  5b                   pop ebx
// 008267fc  83c414               add esp, 0x14
// 008267ff  c20c00               ret 0xc
// 00826802  8bff                 mov edi, edi
// 00826804  4a                   dec edx
// 00826805  6782007a             add byte ptr [bx + si], 0x7a
// 00826809  6782009d             add byte ptr [bx + si], 0x9d
// 0082680d  67820037             add byte ptr [bx + si], 0x37
// 00826811  67820024             add byte ptr [bx + si], 0x24
// 00826815  67820011             add byte ptr [bx + si], 0x11
// 00826819  678200fe             add byte ptr [bx + si], 0xfe
// 0082681d  66820021             add byte ptr [eax], 0x21
// 00826821  668200ec             add byte ptr [eax], 0xec
// 00826825  668200a0             add byte ptr [eax], 0xa0
// 00826829  6582000f             add byte ptr gs:[eax], 0xf
// 0082682d  66820006             add byte ptr [eax], 6
// 00826831  65820053             add byte ptr gs:[eax], 0x53
// 00826835  65820090             add byte ptr gs:[eax], 0x90
// 00826839  678200da             add byte ptr [bx + si], 0xda
// 0082683d  67820000             add byte ptr [bx + si], 0
// 00826841  0e                   push cs
// 00826842  0e                   push cs
// 00826843  0e                   push cs
// 00826844  0e                   push cs
// 00826845  0e                   push cs
// 00826846  0e                   push cs
// 00826847  0e                   push cs
// 00826848  0e                   push cs
// 00826849  0e                   push cs
// 0082684a  0e                   push cs
// 0082684b  0e                   push cs
// 0082684c  0e                   push cs
// 0082684d  0e                   push cs
// 0082684e  010e                 add dword ptr [esi], ecx
// 00826850  0e                   push cs
// 00826851  0e                   push cs
// 00826852  0e                   push cs
// 00826853  0203                 add al, byte ptr [ebx]
// 00826855  0405                 add al, 5
// 00826857  06                   push es
// 00826858  07                   pop es
// 00826859  0809                 or byte ptr [ecx], cl
// 0082685b  0a0e                 or cl, byte ptr [esi]
// 0082685d  0e                   push cs
// 0082685e  0e                   push cs
// 0082685f  0e                   push cs
// 00826860  0e                   push cs
// 00826861  0e                   push cs
// 00826862  0e                   push cs
// 00826863  0e                   push cs
// 00826864  0e                   push cs
// 00826865  0e                   push cs
// 00826866  0e                   push cs
// 00826867  0e                   push cs
// 00826868  0e                   push cs
// 00826869  0e                   push cs
// 0082686a  0e                   push cs
// 0082686b  0e                   push cs
// 0082686c  0e                   push cs
// 0082686d  0e                   push cs
// 0082686e  0e                   push cs
// 0082686f  0e                   push cs
// 00826870  0e                   push cs
// 00826871  0e                   push cs
// 00826872  0e                   push cs
// 00826873  0e                   push cs
// 00826874  0e                   push cs
// 00826875  0e                   push cs
// 00826876  0e                   push cs
// 00826877  0e                   push cs
// 00826878  0e                   push cs
// 00826879  0e                   push cs
// 0082687a  0e                   push cs
// 0082687b  0e                   push cs
// 0082687c  0e                   push cs
// 0082687d  0e                   push cs
// 0082687e  0e                   push cs
// 0082687f  0e                   push cs
// 00826880  0e                   push cs
// 00826881  0e                   push cs
// 00826882  0e                   push cs
// 00826883  0e                   push cs
// 00826884  0e                   push cs
// 00826885  0e                   push cs
// 00826886  0e                   push cs
// 00826887  0e                   push cs
// 00826888  0e                   push cs
// 00826889  0e                   push cs
// 0082688a  0e                   push cs
// 0082688b  0e                   push cs
// 0082688c  0e                   push cs
// 0082688d  0e                   push cs
// 0082688e  0e                   push cs
// 0082688f  0e                   push cs
// 00826890  0e                   push cs
// 00826891  0e                   push cs
// 00826892  0e                   push cs
// 00826893  0e                   push cs
// 00826894  0e                   push cs
// 00826895  0e                   push cs
// 00826896  0e                   push cs
// 00826897  0e                   push cs
// 00826898  0e                   push cs
// 00826899  0e                   push cs
// 0082689a  0e                   push cs
// 0082689b  0e                   push cs
// 0082689c  0e                   push cs
// 0082689d  0e                   push cs
// 0082689e  0b0e                 or ecx, dword ptr [esi]
// 008268a0  0c0e                 or al, 0xe
// 008268a2  0e                   push cs
// 008268a3  0e                   push cs
// copied from an identical function in another client (function ?OnKeyDown@CXTPReportControl@@IAEXIII@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportControl.cpp