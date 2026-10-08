// from server: 100% by auto
// roc 2008-06 006d9cf0  unit: VCXTPReportRows::?$CXTPHeapObjectT  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006d9cf0
//
// 006d9cf0  8b442404             mov eax, dword ptr [esp + 4]
// 006d9cf4  8b542408             mov edx, dword ptr [esp + 8]
// 006d9cf8  894134               mov dword ptr [ecx + 0x34], eax
// 006d9cfb  895138               mov dword ptr [ecx + 0x38], edx
// 006d9cfe  c20800               ret 8
// library xtp-11.2.2/Source\ReportControl\XTPReportRows.cpp (function ?SetVirtualMode@CXTPReportRows@@UAEXPAVCXTPReportRow@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportRows.cpp
