// roc 2009-12 008b2540  unit: CXTPDockingPaneTabbedContainer  size: 378 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008b2540
//
// 008b2540  8b44240c             mov eax, dword ptr [esp + 0xc]
// 008b2544  8b542408             mov edx, dword ptr [esp + 8]
// 008b2548  53                   push ebx
// 008b2549  55                   push ebp
// 008b254a  56                   push esi
// 008b254b  57                   push edi
// 008b254c  50                   push eax
// 008b254d  8bf1                 mov esi, ecx
// 008b254f  8b4620               mov eax, dword ptr [esi + 0x20]
// 008b2552  52                   push edx
// 008b2553  8d8ea8000000         lea ecx, [esi + 0xa8]
// 008b2559  50                   push eax
// 008b255a  e8e1d40100           call 0x8cfa40
// 008b255f  83bea801000000       cmp dword ptr [esi + 0x1a8], 0
// 008b2566  0f842b010000         je 0x8b2697
// 008b256c  33ff                 xor edi, edi
// 008b256e  39beb4010000         cmp dword ptr [esi + 0x1b4], edi
// 008b2574  7e57                 jle 0x8b25cd
// 008b2576  8b2d5cca9800         mov ebp, dword ptr [0x98ca5c]
// 008b257c  33db                 xor ebx, ebx
// 008b257e  8bff                 mov edi, edi
// 008b2580  57                   push edi
// 008b2581  8bce                 mov ecx, esi
// 008b2583  e858feffff           call 0x8b23e0
// 008b2588  3b86a8010000         cmp eax, dword ptr [esi + 0x1a8]
// 008b258e  7431                 je 0x8b25c1
// 008b2590  85db                 test ebx, ebx
// 008b2592  0f8cd8000000         jl 0x8b2670
// 008b2598  3bbeb4010000         cmp edi, dword ptr [esi + 0x1b4]
// 008b259e  0f8dcc000000         jge 0x8b2670
// 008b25a4  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008b25a8  8b86b0010000         mov eax, dword ptr [esi + 0x1b0]
// 008b25ae  8b542418             mov edx, dword ptr [esp + 0x18]
// 008b25b2  51                   push ecx
// 008b25b3  03c3                 add eax, ebx
// 008b25b5  52                   push edx
// 008b25b6  50                   push eax
// 008b25b7  ffd5                 call ebp
// 008b25b9  85c0                 test eax, eax
// 008b25bb  0f8584000000         jne 0x8b2645
// 008b25c1  47                   inc edi
// 008b25c2  83c310               add ebx, 0x10
// 008b25c5  3bbeb4010000         cmp edi, dword ptr [esi + 0x1b4]
// 008b25cb  7cb3                 jl 0x8b2580
// 008b25cd  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008b25d1  8b542418             mov edx, dword ptr [esp + 0x18]
// 008b25d5  51                   push ecx
// 008b25d6  52                   push edx
// 008b25d7  8d8ea8000000         lea ecx, [esi + 0xa8]
// 008b25dd  e8aed00100           call 0x8cf690
// 008b25e2  85c0                 test eax, eax
// 008b25e4  0f85c2000000         jne 0x8b26ac
// 008b25ea  50                   push eax
// 008b25eb  50                   push eax
// 008b25ec  8b86a8010000         mov eax, dword ptr [esi + 0x1a8]
// 008b25f2  50                   push eax
// 008b25f3  8d7e54               lea edi, [esi + 0x54]
// 008b25f6  6a10                 push 0x10
// 008b25f8  8bcf                 mov ecx, edi
// 008b25fa  e841e2ffff           call 0x8b0840
// 008b25ff  8bc8                 mov ecx, eax
// 008b2601  e81a5ff8ff           call 0x838520
// 008b2606  85c0                 test eax, eax
// 008b2608  0f85a5000000         jne 0x8b26b3
// 008b260e  8986a8010000         mov dword ptr [esi + 0x1a8], eax
// 008b2614  ff1520cc9800         call dword ptr [0x98cc20]
// 008b261a  8b5620               mov edx, dword ptr [esi + 0x20]
// 008b261d  8d4c2418             lea ecx, [esp + 0x18]
// 008b2621  51                   push ecx
// 008b2622  52                   push edx
// 008b2623  ff1554cc9800         call dword ptr [0x98cc54]
// 008b2629  8bcf                 mov ecx, edi
// 008b262b  e810e2ffff           call 0x8b0840
// 008b2630  8b8824010000         mov ecx, dword ptr [eax + 0x124]
// 008b2636  8b86a4010000         mov eax, dword ptr [esi + 0x1a4]
// 008b263c  85c0                 test eax, eax
// 008b263e  7435                 je 0x8b2675
// 008b2640  83c020               add eax, 0x20
// 008b2643  eb32                 jmp 0x8b2677
// 008b2645  8b86a8010000         mov eax, dword ptr [esi + 0x1a8]
// 008b264b  50                   push eax
// 008b264c  57                   push edi
// 008b264d  8bce                 mov ecx, esi
// 008b264f  e88cfdffff           call 0x8b23e0
// 008b2654  50                   push eax
// 008b2655  8bce                 mov ecx, esi
// 008b2657  e874feffff           call 0x8b24d0
// 008b265c  8b5654               mov edx, dword ptr [esi + 0x54]
// 008b265f  8b4238               mov eax, dword ptr [edx + 0x38]
// 008b2662  8d4e54               lea ecx, [esi + 0x54]
// 008b2665  6a01                 push 1
// 008b2667  ffd0                 call eax
// 008b2669  5f                   pop edi
// 008b266a  5e                   pop esi
// 008b266b  5d                   pop ebp
// 008b266c  5b                   pop ebx
// 008b266d  c20c00               ret 0xc
// 008b2670  e89714f4ff           call 0x7f3b0c
// 008b2675  33c0                 xor eax, eax
// 008b2677  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 008b267b  8b11                 mov edx, dword ptr [ecx]
// 008b267d  57                   push edi
// 008b267e  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 008b2682  57                   push edi
// 008b2683  50                   push eax
// 008b2684  8b4204               mov eax, dword ptr [edx + 4]
// 008b2687  ffd0                 call eax
// 008b2689  8bce                 mov ecx, esi
// 008b268b  e8a017f4ff           call 0x7f3e30
// 008b2690  5f                   pop edi
// 008b2691  5e                   pop esi
// 008b2692  5d                   pop ebp
// 008b2693  5b                   pop ebx
// 008b2694  c20c00               ret 0xc
// 008b2697  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008b269b  8b542418             mov edx, dword ptr [esp + 0x18]
// 008b269f  51                   push ecx
// 008b26a0  8b8e80000000         mov ecx, dword ptr [esi + 0x80]
// 008b26a6  52                   push edx
// 008b26a7  e8e4e1ffff           call 0x8b0890
// 008b26ac  8bce                 mov ecx, esi
// 008b26ae  e87d17f4ff           call 0x7f3e30
// 008b26b3  5f                   pop edi
// 008b26b4  5e                   pop esi
// 008b26b5  5d                   pop ebp
// 008b26b6  5b                   pop ebx
// 008b26b7  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnMouseMove@CXTPDockingPaneTabbedContainer@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneTabbedContainer.cpp