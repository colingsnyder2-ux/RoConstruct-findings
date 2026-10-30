// from server: 100% by auto
// roc 2012-06 009f93f0  unit: CXTPMouseManager  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009f93f0
//
// 009f93f0  56                   push esi
// 009f93f1  8bf1                 mov esi, ecx
// 009f93f3  e888ffffff           call 0x9f9380
// 009f93f8  f644240801           test byte ptr [esp + 8], 1
// 009f93fd  7406                 je 0x9f9405
// 009f93ff  56                   push esi
// 009f9400  e861010a00           call 0xa99566
// 009f9405  8bc6                 mov eax, esi
// 009f9407  5e                   pop esi
// 009f9408  c20400               ret 4
// library xtp-15.2.1/Source\Chart\XTPChartSeriesPoint.cpp (function ??_G?$CXTPBatchAllocObjT@V?$CXTPHeapObjectT@VCXTPChartSeriesPoint@@VCXTPChartSeriesPointAllocator@@@@UCXTPChartSeriesBatchPointData@@VCXTPChartSeriesPointAllocator@@@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Chart/XTPChartSeriesPoint.cpp
