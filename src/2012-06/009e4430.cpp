// from server: 100% by auto
// roc 2012-06 009e4430  unit: CXTPDockingPane  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009e4430
//
// 009e4430  8b442404             mov eax, dword ptr [esp + 4]
// 009e4434  8b542408             mov edx, dword ptr [esp + 8]
// 009e4438  89413c               mov dword ptr [ecx + 0x3c], eax
// 009e443b  8b44240c             mov eax, dword ptr [esp + 0xc]
// 009e443f  895140               mov dword ptr [ecx + 0x40], edx
// 009e4442  8b542410             mov edx, dword ptr [esp + 0x10]
// 009e4446  894144               mov dword ptr [ecx + 0x44], eax
// 009e4449  895148               mov dword ptr [ecx + 0x48], edx
// 009e444c  8b4144               mov eax, dword ptr [ecx + 0x44]
// 009e444f  2b413c               sub eax, dword ptr [ecx + 0x3c]
// 009e4452  2b5140               sub edx, dword ptr [ecx + 0x40]
// 009e4455  894124               mov dword ptr [ecx + 0x24], eax
// 009e4458  895128               mov dword ptr [ecx + 0x28], edx
// 009e445b  c21000               ret 0x10
// library xtp-15.2.1/Source\DockingPane\XTPDockingPane.cpp (function ?SetWindowRect@CXTPDockingPane@@IAEXVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/DockingPane/XTPDockingPane.cpp
