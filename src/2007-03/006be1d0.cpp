// roc 2007-03 006be1d0  unit: seg_006b0000  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006be1d0
//
// 006be1d0  8b442404             mov eax, dword ptr [esp + 4]
// 006be1d4  894124               mov dword ptr [ecx + 0x24], eax
// 006be1d7  8b442408             mov eax, dword ptr [esp + 8]
// 006be1db  85c0                 test eax, eax
// 006be1dd  7413                 je 0x6be1f2
// 006be1df  894120               mov dword ptr [ecx + 0x20], eax
// 006be1e2  8b5044               mov edx, dword ptr [eax + 0x44]
// 006be1e5  83c004               add eax, 4
// 006be1e8  50                   push eax
// 006be1e9  895164               mov dword ptr [ecx + 0x64], edx
// 006be1ec  ff15acd27700         call dword ptr [0x77d2ac]
// 006be1f2  c20800               ret 8
// library xtp-11.2.2/Source\ReportControl\XTPReportRow.cpp (function ?InitRow@CXTPReportRow@@UAEXPAVCXTPReportControl@@PAVCXTPReportRecord@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportRow.cpp
