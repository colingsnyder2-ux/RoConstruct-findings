// roc 2008-06 0075e690  unit: CXTPDockingPaneTabbedContainer  size: 145 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0075e690
//
// 0075e690  51                   push ecx
// 0075e691  53                   push ebx
// 0075e692  55                   push ebp
// 0075e693  56                   push esi
// 0075e694  8bf1                 mov esi, ecx
// 0075e696  85f6                 test esi, esi
// 0075e698  7405                 je 0x75e69f
// 0075e69a  8d4654               lea eax, [esi + 0x54]
// 0075e69d  eb02                 jmp 0x75e6a1
// 0075e69f  33c0                 xor eax, eax
// 0075e6a1  8d5e54               lea ebx, [esi + 0x54]
// 0075e6a4  50                   push eax
// 0075e6a5  8bcb                 mov ecx, ebx
// 0075e6a7  e8f4edffff           call 0x75d4a0
// 0075e6ac  8bc8                 mov ecx, eax
// 0075e6ae  e82d6af8ff           call 0x6e50e0
// 0075e6b3  85c0                 test eax, eax
// 0075e6b5  7447                 je 0x75e6fe
// 0075e6b7  83f801               cmp eax, 1
// 0075e6ba  7442                 je 0x75e6fe
// 0075e6bc  8b4e7c               mov ecx, dword ptr [esi + 0x7c]
// 0075e6bf  33ed                 xor ebp, ebp
// 0075e6c1  2b4e74               sub ecx, dword ptr [esi + 0x74]
// 0075e6c4  894e5c               mov dword ptr [esi + 0x5c], ecx
// 0075e6c7  8bcb                 mov ecx, ebx
// 0075e6c9  e8a2200400           call 0x7a0770
// 0075e6ce  8944240c             mov dword ptr [esp + 0xc], eax
// 0075e6d2  85c0                 test eax, eax
// 0075e6d4  7446                 je 0x75e71c
// 0075e6d6  57                   push edi
// 0075e6d7  8d542410             lea edx, [esp + 0x10]
// 0075e6db  52                   push edx
// 0075e6dc  8bcb                 mov ecx, ebx
// 0075e6de  e89d200400           call 0x7a0780
// 0075e6e3  8bf8                 mov edi, eax
// 0075e6e5  8b07                 mov eax, dword ptr [edi]
// 0075e6e7  8b5014               mov edx, dword ptr [eax + 0x14]
// 0075e6ea  8bcf                 mov ecx, edi
// 0075e6ec  ffd2                 call edx
// 0075e6ee  85c0                 test eax, eax
// 0075e6f0  7522                 jne 0x75e714
// 0075e6f2  85ed                 test ebp, ebp
// 0075e6f4  7418                 je 0x75e70e
// 0075e6f6  8b4658               mov eax, dword ptr [esi + 0x58]
// 0075e6f9  894704               mov dword ptr [edi + 4], eax
// 0075e6fc  eb16                 jmp 0x75e714
// 0075e6fe  8b4678               mov eax, dword ptr [esi + 0x78]
// 0075e701  2b4670               sub eax, dword ptr [esi + 0x70]
// 0075e704  bd01000000           mov ebp, 1
// 0075e709  894658               mov dword ptr [esi + 0x58], eax
// 0075e70c  ebb9                 jmp 0x75e6c7
// 0075e70e  8b4e5c               mov ecx, dword ptr [esi + 0x5c]
// 0075e711  894f08               mov dword ptr [edi + 8], ecx
// 0075e714  837c241000           cmp dword ptr [esp + 0x10], 0
// 0075e719  75bc                 jne 0x75e6d7
// 0075e71b  5f                   pop edi
// 0075e71c  5e                   pop esi
// 0075e71d  5d                   pop ebp
// 0075e71e  5b                   pop ebx
// 0075e71f  59                   pop ecx
// 0075e720  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?NormalizeDockingSize@CXTPDockingPaneTabbedContainer@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
