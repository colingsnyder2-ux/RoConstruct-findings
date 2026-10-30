// roc 2009-12 0089d610  unit: CXTPReportPaintManager  size: 644 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0089d610
//
// 0089d610  6aff                 push -1
// 0089d612  68311d9600           push 0x961d31
// 0089d617  64a100000000         mov eax, dword ptr fs:[0]
// 0089d61d  50                   push eax
// 0089d61e  83ec44               sub esp, 0x44
// 0089d621  53                   push ebx
// 0089d622  55                   push ebp
// 0089d623  56                   push esi
// 0089d624  57                   push edi
// 0089d625  a10052b600           mov eax, dword ptr [0xb65200]
// 0089d62a  33c4                 xor eax, esp
// 0089d62c  50                   push eax
// 0089d62d  8d442458             lea eax, [esp + 0x58]
// 0089d631  64a300000000         mov dword ptr fs:[0], eax
// 0089d637  8bf9                 mov edi, ecx
// 0089d639  8b74246c             mov esi, dword ptr [esp + 0x6c]
// 0089d63d  8b465c               mov eax, dword ptr [esi + 0x5c]
// 0089d640  8d4c246c             lea ecx, [esp + 0x6c]
// 0089d644  51                   push ecx
// 0089d645  8bce                 mov ecx, esi
// 0089d647  89442418             mov dword ptr [esp + 0x18], eax
// 0089d64b  e820caf7ff           call 0x81a070
// 0089d650  8b6c2468             mov ebp, dword ptr [esp + 0x68]
// 0089d654  837d0c00             cmp dword ptr [ebp + 0xc], 0
// 0089d658  c744246000000000     mov dword ptr [esp + 0x60], 0
// 0089d660  8bce                 mov ecx, esi
// 0089d662  740c                 je 0x89d670
// 0089d664  8b542470             mov edx, dword ptr [esp + 0x70]
// 0089d668  52                   push edx
// 0089d669  e842abf8ff           call 0x8281b0
// 0089d66e  eb05                 jmp 0x89d675
// 0089d670  e80babf8ff           call 0x828180
// 0089d675  8bd8                 mov ebx, eax
// 0089d677  8d442438             lea eax, [esp + 0x38]
// 0089d67b  50                   push eax
// 0089d67c  8bce                 mov ecx, esi
// 0089d67e  e84da4f8ff           call 0x827ad0
// 0089d683  83bea800000000       cmp dword ptr [esi + 0xa8], 0
// 0089d68a  8b442438             mov eax, dword ptr [esp + 0x38]
// 0089d68e  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 0089d692  8d0c18               lea ecx, [eax + ebx]
// 0089d695  89442428             mov dword ptr [esp + 0x28], eax
// 0089d699  8b442444             mov eax, dword ptr [esp + 0x44]
// 0089d69d  894c2440             mov dword ptr [esp + 0x40], ecx
// 0089d6a1  8954242c             mov dword ptr [esp + 0x2c], edx
// 0089d6a5  894c2430             mov dword ptr [esp + 0x30], ecx
// 0089d6a9  89442434             mov dword ptr [esp + 0x34], eax
// 0089d6ad  750b                 jne 0x89d6ba
// 0089d6af  8bce                 mov ecx, esi
// 0089d6b1  e86aa8f8ff           call 0x827f20
// 0089d6b6  01442428             add dword ptr [esp + 0x28], eax
// 0089d6ba  8bce                 mov ecx, esi
// 0089d6bc  e81fa5f8ff           call 0x827be0
// 0089d6c1  bb01000000           mov ebx, 1
// 0089d6c6  85c0                 test eax, eax
// 0089d6c8  740a                 je 0x89d6d4
// 0089d6ca  837d0c00             cmp dword ptr [ebp + 0xc], 0
// 0089d6ce  895c2468             mov dword ptr [esp + 0x68], ebx
// 0089d6d2  7408                 je 0x89d6dc
// 0089d6d4  c744246800000000     mov dword ptr [esp + 0x68], 0
// 0089d6dc  8d4f30               lea ecx, [edi + 0x30]
// 0089d6df  51                   push ecx
// 0089d6e0  55                   push ebp
// 0089d6e1  8d4c2450             lea ecx, [esp + 0x50]
// 0089d6e5  e876dffaff           call 0x84b660
// 0089d6ea  8d542420             lea edx, [esp + 0x20]
// 0089d6ee  52                   push edx
// 0089d6ef  8d4c2470             lea ecx, [esp + 0x70]
// 0089d6f3  885c2464             mov byte ptr [esp + 0x64], bl
// 0089d6f7  ff15b4dd9800         call dword ptr [0x98ddb4]
// 0089d6fd  50                   push eax
// 0089d6fe  8d4c2474             lea ecx, [esp + 0x74]
// 0089d702  ff1580de9800         call dword ptr [0x98de80]
// 0089d708  50                   push eax
// 0089d709  8b4508               mov eax, dword ptr [ebp + 8]
// 0089d70c  50                   push eax
// 0089d70d  ff156cb19800         call dword ptr [0x98b16c]
// 0089d713  8b442414             mov eax, dword ptr [esp + 0x14]
// 0089d717  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 0089d71b  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0089d71f  895c2418             mov dword ptr [esp + 0x18], ebx
// 0089d723  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0089d727  83f8ff               cmp eax, -1
// 0089d72a  7447                 je 0x89d773
// 0089d72c  8b542428             mov edx, dword ptr [esp + 0x28]
// 0089d730  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0089d734  8b1f                 mov ebx, dword ptr [edi]
// 0089d736  50                   push eax
// 0089d737  83ec10               sub esp, 0x10
// 0089d73a  8bc4                 mov eax, esp
// 0089d73c  8910                 mov dword ptr [eax], edx
// 0089d73e  8b542444             mov edx, dword ptr [esp + 0x44]
// 0089d742  894804               mov dword ptr [eax + 4], ecx
// 0089d745  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0089d749  895008               mov dword ptr [eax + 8], edx
// 0089d74c  89480c               mov dword ptr [eax + 0xc], ecx
// 0089d74f  8bce                 mov ecx, esi
// 0089d751  e83aa5f8ff           call 0x827c90
// 0089d756  8b93a8000000         mov edx, dword ptr [ebx + 0xa8]
// 0089d75c  50                   push eax
// 0089d75d  6a00                 push 0
// 0089d75f  8bcf                 mov ecx, edi
// 0089d761  ffd2                 call edx
// 0089d763  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0089d767  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 0089d76b  8d540102             lea edx, [ecx + eax + 2]
// 0089d76f  89542428             mov dword ptr [esp + 0x28], edx
// 0089d773  b803000000           mov eax, 3
// 0089d778  01442428             add dword ptr [esp + 0x28], eax
// 0089d77c  29442430             sub dword ptr [esp + 0x30], eax
// 0089d780  8d4c246c             lea ecx, [esp + 0x6c]
// 0089d784  ff15b4dd9800         call dword ptr [0x98ddb4]
// 0089d78a  85c0                 test eax, eax
// 0089d78c  0f8ecf000000         jle 0x89d861
// 0089d792  8b542430             mov edx, dword ptr [esp + 0x30]
// 0089d796  8b442428             mov eax, dword ptr [esp + 0x28]
// 0089d79a  3bd0                 cmp edx, eax
// 0089d79c  0f8ebf000000         jle 0x89d861
// 0089d7a2  83bf2802000000       cmp dword ptr [edi + 0x228], 0
// 0089d7a9  7441                 je 0x89d7ec
// 0089d7ab  837c246800           cmp dword ptr [esp + 0x68], 0
// 0089d7b0  743a                 je 0x89d7ec
// 0089d7b2  8bca                 mov ecx, edx
// 0089d7b4  2bc8                 sub ecx, eax
// 0089d7b6  8d41e5               lea eax, [ecx - 0x1b]
// 0089d7b9  3bd8                 cmp ebx, eax
// 0089d7bb  8bcb                 mov ecx, ebx
// 0089d7bd  7c02                 jl 0x89d7c1
// 0089d7bf  8bc8                 mov ecx, eax
// 0089d7c1  83f9fb               cmp ecx, -5
// 0089d7c4  7d0a                 jge 0x89d7d0
// 0089d7c6  c7442418fbffffff     mov dword ptr [esp + 0x18], 0xfffffffb
// 0089d7ce  eb08                 jmp 0x89d7d8
// 0089d7d0  3bd8                 cmp ebx, eax
// 0089d7d2  7c04                 jl 0x89d7d8
// 0089d7d4  89442418             mov dword ptr [esp + 0x18], eax
// 0089d7d8  8b442428             mov eax, dword ptr [esp + 0x28]
// 0089d7dc  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0089d7e0  8d440108             lea eax, [ecx + eax + 8]
// 0089d7e4  3bd0                 cmp edx, eax
// 0089d7e6  7c04                 jl 0x89d7ec
// 0089d7e8  89442430             mov dword ptr [esp + 0x30], eax
// 0089d7ec  8bce                 mov ecx, esi
// 0089d7ee  e85da2f8ff           call 0x827a50
// 0089d7f3  8b7500               mov esi, dword ptr [ebp]
// 0089d7f6  2410                 and al, 0x10
// 0089d7f8  0fbec0               movsx eax, al
// 0089d7fb  f7d8                 neg eax
// 0089d7fd  1bc0                 sbb eax, eax
// 0089d7ff  83e0f0               and eax, 0xfffffff0
// 0089d802  83c020               add eax, 0x20
// 0089d805  0d048c0000           or eax, 0x8c04
// 0089d80a  50                   push eax
// 0089d80b  8d54242c             lea edx, [esp + 0x2c]
// 0089d80f  52                   push edx
// 0089d810  8d4c2474             lea ecx, [esp + 0x74]
// 0089d814  ff15b4dd9800         call dword ptr [0x98ddb4]
// 0089d81a  50                   push eax
// 0089d81b  8d4c2478             lea ecx, [esp + 0x78]
// 0089d81f  ff1580de9800         call dword ptr [0x98de80]
// 0089d825  50                   push eax
// 0089d826  8b4670               mov eax, dword ptr [esi + 0x70]
// 0089d829  8bcd                 mov ecx, ebp
// 0089d82b  ffd0                 call eax
// 0089d82d  8b442434             mov eax, dword ptr [esp + 0x34]
// 0089d831  2b44242c             sub eax, dword ptr [esp + 0x2c]
// 0089d835  8b8fe4020000         mov ecx, dword ptr [edi + 0x2e4]
// 0089d83b  8b11                 mov edx, dword ptr [ecx]
// 0089d83d  50                   push eax
// 0089d83e  8b4258               mov eax, dword ptr [edx + 0x58]
// 0089d841  ffd0                 call eax
// 0089d843  8d4c2448             lea ecx, [esp + 0x48]
// 0089d847  8bf0                 mov esi, eax
// 0089d849  c644246000           mov byte ptr [esp + 0x60], 0
// 0089d84e  e88ddefaff           call 0x84b6e0
// 0089d853  8d4c246c             lea ecx, [esp + 0x6c]
// 0089d857  ff15c0de9800         call dword ptr [0x98dec0]
// 0089d85d  8bc6                 mov eax, esi
// 0089d85f  eb1d                 jmp 0x89d87e
// 0089d861  8d4c2448             lea ecx, [esp + 0x48]
// 0089d865  c644246000           mov byte ptr [esp + 0x60], 0
// 0089d86a  e871defaff           call 0x84b6e0
// 0089d86f  8d4c246c             lea ecx, [esp + 0x6c]
// 0089d873  ff15c0de9800         call dword ptr [0x98dec0]
// 0089d879  b808000000           mov eax, 8
// 0089d87e  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 0089d882  64890d00000000       mov dword ptr fs:[0], ecx
// 0089d889  59                   pop ecx
// 0089d88a  5f                   pop edi
// 0089d88b  5e                   pop esi
// 0089d88c  5d                   pop ebp
// 0089d88d  5b                   pop ebx
// 0089d88e  83c450               add esp, 0x50
// 0089d891  c20c00               ret 0xc
// copied from an identical function in another client (function ?CalcColumnHeight@CXTPReportPaintManager@@MAEHPAVCDC@@PAVCXTPReportColumn@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/ReportControl/XTPReportPaintManager.cpp