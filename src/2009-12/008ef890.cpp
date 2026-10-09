// roc 2009-12 008ef890  unit: CXTPRibbonTabPopupToolBar  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008ef890
//
// 008ef890  56                   push esi
// 008ef891  8bf1                 mov esi, ecx
// 008ef893  6a00                 push 0
// 008ef895  8d8e5c020000         lea ecx, [esi + 0x25c]
// 008ef89b  e8a0feffff           call 0x8ef740
// 008ef8a0  8bce                 mov ecx, esi
// 008ef8a2  5e                   pop esi
// 008ef8a3  e97856f1ff           jmp 0x804f20
// library xtp-11.2.2/Source\Ribbon\XTPRibbonPopups.cpp (function ?OnMouseLeave@CXTPRibbonTabPopupToolBar@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonPopups.cpp
