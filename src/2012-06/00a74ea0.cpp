// roc 2012-06 00a74ea0  unit: CXTPRibbonGroupPopupToolBar  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a74ea0
//
// 00a74ea0  56                   push esi
// 00a74ea1  8bf1                 mov esi, ecx
// 00a74ea3  6a00                 push 0
// 00a74ea5  8d8e5c020000         lea ecx, [esi + 0x25c]
// 00a74eab  e860f9ffff           call 0xa74810
// 00a74eb0  8bce                 mov ecx, esi
// 00a74eb2  5e                   pop esi
// 00a74eb3  e918e9f1ff           jmp 0x9937d0
// library xtp-11.2.2/Source\Ribbon\XTPRibbonPopups.cpp (function ?OnMouseLeave@CXTPRibbonTabPopupToolBar@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonPopups.cpp
