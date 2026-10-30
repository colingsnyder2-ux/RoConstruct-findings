// roc 2010-06 007d8470  unit: CXTPReportControl  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007d8470
//
// 007d8470  8b442404             mov eax, dword ptr [esp + 4]
// 007d8474  83f801               cmp eax, 1
// 007d8477  7d05                 jge 0x7d847e
// 007d8479  b801000000           mov eax, 1
// 007d847e  898114010000         mov dword ptr [ecx + 0x114], eax
// 007d8484  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ?SetHScrollStep@CXTPReportControl@@UAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp
