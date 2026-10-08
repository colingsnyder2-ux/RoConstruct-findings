// from server: 100% by auto
// roc 2007-08 00636a50  unit: CXTPEdit  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00636a50
//
// 00636a50  56                   push esi
// 00636a51  8bf1                 mov esi, ecx
// 00636a53  e8e697ffff           call 0x63023e
// 00636a58  c7465400000000       mov dword ptr [esi + 0x54], 0
// 00636a5f  5e                   pop esi
// 00636a60  c20400               ret 4
// library xtp-11.2.2-vc8/Source\CommandBars\XTPControlComboBox.cpp (function ?OnKillFocus@CXTPEdit@@IAEXPAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPControlComboBox.cpp
