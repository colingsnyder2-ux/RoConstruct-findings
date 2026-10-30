// roc 2009-06 007c9210  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007c9210
//
// 007c9210  8b442404             mov eax, dword ptr [esp + 4]
// 007c9214  6aff                 push -1
// 007c9216  8d5024               lea edx, [eax + 0x24]
// 007c9219  52                   push edx
// 007c921a  8b500c               mov edx, dword ptr [eax + 0xc]
// 007c921d  8b4010               mov eax, dword ptr [eax + 0x10]
// 007c9220  6ac4                 push -0x3c
// 007c9222  52                   push edx
// 007c9223  50                   push eax
// 007c9224  51                   push ecx
// 007c9225  8b4924               mov ecx, dword ptr [ecx + 0x24]
// 007c9228  e8c3f2f7ff           call 0x7484f0
// 007c922d  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportRow.cpp (function ?OnLButtonDown@CXTPReportRow@@UAEHPAUXTP_REPORTRECORDITEM_CLICKARGS@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportRow.cpp
