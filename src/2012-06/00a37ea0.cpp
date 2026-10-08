// roc 2012-06 00a37ea0  unit: CXTPDockingPaneMiniWnd  size: 287 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a37ea0
//
// 00a37ea0  8b542408             mov edx, dword ptr [esp + 8]
// 00a37ea4  53                   push ebx
// 00a37ea5  56                   push esi
// 00a37ea6  57                   push edi
// 00a37ea7  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00a37eab  8b8730010000         mov eax, dword ptr [edi + 0x130]
// 00a37eb1  8bf1                 mov esi, ecx
// 00a37eb3  8d4820               lea ecx, [eax + 0x20]
// 00a37eb6  8b01                 mov eax, dword ptr [ecx]
// 00a37eb8  8b4044               mov eax, dword ptr [eax + 0x44]
// 00a37ebb  6a00                 push 0
// 00a37ebd  52                   push edx
// 00a37ebe  8b9604010000         mov edx, dword ptr [esi + 0x104]
// 00a37ec4  52                   push edx
// 00a37ec5  ffd0                 call eax
// 00a37ec7  85c0                 test eax, eax
// 00a37ec9  7405                 je 0xa37ed0
// 00a37ecb  83c0e0               add eax, -0x20
// 00a37ece  eb02                 jmp 0xa37ed2
// 00a37ed0  33c0                 xor eax, eax
// 00a37ed2  898630010000         mov dword ptr [esi + 0x130], eax
// 00a37ed8  8d9ef8000000         lea ebx, [esi + 0xf8]
// 00a37ede  895830               mov dword ptr [eax + 0x30], ebx
// 00a37ee1  8b8e30010000         mov ecx, dword ptr [esi + 0x130]
// 00a37ee7  897134               mov dword ptr [ecx + 0x34], esi
// 00a37eea  8b9714010000         mov edx, dword ptr [edi + 0x114]
// 00a37ef0  899614010000         mov dword ptr [esi + 0x114], edx
// 00a37ef6  8b8f18010000         mov ecx, dword ptr [edi + 0x118]
// 00a37efc  8d8614010000         lea eax, [esi + 0x114]
// 00a37f02  894804               mov dword ptr [eax + 4], ecx
// 00a37f05  8b971c010000         mov edx, dword ptr [edi + 0x11c]
// 00a37f0b  895008               mov dword ptr [eax + 8], edx
// 00a37f0e  8b8f20010000         mov ecx, dword ptr [edi + 0x120]
// 00a37f14  89480c               mov dword ptr [eax + 0xc], ecx
// 00a37f17  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 00a37f1a  85c9                 test ecx, ecx
// 00a37f1c  7408                 je 0xa37f26
// 00a37f1e  50                   push eax
// 00a37f1f  51                   push ecx
// 00a37f20  ff15f83ab200         call dword ptr [0xb23af8]
// 00a37f26  8b9748010000         mov edx, dword ptr [edi + 0x148]
// 00a37f2c  899648010000         mov dword ptr [esi + 0x148], edx
// 00a37f32  8b8738010000         mov eax, dword ptr [edi + 0x138]
// 00a37f38  898638010000         mov dword ptr [esi + 0x138], eax
// 00a37f3e  85d2                 test edx, edx
// 00a37f40  741a                 je 0xa37f5c
// 00a37f42  8bcb                 mov ecx, ebx
// 00a37f44  e837220000           call 0xa3a180
// 00a37f49  8b5078               mov edx, dword ptr [eax + 0x78]
// 00a37f4c  8b8e18010000         mov ecx, dword ptr [esi + 0x118]
// 00a37f52  8d441108             lea eax, [ecx + edx + 8]
// 00a37f56  898620010000         mov dword ptr [esi + 0x120], eax
// 00a37f5c  8b8e04010000         mov ecx, dword ptr [esi + 0x104]
// 00a37f62  83b98000000000       cmp dword ptr [ecx + 0x80], 0
// 00a37f69  754e                 jne 0xa37fb9
// 00a37f6b  8b13                 mov edx, dword ptr [ebx]
// 00a37f6d  8b4258               mov eax, dword ptr [edx + 0x58]
// 00a37f70  8bcb                 mov ecx, ebx
// 00a37f72  ffd0                 call eax
// 00a37f74  8b8630010000         mov eax, dword ptr [esi + 0x130]
// 00a37f7a  85c0                 test eax, eax
// 00a37f7c  7405                 je 0xa37f83
// 00a37f7e  8d5020               lea edx, [eax + 0x20]
// 00a37f81  eb02                 jmp 0xa37f85
// 00a37f83  33d2                 xor edx, edx
// 00a37f85  8d4820               lea ecx, [eax + 0x20]
// 00a37f88  8b01                 mov eax, dword ptr [ecx]
// 00a37f8a  52                   push edx
// 00a37f8b  8b503c               mov edx, dword ptr [eax + 0x3c]
// 00a37f8e  ffd2                 call edx
// 00a37f90  8bb630010000         mov esi, dword ptr [esi + 0x130]
// 00a37f96  85f6                 test esi, esi
// 00a37f98  7413                 je 0xa37fad
// 00a37f9a  8b13                 mov edx, dword ptr [ebx]
// 00a37f9c  8d4620               lea eax, [esi + 0x20]
// 00a37f9f  50                   push eax
// 00a37fa0  8b4234               mov eax, dword ptr [edx + 0x34]
// 00a37fa3  8bcb                 mov ecx, ebx
// 00a37fa5  ffd0                 call eax
// 00a37fa7  5f                   pop edi
// 00a37fa8  5e                   pop esi
// 00a37fa9  5b                   pop ebx
// 00a37faa  c20800               ret 8
// 00a37fad  8b13                 mov edx, dword ptr [ebx]
// 00a37faf  33c0                 xor eax, eax
// 00a37fb1  50                   push eax
// 00a37fb2  8b4234               mov eax, dword ptr [edx + 0x34]
// 00a37fb5  8bcb                 mov ecx, ebx
// 00a37fb7  ffd0                 call eax
// 00a37fb9  5f                   pop edi
// 00a37fba  5e                   pop esi
// 00a37fbb  5b                   pop ebx
// 00a37fbc  c20800               ret 8
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneMiniWnd.cpp (function ?Copy@CXTPDockingPaneMiniWnd@@MAEXPAV1@PAV?$CMap@PAVCXTPDockingPaneBase@@PAV1@PAV1@PAV1@@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneMiniWnd.cpp
