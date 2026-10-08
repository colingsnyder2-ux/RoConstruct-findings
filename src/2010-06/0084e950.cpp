// roc 2010-06 0084e950  unit: CXTPReportPaintManager  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0084e950
//
// 0084e950  83b90c02000000       cmp dword ptr [ecx + 0x20c], 0
// 0084e957  7425                 je 0x84e97e
// 0084e959  8b81bc020000         mov eax, dword ptr [ecx + 0x2bc]
// 0084e95f  83f803               cmp eax, 3
// 0084e962  7414                 je 0x84e978
// 0084e964  83f802               cmp eax, 2
// 0084e967  7515                 jne 0x84e97e
// 0084e969  81c1c0020000         add ecx, 0x2c0
// 0084e96f  e84c12fdff           call 0x81fbc0
// 0084e974  85c0                 test eax, eax
// 0084e976  7406                 je 0x84e97e
// 0084e978  b801000000           mov eax, 1
// 0084e97d  c3                   ret 
// 0084e97e  33c0                 xor eax, eax
// 0084e980  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportPaintManager.cpp (function ?IsColumHotTrackingEnabled@CXTPReportPaintManager@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportPaintManager.cpp
