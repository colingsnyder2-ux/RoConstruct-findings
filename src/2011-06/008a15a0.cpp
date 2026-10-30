// from server: 100% by auto
// roc 2011-06 008a15a0  unit: CXTPToolBar::CControlButtonHide  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008a15a0
//
// 008a15a0  c701b425ad00         mov dword ptr [ecx], 0xad25b4
// 008a15a6  c741205425ad00       mov dword ptr [ecx + 0x20], 0xad2554
// 008a15ad  e9eed0f6ff           jmp 0x80e6a0
// library xtp-15.2.1/Source\Chart\Styles\Bar\XTPChartStackedBarSeriesStyle.cpp (function ??1CXTPChartStackedBarSeriesView@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Chart/Styles/Bar/XTPChartStackedBarSeriesStyle.cpp
