// roc 2007-08 0065c630  unit: CXTPReportControl  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0065c630
//
// 0065c630  83ec14               sub esp, 0x14
// 0065c633  8b442418             mov eax, dword ptr [esp + 0x18]
// 0065c637  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0065c63b  8944240c             mov dword ptr [esp + 0xc], eax
// 0065c63f  8d0424               lea eax, [esp]
// 0065c642  50                   push eax
// 0065c643  6ac3                 push -0x3d
// 0065c645  89542418             mov dword ptr [esp + 0x18], edx
// 0065c649  e832e6ffff           call 0x65ac80
// 0065c64e  83c414               add esp, 0x14
// 0065c651  c20800               ret 8
// library xtp-11.2.2-vc8/Source\ReportControl\XTPReportControl.cpp (function ?GetItemMetrics@CXTPReportControl@@MAEXPAUXTP_REPORTRECORDITEM_DRAWARGS@@PAUXTP_REPORTRECORDITEM_METRICS@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/ReportControl/XTPReportControl.cpp
