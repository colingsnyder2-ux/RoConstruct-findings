// roc 2008-06 007530f0  unit: CXTPReportTip  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007530f0
//
// 007530f0  56                   push esi
// 007530f1  8bf1                 mov esi, ecx
// 007530f3  837e2000             cmp dword ptr [esi + 0x20], 0
// 007530f7  7425                 je 0x75311e
// 007530f9  8b4620               mov eax, dword ptr [esi + 0x20]
// 007530fc  8b88e0000000         mov ecx, dword ptr [eax + 0xe0]
// 00753102  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00753106  8b442408             mov eax, dword ptr [esp + 8]
// 0075310a  52                   push edx
// 0075310b  8b11                 mov edx, dword ptr [ecx]
// 0075310d  50                   push eax
// 0075310e  8b425c               mov eax, dword ptr [edx + 0x5c]
// 00753111  6a00                 push 0
// 00753113  ffd0                 call eax
// 00753115  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00753118  50                   push eax
// 00753119  e892f4f7ff           call 0x6d25b0
// 0075311e  5e                   pop esi
// 0075311f  c20800               ret 8
// library xtp-11.2.2-shared-mfc/Source\ReportControl\XTPReportNavigator.cpp (function ?MoveFirstRow@CXTPReportNavigator@@QAEXHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportNavigator.cpp
