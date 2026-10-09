// roc 2009-12 008a4360  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008a4360
//
// 008a4360  8b442404             mov eax, dword ptr [esp + 4]
// 008a4364  894124               mov dword ptr [ecx + 0x24], eax
// 008a4367  8b442408             mov eax, dword ptr [esp + 8]
// 008a436b  85c0                 test eax, eax
// 008a436d  7413                 je 0x8a4382
// 008a436f  894120               mov dword ptr [ecx + 0x20], eax
// 008a4372  8b5044               mov edx, dword ptr [eax + 0x44]
// 008a4375  83c004               add eax, 4
// 008a4378  50                   push eax
// 008a4379  895164               mov dword ptr [ecx + 0x64], edx
// 008a437c  ff150cb29800         call dword ptr [0x98b20c]
// 008a4382  c20800               ret 8
// library xtp-11.2.2/Source\ReportControl\XTPReportRow.cpp (function ?InitRow@CXTPReportRow@@UAEXPAVCXTPReportControl@@PAVCXTPReportRecord@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportRow.cpp
