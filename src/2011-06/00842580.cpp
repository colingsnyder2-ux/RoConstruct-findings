// roc 2011-06 00842580  unit: CXTPReportRecordItemDateTime  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00842580
//
// 00842580  8b442408             mov eax, dword ptr [esp + 8]
// 00842584  6800040000           push 0x400
// 00842589  6a00                 push 0
// 0084258b  50                   push eax
// 0084258c  83c17c               add ecx, 0x7c
// 0084258f  e8ecfcffff           call 0x842280
// 00842594  c20800               ret 8
// library xtp-11.2.2/Source\ReportControl\XTPReportRecordItemText.cpp (function ?OnEditChanged@CXTPReportRecordItemDateTime@@UAEXPAUXTP_REPORTRECORDITEM_ARGS@@PBD@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportRecordItemText.cpp
