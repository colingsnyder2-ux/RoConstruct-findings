// roc 2010-06 008a3fc0  unit: CXTPRibbonGroupPopupToolBar  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008a3fc0
//
// 008a3fc0  56                   push esi
// 008a3fc1  8bf1                 mov esi, ecx
// 008a3fc3  6a00                 push 0
// 008a3fc5  8d8e5c020000         lea ecx, [esi + 0x25c]
// 008a3fcb  e860f9ffff           call 0x8a3930
// 008a3fd0  8bce                 mov ecx, esi
// 008a3fd2  5e                   pop esi
// 008a3fd3  e9b850f1ff           jmp 0x7b9090
// library xtp-11.2.2/Source\Ribbon\XTPRibbonPopups.cpp (function ?OnMouseLeave@CXTPRibbonTabPopupToolBar@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonPopups.cpp
