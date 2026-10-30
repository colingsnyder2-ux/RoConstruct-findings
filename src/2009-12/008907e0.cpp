// roc 2009-12 008907e0  unit: CXTPDockContext  size: 476 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008907e0
//
// 008907e0  8b442404             mov eax, dword ptr [esp + 4]
// 008907e4  83ec38               sub esp, 0x38
// 008907e7  53                   push ebx
// 008907e8  55                   push ebp
// 008907e9  56                   push esi
// 008907ea  8bf1                 mov esi, ecx
// 008907ec  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 008907ef  8b5610               mov edx, dword ptr [esi + 0x10]
// 008907f2  2bc1                 sub eax, ecx
// 008907f4  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 008907f8  2bca                 sub ecx, edx
// 008907fa  8b5608               mov edx, dword ptr [esi + 8]
// 008907fd  57                   push edi
// 008907fe  bf42000000           mov edi, 0x42
// 00890803  83fa0a               cmp edx, 0xa
// 00890806  742a                 je 0x890832
// 00890808  83fa0b               cmp edx, 0xb
// 0089080b  7420                 je 0x89082d
// 0089080d  bf62000000           mov edi, 0x62
// 00890812  83fa0c               cmp edx, 0xc
// 00890815  750b                 jne 0x890822
// 00890817  014e44               add dword ptr [esi + 0x44], ecx
// 0089081a  8b464c               mov eax, dword ptr [esi + 0x4c]
// 0089081d  2b4644               sub eax, dword ptr [esi + 0x44]
// 00890820  eb1e                 jmp 0x890840
// 00890822  014e4c               add dword ptr [esi + 0x4c], ecx
// 00890825  8b464c               mov eax, dword ptr [esi + 0x4c]
// 00890828  2b4644               sub eax, dword ptr [esi + 0x44]
// 0089082b  eb13                 jmp 0x890840
// 0089082d  83fa0a               cmp edx, 0xa
// 00890830  7505                 jne 0x890837
// 00890832  014640               add dword ptr [esi + 0x40], eax
// 00890835  eb03                 jmp 0x89083a
// 00890837  014648               add dword ptr [esi + 0x48], eax
// 0089083a  8b4648               mov eax, dword ptr [esi + 0x48]
// 0089083d  2b4640               sub eax, dword ptr [esi + 0x40]
// 00890840  8b4e04               mov ecx, dword ptr [esi + 4]
// 00890843  8b11                 mov edx, dword ptr [ecx]
// 00890845  8b92d0010000         mov edx, dword ptr [edx + 0x1d0]
// 0089084b  33db                 xor ebx, ebx
// 0089084d  85c0                 test eax, eax
// 0089084f  0f9cc3               setl bl
// 00890852  57                   push edi
// 00890853  4b                   dec ebx
// 00890854  23d8                 and ebx, eax
// 00890856  53                   push ebx
// 00890857  8d442418             lea eax, [esp + 0x18]
// 0089085b  50                   push eax
// 0089085c  ffd2                 call edx
// 0089085e  8b4e04               mov ecx, dword ptr [esi + 4]
// 00890861  8b5120               mov edx, dword ptr [ecx + 0x20]
// 00890864  8d442418             lea eax, [esp + 0x18]
// 00890868  50                   push eax
// 00890869  52                   push edx
// 0089086a  ff1570cc9800         call dword ptr [0x98cc70]
// 00890870  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00890874  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 00890878  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 0089087c  8b542410             mov edx, dword ptr [esp + 0x10]
// 00890880  8bc7                 mov eax, edi
// 00890882  2b442418             sub eax, dword ptr [esp + 0x18]
// 00890886  8bcb                 mov ecx, ebx
// 00890888  2bcd                 sub ecx, ebp
// 0089088a  3bc2                 cmp eax, edx
// 0089088c  8b442414             mov eax, dword ptr [esp + 0x14]
// 00890890  7508                 jne 0x89089a
// 00890892  3bc8                 cmp ecx, eax
// 00890894  0f840a010000         je 0x8909a4
// 0089089a  8b4e08               mov ecx, dword ptr [esi + 8]
// 0089089d  83f90b               cmp ecx, 0xb
// 008908a0  742b                 je 0x8908cd
// 008908a2  83f90f               cmp ecx, 0xf
// 008908a5  7426                 je 0x8908cd
// 008908a7  83f90a               cmp ecx, 0xa
// 008908aa  750a                 jne 0x8908b6
// 008908ac  03c5                 add eax, ebp
// 008908ae  2bfa                 sub edi, edx
// 008908b0  897c2418             mov dword ptr [esp + 0x18], edi
// 008908b4  eb23                 jmp 0x8908d9
// 008908b6  83f90c               cmp ecx, 0xc
// 008908b9  7522                 jne 0x8908dd
// 008908bb  2bd8                 sub ebx, eax
// 008908bd  8b442418             mov eax, dword ptr [esp + 0x18]
// 008908c1  03c2                 add eax, edx
// 008908c3  895c241c             mov dword ptr [esp + 0x1c], ebx
// 008908c7  89442420             mov dword ptr [esp + 0x20], eax
// 008908cb  eb10                 jmp 0x8908dd
// 008908cd  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008908d1  03ca                 add ecx, edx
// 008908d3  03c5                 add eax, ebp
// 008908d5  894c2420             mov dword ptr [esp + 0x20], ecx
// 008908d9  89442424             mov dword ptr [esp + 0x24], eax
// 008908dd  8b5604               mov edx, dword ptr [esi + 4]
// 008908e0  52                   push edx
// 008908e1  8d44242c             lea eax, [esp + 0x2c]
// 008908e5  50                   push eax
// 008908e6  e885befaff           call 0x83c770
// 008908eb  8bc8                 mov ecx, eax
// 008908ed  e81ebafaff           call 0x83c310
// 008908f2  8d4c2418             lea ecx, [esp + 0x18]
// 008908f6  51                   push ecx
// 008908f7  8d54242c             lea edx, [esp + 0x2c]
// 008908fb  52                   push edx
// 008908fc  8d442440             lea eax, [esp + 0x40]
// 00890900  50                   push eax
// 00890901  ff15dcca9800         call dword ptr [0x98cadc]
// 00890907  85c0                 test eax, eax
// 00890909  7566                 jne 0x890971
// 0089090b  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0089090f  8b442428             mov eax, dword ptr [esp + 0x28]
// 00890913  3bc8                 cmp ecx, eax
// 00890915  8b3d6ccc9800         mov edi, dword ptr [0x98cc6c]
// 0089091b  7d0e                 jge 0x89092b
// 0089091d  2b442418             sub eax, dword ptr [esp + 0x18]
// 00890921  6a00                 push 0
// 00890923  50                   push eax
// 00890924  8d4c2420             lea ecx, [esp + 0x20]
// 00890928  51                   push ecx
// 00890929  eb14                 jmp 0x89093f
// 0089092b  8b442430             mov eax, dword ptr [esp + 0x30]
// 0089092f  39442418             cmp dword ptr [esp + 0x18], eax
// 00890933  7e0c                 jle 0x890941
// 00890935  6a00                 push 0
// 00890937  2bc1                 sub eax, ecx
// 00890939  50                   push eax
// 0089093a  8d542420             lea edx, [esp + 0x20]
// 0089093e  52                   push edx
// 0089093f  ffd7                 call edi
// 00890941  8b442424             mov eax, dword ptr [esp + 0x24]
// 00890945  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00890949  3bc1                 cmp eax, ecx
// 0089094b  7d0e                 jge 0x89095b
// 0089094d  2b4c241c             sub ecx, dword ptr [esp + 0x1c]
// 00890951  8d442418             lea eax, [esp + 0x18]
// 00890955  51                   push ecx
// 00890956  6a00                 push 0
// 00890958  50                   push eax
// 00890959  eb14                 jmp 0x89096f
// 0089095b  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0089095f  394c241c             cmp dword ptr [esp + 0x1c], ecx
// 00890963  7e10                 jle 0x890975
// 00890965  2bc8                 sub ecx, eax
// 00890967  51                   push ecx
// 00890968  6a00                 push 0
// 0089096a  8d4c2420             lea ecx, [esp + 0x20]
// 0089096e  51                   push ecx
// 0089096f  ffd7                 call edi
// 00890971  8b442424             mov eax, dword ptr [esp + 0x24]
// 00890975  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00890979  8b542418             mov edx, dword ptr [esp + 0x18]
// 0089097d  6a01                 push 1
// 0089097f  2bc1                 sub eax, ecx
// 00890981  50                   push eax
// 00890982  8b442428             mov eax, dword ptr [esp + 0x28]
// 00890986  2bc2                 sub eax, edx
// 00890988  50                   push eax
// 00890989  51                   push ecx
// 0089098a  8b4e04               mov ecx, dword ptr [esi + 4]
// 0089098d  52                   push edx
// 0089098e  e89f32f6ff           call 0x7f3c32
// 00890993  8b4e04               mov ecx, dword ptr [esi + 4]
// 00890996  8b11                 mov edx, dword ptr [ecx]
// 00890998  8b82ac010000         mov eax, dword ptr [edx + 0x1ac]
// 0089099e  6a01                 push 1
// 008909a0  6a00                 push 0
// 008909a2  ffd0                 call eax
// 008909a4  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 008909a8  8b542450             mov edx, dword ptr [esp + 0x50]
// 008909ac  5f                   pop edi
// 008909ad  894e0c               mov dword ptr [esi + 0xc], ecx
// 008909b0  895610               mov dword ptr [esi + 0x10], edx
// 008909b3  5e                   pop esi
// 008909b4  5d                   pop ebp
// 008909b5  5b                   pop ebx
// 008909b6  83c438               add esp, 0x38
// 008909b9  c20800               ret 8
// copied from an identical function in another client (function ?Stretch@CXTPDockContext@@IAEXVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPDockContext.cpp