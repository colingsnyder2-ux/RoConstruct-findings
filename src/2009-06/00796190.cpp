// roc 2009-06 00796190  unit: CXTPRibbonTheme  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00796190
//
// 00796190  8b442408             mov eax, dword ptr [esp + 8]
// 00796194  83ec10               sub esp, 0x10
// 00796197  56                   push esi
// 00796198  8bf1                 mov esi, ecx
// 0079619a  50                   push eax
// 0079619b  8d4c2408             lea ecx, [esp + 8]
// 0079619f  e82ca3fdff           call 0x7704d0
// 007961a4  8b8e6c060000         mov ecx, dword ptr [esi + 0x66c]
// 007961aa  51                   push ecx
// 007961ab  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 007961af  8d542408             lea edx, [esp + 8]
// 007961b3  52                   push edx
// 007961b4  e81736f8ff           call 0x7197d0
// 007961b9  5e                   pop esi
// 007961ba  83c410               add esp, 0x10
// 007961bd  c20800               ret 8
// library xtp-11.2.2/Source\Ribbon\XTPRibbonTheme.cpp (function ?FillTabPopupToolBar@CXTPRibbonTheme@@QAEXPAVCDC@@PAVCXTPPopupToolBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonTheme.cpp
