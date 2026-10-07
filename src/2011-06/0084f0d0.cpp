// roc 2011-06 0084f0d0  unit: PAVCXTPDockingPaneBase::?$CList  size: 135 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0084f0d0
//
// 0084f0d0  56                   push esi
// 0084f0d1  8bf1                 mov esi, ecx
// 0084f0d3  837e1000             cmp dword ptr [esi + 0x10], 0
// 0084f0d7  7537                 jne 0x84f110
// 0084f0d9  8b4618               mov eax, dword ptr [esi + 0x18]
// 0084f0dc  6a18                 push 0x18
// 0084f0de  50                   push eax
// 0084f0df  8d4e14               lea ecx, [esi + 0x14]
// 0084f0e2  51                   push ecx
// 0084f0e3  e804bbfbff           call 0x80abec
// 0084f0e8  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0084f0eb  83c004               add eax, 4
// 0084f0ee  8d1449               lea edx, [ecx + ecx*2]
// 0084f0f1  83c1ff               add ecx, -1
// 0084f0f4  8d44d0e8             lea eax, [eax + edx*8 - 0x18]
// 0084f0f8  7816                 js 0x84f110
// 0084f0fa  8d9b00000000         lea ebx, [ebx]
// 0084f100  8b5610               mov edx, dword ptr [esi + 0x10]
// 0084f103  8910                 mov dword ptr [eax], edx
// 0084f105  894610               mov dword ptr [esi + 0x10], eax
// 0084f108  49                   dec ecx
// 0084f109  83e818               sub eax, 0x18
// 0084f10c  85c9                 test ecx, ecx
// 0084f10e  7df0                 jge 0x84f100
// 0084f110  8b4610               mov eax, dword ptr [esi + 0x10]
// 0084f113  85c0                 test eax, eax
// 0084f115  7505                 jne 0x84f11c
// 0084f117  e8eeb1fbff           call 0x80a30a
// 0084f11c  8b08                 mov ecx, dword ptr [eax]
// 0084f11e  8b542408             mov edx, dword ptr [esp + 8]
// 0084f122  894e10               mov dword ptr [esi + 0x10], ecx
// 0084f125  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0084f129  8908                 mov dword ptr [eax], ecx
// 0084f12b  895004               mov dword ptr [eax + 4], edx
// 0084f12e  ff460c               inc dword ptr [esi + 0xc]
// 0084f131  8d4808               lea ecx, [eax + 8]
// 0084f134  85c9                 test ecx, ecx
// 0084f136  741b                 je 0x84f153
// 0084f138  c70100000000         mov dword ptr [ecx], 0
// 0084f13e  c7410400000000       mov dword ptr [ecx + 4], 0
// 0084f145  c7410800000000       mov dword ptr [ecx + 8], 0
// 0084f14c  c7410c00000000       mov dword ptr [ecx + 0xc], 0
// 0084f153  5e                   pop esi
// 0084f154  c20800               ret 8
// library xtp-15.2.1/Source\DockingPane\XTPDockingPaneLayout.cpp (function ?NewNode@?$CList@UXTP_DOCKINGPANE_INFO@@AAU1@@@IAEPAUCNode@1@PAU21@0@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/DockingPane/XTPDockingPaneLayout.cpp
