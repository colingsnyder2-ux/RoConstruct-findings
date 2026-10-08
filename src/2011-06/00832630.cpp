// roc 2011-06 00832630  unit: CXTPReportControl  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00832630
//
// 00832630  8b81d8010000         mov eax, dword ptr [ecx + 0x1d8]
// 00832636  f7d8                 neg eax
// 00832638  1bc0                 sbb eax, eax
// 0083263a  83e002               and eax, 2
// 0083263d  0d81000000           or eax, 0x81
// 00832642  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ?OnGetDlgCode@CXTPReportControl@@IAEIXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp
