// roc 2007-08 00656310  unit: CXTPReportControl  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00656310
//
// 00656310  8b01                 mov eax, dword ptr [ecx]
// 00656312  8b9054010000         mov edx, dword ptr [eax + 0x154]
// 00656318  ffd2                 call edx
// 0065631a  c20400               ret 4
// library xtp-11.2.2-vc8/Source\ReportControl\XTPReportControl.cpp (function ?OnEnable@CXTPReportControl@@IAEXH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/ReportControl/XTPReportControl.cpp
