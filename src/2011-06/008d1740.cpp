// from server: 100% by auto
// roc 2011-06 008d1740  unit: CXTPDockingPaneContext  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008d1740
//
// 008d1740  8b442404             mov eax, dword ptr [esp + 4]
// 008d1744  db00                 fild dword ptr [eax]
// 008d1746  56                   push esi
// 008d1747  dd442414             fld qword ptr [esp + 0x14]
// 008d174b  dcc9                 fmul st(1), st(0)
// 008d174d  d9c9                 fxch st(1)
// 008d174f  e8dc9df3ff           call 0x80b530
// 008d1754  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008d1758  db01                 fild dword ptr [ecx]
// 008d175a  8bf0                 mov esi, eax
// 008d175c  c1e608               shl esi, 8
// 008d175f  d8c9                 fmul st(1)
// 008d1761  e8ca9df3ff           call 0x80b530
// 008d1766  8b542410             mov edx, dword ptr [esp + 0x10]
// 008d176a  da0a                 fimul dword ptr [edx]
// 008d176c  03f0                 add esi, eax
// 008d176e  c1e608               shl esi, 8
// 008d1771  e8ba9df3ff           call 0x80b530
// 008d1776  03c6                 add eax, esi
// 008d1778  5e                   pop esi
// 008d1779  c21400               ret 0x14
// library xtp-15.2.1/Source\Common\XTPHookManager.cpp (function ?Factor@CShadowWnd@CXTPShadowManager@@AAEIAAH00N@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPHookManager.cpp
