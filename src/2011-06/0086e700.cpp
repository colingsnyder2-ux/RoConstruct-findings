// roc 2011-06 0086e700  unit: CXTPDockingPane  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0086e700
//
// 0086e700  8b442404             mov eax, dword ptr [esp + 4]
// 0086e704  8b542408             mov edx, dword ptr [esp + 8]
// 0086e708  89413c               mov dword ptr [ecx + 0x3c], eax
// 0086e70b  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0086e70f  895140               mov dword ptr [ecx + 0x40], edx
// 0086e712  8b542410             mov edx, dword ptr [esp + 0x10]
// 0086e716  894144               mov dword ptr [ecx + 0x44], eax
// 0086e719  895148               mov dword ptr [ecx + 0x48], edx
// 0086e71c  8b4144               mov eax, dword ptr [ecx + 0x44]
// 0086e71f  2b413c               sub eax, dword ptr [ecx + 0x3c]
// 0086e722  2b5140               sub edx, dword ptr [ecx + 0x40]
// 0086e725  894124               mov dword ptr [ecx + 0x24], eax
// 0086e728  895128               mov dword ptr [ecx + 0x28], edx
// 0086e72b  c21000               ret 0x10
// library xtp-15.2.1/Source\DockingPane\XTPDockingPane.cpp (function ?SetWindowRect@CXTPDockingPane@@IAEXVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/DockingPane/XTPDockingPane.cpp
