// from server: 100% by auto
// roc 2008-06 006f0dc0  unit: CXTPPopupToolBar  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006f0dc0
//
// 006f0dc0  56                   push esi
// 006f0dc1  8b742408             mov esi, dword ptr [esp + 8]
// 006f0dc5  6a00                 push 0
// 006f0dc7  6a00                 push 0
// 006f0dc9  56                   push esi
// 006f0dca  e851e1ffff           call 0x6eef20
// 006f0dcf  8bc6                 mov eax, esi
// 006f0dd1  5e                   pop esi
// 006f0dd2  c20c00               ret 0xc
// library xtp-11.2.2/Source\CommandBars\XTPPopupBar.cpp (function ?CalcDynamicLayout@CXTPPopupToolBar@@MAE?AVCSize@@HK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPPopupBar.cpp
