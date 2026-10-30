// roc 2012-06 00a3a0d0  unit: CXTPDockingPane  size: 114 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a3a0d0
//
// 00a3a0d0  8b4114               mov eax, dword ptr [ecx + 0x14]
// 00a3a0d3  8b511c               mov edx, dword ptr [ecx + 0x1c]
// 00a3a0d6  83ec10               sub esp, 0x10
// 00a3a0d9  85c0                 test eax, eax
// 00a3a0db  751e                 jne 0xa3a0fb
// 00a3a0dd  8b442414             mov eax, dword ptr [esp + 0x14]
// 00a3a0e1  8910                 mov dword ptr [eax], edx
// 00a3a0e3  8b5120               mov edx, dword ptr [ecx + 0x20]
// 00a3a0e6  895004               mov dword ptr [eax + 4], edx
// 00a3a0e9  8b5124               mov edx, dword ptr [ecx + 0x24]
// 00a3a0ec  8b4928               mov ecx, dword ptr [ecx + 0x28]
// 00a3a0ef  895008               mov dword ptr [eax + 8], edx
// 00a3a0f2  89480c               mov dword ptr [eax + 0xc], ecx
// 00a3a0f5  83c410               add esp, 0x10
// 00a3a0f8  c20400               ret 4
// 00a3a0fb  891424               mov dword ptr [esp], edx
// 00a3a0fe  8b5120               mov edx, dword ptr [ecx + 0x20]
// 00a3a101  89542404             mov dword ptr [esp + 4], edx
// 00a3a105  8b5124               mov edx, dword ptr [ecx + 0x24]
// 00a3a108  8b4928               mov ecx, dword ptr [ecx + 0x28]
// 00a3a10b  89542408             mov dword ptr [esp + 8], edx
// 00a3a10f  8d1424               lea edx, [esp]
// 00a3a112  894c240c             mov dword ptr [esp + 0xc], ecx
// 00a3a116  52                   push edx
// 00a3a117  8bc8                 mov ecx, eax
// 00a3a119  e89085f4ff           call 0x9826ae
// 00a3a11e  8b442414             mov eax, dword ptr [esp + 0x14]
// 00a3a122  8b0c24               mov ecx, dword ptr [esp]
// 00a3a125  8b542404             mov edx, dword ptr [esp + 4]
// 00a3a129  8908                 mov dword ptr [eax], ecx
// 00a3a12b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00a3a12f  895004               mov dword ptr [eax + 4], edx
// 00a3a132  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00a3a136  894808               mov dword ptr [eax + 8], ecx
// 00a3a139  89500c               mov dword ptr [eax + 0xc], edx
// 00a3a13c  83c410               add esp, 0x10
// 00a3a13f  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneBase.cpp (function ?GetPaneWindowRect@CXTPDockingPaneBase@@QBE?AVCRect@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneBase.cpp
