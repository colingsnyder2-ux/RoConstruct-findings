// roc 2009-12 0086a160  unit: CXTPPropertyGridView  size: 195 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0086a160
//
// 0086a160  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0086a164  56                   push esi
// 0086a165  8bf1                 mov esi, ecx
// 0086a167  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0086a16b  50                   push eax
// 0086a16c  51                   push ecx
// 0086a16d  8bce                 mov ecx, esi
// 0086a16f  e86cf1ffff           call 0x8692e0
// 0086a174  3d00010000           cmp eax, 0x100
// 0086a179  7539                 jne 0x86a1b4
// 0086a17b  8bce                 mov ecx, esi
// 0086a17d  e8809af8ff           call 0x7f3c02
// 0086a182  8b5620               mov edx, dword ptr [esi + 0x20]
// 0086a185  52                   push edx
// 0086a186  ff152ccc9800         call dword ptr [0x98cc2c]
// 0086a18c  50                   push eax
// 0086a18d  e89899f8ff           call 0x7f3b2a
// 0086a192  8b8ee0000000         mov ecx, dword ptr [esi + 0xe0]
// 0086a198  85c9                 test ecx, ecx
// 0086a19a  740a                 je 0x86a1a6
// 0086a19c  8b01                 mov eax, dword ptr [ecx]
// 0086a19e  8b909c000000         mov edx, dword ptr [eax + 0x9c]
// 0086a1a4  ffd2                 call edx
// 0086a1a6  c786b400000001000000 mov dword ptr [esi + 0xb4], 1
// 0086a1b0  5e                   pop esi
// 0086a1b1  c20c00               ret 0xc
// 0086a1b4  8b442410             mov eax, dword ptr [esp + 0x10]
// 0086a1b8  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0086a1bc  57                   push edi
// 0086a1bd  50                   push eax
// 0086a1be  51                   push ecx
// 0086a1bf  8bce                 mov ecx, esi
// 0086a1c1  e8cae8ffff           call 0x868a90
// 0086a1c6  8bf8                 mov edi, eax
// 0086a1c8  85ff                 test edi, edi
// 0086a1ca  744b                 je 0x86a217
// 0086a1cc  8bce                 mov ecx, esi
// 0086a1ce  e82f9af8ff           call 0x7f3c02
// 0086a1d3  ff15eccb9800         call dword ptr [0x98cbec]
// 0086a1d9  50                   push eax
// 0086a1da  e84b99f8ff           call 0x7f3b2a
// 0086a1df  3bc6                 cmp eax, esi
// 0086a1e1  753b                 jne 0x86a21e
// 0086a1e3  8b542414             mov edx, dword ptr [esp + 0x14]
// 0086a1e7  8b442410             mov eax, dword ptr [esp + 0x10]
// 0086a1eb  52                   push edx
// 0086a1ec  50                   push eax
// 0086a1ed  8bce                 mov ecx, esi
// 0086a1ef  e89ce8ffff           call 0x868a90
// 0086a1f4  3bc7                 cmp eax, edi
// 0086a1f6  751f                 jne 0x86a217
// 0086a1f8  8b442414             mov eax, dword ptr [esp + 0x14]
// 0086a1fc  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0086a200  8b17                 mov edx, dword ptr [edi]
// 0086a202  8b92c0000000         mov edx, dword ptr [edx + 0xc0]
// 0086a208  50                   push eax
// 0086a209  8b442410             mov eax, dword ptr [esp + 0x10]
// 0086a20d  51                   push ecx
// 0086a20e  50                   push eax
// 0086a20f  8bcf                 mov ecx, edi
// 0086a211  ffd2                 call edx
// 0086a213  85c0                 test eax, eax
// 0086a215  7507                 jne 0x86a21e
// 0086a217  8bce                 mov ecx, esi
// 0086a219  e8129cf8ff           call 0x7f3e30
// 0086a21e  5f                   pop edi
// 0086a21f  5e                   pop esi
// 0086a220  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnLButtonDown@CXTPPropertyGridView@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\PropertyGrid\XTPPropertyGridView.cpp