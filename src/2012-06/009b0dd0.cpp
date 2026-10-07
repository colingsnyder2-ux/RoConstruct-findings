// roc 2012-06 009b0dd0  unit: CXTPReportControl  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009b0dd0
//
// 009b0dd0  83ec14               sub esp, 0x14
// 009b0dd3  8b442418             mov eax, dword ptr [esp + 0x18]
// 009b0dd7  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 009b0ddb  8944240c             mov dword ptr [esp + 0xc], eax
// 009b0ddf  8d0424               lea eax, [esp]
// 009b0de2  50                   push eax
// 009b0de3  6ac3                 push -0x3d
// 009b0de5  89542418             mov dword ptr [esp + 0x18], edx
// 009b0de9  e882ecffff           call 0x9afa70
// 009b0dee  83c414               add esp, 0x14
// 009b0df1  c20800               ret 8
// library xtp-15.2.1/Source\ReportControl\XTPReportControl.cpp (function ?GetItemMetrics@CXTPReportControl@@MAEXPAUXTP_REPORTRECORDITEM_DRAWARGS@@PAUXTP_REPORTRECORDITEM_METRICS@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/ReportControl/XTPReportControl.cpp
