// from server: 100% by auto
// roc 2008-06 007466f0  unit: CXTPReportPaintManager  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007466f0
//
// 007466f0  83b90c02000000       cmp dword ptr [ecx + 0x20c], 0
// 007466f7  7425                 je 0x74671e
// 007466f9  8b81bc020000         mov eax, dword ptr [ecx + 0x2bc]
// 007466ff  83f803               cmp eax, 3
// 00746702  7414                 je 0x746718
// 00746704  83f802               cmp eax, 2
// 00746707  7515                 jne 0x74671e
// 00746709  81c1c0020000         add ecx, 0x2c0
// 0074670f  e81c1dfdff           call 0x718430
// 00746714  85c0                 test eax, eax
// 00746716  7406                 je 0x74671e
// 00746718  b801000000           mov eax, 1
// 0074671d  c3                   ret 
// 0074671e  33c0                 xor eax, eax
// 00746720  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportPaintManager.cpp (function ?IsColumHotTrackingEnabled@CXTPReportPaintManager@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportPaintManager.cpp
