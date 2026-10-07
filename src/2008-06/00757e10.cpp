// roc 2008-06 00757e10  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00757e10
//
// 00757e10  83c8ff               or eax, 0xffffffff
// 00757e13  0bd0                 or edx, eax
// 00757e15  52                   push edx
// 00757e16  50                   push eax
// 00757e17  6a00                 push 0
// 00757e19  e852ffffff           call 0x757d70
// 00757e1e  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPScrollBar.cpp (function ?OnMouseLeave@CXTPScrollBar@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPScrollBar.cpp
