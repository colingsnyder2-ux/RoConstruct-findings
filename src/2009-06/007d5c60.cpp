// roc 2009-06 007d5c60  unit: CXTPDockingPane  size: 114 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007d5c60
//
// 007d5c60  8b4114               mov eax, dword ptr [ecx + 0x14]
// 007d5c63  8b511c               mov edx, dword ptr [ecx + 0x1c]
// 007d5c66  83ec10               sub esp, 0x10
// 007d5c69  85c0                 test eax, eax
// 007d5c6b  751e                 jne 0x7d5c8b
// 007d5c6d  8b442414             mov eax, dword ptr [esp + 0x14]
// 007d5c71  8910                 mov dword ptr [eax], edx
// 007d5c73  8b5120               mov edx, dword ptr [ecx + 0x20]
// 007d5c76  895004               mov dword ptr [eax + 4], edx
// 007d5c79  8b5124               mov edx, dword ptr [ecx + 0x24]
// 007d5c7c  8b4928               mov ecx, dword ptr [ecx + 0x28]
// 007d5c7f  895008               mov dword ptr [eax + 8], edx
// 007d5c82  89480c               mov dword ptr [eax + 0xc], ecx
// 007d5c85  83c410               add esp, 0x10
// 007d5c88  c20400               ret 4
// 007d5c8b  891424               mov dword ptr [esp], edx
// 007d5c8e  8b5120               mov edx, dword ptr [ecx + 0x20]
// 007d5c91  89542404             mov dword ptr [esp + 4], edx
// 007d5c95  8b5124               mov edx, dword ptr [ecx + 0x24]
// 007d5c98  8b4928               mov ecx, dword ptr [ecx + 0x28]
// 007d5c9b  89542408             mov dword ptr [esp + 8], edx
// 007d5c9f  8d1424               lea edx, [esp]
// 007d5ca2  894c240c             mov dword ptr [esp + 0xc], ecx
// 007d5ca6  52                   push edx
// 007d5ca7  8bc8                 mov ecx, eax
// 007d5ca9  e82433f4ff           call 0x718fd2
// 007d5cae  8b442414             mov eax, dword ptr [esp + 0x14]
// 007d5cb2  8b0c24               mov ecx, dword ptr [esp]
// 007d5cb5  8b542404             mov edx, dword ptr [esp + 4]
// 007d5cb9  8908                 mov dword ptr [eax], ecx
// 007d5cbb  8b4c2408             mov ecx, dword ptr [esp + 8]
// 007d5cbf  895004               mov dword ptr [eax + 4], edx
// 007d5cc2  8b54240c             mov edx, dword ptr [esp + 0xc]
// 007d5cc6  894808               mov dword ptr [eax + 8], ecx
// 007d5cc9  89500c               mov dword ptr [eax + 0xc], edx
// 007d5ccc  83c410               add esp, 0x10
// 007d5ccf  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneBase.cpp (function ?GetPaneWindowRect@CXTPDockingPaneBase@@QBE?AVCRect@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneBase.cpp
