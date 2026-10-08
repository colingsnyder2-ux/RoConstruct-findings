// roc 2010-06 00858150  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00858150
//
// 00858150  8b442404             mov eax, dword ptr [esp + 4]
// 00858154  6aff                 push -1
// 00858156  8d5024               lea edx, [eax + 0x24]
// 00858159  52                   push edx
// 0085815a  8b500c               mov edx, dword ptr [eax + 0xc]
// 0085815d  8b4010               mov eax, dword ptr [eax + 0x10]
// 00858160  6ac4                 push -0x3c
// 00858162  52                   push edx
// 00858163  50                   push eax
// 00858164  51                   push ecx
// 00858165  8b4924               mov ecx, dword ptr [ecx + 0x24]
// 00858168  e8f3f1f7ff           call 0x7d7360
// 0085816d  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportRow.cpp (function ?OnLButtonDown@CXTPReportRow@@UAEHPAUXTP_REPORTRECORDITEM_CLICKARGS@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportRow.cpp
