// roc 2009-12 0089a7f0  unit: CXTPReportPaintManager  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0089a7f0
//
// 0089a7f0  83b90c02000000       cmp dword ptr [ecx + 0x20c], 0
// 0089a7f7  7425                 je 0x89a81e
// 0089a7f9  8b81bc020000         mov eax, dword ptr [ecx + 0x2bc]
// 0089a7ff  83f803               cmp eax, 3
// 0089a802  7414                 je 0x89a818
// 0089a804  83f802               cmp eax, 2
// 0089a807  7515                 jne 0x89a81e
// 0089a809  81c1c0020000         add ecx, 0x2c0
// 0089a80f  e8ac13fdff           call 0x86bbc0
// 0089a814  85c0                 test eax, eax
// 0089a816  7406                 je 0x89a81e
// 0089a818  b801000000           mov eax, 1
// 0089a81d  c3                   ret 
// 0089a81e  33c0                 xor eax, eax
// 0089a820  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportPaintManager.cpp (function ?IsColumHotTrackingEnabled@CXTPReportPaintManager@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportPaintManager.cpp
