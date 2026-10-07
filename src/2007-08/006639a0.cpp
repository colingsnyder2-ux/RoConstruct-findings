// roc 2007-08 006639a0  unit: VCXTPReportRows::?$CXTPHeapObjectT  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006639a0
//
// 006639a0  8b442404             mov eax, dword ptr [esp + 4]
// 006639a4  8b542408             mov edx, dword ptr [esp + 8]
// 006639a8  894134               mov dword ptr [ecx + 0x34], eax
// 006639ab  895138               mov dword ptr [ecx + 0x38], edx
// 006639ae  c20800               ret 8
// library xtp-11.2.2-vc8/Source\ReportControl\XTPReportRows.cpp (function ?SetVirtualMode@CXTPReportRows@@UAEXPAVCXTPReportRow@@H@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/ReportControl/XTPReportRows.cpp
