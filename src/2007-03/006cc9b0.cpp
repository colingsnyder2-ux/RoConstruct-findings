// roc 2007-03 006cc9b0  unit: seg_006c0000  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006cc9b0
//
// 006cc9b0  51                   push ecx
// 006cc9b1  53                   push ebx
// 006cc9b2  57                   push edi
// 006cc9b3  8bf9                 mov edi, ecx
// 006cc9b5  83bf9000000000       cmp dword ptr [edi + 0x90], 0
// 006cc9bc  740b                 je 0x6cc9c9
// 006cc9be  8b4744               mov eax, dword ptr [edi + 0x44]
// 006cc9c1  2b473c               sub eax, dword ptr [edi + 0x3c]
// 006cc9c4  894724               mov dword ptr [edi + 0x24], eax
// 006cc9c7  eb09                 jmp 0x6cc9d2
// 006cc9c9  8b4f48               mov ecx, dword ptr [edi + 0x48]
// 006cc9cc  2b4f40               sub ecx, dword ptr [edi + 0x40]
// 006cc9cf  894f28               mov dword ptr [edi + 0x28], ecx
// 006cc9d2  8d5f20               lea ebx, [edi + 0x20]
// 006cc9d5  8bcb                 mov ecx, ebx
// 006cc9d7  e814edf9ff           call 0x66b6f0
// 006cc9dc  85c0                 test eax, eax
// 006cc9de  89442408             mov dword ptr [esp + 8], eax
// 006cc9e2  7440                 je 0x6cca24
// 006cc9e4  56                   push esi
// 006cc9e5  8d54240c             lea edx, [esp + 0xc]
// 006cc9e9  52                   push edx
// 006cc9ea  8bcb                 mov ecx, ebx
// 006cc9ec  e82f880400           call 0x715220
// 006cc9f1  8bf0                 mov esi, eax
// 006cc9f3  8b06                 mov eax, dword ptr [esi]
// 006cc9f5  8b5014               mov edx, dword ptr [eax + 0x14]
// 006cc9f8  8bce                 mov ecx, esi
// 006cc9fa  ffd2                 call edx
// 006cc9fc  85c0                 test eax, eax
// 006cc9fe  751c                 jne 0x6cca1c
// 006cca00  398790000000         cmp dword ptr [edi + 0x90], eax
// 006cca06  740b                 je 0x6cca13
// 006cca08  8b4624               mov eax, dword ptr [esi + 0x24]
// 006cca0b  2b461c               sub eax, dword ptr [esi + 0x1c]
// 006cca0e  894604               mov dword ptr [esi + 4], eax
// 006cca11  eb09                 jmp 0x6cca1c
// 006cca13  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 006cca16  2b4e20               sub ecx, dword ptr [esi + 0x20]
// 006cca19  894e08               mov dword ptr [esi + 8], ecx
// 006cca1c  837c240c00           cmp dword ptr [esp + 0xc], 0
// 006cca21  75c2                 jne 0x6cc9e5
// 006cca23  5e                   pop esi
// 006cca24  5f                   pop edi
// 006cca25  5b                   pop ebx
// 006cca26  59                   pop ecx
// 006cca27  c3                   ret 
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPaneSplitterContainer.cpp (function ?NormalizeDockingSize@CXTPDockingPaneSplitterContainer@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPaneSplitterContainer.cpp
