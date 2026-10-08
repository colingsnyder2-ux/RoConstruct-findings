// from server: 100% by auto
// roc 2012-06 00a16aa0  unit: CXTPKeyboardManager  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a16aa0
//
// 00a16aa0  56                   push esi
// 00a16aa1  8bf1                 mov esi, ecx
// 00a16aa3  e808feffff           call 0xa168b0
// 00a16aa8  f644240801           test byte ptr [esp + 8], 1
// 00a16aad  7406                 je 0xa16ab5
// 00a16aaf  56                   push esi
// 00a16ab0  e8b12a0800           call 0xa99566
// 00a16ab5  8bc6                 mov eax, esi
// 00a16ab7  5e                   pop esi
// 00a16ab8  c20400               ret 4
// library xtp-15.2.1/Source\Chart\XTPChartSeriesPoint.cpp (function ??_G?$CXTPBatchAllocObjT@V?$CXTPHeapObjectT@VCXTPChartSeriesPoint@@VCXTPChartSeriesPointAllocator@@@@UCXTPChartSeriesBatchPointData@@VCXTPChartSeriesPointAllocator@@@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Chart/XTPChartSeriesPoint.cpp
