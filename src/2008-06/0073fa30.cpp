// roc 2008-06 0073fa30  unit: XTPPaintThemes::CXTPOfficeTheme  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0073fa30
//
// 0073fa30  6a38                 push 0x38
// 0073fa32  e839e6f6ff           call 0x6ae070
// 0073fa37  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0073fa3b  50                   push eax
// 0073fa3c  8d44240c             lea eax, [esp + 0xc]
// 0073fa40  50                   push eax
// 0073fa41  e81819f6ff           call 0x6a135e
// 0073fa46  c21400               ret 0x14
// library xtp-11.2.2/Source\CommandBars\XTPOfficeTheme.cpp (function ?FillPopupLabelEntry@CXTPOfficeTheme@XTPPaintThemes@@MAEXPAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPOfficeTheme.cpp
