// roc 2009-12 0082b7b0  unit: CXTPReportRecordItemText  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0082b7b0
//
// 0082b7b0  8b442408             mov eax, dword ptr [esp + 8]
// 0082b7b4  50                   push eax
// 0082b7b5  83c17c               add ecx, 0x7c
// 0082b7b8  ff155cde9800         call dword ptr [0x98de5c]
// 0082b7be  c20800               ret 8
// copied from an identical function in another client (function ?OnEditChanged@CXTPReportRecordItemText@@UAEXPAUXTP_REPORTRECORDITEM_ARGS@@PBD@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportRecordItemText.cpp