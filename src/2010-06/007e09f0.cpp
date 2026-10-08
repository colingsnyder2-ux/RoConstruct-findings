// roc 2010-06 007e09f0  unit: CXTPReportRecordItemDateTime  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007e09f0
//
// 007e09f0  8b442408             mov eax, dword ptr [esp + 8]
// 007e09f4  6800040000           push 0x400
// 007e09f9  6a00                 push 0
// 007e09fb  50                   push eax
// 007e09fc  83c17c               add ecx, 0x7c
// 007e09ff  e89cfcffff           call 0x7e06a0
// 007e0a04  c20800               ret 8
// library xtp-11.2.2/Source\ReportControl\XTPReportRecordItemText.cpp (function ?OnEditChanged@CXTPReportRecordItemDateTime@@UAEXPAUXTP_REPORTRECORDITEM_ARGS@@PBD@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportRecordItemText.cpp
