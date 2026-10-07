// roc 2007-08 006c4a30  unit: XTPPaintThemes::CXTPOfficeTheme  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006c4a30
//
// 006c4a30  6a38                 push 0x38
// 006c4a32  e83983f7ff           call 0x63cd70
// 006c4a37  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006c4a3b  50                   push eax
// 006c4a3c  8d44240c             lea eax, [esp + 0xc]
// 006c4a40  50                   push eax
// 006c4a41  e86abef6ff           call 0x6308b0
// 006c4a46  c21400               ret 0x14
// library xtp-11.2.2-vc8/Source\CommandBars\XTPOfficeTheme.cpp (function ?FillPopupLabelEntry@CXTPOfficeTheme@XTPPaintThemes@@MAEXPAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPOfficeTheme.cpp
