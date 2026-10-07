// roc 2012-06 00a68100  unit: CXTShadowHook  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a68100
//
// 00a68100  8b442404             mov eax, dword ptr [esp + 4]
// 00a68104  db00                 fild dword ptr [eax]
// 00a68106  56                   push esi
// 00a68107  dd442414             fld qword ptr [esp + 0x14]
// 00a6810b  dcc9                 fmul st(1), st(0)
// 00a6810d  d9c9                 fxch st(1)
// 00a6810f  e89cb4f1ff           call 0x9835b0
// 00a68114  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00a68118  db01                 fild dword ptr [ecx]
// 00a6811a  8bf0                 mov esi, eax
// 00a6811c  c1e608               shl esi, 8
// 00a6811f  d8c9                 fmul st(1)
// 00a68121  e88ab4f1ff           call 0x9835b0
// 00a68126  8b542410             mov edx, dword ptr [esp + 0x10]
// 00a6812a  da0a                 fimul dword ptr [edx]
// 00a6812c  03f0                 add esi, eax
// 00a6812e  c1e608               shl esi, 8
// 00a68131  e87ab4f1ff           call 0x9835b0
// 00a68136  03c6                 add eax, esi
// 00a68138  5e                   pop esi
// 00a68139  c21400               ret 0x14
// library xtp-15.2.1/Source\Common\XTPHookManager.cpp (function ?Factor@CShadowWnd@CXTPShadowManager@@AAEIAAH00N@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPHookManager.cpp
