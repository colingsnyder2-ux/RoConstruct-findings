// roc 2008-06 0070e0d0  unit: CXTPStatusBar  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0070e0d0
//
// 0070e0d0  56                   push esi
// 0070e0d1  8bf1                 mov esi, ecx
// 0070e0d3  e8902bf9ff           call 0x6a0c68
// 0070e0d8  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0070e0dc  898eac000000         mov dword ptr [esi + 0xac], ecx
// 0070e0e2  5e                   pop esi
// 0070e0e3  c20800               ret 8
// library xtp-15.2.1/Source\CommandBars\XTPStatusBar.cpp (function ?OnSetMinHeight@CXTPStatusBar@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPStatusBar.cpp
