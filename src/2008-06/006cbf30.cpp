// from server: 100% by auto
// roc 2008-06 006cbf30  unit: CXTPReportControl::CReportDropTarget  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006cbf30
//
// 006cbf30  83795c00             cmp dword ptr [ecx + 0x5c], 0
// 006cbf34  c7415401000000       mov dword ptr [ecx + 0x54], 1
// 006cbf3b  7512                 jne 0x6cbf4f
// 006cbf3d  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 006cbf40  85c9                 test ecx, ecx
// 006cbf42  740b                 je 0x6cbf4f
// 006cbf44  6a00                 push 0
// 006cbf46  6a00                 push 0
// 006cbf48  51                   push ecx
// 006cbf49  ff15182e8000         call dword ptr [0x802e18]
// 006cbf4f  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ?RedrawControl@CXTPReportControl@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp
