// roc 2011-06 008d3550  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008d3550
//
// 008d3550  83ec10               sub esp, 0x10
// 008d3553  8b442414             mov eax, dword ptr [esp + 0x14]
// 008d3557  8b5144               mov edx, dword ptr [ecx + 0x44]
// 008d355a  89415c               mov dword ptr [ecx + 0x5c], eax
// 008d355d  8b4148               mov eax, dword ptr [ecx + 0x48]
// 008d3560  891424               mov dword ptr [esp], edx
// 008d3563  8b514c               mov edx, dword ptr [ecx + 0x4c]
// 008d3566  89442404             mov dword ptr [esp + 4], eax
// 008d356a  8b4150               mov eax, dword ptr [ecx + 0x50]
// 008d356d  8b4960               mov ecx, dword ptr [ecx + 0x60]
// 008d3570  89542408             mov dword ptr [esp + 8], edx
// 008d3574  8944240c             mov dword ptr [esp + 0xc], eax
// 008d3578  8b11                 mov edx, dword ptr [ecx]
// 008d357a  8b5234               mov edx, dword ptr [edx + 0x34]
// 008d357d  6a00                 push 0
// 008d357f  8d442404             lea eax, [esp + 4]
// 008d3583  50                   push eax
// 008d3584  ffd2                 call edx
// 008d3586  83c410               add esp, 0x10
// 008d3589  c20400               ret 4
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?SetColor@CXTPTabManagerItem@@QAEXK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp
