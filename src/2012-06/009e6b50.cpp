// roc 2012-06 009e6b50  unit: CXTThemeManager  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009e6b50
//
// 009e6b50  56                   push esi
// 009e6b51  8bf1                 mov esi, ecx
// 009e6b53  e878fdffff           call 0x9e68d0
// 009e6b58  f644240801           test byte ptr [esp + 8], 1
// 009e6b5d  7406                 je 0x9e6b65
// 009e6b5f  56                   push esi
// 009e6b60  e8012a0b00           call 0xa99566
// 009e6b65  8bc6                 mov eax, esi
// 009e6b67  5e                   pop esi
// 009e6b68  c20400               ret 4
// library xtp-15.2.1/Source\Chart\XTPChartSeriesPoint.cpp (function ??_G?$CXTPBatchAllocObjT@V?$CXTPHeapObjectT@VCXTPChartSeriesPoint@@VCXTPChartSeriesPointAllocator@@@@UCXTPChartSeriesBatchPointData@@VCXTPChartSeriesPointAllocator@@@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Chart/XTPChartSeriesPoint.cpp
