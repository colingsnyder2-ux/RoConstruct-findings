// roc 2012-06 00a11b50  unit: XTPPaintThemes::CXTPOfficeTheme  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a11b50
//
// 00a11b50  6a38                 push 0x38
// 00a11b52  e8395df7ff           call 0x987890
// 00a11b57  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00a11b5b  50                   push eax
// 00a11b5c  8d44240c             lea eax, [esp + 0xc]
// 00a11b60  50                   push eax
// 00a11b61  e84613f7ff           call 0x982eac
// 00a11b66  c21400               ret 0x14
// library xtp-15.2.1/Source\CommandBars\XTPOfficeTheme.cpp (function ?FillPopupLabelEntry@CXTPOfficeTheme@@MAEXPAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPOfficeTheme.cpp
