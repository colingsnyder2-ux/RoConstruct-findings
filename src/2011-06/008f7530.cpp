// roc 2011-06 008f7530  unit: CXTPRibbonGroup  size: 339 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008f7530
//
// 008f7530  83ec28               sub esp, 0x28
// 008f7533  53                   push ebx
// 008f7534  55                   push ebp
// 008f7535  56                   push esi
// 008f7536  8bf1                 mov esi, ecx
// 008f7538  8b4e5c               mov ecx, dword ptr [esi + 0x5c]
// 008f753b  57                   push edi
// 008f753c  e8ffe9faff           call 0x8a5f40
// 008f7541  8b10                 mov edx, dword ptr [eax]
// 008f7543  8b6c243c             mov ebp, dword ptr [esp + 0x3c]
// 008f7547  56                   push esi
// 008f7548  8bc8                 mov ecx, eax
// 008f754a  8b8240010000         mov eax, dword ptr [edx + 0x140]
// 008f7550  55                   push ebp
// 008f7551  ffd0                 call eax
// 008f7553  8b464c               mov eax, dword ptr [esi + 0x4c]
// 008f7556  33db                 xor ebx, ebx
// 008f7558  c744243c01000000     mov dword ptr [esp + 0x3c], 1
// 008f7560  85c0                 test eax, eax
// 008f7562  0f8eca000000         jle 0x8f7632
// 008f7568  85db                 test ebx, ebx
// 008f756a  7c15                 jl 0x8f7581
// 008f756c  3bd8                 cmp ebx, eax
// 008f756e  7d11                 jge 0x8f7581
// 008f7570  3b5e4c               cmp ebx, dword ptr [esi + 0x4c]
// 008f7573  0f8d05010000         jge 0x8f767e
// 008f7579  8b4e48               mov ecx, dword ptr [esi + 0x48]
// 008f757c  8b3c99               mov edi, dword ptr [ecx + ebx*4]
// 008f757f  eb02                 jmp 0x8f7583
// 008f7581  33ff                 xor edi, edi
// 008f7583  8b17                 mov edx, dword ptr [edi]
// 008f7585  8b8280000000         mov eax, dword ptr [edx + 0x80]
// 008f758b  6a00                 push 0
// 008f758d  8bcf                 mov ecx, edi
// 008f758f  ffd0                 call eax
// 008f7591  85c0                 test eax, eax
// 008f7593  0f848d000000         je 0x8f7626
// 008f7599  837e2400             cmp dword ptr [esi + 0x24], 0
// 008f759d  7531                 jne 0x8f75d0
// 008f759f  83bf9800000000       cmp dword ptr [edi + 0x98], 0
// 008f75a6  7428                 je 0x8f75d0
// 008f75a8  837c243c00           cmp dword ptr [esp + 0x3c], 0
// 008f75ad  7521                 jne 0x8f75d0
// 008f75af  8b4e5c               mov ecx, dword ptr [esi + 0x5c]
// 008f75b2  e89935f2ff           call 0x81ab50
// 008f75b7  8b4e5c               mov ecx, dword ptr [esi + 0x5c]
// 008f75ba  8b10                 mov edx, dword ptr [eax]
// 008f75bc  8b928c000000         mov edx, dword ptr [edx + 0x8c]
// 008f75c2  6a01                 push 1
// 008f75c4  57                   push edi
// 008f75c5  51                   push ecx
// 008f75c6  55                   push ebp
// 008f75c7  8d4c2420             lea ecx, [esp + 0x20]
// 008f75cb  51                   push ecx
// 008f75cc  8bc8                 mov ecx, eax
// 008f75ce  ffd2                 call edx
// 008f75d0  8b8fc4000000         mov ecx, dword ptr [edi + 0xc4]
// 008f75d6  8b87c0000000         mov eax, dword ptr [edi + 0xc0]
// 008f75dc  8b97c8000000         mov edx, dword ptr [edi + 0xc8]
// 008f75e2  89442418             mov dword ptr [esp + 0x18], eax
// 008f75e6  8b87cc000000         mov eax, dword ptr [edi + 0xcc]
// 008f75ec  894c241c             mov dword ptr [esp + 0x1c], ecx
// 008f75f0  8d4c2418             lea ecx, [esp + 0x18]
// 008f75f4  89542420             mov dword ptr [esp + 0x20], edx
// 008f75f8  51                   push ecx
// 008f75f9  8d542444             lea edx, [esp + 0x44]
// 008f75fd  89442428             mov dword ptr [esp + 0x28], eax
// 008f7601  52                   push edx
// 008f7602  8d442430             lea eax, [esp + 0x30]
// 008f7606  50                   push eax
// 008f7607  ff15fc1ba400         call dword ptr [0xa41bfc]
// 008f760d  85c0                 test eax, eax
// 008f760f  740d                 je 0x8f761e
// 008f7611  8b17                 mov edx, dword ptr [edi]
// 008f7613  8b82a0000000         mov eax, dword ptr [edx + 0xa0]
// 008f7619  55                   push ebp
// 008f761a  8bcf                 mov ecx, edi
// 008f761c  ffd0                 call eax
// 008f761e  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 008f7626  8b464c               mov eax, dword ptr [esi + 0x4c]
// 008f7629  43                   inc ebx
// 008f762a  3bd8                 cmp ebx, eax
// 008f762c  0f8c36ffffff         jl 0x8f7568
// 008f7632  8b4e6c               mov ecx, dword ptr [esi + 0x6c]
// 008f7635  8b11                 mov edx, dword ptr [ecx]
// 008f7637  8b8280000000         mov eax, dword ptr [edx + 0x80]
// 008f763d  6a00                 push 0
// 008f763f  ffd0                 call eax
// 008f7641  85c0                 test eax, eax
// 008f7643  740e                 je 0x8f7653
// 008f7645  8b4e6c               mov ecx, dword ptr [esi + 0x6c]
// 008f7648  8b11                 mov edx, dword ptr [ecx]
// 008f764a  8b82a0000000         mov eax, dword ptr [edx + 0xa0]
// 008f7650  55                   push ebp
// 008f7651  ffd0                 call eax
// 008f7653  8b4e68               mov ecx, dword ptr [esi + 0x68]
// 008f7656  8b11                 mov edx, dword ptr [ecx]
// 008f7658  8b8280000000         mov eax, dword ptr [edx + 0x80]
// 008f765e  6a00                 push 0
// 008f7660  ffd0                 call eax
// 008f7662  85c0                 test eax, eax
// 008f7664  740e                 je 0x8f7674
// 008f7666  8b4e68               mov ecx, dword ptr [esi + 0x68]
// 008f7669  8b11                 mov edx, dword ptr [ecx]
// 008f766b  8b82a0000000         mov eax, dword ptr [edx + 0xa0]
// 008f7671  55                   push ebp
// 008f7672  ffd0                 call eax
// 008f7674  5f                   pop edi
// 008f7675  5e                   pop esi
// 008f7676  5d                   pop ebp
// 008f7677  5b                   pop ebx
// 008f7678  83c428               add esp, 0x28
// 008f767b  c21400               ret 0x14
// 008f767e  e8872cf1ff           call 0x80a30a
// copied from an identical function in another client (function ?Draw@CXTPRibbonGroup@@UAEXPAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Ribbon\XTPRibbonGroup.cpp