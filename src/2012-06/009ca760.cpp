// roc 2012-06 009ca760  unit: CXTPControlPopupColor  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009ca760
//
// 009ca760  c701c43bc100         mov dword ptr [ecx], 0xc13bc4
// 009ca766  c74120643bc100       mov dword ptr [ecx + 0x20], 0xc13b64
// 009ca76d  e95ee2ffff           jmp 0x9c89d0
// library xtp-15.2.1/Source\Chart\Styles\Bar\XTPChartStackedBarSeriesStyle.cpp (function ??1CXTPChartStackedBarSeriesView@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Chart/Styles/Bar/XTPChartStackedBarSeriesStyle.cpp
