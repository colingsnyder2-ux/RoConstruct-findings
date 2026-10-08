// roc 2011-06 0088aaf0  unit: CXTPRibbonTheme  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0088aaf0
//
// 0088aaf0  8b442408             mov eax, dword ptr [esp + 8]
// 0088aaf4  83ec10               sub esp, 0x10
// 0088aaf7  56                   push esi
// 0088aaf8  8bf1                 mov esi, ecx
// 0088aafa  50                   push eax
// 0088aafb  8d4c2408             lea ecx, [esp + 8]
// 0088aaff  e88c22fdff           call 0x85cd90
// 0088ab04  8b8e6c060000         mov ecx, dword ptr [esi + 0x66c]
// 0088ab0a  51                   push ecx
// 0088ab0b  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0088ab0f  8d542408             lea edx, [esp + 8]
// 0088ab13  52                   push edx
// 0088ab14  e80703f8ff           call 0x80ae20
// 0088ab19  5e                   pop esi
// 0088ab1a  83c410               add esp, 0x10
// 0088ab1d  c20800               ret 8
// library xtp-11.2.2/Source\Ribbon\XTPRibbonTheme.cpp (function ?FillTabPopupToolBar@CXTPRibbonTheme@@QAEXPAVCDC@@PAVCXTPPopupToolBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonTheme.cpp
