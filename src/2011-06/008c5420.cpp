// from server: 100% by auto
// roc 2011-06 008c5420  unit: CXTPDockingPaneSplitterWnd  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008c5420
//
// 008c5420  51                   push ecx
// 008c5421  53                   push ebx
// 008c5422  57                   push edi
// 008c5423  8bf9                 mov edi, ecx
// 008c5425  83bf9000000000       cmp dword ptr [edi + 0x90], 0
// 008c542c  740b                 je 0x8c5439
// 008c542e  8b4744               mov eax, dword ptr [edi + 0x44]
// 008c5431  2b473c               sub eax, dword ptr [edi + 0x3c]
// 008c5434  894724               mov dword ptr [edi + 0x24], eax
// 008c5437  eb09                 jmp 0x8c5442
// 008c5439  8b4f48               mov ecx, dword ptr [edi + 0x48]
// 008c543c  2b4f40               sub ecx, dword ptr [edi + 0x40]
// 008c543f  894f28               mov dword ptr [edi + 0x28], ecx
// 008c5442  8d5f20               lea ebx, [edi + 0x20]
// 008c5445  8bcb                 mov ecx, ebx
// 008c5447  e8f477f9ff           call 0x85cc40
// 008c544c  89442408             mov dword ptr [esp + 8], eax
// 008c5450  85c0                 test eax, eax
// 008c5452  7440                 je 0x8c5494
// 008c5454  56                   push esi
// 008c5455  8d54240c             lea edx, [esp + 0xc]
// 008c5459  52                   push edx
// 008c545a  8bcb                 mov ecx, ebx
// 008c545c  e8cfb20300           call 0x900730
// 008c5461  8bf0                 mov esi, eax
// 008c5463  8b06                 mov eax, dword ptr [esi]
// 008c5465  8b5014               mov edx, dword ptr [eax + 0x14]
// 008c5468  8bce                 mov ecx, esi
// 008c546a  ffd2                 call edx
// 008c546c  85c0                 test eax, eax
// 008c546e  751c                 jne 0x8c548c
// 008c5470  398790000000         cmp dword ptr [edi + 0x90], eax
// 008c5476  740b                 je 0x8c5483
// 008c5478  8b4624               mov eax, dword ptr [esi + 0x24]
// 008c547b  2b461c               sub eax, dword ptr [esi + 0x1c]
// 008c547e  894604               mov dword ptr [esi + 4], eax
// 008c5481  eb09                 jmp 0x8c548c
// 008c5483  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 008c5486  2b4e20               sub ecx, dword ptr [esi + 0x20]
// 008c5489  894e08               mov dword ptr [esi + 8], ecx
// 008c548c  837c240c00           cmp dword ptr [esp + 0xc], 0
// 008c5491  75c2                 jne 0x8c5455
// 008c5493  5e                   pop esi
// 008c5494  5f                   pop edi
// 008c5495  5b                   pop ebx
// 008c5496  59                   pop ecx
// 008c5497  c3                   ret 
// library xtp-15.2.1/Source\DockingPane\XTPDockingPaneSplitterContainer.cpp (function ?NormalizeDockingSize@CXTPDockingPaneSplitterContainer@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/DockingPane/XTPDockingPaneSplitterContainer.cpp
