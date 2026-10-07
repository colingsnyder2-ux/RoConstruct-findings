// roc 2008-06 006a7940  unit: CXTPEdit  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006a7940
//
// 006a7940  56                   push esi
// 006a7941  8bf1                 mov esi, ecx
// 006a7943  e82093ffff           call 0x6a0c68
// 006a7948  c7465400000000       mov dword ptr [esi + 0x54], 0
// 006a794f  5e                   pop esi
// 006a7950  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlComboBox.cpp (function ?OnKillFocus@CXTPEdit@@IAEXPAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlComboBox.cpp
