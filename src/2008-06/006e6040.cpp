// roc 2008-06 006e6040  unit: PAVCXTPDockingPaneBase::?$CList  size: 135 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006e6040
//
// 006e6040  56                   push esi
// 006e6041  8bf1                 mov esi, ecx
// 006e6043  837e1000             cmp dword ptr [esi + 0x10], 0
// 006e6047  7537                 jne 0x6e6080
// 006e6049  8b4618               mov eax, dword ptr [esi + 0x18]
// 006e604c  6a18                 push 0x18
// 006e604e  50                   push eax
// 006e604f  8d4e14               lea ecx, [esi + 0x14]
// 006e6052  51                   push ecx
// 006e6053  e8e4b0fbff           call 0x6a113c
// 006e6058  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 006e605b  83c004               add eax, 4
// 006e605e  8d1449               lea edx, [ecx + ecx*2]
// 006e6061  83c1ff               add ecx, -1
// 006e6064  8d44d0e8             lea eax, [eax + edx*8 - 0x18]
// 006e6068  7816                 js 0x6e6080
// 006e606a  8d9b00000000         lea ebx, [ebx]
// 006e6070  8b5610               mov edx, dword ptr [esi + 0x10]
// 006e6073  8910                 mov dword ptr [eax], edx
// 006e6075  894610               mov dword ptr [esi + 0x10], eax
// 006e6078  49                   dec ecx
// 006e6079  83e818               sub eax, 0x18
// 006e607c  85c9                 test ecx, ecx
// 006e607e  7df0                 jge 0x6e6070
// 006e6080  8b4610               mov eax, dword ptr [esi + 0x10]
// 006e6083  85c0                 test eax, eax
// 006e6085  7505                 jne 0x6e608c
// 006e6087  e8b8a8fbff           call 0x6a0944
// 006e608c  8b08                 mov ecx, dword ptr [eax]
// 006e608e  8b542408             mov edx, dword ptr [esp + 8]
// 006e6092  894e10               mov dword ptr [esi + 0x10], ecx
// 006e6095  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006e6099  8908                 mov dword ptr [eax], ecx
// 006e609b  895004               mov dword ptr [eax + 4], edx
// 006e609e  ff460c               inc dword ptr [esi + 0xc]
// 006e60a1  8d4808               lea ecx, [eax + 8]
// 006e60a4  85c9                 test ecx, ecx
// 006e60a6  741b                 je 0x6e60c3
// 006e60a8  c70100000000         mov dword ptr [ecx], 0
// 006e60ae  c7410400000000       mov dword ptr [ecx + 4], 0
// 006e60b5  c7410800000000       mov dword ptr [ecx + 8], 0
// 006e60bc  c7410c00000000       mov dword ptr [ecx + 0xc], 0
// 006e60c3  5e                   pop esi
// 006e60c4  c20800               ret 8
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneLayout.cpp (function ?NewNode@?$CList@UXTP_DOCKINGPANE_INFO@@AAU1@@@IAEPAUCNode@1@PAU21@0@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneLayout.cpp
