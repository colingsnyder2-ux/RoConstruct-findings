// from server: 100% by auto
// roc 2008-06 0076cdf0  unit: CXTPDockingPaneContext  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0076cdf0
//
// 0076cdf0  8b442404             mov eax, dword ptr [esp + 4]
// 0076cdf4  db00                 fild dword ptr [eax]
// 0076cdf6  56                   push esi
// 0076cdf7  dd442414             fld qword ptr [esp + 0x14]
// 0076cdfb  dcc9                 fmul st(1), st(0)
// 0076cdfd  d9c9                 fxch st(1)
// 0076cdff  e8ec49f3ff           call 0x6a17f0
// 0076ce04  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0076ce08  db01                 fild dword ptr [ecx]
// 0076ce0a  8bf0                 mov esi, eax
// 0076ce0c  c1e608               shl esi, 8
// 0076ce0f  d8c9                 fmul st(1)
// 0076ce11  e8da49f3ff           call 0x6a17f0
// 0076ce16  8b542410             mov edx, dword ptr [esp + 0x10]
// 0076ce1a  da0a                 fimul dword ptr [edx]
// 0076ce1c  03f0                 add esi, eax
// 0076ce1e  c1e608               shl esi, 8
// 0076ce21  e8ca49f3ff           call 0x6a17f0
// 0076ce26  03c6                 add eax, esi
// 0076ce28  5e                   pop esi
// 0076ce29  c21400               ret 0x14
// library xtp-11.2.2/Source\CommandBars\XTPShadowsManager.cpp (function ?Factor@CShadowWnd@CXTPShadowsManager@@AAEIAAH00N@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPShadowsManager.cpp
