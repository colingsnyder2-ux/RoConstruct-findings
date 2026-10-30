// roc 2009-06 00751bf0  unit: CXTPReportRecordItemDateTime  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00751bf0
//
// 00751bf0  8b442408             mov eax, dword ptr [esp + 8]
// 00751bf4  6800040000           push 0x400
// 00751bf9  6a00                 push 0
// 00751bfb  50                   push eax
// 00751bfc  83c17c               add ecx, 0x7c
// 00751bff  e89cfcffff           call 0x7518a0
// 00751c04  c20800               ret 8
// library xtp-11.2.2/Source\ReportControl\XTPReportRecordItemText.cpp (function ?OnEditChanged@CXTPReportRecordItemDateTime@@UAEXPAUXTP_REPORTRECORDITEM_ARGS@@PBD@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportRecordItemText.cpp
