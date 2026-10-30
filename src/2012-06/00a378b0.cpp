// from server: 100% by auto
// roc 2012-06 00a378b0  unit: CXTPDockingPaneKeyboardHook  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a378b0
//
// 00a378b0  56                   push esi
// 00a378b1  8bf1                 mov esi, ecx
// 00a378b3  e8e8feffff           call 0xa377a0
// 00a378b8  f644240801           test byte ptr [esp + 8], 1
// 00a378bd  7406                 je 0xa378c5
// 00a378bf  56                   push esi
// 00a378c0  e8a11c0600           call 0xa99566
// 00a378c5  8bc6                 mov eax, esi
// 00a378c7  5e                   pop esi
// 00a378c8  c20400               ret 4
// library xtp-15.2.1/Source\Chart\XTPChartSeriesPoint.cpp (function ??_G?$CXTPBatchAllocObjT@V?$CXTPHeapObjectT@VCXTPChartSeriesPoint@@VCXTPChartSeriesPointAllocator@@@@UCXTPChartSeriesBatchPointData@@VCXTPChartSeriesPointAllocator@@@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Chart/XTPChartSeriesPoint.cpp
