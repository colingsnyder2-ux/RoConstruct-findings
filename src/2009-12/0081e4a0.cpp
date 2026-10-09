// roc 2009-12 0081e4a0  unit: CXTPReportControl  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0081e4a0
//
// 0081e4a0  8b81d8010000         mov eax, dword ptr [ecx + 0x1d8]
// 0081e4a6  f7d8                 neg eax
// 0081e4a8  1bc0                 sbb eax, eax
// 0081e4aa  83e002               and eax, 2
// 0081e4ad  0d81000000           or eax, 0x81
// 0081e4b2  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ?OnGetDlgCode@CXTPReportControl@@IAEIXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp
