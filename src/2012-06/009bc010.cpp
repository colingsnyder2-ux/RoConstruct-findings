// roc 2012-06 009bc010  unit: VCXTPReportRows::?$CXTPHeapObjectT  size: 722 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009bc010
//
// 009bc010  6aff                 push -1
// 009bc012  68f3f0ad00           push 0xadf0f3
// 009bc017  64a100000000         mov eax, dword ptr fs:[0]
// 009bc01d  50                   push eax
// 009bc01e  83ec3c               sub esp, 0x3c
// 009bc021  53                   push ebx
// 009bc022  55                   push ebp
// 009bc023  56                   push esi
// 009bc024  57                   push edi
// 009bc025  a1d027e000           mov eax, dword ptr [0xe027d0]
// 009bc02a  33c4                 xor eax, esp
// 009bc02c  50                   push eax
// 009bc02d  8d442450             lea eax, [esp + 0x50]
// 009bc031  64a300000000         mov dword ptr fs:[0], eax
// 009bc037  8be9                 mov ebp, ecx
// 009bc039  896c2420             mov dword ptr [esp + 0x20], ebp
// 009bc03d  8b442464             mov eax, dword ptr [esp + 0x64]
// 009bc041  33db                 xor ebx, ebx
// 009bc043  895c2414             mov dword ptr [esp + 0x14], ebx
// 009bc047  33ff                 xor edi, edi
// 009bc049  8918                 mov dword ptr [eax], ebx
// 009bc04b  395d28               cmp dword ptr [ebp + 0x28], ebx
// 009bc04e  895c2418             mov dword ptr [esp + 0x18], ebx
// 009bc052  897c241c             mov dword ptr [esp + 0x1c], edi
// 009bc056  0f8e91010000         jle 0x9bc1ed
// 009bc05c  8d642400             lea esp, [esp]
// 009bc060  3bfb                 cmp edi, ebx
// 009bc062  0f8c75020000         jl 0x9bc2dd
// 009bc068  3b7d28               cmp edi, dword ptr [ebp + 0x28]
// 009bc06b  0f8d6c020000         jge 0x9bc2dd
// 009bc071  8b4d24               mov ecx, dword ptr [ebp + 0x24]
// 009bc074  8b34b9               mov esi, dword ptr [ecx + edi*4]
// 009bc077  8b16                 mov edx, dword ptr [esi]
// 009bc079  8d04b9               lea eax, [ecx + edi*4]
// 009bc07c  8b8288000000         mov eax, dword ptr [edx + 0x88]
// 009bc082  8bce                 mov ecx, esi
// 009bc084  8974242c             mov dword ptr [esp + 0x2c], esi
// 009bc088  ffd0                 call eax
// 009bc08a  85c0                 test eax, eax
// 009bc08c  0f84a1010000         je 0x9bc233
// 009bc092  8b6c2460             mov ebp, dword ptr [esp + 0x60]
// 009bc096  8b5500               mov edx, dword ptr [ebp]
// 009bc099  8b4260               mov eax, dword ptr [edx + 0x60]
// 009bc09c  8bcd                 mov ecx, ebp
// 009bc09e  ffd0                 call eax
// 009bc0a0  8bf8                 mov edi, eax
// 009bc0a2  8b4524               mov eax, dword ptr [ebp + 0x24]
// 009bc0a5  8b80ec000000         mov eax, dword ptr [eax + 0xec]
// 009bc0ab  3bfb                 cmp edi, ebx
// 009bc0ad  0f8424010000         je 0x9bc1d7
// 009bc0b3  3bc3                 cmp eax, ebx
// 009bc0b5  0f841c010000         je 0x9bc1d7
// 009bc0bb  8b16                 mov edx, dword ptr [esi]
// 009bc0bd  8b6820               mov ebp, dword ptr [eax + 0x20]
// 009bc0c0  8b82dc000000         mov eax, dword ptr [edx + 0xdc]
// 009bc0c6  8bce                 mov ecx, esi
// 009bc0c8  ffd0                 call eax
// 009bc0ca  50                   push eax
// 009bc0cb  8bcd                 mov ecx, ebp
// 009bc0cd  e82e9f0300           call 0x9f6000
// 009bc0d2  8be8                 mov ebp, eax
// 009bc0d4  55                   push ebp
// 009bc0d5  8bcf                 mov ecx, edi
// 009bc0d7  e8e4ccffff           call 0x9b8dc0
// 009bc0dc  3bc3                 cmp eax, ebx
// 009bc0de  7422                 je 0x9bc102
// 009bc0e0  8b10                 mov edx, dword ptr [eax]
// 009bc0e2  8b5274               mov edx, dword ptr [edx + 0x74]
// 009bc0e5  55                   push ebp
// 009bc0e6  8d4c2428             lea ecx, [esp + 0x28]
// 009bc0ea  51                   push ecx
// 009bc0eb  8bc8                 mov ecx, eax
// 009bc0ed  ffd2                 call edx
// 009bc0ef  834c241401           or dword ptr [esp + 0x14], 1
// 009bc0f4  8bc8                 mov ecx, eax
// 009bc0f6  895c2458             mov dword ptr [esp + 0x58], ebx
// 009bc0fa  ff159847b200         call dword ptr [0xb24798]
// 009bc100  eb05                 jmp 0x9bc107
// 009bc102  b8e83bb400           mov eax, 0xb43be8
// 009bc107  33c9                 xor ecx, ecx
// 009bc109  66894c2440           mov word ptr [esp + 0x40], cx
// 009bc10e  50                   push eax
// 009bc10f  8d4c2444             lea ecx, [esp + 0x44]
// 009bc113  e882d60d00           call 0xa9979a
// 009bc118  f644241401           test byte ptr [esp + 0x14], 1
// 009bc11d  c744245802000000     mov dword ptr [esp + 0x58], 2
// 009bc125  740f                 je 0x9bc136
// 009bc127  83642414fe           and dword ptr [esp + 0x14], 0xfffffffe
// 009bc12c  8d4c2424             lea ecx, [esp + 0x24]
// 009bc130  ff15d047b200         call dword ptr [0xb247d0]
// 009bc136  8b16                 mov edx, dword ptr [esi]
// 009bc138  8b92fc000000         mov edx, dword ptr [edx + 0xfc]
// 009bc13e  8d442428             lea eax, [esp + 0x28]
// 009bc142  50                   push eax
// 009bc143  8bce                 mov ecx, esi
// 009bc145  ffd2                 call edx
// 009bc147  8bc8                 mov ecx, eax
// 009bc149  c644245803           mov byte ptr [esp + 0x58], 3
// 009bc14e  ff159847b200         call dword ptr [0xb24798]
// 009bc154  33c9                 xor ecx, ecx
// 009bc156  66894c2430           mov word ptr [esp + 0x30], cx
// 009bc15b  50                   push eax
// 009bc15c  8d4c2434             lea ecx, [esp + 0x34]
// 009bc160  e835d60d00           call 0xa9979a
// 009bc165  8d4c2428             lea ecx, [esp + 0x28]
// 009bc169  c644245805           mov byte ptr [esp + 0x58], 5
// 009bc16e  ff15d047b200         call dword ptr [0xb247d0]
// 009bc174  8b4750               mov eax, dword ptr [edi + 0x50]
// 009bc177  8b4040               mov eax, dword ptr [eax + 0x40]
// 009bc17a  33d2                 xor edx, edx
// 009bc17c  3bc3                 cmp eax, ebx
// 009bc17e  a1d03ae000           mov eax, dword ptr [0xe03ad0]
// 009bc183  0f94c2               sete dl
// 009bc186  8bfa                 mov edi, edx
// 009bc188  3d00040000           cmp eax, 0x400
// 009bc18d  7505                 jne 0x9bc194
// 009bc18f  e8ccc8feff           call 0x9a8a60
// 009bc194  57                   push edi
// 009bc195  50                   push eax
// 009bc196  8d442438             lea eax, [esp + 0x38]
// 009bc19a  50                   push eax
// 009bc19b  8d4c244c             lea ecx, [esp + 0x4c]
// 009bc19f  51                   push ecx
// 009bc1a0  e807dd0d00           call 0xa99eac
// 009bc1a5  8b6d40               mov ebp, dword ptr [ebp + 0x40]
// 009bc1a8  8bf8                 mov edi, eax
// 009bc1aa  4f                   dec edi
// 009bc1ab  3beb                 cmp ebp, ebx
// 009bc1ad  7408                 je 0x9bc1b7
// 009bc1af  3bfb                 cmp edi, ebx
// 009bc1b1  7f08                 jg 0x9bc1bb
// 009bc1b3  3beb                 cmp ebp, ebx
// 009bc1b5  7550                 jne 0x9bc207
// 009bc1b7  3bfb                 cmp edi, ebx
// 009bc1b9  7d4c                 jge 0x9bc207
// 009bc1bb  8b352c2bb200         mov esi, dword ptr [0xb22b2c]
// 009bc1c1  8d542430             lea edx, [esp + 0x30]
// 009bc1c5  52                   push edx
// 009bc1c6  ffd6                 call esi
// 009bc1c8  8d442440             lea eax, [esp + 0x40]
// 009bc1cc  c7442458ffffffff     mov dword ptr [esp + 0x58], 0xffffffff
// 009bc1d4  50                   push eax
// 009bc1d5  ffd6                 call esi
// 009bc1d7  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 009bc1db  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 009bc1df  47                   inc edi
// 009bc1e0  3b7d28               cmp edi, dword ptr [ebp + 0x28]
// 009bc1e3  897c241c             mov dword ptr [esp + 0x1c], edi
// 009bc1e7  0f8c73feffff         jl 0x9bc060
// 009bc1ed  8b442418             mov eax, dword ptr [esp + 0x18]
// 009bc1f1  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 009bc1f5  64890d00000000       mov dword ptr fs:[0], ecx
// 009bc1fc  59                   pop ecx
// 009bc1fd  5f                   pop edi
// 009bc1fe  5e                   pop esi
// 009bc1ff  5d                   pop ebp
// 009bc200  5b                   pop ebx
// 009bc201  83c448               add esp, 0x48
// 009bc204  c20800               ret 8
// 009bc207  8b16                 mov edx, dword ptr [esi]
// 009bc209  8b82b8000000         mov eax, dword ptr [edx + 0xb8]
// 009bc20f  8bce                 mov ecx, esi
// 009bc211  ffd0                 call eax
// 009bc213  85c0                 test eax, eax
// 009bc215  7538                 jne 0x9bc24f
// 009bc217  8b352c2bb200         mov esi, dword ptr [0xb22b2c]
// 009bc21d  8d4c2430             lea ecx, [esp + 0x30]
// 009bc221  51                   push ecx
// 009bc222  ffd6                 call esi
// 009bc224  8d542440             lea edx, [esp + 0x40]
// 009bc228  c7442458ffffffff     mov dword ptr [esp + 0x58], 0xffffffff
// 009bc230  52                   push edx
// 009bc231  eba2                 jmp 0x9bc1d5
// 009bc233  8d44242c             lea eax, [esp + 0x2c]
// 009bc237  50                   push eax
// 009bc238  8d4c2464             lea ecx, [esp + 0x64]
// 009bc23c  51                   push ecx
// 009bc23d  e87efbffff           call 0x9bbdc0
// 009bc242  83c408               add esp, 8
// 009bc245  85c0                 test eax, eax
// 009bc247  7f96                 jg 0x9bc1df
// 009bc249  89742418             mov dword ptr [esp + 0x18], esi
// 009bc24d  eb9e                 jmp 0x9bc1ed
// 009bc24f  3bfb                 cmp edi, ebx
// 009bc251  0f8580000000         jne 0x9bc2d7
// 009bc257  8b16                 mov edx, dword ptr [esi]
// 009bc259  8b82b8000000         mov eax, dword ptr [edx + 0xb8]
// 009bc25f  8bce                 mov ecx, esi
// 009bc261  ffd0                 call eax
// 009bc263  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 009bc267  8b10                 mov edx, dword ptr [eax]
// 009bc269  8b9284000000         mov edx, dword ptr [edx + 0x84]
// 009bc26f  51                   push ecx
// 009bc270  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 009bc274  51                   push ecx
// 009bc275  8bc8                 mov ecx, eax
// 009bc277  ffd2                 call edx
// 009bc279  89442418             mov dword ptr [esp + 0x18], eax
// 009bc27d  3bc3                 cmp eax, ebx
// 009bc27f  753d                 jne 0x9bc2be
// 009bc281  8b06                 mov eax, dword ptr [esi]
// 009bc283  8b90b8000000         mov edx, dword ptr [eax + 0xb8]
// 009bc289  8bce                 mov ecx, esi
// 009bc28b  ffd2                 call edx
// 009bc28d  8be8                 mov ebp, eax
// 009bc28f  8b06                 mov eax, dword ptr [esi]
// 009bc291  8b7d00               mov edi, dword ptr [ebp]
// 009bc294  8b90b8000000         mov edx, dword ptr [eax + 0xb8]
// 009bc29a  8bce                 mov ecx, esi
// 009bc29c  83c75c               add edi, 0x5c
// 009bc29f  ffd2                 call edx
// 009bc2a1  8bc8                 mov ecx, eax
// 009bc2a3  e8c8e9ffff           call 0x9bac70
// 009bc2a8  48                   dec eax
// 009bc2a9  50                   push eax
// 009bc2aa  8b07                 mov eax, dword ptr [edi]
// 009bc2ac  8bcd                 mov ecx, ebp
// 009bc2ae  ffd0                 call eax
// 009bc2b0  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 009bc2b4  89442418             mov dword ptr [esp + 0x18], eax
// 009bc2b8  c70101000000         mov dword ptr [ecx], 1
// 009bc2be  8b352c2bb200         mov esi, dword ptr [0xb22b2c]
// 009bc2c4  8d542430             lea edx, [esp + 0x30]
// 009bc2c8  52                   push edx
// 009bc2c9  ffd6                 call esi
// 009bc2cb  8d442440             lea eax, [esp + 0x40]
// 009bc2cf  50                   push eax
// 009bc2d0  ffd6                 call esi
// 009bc2d2  e916ffffff           jmp 0x9bc1ed
// 009bc2d7  89742418             mov dword ptr [esp + 0x18], esi
// 009bc2db  ebe1                 jmp 0x9bc2be
// 009bc2dd  e8de60fcff           call 0x9823c0
// copied from an identical function in another client (function ?FindInsertionPos@CXTPReportRows@@UAEPAVCXTPReportRow@@PAV2@AAH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\ReportControl\XTPReportRows.cpp