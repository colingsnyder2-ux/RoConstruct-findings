// from server: 100% by auto
// roc 2011-06 008d5890  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008d5890
//
// 008d5890  83793000             cmp dword ptr [ecx + 0x30], 0
// 008d5894  7511                 jne 0x8d58a7
// 008d5896  e845fbf6ff           call 0x8453e0
// 008d589b  8bc8                 mov ecx, eax
// 008d589d  e8eef5f6ff           call 0x844e90
// 008d58a2  85c0                 test eax, eax
// 008d58a4  7501                 jne 0x8d58a7
// 008d58a6  c3                   ret 
// 008d58a7  b801000000           mov eax, 1
// 008d58ac  c3                   ret 
// library xtp-15.2.1/Source\TabManager\XTPTabPaintManager.cpp (function ?IsLunaColorsDisabled@CXTPTabPaintManager@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/TabManager/XTPTabPaintManager.cpp
