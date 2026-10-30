// roc 2009-12 008ae570  unit: CXTPDockingPaneMiniWnd  size: 287 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008ae570
//
// 008ae570  8b542408             mov edx, dword ptr [esp + 8]
// 008ae574  53                   push ebx
// 008ae575  56                   push esi
// 008ae576  57                   push edi
// 008ae577  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 008ae57b  8b8730010000         mov eax, dword ptr [edi + 0x130]
// 008ae581  8bf1                 mov esi, ecx
// 008ae583  8d4820               lea ecx, [eax + 0x20]
// 008ae586  8b01                 mov eax, dword ptr [ecx]
// 008ae588  8b4044               mov eax, dword ptr [eax + 0x44]
// 008ae58b  6a00                 push 0
// 008ae58d  52                   push edx
// 008ae58e  8b9604010000         mov edx, dword ptr [esi + 0x104]
// 008ae594  52                   push edx
// 008ae595  ffd0                 call eax
// 008ae597  85c0                 test eax, eax
// 008ae599  7405                 je 0x8ae5a0
// 008ae59b  83c0e0               add eax, -0x20
// 008ae59e  eb02                 jmp 0x8ae5a2
// 008ae5a0  33c0                 xor eax, eax
// 008ae5a2  898630010000         mov dword ptr [esi + 0x130], eax
// 008ae5a8  8d9ef8000000         lea ebx, [esi + 0xf8]
// 008ae5ae  895830               mov dword ptr [eax + 0x30], ebx
// 008ae5b1  8b8e30010000         mov ecx, dword ptr [esi + 0x130]
// 008ae5b7  897134               mov dword ptr [ecx + 0x34], esi
// 008ae5ba  8b9714010000         mov edx, dword ptr [edi + 0x114]
// 008ae5c0  899614010000         mov dword ptr [esi + 0x114], edx
// 008ae5c6  8b8f18010000         mov ecx, dword ptr [edi + 0x118]
// 008ae5cc  8d8614010000         lea eax, [esi + 0x114]
// 008ae5d2  894804               mov dword ptr [eax + 4], ecx
// 008ae5d5  8b971c010000         mov edx, dword ptr [edi + 0x11c]
// 008ae5db  895008               mov dword ptr [eax + 8], edx
// 008ae5de  8b8f20010000         mov ecx, dword ptr [edi + 0x120]
// 008ae5e4  89480c               mov dword ptr [eax + 0xc], ecx
// 008ae5e7  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 008ae5ea  85c9                 test ecx, ecx
// 008ae5ec  7408                 je 0x8ae5f6
// 008ae5ee  50                   push eax
// 008ae5ef  51                   push ecx
// 008ae5f0  ff1570cc9800         call dword ptr [0x98cc70]
// 008ae5f6  8b9748010000         mov edx, dword ptr [edi + 0x148]
// 008ae5fc  899648010000         mov dword ptr [esi + 0x148], edx
// 008ae602  8b8738010000         mov eax, dword ptr [edi + 0x138]
// 008ae608  898638010000         mov dword ptr [esi + 0x138], eax
// 008ae60e  85d2                 test edx, edx
// 008ae610  741a                 je 0x8ae62c
// 008ae612  8bcb                 mov ecx, ebx
// 008ae614  e837220000           call 0x8b0850
// 008ae619  8b5078               mov edx, dword ptr [eax + 0x78]
// 008ae61c  8b8e18010000         mov ecx, dword ptr [esi + 0x118]
// 008ae622  8d441108             lea eax, [ecx + edx + 8]
// 008ae626  898620010000         mov dword ptr [esi + 0x120], eax
// 008ae62c  8b8e04010000         mov ecx, dword ptr [esi + 0x104]
// 008ae632  83b98000000000       cmp dword ptr [ecx + 0x80], 0
// 008ae639  754e                 jne 0x8ae689
// 008ae63b  8b13                 mov edx, dword ptr [ebx]
// 008ae63d  8b4258               mov eax, dword ptr [edx + 0x58]
// 008ae640  8bcb                 mov ecx, ebx
// 008ae642  ffd0                 call eax
// 008ae644  8b8630010000         mov eax, dword ptr [esi + 0x130]
// 008ae64a  85c0                 test eax, eax
// 008ae64c  7405                 je 0x8ae653
// 008ae64e  8d5020               lea edx, [eax + 0x20]
// 008ae651  eb02                 jmp 0x8ae655
// 008ae653  33d2                 xor edx, edx
// 008ae655  8d4820               lea ecx, [eax + 0x20]
// 008ae658  8b01                 mov eax, dword ptr [ecx]
// 008ae65a  52                   push edx
// 008ae65b  8b503c               mov edx, dword ptr [eax + 0x3c]
// 008ae65e  ffd2                 call edx
// 008ae660  8bb630010000         mov esi, dword ptr [esi + 0x130]
// 008ae666  85f6                 test esi, esi
// 008ae668  7413                 je 0x8ae67d
// 008ae66a  8b13                 mov edx, dword ptr [ebx]
// 008ae66c  8d4620               lea eax, [esi + 0x20]
// 008ae66f  50                   push eax
// 008ae670  8b4234               mov eax, dword ptr [edx + 0x34]
// 008ae673  8bcb                 mov ecx, ebx
// 008ae675  ffd0                 call eax
// 008ae677  5f                   pop edi
// 008ae678  5e                   pop esi
// 008ae679  5b                   pop ebx
// 008ae67a  c20800               ret 8
// 008ae67d  8b13                 mov edx, dword ptr [ebx]
// 008ae67f  33c0                 xor eax, eax
// 008ae681  50                   push eax
// 008ae682  8b4234               mov eax, dword ptr [edx + 0x34]
// 008ae685  8bcb                 mov ecx, ebx
// 008ae687  ffd0                 call eax
// 008ae689  5f                   pop edi
// 008ae68a  5e                   pop esi
// 008ae68b  5b                   pop ebx
// 008ae68c  c20800               ret 8
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneMiniWnd.cpp (function ?Copy@CXTPDockingPaneMiniWnd@@MAEXPAV1@PAV?$CMap@PAVCXTPDockingPaneBase@@PAV1@PAV1@PAV1@@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneMiniWnd.cpp
