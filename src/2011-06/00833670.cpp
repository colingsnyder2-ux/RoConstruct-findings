// roc 2011-06 00833670  unit: CXTPReportControl::CReportDropTarget  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00833670
//
// 00833670  83795c00             cmp dword ptr [ecx + 0x5c], 0
// 00833674  c7415401000000       mov dword ptr [ecx + 0x54], 1
// 0083367b  7512                 jne 0x83368f
// 0083367d  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 00833680  85c9                 test ecx, ecx
// 00833682  740b                 je 0x83368f
// 00833684  6a00                 push 0
// 00833686  6a00                 push 0
// 00833688  51                   push ecx
// 00833689  ff15ec19a400         call dword ptr [0xa419ec]
// 0083368f  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ?RedrawControl@CXTPReportControl@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp
