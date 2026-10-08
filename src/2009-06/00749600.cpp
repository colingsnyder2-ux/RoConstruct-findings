// roc 2009-06 00749600  unit: CXTPReportControl  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00749600
//
// 00749600  8b442404             mov eax, dword ptr [esp + 4]
// 00749604  83f801               cmp eax, 1
// 00749607  7d05                 jge 0x74960e
// 00749609  b801000000           mov eax, 1
// 0074960e  898114010000         mov dword ptr [ecx + 0x114], eax
// 00749614  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ?SetHScrollStep@CXTPReportControl@@UAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp
