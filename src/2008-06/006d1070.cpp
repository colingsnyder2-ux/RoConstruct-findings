// roc 2008-06 006d1070  unit: CXTPReportControl  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006d1070
//
// 006d1070  83ec14               sub esp, 0x14
// 006d1073  8b442418             mov eax, dword ptr [esp + 0x18]
// 006d1077  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 006d107b  8944240c             mov dword ptr [esp + 0xc], eax
// 006d107f  8d0424               lea eax, [esp]
// 006d1082  50                   push eax
// 006d1083  6ac3                 push -0x3d
// 006d1085  89542418             mov dword ptr [esp + 0x18], edx
// 006d1089  e892ecffff           call 0x6cfd20
// 006d108e  83c414               add esp, 0x14
// 006d1091  c20800               ret 8
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ?GetItemMetrics@CXTPReportControl@@MAEXPAUXTP_REPORTRECORDITEM_DRAWARGS@@PAUXTP_REPORTRECORDITEM_METRICS@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp
