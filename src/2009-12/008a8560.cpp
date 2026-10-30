// roc 2009-12 008a8560  unit: PAVCXTPDockingPaneBase::?$CMap  size: 114 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008a8560
//
// 008a8560  56                   push esi
// 008a8561  8bf1                 mov esi, ecx
// 008a8563  837e5000             cmp dword ptr [esi + 0x50], 0
// 008a8567  57                   push edi
// 008a8568  c7462000000000       mov dword ptr [esi + 0x20], 0
// 008a856f  c7462400000000       mov dword ptr [esi + 0x24], 0
// 008a8576  741e                 je 0x8a8596
// 008a8578  8d7e44               lea edi, [esi + 0x44]
// 008a857b  eb03                 jmp 0x8a8580
// 008a857d  8d4900               lea ecx, [ecx]
// 008a8580  8bcf                 mov ecx, edi
// 008a8582  e8c9fdffff           call 0x8a8350
// 008a8587  8b10                 mov edx, dword ptr [eax]
// 008a8589  8bc8                 mov ecx, eax
// 008a858b  8b4254               mov eax, dword ptr [edx + 0x54]
// 008a858e  ffd0                 call eax
// 008a8590  837e5000             cmp dword ptr [esi + 0x50], 0
// 008a8594  75ea                 jne 0x8a8580
// 008a8596  8d4e28               lea ecx, [esi + 0x28]
// 008a8599  e8b203f9ff           call 0x838950
// 008a859e  33c0                 xor eax, eax
// 008a85a0  894660               mov dword ptr [esi + 0x60], eax
// 008a85a3  894664               mov dword ptr [esi + 0x64], eax
// 008a85a6  894668               mov dword ptr [esi + 0x68], eax
// 008a85a9  89466c               mov dword ptr [esi + 0x6c], eax
// 008a85ac  83c670               add esi, 0x70
// 008a85af  8d7804               lea edi, [eax + 4]
// 008a85b2  8b0e                 mov ecx, dword ptr [esi]
// 008a85b4  85c9                 test ecx, ecx
// 008a85b6  740f                 je 0x8a85c7
// 008a85b8  8b11                 mov edx, dword ptr [ecx]
// 008a85ba  8b4204               mov eax, dword ptr [edx + 4]
// 008a85bd  6a01                 push 1
// 008a85bf  ffd0                 call eax
// 008a85c1  c70600000000         mov dword ptr [esi], 0
// 008a85c7  83c604               add esi, 4
// 008a85ca  83ef01               sub edi, 1
// 008a85cd  75e3                 jne 0x8a85b2
// 008a85cf  5f                   pop edi
// 008a85d0  5e                   pop esi
// 008a85d1  c3                   ret 
// copied from an identical function in another client (function ?Free@CXTPDockingPaneLayout@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneLayout.cpp