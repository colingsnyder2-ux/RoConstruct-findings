// roc 2008-06 006cb190  unit: CXTPReportControl  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006cb190
//
// 006cb190  8b8928010000         mov ecx, dword ptr [ecx + 0x128]
// 006cb196  85c9                 test ecx, ecx
// 006cb198  740f                 je 0x6cb1a9
// 006cb19a  e871030100           call 0x6db510
// 006cb19f  85c0                 test eax, eax
// 006cb1a1  7e06                 jle 0x6cb1a9
// 006cb1a3  b801000000           mov eax, 1
// 006cb1a8  c3                   ret 
// 006cb1a9  33c0                 xor eax, eax
// 006cb1ab  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ?CanCopy@CXTPReportControl@@UAEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp
