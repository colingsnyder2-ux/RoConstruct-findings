// roc 2012-06 00a34440  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a34440
//
// 00a34440  8b542404             mov edx, dword ptr [esp + 4]
// 00a34444  8b01                 mov eax, dword ptr [ecx]
// 00a34446  8b5204               mov edx, dword ptr [edx + 4]
// 00a34449  8b406c               mov eax, dword ptr [eax + 0x6c]
// 00a3444c  89542404             mov dword ptr [esp + 4], edx
// 00a34450  ffe0                 jmp eax
// library xtp-11.2.2/Source\CommandBars\XTPTabToolBar.cpp (function ?OnNavigateButtonClick@CXTPTabManager@@MAEXPAVCXTPTabManagerNavigateButton@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabToolBar.cpp
