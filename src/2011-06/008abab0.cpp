// roc 2011-06 008abab0  unit: CXTPReportPaintManager  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008abab0
//
// 008abab0  83b90c02000000       cmp dword ptr [ecx + 0x20c], 0
// 008abab7  7425                 je 0x8abade
// 008abab9  8b81bc020000         mov eax, dword ptr [ecx + 0x2bc]
// 008ababf  83f803               cmp eax, 3
// 008abac2  7414                 je 0x8abad8
// 008abac4  83f802               cmp eax, 2
// 008abac7  7515                 jne 0x8abade
// 008abac9  81c1c0020000         add ecx, 0x2c0
// 008abacf  e8fc17fdff           call 0x87d2d0
// 008abad4  85c0                 test eax, eax
// 008abad6  7406                 je 0x8abade
// 008abad8  b801000000           mov eax, 1
// 008abadd  c3                   ret 
// 008abade  33c0                 xor eax, eax
// 008abae0  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportPaintManager.cpp (function ?IsColumHotTrackingEnabled@CXTPReportPaintManager@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportPaintManager.cpp
