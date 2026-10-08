// roc 2010-06 007d52e0  unit: CXTPReportControl  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007d52e0
//
// 007d52e0  56                   push esi
// 007d52e1  8bf1                 mov esi, ecx
// 007d52e3  8b86ac020000         mov eax, dword ptr [esi + 0x2ac]
// 007d52e9  85c0                 test eax, eax
// 007d52eb  7415                 je 0x7d5302
// 007d52ed  50                   push eax
// 007d52ee  8b4620               mov eax, dword ptr [esi + 0x20]
// 007d52f1  50                   push eax
// 007d52f2  ff1560ba9e00         call dword ptr [0x9eba60]
// 007d52f8  c786ac02000000000000 mov dword ptr [esi + 0x2ac], 0
// 007d5302  5e                   pop esi
// 007d5303  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ?EnsureStopAutoVertScroll@CXTPReportControl@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp
