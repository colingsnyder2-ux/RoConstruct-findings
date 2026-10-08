// from server: 100% by auto
// roc 2011-06 008522a0  unit: CXTPControlPopupColor  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008522a0
//
// 008522a0  c701cc84ac00         mov dword ptr [ecx], 0xac84cc
// 008522a6  c741206c84ac00       mov dword ptr [ecx + 0x20], 0xac846c
// 008522ad  e94ee2ffff           jmp 0x850500
// library xtp-15.2.1/Source\Chart\Styles\Bar\XTPChartStackedBarSeriesStyle.cpp (function ??1CXTPChartStackedBarSeriesView@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Chart/Styles/Bar/XTPChartStackedBarSeriesStyle.cpp
