// roc 2011-06 008e23d0  unit: CXTPPropertyGridPaintManager  size: 327 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008e23d0
//
// 008e23d0  83ec10               sub esp, 0x10
// 008e23d3  53                   push ebx
// 008e23d4  56                   push esi
// 008e23d5  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 008e23d9  57                   push edi
// 008e23da  8bf9                 mov edi, ecx
// 008e23dc  6a01                 push 1
// 008e23de  8bce                 mov ecx, esi
// 008e23e0  e809a20e00           call 0x9cc5ee
// 008e23e5  837c243800           cmp dword ptr [esp + 0x38], 0
// 008e23ea  7428                 je 0x8e2414
// 008e23ec  8b475c               mov eax, dword ptr [edi + 0x5c]
// 008e23ef  83f8ff               cmp eax, -1
// 008e23f2  7503                 jne 0x8e23f7
// 008e23f4  8b4758               mov eax, dword ptr [edi + 0x58]
// 008e23f7  8b16                 mov edx, dword ptr [esi]
// 008e23f9  50                   push eax
// 008e23fa  8b4238               mov eax, dword ptr [edx + 0x38]
// 008e23fd  8bce                 mov ecx, esi
// 008e23ff  ffd0                 call eax
// 008e2401  8b4750               mov eax, dword ptr [edi + 0x50]
// 008e2404  83f8ff               cmp eax, -1
// 008e2407  7503                 jne 0x8e240c
// 008e2409  8b474c               mov eax, dword ptr [edi + 0x4c]
// 008e240c  50                   push eax
// 008e240d  8d4c242c             lea ecx, [esp + 0x2c]
// 008e2411  51                   push ecx
// 008e2412  eb26                 jmp 0x8e243a
// 008e2414  8b3e                 mov edi, dword ptr [esi]
// 008e2416  6a08                 push 8
// 008e2418  ff15181ba400         call dword ptr [0xa41b18]
// 008e241e  8b5738               mov edx, dword ptr [edi + 0x38]
// 008e2421  50                   push eax
// 008e2422  8bce                 mov ecx, esi
// 008e2424  ffd2                 call edx
// 008e2426  e8b52ff6ff           call 0x8453e0
// 008e242b  6a05                 push 5
// 008e242d  8bc8                 mov ecx, eax
// 008e242f  e87c27f6ff           call 0x844bb0
// 008e2434  50                   push eax
// 008e2435  8d44242c             lea eax, [esp + 0x2c]
// 008e2439  50                   push eax
// 008e243a  8bce                 mov ecx, esi
// 008e243c  e8df89f2ff           call 0x80ae20
// 008e2441  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008e2445  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 008e2449  8b442430             mov eax, dword ptr [esp + 0x30]
// 008e244d  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 008e2451  83c102               add ecx, 2
// 008e2454  894c240c             mov dword ptr [esp + 0xc], ecx
// 008e2458  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008e245c  83c0fe               add eax, -2
// 008e245f  89542410             mov dword ptr [esp + 0x10], edx
// 008e2463  8b13                 mov edx, dword ptr [ebx]
// 008e2465  89442414             mov dword ptr [esp + 0x14], eax
// 008e2469  8b425c               mov eax, dword ptr [edx + 0x5c]
// 008e246c  894c2418             mov dword ptr [esp + 0x18], ecx
// 008e2470  8bcb                 mov ecx, ebx
// 008e2472  ffd0                 call eax
// 008e2474  8bf8                 mov edi, eax
// 008e2476  85ff                 test edi, edi
// 008e2478  746c                 je 0x8e24e6
// 008e247a  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 008e247e  2b5c242c             sub ebx, dword ptr [esp + 0x2c]
// 008e2482  55                   push ebp
// 008e2483  8bcf                 mov ecx, edi
// 008e2485  e8461dfcff           call 0x8a41d0
// 008e248a  3bc3                 cmp eax, ebx
// 008e248c  7d0b                 jge 0x8e2499
// 008e248e  8bcf                 mov ecx, edi
// 008e2490  e83b1dfcff           call 0x8a41d0
// 008e2495  8be8                 mov ebp, eax
// 008e2497  eb08                 jmp 0x8e24a1
// 008e2499  8b6c2438             mov ebp, dword ptr [esp + 0x38]
// 008e249d  2b6c2430             sub ebp, dword ptr [esp + 0x30]
// 008e24a1  8bcf                 mov ecx, edi
// 008e24a3  e8e86ef8ff           call 0x869390
// 008e24a8  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008e24ac  8b542414             mov edx, dword ptr [esp + 0x14]
// 008e24b0  8bd8                 mov ebx, eax
// 008e24b2  8d040a               lea eax, [edx + ecx]
// 008e24b5  99                   cdq 
// 008e24b6  2bc2                 sub eax, edx
// 008e24b8  8bc8                 mov ecx, eax
// 008e24ba  8bc5                 mov eax, ebp
// 008e24bc  99                   cdq 
// 008e24bd  2bc2                 sub eax, edx
// 008e24bf  55                   push ebp
// 008e24c0  d1f9                 sar ecx, 1
// 008e24c2  d1f8                 sar eax, 1
// 008e24c4  2bc8                 sub ecx, eax
// 008e24c6  8b442414             mov eax, dword ptr [esp + 0x14]
// 008e24ca  53                   push ebx
// 008e24cb  51                   push ecx
// 008e24cc  50                   push eax
// 008e24cd  56                   push esi
// 008e24ce  8bcf                 mov ecx, edi
// 008e24d0  e87b47f4ff           call 0x826c50
// 008e24d5  8b442410             mov eax, dword ptr [esp + 0x10]
// 008e24d9  8d4c1805             lea ecx, [eax + ebx + 5]
// 008e24dd  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 008e24e1  894c2410             mov dword ptr [esp + 0x10], ecx
// 008e24e5  5d                   pop ebp
// 008e24e6  8d7b20               lea edi, [ebx + 0x20]
// 008e24e9  8b1e                 mov ebx, dword ptr [esi]
// 008e24eb  6824080000           push 0x824
// 008e24f0  8d542410             lea edx, [esp + 0x10]
// 008e24f4  52                   push edx
// 008e24f5  8bcf                 mov ecx, edi
// 008e24f7  ff15a826a400         call dword ptr [0xa426a8]
// 008e24fd  50                   push eax
// 008e24fe  8bcf                 mov ecx, edi
// 008e2500  ff15c82da400         call dword ptr [0xa42dc8]
// 008e2506  50                   push eax
// 008e2507  8b4370               mov eax, dword ptr [ebx + 0x70]
// 008e250a  8bce                 mov ecx, esi
// 008e250c  ffd0                 call eax
// 008e250e  5f                   pop edi
// 008e250f  5e                   pop esi
// 008e2510  5b                   pop ebx
// 008e2511  83c410               add esp, 0x10
// 008e2514  c21c00               ret 0x1c
// copied from an identical function in another client (function ?DrawInplaceListItem@CXTPPropertyGridPaintManager@@UAEXPAVCDC@@PAVCXTPPropertyGridItemConstraint@@VCRect@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\PropertyGrid\XTPPropertyGridPaintManager.cpp