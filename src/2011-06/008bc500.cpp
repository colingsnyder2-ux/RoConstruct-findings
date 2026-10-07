// roc 2011-06 008bc500  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008bc500
//
// 008bc500  83c8ff               or eax, 0xffffffff
// 008bc503  0bd0                 or edx, eax
// 008bc505  52                   push edx
// 008bc506  50                   push eax
// 008bc507  6a00                 push 0
// 008bc509  e852ffffff           call 0x8bc460
// 008bc50e  c3                   ret 
// library xtp-15.2.1/Source\CommandBars\XTPMessageBar.cpp (function ?OnMouseLeave@CXTPMessageBar@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPMessageBar.cpp
