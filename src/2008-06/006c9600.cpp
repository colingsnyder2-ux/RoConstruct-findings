// roc 2008-06 006c9600  unit: CXTPReportControl  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006c9600
//
// 006c9600  8b89ec000000         mov ecx, dword ptr [ecx + 0xec]
// 006c9606  56                   push esi
// 006c9607  8b742408             mov esi, dword ptr [esp + 8]
// 006c960b  56                   push esi
// 006c960c  e8ff650800           call 0x74fc10
// 006c9611  8bc6                 mov eax, esi
// 006c9613  5e                   pop esi
// 006c9614  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ?AddColumn@CXTPReportControl@@QAEPAVCXTPReportColumn@@PAV2@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp
