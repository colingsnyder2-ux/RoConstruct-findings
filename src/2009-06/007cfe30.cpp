// roc 2009-06 007cfe30  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007cfe30
//
// 007cfe30  8b542404             mov edx, dword ptr [esp + 4]
// 007cfe34  8b01                 mov eax, dword ptr [ecx]
// 007cfe36  8b5204               mov edx, dword ptr [edx + 4]
// 007cfe39  8b406c               mov eax, dword ptr [eax + 0x6c]
// 007cfe3c  89542404             mov dword ptr [esp + 4], edx
// 007cfe40  ffe0                 jmp eax
// library xtp-11.2.2/Source\CommandBars\XTPTabToolBar.cpp (function ?OnNavigateButtonClick@CXTPTabManager@@MAEXPAVCXTPTabManagerNavigateButton@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabToolBar.cpp
