// roc 2012-06 009abc70  unit: CXTPReportControl::CReportDropTarget  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009abc70
//
// 009abc70  83795c00             cmp dword ptr [ecx + 0x5c], 0
// 009abc74  c7415401000000       mov dword ptr [ecx + 0x54], 1
// 009abc7b  7512                 jne 0x9abc8f
// 009abc7d  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 009abc80  85c9                 test ecx, ecx
// 009abc82  740b                 je 0x9abc8f
// 009abc84  6a00                 push 0
// 009abc86  6a00                 push 0
// 009abc88  51                   push ecx
// 009abc89  ff15ec3bb200         call dword ptr [0xb23bec]
// 009abc8f  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ?RedrawControl@CXTPReportControl@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp
