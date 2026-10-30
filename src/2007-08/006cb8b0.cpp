// from server: 100% by auto
// roc 2007-08 006cb8b0  unit: CXTPReportPaintManager  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006cb8b0
//
// 006cb8b0  8b8108010000         mov eax, dword ptr [ecx + 0x108]
// 006cb8b6  83f8ff               cmp eax, -1
// 006cb8b9  7506                 jne 0x6cb8c1
// 006cb8bb  8b8104010000         mov eax, dword ptr [ecx + 0x104]
// 006cb8c1  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006cb8c5  50                   push eax
// 006cb8c6  8d44240c             lea eax, [esp + 0xc]
// 006cb8ca  50                   push eax
// 006cb8cb  e8e04ff6ff           call 0x6308b0
// 006cb8d0  c21400               ret 0x14
// library xtp-11.2.2-vc8/Source\ReportControl\XTPReportPaintManager.cpp (function ?FillIndent@CXTPReportPaintManager@@UAEXPAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/ReportControl/XTPReportPaintManager.cpp
