// roc 2009-12 008b07a0  unit: CXTPDockingPane  size: 114 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008b07a0
//
// 008b07a0  8b4114               mov eax, dword ptr [ecx + 0x14]
// 008b07a3  8b511c               mov edx, dword ptr [ecx + 0x1c]
// 008b07a6  83ec10               sub esp, 0x10
// 008b07a9  85c0                 test eax, eax
// 008b07ab  751e                 jne 0x8b07cb
// 008b07ad  8b442414             mov eax, dword ptr [esp + 0x14]
// 008b07b1  8910                 mov dword ptr [eax], edx
// 008b07b3  8b5120               mov edx, dword ptr [ecx + 0x20]
// 008b07b6  895004               mov dword ptr [eax + 4], edx
// 008b07b9  8b5124               mov edx, dword ptr [ecx + 0x24]
// 008b07bc  8b4928               mov ecx, dword ptr [ecx + 0x28]
// 008b07bf  895008               mov dword ptr [eax + 8], edx
// 008b07c2  89480c               mov dword ptr [eax + 0xc], ecx
// 008b07c5  83c410               add esp, 0x10
// 008b07c8  c20400               ret 4
// 008b07cb  891424               mov dword ptr [esp], edx
// 008b07ce  8b5120               mov edx, dword ptr [ecx + 0x20]
// 008b07d1  89542404             mov dword ptr [esp + 4], edx
// 008b07d5  8b5124               mov edx, dword ptr [ecx + 0x24]
// 008b07d8  8b4928               mov ecx, dword ptr [ecx + 0x28]
// 008b07db  89542408             mov dword ptr [esp + 8], edx
// 008b07df  8d1424               lea edx, [esp]
// 008b07e2  894c240c             mov dword ptr [esp + 0xc], ecx
// 008b07e6  52                   push edx
// 008b07e7  8bc8                 mov ecx, eax
// 008b07e9  e80c36f4ff           call 0x7f3dfa
// 008b07ee  8b442414             mov eax, dword ptr [esp + 0x14]
// 008b07f2  8b0c24               mov ecx, dword ptr [esp]
// 008b07f5  8b542404             mov edx, dword ptr [esp + 4]
// 008b07f9  8908                 mov dword ptr [eax], ecx
// 008b07fb  8b4c2408             mov ecx, dword ptr [esp + 8]
// 008b07ff  895004               mov dword ptr [eax + 4], edx
// 008b0802  8b54240c             mov edx, dword ptr [esp + 0xc]
// 008b0806  894808               mov dword ptr [eax + 8], ecx
// 008b0809  89500c               mov dword ptr [eax + 0xc], edx
// 008b080c  83c410               add esp, 0x10
// 008b080f  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneBase.cpp (function ?GetPaneWindowRect@CXTPDockingPaneBase@@QBE?AVCRect@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneBase.cpp
