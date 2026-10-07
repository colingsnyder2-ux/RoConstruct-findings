// roc 2012-06 009f6560  unit: CXTPReportColumns  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009f6560
//
// 009f6560  56                   push esi
// 009f6561  8bf1                 mov esi, ecx
// 009f6563  e81c300a00           call 0xa99584
// 009f6568  8b442408             mov eax, dword ptr [esp + 8]
// 009f656c  8d4e24               lea ecx, [esi + 0x24]
// 009f656f  c7064ca4c100         mov dword ptr [esi], 0xc1a44c
// 009f6575  894620               mov dword ptr [esi + 0x20], eax
// 009f6578  e843fbffff           call 0x9f60c0
// 009f657d  8bc6                 mov eax, esi
// 009f657f  5e                   pop esi
// 009f6580  c20400               ret 4
// library xtp-15.2.1/Source\Calendar\XTPDatePickerDaysCollection.cpp (function ??0CXTPDatePickerDaysCollection@@QAE@PAVCXTPDatePickerControl@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPDatePickerDaysCollection.cpp
