// roc 2012-06 00a263d0  unit: CXTPReportPaintManager  size: 658 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a263d0
//
// 00a263d0  6aff                 push -1
// 00a263d2  688149ae00           push 0xae4981
// 00a263d7  64a100000000         mov eax, dword ptr fs:[0]
// 00a263dd  50                   push eax
// 00a263de  83ec30               sub esp, 0x30
// 00a263e1  53                   push ebx
// 00a263e2  55                   push ebp
// 00a263e3  56                   push esi
// 00a263e4  57                   push edi
// 00a263e5  a1d027e000           mov eax, dword ptr [0xe027d0]
// 00a263ea  33c4                 xor eax, esp
// 00a263ec  50                   push eax
// 00a263ed  8d442444             lea eax, [esp + 0x44]
// 00a263f1  64a300000000         mov dword ptr fs:[0], eax
// 00a263f7  8bf9                 mov edi, ecx
// 00a263f9  8b6c2458             mov ebp, dword ptr [esp + 0x58]
// 00a263fd  8b453c               mov eax, dword ptr [ebp + 0x3c]
// 00a26400  8b742454             mov esi, dword ptr [esp + 0x54]
// 00a26404  85c0                 test eax, eax
// 00a26406  7479                 je 0xa26481
// 00a26408  8b87e4000000         mov eax, dword ptr [edi + 0xe4]
// 00a2640e  83f8ff               cmp eax, -1
// 00a26411  7506                 jne 0xa26419
// 00a26413  8b87e0000000         mov eax, dword ptr [edi + 0xe0]
// 00a26419  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 00a2641d  8b542468             mov edx, dword ptr [esp + 0x68]
// 00a26421  50                   push eax
// 00a26422  8b442468             mov eax, dword ptr [esp + 0x68]
// 00a26426  2bc8                 sub ecx, eax
// 00a26428  83e909               sub ecx, 9
// 00a2642b  51                   push ecx
// 00a2642c  83c006               add eax, 6
// 00a2642f  50                   push eax
// 00a26430  52                   push edx
// 00a26431  56                   push esi
// 00a26432  8bcf                 mov ecx, edi
// 00a26434  e877daffff           call 0xa23eb0
// 00a26439  8b87bc020000         mov eax, dword ptr [edi + 0x2bc]
// 00a2643f  83f803               cmp eax, 3
// 00a26442  740b                 je 0xa2644f
// 00a26444  8d8fd0000000         lea ecx, [edi + 0xd0]
// 00a2644a  83f804               cmp eax, 4
// 00a2644d  7506                 jne 0xa26455
// 00a2644f  8d8fc0010000         lea ecx, [edi + 0x1c0]
// 00a26455  8b4108               mov eax, dword ptr [ecx + 8]
// 00a26458  83f8ff               cmp eax, -1
// 00a2645b  7503                 jne 0xa26460
// 00a2645d  8b4104               mov eax, dword ptr [ecx + 4]
// 00a26460  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 00a26464  8b542468             mov edx, dword ptr [esp + 0x68]
// 00a26468  50                   push eax
// 00a26469  8b442468             mov eax, dword ptr [esp + 0x68]
// 00a2646d  2bc8                 sub ecx, eax
// 00a2646f  83e909               sub ecx, 9
// 00a26472  51                   push ecx
// 00a26473  83c005               add eax, 5
// 00a26476  50                   push eax
// 00a26477  4a                   dec edx
// 00a26478  52                   push edx
// 00a26479  56                   push esi
// 00a2647a  8bcf                 mov ecx, edi
// 00a2647c  e82fdaffff           call 0xa23eb0
// 00a26481  6a01                 push 1
// 00a26483  8bce                 mov ecx, esi
// 00a26485  e81e310700           call 0xa995a8
// 00a2648a  8b8784000000         mov eax, dword ptr [edi + 0x84]
// 00a26490  83f8ff               cmp eax, -1
// 00a26493  7506                 jne 0xa2649b
// 00a26495  8b8780000000         mov eax, dword ptr [edi + 0x80]
// 00a2649b  50                   push eax
// 00a2649c  8bcd                 mov ecx, ebp
// 00a2649e  e87d1cf8ff           call 0x9a8120
// 00a264a3  50                   push eax
// 00a264a4  56                   push esi
// 00a264a5  8d4c2440             lea ecx, [esp + 0x40]
// 00a264a9  e8c2f0faff           call 0x9d5570
// 00a264ae  8d442458             lea eax, [esp + 0x58]
// 00a264b2  50                   push eax
// 00a264b3  8bcd                 mov ecx, ebp
// 00a264b5  c744245000000000     mov dword ptr [esp + 0x50], 0
// 00a264bd  e88e09fcff           call 0x9e6e50
// 00a264c2  8d4c2414             lea ecx, [esp + 0x14]
// 00a264c6  51                   push ecx
// 00a264c7  8d4c245c             lea ecx, [esp + 0x5c]
// 00a264cb  c644245001           mov byte ptr [esp + 0x50], 1
// 00a264d0  ff155846b200         call dword ptr [0xb24658]
// 00a264d6  50                   push eax
// 00a264d7  8d4c2460             lea ecx, [esp + 0x60]
// 00a264db  ff159847b200         call dword ptr [0xb24798]
// 00a264e1  8b5608               mov edx, dword ptr [esi + 8]
// 00a264e4  50                   push eax
// 00a264e5  52                   push edx
// 00a264e6  ff154021b200         call dword ptr [0xb22140]
// 00a264ec  8b442460             mov eax, dword ptr [esp + 0x60]
// 00a264f0  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 00a264f4  8b542468             mov edx, dword ptr [esp + 0x68]
// 00a264f8  8b5c246c             mov ebx, dword ptr [esp + 0x6c]
// 00a264fc  83c102               add ecx, 2
// 00a264ff  89442424             mov dword ptr [esp + 0x24], eax
// 00a26503  83c003               add eax, 3
// 00a26506  894c2428             mov dword ptr [esp + 0x28], ecx
// 00a2650a  83ea03               sub edx, 3
// 00a2650d  83eb02               sub ebx, 2
// 00a26510  8bcd                 mov ecx, ebp
// 00a26512  89442424             mov dword ptr [esp + 0x24], eax
// 00a26516  8954242c             mov dword ptr [esp + 0x2c], edx
// 00a2651a  895c2430             mov dword ptr [esp + 0x30], ebx
// 00a2651e  e89d1cf8ff           call 0x9a81c0
// 00a26523  85c0                 test eax, eax
// 00a26525  7446                 je 0xa2656d
// 00a26527  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00a2652b  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 00a2652f  2b442424             sub eax, dword ptr [esp + 0x24]
// 00a26533  83c306               add ebx, 6
// 00a26536  3bc3                 cmp eax, ebx
// 00a26538  7e33                 jle 0xa2656d
// 00a2653a  8bcd                 mov ecx, ebp
// 00a2653c  e87f1cf8ff           call 0x9a81c0
// 00a26541  a802                 test al, 2
// 00a26543  740a                 je 0xa2654f
// 00a26545  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00a26549  2bcb                 sub ecx, ebx
// 00a2654b  894c2424             mov dword ptr [esp + 0x24], ecx
// 00a2654f  8bcd                 mov ecx, ebp
// 00a26551  e86a1cf8ff           call 0x9a81c0
// 00a26556  a801                 test al, 1
// 00a26558  7413                 je 0xa2656d
// 00a2655a  8b442424             mov eax, dword ptr [esp + 0x24]
// 00a2655e  2bc3                 sub eax, ebx
// 00a26560  0344242c             add eax, dword ptr [esp + 0x2c]
// 00a26564  99                   cdq 
// 00a26565  2bc2                 sub eax, edx
// 00a26567  d1f8                 sar eax, 1
// 00a26569  89442424             mov dword ptr [esp + 0x24], eax
// 00a2656d  83bfa802000000       cmp dword ptr [edi + 0x2a8], 0
// 00a26574  7579                 jne 0xa265ef
// 00a26576  8bcd                 mov ecx, ebp
// 00a26578  e8431cf8ff           call 0x9a81c0
// 00a2657d  a810                 test al, 0x10
// 00a2657f  746e                 je 0xa265ef
// 00a26581  8b442428             mov eax, dword ptr [esp + 0x28]
// 00a26585  8b542424             mov edx, dword ptr [esp + 0x24]
// 00a26589  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00a2658d  8b3e                 mov edi, dword ptr [esi]
// 00a2658f  89442418             mov dword ptr [esp + 0x18], eax
// 00a26593  89542414             mov dword ptr [esp + 0x14], edx
// 00a26597  8b542430             mov edx, dword ptr [esp + 0x30]
// 00a2659b  68108c0000           push 0x8c10
// 00a265a0  8d442418             lea eax, [esp + 0x18]
// 00a265a4  894c2420             mov dword ptr [esp + 0x20], ecx
// 00a265a8  50                   push eax
// 00a265a9  8d4c2460             lea ecx, [esp + 0x60]
// 00a265ad  bb10880000           mov ebx, 0x8810
// 00a265b2  89542428             mov dword ptr [esp + 0x28], edx
// 00a265b6  ff155846b200         call dword ptr [0xb24658]
// 00a265bc  50                   push eax
// 00a265bd  8d4c2464             lea ecx, [esp + 0x64]
// 00a265c1  ff159847b200         call dword ptr [0xb24798]
// 00a265c7  8b5770               mov edx, dword ptr [edi + 0x70]
// 00a265ca  50                   push eax
// 00a265cb  8bce                 mov ecx, esi
// 00a265cd  ffd2                 call edx
// 00a265cf  8b442418             mov eax, dword ptr [esp + 0x18]
// 00a265d3  2b442420             sub eax, dword ptr [esp + 0x20]
// 00a265d7  2b442428             sub eax, dword ptr [esp + 0x28]
// 00a265db  03442430             add eax, dword ptr [esp + 0x30]
// 00a265df  83f801               cmp eax, 1
// 00a265e2  7e10                 jle 0xa265f4
// 00a265e4  99                   cdq 
// 00a265e5  2bc2                 sub eax, edx
// 00a265e7  d1f8                 sar eax, 1
// 00a265e9  01442428             add dword ptr [esp + 0x28], eax
// 00a265ed  eb05                 jmp 0xa265f4
// 00a265ef  bb24880000           mov ebx, 0x8824
// 00a265f4  8d4c2458             lea ecx, [esp + 0x58]
// 00a265f8  ff155846b200         call dword ptr [0xb24658]
// 00a265fe  85c0                 test eax, eax
// 00a26600  7e2f                 jle 0xa26631
// 00a26602  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00a26606  3b442424             cmp eax, dword ptr [esp + 0x24]
// 00a2660a  7e25                 jle 0xa26631
// 00a2660c  8b3e                 mov edi, dword ptr [esi]
// 00a2660e  53                   push ebx
// 00a2660f  8d4c2428             lea ecx, [esp + 0x28]
// 00a26613  51                   push ecx
// 00a26614  8d4c2460             lea ecx, [esp + 0x60]
// 00a26618  ff155846b200         call dword ptr [0xb24658]
// 00a2661e  50                   push eax
// 00a2661f  8d4c2464             lea ecx, [esp + 0x64]
// 00a26623  ff159847b200         call dword ptr [0xb24798]
// 00a26629  8b5770               mov edx, dword ptr [edi + 0x70]
// 00a2662c  50                   push eax
// 00a2662d  8bce                 mov ecx, esi
// 00a2662f  ffd2                 call edx
// 00a26631  8d4c2458             lea ecx, [esp + 0x58]
// 00a26635  ff15d047b200         call dword ptr [0xb247d0]
// 00a2663b  8d4c2434             lea ecx, [esp + 0x34]
// 00a2663f  c744244cffffffff     mov dword ptr [esp + 0x4c], 0xffffffff
// 00a26647  e864effaff           call 0x9d55b0
// 00a2664c  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00a26650  64890d00000000       mov dword ptr fs:[0], ecx
// 00a26657  59                   pop ecx
// 00a26658  5f                   pop edi
// 00a26659  5e                   pop esi
// 00a2665a  5d                   pop ebp
// 00a2665b  5b                   pop ebx
// 00a2665c  83c43c               add esp, 0x3c
// 00a2665f  c21c00               ret 0x1c
// copied from an identical function in another client (function ?DrawColumnFooter@CXTPReportPaintManager@@UAEXPAVCDC@@PAVCXTPReportColumn@@PAVCXTPReportHeader@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\ReportControl\XTPReportPaintManager.cpp