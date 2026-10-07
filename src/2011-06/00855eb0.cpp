// roc 2011-06 00855eb0  unit: CXTPPopupToolBar  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00855eb0
//
// 00855eb0  56                   push esi
// 00855eb1  8b742408             mov esi, dword ptr [esp + 8]
// 00855eb5  6a00                 push 0
// 00855eb7  6a00                 push 0
// 00855eb9  56                   push esi
// 00855eba  e851e1ffff           call 0x854010
// 00855ebf  8bc6                 mov eax, esi
// 00855ec1  5e                   pop esi
// 00855ec2  c20c00               ret 0xc
// library xtp-15.2.1/Source\CommandBars\XTPPopupBar.cpp (function ?CalcDynamicLayout@CXTPPopupToolBar@@MAE?AVCSize@@HK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPPopupBar.cpp
