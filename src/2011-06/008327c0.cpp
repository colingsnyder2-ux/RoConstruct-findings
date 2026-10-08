// roc 2011-06 008327c0  unit: CXTPReportControl  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008327c0
//
// 008327c0  8b8928010000         mov ecx, dword ptr [ecx + 0x128]
// 008327c6  85c9                 test ecx, ecx
// 008327c8  740f                 je 0x8327d9
// 008327ca  e8811e0100           call 0x844650
// 008327cf  85c0                 test eax, eax
// 008327d1  7e06                 jle 0x8327d9
// 008327d3  b801000000           mov eax, 1
// 008327d8  c3                   ret 
// 008327d9  33c0                 xor eax, eax
// 008327db  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ?CanCopy@CXTPReportControl@@UAEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp
