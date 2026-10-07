// roc 2011-06 0086c0e0  unit: CXTPStatusBar  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0086c0e0
//
// 0086c0e0  56                   push esi
// 0086c0e1  8bf1                 mov esi, ecx
// 0086c0e3  e846e5f9ff           call 0x80a62e
// 0086c0e8  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0086c0ec  898eac000000         mov dword ptr [esi + 0xac], ecx
// 0086c0f2  5e                   pop esi
// 0086c0f3  c20800               ret 8
// library xtp-15.2.1/Source\CommandBars\XTPStatusBar.cpp (function ?OnSetMinHeight@CXTPStatusBar@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPStatusBar.cpp
