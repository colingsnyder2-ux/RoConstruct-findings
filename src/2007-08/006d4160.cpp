// roc 2007-08 006d4160  unit: CXTPReportRow_Batch  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006d4160
//
// 006d4160  8b442404             mov eax, dword ptr [esp + 4]
// 006d4164  6aff                 push -1
// 006d4166  8d5024               lea edx, [eax + 0x24]
// 006d4169  52                   push edx
// 006d416a  8b500c               mov edx, dword ptr [eax + 0xc]
// 006d416d  8b4010               mov eax, dword ptr [eax + 0x10]
// 006d4170  6ac4                 push -0x3c
// 006d4172  52                   push edx
// 006d4173  50                   push eax
// 006d4174  51                   push ecx
// 006d4175  8b4924               mov ecx, dword ptr [ecx + 0x24]
// 006d4178  e8936bf8ff           call 0x65ad10
// 006d417d  c20400               ret 4
// library xtp-11.2.2-vc8/Source\ReportControl\XTPReportRow.cpp (function ?OnLButtonDown@CXTPReportRow@@UAEHPAUXTP_REPORTRECORDITEM_CLICKARGS@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/ReportControl/XTPReportRow.cpp
