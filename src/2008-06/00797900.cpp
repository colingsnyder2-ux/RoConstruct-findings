// roc 2008-06 00797900  unit: CXTPRibbonTabPopupToolBar  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00797900
//
// 00797900  56                   push esi
// 00797901  8bf1                 mov esi, ecx
// 00797903  6a00                 push 0
// 00797905  8d8e5c020000         lea ecx, [esi + 0x25c]
// 0079790b  e860f9ffff           call 0x797270
// 00797910  8bce                 mov ecx, esi
// 00797912  5e                   pop esi
// 00797913  e958dff1ff           jmp 0x6b5870
// library xtp-11.2.2/Source\Ribbon\XTPRibbonPopups.cpp (function ?OnMouseLeave@CXTPRibbonTabPopupToolBar@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonPopups.cpp
