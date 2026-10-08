// from server: 100% by auto
// roc 2007-08 006e3a70  unit: CXTPDockingPaneSplitterWnd  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006e3a70
//
// 006e3a70  51                   push ecx
// 006e3a71  53                   push ebx
// 006e3a72  57                   push edi
// 006e3a73  8bf9                 mov edi, ecx
// 006e3a75  83bf9000000000       cmp dword ptr [edi + 0x90], 0
// 006e3a7c  740b                 je 0x6e3a89
// 006e3a7e  8b4744               mov eax, dword ptr [edi + 0x44]
// 006e3a81  2b473c               sub eax, dword ptr [edi + 0x3c]
// 006e3a84  894724               mov dword ptr [edi + 0x24], eax
// 006e3a87  eb09                 jmp 0x6e3a92
// 006e3a89  8b4f48               mov ecx, dword ptr [edi + 0x48]
// 006e3a8c  2b4f40               sub ecx, dword ptr [edi + 0x40]
// 006e3a8f  894f28               mov dword ptr [edi + 0x28], ecx
// 006e3a92  8d5f20               lea ebx, [edi + 0x20]
// 006e3a95  8bcb                 mov ecx, ebx
// 006e3a97  e8c4aaf7ff           call 0x65e560
// 006e3a9c  85c0                 test eax, eax
// 006e3a9e  89442408             mov dword ptr [esp + 8], eax
// 006e3aa2  7440                 je 0x6e3ae4
// 006e3aa4  56                   push esi
// 006e3aa5  8d54240c             lea edx, [esp + 0xc]
// 006e3aa9  52                   push edx
// 006e3aaa  8bcb                 mov ecx, ebx
// 006e3aac  e8afbf0300           call 0x71fa60
// 006e3ab1  8bf0                 mov esi, eax
// 006e3ab3  8b06                 mov eax, dword ptr [esi]
// 006e3ab5  8b5014               mov edx, dword ptr [eax + 0x14]
// 006e3ab8  8bce                 mov ecx, esi
// 006e3aba  ffd2                 call edx
// 006e3abc  85c0                 test eax, eax
// 006e3abe  751c                 jne 0x6e3adc
// 006e3ac0  398790000000         cmp dword ptr [edi + 0x90], eax
// 006e3ac6  740b                 je 0x6e3ad3
// 006e3ac8  8b4624               mov eax, dword ptr [esi + 0x24]
// 006e3acb  2b461c               sub eax, dword ptr [esi + 0x1c]
// 006e3ace  894604               mov dword ptr [esi + 4], eax
// 006e3ad1  eb09                 jmp 0x6e3adc
// 006e3ad3  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 006e3ad6  2b4e20               sub ecx, dword ptr [esi + 0x20]
// 006e3ad9  894e08               mov dword ptr [esi + 8], ecx
// 006e3adc  837c240c00           cmp dword ptr [esp + 0xc], 0
// 006e3ae1  75c2                 jne 0x6e3aa5
// 006e3ae3  5e                   pop esi
// 006e3ae4  5f                   pop edi
// 006e3ae5  5b                   pop ebx
// 006e3ae6  59                   pop ecx
// 006e3ae7  c3                   ret 
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPaneSplitterContainer.cpp (function ?NormalizeDockingSize@CXTPDockingPaneSplitterContainer@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPaneSplitterContainer.cpp
