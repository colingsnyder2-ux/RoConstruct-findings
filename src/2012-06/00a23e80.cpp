// from server: 100% by auto
// roc 2012-06 00a23e80  unit: CXTPReportPaintManager  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a23e80
//
// 00a23e80  8b442414             mov eax, dword ptr [esp + 0x14]
// 00a23e84  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00a23e88  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00a23e8c  50                   push eax
// 00a23e8d  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00a23e91  6a01                 push 1
// 00a23e93  51                   push ecx
// 00a23e94  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00a23e98  52                   push edx
// 00a23e99  50                   push eax
// 00a23e9a  e8f1560700           call 0xa99590
// 00a23e9f  c21400               ret 0x14
// library xtp-15.2.1/Source\ReportControl\XTPReportPaintManager.cpp (function ?DrawHorizontalLine@CXTPReportPaintManager@@QAEXPAVCDC@@HHHK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/ReportControl/XTPReportPaintManager.cpp
