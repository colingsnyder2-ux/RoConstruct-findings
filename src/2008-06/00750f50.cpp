// roc 2008-06 00750f50  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00750f50
//
// 00750f50  8b442404             mov eax, dword ptr [esp + 4]
// 00750f54  894124               mov dword ptr [ecx + 0x24], eax
// 00750f57  8b442408             mov eax, dword ptr [esp + 8]
// 00750f5b  85c0                 test eax, eax
// 00750f5d  7413                 je 0x750f72
// 00750f5f  894120               mov dword ptr [ecx + 0x20], eax
// 00750f62  8b5044               mov edx, dword ptr [eax + 0x44]
// 00750f65  83c004               add eax, 4
// 00750f68  50                   push eax
// 00750f69  895164               mov dword ptr [ecx + 0x64], edx
// 00750f6c  ff15b0218000         call dword ptr [0x8021b0]
// 00750f72  c20800               ret 8
// library xtp-11.2.2/Source\ReportControl\XTPReportRow.cpp (function ?InitRow@CXTPReportRow@@UAEXPAVCXTPReportControl@@PAVCXTPReportRecord@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportRow.cpp
