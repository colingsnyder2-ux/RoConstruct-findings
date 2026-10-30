// roc 2009-12 008664e0  unit: CXTPPropertyGridItemConstraints  size: 177 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008664e0
//
// 008664e0  6aff                 push -1
// 008664e2  686aef9500           push 0x95ef6a
// 008664e7  64a100000000         mov eax, dword ptr fs:[0]
// 008664ed  50                   push eax
// 008664ee  51                   push ecx
// 008664ef  53                   push ebx
// 008664f0  56                   push esi
// 008664f1  57                   push edi
// 008664f2  a10052b600           mov eax, dword ptr [0xb65200]
// 008664f7  33c4                 xor eax, esp
// 008664f9  50                   push eax
// 008664fa  8d442414             lea eax, [esp + 0x14]
// 008664fe  64a300000000         mov dword ptr fs:[0], eax
// 00866504  8bf9                 mov edi, ecx
// 00866506  6a34                 push 0x34
// 00866508  e853d3f8ff           call 0x7f3860
// 0086650d  83c404               add esp, 4
// 00866510  89442410             mov dword ptr [esp + 0x10], eax
// 00866514  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0086651c  85c0                 test eax, eax
// 0086651e  740b                 je 0x86652b
// 00866520  8bc8                 mov ecx, eax
// 00866522  e859e8ffff           call 0x864d80
// 00866527  8bf0                 mov esi, eax
// 00866529  eb02                 jmp 0x86652d
// 0086652b  33f6                 xor esi, esi
// 0086652d  8b442424             mov eax, dword ptr [esp + 0x24]
// 00866531  50                   push eax
// 00866532  8d4e20               lea ecx, [esi + 0x20]
// 00866535  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 0086653d  ff155cde9800         call dword ptr [0x98de5c]
// 00866543  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00866547  894e24               mov dword ptr [esi + 0x24], ecx
// 0086654a  8b5f28               mov ebx, dword ptr [edi + 0x28]
// 0086654d  8d4f20               lea ecx, [edi + 0x20]
// 00866550  56                   push esi
// 00866551  53                   push ebx
// 00866552  e819470000           call 0x86ac70
// 00866557  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0086655b  895e2c               mov dword ptr [esi + 0x2c], ebx
// 0086655e  8b5738               mov edx, dword ptr [edi + 0x38]
// 00866561  895630               mov dword ptr [esi + 0x30], edx
// 00866564  894628               mov dword ptr [esi + 0x28], eax
// 00866567  837f3800             cmp dword ptr [edi + 0x38], 0
// 0086656b  740d                 je 0x86657a
// 0086656d  8b4f38               mov ecx, dword ptr [edi + 0x38]
// 00866570  8b11                 mov edx, dword ptr [ecx]
// 00866572  8b82e0000000         mov eax, dword ptr [edx + 0xe0]
// 00866578  ffd0                 call eax
// 0086657a  8bc6                 mov eax, esi
// 0086657c  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00866580  64890d00000000       mov dword ptr fs:[0], ecx
// 00866587  59                   pop ecx
// 00866588  5f                   pop edi
// 00866589  5e                   pop esi
// 0086658a  5b                   pop ebx
// 0086658b  83c410               add esp, 0x10
// 0086658e  c20c00               ret 0xc
// copied from an identical function in another client (function ?AddConstraint@CXTPPropertyGridItemConstraints@@UAEPAVCXTPPropertyGridItemConstraint@@PBDKH@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\PropertyGrid\XTPPropertyGridItem.cpp