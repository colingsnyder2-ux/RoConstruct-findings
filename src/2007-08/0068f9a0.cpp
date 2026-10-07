// roc 2007-08 0068f9a0  unit: CXTPDockingPane  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0068f9a0
//
// 0068f9a0  8b442404             mov eax, dword ptr [esp + 4]
// 0068f9a4  8b542408             mov edx, dword ptr [esp + 8]
// 0068f9a8  89413c               mov dword ptr [ecx + 0x3c], eax
// 0068f9ab  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0068f9af  895140               mov dword ptr [ecx + 0x40], edx
// 0068f9b2  8b542410             mov edx, dword ptr [esp + 0x10]
// 0068f9b6  894144               mov dword ptr [ecx + 0x44], eax
// 0068f9b9  895148               mov dword ptr [ecx + 0x48], edx
// 0068f9bc  8b4144               mov eax, dword ptr [ecx + 0x44]
// 0068f9bf  2b413c               sub eax, dword ptr [ecx + 0x3c]
// 0068f9c2  2b5140               sub edx, dword ptr [ecx + 0x40]
// 0068f9c5  894124               mov dword ptr [ecx + 0x24], eax
// 0068f9c8  895128               mov dword ptr [ecx + 0x28], edx
// 0068f9cb  c21000               ret 0x10
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPane.cpp (function ?SetWindowRect@CXTPDockingPane@@IAEXVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPane.cpp
