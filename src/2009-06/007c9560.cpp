// roc 2009-06 007c9560  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007c9560
//
// 007c9560  8b442404             mov eax, dword ptr [esp + 4]
// 007c9564  894124               mov dword ptr [ecx + 0x24], eax
// 007c9567  8b442408             mov eax, dword ptr [esp + 8]
// 007c956b  85c0                 test eax, eax
// 007c956d  7413                 je 0x7c9582
// 007c956f  894120               mov dword ptr [ecx + 0x20], eax
// 007c9572  8b5044               mov edx, dword ptr [eax + 0x44]
// 007c9575  83c004               add eax, 4
// 007c9578  50                   push eax
// 007c9579  895164               mov dword ptr [ecx + 0x64], edx
// 007c957c  ff15d0e18900         call dword ptr [0x89e1d0]
// 007c9582  c20800               ret 8
// library xtp-11.2.2/Source\ReportControl\XTPReportRow.cpp (function ?InitRow@CXTPReportRow@@UAEXPAVCXTPReportControl@@PAVCXTPReportRecord@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportRow.cpp
