// from server: 100% by auto
// roc 2008-06 00750c00  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00750c00
//
// 00750c00  8b442404             mov eax, dword ptr [esp + 4]
// 00750c04  6aff                 push -1
// 00750c06  8d5024               lea edx, [eax + 0x24]
// 00750c09  52                   push edx
// 00750c0a  8b500c               mov edx, dword ptr [eax + 0xc]
// 00750c0d  8b4010               mov eax, dword ptr [eax + 0x10]
// 00750c10  6ac4                 push -0x3c
// 00750c12  52                   push edx
// 00750c13  50                   push eax
// 00750c14  51                   push ecx
// 00750c15  8b4924               mov ecx, dword ptr [ecx + 0x24]
// 00750c18  e893f1f7ff           call 0x6cfdb0
// 00750c1d  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportRow.cpp (function ?OnLButtonDown@CXTPReportRow@@UAEHPAUXTP_REPORTRECORDITEM_CLICKARGS@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportRow.cpp
