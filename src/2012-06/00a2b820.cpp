// roc 2012-06 00a2b820  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a2b820
//
// 00a2b820  8b442404             mov eax, dword ptr [esp + 4]
// 00a2b824  894124               mov dword ptr [ecx + 0x24], eax
// 00a2b827  8b442408             mov eax, dword ptr [esp + 8]
// 00a2b82b  85c0                 test eax, eax
// 00a2b82d  7413                 je 0xa2b842
// 00a2b82f  894120               mov dword ptr [ecx + 0x20], eax
// 00a2b832  8b5044               mov edx, dword ptr [eax + 0x44]
// 00a2b835  83c004               add eax, 4
// 00a2b838  50                   push eax
// 00a2b839  895164               mov dword ptr [ecx + 0x64], edx
// 00a2b83c  ff159821b200         call dword ptr [0xb22198]
// 00a2b842  c20800               ret 8
// library xtp-11.2.2/Source\ReportControl\XTPReportRow.cpp (function ?InitRow@CXTPReportRow@@UAEXPAVCXTPReportControl@@PAVCXTPReportRecord@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportRow.cpp
