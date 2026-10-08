// from server: 100% by auto
// roc 2007-08 00657410  unit: CXTPReportControl::CReportDropTarget  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00657410
//
// 00657410  83795c00             cmp dword ptr [ecx + 0x5c], 0
// 00657414  c7415401000000       mov dword ptr [ecx + 0x54], 1
// 0065741b  7512                 jne 0x65742f
// 0065741d  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 00657420  85c9                 test ecx, ecx
// 00657422  740b                 je 0x65742f
// 00657424  6a00                 push 0
// 00657426  6a00                 push 0
// 00657428  51                   push ecx
// 00657429  ff15dcec7700         call dword ptr [0x77ecdc]
// 0065742f  c3                   ret 
// library xtp-11.2.2-vc8/Source\ReportControl\XTPReportControl.cpp (function ?RedrawControl@CXTPReportControl@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/ReportControl/XTPReportControl.cpp
