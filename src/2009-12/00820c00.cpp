// roc 2009-12 00820c00  unit: CXTPReportControl  size: 195 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00820c00
//
// 00820c00  6aff                 push -1
// 00820c02  68d8af9500           push 0x95afd8
// 00820c07  64a100000000         mov eax, dword ptr fs:[0]
// 00820c0d  50                   push eax
// 00820c0e  83ec24               sub esp, 0x24
// 00820c11  56                   push esi
// 00820c12  57                   push edi
// 00820c13  a10052b600           mov eax, dword ptr [0xb65200]
// 00820c18  33c4                 xor eax, esp
// 00820c1a  50                   push eax
// 00820c1b  8d442430             lea eax, [esp + 0x30]
// 00820c1f  64a300000000         mov dword ptr fs:[0], eax
// 00820c25  8bf9                 mov edi, ecx
// 00820c27  8b442440             mov eax, dword ptr [esp + 0x40]
// 00820c2b  50                   push eax
// 00820c2c  e8ff571000           call 0x926430
// 00820c31  8bf0                 mov esi, eax
// 00820c33  85f6                 test esi, esi
// 00820c35  7473                 je 0x820caa
// 00820c37  8d87b0010000         lea eax, [edi + 0x1b0]
// 00820c3d  85c0                 test eax, eax
// 00820c3f  7406                 je 0x820c47
// 00820c41  83780400             cmp dword ptr [eax + 4], 0
// 00820c45  750f                 jne 0x820c56
// 00820c47  8b17                 mov edx, dword ptr [edi]
// 00820c49  8b82a8010000         mov eax, dword ptr [edx + 0x1a8]
// 00820c4f  56                   push esi
// 00820c50  8bcf                 mov ecx, edi
// 00820c52  ffd0                 call eax
// 00820c54  eb54                 jmp 0x820caa
// 00820c56  50                   push eax
// 00820c57  56                   push esi
// 00820c58  8d4c2424             lea ecx, [esp + 0x24]
// 00820c5c  e81fac0200           call 0x84b880
// 00820c61  57                   push edi
// 00820c62  8d4c2410             lea ecx, [esp + 0x10]
// 00820c66  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 00820c6e  e85da60200           call 0x84b2d0
// 00820c73  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00820c77  8b542418             mov edx, dword ptr [esp + 0x18]
// 00820c7b  8b442414             mov eax, dword ptr [esp + 0x14]
// 00820c7f  682000cc00           push 0xcc0020
// 00820c84  6a00                 push 0
// 00820c86  6a00                 push 0
// 00820c88  51                   push ecx
// 00820c89  8b4e04               mov ecx, dword ptr [esi + 4]
// 00820c8c  52                   push edx
// 00820c8d  50                   push eax
// 00820c8e  6a00                 push 0
// 00820c90  6a00                 push 0
// 00820c92  51                   push ecx
// 00820c93  ff1548b19800         call dword ptr [0x98b148]
// 00820c99  8d4c241c             lea ecx, [esp + 0x1c]
// 00820c9d  c7442438ffffffff     mov dword ptr [esp + 0x38], 0xffffffff
// 00820ca5  e8e6ac0200           call 0x84b990
// 00820caa  b801000000           mov eax, 1
// 00820caf  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00820cb3  64890d00000000       mov dword ptr fs:[0], ecx
// 00820cba  59                   pop ecx
// 00820cbb  5f                   pop edi
// 00820cbc  5e                   pop esi
// 00820cbd  83c430               add esp, 0x30
// 00820cc0  c20800               ret 8
// copied from an identical function in another client (function ?OnPrintClient@CXTPReportControl@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\ReportControl\XTPReportControl.cpp