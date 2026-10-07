// roc 2012-06 009f8480  unit: CXTPResourceManager  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009f8480
//
// 009f8480  56                   push esi
// 009f8481  8bf1                 mov esi, ecx
// 009f8483  e8e8feffff           call 0x9f8370
// 009f8488  f644240801           test byte ptr [esp + 8], 1
// 009f848d  7406                 je 0x9f8495
// 009f848f  56                   push esi
// 009f8490  e8d1100a00           call 0xa99566
// 009f8495  8bc6                 mov eax, esi
// 009f8497  5e                   pop esi
// 009f8498  c20400               ret 4
// library xtp-15.2.1/Source\Chart\XTPChartSeriesPoint.cpp (function ??_G?$CXTPBatchAllocObjT@V?$CXTPHeapObjectT@VCXTPChartSeriesPoint@@VCXTPChartSeriesPointAllocator@@@@UCXTPChartSeriesBatchPointData@@VCXTPChartSeriesPointAllocator@@@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Chart/XTPChartSeriesPoint.cpp
