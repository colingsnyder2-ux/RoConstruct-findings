// from server: 100% by auto
// roc 2012-06 009c75a0  unit: PAVCXTPDockingPaneBase::?$CList  size: 135 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009c75a0
//
// 009c75a0  56                   push esi
// 009c75a1  8bf1                 mov esi, ecx
// 009c75a3  837e1000             cmp dword ptr [esi + 0x10], 0
// 009c75a7  7537                 jne 0x9c75e0
// 009c75a9  8b4618               mov eax, dword ptr [esi + 0x18]
// 009c75ac  6a18                 push 0x18
// 009c75ae  50                   push eax
// 009c75af  8d4e14               lea ecx, [esi + 0x14]
// 009c75b2  51                   push ecx
// 009c75b3  e8bab6fbff           call 0x982c72
// 009c75b8  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 009c75bb  83c004               add eax, 4
// 009c75be  8d1449               lea edx, [ecx + ecx*2]
// 009c75c1  83c1ff               add ecx, -1
// 009c75c4  8d44d0e8             lea eax, [eax + edx*8 - 0x18]
// 009c75c8  7816                 js 0x9c75e0
// 009c75ca  8d9b00000000         lea ebx, [ebx]
// 009c75d0  8b5610               mov edx, dword ptr [esi + 0x10]
// 009c75d3  8910                 mov dword ptr [eax], edx
// 009c75d5  894610               mov dword ptr [esi + 0x10], eax
// 009c75d8  49                   dec ecx
// 009c75d9  83e818               sub eax, 0x18
// 009c75dc  85c9                 test ecx, ecx
// 009c75de  7df0                 jge 0x9c75d0
// 009c75e0  8b4610               mov eax, dword ptr [esi + 0x10]
// 009c75e3  85c0                 test eax, eax
// 009c75e5  7505                 jne 0x9c75ec
// 009c75e7  e8d4adfbff           call 0x9823c0
// 009c75ec  8b08                 mov ecx, dword ptr [eax]
// 009c75ee  8b542408             mov edx, dword ptr [esp + 8]
// 009c75f2  894e10               mov dword ptr [esi + 0x10], ecx
// 009c75f5  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 009c75f9  8908                 mov dword ptr [eax], ecx
// 009c75fb  895004               mov dword ptr [eax + 4], edx
// 009c75fe  ff460c               inc dword ptr [esi + 0xc]
// 009c7601  8d4808               lea ecx, [eax + 8]
// 009c7604  85c9                 test ecx, ecx
// 009c7606  741b                 je 0x9c7623
// 009c7608  c70100000000         mov dword ptr [ecx], 0
// 009c760e  c7410400000000       mov dword ptr [ecx + 4], 0
// 009c7615  c7410800000000       mov dword ptr [ecx + 8], 0
// 009c761c  c7410c00000000       mov dword ptr [ecx + 0xc], 0
// 009c7623  5e                   pop esi
// 009c7624  c20800               ret 8
// library xtp-15.2.1/Source\DockingPane\XTPDockingPaneLayout.cpp (function ?NewNode@?$CList@UXTP_DOCKINGPANE_INFO@@AAU1@@@IAEPAUCNode@1@PAU21@0@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/DockingPane/XTPDockingPaneLayout.cpp
