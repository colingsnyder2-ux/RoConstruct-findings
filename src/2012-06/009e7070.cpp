// from server: 100% by auto
// roc 2012-06 009e7070  unit: CXTPStatusBar  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009e7070
//
// 009e7070  56                   push esi
// 009e7071  8bf1                 mov esi, ecx
// 009e7073  e866b6f9ff           call 0x9826de
// 009e7078  8b4c2408             mov ecx, dword ptr [esp + 8]
// 009e707c  898eac000000         mov dword ptr [esi + 0xac], ecx
// 009e7082  5e                   pop esi
// 009e7083  c20800               ret 8
// library xtp-15.2.1/Source\CommandBars\XTPStatusBar.cpp (function ?OnSetMinHeight@CXTPStatusBar@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPStatusBar.cpp
