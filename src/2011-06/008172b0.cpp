// roc 2011-06 008172b0  unit: CXTPEdit  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008172b0
//
// 008172b0  56                   push esi
// 008172b1  8bf1                 mov esi, ecx
// 008172b3  e87633ffff           call 0x80a62e
// 008172b8  c7465400000000       mov dword ptr [esi + 0x54], 0
// 008172bf  5e                   pop esi
// 008172c0  c20400               ret 4
// library xtp-15.2.1/Source\CommandBars\XTPControlEdit.cpp (function ?OnKillFocus@CXTPCommandBarEditCtrl@@IAEXPAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlEdit.cpp
