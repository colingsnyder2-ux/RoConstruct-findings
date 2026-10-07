// roc 2011-06 008aba00  unit: CXTPReportPaintManager  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008aba00
//
// 008aba00  8b442414             mov eax, dword ptr [esp + 0x14]
// 008aba04  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008aba08  8b54240c             mov edx, dword ptr [esp + 0xc]
// 008aba0c  50                   push eax
// 008aba0d  8b44240c             mov eax, dword ptr [esp + 0xc]
// 008aba11  6a01                 push 1
// 008aba13  51                   push ecx
// 008aba14  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008aba18  52                   push edx
// 008aba19  50                   push eax
// 008aba1a  e8b70b1200           call 0x9cc5d6
// 008aba1f  c21400               ret 0x14
// library xtp-15.2.1/Source\ReportControl\XTPReportPaintManager.cpp (function ?DrawHorizontalLine@CXTPReportPaintManager@@QAEXPAVCDC@@HHHK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/ReportControl/XTPReportPaintManager.cpp
