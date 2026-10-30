// roc 2009-12 007fc2a0  unit: CPatchedControlComboBox  size: 697 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007fc2a0
//
// 007fc2a0  6aff                 push -1
// 007fc2a2  68a98e9500           push 0x958ea9
// 007fc2a7  64a100000000         mov eax, dword ptr fs:[0]
// 007fc2ad  50                   push eax
// 007fc2ae  51                   push ecx
// 007fc2af  53                   push ebx
// 007fc2b0  56                   push esi
// 007fc2b1  57                   push edi
// 007fc2b2  a10052b600           mov eax, dword ptr [0xb65200]
// 007fc2b7  33c4                 xor eax, esp
// 007fc2b9  50                   push eax
// 007fc2ba  8d442414             lea eax, [esp + 0x14]
// 007fc2be  64a300000000         mov dword ptr fs:[0], eax
// 007fc2c4  8bf1                 mov esi, ecx
// 007fc2c6  8d442410             lea eax, [esp + 0x10]
// 007fc2ca  50                   push eax
// 007fc2cb  e890fbffff           call 0x7fbe60
// 007fc2d0  83be9801000000       cmp dword ptr [esi + 0x198], 0
// 007fc2d7  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 007fc2df  7421                 je 0x7fc302
// 007fc2e1  8b8e84010000         mov ecx, dword ptr [esi + 0x184]
// 007fc2e7  85c9                 test ecx, ecx
// 007fc2e9  7417                 je 0x7fc302
// 007fc2eb  83792000             cmp dword ptr [ecx + 0x20], 0
// 007fc2ef  7411                 je 0x7fc302
// 007fc2f1  8b11                 mov edx, dword ptr [ecx]
// 007fc2f3  8b4268               mov eax, dword ptr [edx + 0x68]
// 007fc2f6  ffd0                 call eax
// 007fc2f8  c7869801000000000000 mov dword ptr [esi + 0x198], 0
// 007fc302  8b8e84010000         mov ecx, dword ptr [esi + 0x184]
// 007fc308  85c9                 test ecx, ecx
// 007fc30a  741f                 je 0x7fc32b
// 007fc30c  83792000             cmp dword ptr [ecx + 0x20], 0
// 007fc310  7419                 je 0x7fc32b
// 007fc312  e861a11200           call 0x926478
// 007fc317  a900004000           test eax, 0x400000
// 007fc31c  740d                 je 0x7fc32b
// 007fc31e  8b8e84010000         mov ecx, dword ptr [esi + 0x184]
// 007fc324  8b11                 mov edx, dword ptr [ecx]
// 007fc326  8b4268               mov eax, dword ptr [edx + 0x68]
// 007fc329  ffd0                 call eax
// 007fc32b  8b8684010000         mov eax, dword ptr [esi + 0x184]
// 007fc331  8b1dbccb9800         mov ebx, dword ptr [0x98cbbc]
// 007fc337  85c0                 test eax, eax
// 007fc339  7427                 je 0x7fc362
// 007fc33b  83782000             cmp dword ptr [eax + 0x20], 0
// 007fc33f  7421                 je 0x7fc362
// 007fc341  8b4820               mov ecx, dword ptr [eax + 0x20]
// 007fc344  51                   push ecx
// 007fc345  ffd3                 call ebx
// 007fc347  50                   push eax
// 007fc348  e8dd77ffff           call 0x7f3b2a
// 007fc34d  3b8600010000         cmp eax, dword ptr [esi + 0x100]
// 007fc353  740d                 je 0x7fc362
// 007fc355  8b8e84010000         mov ecx, dword ptr [esi + 0x184]
// 007fc35b  8b11                 mov edx, dword ptr [ecx]
// 007fc35d  8b4268               mov eax, dword ptr [edx + 0x68]
// 007fc360  ffd0                 call eax
// 007fc362  8d4c2424             lea ecx, [esp + 0x24]
// 007fc366  51                   push ecx
// 007fc367  8dbec0000000         lea edi, [esi + 0xc0]
// 007fc36d  57                   push edi
// 007fc36e  ff15bcca9800         call dword ptr [0x98cabc]
// 007fc374  85c0                 test eax, eax
// 007fc376  7443                 je 0x7fc3bb
// 007fc378  8b8684010000         mov eax, dword ptr [esi + 0x184]
// 007fc37e  85c0                 test eax, eax
// 007fc380  7406                 je 0x7fc388
// 007fc382  83782000             cmp dword ptr [eax + 0x20], 0
// 007fc386  7433                 je 0x7fc3bb
// 007fc388  83be9c01000000       cmp dword ptr [esi + 0x19c], 0
// 007fc38f  752a                 jne 0x7fc3bb
// 007fc391  85c0                 test eax, eax
// 007fc393  0f84a1010000         je 0x7fc53a
// 007fc399  83782000             cmp dword ptr [eax + 0x20], 0
// 007fc39d  0f8497010000         je 0x7fc53a
// 007fc3a3  8b5020               mov edx, dword ptr [eax + 0x20]
// 007fc3a6  52                   push edx
// 007fc3a7  ffd3                 call ebx
// 007fc3a9  50                   push eax
// 007fc3aa  e87b77ffff           call 0x7f3b2a
// 007fc3af  3b8600010000         cmp eax, dword ptr [esi + 0x100]
// 007fc3b5  0f847f010000         je 0x7fc53a
// 007fc3bb  8b442424             mov eax, dword ptr [esp + 0x24]
// 007fc3bf  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 007fc3c3  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 007fc3c7  8907                 mov dword ptr [edi], eax
// 007fc3c9  8b442430             mov eax, dword ptr [esp + 0x30]
// 007fc3cd  894f04               mov dword ptr [edi + 4], ecx
// 007fc3d0  8b8e84010000         mov ecx, dword ptr [esi + 0x184]
// 007fc3d6  895708               mov dword ptr [edi + 8], edx
// 007fc3d9  89470c               mov dword ptr [edi + 0xc], eax
// 007fc3dc  85c9                 test ecx, ecx
// 007fc3de  0f844c010000         je 0x7fc530
// 007fc3e4  83792000             cmp dword ptr [ecx + 0x20], 0
// 007fc3e8  7559                 jne 0x7fc443
// 007fc3ea  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 007fc3f0  8b11                 mov edx, dword ptr [ecx]
// 007fc3f2  8b9248010000         mov edx, dword ptr [edx + 0x148]
// 007fc3f8  50                   push eax
// 007fc3f9  8b86d4010000         mov eax, dword ptr [esi + 0x1d4]
// 007fc3ff  0d80000040           or eax, 0x40000080
// 007fc404  50                   push eax
// 007fc405  ffd2                 call edx
// 007fc407  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 007fc40d  83f8ff               cmp eax, -1
// 007fc410  750f                 jne 0x7fc421
// 007fc412  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 007fc418  85c9                 test ecx, ecx
// 007fc41a  7405                 je 0x7fc421
// 007fc41c  e88fa1ffff           call 0x7f65b0
// 007fc421  85c0                 test eax, eax
// 007fc423  750c                 jne 0x7fc431
// 007fc425  8b8e84010000         mov ecx, dword ptr [esi + 0x184]
// 007fc42b  50                   push eax
// 007fc42c  e8ad7affff           call 0x7f3ede
// 007fc431  8b86b4010000         mov eax, dword ptr [esi + 0x1b4]
// 007fc437  85c0                 test eax, eax
// 007fc439  7408                 je 0x7fc443
// 007fc43b  50                   push eax
// 007fc43c  8bce                 mov ecx, esi
// 007fc43e  e87de2ffff           call 0x7fa6c0
// 007fc443  8bce                 mov ecx, esi
// 007fc445  e8f69affff           call 0x7f5f40
// 007fc44a  05a4000000           add eax, 0xa4
// 007fc44f  8b8e84010000         mov ecx, dword ptr [esi + 0x184]
// 007fc455  7504                 jne 0x7fc45b
// 007fc457  33c0                 xor eax, eax
// 007fc459  eb03                 jmp 0x7fc45e
// 007fc45b  8b4004               mov eax, dword ptr [eax + 4]
// 007fc45e  8b3dc4cb9800         mov edi, dword ptr [0x98cbc4]
// 007fc464  6a00                 push 0
// 007fc466  50                   push eax
// 007fc467  8b4120               mov eax, dword ptr [ecx + 0x20]
// 007fc46a  6a30                 push 0x30
// 007fc46c  50                   push eax
// 007fc46d  ffd7                 call edi
// 007fc46f  8b8e84010000         mov ecx, dword ptr [esi + 0x184]
// 007fc475  8b5120               mov edx, dword ptr [ecx + 0x20]
// 007fc478  6a00                 push 0
// 007fc47a  bb03000000           mov ebx, 3
// 007fc47f  53                   push ebx
// 007fc480  68d3000000           push 0xd3
// 007fc485  52                   push edx
// 007fc486  ffd7                 call edi
// 007fc488  8b8e84010000         mov ecx, dword ptr [esi + 0x184]
// 007fc48e  e88defffff           call 0x7fb420
// 007fc493  8b8684010000         mov eax, dword ptr [esi + 0x184]
// 007fc499  85c0                 test eax, eax
// 007fc49b  7504                 jne 0x7fc4a1
// 007fc49d  33ff                 xor edi, edi
// 007fc49f  eb03                 jmp 0x7fc4a4
// 007fc4a1  8b7820               mov edi, dword ptr [eax + 0x20]
// 007fc4a4  ff15eccb9800         call dword ptr [0x98cbec]
// 007fc4aa  3bf8                 cmp edi, eax
// 007fc4ac  740c                 je 0x7fc4ba
// 007fc4ae  8d442410             lea eax, [esp + 0x10]
// 007fc4b2  50                   push eax
// 007fc4b3  8bce                 mov ecx, esi
// 007fc4b5  e856faffff           call 0x7fbf10
// 007fc4ba  8bce                 mov ecx, esi
// 007fc4bc  e8ff580700           call 0x871dc0
// 007fc4c1  8b8e84010000         mov ecx, dword ptr [esi + 0x184]
// 007fc4c7  894158               mov dword ptr [ecx + 0x58], eax
// 007fc4ca  8b442424             mov eax, dword ptr [esp + 0x24]
// 007fc4ce  8b96a0010000         mov edx, dword ptr [esi + 0x1a0]
// 007fc4d4  015c2428             add dword ptr [esp + 0x28], ebx
// 007fc4d8  295c2430             sub dword ptr [esp + 0x30], ebx
// 007fc4dc  8d4c1004             lea ecx, [eax + edx + 4]
// 007fc4e0  8b06                 mov eax, dword ptr [esi]
// 007fc4e2  894c2424             mov dword ptr [esp + 0x24], ecx
// 007fc4e6  bafdffffff           mov edx, 0xfffffffd
// 007fc4eb  2b96a4010000         sub edx, dword ptr [esi + 0x1a4]
// 007fc4f1  8d4c2424             lea ecx, [esp + 0x24]
// 007fc4f5  0154242c             add dword ptr [esp + 0x2c], edx
// 007fc4f9  8b9074010000         mov edx, dword ptr [eax + 0x174]
// 007fc4ff  51                   push ecx
// 007fc500  8bce                 mov ecx, esi
// 007fc502  ffd2                 call edx
// 007fc504  8b442428             mov eax, dword ptr [esp + 0x28]
// 007fc508  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 007fc50c  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 007fc510  6a01                 push 1
// 007fc512  2bc8                 sub ecx, eax
// 007fc514  51                   push ecx
// 007fc515  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 007fc519  2bd1                 sub edx, ecx
// 007fc51b  52                   push edx
// 007fc51c  50                   push eax
// 007fc51d  51                   push ecx
// 007fc51e  8b8e84010000         mov ecx, dword ptr [esi + 0x184]
// 007fc524  e80977ffff           call 0x7f3c32
// 007fc529  8bce                 mov ecx, esi
// 007fc52b  e880e2ffff           call 0x7fa7b0
// 007fc530  c7869c01000000000000 mov dword ptr [esi + 0x19c], 0
// 007fc53a  8d4c2410             lea ecx, [esp + 0x10]
// 007fc53e  ff15c0de9800         call dword ptr [0x98dec0]
// 007fc544  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007fc548  64890d00000000       mov dword ptr fs:[0], ecx
// 007fc54f  59                   pop ecx
// 007fc550  5f                   pop edi
// 007fc551  5e                   pop esi
// 007fc552  5b                   pop ebx
// 007fc553  83c410               add esp, 0x10
// 007fc556  c21000               ret 0x10
// copied from an identical function in another client (function ?SetRect@CXTPControlComboBox@@MAEXVCRect@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControlComboBox.cpp