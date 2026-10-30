// roc 2011-06 00841200  unit: CXTPReportRecordItemNumber  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00841200
//
// 00841200  56                   push esi
// 00841201  57                   push edi
// 00841202  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00841206  57                   push edi
// 00841207  8bf1                 mov esi, ecx
// 00841209  e8a2f4ffff           call 0x8406b0
// 0084120e  83ee80               sub esi, -0x80
// 00841211  56                   push esi
// 00841212  680819a700           push 0xa71908
// 00841217  57                   push edi
// 00841218  e823ee0100           call 0x860040
// 0084121d  83c40c               add esp, 0xc
// 00841220  5f                   pop edi
// 00841221  5e                   pop esi
// 00841222  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportRecordItemText.cpp (function ?DoPropExchange@CXTPReportRecordItemNumber@@UAEXPAVCXTPPropExchange@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportRecordItemText.cpp
