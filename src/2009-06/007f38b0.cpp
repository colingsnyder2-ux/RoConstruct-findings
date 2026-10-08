// roc 2009-06 007f38b0  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007f38b0
//
// 007f38b0  83ec10               sub esp, 0x10
// 007f38b3  8b442414             mov eax, dword ptr [esp + 0x14]
// 007f38b7  8b5144               mov edx, dword ptr [ecx + 0x44]
// 007f38ba  89415c               mov dword ptr [ecx + 0x5c], eax
// 007f38bd  8b4148               mov eax, dword ptr [ecx + 0x48]
// 007f38c0  891424               mov dword ptr [esp], edx
// 007f38c3  8b514c               mov edx, dword ptr [ecx + 0x4c]
// 007f38c6  89442404             mov dword ptr [esp + 4], eax
// 007f38ca  8b4150               mov eax, dword ptr [ecx + 0x50]
// 007f38cd  8b4960               mov ecx, dword ptr [ecx + 0x60]
// 007f38d0  89542408             mov dword ptr [esp + 8], edx
// 007f38d4  8944240c             mov dword ptr [esp + 0xc], eax
// 007f38d8  8b11                 mov edx, dword ptr [ecx]
// 007f38da  8b5234               mov edx, dword ptr [edx + 0x34]
// 007f38dd  6a00                 push 0
// 007f38df  8d442404             lea eax, [esp + 4]
// 007f38e3  50                   push eax
// 007f38e4  ffd2                 call edx
// 007f38e6  83c410               add esp, 0x10
// 007f38e9  c20400               ret 4
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?SetColor@CXTPTabManagerItem@@QAEXK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp
