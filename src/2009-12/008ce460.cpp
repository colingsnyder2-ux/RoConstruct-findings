// roc 2009-12 008ce460  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008ce460
//
// 008ce460  83ec10               sub esp, 0x10
// 008ce463  8b442414             mov eax, dword ptr [esp + 0x14]
// 008ce467  8b5144               mov edx, dword ptr [ecx + 0x44]
// 008ce46a  89415c               mov dword ptr [ecx + 0x5c], eax
// 008ce46d  8b4148               mov eax, dword ptr [ecx + 0x48]
// 008ce470  891424               mov dword ptr [esp], edx
// 008ce473  8b514c               mov edx, dword ptr [ecx + 0x4c]
// 008ce476  89442404             mov dword ptr [esp + 4], eax
// 008ce47a  8b4150               mov eax, dword ptr [ecx + 0x50]
// 008ce47d  8b4960               mov ecx, dword ptr [ecx + 0x60]
// 008ce480  89542408             mov dword ptr [esp + 8], edx
// 008ce484  8944240c             mov dword ptr [esp + 0xc], eax
// 008ce488  8b11                 mov edx, dword ptr [ecx]
// 008ce48a  8b5234               mov edx, dword ptr [edx + 0x34]
// 008ce48d  6a00                 push 0
// 008ce48f  8d442404             lea eax, [esp + 4]
// 008ce493  50                   push eax
// 008ce494  ffd2                 call edx
// 008ce496  83c410               add esp, 0x10
// 008ce499  c20400               ret 4
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?SetColor@CXTPTabManagerItem@@QAEXK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp
