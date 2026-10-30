// from server: 100% by auto
// roc 2012-06 009b1240  unit: CXTPReportRow_Batch  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009b1240
//
// 009b1240  56                   push esi
// 009b1241  8bf1                 mov esi, ecx
// 009b1243  e818a00700           call 0xa2b260
// 009b1248  f644240801           test byte ptr [esp + 8], 1
// 009b124d  7406                 je 0x9b1255
// 009b124f  56                   push esi
// 009b1250  e80becffff           call 0x9afe60
// 009b1255  8bc6                 mov eax, esi
// 009b1257  5e                   pop esi
// 009b1258  c20400               ret 4
// library xtp-15.2.1/Source\Chart\XTPChartSeriesPoint.cpp (function ??_G?$CXTPBatchAllocObjT@V?$CXTPHeapObjectT@VCXTPChartSeriesPoint@@VCXTPChartSeriesPointAllocator@@@@UCXTPChartSeriesBatchPointData@@VCXTPChartSeriesPointAllocator@@@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Chart/XTPChartSeriesPoint.cpp
