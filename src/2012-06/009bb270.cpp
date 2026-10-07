// roc 2012-06 009bb270  unit: VCXTPReportRows::?$CXTPHeapObjectT  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009bb270
//
// 009bb270  8b442404             mov eax, dword ptr [esp + 4]
// 009bb274  8b542408             mov edx, dword ptr [esp + 8]
// 009bb278  894134               mov dword ptr [ecx + 0x34], eax
// 009bb27b  895138               mov dword ptr [ecx + 0x38], edx
// 009bb27e  c20800               ret 8
// library xtp-13.2.1/Source\ReportControl\XTPReportRows.cpp (function ?SetVirtualMode@CXTPReportRows@@UAEXPAVCXTPReportRow@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-13.2.1 Source/ReportControl/XTPReportRows.cpp
