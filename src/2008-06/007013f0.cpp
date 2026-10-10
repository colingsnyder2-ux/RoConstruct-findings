// roc 2008-06 007013f0  unit: CXTPTabClientWnd::CWorkspace  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007013f0
//
// 007013f0  8b8990000000         mov ecx, dword ptr [ecx + 0x90]
// 007013f6  8b01                 mov eax, dword ptr [ecx]
// 007013f8  8b8078010000         mov eax, dword ptr [eax + 0x178]
// 007013fe  ffe0                 jmp eax
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPTabClientWnd.cpp (function ?OnBeforeItemClick@CWorkspace@CXTPTabClientWnd@@MAEHPAVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPTabClientWnd.cpp
