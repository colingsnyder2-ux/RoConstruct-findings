// roc 2012-06 00a030d0  unit: CXTPRibbonTheme  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a030d0
//
// 00a030d0  8b442408             mov eax, dword ptr [esp + 8]
// 00a030d4  83ec10               sub esp, 0x10
// 00a030d7  56                   push esi
// 00a030d8  8bf1                 mov esi, ecx
// 00a030da  50                   push eax
// 00a030db  8d4c2408             lea ecx, [esp + 8]
// 00a030df  e8bc20fdff           call 0x9d51a0
// 00a030e4  8b8e6c060000         mov ecx, dword ptr [esi + 0x66c]
// 00a030ea  51                   push ecx
// 00a030eb  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00a030ef  8d542408             lea edx, [esp + 8]
// 00a030f3  52                   push edx
// 00a030f4  e8b3fdf7ff           call 0x982eac
// 00a030f9  5e                   pop esi
// 00a030fa  83c410               add esp, 0x10
// 00a030fd  c20800               ret 8
// library xtp-11.2.2/Source\Ribbon\XTPRibbonTheme.cpp (function ?FillTabPopupToolBar@CXTPRibbonTheme@@QAEXPAVCDC@@PAVCXTPPopupToolBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonTheme.cpp
