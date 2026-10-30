// roc 2010-06 007d26a0  unit: CXTPReportControl  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007d26a0
//
// 007d26a0  8b8928010000         mov ecx, dword ptr [ecx + 0x128]
// 007d26a6  85c9                 test ecx, ecx
// 007d26a8  740f                 je 0x7d26b9
// 007d26aa  e841060100           call 0x7e2cf0
// 007d26af  85c0                 test eax, eax
// 007d26b1  7e06                 jle 0x7d26b9
// 007d26b3  b801000000           mov eax, 1
// 007d26b8  c3                   ret 
// 007d26b9  33c0                 xor eax, eax
// 007d26bb  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ?CanCopy@CXTPReportControl@@UAEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp
