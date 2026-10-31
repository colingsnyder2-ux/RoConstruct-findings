// from server: 100% by king_originala
// roc 2008-06 00403650  unit: ATL::CRegObject  size: 657 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00403650
//
// 00403650  6aff                 push -1
// 00403652  64a100000000         mov eax, dword ptr fs:[0]
// 00403658  6838cc7b00           push 0x7bcc38
// 0040365d  50                   push eax
// 0040365e  64892500000000       mov dword ptr fs:[0], esp
// 00403665  83ec38               sub esp, 0x38
// 00403668  53                   push ebx
// 00403669  55                   push ebp
// 0040366a  56                   push esi
// 0040366b  57                   push edi
// 0040366c  8b7c2458             mov edi, dword ptr [esp + 0x58]
// 00403670  33db                 xor ebx, ebx
// 00403672  8bf1                 mov esi, ecx
// 00403674  3bfb                 cmp edi, ebx
// 00403676  0f844b020000         je 0x4038c7
// 0040367c  8b6c245c             mov ebp, dword ptr [esp + 0x5c]
// 00403680  3beb                 cmp ebp, ebx
// 00403682  0f843f020000         je 0x4038c7
// 00403688  57                   push edi
// 00403689  895d00               mov dword ptr [ebp], ebx
// 0040368c  ff15b8218000         call dword ptr [0x8021b8]
// 00403692  03c0                 add eax, eax
// 00403694  50                   push eax
// 00403695  8d4c2420             lea ecx, [esp + 0x20]
// 00403699  e8f2e6ffff           call 0x401d90
// 0040369e  895c2450             mov dword ptr [esp + 0x50], ebx
// 004036a2  395c2424             cmp dword ptr [esp + 0x24], ebx
// 004036a6  7521                 jne 0x4036c9
// 004036a8  53                   push ebx
// 004036a9  ff1514418000         call dword ptr [0x804114]
// 004036af  5f                   pop edi
// 004036b0  5e                   pop esi
// 004036b1  5d                   pop ebp
// 004036b2  b80e000780           mov eax, 0x8007000e
// 004036b7  5b                   pop ebx
// 004036b8  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 004036bc  64890d00000000       mov dword ptr fs:[0], ecx
// 004036c3  83c444               add esp, 0x44
// 004036c6  c20800               ret 8
// 004036c9  893e                 mov dword ptr [esi], edi
// 004036cb  a064c29600           mov al, byte ptr [0x96c264]
// 004036d0  895c2414             mov dword ptr [esp + 0x14], ebx
// 004036d4  895c2418             mov dword ptr [esp + 0x18], ebx
// 004036d8  32db                 xor bl, bl
// 004036da  88442413             mov byte ptr [esp + 0x13], al
// 004036de  885c2458             mov byte ptr [esp + 0x58], bl
// 004036e2  381f                 cmp byte ptr [edi], bl
// 004036e4  0f8418010000         je 0x403802
// 004036ea  8b2d2c2e8000         mov ebp, dword ptr [0x802e2c]
// 004036f0  807c241301           cmp byte ptr [esp + 0x13], 1
// 004036f5  0f85c6000000         jne 0x4037c1
// 004036fb  837c241800           cmp dword ptr [esp + 0x18], 0
// 00403700  7547                 jne 0x403749
// 00403702  8b06                 mov eax, dword ptr [esi]
// 00403704  6848b08000           push 0x80b048
// 00403709  50                   push eax
// 0040370a  ff15b4288000         call dword ptr [0x8028b4]
// 00403710  83c408               add esp, 8
// 00403713  85c0                 test eax, eax
// 00403715  7432                 je 0x403749
// 00403717  8b0e                 mov ecx, dword ptr [esi]
// 00403719  3bc1                 cmp eax, ecx
// 0040371b  752c                 jne 0x403749
// 0040371d  51                   push ecx
// 0040371e  ffd5                 call ebp
// 00403720  50                   push eax
// 00403721  8906                 mov dword ptr [esi], eax
// 00403723  ffd5                 call ebp
// 00403725  50                   push eax
// 00403726  8906                 mov dword ptr [esi], eax
// 00403728  ffd5                 call ebp
// 0040372a  50                   push eax
// 0040372b  8906                 mov dword ptr [esi], eax
// 0040372d  ffd5                 call ebp
// 0040372f  68b0b18000           push 0x80b1b0
// 00403734  8d4c2420             lea ecx, [esp + 0x20]
// 00403738  8906                 mov dword ptr [esi], eax
// 0040373a  e881fdffff           call 0x4034c0
// 0040373f  85c0                 test eax, eax
// 00403741  0f8459010000         je 0x4038a0
// 00403747  b301                 mov bl, 1
// 00403749  8b06                 mov eax, dword ptr [esi]
// 0040374b  803827               cmp byte ptr [eax], 0x27
// 0040374e  7536                 jne 0x403786
// 00403750  807c245800           cmp byte ptr [esp + 0x58], 0
// 00403755  7507                 jne 0x40375e
// 00403757  c644245801           mov byte ptr [esp + 0x58], 1
// 0040375c  eb63                 jmp 0x4037c1
// 0040375e  50                   push eax
// 0040375f  ffd5                 call ebp
// 00403761  803827               cmp byte ptr [eax], 0x27
// 00403764  7407                 je 0x40376d
// 00403766  c644245800           mov byte ptr [esp + 0x58], 0
// 0040376b  eb20                 jmp 0x40378d
// 0040376d  8b0e                 mov ecx, dword ptr [esi]
// 0040376f  51                   push ecx
// 00403770  ffd5                 call ebp
// 00403772  50                   push eax
// 00403773  8d4c2420             lea ecx, [esp + 0x20]
// 00403777  8906                 mov dword ptr [esi], eax
// 00403779  e802e7ffff           call 0x401e80
// 0040377e  85c0                 test eax, eax
// 00403780  0f841a010000         je 0x4038a0
// 00403786  807c245800           cmp byte ptr [esp + 0x58], 0
// 0040378b  7534                 jne 0x4037c1
// 0040378d  8b16                 mov edx, dword ptr [esi]
// 0040378f  8a02                 mov al, byte ptr [edx]
// 00403791  3c7b                 cmp al, 0x7b
// 00403793  7504                 jne 0x403799
// 00403795  ff442418             inc dword ptr [esp + 0x18]
// 00403799  3c7d                 cmp al, 0x7d
// 0040379b  7524                 jne 0x4037c1
// 0040379d  836c241801           sub dword ptr [esp + 0x18], 1
// 004037a2  751d                 jne 0x4037c1
// 004037a4  80fb01               cmp bl, 1
// 004037a7  7518                 jne 0x4037c1
// 004037a9  689cb18000           push 0x80b19c
// 004037ae  8d4c2420             lea ecx, [esp + 0x20]
// 004037b2  e809fdffff           call 0x4034c0
// 004037b7  85c0                 test eax, eax
// 004037b9  0f84e1000000         je 0x4038a0
// 004037bf  32db                 xor bl, bl
// 004037c1  8b3e                 mov edi, dword ptr [esi]
// 004037c3  803f25               cmp byte ptr [edi], 0x25
// 004037c6  57                   push edi
// 004037c7  750c                 jne 0x4037d5
// 004037c9  ffd5                 call ebp
// 004037cb  8bf8                 mov edi, eax
// 004037cd  893e                 mov dword ptr [esi], edi
// 004037cf  803f25               cmp byte ptr [edi], 0x25
// 004037d2  7561                 jne 0x403835
// 004037d4  57                   push edi
// 004037d5  ffd5                 call ebp
// 004037d7  2bc7                 sub eax, edi
// 004037d9  50                   push eax
// 004037da  57                   push edi
// 004037db  8d4c2424             lea ecx, [esp + 0x24]
// 004037df  e8fce5ffff           call 0x401de0
// 004037e4  85c0                 test eax, eax
// 004037e6  0f84b4000000         je 0x4038a0
// 004037ec  8b06                 mov eax, dword ptr [esi]
// 004037ee  50                   push eax
// 004037ef  ffd5                 call ebp
// 004037f1  8bc8                 mov ecx, eax
// 004037f3  8906                 mov dword ptr [esi], eax
// 004037f5  803900               cmp byte ptr [ecx], 0
// 004037f8  0f85f2feffff         jne 0x4036f0
// 004037fe  8b6c245c             mov ebp, dword ptr [esp + 0x5c]
// 00403802  8b442424             mov eax, dword ptr [esp + 0x24]
// 00403806  c744242400000000     mov dword ptr [esp + 0x24], 0
// 0040380e  894500               mov dword ptr [ebp], eax
// 00403811  8b542424             mov edx, dword ptr [esp + 0x24]
// 00403815  52                   push edx
// 00403816  ff1514418000         call dword ptr [0x804114]
// 0040381c  8b442414             mov eax, dword ptr [esp + 0x14]
// 00403820  5f                   pop edi
// 00403821  5e                   pop esi
// 00403822  5d                   pop ebp
// 00403823  5b                   pop ebx
// 00403824  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00403828  64890d00000000       mov dword ptr fs:[0], ecx
// 0040382f  83c444               add esp, 0x44
// 00403832  c20800               ret 8
// 00403835  6a25                 push 0x25
// 00403837  57                   push edi
// 00403838  e883e7ffff           call 0x401fc0
// 0040383d  8bf8                 mov edi, eax
// 0040383f  83c408               add esp, 8
// 00403842  85ff                 test edi, edi
// 00403844  7467                 je 0x4038ad
// 00403846  8b0e                 mov ecx, dword ptr [esi]
// 00403848  2bc1                 sub eax, ecx
// 0040384a  83f81f               cmp eax, 0x1f
// 0040384d  7f6b                 jg 0x4038ba
// 0040384f  50                   push eax
// 00403850  51                   push ecx
// 00403851  8d442430             lea eax, [esp + 0x30]
// 00403855  6a20                 push 0x20
// 00403857  50                   push eax
// 00403858  ff15b8288000         call dword ptr [0x8028b8]
// 0040385e  50                   push eax
// 0040385f  e81cdeffff           call 0x401680
// 00403864  83c414               add esp, 0x14
// 00403867  8d4c2428             lea ecx, [esp + 0x28]
// 0040386b  51                   push ecx
// 0040386c  8b4e04               mov ecx, dword ptr [esi + 4]
// 0040386f  e89cfdffff           call 0x403610
// 00403874  85c0                 test eax, eax
// 00403876  7435                 je 0x4038ad
// 00403878  50                   push eax
// 00403879  8d4c2420             lea ecx, [esp + 0x20]
// 0040387d  e83efcffff           call 0x4034c0
// 00403882  85c0                 test eax, eax
// 00403884  741a                 je 0x4038a0
// 00403886  393e                 cmp dword ptr [esi], edi
// 00403888  0f845effffff         je 0x4037ec
// 0040388e  8bff                 mov edi, edi
// 00403890  8b16                 mov edx, dword ptr [esi]
// 00403892  52                   push edx
// 00403893  ffd5                 call ebp
// 00403895  8906                 mov dword ptr [esi], eax
// 00403897  3bc7                 cmp eax, edi
// 00403899  75f5                 jne 0x403890
// 0040389b  e94cffffff           jmp 0x4037ec
// 004038a0  c74424140e000780     mov dword ptr [esp + 0x14], 0x8007000e
// 004038a8  e964ffffff           jmp 0x403811
// 004038ad  c744241409000280     mov dword ptr [esp + 0x14], 0x80020009
// 004038b5  e957ffffff           jmp 0x403811
// 004038ba  c744241405400080     mov dword ptr [esp + 0x14], 0x80004005
// 004038c2  e94affffff           jmp 0x403811
// 004038c7  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 004038cb  5f                   pop edi
// 004038cc  5e                   pop esi
// 004038cd  5d                   pop ebp
// 004038ce  b803400080           mov eax, 0x80004003
// 004038d3  5b                   pop ebx
// 004038d4  64890d00000000       mov dword ptr fs:[0], ecx
// 004038db  83c444               add esp, 0x44
// 004038de  c20800               ret 8

// from server: 100% by king_originala
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_atl_rtm_unwind_3caebe54ee562fd5.cpp
