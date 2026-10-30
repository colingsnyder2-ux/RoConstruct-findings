// roc 2009-06 007bf9f0  unit: CXTPReportPaintManager  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007bf9f0
//
// 007bf9f0  83b90c02000000       cmp dword ptr [ecx + 0x20c], 0
// 007bf9f7  7425                 je 0x7bfa1e
// 007bf9f9  8b81bc020000         mov eax, dword ptr [ecx + 0x2bc]
// 007bf9ff  83f803               cmp eax, 3
// 007bfa02  7414                 je 0x7bfa18
// 007bfa04  83f802               cmp eax, 2
// 007bfa07  7515                 jne 0x7bfa1e
// 007bfa09  81c1c0020000         add ecx, 0x2c0
// 007bfa0f  e88c11fdff           call 0x790ba0
// 007bfa14  85c0                 test eax, eax
// 007bfa16  7406                 je 0x7bfa1e
// 007bfa18  b801000000           mov eax, 1
// 007bfa1d  c3                   ret 
// 007bfa1e  33c0                 xor eax, eax
// 007bfa20  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportPaintManager.cpp (function ?IsColumHotTrackingEnabled@CXTPReportPaintManager@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportPaintManager.cpp
