// roc 2012-06 009aa280  unit: CXTPReportControl  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009aa280
//
// 009aa280  8b01                 mov eax, dword ptr [ecx]
// 009aa282  8b9064010000         mov edx, dword ptr [eax + 0x164]
// 009aa288  ffd2                 call edx
// 009aa28a  c20400               ret 4
// library xtp-13.2.1/Source\ReportControl\XTPReportControl.cpp (function ?OnEnable@CXTPReportControl@@IAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-13.2.1 Source/ReportControl/XTPReportControl.cpp
