// roc 2007-08 006da9f0  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006da9f0
//
// 006da9f0  8b542404             mov edx, dword ptr [esp + 4]
// 006da9f4  8b01                 mov eax, dword ptr [ecx]
// 006da9f6  8b5204               mov edx, dword ptr [edx + 4]
// 006da9f9  8b406c               mov eax, dword ptr [eax + 0x6c]
// 006da9fc  89542404             mov dword ptr [esp + 4], edx
// 006daa00  ffe0                 jmp eax
// library xtp-11.2.2-vc8/Source\CommandBars\XTPTabToolBar.cpp (function ?OnNavigateButtonClick@CXTPTabManager@@MAEXPAVCXTPTabManagerNavigateButton@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPTabToolBar.cpp
