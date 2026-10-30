// from server: 100% by auto
// roc 2008-06 00746520  unit: CXTPReportPaintManager  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00746520
//
// 00746520  8b8190000000         mov eax, dword ptr [ecx + 0x90]
// 00746526  83f8ff               cmp eax, -1
// 00746529  7506                 jne 0x746531
// 0074652b  8b818c000000         mov eax, dword ptr [ecx + 0x8c]
// 00746531  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportPaintManager.cpp (function ?GetControlBackColor@CXTPReportPaintManager@@UAEKPAVCXTPReportControl@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportPaintManager.cpp
