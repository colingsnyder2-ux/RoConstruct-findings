// from server: 100% by auto
// roc 2008-06 0077b160  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0077b160
//
// 0077b160  83ec10               sub esp, 0x10
// 0077b163  8b442414             mov eax, dword ptr [esp + 0x14]
// 0077b167  8b5144               mov edx, dword ptr [ecx + 0x44]
// 0077b16a  89415c               mov dword ptr [ecx + 0x5c], eax
// 0077b16d  8b4148               mov eax, dword ptr [ecx + 0x48]
// 0077b170  891424               mov dword ptr [esp], edx
// 0077b173  8b514c               mov edx, dword ptr [ecx + 0x4c]
// 0077b176  89442404             mov dword ptr [esp + 4], eax
// 0077b17a  8b4150               mov eax, dword ptr [ecx + 0x50]
// 0077b17d  8b4960               mov ecx, dword ptr [ecx + 0x60]
// 0077b180  89542408             mov dword ptr [esp + 8], edx
// 0077b184  8944240c             mov dword ptr [esp + 0xc], eax
// 0077b188  8b11                 mov edx, dword ptr [ecx]
// 0077b18a  8b5234               mov edx, dword ptr [edx + 0x34]
// 0077b18d  6a00                 push 0
// 0077b18f  8d442404             lea eax, [esp + 4]
// 0077b193  50                   push eax
// 0077b194  ffd2                 call edx
// 0077b196  83c410               add esp, 0x10
// 0077b199  c20400               ret 4
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?SetColor@CXTPTabManagerItem@@QAEXK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp
