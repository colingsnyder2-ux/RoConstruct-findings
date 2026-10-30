// roc 2011-06 008b33a0  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008b33a0
//
// 008b33a0  8b442404             mov eax, dword ptr [esp + 4]
// 008b33a4  894124               mov dword ptr [ecx + 0x24], eax
// 008b33a7  8b442408             mov eax, dword ptr [esp + 8]
// 008b33ab  85c0                 test eax, eax
// 008b33ad  7413                 je 0x8b33c2
// 008b33af  894120               mov dword ptr [ecx + 0x20], eax
// 008b33b2  8b5044               mov edx, dword ptr [eax + 0x44]
// 008b33b5  83c004               add eax, 4
// 008b33b8  50                   push eax
// 008b33b9  895164               mov dword ptr [ecx + 0x64], edx
// 008b33bc  ff154c03a400         call dword ptr [0xa4034c]
// 008b33c2  c20800               ret 8
// library xtp-11.2.2/Source\ReportControl\XTPReportRow.cpp (function ?InitRow@CXTPReportRow@@UAEXPAVCXTPReportControl@@PAVCXTPReportRecord@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportRow.cpp
