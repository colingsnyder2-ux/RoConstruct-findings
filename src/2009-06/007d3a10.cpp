// roc 2009-06 007d3a10  unit: CXTPDockingPaneMiniWnd  size: 287 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007d3a10
//
// 007d3a10  8b542408             mov edx, dword ptr [esp + 8]
// 007d3a14  53                   push ebx
// 007d3a15  56                   push esi
// 007d3a16  57                   push edi
// 007d3a17  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 007d3a1b  8b8730010000         mov eax, dword ptr [edi + 0x130]
// 007d3a21  8bf1                 mov esi, ecx
// 007d3a23  8d4820               lea ecx, [eax + 0x20]
// 007d3a26  8b01                 mov eax, dword ptr [ecx]
// 007d3a28  8b4044               mov eax, dword ptr [eax + 0x44]
// 007d3a2b  6a00                 push 0
// 007d3a2d  52                   push edx
// 007d3a2e  8b9604010000         mov edx, dword ptr [esi + 0x104]
// 007d3a34  52                   push edx
// 007d3a35  ffd0                 call eax
// 007d3a37  85c0                 test eax, eax
// 007d3a39  7405                 je 0x7d3a40
// 007d3a3b  83c0e0               add eax, -0x20
// 007d3a3e  eb02                 jmp 0x7d3a42
// 007d3a40  33c0                 xor eax, eax
// 007d3a42  898630010000         mov dword ptr [esi + 0x130], eax
// 007d3a48  8d9ef8000000         lea ebx, [esi + 0xf8]
// 007d3a4e  895830               mov dword ptr [eax + 0x30], ebx
// 007d3a51  8b8e30010000         mov ecx, dword ptr [esi + 0x130]
// 007d3a57  897134               mov dword ptr [ecx + 0x34], esi
// 007d3a5a  8b9714010000         mov edx, dword ptr [edi + 0x114]
// 007d3a60  899614010000         mov dword ptr [esi + 0x114], edx
// 007d3a66  8b8f18010000         mov ecx, dword ptr [edi + 0x118]
// 007d3a6c  8d8614010000         lea eax, [esi + 0x114]
// 007d3a72  894804               mov dword ptr [eax + 4], ecx
// 007d3a75  8b971c010000         mov edx, dword ptr [edi + 0x11c]
// 007d3a7b  895008               mov dword ptr [eax + 8], edx
// 007d3a7e  8b8f20010000         mov ecx, dword ptr [edi + 0x120]
// 007d3a84  89480c               mov dword ptr [eax + 0xc], ecx
// 007d3a87  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 007d3a8a  85c9                 test ecx, ecx
// 007d3a8c  7408                 je 0x7d3a96
// 007d3a8e  50                   push eax
// 007d3a8f  51                   push ecx
// 007d3a90  ff15f4ed8900         call dword ptr [0x89edf4]
// 007d3a96  8b9748010000         mov edx, dword ptr [edi + 0x148]
// 007d3a9c  899648010000         mov dword ptr [esi + 0x148], edx
// 007d3aa2  8b8738010000         mov eax, dword ptr [edi + 0x138]
// 007d3aa8  898638010000         mov dword ptr [esi + 0x138], eax
// 007d3aae  85d2                 test edx, edx
// 007d3ab0  741a                 je 0x7d3acc
// 007d3ab2  8bcb                 mov ecx, ebx
// 007d3ab4  e857220000           call 0x7d5d10
// 007d3ab9  8b5078               mov edx, dword ptr [eax + 0x78]
// 007d3abc  8b8e18010000         mov ecx, dword ptr [esi + 0x118]
// 007d3ac2  8d441108             lea eax, [ecx + edx + 8]
// 007d3ac6  898620010000         mov dword ptr [esi + 0x120], eax
// 007d3acc  8b8e04010000         mov ecx, dword ptr [esi + 0x104]
// 007d3ad2  83b98000000000       cmp dword ptr [ecx + 0x80], 0
// 007d3ad9  754e                 jne 0x7d3b29
// 007d3adb  8b13                 mov edx, dword ptr [ebx]
// 007d3add  8b4258               mov eax, dword ptr [edx + 0x58]
// 007d3ae0  8bcb                 mov ecx, ebx
// 007d3ae2  ffd0                 call eax
// 007d3ae4  8b8630010000         mov eax, dword ptr [esi + 0x130]
// 007d3aea  85c0                 test eax, eax
// 007d3aec  7405                 je 0x7d3af3
// 007d3aee  8d5020               lea edx, [eax + 0x20]
// 007d3af1  eb02                 jmp 0x7d3af5
// 007d3af3  33d2                 xor edx, edx
// 007d3af5  8d4820               lea ecx, [eax + 0x20]
// 007d3af8  8b01                 mov eax, dword ptr [ecx]
// 007d3afa  52                   push edx
// 007d3afb  8b503c               mov edx, dword ptr [eax + 0x3c]
// 007d3afe  ffd2                 call edx
// 007d3b00  8bb630010000         mov esi, dword ptr [esi + 0x130]
// 007d3b06  85f6                 test esi, esi
// 007d3b08  7413                 je 0x7d3b1d
// 007d3b0a  8b13                 mov edx, dword ptr [ebx]
// 007d3b0c  8d4620               lea eax, [esi + 0x20]
// 007d3b0f  50                   push eax
// 007d3b10  8b4234               mov eax, dword ptr [edx + 0x34]
// 007d3b13  8bcb                 mov ecx, ebx
// 007d3b15  ffd0                 call eax
// 007d3b17  5f                   pop edi
// 007d3b18  5e                   pop esi
// 007d3b19  5b                   pop ebx
// 007d3b1a  c20800               ret 8
// 007d3b1d  8b13                 mov edx, dword ptr [ebx]
// 007d3b1f  33c0                 xor eax, eax
// 007d3b21  50                   push eax
// 007d3b22  8b4234               mov eax, dword ptr [edx + 0x34]
// 007d3b25  8bcb                 mov ecx, ebx
// 007d3b27  ffd0                 call eax
// 007d3b29  5f                   pop edi
// 007d3b2a  5e                   pop esi
// 007d3b2b  5b                   pop ebx
// 007d3b2c  c20800               ret 8
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneMiniWnd.cpp (function ?Copy@CXTPDockingPaneMiniWnd@@MAEXPAV1@PAV?$CMap@PAVCXTPDockingPaneBase@@PAV1@PAV1@PAV1@@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneMiniWnd.cpp
