// roc 2011-06 0087dfb0  unit: CXTPReportColumns  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0087dfb0
//
// 0087dfb0  56                   push esi
// 0087dfb1  8bf1                 mov esi, ecx
// 0087dfb3  e812e61400           call 0x9cc5ca
// 0087dfb8  8b442408             mov eax, dword ptr [esp + 8]
// 0087dfbc  8d4e24               lea ecx, [esi + 0x24]
// 0087dfbf  c70694edac00         mov dword ptr [esi], 0xaced94
// 0087dfc5  894620               mov dword ptr [esi + 0x20], eax
// 0087dfc8  e843fbffff           call 0x87db10
// 0087dfcd  8bc6                 mov eax, esi
// 0087dfcf  5e                   pop esi
// 0087dfd0  c20400               ret 4
// library xtp-15.2.1/Source\Calendar\XTPDatePickerDaysCollection.cpp (function ??0CXTPDatePickerDaysCollection@@QAE@PAVCXTPDatePickerControl@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPDatePickerDaysCollection.cpp
