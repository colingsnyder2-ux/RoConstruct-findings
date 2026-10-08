// from server: 100% by auto
// roc 2011-06 00816210  unit: CXTPEdit  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00816210
//
// 00816210  56                   push esi
// 00816211  8bf1                 mov esi, ecx
// 00816213  e81644ffff           call 0x80a62e
// 00816218  c7465400000000       mov dword ptr [esi + 0x54], 0
// 0081621f  5e                   pop esi
// 00816220  c3                   ret 
// library xtp-15.2.1/Source\CommandBars\XTPControlEdit.cpp (function ?OnImeEndComposition@CXTPCommandBarEditCtrl@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlEdit.cpp
