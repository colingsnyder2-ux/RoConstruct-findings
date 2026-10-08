// roc 2012-06 00a4b880  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a4b880
//
// 00a4b880  83ec10               sub esp, 0x10
// 00a4b883  8b442414             mov eax, dword ptr [esp + 0x14]
// 00a4b887  8b5144               mov edx, dword ptr [ecx + 0x44]
// 00a4b88a  89415c               mov dword ptr [ecx + 0x5c], eax
// 00a4b88d  8b4148               mov eax, dword ptr [ecx + 0x48]
// 00a4b890  891424               mov dword ptr [esp], edx
// 00a4b893  8b514c               mov edx, dword ptr [ecx + 0x4c]
// 00a4b896  89442404             mov dword ptr [esp + 4], eax
// 00a4b89a  8b4150               mov eax, dword ptr [ecx + 0x50]
// 00a4b89d  8b4960               mov ecx, dword ptr [ecx + 0x60]
// 00a4b8a0  89542408             mov dword ptr [esp + 8], edx
// 00a4b8a4  8944240c             mov dword ptr [esp + 0xc], eax
// 00a4b8a8  8b11                 mov edx, dword ptr [ecx]
// 00a4b8aa  8b5234               mov edx, dword ptr [edx + 0x34]
// 00a4b8ad  6a00                 push 0
// 00a4b8af  8d442404             lea eax, [esp + 4]
// 00a4b8b3  50                   push eax
// 00a4b8b4  ffd2                 call edx
// 00a4b8b6  83c410               add esp, 0x10
// 00a4b8b9  c20400               ret 4
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?SetColor@CXTPTabManagerItem@@QAEXK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp
