// roc 2009-12 008af870  unit: CXTPDockingPaneMiniWnd  size: 354 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008af870
//
// 008af870  6aff                 push -1
// 008af872  68182e9600           push 0x962e18
// 008af877  64a100000000         mov eax, dword ptr fs:[0]
// 008af87d  50                   push eax
// 008af87e  83ec38               sub esp, 0x38
// 008af881  53                   push ebx
// 008af882  56                   push esi
// 008af883  57                   push edi
// 008af884  a10052b600           mov eax, dword ptr [0xb65200]
// 008af889  33c4                 xor eax, esp
// 008af88b  50                   push eax
// 008af88c  8d442448             lea eax, [esp + 0x48]
// 008af890  64a300000000         mov dword ptr fs:[0], eax
// 008af896  8bd9                 mov ebx, ecx
// 008af898  837c245802           cmp dword ptr [esp + 0x58], 2
// 008af89d  0f859d000000         jne 0x8af940
// 008af8a3  6a0a                 push 0xa
// 008af8a5  8d4c2414             lea ecx, [esp + 0x14]
// 008af8a9  e8129ef8ff           call 0x8396c0
// 008af8ae  8b83f8000000         mov eax, dword ptr [ebx + 0xf8]
// 008af8b4  8b500c               mov edx, dword ptr [eax + 0xc]
// 008af8b7  8dbbf8000000         lea edi, [ebx + 0xf8]
// 008af8bd  8d4c2410             lea ecx, [esp + 0x10]
// 008af8c1  51                   push ecx
// 008af8c2  6a01                 push 1
// 008af8c4  8bcf                 mov ecx, edi
// 008af8c6  c744245800000000     mov dword ptr [esp + 0x58], 0
// 008af8ce  ffd2                 call edx
// 008af8d0  837c241c01           cmp dword ptr [esp + 0x1c], 1
// 008af8d5  8b442414             mov eax, dword ptr [esp + 0x14]
// 008af8d9  752c                 jne 0x8af907
// 008af8db  33c9                 xor ecx, ecx
// 008af8dd  85c0                 test eax, eax
// 008af8df  0f95c1               setne cl
// 008af8e2  85c9                 test ecx, ecx
// 008af8e4  7505                 jne 0x8af8eb
// 008af8e6  e82142f4ff           call 0x7f3b0c
// 008af8eb  8b4008               mov eax, dword ptr [eax + 8]
// 008af8ee  85c0                 test eax, eax
// 008af8f0  740b                 je 0x8af8fd
// 008af8f2  8bb050010000         mov esi, dword ptr [eax + 0x150]
// 008af8f8  83c0ac               add eax, -0x54
// 008af8fb  eb65                 jmp 0x8af962
// 008af8fd  33c0                 xor eax, eax
// 008af8ff  8bb0a4010000         mov esi, dword ptr [eax + 0x1a4]
// 008af905  eb5b                 jmp 0x8af962
// 008af907  85c0                 test eax, eax
// 008af909  7424                 je 0x8af92f
// 008af90b  eb03                 jmp 0x8af910
// 008af90d  8d4900               lea ecx, [ecx]
// 008af910  8bc8                 mov ecx, eax
// 008af912  8b4908               mov ecx, dword ptr [ecx + 8]
// 008af915  8b00                 mov eax, dword ptr [eax]
// 008af917  85c9                 test ecx, ecx
// 008af919  7405                 je 0x8af920
// 008af91b  83c1ac               add ecx, -0x54
// 008af91e  eb02                 jmp 0x8af922
// 008af920  33c9                 xor ecx, ecx
// 008af922  83b99401000000       cmp dword ptr [ecx + 0x194], 0
// 008af929  7531                 jne 0x8af95c
// 008af92b  85c0                 test eax, eax
// 008af92d  75e1                 jne 0x8af910
// 008af92f  8d4c2410             lea ecx, [esp + 0x10]
// 008af933  c7442450ffffffff     mov dword ptr [esp + 0x50], 0xffffffff
// 008af93b  e8b09df8ff           call 0x8396f0
// 008af940  8bcb                 mov ecx, ebx
// 008af942  e8e944f4ff           call 0x7f3e30
// 008af947  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 008af94b  64890d00000000       mov dword ptr fs:[0], ecx
// 008af952  59                   pop ecx
// 008af953  5f                   pop edi
// 008af954  5e                   pop esi
// 008af955  5b                   pop ebx
// 008af956  83c444               add esp, 0x44
// 008af959  c20c00               ret 0xc
// 008af95c  8bb1a4010000         mov esi, dword ptr [ecx + 0x1a4]
// 008af962  85f6                 test esi, esi
// 008af964  74c9                 je 0x8af92f
// 008af966  8b06                 mov eax, dword ptr [esi]
// 008af968  8b5058               mov edx, dword ptr [eax + 0x58]
// 008af96b  8bce                 mov ecx, esi
// 008af96d  ffd2                 call edx
// 008af96f  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 008af973  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 008af977  8d542438             lea edx, [esp + 0x38]
// 008af97b  52                   push edx
// 008af97c  89742430             mov dword ptr [esp + 0x30], esi
// 008af980  89442434             mov dword ptr [esp + 0x34], eax
// 008af984  894c2438             mov dword ptr [esp + 0x38], ecx
// 008af988  ff159cca9800         call dword ptr [0x98ca9c]
// 008af98e  8bcf                 mov ecx, edi
// 008af990  e8ab0e0000           call 0x8b0840
// 008af995  8b10                 mov edx, dword ptr [eax]
// 008af997  8b9248010000         mov edx, dword ptr [edx + 0x148]
// 008af99d  8d4c242c             lea ecx, [esp + 0x2c]
// 008af9a1  51                   push ecx
// 008af9a2  6a05                 push 5
// 008af9a4  8bc8                 mov ecx, eax
// 008af9a6  ffd2                 call edx
// 008af9a8  85c0                 test eax, eax
// 008af9aa  7483                 je 0x8af92f
// 008af9ac  8d4c2410             lea ecx, [esp + 0x10]
// 008af9b0  c7442450ffffffff     mov dword ptr [esp + 0x50], 0xffffffff
// 008af9b8  e8339df8ff           call 0x8396f0
// 008af9bd  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 008af9c1  64890d00000000       mov dword ptr fs:[0], ecx
// 008af9c8  59                   pop ecx
// 008af9c9  5f                   pop edi
// 008af9ca  5e                   pop esi
// 008af9cb  5b                   pop ebx
// 008af9cc  83c444               add esp, 0x44
// 008af9cf  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnNcRButtonDown@CXTPDockingPaneMiniWnd@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneMiniWnd.cpp