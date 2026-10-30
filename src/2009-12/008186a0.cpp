// roc 2009-12 008186a0  unit: CXTPPrintingDialog  size: 132 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008186a0
//
// 008186a0  53                   push ebx
// 008186a1  56                   push esi
// 008186a2  57                   push edi
// 008186a3  8bf1                 mov esi, ecx
// 008186a5  e886b7fdff           call 0x7f3e30
// 008186aa  8b8664030000         mov eax, dword ptr [esi + 0x364]
// 008186b0  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 008186b4  85c0                 test eax, eax
// 008186b6  7428                 je 0x8186e0
// 008186b8  83782000             cmp dword ptr [eax + 0x20], 0
// 008186bc  7422                 je 0x8186e0
// 008186be  6a02                 push 2
// 008186c0  ff15dccb9800         call dword ptr [0x98cbdc]
// 008186c6  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 008186ca  8b8e64030000         mov ecx, dword ptr [esi + 0x364]
// 008186d0  6a01                 push 1
// 008186d2  53                   push ebx
// 008186d3  50                   push eax
// 008186d4  2bf8                 sub edi, eax
// 008186d6  6a00                 push 0
// 008186d8  57                   push edi
// 008186d9  e854b5fdff           call 0x7f3c32
// 008186de  eb04                 jmp 0x8186e4
// 008186e0  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 008186e4  83be7403000000       cmp dword ptr [esi + 0x374], 0
// 008186eb  7431                 je 0x81871e
// 008186ed  8b06                 mov eax, dword ptr [esi]
// 008186ef  8b9094010000         mov edx, dword ptr [eax + 0x194]
// 008186f5  8bce                 mov ecx, esi
// 008186f7  ffd2                 call edx
// 008186f9  85c0                 test eax, eax
// 008186fb  7421                 je 0x81871e
// 008186fd  83782000             cmp dword ptr [eax + 0x20], 0
// 00818701  741b                 je 0x81871e
// 00818703  8b06                 mov eax, dword ptr [esi]
// 00818705  8b9094010000         mov edx, dword ptr [eax + 0x194]
// 0081870b  6a01                 push 1
// 0081870d  53                   push ebx
// 0081870e  57                   push edi
// 0081870f  6a00                 push 0
// 00818711  6a00                 push 0
// 00818713  8bce                 mov ecx, esi
// 00818715  ffd2                 call edx
// 00818717  8bc8                 mov ecx, eax
// 00818719  e814b5fdff           call 0x7f3c32
// 0081871e  5f                   pop edi
// 0081871f  5e                   pop esi
// 00818720  5b                   pop ebx
// 00818721  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnSize@CXTPReportView@@IAEXIHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportView.cpp