// roc 2009-12 008aac60  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008aac60
//
// 008aac60  8b542404             mov edx, dword ptr [esp + 4]
// 008aac64  8b01                 mov eax, dword ptr [ecx]
// 008aac66  8b5204               mov edx, dword ptr [edx + 4]
// 008aac69  8b406c               mov eax, dword ptr [eax + 0x6c]
// 008aac6c  89542404             mov dword ptr [esp + 4], edx
// 008aac70  ffe0                 jmp eax
// library xtp-11.2.2/Source\CommandBars\XTPTabToolBar.cpp (function ?OnNavigateButtonClick@CXTPTabManager@@MAEXPAVCXTPTabManagerNavigateButton@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabToolBar.cpp
