// roc 2007-03 0065b160  unit: seg_00650000  size: 138 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0065b160
//
// 0065b160  56                   push esi
// 0065b161  8bf1                 mov esi, ecx
// 0065b163  837e1000             cmp dword ptr [esi + 0x10], 0
// 0065b167  7539                 jne 0x65b1a2
// 0065b169  8b4618               mov eax, dword ptr [esi + 0x18]
// 0065b16c  6a18                 push 0x18
// 0065b16e  50                   push eax
// 0065b16f  8d4e14               lea ecx, [esi + 0x14]
// 0065b172  51                   push ecx
// 0065b173  e880f90d00           call 0x73aaf8
// 0065b178  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0065b17b  83c004               add eax, 4
// 0065b17e  8d1449               lea edx, [ecx + ecx*2]
// 0065b181  83c1ff               add ecx, -1
// 0065b184  8d44d0e8             lea eax, [eax + edx*8 - 0x18]
// 0065b188  7818                 js 0x65b1a2
// 0065b18a  8d9b00000000         lea ebx, [ebx]
// 0065b190  8b5610               mov edx, dword ptr [esi + 0x10]
// 0065b193  8910                 mov dword ptr [eax], edx
// 0065b195  894610               mov dword ptr [esi + 0x10], eax
// 0065b198  83e901               sub ecx, 1
// 0065b19b  83e818               sub eax, 0x18
// 0065b19e  85c9                 test ecx, ecx
// 0065b1a0  7dee                 jge 0x65b190
// 0065b1a2  8b4610               mov eax, dword ptr [esi + 0x10]
// 0065b1a5  85c0                 test eax, eax
// 0065b1a7  7505                 jne 0x65b1ae
// 0065b1a9  e80032fcff           call 0x61e3ae
// 0065b1ae  8b08                 mov ecx, dword ptr [eax]
// 0065b1b0  8b542408             mov edx, dword ptr [esp + 8]
// 0065b1b4  894e10               mov dword ptr [esi + 0x10], ecx
// 0065b1b7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0065b1bb  8908                 mov dword ptr [eax], ecx
// 0065b1bd  895004               mov dword ptr [eax + 4], edx
// 0065b1c0  83460c01             add dword ptr [esi + 0xc], 1
// 0065b1c4  8d4808               lea ecx, [eax + 8]
// 0065b1c7  85c9                 test ecx, ecx
// 0065b1c9  741b                 je 0x65b1e6
// 0065b1cb  c70100000000         mov dword ptr [ecx], 0
// 0065b1d1  c7410400000000       mov dword ptr [ecx + 4], 0
// 0065b1d8  c7410800000000       mov dword ptr [ecx + 8], 0
// 0065b1df  c7410c00000000       mov dword ptr [ecx + 0xc], 0
// 0065b1e6  5e                   pop esi
// 0065b1e7  c20800               ret 8
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPaneLayout.cpp (function ?NewNode@?$CList@UXTP_DOCKINGPANE_INFO@@AAU1@@@IAEPAUCNode@1@PAU21@0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPaneLayout.cpp
