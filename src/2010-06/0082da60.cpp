// roc 2010-06 0082da60  unit: CXTPRibbonTheme  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0082da60
//
// 0082da60  8b442408             mov eax, dword ptr [esp + 8]
// 0082da64  83ec10               sub esp, 0x10
// 0082da67  56                   push esi
// 0082da68  8bf1                 mov esi, ecx
// 0082da6a  50                   push eax
// 0082da6b  8d4c2408             lea ecx, [esp + 8]
// 0082da6f  e89c18fdff           call 0x7ff310
// 0082da74  8b8e6c060000         mov ecx, dword ptr [esi + 0x66c]
// 0082da7a  51                   push ecx
// 0082da7b  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0082da7f  8d542408             lea edx, [esp + 8]
// 0082da83  52                   push edx
// 0082da84  e8b5acf7ff           call 0x7a873e
// 0082da89  5e                   pop esi
// 0082da8a  83c410               add esp, 0x10
// 0082da8d  c20800               ret 8
// library xtp-11.2.2/Source\Ribbon\XTPRibbonTheme.cpp (function ?FillTabPopupToolBar@CXTPRibbonTheme@@QAEXPAVCDC@@PAVCXTPPopupToolBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonTheme.cpp
