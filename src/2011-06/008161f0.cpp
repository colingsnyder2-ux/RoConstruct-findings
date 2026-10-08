// from server: 100% by auto
// roc 2011-06 008161f0  unit: CXTPEdit  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008161f0
//
// 008161f0  56                   push esi
// 008161f1  8bf1                 mov esi, ecx
// 008161f3  e83644ffff           call 0x80a62e
// 008161f8  c7465401000000       mov dword ptr [esi + 0x54], 1
// 008161ff  5e                   pop esi
// 00816200  c3                   ret 
// library xtp-15.2.1/Source\CommandBars\XTPControlEdit.cpp (function ?OnImeStartComposition@CXTPCommandBarEditCtrl@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlEdit.cpp
