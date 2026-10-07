// roc 2007-08 006d3a80  unit: CXTPReportColumns  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006d3a80
//
// 006d3a80  56                   push esi
// 006d3a81  8bf1                 mov esi, ecx
// 006d3a83  e8b2480600           call 0x73833a
// 006d3a88  8b442408             mov eax, dword ptr [esp + 8]
// 006d3a8c  8d4e24               lea ecx, [esi + 0x24]
// 006d3a8f  c706d4827d00         mov dword ptr [esi], 0x7d82d4
// 006d3a95  894620               mov dword ptr [esi + 0x20], eax
// 006d3a98  e823fcffff           call 0x6d36c0
// 006d3a9d  8bc6                 mov eax, esi
// 006d3a9f  5e                   pop esi
// 006d3aa0  c20400               ret 4
// library xtp-11.2.2-vc8/Source\Calendar\XTPDatePickerDaysCollection.cpp (function ??0CXTPDatePickerDaysCollection@@QAE@PAVCXTPDatePickerControl@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Calendar/XTPDatePickerDaysCollection.cpp
