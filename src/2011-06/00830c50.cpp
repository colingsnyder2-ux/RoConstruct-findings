// from server: 100% by auto
// roc 2011-06 00830c50  unit: CXTPReportControl  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00830c50
//
// 00830c50  8b89ec000000         mov ecx, dword ptr [ecx + 0xec]
// 00830c56  56                   push esi
// 00830c57  8b742408             mov esi, dword ptr [esp + 8]
// 00830c5b  56                   push esi
// 00830c5c  e80fcf0400           call 0x87db70
// 00830c61  8bc6                 mov eax, esi
// 00830c63  5e                   pop esi
// 00830c64  c20400               ret 4
// library xtp-15.2.1/Source\ReportControl\XTPReportControl.cpp (function ?AddColumn@CXTPReportControl@@QAEPAVCXTPReportColumn@@PAV2@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/ReportControl/XTPReportControl.cpp
