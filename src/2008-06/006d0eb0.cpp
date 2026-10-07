// roc 2008-06 006d0eb0  unit: CXTPReportControl  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006d0eb0
//
// 006d0eb0  8b442404             mov eax, dword ptr [esp + 4]
// 006d0eb4  83f801               cmp eax, 1
// 006d0eb7  7d05                 jge 0x6d0ebe
// 006d0eb9  b801000000           mov eax, 1
// 006d0ebe  898114010000         mov dword ptr [ecx + 0x114], eax
// 006d0ec4  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ?SetHScrollStep@CXTPReportControl@@UAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp
