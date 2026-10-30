// roc 2009-12 00819280  unit: CRobloxReportView  size: 478 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00819280
//
// 00819280  6aff                 push -1
// 00819282  68a9a89500           push 0x95a8a9
// 00819287  64a100000000         mov eax, dword ptr fs:[0]
// 0081928d  50                   push eax
// 0081928e  83ec30               sub esp, 0x30
// 00819291  53                   push ebx
// 00819292  55                   push ebp
// 00819293  56                   push esi
// 00819294  57                   push edi
// 00819295  a10052b600           mov eax, dword ptr [0xb65200]
// 0081929a  33c4                 xor eax, esp
// 0081929c  50                   push eax
// 0081929d  8d442444             lea eax, [esp + 0x44]
// 008192a1  64a300000000         mov dword ptr fs:[0], eax
// 008192a7  8bf1                 mov esi, ecx
// 008192a9  83be6003000000       cmp dword ptr [esi + 0x360], 0
// 008192b0  0f848d010000         je 0x819443
// 008192b6  8b7c2454             mov edi, dword ptr [esp + 0x54]
// 008192ba  85ff                 test edi, edi
// 008192bc  0f8481010000         je 0x819443
// 008192c2  8b6c2458             mov ebp, dword ptr [esp + 0x58]
// 008192c6  85ed                 test ebp, ebp
// 008192c8  0f8475010000         je 0x819443
// 008192ce  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 008192d2  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 008192d6  8b542464             mov edx, dword ptr [esp + 0x64]
// 008192da  8b5c2468             mov ebx, dword ptr [esp + 0x68]
// 008192de  89442424             mov dword ptr [esp + 0x24], eax
// 008192e2  89442414             mov dword ptr [esp + 0x14], eax
// 008192e6  8d442454             lea eax, [esp + 0x54]
// 008192ea  56                   push esi
// 008192eb  50                   push eax
// 008192ec  894c2430             mov dword ptr [esp + 0x30], ecx
// 008192f0  89542434             mov dword ptr [esp + 0x34], edx
// 008192f4  895c2438             mov dword ptr [esp + 0x38], ebx
// 008192f8  894c2420             mov dword ptr [esp + 0x20], ecx
// 008192fc  89542424             mov dword ptr [esp + 0x24], edx
// 00819300  895c2428             mov dword ptr [esp + 0x28], ebx
// 00819304  e877190300           call 0x84ac80
// 00819309  83c408               add esp, 8
// 0081930c  8b8e60030000         mov ecx, dword ptr [esi + 0x360]
// 00819312  c744244c00000000     mov dword ptr [esp + 0x4c], 0
// 0081931a  e86171f2ff           call 0x740480
// 0081931f  8b18                 mov ebx, dword ptr [eax]
// 00819321  8d4c2454             lea ecx, [esp + 0x54]
// 00819325  89442458             mov dword ptr [esp + 0x58], eax
// 00819329  83c358               add ebx, 0x58
// 0081932c  ff1580de9800         call dword ptr [0x98de80]
// 00819332  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 00819336  8b13                 mov edx, dword ptr [ebx]
// 00819338  50                   push eax
// 00819339  55                   push ebp
// 0081933a  ffd2                 call edx
// 0081933c  8b8e60030000         mov ecx, dword ptr [esi + 0x360]
// 00819342  e849140400           call 0x85a790
// 00819347  8b18                 mov ebx, dword ptr [eax]
// 00819349  8d4c2454             lea ecx, [esp + 0x54]
// 0081934d  89442458             mov dword ptr [esp + 0x58], eax
// 00819351  83c358               add ebx, 0x58
// 00819354  ff1580de9800         call dword ptr [0x98de80]
// 0081935a  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 0081935e  50                   push eax
// 0081935f  8b03                 mov eax, dword ptr [ebx]
// 00819361  55                   push ebp
// 00819362  ffd0                 call eax
// 00819364  8b17                 mov edx, dword ptr [edi]
// 00819366  8b4234               mov eax, dword ptr [edx + 0x34]
// 00819369  68ffffff00           push 0xffffff
// 0081936e  8bcf                 mov ecx, edi
// 00819370  ffd0                 call eax
// 00819372  8b8e60030000         mov ecx, dword ptr [esi + 0x360]
// 00819378  e813140400           call 0x85a790
// 0081937d  8b10                 mov edx, dword ptr [eax]
// 0081937f  8b525c               mov edx, dword ptr [edx + 0x5c]
// 00819382  6a01                 push 1
// 00819384  8d4c2418             lea ecx, [esp + 0x18]
// 00819388  51                   push ecx
// 00819389  57                   push edi
// 0081938a  8bc8                 mov ecx, eax
// 0081938c  ffd2                 call edx
// 0081938e  8b8e60030000         mov ecx, dword ptr [esi + 0x360]
// 00819394  e8e770f2ff           call 0x740480
// 00819399  8b10                 mov edx, dword ptr [eax]
// 0081939b  8b525c               mov edx, dword ptr [edx + 0x5c]
// 0081939e  6a00                 push 0
// 008193a0  8d4c2428             lea ecx, [esp + 0x28]
// 008193a4  51                   push ecx
// 008193a5  57                   push edi
// 008193a6  8bc8                 mov ecx, eax
// 008193a8  ffd2                 call edx
// 008193aa  8b442460             mov eax, dword ptr [esp + 0x60]
// 008193ae  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 008193b2  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 008193b6  8b542464             mov edx, dword ptr [esp + 0x64]
// 008193ba  89442438             mov dword ptr [esp + 0x38], eax
// 008193be  2b442428             sub eax, dword ptr [esp + 0x28]
// 008193c2  8d441802             lea eax, [eax + ebx + 2]
// 008193c6  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 008193ca  2b5c2420             sub ebx, dword ptr [esp + 0x20]
// 008193ce  89442438             mov dword ptr [esp + 0x38], eax
// 008193d2  8b442468             mov eax, dword ptr [esp + 0x68]
// 008193d6  8d4418fe             lea eax, [eax + ebx - 2]
// 008193da  89442440             mov dword ptr [esp + 0x40], eax
// 008193de  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 008193e2  8b1e                 mov ebx, dword ptr [esi]
// 008193e4  50                   push eax
// 008193e5  83ec10               sub esp, 0x10
// 008193e8  8bc4                 mov eax, esp
// 008193ea  8908                 mov dword ptr [eax], ecx
// 008193ec  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 008193f0  894804               mov dword ptr [eax + 4], ecx
// 008193f3  895008               mov dword ptr [eax + 8], edx
// 008193f6  8b542454             mov edx, dword ptr [esp + 0x54]
// 008193fa  55                   push ebp
// 008193fb  89500c               mov dword ptr [eax + 0xc], edx
// 008193fe  8b839c010000         mov eax, dword ptr [ebx + 0x19c]
// 00819404  57                   push edi
// 00819405  8bce                 mov ecx, esi
// 00819407  ffd0                 call eax
// 00819409  8b17                 mov edx, dword ptr [edi]
// 0081940b  8bd8                 mov ebx, eax
// 0081940d  8b4234               mov eax, dword ptr [edx + 0x34]
// 00819410  68ffffff00           push 0xffffff
// 00819415  8bcf                 mov ecx, edi
// 00819417  ffd0                 call eax
// 00819419  8b8e60030000         mov ecx, dword ptr [esi + 0x360]
// 0081941f  e86c130400           call 0x85a790
// 00819424  8b10                 mov edx, dword ptr [eax]
// 00819426  8b525c               mov edx, dword ptr [edx + 0x5c]
// 00819429  6a00                 push 0
// 0081942b  8d4c2418             lea ecx, [esp + 0x18]
// 0081942f  51                   push ecx
// 00819430  57                   push edi
// 00819431  8bc8                 mov ecx, eax
// 00819433  ffd2                 call edx
// 00819435  8d4c2454             lea ecx, [esp + 0x54]
// 00819439  ff15c0de9800         call dword ptr [0x98dec0]
// 0081943f  8bc3                 mov eax, ebx
// 00819441  eb05                 jmp 0x819448
// 00819443  b8ffffff7f           mov eax, 0x7fffffff
// 00819448  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0081944c  64890d00000000       mov dword ptr fs:[0], ecx
// 00819453  59                   pop ecx
// 00819454  5f                   pop edi
// 00819455  5e                   pop esi
// 00819456  5d                   pop ebp
// 00819457  5b                   pop ebx
// 00819458  83c43c               add esp, 0x3c
// 0081945b  c21c00               ret 0x1c
// copied from an identical function in another client (function ?PrintPage@CXTPReportView@@MAEJPAVCDC@@PAUCPrintInfo@@VCRect@@J@Z)

// roc-cl: 30729
// roc-lang: cpp
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\ReportControl\XTPReportView.cpp