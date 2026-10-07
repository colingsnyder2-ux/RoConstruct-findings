// roc 2010-06 007d0b20  unit: CXTPReportControl  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007d0b20
//
// 007d0b20  8b89ec000000         mov ecx, dword ptr [ecx + 0xec]
// 007d0b26  56                   push esi
// 007d0b27  8b742408             mov esi, dword ptr [esp + 8]
// 007d0b2b  56                   push esi
// 007d0b2c  e82ff90400           call 0x820460
// 007d0b31  8bc6                 mov eax, esi
// 007d0b33  5e                   pop esi
// 007d0b34  c20400               ret 4
// library xtp-15.2.1/Source\ReportControl\XTPReportControl.cpp (function ?AddColumn@CXTPReportControl@@QAEPAVCXTPReportColumn@@PAV2@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/ReportControl/XTPReportControl.cpp
