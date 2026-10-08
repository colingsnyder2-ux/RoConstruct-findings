// roc 2009-06 00814290  unit: CXTPRibbonGroupPopupToolBar  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00814290
//
// 00814290  56                   push esi
// 00814291  8bf1                 mov esi, ecx
// 00814293  6a00                 push 0
// 00814295  8d8e5c020000         lea ecx, [esi + 0x25c]
// 0081429b  e860f9ffff           call 0x813c00
// 008142a0  8bce                 mov ecx, esi
// 008142a2  5e                   pop esi
// 008142a3  e9389bf1ff           jmp 0x72dde0
// library xtp-11.2.2/Source\Ribbon\XTPRibbonPopups.cpp (function ?OnMouseLeave@CXTPRibbonTabPopupToolBar@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonPopups.cpp
