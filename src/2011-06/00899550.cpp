// from server: 100% by auto
// roc 2011-06 00899550  unit: XTPPaintThemes::CXTPOfficeTheme  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00899550
//
// 00899550  6a38                 push 0x38
// 00899552  e85960f7ff           call 0x80f5b0
// 00899557  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0089955b  50                   push eax
// 0089955c  8d44240c             lea eax, [esp + 0xc]
// 00899560  50                   push eax
// 00899561  e8ba18f7ff           call 0x80ae20
// 00899566  c21400               ret 0x14
// library xtp-15.2.1/Source\CommandBars\XTPOfficeTheme.cpp (function ?FillPopupLabelEntry@CXTPOfficeTheme@@MAEXPAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPOfficeTheme.cpp
