// roc 2009-12 008a4010  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008a4010
//
// 008a4010  8b442404             mov eax, dword ptr [esp + 4]
// 008a4014  6aff                 push -1
// 008a4016  8d5024               lea edx, [eax + 0x24]
// 008a4019  52                   push edx
// 008a401a  8b500c               mov edx, dword ptr [eax + 0xc]
// 008a401d  8b4010               mov eax, dword ptr [eax + 0x10]
// 008a4020  6ac4                 push -0x3c
// 008a4022  52                   push edx
// 008a4023  50                   push eax
// 008a4024  51                   push ecx
// 008a4025  8b4924               mov ecx, dword ptr [ecx + 0x24]
// 008a4028  e8d3f2f7ff           call 0x823300
// 008a402d  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportRow.cpp (function ?OnLButtonDown@CXTPReportRow@@UAEHPAUXTP_REPORTRECORDITEM_CLICKARGS@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportRow.cpp
