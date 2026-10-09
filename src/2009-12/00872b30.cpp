// roc 2009-12 00872b30  unit: CXTPRibbonTheme  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00872b30
//
// 00872b30  8b442408             mov eax, dword ptr [esp + 8]
// 00872b34  83ec10               sub esp, 0x10
// 00872b37  56                   push esi
// 00872b38  8bf1                 mov esi, ecx
// 00872b3a  50                   push eax
// 00872b3b  8d4c2408             lea ecx, [esp + 8]
// 00872b3f  e88c87fdff           call 0x84b2d0
// 00872b44  8b8e6c060000         mov ecx, dword ptr [esi + 0x66c]
// 00872b4a  51                   push ecx
// 00872b4b  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00872b4f  8d542408             lea edx, [esp + 8]
// 00872b53  52                   push edx
// 00872b54  e8a51af8ff           call 0x7f45fe
// 00872b59  5e                   pop esi
// 00872b5a  83c410               add esp, 0x10
// 00872b5d  c20800               ret 8
// library xtp-11.2.2/Source\Ribbon\XTPRibbonTheme.cpp (function ?FillTabPopupToolBar@CXTPRibbonTheme@@QAEXPAVCDC@@PAVCXTPPopupToolBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonTheme.cpp
