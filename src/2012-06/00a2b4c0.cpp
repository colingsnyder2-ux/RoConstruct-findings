// roc 2012-06 00a2b4c0  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a2b4c0
//
// 00a2b4c0  8b442404             mov eax, dword ptr [esp + 4]
// 00a2b4c4  6aff                 push -1
// 00a2b4c6  8d5024               lea edx, [eax + 0x24]
// 00a2b4c9  52                   push edx
// 00a2b4ca  8b500c               mov edx, dword ptr [eax + 0xc]
// 00a2b4cd  8b4010               mov eax, dword ptr [eax + 0x10]
// 00a2b4d0  6ac4                 push -0x3c
// 00a2b4d2  52                   push edx
// 00a2b4d3  50                   push eax
// 00a2b4d4  51                   push ecx
// 00a2b4d5  8b4924               mov ecx, dword ptr [ecx + 0x24]
// 00a2b4d8  e82346f8ff           call 0x9afb00
// 00a2b4dd  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportRow.cpp (function ?OnLButtonDown@CXTPReportRow@@UAEHPAUXTP_REPORTRECORDITEM_CLICKARGS@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportRow.cpp
