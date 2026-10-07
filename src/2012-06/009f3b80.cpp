// roc 2012-06 009f3b80  unit: CPropertyGridItemBrickColor  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009f3b80
//
// 009f3b80  c701f496c100         mov dword ptr [ecx], 0xc196f4
// 009f3b86  c741209496c100       mov dword ptr [ecx + 0x20], 0xc19694
// 009f3b8d  e9aefeffff           jmp 0x9f3a40
// library xtp-15.2.1/Source\Chart\Styles\Bar\XTPChartStackedBarSeriesStyle.cpp (function ??1CXTPChartStackedBarSeriesView@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Chart/Styles/Bar/XTPChartStackedBarSeriesStyle.cpp
