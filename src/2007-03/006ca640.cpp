// roc 2007-03 006ca640  unit: seg_006c0000  size: 145 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006ca640
//
// 006ca640  51                   push ecx
// 006ca641  53                   push ebx
// 006ca642  55                   push ebp
// 006ca643  56                   push esi
// 006ca644  8bf1                 mov esi, ecx
// 006ca646  85f6                 test esi, esi
// 006ca648  7405                 je 0x6ca64f
// 006ca64a  8d4654               lea eax, [esi + 0x54]
// 006ca64d  eb02                 jmp 0x6ca651
// 006ca64f  33c0                 xor eax, eax
// 006ca651  8d5e54               lea ebx, [esi + 0x54]
// 006ca654  50                   push eax
// 006ca655  8bcb                 mov ecx, ebx
// 006ca657  e8c4eeffff           call 0x6c9520
// 006ca65c  8bc8                 mov ecx, eax
// 006ca65e  e86dfbf8ff           call 0x65a1d0
// 006ca663  85c0                 test eax, eax
// 006ca665  7447                 je 0x6ca6ae
// 006ca667  83f801               cmp eax, 1
// 006ca66a  7442                 je 0x6ca6ae
// 006ca66c  8b4e7c               mov ecx, dword ptr [esi + 0x7c]
// 006ca66f  33ed                 xor ebp, ebp
// 006ca671  2b4e74               sub ecx, dword ptr [esi + 0x74]
// 006ca674  894e5c               mov dword ptr [esi + 0x5c], ecx
// 006ca677  8bcb                 mov ecx, ebx
// 006ca679  e87210faff           call 0x66b6f0
// 006ca67e  85c0                 test eax, eax
// 006ca680  8944240c             mov dword ptr [esp + 0xc], eax
// 006ca684  7446                 je 0x6ca6cc
// 006ca686  57                   push edi
// 006ca687  8d542410             lea edx, [esp + 0x10]
// 006ca68b  52                   push edx
// 006ca68c  8bcb                 mov ecx, ebx
// 006ca68e  e88dab0400           call 0x715220
// 006ca693  8bf8                 mov edi, eax
// 006ca695  8b07                 mov eax, dword ptr [edi]
// 006ca697  8b5014               mov edx, dword ptr [eax + 0x14]
// 006ca69a  8bcf                 mov ecx, edi
// 006ca69c  ffd2                 call edx
// 006ca69e  85c0                 test eax, eax
// 006ca6a0  7522                 jne 0x6ca6c4
// 006ca6a2  85ed                 test ebp, ebp
// 006ca6a4  7418                 je 0x6ca6be
// 006ca6a6  8b4658               mov eax, dword ptr [esi + 0x58]
// 006ca6a9  894704               mov dword ptr [edi + 4], eax
// 006ca6ac  eb16                 jmp 0x6ca6c4
// 006ca6ae  8b4678               mov eax, dword ptr [esi + 0x78]
// 006ca6b1  2b4670               sub eax, dword ptr [esi + 0x70]
// 006ca6b4  bd01000000           mov ebp, 1
// 006ca6b9  894658               mov dword ptr [esi + 0x58], eax
// 006ca6bc  ebb9                 jmp 0x6ca677
// 006ca6be  8b4e5c               mov ecx, dword ptr [esi + 0x5c]
// 006ca6c1  894f08               mov dword ptr [edi + 8], ecx
// 006ca6c4  837c241000           cmp dword ptr [esp + 0x10], 0
// 006ca6c9  75bc                 jne 0x6ca687
// 006ca6cb  5f                   pop edi
// 006ca6cc  5e                   pop esi
// 006ca6cd  5d                   pop ebp
// 006ca6ce  5b                   pop ebx
// 006ca6cf  59                   pop ecx
// 006ca6d0  c3                   ret 
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?NormalizeDockingSize@CXTPDockingPaneTabbedContainer@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
