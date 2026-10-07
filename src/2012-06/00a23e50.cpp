// roc 2012-06 00a23e50  unit: CXTPReportPaintManager  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a23e50
//
// 00a23e50  8b8108010000         mov eax, dword ptr [ecx + 0x108]
// 00a23e56  83f8ff               cmp eax, -1
// 00a23e59  7506                 jne 0xa23e61
// 00a23e5b  8b8104010000         mov eax, dword ptr [ecx + 0x104]
// 00a23e61  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00a23e65  50                   push eax
// 00a23e66  8d44240c             lea eax, [esp + 0xc]
// 00a23e6a  50                   push eax
// 00a23e6b  e83cf0f5ff           call 0x982eac
// 00a23e70  c21400               ret 0x14
// library xtp-13.2.1/Source\ReportControl\XTPReportPaintManager.cpp (function ?FillIndent@CXTPReportPaintManager@@UAEXPAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-13.2.1 Source/ReportControl/XTPReportPaintManager.cpp
