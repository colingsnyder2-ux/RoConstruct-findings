// roc 2011-06 008fc660  unit: CXTPRibbonTabPopupToolBar  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008fc660
//
// 008fc660  56                   push esi
// 008fc661  8bf1                 mov esi, ecx
// 008fc663  6a00                 push 0
// 008fc665  8d8e5c020000         lea ecx, [esi + 0x25c]
// 008fc66b  e870feffff           call 0x8fc4e0
// 008fc670  8bce                 mov ecx, esi
// 008fc672  5e                   pop esi
// 008fc673  e968eef1ff           jmp 0x81b4e0
// library xtp-11.2.2/Source\Ribbon\XTPRibbonPopups.cpp (function ?OnMouseLeave@CXTPRibbonTabPopupToolBar@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonPopups.cpp
