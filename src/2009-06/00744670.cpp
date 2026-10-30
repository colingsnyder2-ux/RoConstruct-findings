// roc 2009-06 00744670  unit: CXTPReportControl::CReportDropTarget  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00744670
//
// 00744670  83795c00             cmp dword ptr [ecx + 0x5c], 0
// 00744674  c7415401000000       mov dword ptr [ecx + 0x54], 1
// 0074467b  7512                 jne 0x74468f
// 0074467d  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 00744680  85c9                 test ecx, ecx
// 00744682  740b                 je 0x74468f
// 00744684  6a00                 push 0
// 00744686  6a00                 push 0
// 00744688  51                   push ecx
// 00744689  ff157cee8900         call dword ptr [0x89ee7c]
// 0074468f  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ?RedrawControl@CXTPReportControl@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp
