// roc 2012-06 009ba9b0  unit: CXTPReportRecordItemDateTime  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009ba9b0
//
// 009ba9b0  8b442408             mov eax, dword ptr [esp + 8]
// 009ba9b4  6800040000           push 0x400
// 009ba9b9  6a00                 push 0
// 009ba9bb  50                   push eax
// 009ba9bc  83c17c               add ecx, 0x7c
// 009ba9bf  e8ecfcffff           call 0x9ba6b0
// 009ba9c4  c20800               ret 8
// library xtp-11.2.2/Source\ReportControl\XTPReportRecordItemText.cpp (function ?OnEditChanged@CXTPReportRecordItemDateTime@@UAEXPAUXTP_REPORTRECORDITEM_ARGS@@PBD@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportRecordItemText.cpp
