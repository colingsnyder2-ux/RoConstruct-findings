// from server: 100% by auto
// roc 2007-08 006d44a0  unit: CXTPReportRow_Batch  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006d44a0
//
// 006d44a0  8b442404             mov eax, dword ptr [esp + 4]
// 006d44a4  894124               mov dword ptr [ecx + 0x24], eax
// 006d44a7  8b442408             mov eax, dword ptr [esp + 8]
// 006d44ab  85c0                 test eax, eax
// 006d44ad  7413                 je 0x6d44c2
// 006d44af  894120               mov dword ptr [ecx + 0x20], eax
// 006d44b2  8b5044               mov edx, dword ptr [eax + 0x44]
// 006d44b5  83c004               add eax, 4
// 006d44b8  50                   push eax
// 006d44b9  895164               mov dword ptr [ecx + 0x64], edx
// 006d44bc  ff15ecd27700         call dword ptr [0x77d2ec]
// 006d44c2  c20800               ret 8
// library xtp-11.2.2-vc8/Source\ReportControl\XTPReportRow.cpp (function ?InitRow@CXTPReportRow@@UAEXPAVCXTPReportControl@@PAVCXTPReportRecord@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/ReportControl/XTPReportRow.cpp
