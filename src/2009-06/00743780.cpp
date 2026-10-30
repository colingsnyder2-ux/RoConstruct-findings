// roc 2009-06 00743780  unit: CXTPReportControl  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00743780
//
// 00743780  8b8928010000         mov ecx, dword ptr [ecx + 0x128]
// 00743786  85c9                 test ecx, ecx
// 00743788  740f                 je 0x743799
// 0074378a  e8b1050100           call 0x753d40
// 0074378f  85c0                 test eax, eax
// 00743791  7e06                 jle 0x743799
// 00743793  b801000000           mov eax, 1
// 00743798  c3                   ret 
// 00743799  33c0                 xor eax, eax
// 0074379b  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ?CanCopy@CXTPReportControl@@UAEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp
