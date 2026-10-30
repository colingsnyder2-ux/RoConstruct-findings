// from server: 100% by auto
// roc 2008-06 006d9b80  unit: CXTPReportRecordItemDateTime  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006d9b80
//
// 006d9b80  8b442408             mov eax, dword ptr [esp + 8]
// 006d9b84  6800040000           push 0x400
// 006d9b89  6a00                 push 0
// 006d9b8b  50                   push eax
// 006d9b8c  83c17c               add ecx, 0x7c
// 006d9b8f  e89cfcffff           call 0x6d9830
// 006d9b94  c20800               ret 8
// library xtp-11.2.2/Source\ReportControl\XTPReportRecordItemText.cpp (function ?OnEditChanged@CXTPReportRecordItemDateTime@@UAEXPAUXTP_REPORTRECORDITEM_ARGS@@PBD@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportRecordItemText.cpp
