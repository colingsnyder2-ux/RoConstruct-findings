// roc 2008-06 007508e0  unit: CXTPReportGroupRow_Batch  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007508e0
//
// 007508e0  8b442408             mov eax, dword ptr [esp + 8]
// 007508e4  56                   push esi
// 007508e5  8bf1                 mov esi, ecx
// 007508e7  8b4c2408             mov ecx, dword ptr [esp + 8]
// 007508eb  50                   push eax
// 007508ec  51                   push ecx
// 007508ed  8d563c               lea edx, [esi + 0x3c]
// 007508f0  52                   push edx
// 007508f1  ff152c2d8000         call dword ptr [0x802d2c]
// 007508f7  85c0                 test eax, eax
// 007508f9  7518                 jne 0x750913
// 007508fb  57                   push edi
// 007508fc  8b3e                 mov edi, dword ptr [esi]
// 007508fe  8b4778               mov eax, dword ptr [edi + 0x78]
// 00750901  8bce                 mov ecx, esi
// 00750903  ffd0                 call eax
// 00750905  8b577c               mov edx, dword ptr [edi + 0x7c]
// 00750908  f7d8                 neg eax
// 0075090a  1bc0                 sbb eax, eax
// 0075090c  40                   inc eax
// 0075090d  50                   push eax
// 0075090e  8bce                 mov ecx, esi
// 00750910  ffd2                 call edx
// 00750912  5f                   pop edi
// 00750913  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00750917  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0075091b  50                   push eax
// 0075091c  51                   push ecx
// 0075091d  8bce                 mov ecx, esi
// 0075091f  e82c0f0000           call 0x751850
// 00750924  5e                   pop esi
// 00750925  c20800               ret 8
// library xtp-11.2.2-shared-mfc/Source\ReportControl\XTPReportGroupRow.cpp (function ?OnDblClick@CXTPReportGroupRow@@UAEXVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportGroupRow.cpp
