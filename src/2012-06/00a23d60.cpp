// roc 2012-06 00a23d60  unit: CXTPReportPaintManager  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a23d60
//
// 00a23d60  8b8190000000         mov eax, dword ptr [ecx + 0x90]
// 00a23d66  83f8ff               cmp eax, -1
// 00a23d69  7506                 jne 0xa23d71
// 00a23d6b  8b818c000000         mov eax, dword ptr [ecx + 0x8c]
// 00a23d71  c20400               ret 4
// library xtp-13.2.1/Source\ReportControl\XTPReportPaintManager.cpp (function ?GetControlBackColor@CXTPReportPaintManager@@UAEKPAVCXTPReportControl@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-13.2.1 Source/ReportControl/XTPReportPaintManager.cpp
