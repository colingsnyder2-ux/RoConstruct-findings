// roc 2012-06 009a9240  unit: CXTPReportControl  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009a9240
//
// 009a9240  8b89ec000000         mov ecx, dword ptr [ecx + 0xec]
// 009a9246  56                   push esi
// 009a9247  8b742408             mov esi, dword ptr [esp + 8]
// 009a924b  56                   push esi
// 009a924c  e8cfce0400           call 0x9f6120
// 009a9251  8bc6                 mov eax, esi
// 009a9253  5e                   pop esi
// 009a9254  c20400               ret 4
// library xtp-15.2.1/Source\ReportControl\XTPReportControl.cpp (function ?AddColumn@CXTPReportControl@@QAEPAVCXTPReportColumn@@PAV2@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/ReportControl/XTPReportControl.cpp
