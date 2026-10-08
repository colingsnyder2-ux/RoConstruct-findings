// roc 2011-06 008bfa90  unit: CXTPDockingPaneMiniWnd  size: 287 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008bfa90
//
// 008bfa90  8b542408             mov edx, dword ptr [esp + 8]
// 008bfa94  53                   push ebx
// 008bfa95  56                   push esi
// 008bfa96  57                   push edi
// 008bfa97  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 008bfa9b  8b8730010000         mov eax, dword ptr [edi + 0x130]
// 008bfaa1  8bf1                 mov esi, ecx
// 008bfaa3  8d4820               lea ecx, [eax + 0x20]
// 008bfaa6  8b01                 mov eax, dword ptr [ecx]
// 008bfaa8  8b4044               mov eax, dword ptr [eax + 0x44]
// 008bfaab  6a00                 push 0
// 008bfaad  52                   push edx
// 008bfaae  8b9604010000         mov edx, dword ptr [esi + 0x104]
// 008bfab4  52                   push edx
// 008bfab5  ffd0                 call eax
// 008bfab7  85c0                 test eax, eax
// 008bfab9  7405                 je 0x8bfac0
// 008bfabb  83c0e0               add eax, -0x20
// 008bfabe  eb02                 jmp 0x8bfac2
// 008bfac0  33c0                 xor eax, eax
// 008bfac2  898630010000         mov dword ptr [esi + 0x130], eax
// 008bfac8  8d9ef8000000         lea ebx, [esi + 0xf8]
// 008bface  895830               mov dword ptr [eax + 0x30], ebx
// 008bfad1  8b8e30010000         mov ecx, dword ptr [esi + 0x130]
// 008bfad7  897134               mov dword ptr [ecx + 0x34], esi
// 008bfada  8b9714010000         mov edx, dword ptr [edi + 0x114]
// 008bfae0  899614010000         mov dword ptr [esi + 0x114], edx
// 008bfae6  8b8f18010000         mov ecx, dword ptr [edi + 0x118]
// 008bfaec  8d8614010000         lea eax, [esi + 0x114]
// 008bfaf2  894804               mov dword ptr [eax + 4], ecx
// 008bfaf5  8b971c010000         mov edx, dword ptr [edi + 0x11c]
// 008bfafb  895008               mov dword ptr [eax + 8], edx
// 008bfafe  8b8f20010000         mov ecx, dword ptr [edi + 0x120]
// 008bfb04  89480c               mov dword ptr [eax + 0xc], ecx
// 008bfb07  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 008bfb0a  85c9                 test ecx, ecx
// 008bfb0c  7408                 je 0x8bfb16
// 008bfb0e  50                   push eax
// 008bfb0f  51                   push ecx
// 008bfb10  ff155c1ca400         call dword ptr [0xa41c5c]
// 008bfb16  8b9748010000         mov edx, dword ptr [edi + 0x148]
// 008bfb1c  899648010000         mov dword ptr [esi + 0x148], edx
// 008bfb22  8b8738010000         mov eax, dword ptr [edi + 0x138]
// 008bfb28  898638010000         mov dword ptr [esi + 0x138], eax
// 008bfb2e  85d2                 test edx, edx
// 008bfb30  741a                 je 0x8bfb4c
// 008bfb32  8bcb                 mov ecx, ebx
// 008bfb34  e837220000           call 0x8c1d70
// 008bfb39  8b5078               mov edx, dword ptr [eax + 0x78]
// 008bfb3c  8b8e18010000         mov ecx, dword ptr [esi + 0x118]
// 008bfb42  8d441108             lea eax, [ecx + edx + 8]
// 008bfb46  898620010000         mov dword ptr [esi + 0x120], eax
// 008bfb4c  8b8e04010000         mov ecx, dword ptr [esi + 0x104]
// 008bfb52  83b98000000000       cmp dword ptr [ecx + 0x80], 0
// 008bfb59  754e                 jne 0x8bfba9
// 008bfb5b  8b13                 mov edx, dword ptr [ebx]
// 008bfb5d  8b4258               mov eax, dword ptr [edx + 0x58]
// 008bfb60  8bcb                 mov ecx, ebx
// 008bfb62  ffd0                 call eax
// 008bfb64  8b8630010000         mov eax, dword ptr [esi + 0x130]
// 008bfb6a  85c0                 test eax, eax
// 008bfb6c  7405                 je 0x8bfb73
// 008bfb6e  8d5020               lea edx, [eax + 0x20]
// 008bfb71  eb02                 jmp 0x8bfb75
// 008bfb73  33d2                 xor edx, edx
// 008bfb75  8d4820               lea ecx, [eax + 0x20]
// 008bfb78  8b01                 mov eax, dword ptr [ecx]
// 008bfb7a  52                   push edx
// 008bfb7b  8b503c               mov edx, dword ptr [eax + 0x3c]
// 008bfb7e  ffd2                 call edx
// 008bfb80  8bb630010000         mov esi, dword ptr [esi + 0x130]
// 008bfb86  85f6                 test esi, esi
// 008bfb88  7413                 je 0x8bfb9d
// 008bfb8a  8b13                 mov edx, dword ptr [ebx]
// 008bfb8c  8d4620               lea eax, [esi + 0x20]
// 008bfb8f  50                   push eax
// 008bfb90  8b4234               mov eax, dword ptr [edx + 0x34]
// 008bfb93  8bcb                 mov ecx, ebx
// 008bfb95  ffd0                 call eax
// 008bfb97  5f                   pop edi
// 008bfb98  5e                   pop esi
// 008bfb99  5b                   pop ebx
// 008bfb9a  c20800               ret 8
// 008bfb9d  8b13                 mov edx, dword ptr [ebx]
// 008bfb9f  33c0                 xor eax, eax
// 008bfba1  50                   push eax
// 008bfba2  8b4234               mov eax, dword ptr [edx + 0x34]
// 008bfba5  8bcb                 mov ecx, ebx
// 008bfba7  ffd0                 call eax
// 008bfba9  5f                   pop edi
// 008bfbaa  5e                   pop esi
// 008bfbab  5b                   pop ebx
// 008bfbac  c20800               ret 8
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneMiniWnd.cpp (function ?Copy@CXTPDockingPaneMiniWnd@@MAEXPAV1@PAV?$CMap@PAVCXTPDockingPaneBase@@PAV1@PAV1@PAV1@@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneMiniWnd.cpp
