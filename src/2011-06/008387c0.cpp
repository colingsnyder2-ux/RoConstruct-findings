// roc 2011-06 008387c0  unit: CXTPReportControl  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008387c0
//
// 008387c0  83ec14               sub esp, 0x14
// 008387c3  8b442418             mov eax, dword ptr [esp + 0x18]
// 008387c7  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 008387cb  8944240c             mov dword ptr [esp + 0xc], eax
// 008387cf  8d0424               lea eax, [esp]
// 008387d2  50                   push eax
// 008387d3  6ac3                 push -0x3d
// 008387d5  89542418             mov dword ptr [esp + 0x18], edx
// 008387d9  e882ecffff           call 0x837460
// 008387de  83c414               add esp, 0x14
// 008387e1  c20800               ret 8
// library xtp-15.2.1/Source\ReportControl\XTPReportControl.cpp (function ?GetItemMetrics@CXTPReportControl@@MAEXPAUXTP_REPORTRECORDITEM_DRAWARGS@@PAUXTP_REPORTRECORDITEM_METRICS@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/ReportControl/XTPReportControl.cpp
