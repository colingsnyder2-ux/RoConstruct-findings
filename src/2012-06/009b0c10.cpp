// roc 2012-06 009b0c10  unit: CXTPReportControl  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009b0c10
//
// 009b0c10  8b442404             mov eax, dword ptr [esp + 4]
// 009b0c14  83f801               cmp eax, 1
// 009b0c17  7d05                 jge 0x9b0c1e
// 009b0c19  b801000000           mov eax, 1
// 009b0c1e  898114010000         mov dword ptr [ecx + 0x114], eax
// 009b0c24  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ?SetHScrollStep@CXTPReportControl@@UAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp
