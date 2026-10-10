// roc 2008-06 007508a0  unit: CXTPReportGroupRow_Batch  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007508a0
//
// 007508a0  8b442408             mov eax, dword ptr [esp + 8]
// 007508a4  56                   push esi
// 007508a5  8bf1                 mov esi, ecx
// 007508a7  8b4c2408             mov ecx, dword ptr [esp + 8]
// 007508ab  50                   push eax
// 007508ac  51                   push ecx
// 007508ad  8d563c               lea edx, [esi + 0x3c]
// 007508b0  52                   push edx
// 007508b1  ff152c2d8000         call dword ptr [0x802d2c]
// 007508b7  85c0                 test eax, eax
// 007508b9  7418                 je 0x7508d3
// 007508bb  57                   push edi
// 007508bc  8b3e                 mov edi, dword ptr [esi]
// 007508be  8b4778               mov eax, dword ptr [edi + 0x78]
// 007508c1  8bce                 mov ecx, esi
// 007508c3  ffd0                 call eax
// 007508c5  8b577c               mov edx, dword ptr [edi + 0x7c]
// 007508c8  f7d8                 neg eax
// 007508ca  1bc0                 sbb eax, eax
// 007508cc  40                   inc eax
// 007508cd  50                   push eax
// 007508ce  8bce                 mov ecx, esi
// 007508d0  ffd2                 call edx
// 007508d2  5f                   pop edi
// 007508d3  5e                   pop esi
// 007508d4  c20800               ret 8
// library xtp-11.2.2-shared-mfc/Source\ReportControl\XTPReportGroupRow.cpp (function ?OnClick@CXTPReportGroupRow@@UAEXVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportGroupRow.cpp
