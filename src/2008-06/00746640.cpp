// from server: 100% by auto
// roc 2008-06 00746640  unit: CXTPReportPaintManager  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00746640
//
// 00746640  8b442414             mov eax, dword ptr [esp + 0x14]
// 00746644  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00746648  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0074664c  50                   push eax
// 0074664d  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00746651  6a01                 push 1
// 00746653  51                   push ecx
// 00746654  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00746658  52                   push edx
// 00746659  50                   push eax
// 0074665a  e8e1590700           call 0x7bc040
// 0074665f  c21400               ret 0x14
// library xtp-11.2.2/Source\ReportControl\XTPReportPaintManager.cpp (function ?DrawHorizontalLine@CXTPReportPaintManager@@QAEXPAVCDC@@HHHK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportPaintManager.cpp
