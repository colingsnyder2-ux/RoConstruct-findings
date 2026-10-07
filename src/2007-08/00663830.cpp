// roc 2007-08 00663830  unit: CXTPReportRecordItemDateTime  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00663830
//
// 00663830  8b442408             mov eax, dword ptr [esp + 8]
// 00663834  6800040000           push 0x400
// 00663839  6a00                 push 0
// 0066383b  50                   push eax
// 0066383c  83c17c               add ecx, 0x7c
// 0066383f  e8dcfcffff           call 0x663520
// 00663844  c20800               ret 8
// library xtp-11.2.2-vc8/Source\ReportControl\XTPReportRecordItemText.cpp (function ?OnEditChanged@CXTPReportRecordItemDateTime@@UAEXPAUXTP_REPORTRECORDITEM_ARGS@@PBD@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/ReportControl/XTPReportRecordItemText.cpp
