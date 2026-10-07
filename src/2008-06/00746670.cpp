// roc 2008-06 00746670  unit: CXTPReportPaintManager  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00746670
//
// 00746670  8b442414             mov eax, dword ptr [esp + 0x14]
// 00746674  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00746678  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0074667c  50                   push eax
// 0074667d  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00746681  51                   push ecx
// 00746682  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00746686  6a01                 push 1
// 00746688  52                   push edx
// 00746689  50                   push eax
// 0074668a  e8b1590700           call 0x7bc040
// 0074668f  c21400               ret 0x14
// library xtp-11.2.2/Source\ReportControl\XTPReportPaintManager.cpp (function ?DrawVerticalLine@CXTPReportPaintManager@@QAEXPAVCDC@@HHHK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportPaintManager.cpp
