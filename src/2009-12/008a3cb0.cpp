// roc 2009-12 008a3cb0  unit: CXTPReportGroupRow_Batch  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008a3cb0
//
// 008a3cb0  8b442408             mov eax, dword ptr [esp + 8]
// 008a3cb4  56                   push esi
// 008a3cb5  8bf1                 mov esi, ecx
// 008a3cb7  8b4c2408             mov ecx, dword ptr [esp + 8]
// 008a3cbb  50                   push eax
// 008a3cbc  51                   push ecx
// 008a3cbd  8d563c               lea edx, [esi + 0x3c]
// 008a3cc0  52                   push edx
// 008a3cc1  ff155cca9800         call dword ptr [0x98ca5c]
// 008a3cc7  85c0                 test eax, eax
// 008a3cc9  7418                 je 0x8a3ce3
// 008a3ccb  57                   push edi
// 008a3ccc  8b3e                 mov edi, dword ptr [esi]
// 008a3cce  8b4778               mov eax, dword ptr [edi + 0x78]
// 008a3cd1  8bce                 mov ecx, esi
// 008a3cd3  ffd0                 call eax
// 008a3cd5  8b577c               mov edx, dword ptr [edi + 0x7c]
// 008a3cd8  f7d8                 neg eax
// 008a3cda  1bc0                 sbb eax, eax
// 008a3cdc  40                   inc eax
// 008a3cdd  50                   push eax
// 008a3cde  8bce                 mov ecx, esi
// 008a3ce0  ffd2                 call edx
// 008a3ce2  5f                   pop edi
// 008a3ce3  5e                   pop esi
// 008a3ce4  c20800               ret 8
// copied from an identical function in another client (function ?OnClick@CXTPReportGroupRow@@UAEXVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportGroupRow.cpp