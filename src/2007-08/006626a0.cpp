// from server: 100% by tester
// roc 2008-06 006d8980  unit: CXTPReportRecordItemText  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006d8980
//
// 006d8980  8b442408             mov eax, dword ptr [esp + 8]
// 006d8984  50                   push eax
// 006d8985  83c17c               add ecx, 0x7c
// 006d8988  ff15b83e8000         call dword ptr [0x803eb8]
// 006d898e  c20800               ret 8
// library xtp-11.2.2-shared-mfc/Source\ReportControl\XTPReportRecordItemText.cpp (function ?OnEditChanged@CXTPReportRecordItemText@@UAEXPAUXTP_REPORTRECORDITEM_ARGS@@PBD@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportRecordItemText.cpp
