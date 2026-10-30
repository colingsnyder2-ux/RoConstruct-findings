// from server: 100% by auto
// roc 2012-06 00a4dbe0  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a4dbe0
//
// 00a4dbe0  83793000             cmp dword ptr [ecx + 0x30], 0
// 00a4dbe4  7511                 jne 0xa4dbf7
// 00a4dbe6  e875fcf6ff           call 0x9bd860
// 00a4dbeb  8bc8                 mov ecx, eax
// 00a4dbed  e8cef6f6ff           call 0x9bd2c0
// 00a4dbf2  85c0                 test eax, eax
// 00a4dbf4  7501                 jne 0xa4dbf7
// 00a4dbf6  c3                   ret 
// 00a4dbf7  b801000000           mov eax, 1
// 00a4dbfc  c3                   ret 
// library xtp-15.2.1/Source\TabManager\XTPTabPaintManager.cpp (function ?IsLunaColorsDisabled@CXTPTabPaintManager@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/TabManager/XTPTabPaintManager.cpp
