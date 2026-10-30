// from server: 100% by auto
// roc 2008-06 0077d550  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0077d550
//
// 0077d550  83793000             cmp dword ptr [ecx + 0x30], 0
// 0077d554  7511                 jne 0x77d567
// 0077d556  e8e527f6ff           call 0x6dfd40
// 0077d55b  8bc8                 mov ecx, eax
// 0077d55d  e83e90e3ff           call 0x5b65a0
// 0077d562  85c0                 test eax, eax
// 0077d564  7501                 jne 0x77d567
// 0077d566  c3                   ret 
// 0077d567  b801000000           mov eax, 1
// 0077d56c  c3                   ret 
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManager.cpp (function ?IsLunaColorsDisabled@CXTPTabPaintManager@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManager.cpp
