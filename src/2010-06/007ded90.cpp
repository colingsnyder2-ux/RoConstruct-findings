// roc 2010-06 007ded90  unit: CInstanceRecord  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007ded90
//
// 007ded90  8b4940               mov ecx, dword ptr [ecx + 0x40]
// 007ded93  85c9                 test ecx, ecx
// 007ded95  740f                 je 0x7deda6
// 007ded97  e8e4290000           call 0x7e1780
// 007ded9c  85c0                 test eax, eax
// 007ded9e  7e06                 jle 0x7deda6
// 007deda0  b801000000           mov eax, 1
// 007deda5  c3                   ret 
// 007deda6  33c0                 xor eax, eax
// 007deda8  c3                   ret 
// library xtp-15.2.1/Source\ReportControl\XTPReportRecord.cpp (function ?HasChildren@CXTPReportRecord@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/ReportControl/XTPReportRecord.cpp
