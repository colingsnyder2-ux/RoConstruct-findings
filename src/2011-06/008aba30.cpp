// from server: 100% by auto
// roc 2011-06 008aba30  unit: CXTPReportPaintManager  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008aba30
//
// 008aba30  8b442414             mov eax, dword ptr [esp + 0x14]
// 008aba34  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008aba38  8b54240c             mov edx, dword ptr [esp + 0xc]
// 008aba3c  50                   push eax
// 008aba3d  8b44240c             mov eax, dword ptr [esp + 0xc]
// 008aba41  51                   push ecx
// 008aba42  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008aba46  6a01                 push 1
// 008aba48  52                   push edx
// 008aba49  50                   push eax
// 008aba4a  e8870b1200           call 0x9cc5d6
// 008aba4f  c21400               ret 0x14
// library xtp-15.2.1/Source\ReportControl\XTPReportPaintManager.cpp (function ?DrawVerticalLine@CXTPReportPaintManager@@QAEXPAVCDC@@HHHK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/ReportControl/XTPReportPaintManager.cpp
