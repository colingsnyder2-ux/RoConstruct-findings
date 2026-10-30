// roc 2012-06 009aadc0  unit: CXTPReportControl  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009aadc0
//
// 009aadc0  8b8928010000         mov ecx, dword ptr [ecx + 0x128]
// 009aadc6  85c9                 test ecx, ecx
// 009aadc8  740f                 je 0x9aadd9
// 009aadca  e8b11c0100           call 0x9bca80
// 009aadcf  85c0                 test eax, eax
// 009aadd1  7e06                 jle 0x9aadd9
// 009aadd3  b801000000           mov eax, 1
// 009aadd8  c3                   ret 
// 009aadd9  33c0                 xor eax, eax
// 009aaddb  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ?CanCopy@CXTPReportControl@@UAEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp
