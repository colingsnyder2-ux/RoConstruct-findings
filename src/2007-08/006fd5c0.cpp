// roc 2007-08 006fd5c0  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006fd5c0
//
// 006fd5c0  83ec10               sub esp, 0x10
// 006fd5c3  8b442414             mov eax, dword ptr [esp + 0x14]
// 006fd5c7  8b5144               mov edx, dword ptr [ecx + 0x44]
// 006fd5ca  89415c               mov dword ptr [ecx + 0x5c], eax
// 006fd5cd  8b4148               mov eax, dword ptr [ecx + 0x48]
// 006fd5d0  891424               mov dword ptr [esp], edx
// 006fd5d3  8b514c               mov edx, dword ptr [ecx + 0x4c]
// 006fd5d6  89442404             mov dword ptr [esp + 4], eax
// 006fd5da  8b4150               mov eax, dword ptr [ecx + 0x50]
// 006fd5dd  8b4960               mov ecx, dword ptr [ecx + 0x60]
// 006fd5e0  89542408             mov dword ptr [esp + 8], edx
// 006fd5e4  8944240c             mov dword ptr [esp + 0xc], eax
// 006fd5e8  8b11                 mov edx, dword ptr [ecx]
// 006fd5ea  8b5234               mov edx, dword ptr [edx + 0x34]
// 006fd5ed  6a00                 push 0
// 006fd5ef  8d442404             lea eax, [esp + 4]
// 006fd5f3  50                   push eax
// 006fd5f4  ffd2                 call edx
// 006fd5f6  83c410               add esp, 0x10
// 006fd5f9  c20400               ret 4
// library xtp-11.2.2-vc8/Source\TabManager\XTPTabManager.cpp (function ?SetColor@CXTPTabManagerItem@@QAEXK@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/TabManager/XTPTabManager.cpp
