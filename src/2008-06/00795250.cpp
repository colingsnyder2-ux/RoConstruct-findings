// roc 2008-06 00795250  unit: CXTPRibbonGroup  size: 507 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00795250
//
// 00795250  83ec2c               sub esp, 0x2c
// 00795253  53                   push ebx
// 00795254  8bd9                 mov ebx, ecx
// 00795256  837b7000             cmp dword ptr [ebx + 0x70], 0
// 0079525a  895c241c             mov dword ptr [esp + 0x1c], ebx
// 0079525e  7437                 je 0x795297
// 00795260  8b542434             mov edx, dword ptr [esp + 0x34]
// 00795264  8b4b6c               mov ecx, dword ptr [ebx + 0x6c]
// 00795267  8b01                 mov eax, dword ptr [ecx]
// 00795269  8b809c000000         mov eax, dword ptr [eax + 0x9c]
// 0079526f  52                   push edx
// 00795270  8d542424             lea edx, [esp + 0x24]
// 00795274  52                   push edx
// 00795275  ffd0                 call eax
// 00795277  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0079527b  8b9380000000         mov edx, dword ptr [ebx + 0x80]
// 00795281  83c1fb               add ecx, -5
// 00795284  894a0c               mov dword ptr [edx + 0xc], ecx
// 00795287  8b8380000000         mov eax, dword ptr [ebx + 0x80]
// 0079528d  8b400c               mov eax, dword ptr [eax + 0xc]
// 00795290  5b                   pop ebx
// 00795291  83c42c               add esp, 0x2c
// 00795294  c20400               ret 4
// 00795297  837b2400             cmp dword ptr [ebx + 0x24], 0
// 0079529b  7413                 je 0x7952b0
// 0079529d  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 007952a1  51                   push ecx
// 007952a2  8bcb                 mov ecx, ebx
// 007952a4  e817feffff           call 0x7950c0
// 007952a9  5b                   pop ebx
// 007952aa  83c42c               add esp, 0x2c
// 007952ad  c20400               ret 4
// 007952b0  55                   push ebp
// 007952b1  56                   push esi
// 007952b2  8b735c               mov esi, dword ptr [ebx + 0x5c]
// 007952b5  57                   push edi
// 007952b6  8bce                 mov ecx, esi
// 007952b8  e803cef8ff           call 0x7220c0
// 007952bd  8b16                 mov edx, dword ptr [esi]
// 007952bf  8ba860060000         mov ebp, dword ptr [eax + 0x660]
// 007952c5  8b8230020000         mov eax, dword ptr [edx + 0x230]
// 007952cb  8bce                 mov ecx, esi
// 007952cd  ffd0                 call eax
// 007952cf  8bf8                 mov edi, eax
// 007952d1  8b8380000000         mov eax, dword ptr [ebx + 0x80]
// 007952d7  b9f7ffffff           mov ecx, 0xfffffff7
// 007952dc  2bcd                 sub ecx, ebp
// 007952de  33d2                 xor edx, edx
// 007952e0  03f9                 add edi, ecx
// 007952e2  8b4804               mov ecx, dword ptr [eax + 4]
// 007952e5  3bca                 cmp ecx, edx
// 007952e7  8b00                 mov eax, dword ptr [eax]
// 007952e9  897c241c             mov dword ptr [esp + 0x1c], edi
// 007952ed  8954242c             mov dword ptr [esp + 0x2c], edx
// 007952f1  89542418             mov dword ptr [esp + 0x18], edx
// 007952f5  89542414             mov dword ptr [esp + 0x14], edx
// 007952f9  8d6a02               lea ebp, [edx + 2]
// 007952fc  894c2424             mov dword ptr [esp + 0x24], ecx
// 00795300  89542410             mov dword ptr [esp + 0x10], edx
// 00795304  0f8e0a010000         jle 0x795414
// 0079530a  8d703c               lea esi, [eax + 0x3c]
// 0079530d  eb05                 jmp 0x795314
// 0079530f  90                   nop 
// 00795310  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00795314  8b0e                 mov ecx, dword ptr [esi]
// 00795316  e8755cf1ff           call 0x6aaf90
// 0079531b  8b0e                 mov ecx, dword ptr [esi]
// 0079531d  33d2                 xor edx, edx
// 0079531f  83f804               cmp eax, 4
// 00795322  0f94c2               sete dl
// 00795325  89542420             mov dword ptr [esp + 0x20], edx
// 00795329  e8625cf1ff           call 0x6aaf90
// 0079532e  3946fc               cmp dword ptr [esi - 4], eax
// 00795331  742b                 je 0x79535e
// 00795333  8b0e                 mov ecx, dword ptr [esi]
// 00795335  e8565cf1ff           call 0x6aaf90
// 0079533a  8b542440             mov edx, dword ptr [esp + 0x40]
// 0079533e  8b0e                 mov ecx, dword ptr [esi]
// 00795340  8946fc               mov dword ptr [esi - 4], eax
// 00795343  8b01                 mov eax, dword ptr [ecx]
// 00795345  8b809c000000         mov eax, dword ptr [eax + 0x9c]
// 0079534b  52                   push edx
// 0079534c  8d542438             lea edx, [esp + 0x38]
// 00795350  52                   push edx
// 00795351  ffd0                 call eax
// 00795353  8b08                 mov ecx, dword ptr [eax]
// 00795355  894ee4               mov dword ptr [esi - 0x1c], ecx
// 00795358  8b5004               mov edx, dword ptr [eax + 4]
// 0079535b  8956e8               mov dword ptr [esi - 0x18], edx
// 0079535e  837ef400             cmp dword ptr [esi - 0xc], 0
// 00795362  8b5ee4               mov ebx, dword ptr [esi - 0x1c]
// 00795365  8b4ee8               mov ecx, dword ptr [esi - 0x18]
// 00795368  740e                 je 0x795378
// 0079536a  837c241000           cmp dword ptr [esp + 0x10], 0
// 0079536f  7e07                 jle 0x795378
// 00795371  ba01000000           mov edx, 1
// 00795376  eb02                 jmp 0x79537a
// 00795378  33d2                 xor edx, edx
// 0079537a  837ef800             cmp dword ptr [esi - 8], 0
// 0079537e  740e                 je 0x79538e
// 00795380  837c241000           cmp dword ptr [esp + 0x10], 0
// 00795385  7e07                 jle 0x79538e
// 00795387  b801000000           mov eax, 1
// 0079538c  eb02                 jmp 0x795390
// 0079538e  33c0                 xor eax, eax
// 00795390  85d2                 test edx, edx
// 00795392  7403                 je 0x795397
// 00795394  83c506               add ebp, 6
// 00795397  837c241000           cmp dword ptr [esp + 0x10], 0
// 0079539c  7e31                 jle 0x7953cf
// 0079539e  85c0                 test eax, eax
// 007953a0  752d                 jne 0x7953cf
// 007953a2  39442420             cmp dword ptr [esp + 0x20], eax
// 007953a6  7527                 jne 0x7953cf
// 007953a8  8b442418             mov eax, dword ptr [esp + 0x18]
// 007953ac  03c1                 add eax, ecx
// 007953ae  3bc7                 cmp eax, edi
// 007953b0  7f1d                 jg 0x7953cf
// 007953b2  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007953b6  50                   push eax
// 007953b7  8d3c2b               lea edi, [ebx + ebp]
// 007953ba  57                   push edi
// 007953bb  51                   push ecx
// 007953bc  55                   push ebp
// 007953bd  8d56c4               lea edx, [esi - 0x3c]
// 007953c0  52                   push edx
// 007953c1  ff15102d8000         call dword ptr [0x802d10]
// 007953c7  395c2414             cmp dword ptr [esp + 0x14], ebx
// 007953cb  7f1c                 jg 0x7953e9
// 007953cd  eb16                 jmp 0x7953e5
// 007953cf  036c2414             add ebp, dword ptr [esp + 0x14]
// 007953d3  51                   push ecx
// 007953d4  8d3c2b               lea edi, [ebx + ebp]
// 007953d7  57                   push edi
// 007953d8  6a00                 push 0
// 007953da  55                   push ebp
// 007953db  8d46c4               lea eax, [esi - 0x3c]
// 007953de  50                   push eax
// 007953df  ff15102d8000         call dword ptr [0x802d10]
// 007953e5  895c2414             mov dword ptr [esp + 0x14], ebx
// 007953e9  3b7c242c             cmp edi, dword ptr [esp + 0x2c]
// 007953ed  7e04                 jle 0x7953f3
// 007953ef  897c242c             mov dword ptr [esp + 0x2c], edi
// 007953f3  8b442410             mov eax, dword ptr [esp + 0x10]
// 007953f7  8b4ed0               mov ecx, dword ptr [esi - 0x30]
// 007953fa  40                   inc eax
// 007953fb  83c644               add esi, 0x44
// 007953fe  3b442424             cmp eax, dword ptr [esp + 0x24]
// 00795402  894c2418             mov dword ptr [esp + 0x18], ecx
// 00795406  89442410             mov dword ptr [esp + 0x10], eax
// 0079540a  0f8c00ffffff         jl 0x795310
// 00795410  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 00795414  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00795418  8b8380000000         mov eax, dword ptr [ebx + 0x80]
// 0079541e  83c202               add edx, 2
// 00795421  89500c               mov dword ptr [eax + 0xc], edx
// 00795424  8b8380000000         mov eax, dword ptr [ebx + 0x80]
// 0079542a  8b480c               mov ecx, dword ptr [eax + 0xc]
// 0079542d  3b4808               cmp ecx, dword ptr [eax + 8]
// 00795430  5f                   pop edi
// 00795431  5e                   pop esi
// 00795432  5d                   pop ebp
// 00795433  7e0c                 jle 0x795441
// 00795435  8bd0                 mov edx, eax
// 00795437  8b420c               mov eax, dword ptr [edx + 0xc]
// 0079543a  5b                   pop ebx
// 0079543b  83c42c               add esp, 0x2c
// 0079543e  c20400               ret 4
// 00795441  8b4008               mov eax, dword ptr [eax + 8]
// 00795444  5b                   pop ebx
// 00795445  83c42c               add esp, 0x2c
// 00795448  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\Ribbon\XTPRibbonGroups.cpp (function ?OnCalcDynamicSize@CXTPRibbonGroup@@MAEHPAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonGroups.cpp
