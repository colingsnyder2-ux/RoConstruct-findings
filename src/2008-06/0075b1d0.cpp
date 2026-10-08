// from server: 100% by auto
// roc 2008-06 0075b1d0  unit: CXTPDockingPaneMiniWnd  size: 287 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0075b1d0
//
// 0075b1d0  8b542408             mov edx, dword ptr [esp + 8]
// 0075b1d4  53                   push ebx
// 0075b1d5  56                   push esi
// 0075b1d6  57                   push edi
// 0075b1d7  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0075b1db  8b8730010000         mov eax, dword ptr [edi + 0x130]
// 0075b1e1  8bf1                 mov esi, ecx
// 0075b1e3  8d4820               lea ecx, [eax + 0x20]
// 0075b1e6  8b01                 mov eax, dword ptr [ecx]
// 0075b1e8  8b4044               mov eax, dword ptr [eax + 0x44]
// 0075b1eb  6a00                 push 0
// 0075b1ed  52                   push edx
// 0075b1ee  8b9604010000         mov edx, dword ptr [esi + 0x104]
// 0075b1f4  52                   push edx
// 0075b1f5  ffd0                 call eax
// 0075b1f7  85c0                 test eax, eax
// 0075b1f9  7405                 je 0x75b200
// 0075b1fb  83c0e0               add eax, -0x20
// 0075b1fe  eb02                 jmp 0x75b202
// 0075b200  33c0                 xor eax, eax
// 0075b202  898630010000         mov dword ptr [esi + 0x130], eax
// 0075b208  8d9ef8000000         lea ebx, [esi + 0xf8]
// 0075b20e  895830               mov dword ptr [eax + 0x30], ebx
// 0075b211  8b8e30010000         mov ecx, dword ptr [esi + 0x130]
// 0075b217  897134               mov dword ptr [ecx + 0x34], esi
// 0075b21a  8b9714010000         mov edx, dword ptr [edi + 0x114]
// 0075b220  899614010000         mov dword ptr [esi + 0x114], edx
// 0075b226  8b8f18010000         mov ecx, dword ptr [edi + 0x118]
// 0075b22c  8d8614010000         lea eax, [esi + 0x114]
// 0075b232  894804               mov dword ptr [eax + 4], ecx
// 0075b235  8b971c010000         mov edx, dword ptr [edi + 0x11c]
// 0075b23b  895008               mov dword ptr [eax + 8], edx
// 0075b23e  8b8f20010000         mov ecx, dword ptr [edi + 0x120]
// 0075b244  89480c               mov dword ptr [eax + 0xc], ecx
// 0075b247  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 0075b24a  85c9                 test ecx, ecx
// 0075b24c  7408                 je 0x75b256
// 0075b24e  50                   push eax
// 0075b24f  51                   push ecx
// 0075b250  ff15342e8000         call dword ptr [0x802e34]
// 0075b256  8b9748010000         mov edx, dword ptr [edi + 0x148]
// 0075b25c  899648010000         mov dword ptr [esi + 0x148], edx
// 0075b262  8b8738010000         mov eax, dword ptr [edi + 0x138]
// 0075b268  898638010000         mov dword ptr [esi + 0x138], eax
// 0075b26e  85d2                 test edx, edx
// 0075b270  741a                 je 0x75b28c
// 0075b272  8bcb                 mov ecx, ebx
// 0075b274  e837220000           call 0x75d4b0
// 0075b279  8b5078               mov edx, dword ptr [eax + 0x78]
// 0075b27c  8b8e18010000         mov ecx, dword ptr [esi + 0x118]
// 0075b282  8d441108             lea eax, [ecx + edx + 8]
// 0075b286  898620010000         mov dword ptr [esi + 0x120], eax
// 0075b28c  8b8e04010000         mov ecx, dword ptr [esi + 0x104]
// 0075b292  83b98000000000       cmp dword ptr [ecx + 0x80], 0
// 0075b299  754e                 jne 0x75b2e9
// 0075b29b  8b13                 mov edx, dword ptr [ebx]
// 0075b29d  8b4258               mov eax, dword ptr [edx + 0x58]
// 0075b2a0  8bcb                 mov ecx, ebx
// 0075b2a2  ffd0                 call eax
// 0075b2a4  8b8630010000         mov eax, dword ptr [esi + 0x130]
// 0075b2aa  85c0                 test eax, eax
// 0075b2ac  7405                 je 0x75b2b3
// 0075b2ae  8d5020               lea edx, [eax + 0x20]
// 0075b2b1  eb02                 jmp 0x75b2b5
// 0075b2b3  33d2                 xor edx, edx
// 0075b2b5  8d4820               lea ecx, [eax + 0x20]
// 0075b2b8  8b01                 mov eax, dword ptr [ecx]
// 0075b2ba  52                   push edx
// 0075b2bb  8b503c               mov edx, dword ptr [eax + 0x3c]
// 0075b2be  ffd2                 call edx
// 0075b2c0  8bb630010000         mov esi, dword ptr [esi + 0x130]
// 0075b2c6  85f6                 test esi, esi
// 0075b2c8  7413                 je 0x75b2dd
// 0075b2ca  8b13                 mov edx, dword ptr [ebx]
// 0075b2cc  8d4620               lea eax, [esi + 0x20]
// 0075b2cf  50                   push eax
// 0075b2d0  8b4234               mov eax, dword ptr [edx + 0x34]
// 0075b2d3  8bcb                 mov ecx, ebx
// 0075b2d5  ffd0                 call eax
// 0075b2d7  5f                   pop edi
// 0075b2d8  5e                   pop esi
// 0075b2d9  5b                   pop ebx
// 0075b2da  c20800               ret 8
// 0075b2dd  8b13                 mov edx, dword ptr [ebx]
// 0075b2df  33c0                 xor eax, eax
// 0075b2e1  50                   push eax
// 0075b2e2  8b4234               mov eax, dword ptr [edx + 0x34]
// 0075b2e5  8bcb                 mov ecx, ebx
// 0075b2e7  ffd0                 call eax
// 0075b2e9  5f                   pop edi
// 0075b2ea  5e                   pop esi
// 0075b2eb  5b                   pop ebx
// 0075b2ec  c20800               ret 8
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneMiniWnd.cpp (function ?Copy@CXTPDockingPaneMiniWnd@@MAEXPAV1@PAV?$CMap@PAVCXTPDockingPaneBase@@PAV1@PAV1@PAV1@@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneMiniWnd.cpp
