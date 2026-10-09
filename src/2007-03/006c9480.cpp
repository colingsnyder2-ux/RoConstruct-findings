// roc 2007-03 006c9480  unit: seg_006c0000  size: 114 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006c9480
//
// 006c9480  8b4114               mov eax, dword ptr [ecx + 0x14]
// 006c9483  8b511c               mov edx, dword ptr [ecx + 0x1c]
// 006c9486  83ec10               sub esp, 0x10
// 006c9489  85c0                 test eax, eax
// 006c948b  751e                 jne 0x6c94ab
// 006c948d  8b442414             mov eax, dword ptr [esp + 0x14]
// 006c9491  8910                 mov dword ptr [eax], edx
// 006c9493  8b5120               mov edx, dword ptr [ecx + 0x20]
// 006c9496  895004               mov dword ptr [eax + 4], edx
// 006c9499  8b5124               mov edx, dword ptr [ecx + 0x24]
// 006c949c  8b4928               mov ecx, dword ptr [ecx + 0x28]
// 006c949f  895008               mov dword ptr [eax + 8], edx
// 006c94a2  89480c               mov dword ptr [eax + 0xc], ecx
// 006c94a5  83c410               add esp, 0x10
// 006c94a8  c20400               ret 4
// 006c94ab  891424               mov dword ptr [esp], edx
// 006c94ae  8b5120               mov edx, dword ptr [ecx + 0x20]
// 006c94b1  89542404             mov dword ptr [esp + 4], edx
// 006c94b5  8b5124               mov edx, dword ptr [ecx + 0x24]
// 006c94b8  8b4928               mov ecx, dword ptr [ecx + 0x28]
// 006c94bb  89542408             mov dword ptr [esp + 8], edx
// 006c94bf  8d1424               lea edx, [esp]
// 006c94c2  894c240c             mov dword ptr [esp + 0xc], ecx
// 006c94c6  52                   push edx
// 006c94c7  8bc8                 mov ecx, eax
// 006c94c9  e8ce51f5ff           call 0x61e69c
// 006c94ce  8b442414             mov eax, dword ptr [esp + 0x14]
// 006c94d2  8b0c24               mov ecx, dword ptr [esp]
// 006c94d5  8b542404             mov edx, dword ptr [esp + 4]
// 006c94d9  8908                 mov dword ptr [eax], ecx
// 006c94db  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006c94df  895004               mov dword ptr [eax + 4], edx
// 006c94e2  8b54240c             mov edx, dword ptr [esp + 0xc]
// 006c94e6  894808               mov dword ptr [eax + 8], ecx
// 006c94e9  89500c               mov dword ptr [eax + 0xc], edx
// 006c94ec  83c410               add esp, 0x10
// 006c94ef  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneBase.cpp (function ?GetPaneWindowRect@CXTPDockingPaneBase@@QBE?AVCRect@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneBase.cpp
