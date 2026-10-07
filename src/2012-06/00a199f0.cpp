// roc 2012-06 00a199f0  unit: CXTPToolBar::CControlButtonHide  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a199f0
//
// 00a199f0  c7014cdcc100         mov dword ptr [ecx], 0xc1dc4c
// 00a199f6  c74120ecdbc100       mov dword ptr [ecx + 0x20], 0xc1dbec
// 00a199fd  e99ecff6ff           jmp 0x9869a0
// library xtp-15.2.1/Source\Chart\Styles\Bar\XTPChartStackedBarSeriesStyle.cpp (function ??1CXTPChartStackedBarSeriesView@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Chart/Styles/Bar/XTPChartStackedBarSeriesStyle.cpp
