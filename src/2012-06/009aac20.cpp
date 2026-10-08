// roc 2012-06 009aac20  unit: CXTPReportControl  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009aac20
//
// 009aac20  8b81d8010000         mov eax, dword ptr [ecx + 0x1d8]
// 009aac26  f7d8                 neg eax
// 009aac28  1bc0                 sbb eax, eax
// 009aac2a  83e002               and eax, 2
// 009aac2d  0d81000000           or eax, 0x81
// 009aac32  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ?OnGetDlgCode@CXTPReportControl@@IAEIXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp
