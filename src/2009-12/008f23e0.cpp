// roc 2009-12 008f23e0  unit: CXTPRibbonControlSystemPopupBarListItem  size: 223 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008f23e0
//
// 008f23e0  6aff                 push -1
// 008f23e2  68a96a9600           push 0x966aa9
// 008f23e7  64a100000000         mov eax, dword ptr fs:[0]
// 008f23ed  50                   push eax
// 008f23ee  83ec10               sub esp, 0x10
// 008f23f1  53                   push ebx
// 008f23f2  56                   push esi
// 008f23f3  57                   push edi
// 008f23f4  a10052b600           mov eax, dword ptr [0xb65200]
// 008f23f9  33c4                 xor eax, esp
// 008f23fb  50                   push eax
// 008f23fc  8d442420             lea eax, [esp + 0x20]
// 008f2400  64a300000000         mov dword ptr fs:[0], eax
// 008f2406  8bf1                 mov esi, ecx
// 008f2408  e8333bf0ff           call 0x7f5f40
// 008f240d  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 008f2411  8bd8                 mov ebx, eax
// 008f2413  8b03                 mov eax, dword ptr [ebx]
// 008f2415  8b5078               mov edx, dword ptr [eax + 0x78]
// 008f2418  56                   push esi
// 008f2419  57                   push edi
// 008f241a  8bcb                 mov ecx, ebx
// 008f241c  ffd2                 call edx
// 008f241e  8b03                 mov eax, dword ptr [ebx]
// 008f2420  8b507c               mov edx, dword ptr [eax + 0x7c]
// 008f2423  56                   push esi
// 008f2424  8bcb                 mov ecx, ebx
// 008f2426  ffd2                 call edx
// 008f2428  8b17                 mov edx, dword ptr [edi]
// 008f242a  50                   push eax
// 008f242b  8b4238               mov eax, dword ptr [edx + 0x38]
// 008f242e  8bcf                 mov ecx, edi
// 008f2430  ffd0                 call eax
// 008f2432  6a01                 push 1
// 008f2434  8bcf                 mov ecx, edi
// 008f2436  e855400300           call 0x926490
// 008f243b  8b86c0000000         mov eax, dword ptr [esi + 0xc0]
// 008f2441  8b96c8000000         mov edx, dword ptr [esi + 0xc8]
// 008f2447  8b8ec4000000         mov ecx, dword ptr [esi + 0xc4]
// 008f244d  8b9ecc000000         mov ebx, dword ptr [esi + 0xcc]
// 008f2453  83c007               add eax, 7
// 008f2456  89542418             mov dword ptr [esp + 0x18], edx
// 008f245a  8b16                 mov edx, dword ptr [esi]
// 008f245c  8b5258               mov edx, dword ptr [edx + 0x58]
// 008f245f  89442410             mov dword ptr [esp + 0x10], eax
// 008f2463  8d442430             lea eax, [esp + 0x30]
// 008f2467  894c2414             mov dword ptr [esp + 0x14], ecx
// 008f246b  50                   push eax
// 008f246c  8bce                 mov ecx, esi
// 008f246e  895c2420             mov dword ptr [esp + 0x20], ebx
// 008f2472  ffd2                 call edx
// 008f2474  8bf0                 mov esi, eax
// 008f2476  8b1f                 mov ebx, dword ptr [edi]
// 008f2478  6a24                 push 0x24
// 008f247a  8d442414             lea eax, [esp + 0x14]
// 008f247e  50                   push eax
// 008f247f  8bce                 mov ecx, esi
// 008f2481  c744243000000000     mov dword ptr [esp + 0x30], 0
// 008f2489  ff15b4dd9800         call dword ptr [0x98ddb4]
// 008f248f  50                   push eax
// 008f2490  8bce                 mov ecx, esi
// 008f2492  ff1580de9800         call dword ptr [0x98de80]
// 008f2498  8b5370               mov edx, dword ptr [ebx + 0x70]
// 008f249b  50                   push eax
// 008f249c  8bcf                 mov ecx, edi
// 008f249e  ffd2                 call edx
// 008f24a0  8d4c2430             lea ecx, [esp + 0x30]
// 008f24a4  ff15c0de9800         call dword ptr [0x98dec0]
// 008f24aa  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008f24ae  64890d00000000       mov dword ptr fs:[0], ecx
// 008f24b5  59                   pop ecx
// 008f24b6  5f                   pop edi
// 008f24b7  5e                   pop esi
// 008f24b8  5b                   pop ebx
// 008f24b9  83c41c               add esp, 0x1c
// 008f24bc  c20400               ret 4
// copied from an identical function in another client (function ?Draw@CXTPRibbonControlSystemPopupBarListItem@@UAEXPAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Ribbon\XTPRibbonSystemButton.cpp