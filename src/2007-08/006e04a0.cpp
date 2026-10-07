// roc 2007-08 006e04a0  unit: CXTPDockingPane  size: 114 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006e04a0
//
// 006e04a0  8b4114               mov eax, dword ptr [ecx + 0x14]
// 006e04a3  8b511c               mov edx, dword ptr [ecx + 0x1c]
// 006e04a6  83ec10               sub esp, 0x10
// 006e04a9  85c0                 test eax, eax
// 006e04ab  751e                 jne 0x6e04cb
// 006e04ad  8b442414             mov eax, dword ptr [esp + 0x14]
// 006e04b1  8910                 mov dword ptr [eax], edx
// 006e04b3  8b5120               mov edx, dword ptr [ecx + 0x20]
// 006e04b6  895004               mov dword ptr [eax + 4], edx
// 006e04b9  8b5124               mov edx, dword ptr [ecx + 0x24]
// 006e04bc  8b4928               mov ecx, dword ptr [ecx + 0x28]
// 006e04bf  895008               mov dword ptr [eax + 8], edx
// 006e04c2  89480c               mov dword ptr [eax + 0xc], ecx
// 006e04c5  83c410               add esp, 0x10
// 006e04c8  c20400               ret 4
// 006e04cb  891424               mov dword ptr [esp], edx
// 006e04ce  8b5120               mov edx, dword ptr [ecx + 0x20]
// 006e04d1  89542404             mov dword ptr [esp + 4], edx
// 006e04d5  8b5124               mov edx, dword ptr [ecx + 0x24]
// 006e04d8  8b4928               mov ecx, dword ptr [ecx + 0x28]
// 006e04db  89542408             mov dword ptr [esp + 8], edx
// 006e04df  8d1424               lea edx, [esp]
// 006e04e2  894c240c             mov dword ptr [esp + 0xc], ecx
// 006e04e6  52                   push edx
// 006e04e7  8bc8                 mov ecx, eax
// 006e04e9  e820fdf4ff           call 0x63020e
// 006e04ee  8b442414             mov eax, dword ptr [esp + 0x14]
// 006e04f2  8b0c24               mov ecx, dword ptr [esp]
// 006e04f5  8b542404             mov edx, dword ptr [esp + 4]
// 006e04f9  8908                 mov dword ptr [eax], ecx
// 006e04fb  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006e04ff  895004               mov dword ptr [eax + 4], edx
// 006e0502  8b54240c             mov edx, dword ptr [esp + 0xc]
// 006e0506  894808               mov dword ptr [eax + 8], ecx
// 006e0509  89500c               mov dword ptr [eax + 0xc], edx
// 006e050c  83c410               add esp, 0x10
// 006e050f  c20400               ret 4
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPaneBase.cpp (function ?GetPaneWindowRect@CXTPDockingPaneBase@@QBE?AVCRect@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPaneBase.cpp
