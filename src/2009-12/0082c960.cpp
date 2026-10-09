// roc 2009-12 0082c960  unit: CXTPReportRecordItemDateTime  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0082c960
//
// 0082c960  8b442408             mov eax, dword ptr [esp + 8]
// 0082c964  6800040000           push 0x400
// 0082c969  6a00                 push 0
// 0082c96b  50                   push eax
// 0082c96c  83c17c               add ecx, 0x7c
// 0082c96f  e8ecfcffff           call 0x82c660
// 0082c974  c20800               ret 8
// library xtp-11.2.2/Source\ReportControl\XTPReportRecordItemText.cpp (function ?OnEditChanged@CXTPReportRecordItemDateTime@@UAEXPAUXTP_REPORTRECORDITEM_ARGS@@PBD@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportRecordItemText.cpp
