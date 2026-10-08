// from server: 100% by auto
// roc 2008-06 00707970  unit: CXTPDockingPane  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00707970
//
// 00707970  8b442404             mov eax, dword ptr [esp + 4]
// 00707974  8b542408             mov edx, dword ptr [esp + 8]
// 00707978  89413c               mov dword ptr [ecx + 0x3c], eax
// 0070797b  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0070797f  895140               mov dword ptr [ecx + 0x40], edx
// 00707982  8b542410             mov edx, dword ptr [esp + 0x10]
// 00707986  894144               mov dword ptr [ecx + 0x44], eax
// 00707989  895148               mov dword ptr [ecx + 0x48], edx
// 0070798c  8b4144               mov eax, dword ptr [ecx + 0x44]
// 0070798f  2b413c               sub eax, dword ptr [ecx + 0x3c]
// 00707992  2b5140               sub edx, dword ptr [ecx + 0x40]
// 00707995  894124               mov dword ptr [ecx + 0x24], eax
// 00707998  895128               mov dword ptr [ecx + 0x28], edx
// 0070799b  c21000               ret 0x10
// library xtp-11.2.2/Source\DockingPane\XTPDockingPane.cpp (function ?SetWindowRect@CXTPDockingPane@@IAEXVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPane.cpp
