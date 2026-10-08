// roc 2010-06 008584a0  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008584a0
//
// 008584a0  8b442404             mov eax, dword ptr [esp + 4]
// 008584a4  894124               mov dword ptr [ecx + 0x24], eax
// 008584a7  8b442408             mov eax, dword ptr [esp + 8]
// 008584ab  85c0                 test eax, eax
// 008584ad  7413                 je 0x8584c2
// 008584af  894120               mov dword ptr [ecx + 0x20], eax
// 008584b2  8b5044               mov edx, dword ptr [eax + 0x44]
// 008584b5  83c004               add eax, 4
// 008584b8  50                   push eax
// 008584b9  895164               mov dword ptr [ecx + 0x64], edx
// 008584bc  ff1580a39e00         call dword ptr [0x9ea380]
// 008584c2  c20800               ret 8
// library xtp-11.2.2/Source\ReportControl\XTPReportRow.cpp (function ?InitRow@CXTPReportRow@@UAEXPAVCXTPReportControl@@PAVCXTPReportRecord@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportRow.cpp
