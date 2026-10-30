// roc 2009-12 008cfc20  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 485 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008cfc20
//
// 008cfc20  6aff                 push -1
// 008cfc22  68cb4f9600           push 0x964fcb
// 008cfc27  64a100000000         mov eax, dword ptr fs:[0]
// 008cfc2d  50                   push eax
// 008cfc2e  83ec10               sub esp, 0x10
// 008cfc31  56                   push esi
// 008cfc32  57                   push edi
// 008cfc33  a10052b600           mov eax, dword ptr [0xb65200]
// 008cfc38  33c4                 xor eax, esp
// 008cfc3a  50                   push eax
// 008cfc3b  8d44241c             lea eax, [esp + 0x1c]
// 008cfc3f  64a300000000         mov dword ptr fs:[0], eax
// 008cfc45  8bf9                 mov edi, ecx
// 008cfc47  8b07                 mov eax, dword ptr [edi]
// 008cfc49  8b5074               mov edx, dword ptr [eax + 0x74]
// 008cfc4c  ffd2                 call edx
// 008cfc4e  85c0                 test eax, eax
// 008cfc50  0f851d010000         jne 0x8cfd73
// 008cfc56  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008cfc5a  8b542430             mov edx, dword ptr [esp + 0x30]
// 008cfc5e  8d442414             lea eax, [esp + 0x14]
// 008cfc62  50                   push eax
// 008cfc63  6a00                 push 0
// 008cfc65  51                   push ecx
// 008cfc66  52                   push edx
// 008cfc67  8bcf                 mov ecx, edi
// 008cfc69  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 008cfc71  e8fafcffff           call 0x8cf970
// 008cfc76  8bf0                 mov esi, eax
// 008cfc78  85f6                 test esi, esi
// 008cfc7a  0f8481000000         je 0x8cfd01
// 008cfc80  8d442410             lea eax, [esp + 0x10]
// 008cfc84  50                   push eax
// 008cfc85  8bce                 mov ecx, esi
// 008cfc87  e8e4e2ffff           call 0x8cdf70
// 008cfc8c  8d4c2410             lea ecx, [esp + 0x10]
// 008cfc90  c744242400000000     mov dword ptr [esp + 0x24], 0
// 008cfc98  ff15bcdd9800         call dword ptr [0x98ddbc]
// 008cfc9e  8d4c2410             lea ecx, [esp + 0x10]
// 008cfca2  84c0                 test al, al
// 008cfca4  0f85c3000000         jne 0x8cfd6d
// 008cfcaa  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 008cfcae  8b5610               mov edx, dword ptr [esi + 0x10]
// 008cfcb1  51                   push ecx
// 008cfcb2  57                   push edi
// 008cfcb3  8d4610               lea eax, [esi + 0x10]
// 008cfcb6  83ec10               sub esp, 0x10
// 008cfcb9  8bcc                 mov ecx, esp
// 008cfcbb  8911                 mov dword ptr [ecx], edx
// 008cfcbd  8b5004               mov edx, dword ptr [eax + 4]
// 008cfcc0  895104               mov dword ptr [ecx + 4], edx
// 008cfcc3  8b5008               mov edx, dword ptr [eax + 8]
// 008cfcc6  8b400c               mov eax, dword ptr [eax + 0xc]
// 008cfcc9  895108               mov dword ptr [ecx + 8], edx
// 008cfccc  8b542450             mov edx, dword ptr [esp + 0x50]
// 008cfcd0  89410c               mov dword ptr [ecx + 0xc], eax
// 008cfcd3  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 008cfcd7  51                   push ecx
// 008cfcd8  52                   push edx
// 008cfcd9  e85203f9ff           call 0x860030
// 008cfcde  83c420               add esp, 0x20
// 008cfce1  8d4c2410             lea ecx, [esp + 0x10]
// 008cfce5  ff15c0de9800         call dword ptr [0x98dec0]
// 008cfceb  8bc7                 mov eax, edi
// 008cfced  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008cfcf1  64890d00000000       mov dword ptr fs:[0], ecx
// 008cfcf8  59                   pop ecx
// 008cfcf9  5f                   pop edi
// 008cfcfa  5e                   pop esi
// 008cfcfb  83c41c               add esp, 0x1c
// 008cfcfe  c21000               ret 0x10
// 008cfd01  8b442434             mov eax, dword ptr [esp + 0x34]
// 008cfd05  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 008cfd09  50                   push eax
// 008cfd0a  51                   push ecx
// 008cfd0b  8bcf                 mov ecx, edi
// 008cfd0d  e87ef9ffff           call 0x8cf690
// 008cfd12  8bf0                 mov esi, eax
// 008cfd14  85f6                 test esi, esi
// 008cfd16  745b                 je 0x8cfd73
// 008cfd18  8b17                 mov edx, dword ptr [edi]
// 008cfd1a  8b422c               mov eax, dword ptr [edx + 0x2c]
// 008cfd1d  8bcf                 mov ecx, edi
// 008cfd1f  ffd0                 call eax
// 008cfd21  83b8dc00000000       cmp dword ptr [eax + 0xdc], 0
// 008cfd28  7449                 je 0x8cfd73
// 008cfd2a  8b17                 mov edx, dword ptr [edi]
// 008cfd2c  8b422c               mov eax, dword ptr [edx + 0x2c]
// 008cfd2f  8bcf                 mov ecx, edi
// 008cfd31  ffd0                 call eax
// 008cfd33  83b8dc00000002       cmp dword ptr [eax + 0xdc], 2
// 008cfd3a  7508                 jne 0x8cfd44
// 008cfd3c  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008cfd3f  3b4e24               cmp ecx, dword ptr [esi + 0x24]
// 008cfd42  7d2f                 jge 0x8cfd73
// 008cfd44  8b17                 mov edx, dword ptr [edi]
// 008cfd46  8b5218               mov edx, dword ptr [edx + 0x18]
// 008cfd49  56                   push esi
// 008cfd4a  8d442410             lea eax, [esp + 0x10]
// 008cfd4e  50                   push eax
// 008cfd4f  8bcf                 mov ecx, edi
// 008cfd51  ffd2                 call edx
// 008cfd53  8d4c240c             lea ecx, [esp + 0xc]
// 008cfd57  c744242401000000     mov dword ptr [esp + 0x24], 1
// 008cfd5f  ff15bcdd9800         call dword ptr [0x98ddbc]
// 008cfd65  84c0                 test al, al
// 008cfd67  7421                 je 0x8cfd8a
// 008cfd69  8d4c240c             lea ecx, [esp + 0xc]
// 008cfd6d  ff15c0de9800         call dword ptr [0x98dec0]
// 008cfd73  83c8ff               or eax, 0xffffffff
// 008cfd76  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008cfd7a  64890d00000000       mov dword ptr fs:[0], ecx
// 008cfd81  59                   pop ecx
// 008cfd82  5f                   pop edi
// 008cfd83  5e                   pop esi
// 008cfd84  83c41c               add esp, 0x1c
// 008cfd87  c21000               ret 0x10
// 008cfd8a  8d442418             lea eax, [esp + 0x18]
// 008cfd8e  50                   push eax
// 008cfd8f  8bce                 mov ecx, esi
// 008cfd91  e83ae2ffff           call 0x8cdfd0
// 008cfd96  6a00                 push 0
// 008cfd98  8d4c2410             lea ecx, [esp + 0x10]
// 008cfd9c  51                   push ecx
// 008cfd9d  50                   push eax
// 008cfd9e  8b462c               mov eax, dword ptr [esi + 0x2c]
// 008cfda1  8bd1                 mov edx, ecx
// 008cfda3  8b4e44               mov ecx, dword ptr [esi + 0x44]
// 008cfda6  52                   push edx
// 008cfda7  8b5648               mov edx, dword ptr [esi + 0x48]
// 008cfdaa  50                   push eax
// 008cfdab  83ec10               sub esp, 0x10
// 008cfdae  8bc4                 mov eax, esp
// 008cfdb0  8908                 mov dword ptr [eax], ecx
// 008cfdb2  8b4e4c               mov ecx, dword ptr [esi + 0x4c]
// 008cfdb5  895004               mov dword ptr [eax + 4], edx
// 008cfdb8  8b5650               mov edx, dword ptr [esi + 0x50]
// 008cfdbb  894808               mov dword ptr [eax + 8], ecx
// 008cfdbe  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 008cfdc2  89500c               mov dword ptr [eax + 0xc], edx
// 008cfdc5  8b442450             mov eax, dword ptr [esp + 0x50]
// 008cfdc9  50                   push eax
// 008cfdca  51                   push ecx
// 008cfdcb  c644245002           mov byte ptr [esp + 0x50], 2
// 008cfdd0  e8db02f9ff           call 0x8600b0
// 008cfdd5  83c42c               add esp, 0x2c
// 008cfdd8  8d4c2418             lea ecx, [esp + 0x18]
// 008cfddc  ff15c0de9800         call dword ptr [0x98dec0]
// 008cfde2  8b762c               mov esi, dword ptr [esi + 0x2c]
// 008cfde5  8d4c240c             lea ecx, [esp + 0xc]
// 008cfde9  ff15c0de9800         call dword ptr [0x98dec0]
// 008cfdef  8bc6                 mov eax, esi
// 008cfdf1  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008cfdf5  64890d00000000       mov dword ptr fs:[0], ecx
// 008cfdfc  59                   pop ecx
// 008cfdfd  5f                   pop edi
// 008cfdfe  5e                   pop esi
// 008cfdff  83c41c               add esp, 0x1c
// 008cfe02  c21000               ret 0x10
// copied from an identical function in another client (function ?PerformToolHitTest@CXTPTabManager@@UBEHPAUHWND__@@VCPoint@@PAUtagTOOLINFOA@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/TabManager/XTPTabManager.cpp