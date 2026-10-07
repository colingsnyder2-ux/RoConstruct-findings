// roc 2007-08 006cb220  unit: CXTPReportPaintManager  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006cb220
//
// 006cb220  8b8190000000         mov eax, dword ptr [ecx + 0x90]
// 006cb226  83f8ff               cmp eax, -1
// 006cb229  7506                 jne 0x6cb231
// 006cb22b  8b818c000000         mov eax, dword ptr [ecx + 0x8c]
// 006cb231  c20400               ret 4
// library xtp-11.2.2-vc8/Source\ReportControl\XTPReportPaintManager.cpp (function ?GetControlBackColor@CXTPReportPaintManager@@UAEKPAVCXTPReportControl@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/ReportControl/XTPReportPaintManager.cpp
