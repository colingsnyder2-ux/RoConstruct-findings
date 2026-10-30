// roc 2010-06 00820550  unit: CXTPReportColumns  size: 847 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00820550
//
// 00820550  6aff                 push -1
// 00820552  68b9569b00           push 0x9b56b9
// 00820557  64a100000000         mov eax, dword ptr fs:[0]
// 0082055d  50                   push eax
// 0082055e  81ece0000000         sub esp, 0xe0
// 00820564  53                   push ebx
// 00820565  55                   push ebp
// 00820566  56                   push esi
// 00820567  57                   push edi
// 00820568  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 0082056d  33c4                 xor eax, esp
// 0082056f  50                   push eax
// 00820570  8d8424f4000000       lea eax, [esp + 0xf4]
// 00820577  64a300000000         mov dword ptr fs:[0], eax
// 0082057d  8bd9                 mov ebx, ecx
// 0082057f  8d4c2418             lea ecx, [esp + 0x18]
// 00820583  ff15a4ce9e00         call dword ptr [0x9ecea4]
// 00820589  8bbc2404010000       mov edi, dword ptr [esp + 0x104]
// 00820590  8b07                 mov eax, dword ptr [edi]
// 00820592  8b9094000000         mov edx, dword ptr [eax + 0x94]
// 00820598  33f6                 xor esi, esi
// 0082059a  89b424fc000000       mov dword ptr [esp + 0xfc], esi
// 008205a1  683043a600           push 0xa64330
// 008205a6  8bcf                 mov ecx, edi
// 008205a8  397728               cmp dword ptr [edi + 0x28], esi
// 008205ab  0f8501010000         jne 0x8206b2
// 008205b1  8b7330               mov esi, dword ptr [ebx + 0x30]
// 008205b4  89742430             mov dword ptr [esp + 0x30], esi
// 008205b8  ffd2                 call edx
// 008205ba  8be8                 mov ebp, eax
// 008205bc  896c2424             mov dword ptr [esp + 0x24], ebp
// 008205c0  8b4500               mov eax, dword ptr [ebp]
// 008205c3  8b5004               mov edx, dword ptr [eax + 4]
// 008205c6  6a00                 push 0
// 008205c8  56                   push esi
// 008205c9  8bcd                 mov ecx, ebp
// 008205cb  c684240401000001     mov byte ptr [esp + 0x104], 1
// 008205d3  ffd2                 call edx
// 008205d5  8944241c             mov dword ptr [esp + 0x1c], eax
// 008205d9  33c0                 xor eax, eax
// 008205db  89442414             mov dword ptr [esp + 0x14], eax
// 008205df  85f6                 test esi, esi
// 008205e1  0f8eb3000000         jle 0x82069a
// 008205e7  eb0b                 jmp 0x8205f4
// 008205e9  8da42400000000       lea esp, [esp]
// 008205f0  8b442414             mov eax, dword ptr [esp + 0x14]
// 008205f4  85c0                 test eax, eax
// 008205f6  7c10                 jl 0x820608
// 008205f8  3b4330               cmp eax, dword ptr [ebx + 0x30]
// 008205fb  7d0b                 jge 0x820608
// 008205fd  8b4b2c               mov ecx, dword ptr [ebx + 0x2c]
// 00820600  8b3c81               mov edi, dword ptr [ecx + eax*4]
// 00820603  8d0481               lea eax, [ecx + eax*4]
// 00820606  eb02                 jmp 0x82060a
// 00820608  33ff                 xor edi, edi
// 0082060a  8b5500               mov edx, dword ptr [ebp]
// 0082060d  8b5208               mov edx, dword ptr [edx + 8]
// 00820610  8d44241c             lea eax, [esp + 0x1c]
// 00820614  50                   push eax
// 00820615  8bcd                 mov ecx, ebp
// 00820617  ffd2                 call edx
// 00820619  8bf0                 mov esi, eax
// 0082061b  89742428             mov dword ptr [esp + 0x28], esi
// 0082061f  8bcf                 mov ecx, edi
// 00820621  c68424fc00000002     mov byte ptr [esp + 0xfc], 2
// 00820629  e82285f9ff           call 0x7b8b50
// 0082062e  89442420             mov dword ptr [esp + 0x20], eax
// 00820632  8d4720               lea eax, [edi + 0x20]
// 00820635  50                   push eax
// 00820636  8d4c241c             lea ecx, [esp + 0x1c]
// 0082063a  ff1580c59e00         call dword ptr [0x9ec580]
// 00820640  8d4c2420             lea ecx, [esp + 0x20]
// 00820644  51                   push ecx
// 00820645  682443a600           push 0xa64324
// 0082064a  56                   push esi
// 0082064b  e82044feff           call 0x804a70
// 00820650  8d542424             lea edx, [esp + 0x24]
// 00820654  52                   push edx
// 00820655  682428a100           push 0xa12824
// 0082065a  56                   push esi
// 0082065b  e8a044feff           call 0x804b00
// 00820660  8b07                 mov eax, dword ptr [edi]
// 00820662  8b5058               mov edx, dword ptr [eax + 0x58]
// 00820665  83c418               add esp, 0x18
// 00820668  56                   push esi
// 00820669  8bcf                 mov ecx, edi
// 0082066b  ffd2                 call edx
// 0082066d  c68424fc00000001     mov byte ptr [esp + 0xfc], 1
// 00820675  85f6                 test esi, esi
// 00820677  7407                 je 0x820680
// 00820679  8bce                 mov ecx, esi
// 0082067b  e89c78f8ff           call 0x7a7f1c
// 00820680  8b442414             mov eax, dword ptr [esp + 0x14]
// 00820684  40                   inc eax
// 00820685  3b44242c             cmp eax, dword ptr [esp + 0x2c]
// 00820689  89442414             mov dword ptr [esp + 0x14], eax
// 0082068d  0f8c5dffffff         jl 0x8205f0
// 00820693  8bbc2404010000       mov edi, dword ptr [esp + 0x104]
// 0082069a  8b4500               mov eax, dword ptr [ebp]
// 0082069d  8b10                 mov edx, dword ptr [eax]
// 0082069f  6a01                 push 1
// 008206a1  8bcd                 mov ecx, ebp
// 008206a3  c684240001000000     mov byte ptr [esp + 0x100], 0
// 008206ab  ffd2                 call edx
// 008206ad  e948010000           jmp 0x8207fa
// 008206b2  ffd2                 call edx
// 008206b4  8be8                 mov ebp, eax
// 008206b6  896c2428             mov dword ptr [esp + 0x28], ebp
// 008206ba  8b4500               mov eax, dword ptr [ebp]
// 008206bd  8b5004               mov edx, dword ptr [eax + 4]
// 008206c0  56                   push esi
// 008206c1  56                   push esi
// 008206c2  8bcd                 mov ecx, ebp
// 008206c4  c684240401000003     mov byte ptr [esp + 0x104], 3
// 008206cc  ffd2                 call edx
// 008206ce  6a01                 push 1
// 008206d0  6a01                 push 1
// 008206d2  6aff                 push -1
// 008206d4  6a01                 push 1
// 008206d6  56                   push esi
// 008206d7  68fe08a000           push 0xa008fe
// 008206dc  56                   push esi
// 008206dd  8d4c244c             lea ecx, [esp + 0x4c]
// 008206e1  89442430             mov dword ptr [esp + 0x30], eax
// 008206e5  e836bafbff           call 0x7dc120
// 008206ea  c68424fc00000004     mov byte ptr [esp + 0xfc], 4
// 008206f2  8974241c             mov dword ptr [esp + 0x1c], esi
// 008206f6  39742414             cmp dword ptr [esp + 0x14], esi
// 008206fa  0f84d6000000         je 0x8207d6
// 00820700  8b4500               mov eax, dword ptr [ebp]
// 00820703  8b5008               mov edx, dword ptr [eax + 8]
// 00820706  8d4c2414             lea ecx, [esp + 0x14]
// 0082070a  51                   push ecx
// 0082070b  8bcd                 mov ecx, ebp
// 0082070d  ffd2                 call edx
// 0082070f  8bf0                 mov esi, eax
// 00820711  89742424             mov dword ptr [esp + 0x24], esi
// 00820715  6aff                 push -1
// 00820717  8d442424             lea eax, [esp + 0x24]
// 0082071b  50                   push eax
// 0082071c  682443a600           push 0xa64324
// 00820721  56                   push esi
// 00820722  c684240c01000005     mov byte ptr [esp + 0x10c], 5
// 0082072a  e81143feff           call 0x804a40
// 0082072f  83c410               add esp, 0x10
// 00820732  837f2c17             cmp dword ptr [edi + 0x2c], 0x17
// 00820736  763f                 jbe 0x820777
// 00820738  8d4c2418             lea ecx, [esp + 0x18]
// 0082073c  51                   push ecx
// 0082073d  682428a100           push 0xa12824
// 00820742  56                   push esi
// 00820743  e8b843feff           call 0x804b00
// 00820748  83c40c               add esp, 0xc
// 0082074b  8d4c2418             lea ecx, [esp + 0x18]
// 0082074f  ff15eccd9e00         call dword ptr [0x9ecdec]
// 00820755  84c0                 test al, al
// 00820757  751e                 jne 0x820777
// 00820759  8d542418             lea edx, [esp + 0x18]
// 0082075d  52                   push edx
// 0082075e  8bcb                 mov ecx, ebx
// 00820760  e8cbfaffff           call 0x820230
// 00820765  8bf8                 mov edi, eax
// 00820767  85ff                 test edi, edi
// 00820769  7522                 jne 0x82078d
// 0082076b  56                   push esi
// 0082076c  8d4c2434             lea ecx, [esp + 0x34]
// 00820770  e83bb4fbff           call 0x7dbbb0
// 00820775  eb3a                 jmp 0x8207b1
// 00820777  8b442420             mov eax, dword ptr [esp + 0x20]
// 0082077b  50                   push eax
// 0082077c  8bcb                 mov ecx, ebx
// 0082077e  e84dfaffff           call 0x8201d0
// 00820783  8bf8                 mov edi, eax
// 00820785  85ff                 test edi, edi
// 00820787  0f8409010000         je 0x820896
// 0082078d  8b17                 mov edx, dword ptr [edi]
// 0082078f  8b4258               mov eax, dword ptr [edx + 0x58]
// 00820792  56                   push esi
// 00820793  8bcf                 mov ecx, edi
// 00820795  ffd0                 call eax
// 00820797  57                   push edi
// 00820798  8bcb                 mov ecx, ebx
// 0082079a  e8b1f9ffff           call 0x820150
// 0082079f  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 008207a3  50                   push eax
// 008207a4  57                   push edi
// 008207a5  8bcb                 mov ecx, ebx
// 008207a7  e8e4fcffff           call 0x820490
// 008207ac  47                   inc edi
// 008207ad  897c241c             mov dword ptr [esp + 0x1c], edi
// 008207b1  c68424fc00000004     mov byte ptr [esp + 0xfc], 4
// 008207b9  85f6                 test esi, esi
// 008207bb  7407                 je 0x8207c4
// 008207bd  8bce                 mov ecx, esi
// 008207bf  e85877f8ff           call 0x7a7f1c
// 008207c4  837c241400           cmp dword ptr [esp + 0x14], 0
// 008207c9  8bbc2404010000       mov edi, dword ptr [esp + 0x104]
// 008207d0  0f852affffff         jne 0x820700
// 008207d6  8d4c2430             lea ecx, [esp + 0x30]
// 008207da  c68424fc00000003     mov byte ptr [esp + 0xfc], 3
// 008207e2  e8a9b6fbff           call 0x7dbe90
// 008207e7  8b5500               mov edx, dword ptr [ebp]
// 008207ea  8b02                 mov eax, dword ptr [edx]
// 008207ec  6a01                 push 1
// 008207ee  8bcd                 mov ecx, ebp
// 008207f0  c684240001000000     mov byte ptr [esp + 0x100], 0
// 008207f8  ffd0                 call eax
// 008207fa  8b17                 mov edx, dword ptr [edi]
// 008207fc  8b4270               mov eax, dword ptr [edx + 0x70]
// 008207ff  681843a600           push 0xa64318
// 00820804  8bcf                 mov ecx, edi
// 00820806  ffd0                 call eax
// 00820808  8be8                 mov ebp, eax
// 0082080a  896c2428             mov dword ptr [esp + 0x28], ebp
// 0082080e  8b4b20               mov ecx, dword ptr [ebx + 0x20]
// 00820811  8b11                 mov edx, dword ptr [ecx]
// 00820813  8b4258               mov eax, dword ptr [edx + 0x58]
// 00820816  55                   push ebp
// 00820817  c684240001000006     mov byte ptr [esp + 0x100], 6
// 0082081f  ffd0                 call eax
// 00820821  8b17                 mov edx, dword ptr [edi]
// 00820823  8b4270               mov eax, dword ptr [edx + 0x70]
// 00820826  680c43a600           push 0xa6430c
// 0082082b  8bcf                 mov ecx, edi
// 0082082d  ffd0                 call eax
// 0082082f  8bf0                 mov esi, eax
// 00820831  89742424             mov dword ptr [esp + 0x24], esi
// 00820835  8b5b24               mov ebx, dword ptr [ebx + 0x24]
// 00820838  8b13                 mov edx, dword ptr [ebx]
// 0082083a  8b4258               mov eax, dword ptr [edx + 0x58]
// 0082083d  56                   push esi
// 0082083e  8bcb                 mov ecx, ebx
// 00820840  c684240001000007     mov byte ptr [esp + 0x100], 7
// 00820848  ffd0                 call eax
// 0082084a  c68424fc00000006     mov byte ptr [esp + 0xfc], 6
// 00820852  85f6                 test esi, esi
// 00820854  7407                 je 0x82085d
// 00820856  8bce                 mov ecx, esi
// 00820858  e8bf76f8ff           call 0x7a7f1c
// 0082085d  c68424fc00000000     mov byte ptr [esp + 0xfc], 0
// 00820865  85ed                 test ebp, ebp
// 00820867  7407                 je 0x820870
// 00820869  8bcd                 mov ecx, ebp
// 0082086b  e8ac76f8ff           call 0x7a7f1c
// 00820870  8d4c2418             lea ecx, [esp + 0x18]
// 00820874  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 0082087a  8b8c24f4000000       mov ecx, dword ptr [esp + 0xf4]
// 00820881  64890d00000000       mov dword ptr fs:[0], ecx
// 00820888  59                   pop ecx
// 00820889  5f                   pop edi
// 0082088a  5e                   pop esi
// 0082088b  5d                   pop ebp
// 0082088c  5b                   pop ebx
// 0082088d  81c4ec000000         add esp, 0xec
// 00820893  c20400               ret 4
// 00820896  6a00                 push 0
// 00820898  6a05                 push 5
// 0082089a  e8717cf8ff           call 0x7a8510
// copied from an identical function in another client (function ?DoPropExchange@CXTPReportColumns@@UAEXPAVCXTPPropExchange@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\ReportControl\XTPReportColumns.cpp