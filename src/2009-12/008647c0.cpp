// roc 2009-12 008647c0  unit: CXTPPropertyGridItem  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008647c0
//
// 008647c0  6aff                 push -1
// 008647c2  68a8ed9500           push 0x95eda8
// 008647c7  64a100000000         mov eax, dword ptr fs:[0]
// 008647cd  50                   push eax
// 008647ce  83ec0c               sub esp, 0xc
// 008647d1  56                   push esi
// 008647d2  a10052b600           mov eax, dword ptr [0xb65200]
// 008647d7  33c4                 xor eax, esp
// 008647d9  50                   push eax
// 008647da  8d442414             lea eax, [esp + 0x14]
// 008647de  64a300000000         mov dword ptr fs:[0], eax
// 008647e4  8bf1                 mov esi, ecx
// 008647e6  8d4c240c             lea ecx, [esp + 0xc]
// 008647ea  ff1574de9800         call dword ptr [0x98de74]
// 008647f0  8b8ebc000000         mov ecx, dword ptr [esi + 0xbc]
// 008647f6  33c0                 xor eax, eax
// 008647f8  8944241c             mov dword ptr [esp + 0x1c], eax
// 008647fc  89442408             mov dword ptr [esp + 8], eax
// 00864800  89742410             mov dword ptr [esp + 0x10], esi
// 00864804  3bc8                 cmp ecx, eax
// 00864806  740c                 je 0x864814
// 00864808  8d442408             lea eax, [esp + 8]
// 0086480c  50                   push eax
// 0086480d  6a0d                 push 0xd
// 0086480f  e8fc300000           call 0x867910
// 00864814  8d4c240c             lea ecx, [esp + 0xc]
// 00864818  ff15c0de9800         call dword ptr [0x98dec0]
// 0086481e  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00864822  64890d00000000       mov dword ptr fs:[0], ecx
// 00864829  59                   pop ecx
// 0086482a  5e                   pop esi
// 0086482b  83c418               add esp, 0x18
// 0086482e  c3                   ret 
// copied from an identical function in another client (function ?OnCancelEdit@CXTPPropertyGridItem@@UAEXXZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/PropertyGrid/XTPPropertyGridItem.cpp