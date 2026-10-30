// roc 2009-12 00818840  unit: CRobloxReportView  size: 325 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00818840
//
// 00818840  6aff                 push -1
// 00818842  6852a89500           push 0x95a852
// 00818847  64a100000000         mov eax, dword ptr fs:[0]
// 0081884d  50                   push eax
// 0081884e  83ec08               sub esp, 8
// 00818851  53                   push ebx
// 00818852  56                   push esi
// 00818853  57                   push edi
// 00818854  a10052b600           mov eax, dword ptr [0xb65200]
// 00818859  33c4                 xor eax, esp
// 0081885b  50                   push eax
// 0081885c  8d442418             lea eax, [esp + 0x18]
// 00818860  64a300000000         mov dword ptr fs:[0], eax
// 00818866  8bf1                 mov esi, ecx
// 00818868  6aff                 push -1
// 0081886a  8d7e60               lea edi, [esi + 0x60]
// 0081886d  6a00                 push 0
// 0081886f  8bcf                 mov ecx, edi
// 00818871  e89add1000           call 0x926610
// 00818876  8b4708               mov eax, dword ptr [edi + 8]
// 00818879  6a00                 push 0
// 0081887b  50                   push eax
// 0081887c  8bcf                 mov ecx, edi
// 0081887e  e893dd1000           call 0x926616
// 00818883  8d4c2414             lea ecx, [esp + 0x14]
// 00818887  ff1574de9800         call dword ptr [0x98de74]
// 0081888d  8d4c2410             lea ecx, [esp + 0x10]
// 00818891  c744242000000000     mov dword ptr [esp + 0x20], 0
// 00818899  ff1574de9800         call dword ptr [0x98de74]
// 0081889f  8b8e60030000         mov ecx, dword ptr [esi + 0x360]
// 008188a5  c644242001           mov byte ptr [esp + 0x20], 1
// 008188aa  85c9                 test ecx, ecx
// 008188ac  7422                 je 0x8188d0
// 008188ae  e8cd7bf2ff           call 0x740480
// 008188b3  85c0                 test eax, eax
// 008188b5  7419                 je 0x8188d0
// 008188b7  8b8e60030000         mov ecx, dword ptr [esi + 0x360]
// 008188bd  e8be7bf2ff           call 0x740480
// 008188c2  83c060               add eax, 0x60
// 008188c5  50                   push eax
// 008188c6  8d4c2418             lea ecx, [esp + 0x18]
// 008188ca  ff1538d59800         call dword ptr [0x98d538]
// 008188d0  8b8e60030000         mov ecx, dword ptr [esi + 0x360]
// 008188d6  85c9                 test ecx, ecx
// 008188d8  7422                 je 0x8188fc
// 008188da  e8b11e0400           call 0x85a790
// 008188df  85c0                 test eax, eax
// 008188e1  7419                 je 0x8188fc
// 008188e3  8b8e60030000         mov ecx, dword ptr [esi + 0x360]
// 008188e9  e8a21e0400           call 0x85a790
// 008188ee  83c060               add eax, 0x60
// 008188f1  50                   push eax
// 008188f2  8d4c2414             lea ecx, [esp + 0x14]
// 008188f6  ff1538d59800         call dword ptr [0x98d538]
// 008188fc  6a00                 push 0
// 008188fe  685c469f00           push 0x9f465c
// 00818903  8d4c241c             lea ecx, [esp + 0x1c]
// 00818907  ff1500d89800         call dword ptr [0x98d800]
// 0081890d  85c0                 test eax, eax
// 0081890f  7d15                 jge 0x818926
// 00818911  6a00                 push 0
// 00818913  685c469f00           push 0x9f465c
// 00818918  8d4c2418             lea ecx, [esp + 0x18]
// 0081891c  ff1500d89800         call dword ptr [0x98d800]
// 00818922  85c0                 test eax, eax
// 00818924  7c36                 jl 0x81895c
// 00818926  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 0081892a  8b5f14               mov ebx, dword ptr [edi + 0x14]
// 0081892d  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00818931  c74714ffff0000       mov dword ptr [edi + 0x14], 0xffff
// 00818938  8b06                 mov eax, dword ptr [esi]
// 0081893a  8b90b0010000         mov edx, dword ptr [eax + 0x1b0]
// 00818940  57                   push edi
// 00818941  51                   push ecx
// 00818942  8bce                 mov ecx, esi
// 00818944  ffd2                 call edx
// 00818946  85c0                 test eax, eax
// 00818948  740f                 je 0x818959
// 0081894a  668b4668             mov ax, word ptr [esi + 0x68]
// 0081894e  8b0f                 mov ecx, dword ptr [edi]
// 00818950  8b5174               mov edx, dword ptr [ecx + 0x74]
// 00818953  6648                 dec ax
// 00818955  6689421e             mov word ptr [edx + 0x1e], ax
// 00818959  895f14               mov dword ptr [edi + 0x14], ebx
// 0081895c  8d4c2410             lea ecx, [esp + 0x10]
// 00818960  ff15c0de9800         call dword ptr [0x98dec0]
// 00818966  8d4c2414             lea ecx, [esp + 0x14]
// 0081896a  ff15c0de9800         call dword ptr [0x98dec0]
// 00818970  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00818974  64890d00000000       mov dword ptr fs:[0], ecx
// 0081897b  59                   pop ecx
// 0081897c  5f                   pop edi
// 0081897d  5e                   pop esi
// 0081897e  5b                   pop ebx
// 0081897f  83c414               add esp, 0x14
// 00818982  c20800               ret 8
// copied from an identical function in another client (function ?OnBeginPrinting@CXTPReportView@@MAEXPAVCDC@@PAUCPrintInfo@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\ReportControl\XTPReportView.cpp