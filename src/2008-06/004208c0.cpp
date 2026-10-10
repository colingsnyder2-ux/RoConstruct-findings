// roc 2008-06 004208c0  unit: CInstanceRecord::CNameItem  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004208c0
//
// 004208c0  56                   push esi
// 004208c1  8bf1                 mov esi, ecx
// 004208c3  8b06                 mov eax, dword ptr [esi]
// 004208c5  8b90cc000000         mov edx, dword ptr [eax + 0xcc]
// 004208cb  ffd2                 call edx
// 004208cd  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004208d1  894e50               mov dword ptr [esi + 0x50], ecx
// 004208d4  5e                   pop esi
// 004208d5  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\ReportControl\XTPReportRecordItemText.cpp (function ?SetIconIndex@CXTPReportRecordItem@@UAEHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportRecordItemText.cpp
