// roc 2009-12 0081f480  unit: CXTPReportControl::CReportDropTarget  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0081f480
//
// 0081f480  83795c00             cmp dword ptr [ecx + 0x5c], 0
// 0081f484  c7415401000000       mov dword ptr [ecx + 0x54], 1
// 0081f48b  7512                 jne 0x81f49f
// 0081f48d  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 0081f490  85c9                 test ecx, ecx
// 0081f492  740b                 je 0x81f49f
// 0081f494  6a00                 push 0
// 0081f496  6a00                 push 0
// 0081f498  51                   push ecx
// 0081f499  ff15e8cb9800         call dword ptr [0x98cbe8]
// 0081f49f  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ?RedrawControl@CXTPReportControl@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp
