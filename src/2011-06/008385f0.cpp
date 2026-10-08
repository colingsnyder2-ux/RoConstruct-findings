// roc 2011-06 008385f0  unit: CXTPReportControl  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008385f0
//
// 008385f0  8b442404             mov eax, dword ptr [esp + 4]
// 008385f4  83f801               cmp eax, 1
// 008385f7  7d05                 jge 0x8385fe
// 008385f9  b801000000           mov eax, 1
// 008385fe  898114010000         mov dword ptr [ecx + 0x114], eax
// 00838604  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ?SetHScrollStep@CXTPReportControl@@UAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp
