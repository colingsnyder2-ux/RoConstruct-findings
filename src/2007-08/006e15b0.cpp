// from server: 100% by auto
// roc 2007-08 006e15b0  unit: CXTPDockingPaneTabbedContainer  size: 145 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006e15b0
//
// 006e15b0  51                   push ecx
// 006e15b1  53                   push ebx
// 006e15b2  55                   push ebp
// 006e15b3  56                   push esi
// 006e15b4  8bf1                 mov esi, ecx
// 006e15b6  85f6                 test esi, esi
// 006e15b8  7405                 je 0x6e15bf
// 006e15ba  8d4654               lea eax, [esi + 0x54]
// 006e15bd  eb02                 jmp 0x6e15c1
// 006e15bf  33c0                 xor eax, eax
// 006e15c1  8d5e54               lea ebx, [esi + 0x54]
// 006e15c4  50                   push eax
// 006e15c5  8bcb                 mov ecx, ebx
// 006e15c7  e874efffff           call 0x6e0540
// 006e15cc  8bc8                 mov ecx, eax
// 006e15ce  e83dccf8ff           call 0x66e210
// 006e15d3  85c0                 test eax, eax
// 006e15d5  7447                 je 0x6e161e
// 006e15d7  83f801               cmp eax, 1
// 006e15da  7442                 je 0x6e161e
// 006e15dc  8b4e7c               mov ecx, dword ptr [esi + 0x7c]
// 006e15df  33ed                 xor ebp, ebp
// 006e15e1  2b4e74               sub ecx, dword ptr [esi + 0x74]
// 006e15e4  894e5c               mov dword ptr [esi + 0x5c], ecx
// 006e15e7  8bcb                 mov ecx, ebx
// 006e15e9  e872cff7ff           call 0x65e560
// 006e15ee  85c0                 test eax, eax
// 006e15f0  8944240c             mov dword ptr [esp + 0xc], eax
// 006e15f4  7446                 je 0x6e163c
// 006e15f6  57                   push edi
// 006e15f7  8d542410             lea edx, [esp + 0x10]
// 006e15fb  52                   push edx
// 006e15fc  8bcb                 mov ecx, ebx
// 006e15fe  e85de40300           call 0x71fa60
// 006e1603  8bf8                 mov edi, eax
// 006e1605  8b07                 mov eax, dword ptr [edi]
// 006e1607  8b5014               mov edx, dword ptr [eax + 0x14]
// 006e160a  8bcf                 mov ecx, edi
// 006e160c  ffd2                 call edx
// 006e160e  85c0                 test eax, eax
// 006e1610  7522                 jne 0x6e1634
// 006e1612  85ed                 test ebp, ebp
// 006e1614  7418                 je 0x6e162e
// 006e1616  8b4658               mov eax, dword ptr [esi + 0x58]
// 006e1619  894704               mov dword ptr [edi + 4], eax
// 006e161c  eb16                 jmp 0x6e1634
// 006e161e  8b4678               mov eax, dword ptr [esi + 0x78]
// 006e1621  2b4670               sub eax, dword ptr [esi + 0x70]
// 006e1624  bd01000000           mov ebp, 1
// 006e1629  894658               mov dword ptr [esi + 0x58], eax
// 006e162c  ebb9                 jmp 0x6e15e7
// 006e162e  8b4e5c               mov ecx, dword ptr [esi + 0x5c]
// 006e1631  894f08               mov dword ptr [edi + 8], ecx
// 006e1634  837c241000           cmp dword ptr [esp + 0x10], 0
// 006e1639  75bc                 jne 0x6e15f7
// 006e163b  5f                   pop edi
// 006e163c  5e                   pop esi
// 006e163d  5d                   pop ebp
// 006e163e  5b                   pop ebx
// 006e163f  59                   pop ecx
// 006e1640  c3                   ret 
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?NormalizeDockingSize@CXTPDockingPaneTabbedContainer@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
