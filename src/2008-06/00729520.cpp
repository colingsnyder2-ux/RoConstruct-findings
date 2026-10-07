// roc 2008-06 00729520  unit: CXTPRibbonTheme  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00729520
//
// 00729520  8b442408             mov eax, dword ptr [esp + 8]
// 00729524  83ec10               sub esp, 0x10
// 00729527  56                   push esi
// 00729528  8bf1                 mov esi, ecx
// 0072952a  50                   push eax
// 0072952b  8d4c2408             lea ecx, [esp + 8]
// 0072952f  e8fce5fcff           call 0x6f7b30
// 00729534  8b8e6c060000         mov ecx, dword ptr [esi + 0x66c]
// 0072953a  51                   push ecx
// 0072953b  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0072953f  8d542408             lea edx, [esp + 8]
// 00729543  52                   push edx
// 00729544  e8157ef7ff           call 0x6a135e
// 00729549  5e                   pop esi
// 0072954a  83c410               add esp, 0x10
// 0072954d  c20800               ret 8
// library xtp-11.2.2/Source\Ribbon\XTPRibbonTheme.cpp (function ?FillTabPopupToolBar@CXTPRibbonTheme@@QAEXPAVCDC@@PAVCXTPPopupToolBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonTheme.cpp
