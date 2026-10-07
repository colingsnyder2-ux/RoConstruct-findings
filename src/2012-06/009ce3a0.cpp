// roc 2012-06 009ce3a0  unit: CXTPPopupToolBar  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009ce3a0
//
// 009ce3a0  56                   push esi
// 009ce3a1  8b742408             mov esi, dword ptr [esp + 8]
// 009ce3a5  6a00                 push 0
// 009ce3a7  6a00                 push 0
// 009ce3a9  56                   push esi
// 009ce3aa  e871e1ffff           call 0x9cc520
// 009ce3af  8bc6                 mov eax, esi
// 009ce3b1  5e                   pop esi
// 009ce3b2  c20c00               ret 0xc
// library xtp-15.2.1/Source\CommandBars\XTPPopupBar.cpp (function ?CalcDynamicLayout@CXTPPopupToolBar@@MAE?AVCSize@@HK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPPopupBar.cpp
