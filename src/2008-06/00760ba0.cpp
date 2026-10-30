// from server: 100% by auto
// roc 2008-06 00760ba0  unit: CXTPDockingPaneSplitterWnd  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00760ba0
//
// 00760ba0  51                   push ecx
// 00760ba1  53                   push ebx
// 00760ba2  57                   push edi
// 00760ba3  8bf9                 mov edi, ecx
// 00760ba5  83bf9000000000       cmp dword ptr [edi + 0x90], 0
// 00760bac  740b                 je 0x760bb9
// 00760bae  8b4744               mov eax, dword ptr [edi + 0x44]
// 00760bb1  2b473c               sub eax, dword ptr [edi + 0x3c]
// 00760bb4  894724               mov dword ptr [edi + 0x24], eax
// 00760bb7  eb09                 jmp 0x760bc2
// 00760bb9  8b4f48               mov ecx, dword ptr [edi + 0x48]
// 00760bbc  2b4f40               sub ecx, dword ptr [edi + 0x40]
// 00760bbf  894f28               mov dword ptr [edi + 0x28], ecx
// 00760bc2  8d5f20               lea ebx, [edi + 0x20]
// 00760bc5  8bcb                 mov ecx, ebx
// 00760bc7  e8a4fb0300           call 0x7a0770
// 00760bcc  89442408             mov dword ptr [esp + 8], eax
// 00760bd0  85c0                 test eax, eax
// 00760bd2  7440                 je 0x760c14
// 00760bd4  56                   push esi
// 00760bd5  8d54240c             lea edx, [esp + 0xc]
// 00760bd9  52                   push edx
// 00760bda  8bcb                 mov ecx, ebx
// 00760bdc  e89ffb0300           call 0x7a0780
// 00760be1  8bf0                 mov esi, eax
// 00760be3  8b06                 mov eax, dword ptr [esi]
// 00760be5  8b5014               mov edx, dword ptr [eax + 0x14]
// 00760be8  8bce                 mov ecx, esi
// 00760bea  ffd2                 call edx
// 00760bec  85c0                 test eax, eax
// 00760bee  751c                 jne 0x760c0c
// 00760bf0  398790000000         cmp dword ptr [edi + 0x90], eax
// 00760bf6  740b                 je 0x760c03
// 00760bf8  8b4624               mov eax, dword ptr [esi + 0x24]
// 00760bfb  2b461c               sub eax, dword ptr [esi + 0x1c]
// 00760bfe  894604               mov dword ptr [esi + 4], eax
// 00760c01  eb09                 jmp 0x760c0c
// 00760c03  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 00760c06  2b4e20               sub ecx, dword ptr [esi + 0x20]
// 00760c09  894e08               mov dword ptr [esi + 8], ecx
// 00760c0c  837c240c00           cmp dword ptr [esp + 0xc], 0
// 00760c11  75c2                 jne 0x760bd5
// 00760c13  5e                   pop esi
// 00760c14  5f                   pop edi
// 00760c15  5b                   pop ebx
// 00760c16  59                   pop ecx
// 00760c17  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneSplitterContainer.cpp (function ?NormalizeDockingSize@CXTPDockingPaneSplitterContainer@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneSplitterContainer.cpp
