// roc 2012-06 00a23cb0  unit: CXTPRibbonBar  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a23cb0
//
// 00a23cb0  56                   push esi
// 00a23cb1  8bf1                 mov esi, ecx
// 00a23cb3  e8cc580700           call 0xa99584
// 00a23cb8  b801000000           mov eax, 1
// 00a23cbd  894620               mov dword ptr [esi + 0x20], eax
// 00a23cc0  894624               mov dword ptr [esi + 0x24], eax
// 00a23cc3  c706ccf5c100         mov dword ptr [esi], 0xc1f5cc
// 00a23cc9  c7462800000000       mov dword ptr [esi + 0x28], 0
// 00a23cd0  8bc6                 mov eax, esi
// 00a23cd2  5e                   pop esi
// 00a23cd3  c3                   ret 
// library xtp-13.2.1/Source\ReportControl\XTPReportPaintManager.cpp (function ??0CXTPFormulaMulDivC@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-13.2.1 Source/ReportControl/XTPReportPaintManager.cpp
