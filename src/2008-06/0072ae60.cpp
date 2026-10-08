// from server: 100% by auto
// roc 2008-06 0072ae60  unit: CXTPRibbonTheme  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0072ae60
//
// 0072ae60  56                   push esi
// 0072ae61  6a38                 push 0x38
// 0072ae63  e80832f8ff           call 0x6ae070
// 0072ae68  8b742408             mov esi, dword ptr [esp + 8]
// 0072ae6c  50                   push eax
// 0072ae6d  8d442410             lea eax, [esp + 0x10]
// 0072ae71  50                   push eax
// 0072ae72  8bce                 mov ecx, esi
// 0072ae74  e8e564f7ff           call 0x6a135e
// 0072ae79  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0072ae7d  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0072ae81  8b542418             mov edx, dword ptr [esp + 0x18]
// 0072ae85  68c5c5c500           push 0xc5c5c5
// 0072ae8a  6a01                 push 1
// 0072ae8c  2bc8                 sub ecx, eax
// 0072ae8e  51                   push ecx
// 0072ae8f  4a                   dec edx
// 0072ae90  52                   push edx
// 0072ae91  50                   push eax
// 0072ae92  8bce                 mov ecx, esi
// 0072ae94  e8a7110900           call 0x7bc040
// 0072ae99  5e                   pop esi
// 0072ae9a  c21400               ret 0x14
// library xtp-11.2.2/Source\Ribbon\XTPRibbonTheme.cpp (function ?FillPopupLabelEntry@CXTPRibbonTheme@@MAEXPAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonTheme.cpp
