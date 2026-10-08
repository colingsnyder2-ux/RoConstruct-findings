// from server: 100% by auto
// roc 2011-06 0087c820  unit: CXTPPropertyGridItemEnum  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0087c820
//
// 0087c820  c701f4e6ac00         mov dword ptr [ecx], 0xace6f4
// 0087c826  c7412094e6ac00       mov dword ptr [ecx + 0x20], 0xace694
// 0087c82d  e96eecffff           jmp 0x87b4a0
// library xtp-15.2.1/Source\Chart\Styles\Bar\XTPChartStackedBarSeriesStyle.cpp (function ??1CXTPChartStackedBarSeriesView@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Chart/Styles/Bar/XTPChartStackedBarSeriesStyle.cpp
