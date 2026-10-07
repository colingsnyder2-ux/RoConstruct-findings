// roc 2008-06 00750050  unit: CXTPReportColumns  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00750050
//
// 00750050  56                   push esi
// 00750051  8bf1                 mov esi, ecx
// 00750053  e852bf0600           call 0x7bbfaa
// 00750058  8b442408             mov eax, dword ptr [esp + 8]
// 0075005c  8d4e24               lea ecx, [esi + 0x24]
// 0075005f  c70684458600         mov dword ptr [esi], 0x864584
// 00750065  894620               mov dword ptr [esi + 0x20], eax
// 00750068  e843fbffff           call 0x74fbb0
// 0075006d  8bc6                 mov eax, esi
// 0075006f  5e                   pop esi
// 00750070  c20400               ret 4
// library xtp-11.2.2/Source\Calendar\XTPDatePickerDaysCollection.cpp (function ??0CXTPDatePickerDaysCollection@@QAE@PAVCXTPDatePickerControl@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Calendar/XTPDatePickerDaysCollection.cpp
