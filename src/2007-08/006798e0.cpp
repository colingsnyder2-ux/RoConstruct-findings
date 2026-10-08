// from server: 100% by auto
// roc 2007-08 006798e0  unit: CXTPPopupToolBar  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006798e0
//
// 006798e0  56                   push esi
// 006798e1  8b742408             mov esi, dword ptr [esp + 8]
// 006798e5  6a00                 push 0
// 006798e7  6a00                 push 0
// 006798e9  56                   push esi
// 006798ea  e8e1e6ffff           call 0x677fd0
// 006798ef  8bc6                 mov eax, esi
// 006798f1  5e                   pop esi
// 006798f2  c20c00               ret 0xc
// library xtp-11.2.2-vc8/Source\CommandBars\XTPPopupBar.cpp (function ?CalcDynamicLayout@CXTPPopupToolBar@@MAE?AVCSize@@HK@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPPopupBar.cpp
