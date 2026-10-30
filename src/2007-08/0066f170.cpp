// from server: 100% by auto
// roc 2007-08 0066f170  unit: PAVCXTPDockingPaneBase::?$CList  size: 138 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0066f170
//
// 0066f170  56                   push esi
// 0066f171  8bf1                 mov esi, ecx
// 0066f173  837e1000             cmp dword ptr [esi + 0x10], 0
// 0066f177  7539                 jne 0x66f1b2
// 0066f179  8b4618               mov eax, dword ptr [esi + 0x18]
// 0066f17c  6a18                 push 0x18
// 0066f17e  50                   push eax
// 0066f17f  8d4e14               lea ecx, [esi + 0x14]
// 0066f182  51                   push ecx
// 0066f183  e81815fcff           call 0x6306a0
// 0066f188  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0066f18b  83c004               add eax, 4
// 0066f18e  8d1449               lea edx, [ecx + ecx*2]
// 0066f191  83c1ff               add ecx, -1
// 0066f194  8d44d0e8             lea eax, [eax + edx*8 - 0x18]
// 0066f198  7818                 js 0x66f1b2
// 0066f19a  8d9b00000000         lea ebx, [ebx]
// 0066f1a0  8b5610               mov edx, dword ptr [esi + 0x10]
// 0066f1a3  8910                 mov dword ptr [eax], edx
// 0066f1a5  894610               mov dword ptr [esi + 0x10], eax
// 0066f1a8  83e901               sub ecx, 1
// 0066f1ab  83e818               sub eax, 0x18
// 0066f1ae  85c9                 test ecx, ecx
// 0066f1b0  7dee                 jge 0x66f1a0
// 0066f1b2  8b4610               mov eax, dword ptr [esi + 0x10]
// 0066f1b5  85c0                 test eax, eax
// 0066f1b7  7505                 jne 0x66f1be
// 0066f1b9  e8620dfcff           call 0x62ff20
// 0066f1be  8b08                 mov ecx, dword ptr [eax]
// 0066f1c0  8b542408             mov edx, dword ptr [esp + 8]
// 0066f1c4  894e10               mov dword ptr [esi + 0x10], ecx
// 0066f1c7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0066f1cb  8908                 mov dword ptr [eax], ecx
// 0066f1cd  895004               mov dword ptr [eax + 4], edx
// 0066f1d0  83460c01             add dword ptr [esi + 0xc], 1
// 0066f1d4  8d4808               lea ecx, [eax + 8]
// 0066f1d7  85c9                 test ecx, ecx
// 0066f1d9  741b                 je 0x66f1f6
// 0066f1db  c70100000000         mov dword ptr [ecx], 0
// 0066f1e1  c7410400000000       mov dword ptr [ecx + 4], 0
// 0066f1e8  c7410800000000       mov dword ptr [ecx + 8], 0
// 0066f1ef  c7410c00000000       mov dword ptr [ecx + 0xc], 0
// 0066f1f6  5e                   pop esi
// 0066f1f7  c20800               ret 8
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPaneLayout.cpp (function ?NewNode@?$CList@UXTP_DOCKINGPANE_INFO@@AAU1@@@IAEPAUCNode@1@PAU21@0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPaneLayout.cpp
