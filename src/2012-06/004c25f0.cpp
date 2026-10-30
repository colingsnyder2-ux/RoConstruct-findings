// roc 2012-06 004c25f0  unit: Ogre::VDataStream::?$SharedPtr  size: 116 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004c25f0
//
// 004c25f0  56                   push esi
// 004c25f1  8bf1                 mov esi, ecx
// 004c25f3  8b460c               mov eax, dword ptr [esi + 0xc]
// 004c25f6  83e800               sub eax, 0
// 004c25f9  57                   push edi
// 004c25fa  8b3d042eb200         mov edi, dword ptr [0xb22e04]
// 004c2600  7446                 je 0x4c2648
// 004c2602  83e801               sub eax, 1
// 004c2605  741a                 je 0x4c2621
// 004c2607  83e801               sub eax, 1
// 004c260a  754c                 jne 0x4c2658
// 004c260c  8b4604               mov eax, dword ptr [esi + 4]
// 004c260f  50                   push eax
// 004c2610  ffd7                 call edi
// 004c2612  8b4e08               mov ecx, dword ptr [esi + 8]
// 004c2615  83c404               add esp, 4
// 004c2618  51                   push ecx
// 004c2619  ffd7                 call edi
// 004c261b  83c404               add esp, 4
// 004c261e  5f                   pop edi
// 004c261f  5e                   pop esi
// 004c2620  c3                   ret 
// 004c2621  837e0400             cmp dword ptr [esi + 4], 0
// 004c2625  7431                 je 0x4c2658
// 004c2627  8b4e04               mov ecx, dword ptr [esi + 4]
// 004c262a  8b11                 mov edx, dword ptr [ecx]
// 004c262c  8b4208               mov eax, dword ptr [edx + 8]
// 004c262f  6a00                 push 0
// 004c2631  ffd0                 call eax
// 004c2633  8b4e04               mov ecx, dword ptr [esi + 4]
// 004c2636  51                   push ecx
// 004c2637  ffd7                 call edi
// 004c2639  8b4e08               mov ecx, dword ptr [esi + 8]
// 004c263c  83c404               add esp, 4
// 004c263f  51                   push ecx
// 004c2640  ffd7                 call edi
// 004c2642  83c404               add esp, 4
// 004c2645  5f                   pop edi
// 004c2646  5e                   pop esi
// 004c2647  c3                   ret 
// 004c2648  8b4e04               mov ecx, dword ptr [esi + 4]
// 004c264b  85c9                 test ecx, ecx
// 004c264d  7409                 je 0x4c2658
// 004c264f  8b11                 mov edx, dword ptr [ecx]
// 004c2651  8b4208               mov eax, dword ptr [edx + 8]
// 004c2654  6a01                 push 1
// 004c2656  ffd0                 call eax
// 004c2658  8b4e08               mov ecx, dword ptr [esi + 8]
// 004c265b  51                   push ecx
// 004c265c  ffd7                 call edi
// 004c265e  83c404               add esp, 4
// 004c2661  5f                   pop edi
// 004c2662  5e                   pop esi
// 004c2663  c3                   ret 
// library ogre-1.7.0/OgreConfigFile.cpp (function ?destroy@?$SharedPtr@VDataStream@Ogre@@@Ogre@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: ogre-1.7.0 OgreConfigFile.cpp
