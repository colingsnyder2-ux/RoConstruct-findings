// from server: 100% by auto
// roc 2008-06 00757870  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00757870
//
// 00757870  8b542404             mov edx, dword ptr [esp + 4]
// 00757874  8b01                 mov eax, dword ptr [ecx]
// 00757876  8b5204               mov edx, dword ptr [edx + 4]
// 00757879  8b406c               mov eax, dword ptr [eax + 0x6c]
// 0075787c  89542404             mov dword ptr [esp + 4], edx
// 00757880  ffe0                 jmp eax
// library xtp-11.2.2/Source\CommandBars\XTPTabToolBar.cpp (function ?OnNavigateButtonClick@CXTPTabManager@@MAEXPAVCXTPTabManagerNavigateButton@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabToolBar.cpp
