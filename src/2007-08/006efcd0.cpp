// roc 2007-08 006efcd0  unit: CXTPControlComboBoxPopupBar  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006efcd0
//
// 006efcd0  8b442404             mov eax, dword ptr [esp + 4]
// 006efcd4  db00                 fild dword ptr [eax]
// 006efcd6  56                   push esi
// 006efcd7  dd442414             fld qword ptr [esp + 0x14]
// 006efcdb  dcc9                 fmul st(1), st(0)
// 006efcdd  d9c9                 fxch st(1)
// 006efcdf  e87c10f4ff           call 0x630d60
// 006efce4  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006efce8  db01                 fild dword ptr [ecx]
// 006efcea  8bf0                 mov esi, eax
// 006efcec  c1e608               shl esi, 8
// 006efcef  d8c9                 fmul st(1)
// 006efcf1  e86a10f4ff           call 0x630d60
// 006efcf6  8b542410             mov edx, dword ptr [esp + 0x10]
// 006efcfa  da0a                 fimul dword ptr [edx]
// 006efcfc  03f0                 add esi, eax
// 006efcfe  c1e608               shl esi, 8
// 006efd01  e85a10f4ff           call 0x630d60
// 006efd06  03c6                 add eax, esi
// 006efd08  5e                   pop esi
// 006efd09  c21400               ret 0x14
// library xtp-11.2.2-vc8/Source\CommandBars\XTPShadowsManager.cpp (function ?Factor@CShadowWnd@CXTPShadowsManager@@AAEIAAH00N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPShadowsManager.cpp
