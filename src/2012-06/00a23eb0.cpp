// from server: 100% by auto
// roc 2012-06 00a23eb0  unit: CXTPReportPaintManager  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a23eb0
//
// 00a23eb0  8b442414             mov eax, dword ptr [esp + 0x14]
// 00a23eb4  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00a23eb8  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00a23ebc  50                   push eax
// 00a23ebd  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00a23ec1  51                   push ecx
// 00a23ec2  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00a23ec6  6a01                 push 1
// 00a23ec8  52                   push edx
// 00a23ec9  50                   push eax
// 00a23eca  e8c1560700           call 0xa99590
// 00a23ecf  c21400               ret 0x14
// library xtp-15.2.1/Source\ReportControl\XTPReportPaintManager.cpp (function ?DrawVerticalLine@CXTPReportPaintManager@@QAEXPAVCDC@@HHHK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/ReportControl/XTPReportPaintManager.cpp
