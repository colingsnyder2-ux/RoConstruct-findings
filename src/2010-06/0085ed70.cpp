// roc 2010-06 0085ed70  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0085ed70
//
// 0085ed70  8b542404             mov edx, dword ptr [esp + 4]
// 0085ed74  8b01                 mov eax, dword ptr [ecx]
// 0085ed76  8b5204               mov edx, dword ptr [edx + 4]
// 0085ed79  8b406c               mov eax, dword ptr [eax + 0x6c]
// 0085ed7c  89542404             mov dword ptr [esp + 4], edx
// 0085ed80  ffe0                 jmp eax
// library xtp-11.2.2/Source\CommandBars\XTPTabToolBar.cpp (function ?OnNavigateButtonClick@CXTPTabManager@@MAEXPAVCXTPTabManagerNavigateButton@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabToolBar.cpp
