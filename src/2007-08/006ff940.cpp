// from server: 100% by auto
// roc 2007-08 006ff940  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006ff940
//
// 006ff940  83793000             cmp dword ptr [ecx + 0x30], 0
// 006ff944  7511                 jne 0x6ff957
// 006ff946  e82596f6ff           call 0x668f70
// 006ff94b  8bc8                 mov ecx, eax
// 006ff94d  e8fe90f6ff           call 0x668a50
// 006ff952  85c0                 test eax, eax
// 006ff954  7501                 jne 0x6ff957
// 006ff956  c3                   ret 
// 006ff957  b801000000           mov eax, 1
// 006ff95c  c3                   ret 
// library xtp-11.2.2-vc8/Source\TabManager\XTPTabPaintManager.cpp (function ?IsLunaColorsDisabled@CXTPTabPaintManager@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/TabManager/XTPTabPaintManager.cpp
