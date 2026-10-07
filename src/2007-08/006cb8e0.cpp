// roc 2007-08 006cb8e0  unit: CXTPReportPaintManager  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006cb8e0
//
// 006cb8e0  8b442414             mov eax, dword ptr [esp + 0x14]
// 006cb8e4  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006cb8e8  8b54240c             mov edx, dword ptr [esp + 0xc]
// 006cb8ec  50                   push eax
// 006cb8ed  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006cb8f1  6a01                 push 1
// 006cb8f3  51                   push ecx
// 006cb8f4  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006cb8f8  52                   push edx
// 006cb8f9  50                   push eax
// 006cb8fa  e8cbca0600           call 0x7383ca
// 006cb8ff  c21400               ret 0x14
// library xtp-11.2.2-vc8/Source\ReportControl\XTPReportPaintManager.cpp (function ?DrawHorizontalLine@CXTPReportPaintManager@@QAEXPAVCDC@@HHHK@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/ReportControl/XTPReportPaintManager.cpp
