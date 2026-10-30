// roc 2009-12 008a3cf0  unit: CXTPReportGroupRow_Batch  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008a3cf0
//
// 008a3cf0  8b442408             mov eax, dword ptr [esp + 8]
// 008a3cf4  56                   push esi
// 008a3cf5  8bf1                 mov esi, ecx
// 008a3cf7  8b4c2408             mov ecx, dword ptr [esp + 8]
// 008a3cfb  50                   push eax
// 008a3cfc  51                   push ecx
// 008a3cfd  8d563c               lea edx, [esi + 0x3c]
// 008a3d00  52                   push edx
// 008a3d01  ff155cca9800         call dword ptr [0x98ca5c]
// 008a3d07  85c0                 test eax, eax
// 008a3d09  7518                 jne 0x8a3d23
// 008a3d0b  57                   push edi
// 008a3d0c  8b3e                 mov edi, dword ptr [esi]
// 008a3d0e  8b4778               mov eax, dword ptr [edi + 0x78]
// 008a3d11  8bce                 mov ecx, esi
// 008a3d13  ffd0                 call eax
// 008a3d15  8b577c               mov edx, dword ptr [edi + 0x7c]
// 008a3d18  f7d8                 neg eax
// 008a3d1a  1bc0                 sbb eax, eax
// 008a3d1c  40                   inc eax
// 008a3d1d  50                   push eax
// 008a3d1e  8bce                 mov ecx, esi
// 008a3d20  ffd2                 call edx
// 008a3d22  5f                   pop edi
// 008a3d23  8b44240c             mov eax, dword ptr [esp + 0xc]
// 008a3d27  8b4c2408             mov ecx, dword ptr [esp + 8]
// 008a3d2b  50                   push eax
// 008a3d2c  51                   push ecx
// 008a3d2d  8bce                 mov ecx, esi
// 008a3d2f  e82c0f0000           call 0x8a4c60
// 008a3d34  5e                   pop esi
// 008a3d35  c20800               ret 8
// copied from an identical function in another client (function ?OnDblClick@CXTPReportGroupRow@@UAEXVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportGroupRow.cpp