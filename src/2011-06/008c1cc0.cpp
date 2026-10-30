// roc 2011-06 008c1cc0  unit: CXTPDockingPane  size: 114 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008c1cc0
//
// 008c1cc0  8b4114               mov eax, dword ptr [ecx + 0x14]
// 008c1cc3  8b511c               mov edx, dword ptr [ecx + 0x1c]
// 008c1cc6  83ec10               sub esp, 0x10
// 008c1cc9  85c0                 test eax, eax
// 008c1ccb  751e                 jne 0x8c1ceb
// 008c1ccd  8b442414             mov eax, dword ptr [esp + 0x14]
// 008c1cd1  8910                 mov dword ptr [eax], edx
// 008c1cd3  8b5120               mov edx, dword ptr [ecx + 0x20]
// 008c1cd6  895004               mov dword ptr [eax + 4], edx
// 008c1cd9  8b5124               mov edx, dword ptr [ecx + 0x24]
// 008c1cdc  8b4928               mov ecx, dword ptr [ecx + 0x28]
// 008c1cdf  895008               mov dword ptr [eax + 8], edx
// 008c1ce2  89480c               mov dword ptr [eax + 0xc], ecx
// 008c1ce5  83c410               add esp, 0x10
// 008c1ce8  c20400               ret 4
// 008c1ceb  891424               mov dword ptr [esp], edx
// 008c1cee  8b5120               mov edx, dword ptr [ecx + 0x20]
// 008c1cf1  89542404             mov dword ptr [esp + 4], edx
// 008c1cf5  8b5124               mov edx, dword ptr [ecx + 0x24]
// 008c1cf8  8b4928               mov ecx, dword ptr [ecx + 0x28]
// 008c1cfb  89542408             mov dword ptr [esp + 8], edx
// 008c1cff  8d1424               lea edx, [esp]
// 008c1d02  894c240c             mov dword ptr [esp + 0xc], ecx
// 008c1d06  52                   push edx
// 008c1d07  8bc8                 mov ecx, eax
// 008c1d09  e8f088f4ff           call 0x80a5fe
// 008c1d0e  8b442414             mov eax, dword ptr [esp + 0x14]
// 008c1d12  8b0c24               mov ecx, dword ptr [esp]
// 008c1d15  8b542404             mov edx, dword ptr [esp + 4]
// 008c1d19  8908                 mov dword ptr [eax], ecx
// 008c1d1b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 008c1d1f  895004               mov dword ptr [eax + 4], edx
// 008c1d22  8b54240c             mov edx, dword ptr [esp + 0xc]
// 008c1d26  894808               mov dword ptr [eax + 8], ecx
// 008c1d29  89500c               mov dword ptr [eax + 0xc], edx
// 008c1d2c  83c410               add esp, 0x10
// 008c1d2f  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneBase.cpp (function ?GetPaneWindowRect@CXTPDockingPaneBase@@QBE?AVCRect@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneBase.cpp
