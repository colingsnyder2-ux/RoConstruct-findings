// roc 2012-06 00a3d840  unit: CXTPDockingPaneSplitterWnd  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a3d840
//
// 00a3d840  51                   push ecx
// 00a3d841  53                   push ebx
// 00a3d842  57                   push edi
// 00a3d843  8bf9                 mov edi, ecx
// 00a3d845  83bf9000000000       cmp dword ptr [edi + 0x90], 0
// 00a3d84c  740b                 je 0xa3d859
// 00a3d84e  8b4744               mov eax, dword ptr [edi + 0x44]
// 00a3d851  2b473c               sub eax, dword ptr [edi + 0x3c]
// 00a3d854  894724               mov dword ptr [edi + 0x24], eax
// 00a3d857  eb09                 jmp 0xa3d862
// 00a3d859  8b4f48               mov ecx, dword ptr [edi + 0x48]
// 00a3d85c  2b4f40               sub ecx, dword ptr [edi + 0x40]
// 00a3d85f  894f28               mov dword ptr [edi + 0x28], ecx
// 00a3d862  8d5f20               lea ebx, [edi + 0x20]
// 00a3d865  8bcb                 mov ecx, ebx
// 00a3d867  e804c7faff           call 0x9e9f70
// 00a3d86c  89442408             mov dword ptr [esp + 8], eax
// 00a3d870  85c0                 test eax, eax
// 00a3d872  7440                 je 0xa3d8b4
// 00a3d874  56                   push esi
// 00a3d875  8d54240c             lea edx, [esp + 0xc]
// 00a3d879  52                   push edx
// 00a3d87a  8bcb                 mov ecx, ebx
// 00a3d87c  e8cfb00300           call 0xa78950
// 00a3d881  8bf0                 mov esi, eax
// 00a3d883  8b06                 mov eax, dword ptr [esi]
// 00a3d885  8b5014               mov edx, dword ptr [eax + 0x14]
// 00a3d888  8bce                 mov ecx, esi
// 00a3d88a  ffd2                 call edx
// 00a3d88c  85c0                 test eax, eax
// 00a3d88e  751c                 jne 0xa3d8ac
// 00a3d890  398790000000         cmp dword ptr [edi + 0x90], eax
// 00a3d896  740b                 je 0xa3d8a3
// 00a3d898  8b4624               mov eax, dword ptr [esi + 0x24]
// 00a3d89b  2b461c               sub eax, dword ptr [esi + 0x1c]
// 00a3d89e  894604               mov dword ptr [esi + 4], eax
// 00a3d8a1  eb09                 jmp 0xa3d8ac
// 00a3d8a3  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 00a3d8a6  2b4e20               sub ecx, dword ptr [esi + 0x20]
// 00a3d8a9  894e08               mov dword ptr [esi + 8], ecx
// 00a3d8ac  837c240c00           cmp dword ptr [esp + 0xc], 0
// 00a3d8b1  75c2                 jne 0xa3d875
// 00a3d8b3  5e                   pop esi
// 00a3d8b4  5f                   pop edi
// 00a3d8b5  5b                   pop ebx
// 00a3d8b6  59                   pop ecx
// 00a3d8b7  c3                   ret 
// library xtp-15.2.1/Source\DockingPane\XTPDockingPaneSplitterContainer.cpp (function ?NormalizeDockingSize@CXTPDockingPaneSplitterContainer@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/DockingPane/XTPDockingPaneSplitterContainer.cpp
