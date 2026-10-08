// roc 2010-06 00882640  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00882640
//
// 00882640  83ec10               sub esp, 0x10
// 00882643  8b442414             mov eax, dword ptr [esp + 0x14]
// 00882647  8b5144               mov edx, dword ptr [ecx + 0x44]
// 0088264a  89415c               mov dword ptr [ecx + 0x5c], eax
// 0088264d  8b4148               mov eax, dword ptr [ecx + 0x48]
// 00882650  891424               mov dword ptr [esp], edx
// 00882653  8b514c               mov edx, dword ptr [ecx + 0x4c]
// 00882656  89442404             mov dword ptr [esp + 4], eax
// 0088265a  8b4150               mov eax, dword ptr [ecx + 0x50]
// 0088265d  8b4960               mov ecx, dword ptr [ecx + 0x60]
// 00882660  89542408             mov dword ptr [esp + 8], edx
// 00882664  8944240c             mov dword ptr [esp + 0xc], eax
// 00882668  8b11                 mov edx, dword ptr [ecx]
// 0088266a  8b5234               mov edx, dword ptr [edx + 0x34]
// 0088266d  6a00                 push 0
// 0088266f  8d442404             lea eax, [esp + 4]
// 00882673  50                   push eax
// 00882674  ffd2                 call edx
// 00882676  83c410               add esp, 0x10
// 00882679  c20400               ret 4
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?SetColor@CXTPTabManagerItem@@QAEXK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp
