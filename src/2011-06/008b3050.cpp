// roc 2011-06 008b3050  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008b3050
//
// 008b3050  8b442404             mov eax, dword ptr [esp + 4]
// 008b3054  6aff                 push -1
// 008b3056  8d5024               lea edx, [eax + 0x24]
// 008b3059  52                   push edx
// 008b305a  8b500c               mov edx, dword ptr [eax + 0xc]
// 008b305d  8b4010               mov eax, dword ptr [eax + 0x10]
// 008b3060  6ac4                 push -0x3c
// 008b3062  52                   push edx
// 008b3063  50                   push eax
// 008b3064  51                   push ecx
// 008b3065  8b4924               mov ecx, dword ptr [ecx + 0x24]
// 008b3068  e88344f8ff           call 0x8374f0
// 008b306d  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportRow.cpp (function ?OnLButtonDown@CXTPReportRow@@UAEHPAUXTP_REPORTRECORDITEM_CLICKARGS@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportRow.cpp
