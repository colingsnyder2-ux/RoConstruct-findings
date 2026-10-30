// roc 2010-06 007d34e0  unit: CXTPReportControl::CReportDropTarget  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007d34e0
//
// 007d34e0  83795c00             cmp dword ptr [ecx + 0x5c], 0
// 007d34e4  c7415401000000       mov dword ptr [ecx + 0x54], 1
// 007d34eb  7512                 jne 0x7d34ff
// 007d34ed  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 007d34f0  85c9                 test ecx, ecx
// 007d34f2  740b                 je 0x7d34ff
// 007d34f4  6a00                 push 0
// 007d34f6  6a00                 push 0
// 007d34f8  51                   push ecx
// 007d34f9  ff1578ba9e00         call dword ptr [0x9eba78]
// 007d34ff  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ?RedrawControl@CXTPReportControl@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp
