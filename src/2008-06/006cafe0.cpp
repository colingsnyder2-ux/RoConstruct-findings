// roc 2008-06 006cafe0  unit: CXTPReportControl  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006cafe0
//
// 006cafe0  8b81d8010000         mov eax, dword ptr [ecx + 0x1d8]
// 006cafe6  f7d8                 neg eax
// 006cafe8  1bc0                 sbb eax, eax
// 006cafea  83e002               and eax, 2
// 006cafed  0d81000000           or eax, 0x81
// 006caff2  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ?OnGetDlgCode@CXTPReportControl@@IAEIXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp
