// roc 2010-06 00864870  unit: CXTPDockingPane  size: 114 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00864870
//
// 00864870  8b4114               mov eax, dword ptr [ecx + 0x14]
// 00864873  8b511c               mov edx, dword ptr [ecx + 0x1c]
// 00864876  83ec10               sub esp, 0x10
// 00864879  85c0                 test eax, eax
// 0086487b  751e                 jne 0x86489b
// 0086487d  8b442414             mov eax, dword ptr [esp + 0x14]
// 00864881  8910                 mov dword ptr [eax], edx
// 00864883  8b5120               mov edx, dword ptr [ecx + 0x20]
// 00864886  895004               mov dword ptr [eax + 4], edx
// 00864889  8b5124               mov edx, dword ptr [ecx + 0x24]
// 0086488c  8b4928               mov ecx, dword ptr [ecx + 0x28]
// 0086488f  895008               mov dword ptr [eax + 8], edx
// 00864892  89480c               mov dword ptr [eax + 0xc], ecx
// 00864895  83c410               add esp, 0x10
// 00864898  c20400               ret 4
// 0086489b  891424               mov dword ptr [esp], edx
// 0086489e  8b5120               mov edx, dword ptr [ecx + 0x20]
// 008648a1  89542404             mov dword ptr [esp + 4], edx
// 008648a5  8b5124               mov edx, dword ptr [ecx + 0x24]
// 008648a8  8b4928               mov ecx, dword ptr [ecx + 0x28]
// 008648ab  89542408             mov dword ptr [esp + 8], edx
// 008648af  8d1424               lea edx, [esp]
// 008648b2  894c240c             mov dword ptr [esp + 0xc], ecx
// 008648b6  52                   push edx
// 008648b7  8bc8                 mov ecx, eax
// 008648b9  e88236f4ff           call 0x7a7f40
// 008648be  8b442414             mov eax, dword ptr [esp + 0x14]
// 008648c2  8b0c24               mov ecx, dword ptr [esp]
// 008648c5  8b542404             mov edx, dword ptr [esp + 4]
// 008648c9  8908                 mov dword ptr [eax], ecx
// 008648cb  8b4c2408             mov ecx, dword ptr [esp + 8]
// 008648cf  895004               mov dword ptr [eax + 4], edx
// 008648d2  8b54240c             mov edx, dword ptr [esp + 0xc]
// 008648d6  894808               mov dword ptr [eax + 8], ecx
// 008648d9  89500c               mov dword ptr [eax + 0xc], edx
// 008648dc  83c410               add esp, 0x10
// 008648df  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneBase.cpp (function ?GetPaneWindowRect@CXTPDockingPaneBase@@QBE?AVCRect@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneBase.cpp
