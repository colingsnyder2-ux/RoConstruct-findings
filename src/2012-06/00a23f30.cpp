// roc 2012-06 00a23f30  unit: CXTPReportPaintManager  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a23f30
//
// 00a23f30  83b90c02000000       cmp dword ptr [ecx + 0x20c], 0
// 00a23f37  7425                 je 0xa23f5e
// 00a23f39  8b81bc020000         mov eax, dword ptr [ecx + 0x2bc]
// 00a23f3f  83f803               cmp eax, 3
// 00a23f42  7414                 je 0xa23f58
// 00a23f44  83f802               cmp eax, 2
// 00a23f47  7515                 jne 0xa23f5e
// 00a23f49  81c1c0020000         add ecx, 0x2c0
// 00a23f4f  e81c19fdff           call 0x9f5870
// 00a23f54  85c0                 test eax, eax
// 00a23f56  7406                 je 0xa23f5e
// 00a23f58  b801000000           mov eax, 1
// 00a23f5d  c3                   ret 
// 00a23f5e  33c0                 xor eax, eax
// 00a23f60  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportPaintManager.cpp (function ?IsColumHotTrackingEnabled@CXTPReportPaintManager@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportPaintManager.cpp
