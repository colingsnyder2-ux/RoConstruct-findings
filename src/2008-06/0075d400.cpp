// roc 2008-06 0075d400  unit: CXTPDockingPane  size: 114 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0075d400
//
// 0075d400  8b4114               mov eax, dword ptr [ecx + 0x14]
// 0075d403  8b511c               mov edx, dword ptr [ecx + 0x1c]
// 0075d406  83ec10               sub esp, 0x10
// 0075d409  85c0                 test eax, eax
// 0075d40b  751e                 jne 0x75d42b
// 0075d40d  8b442414             mov eax, dword ptr [esp + 0x14]
// 0075d411  8910                 mov dword ptr [eax], edx
// 0075d413  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0075d416  895004               mov dword ptr [eax + 4], edx
// 0075d419  8b5124               mov edx, dword ptr [ecx + 0x24]
// 0075d41c  8b4928               mov ecx, dword ptr [ecx + 0x28]
// 0075d41f  895008               mov dword ptr [eax + 8], edx
// 0075d422  89480c               mov dword ptr [eax + 0xc], ecx
// 0075d425  83c410               add esp, 0x10
// 0075d428  c20400               ret 4
// 0075d42b  891424               mov dword ptr [esp], edx
// 0075d42e  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0075d431  89542404             mov dword ptr [esp + 4], edx
// 0075d435  8b5124               mov edx, dword ptr [ecx + 0x24]
// 0075d438  8b4928               mov ecx, dword ptr [ecx + 0x28]
// 0075d43b  89542408             mov dword ptr [esp + 8], edx
// 0075d43f  8d1424               lea edx, [esp]
// 0075d442  894c240c             mov dword ptr [esp + 0xc], ecx
// 0075d446  52                   push edx
// 0075d447  8bc8                 mov ecx, eax
// 0075d449  e8e437f4ff           call 0x6a0c32
// 0075d44e  8b442414             mov eax, dword ptr [esp + 0x14]
// 0075d452  8b0c24               mov ecx, dword ptr [esp]
// 0075d455  8b542404             mov edx, dword ptr [esp + 4]
// 0075d459  8908                 mov dword ptr [eax], ecx
// 0075d45b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0075d45f  895004               mov dword ptr [eax + 4], edx
// 0075d462  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0075d466  894808               mov dword ptr [eax + 8], ecx
// 0075d469  89500c               mov dword ptr [eax + 0xc], edx
// 0075d46c  83c410               add esp, 0x10
// 0075d46f  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneBase.cpp (function ?GetPaneWindowRect@CXTPDockingPaneBase@@QBE?AVCRect@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneBase.cpp
