// roc 2009-12 00824410  unit: CXTPReportControl  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00824410
//
// 00824410  8b442404             mov eax, dword ptr [esp + 4]
// 00824414  83f801               cmp eax, 1
// 00824417  7d05                 jge 0x82441e
// 00824419  b801000000           mov eax, 1
// 0082441e  898114010000         mov dword ptr [ecx + 0x114], eax
// 00824424  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ?SetHScrollStep@CXTPReportControl@@UAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp
