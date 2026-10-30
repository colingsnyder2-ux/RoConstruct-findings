// roc 2010-06 007d2500  unit: CXTPReportControl  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007d2500
//
// 007d2500  8b81d8010000         mov eax, dword ptr [ecx + 0x1d8]
// 007d2506  f7d8                 neg eax
// 007d2508  1bc0                 sbb eax, eax
// 007d250a  83e002               and eax, 2
// 007d250d  0d81000000           or eax, 0x81
// 007d2512  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ?OnGetDlgCode@CXTPReportControl@@IAEIXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp
