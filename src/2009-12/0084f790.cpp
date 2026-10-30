// roc 2009-12 0084f790  unit: CXTPPropertyGrid  size: 471 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0084f790
//
// 0084f790  6aff                 push -1
// 0084f792  68f3d79500           push 0x95d7f3
// 0084f797  64a100000000         mov eax, dword ptr fs:[0]
// 0084f79d  50                   push eax
// 0084f79e  56                   push esi
// 0084f79f  57                   push edi
// 0084f7a0  a10052b600           mov eax, dword ptr [0xb65200]
// 0084f7a5  33c4                 xor eax, esp
// 0084f7a7  50                   push eax
// 0084f7a8  8d44240c             lea eax, [esp + 0xc]
// 0084f7ac  64a300000000         mov dword ptr fs:[0], eax
// 0084f7b2  8bf1                 mov esi, ecx
// 0084f7b4  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0084f7b8  85ff                 test edi, edi
// 0084f7ba  7527                 jne 0x84f7e3
// 0084f7bc  6a78                 push 0x78
// 0084f7be  e89d40faff           call 0x7f3860
// 0084f7c3  83c404               add esp, 4
// 0084f7c6  8944241c             mov dword ptr [esp + 0x1c], eax
// 0084f7ca  897c2414             mov dword ptr [esp + 0x14], edi
// 0084f7ce  85c0                 test eax, eax
// 0084f7d0  0f8465010000         je 0x84f93b
// 0084f7d6  56                   push esi
// 0084f7d7  8bc8                 mov ecx, eax
// 0084f7d9  e812a30700           call 0x8c9af0
// 0084f7de  e95a010000           jmp 0x84f93d
// 0084f7e3  83ff03               cmp edi, 3
// 0084f7e6  752b                 jne 0x84f813
// 0084f7e8  6a78                 push 0x78
// 0084f7ea  e87140faff           call 0x7f3860
// 0084f7ef  83c404               add esp, 4
// 0084f7f2  8944241c             mov dword ptr [esp + 0x1c], eax
// 0084f7f6  c744241401000000     mov dword ptr [esp + 0x14], 1
// 0084f7fe  85c0                 test eax, eax
// 0084f800  0f8435010000         je 0x84f93b
// 0084f806  56                   push esi
// 0084f807  8bc8                 mov ecx, eax
// 0084f809  e852bf0700           call 0x8cb760
// 0084f80e  e92a010000           jmp 0x84f93d
// 0084f813  83ff05               cmp edi, 5
// 0084f816  752b                 jne 0x84f843
// 0084f818  6a78                 push 0x78
// 0084f81a  e84140faff           call 0x7f3860
// 0084f81f  83c404               add esp, 4
// 0084f822  8944241c             mov dword ptr [esp + 0x1c], eax
// 0084f826  c744241402000000     mov dword ptr [esp + 0x14], 2
// 0084f82e  85c0                 test eax, eax
// 0084f830  0f8405010000         je 0x84f93b
// 0084f836  56                   push esi
// 0084f837  8bc8                 mov ecx, eax
// 0084f839  e882bf0700           call 0x8cb7c0
// 0084f83e  e9fa000000           jmp 0x84f93d
// 0084f843  83ff01               cmp edi, 1
// 0084f846  752b                 jne 0x84f873
// 0084f848  6a78                 push 0x78
// 0084f84a  e81140faff           call 0x7f3860
// 0084f84f  83c404               add esp, 4
// 0084f852  8944241c             mov dword ptr [esp + 0x1c], eax
// 0084f856  c744241403000000     mov dword ptr [esp + 0x14], 3
// 0084f85e  85c0                 test eax, eax
// 0084f860  0f84d5000000         je 0x84f93b
// 0084f866  56                   push esi
// 0084f867  8bc8                 mov ecx, eax
// 0084f869  e832ba0700           call 0x8cb2a0
// 0084f86e  e9ca000000           jmp 0x84f93d
// 0084f873  83ff02               cmp edi, 2
// 0084f876  752b                 jne 0x84f8a3
// 0084f878  6a7c                 push 0x7c
// 0084f87a  e8e13ffaff           call 0x7f3860
// 0084f87f  83c404               add esp, 4
// 0084f882  8944241c             mov dword ptr [esp + 0x1c], eax
// 0084f886  c744241404000000     mov dword ptr [esp + 0x14], 4
// 0084f88e  85c0                 test eax, eax
// 0084f890  0f84a5000000         je 0x84f93b
// 0084f896  56                   push esi
// 0084f897  8bc8                 mov ecx, eax
// 0084f899  e872ba0700           call 0x8cb310
// 0084f89e  e99a000000           jmp 0x84f93d
// 0084f8a3  83ff04               cmp edi, 4
// 0084f8a6  7524                 jne 0x84f8cc
// 0084f8a8  6a78                 push 0x78
// 0084f8aa  e8b13ffaff           call 0x7f3860
// 0084f8af  83c404               add esp, 4
// 0084f8b2  8944241c             mov dword ptr [esp + 0x1c], eax
// 0084f8b6  c744241405000000     mov dword ptr [esp + 0x14], 5
// 0084f8be  85c0                 test eax, eax
// 0084f8c0  7479                 je 0x84f93b
// 0084f8c2  56                   push esi
// 0084f8c3  8bc8                 mov ecx, eax
// 0084f8c5  e8d6be0700           call 0x8cb7a0
// 0084f8ca  eb71                 jmp 0x84f93d
// 0084f8cc  83ff06               cmp edi, 6
// 0084f8cf  7520                 jne 0x84f8f1
// 0084f8d1  6a78                 push 0x78
// 0084f8d3  e8883ffaff           call 0x7f3860
// 0084f8d8  83c404               add esp, 4
// 0084f8db  8944241c             mov dword ptr [esp + 0x1c], eax
// 0084f8df  897c2414             mov dword ptr [esp + 0x14], edi
// 0084f8e3  85c0                 test eax, eax
// 0084f8e5  7454                 je 0x84f93b
// 0084f8e7  56                   push esi
// 0084f8e8  8bc8                 mov ecx, eax
// 0084f8ea  e881bf0700           call 0x8cb870
// 0084f8ef  eb4c                 jmp 0x84f93d
// 0084f8f1  83ff07               cmp edi, 7
// 0084f8f4  7520                 jne 0x84f916
// 0084f8f6  6a78                 push 0x78
// 0084f8f8  e8633ffaff           call 0x7f3860
// 0084f8fd  83c404               add esp, 4
// 0084f900  8944241c             mov dword ptr [esp + 0x1c], eax
// 0084f904  897c2414             mov dword ptr [esp + 0x14], edi
// 0084f908  85c0                 test eax, eax
// 0084f90a  742f                 je 0x84f93b
// 0084f90c  56                   push esi
// 0084f90d  8bc8                 mov ecx, eax
// 0084f90f  e8fcbe0700           call 0x8cb810
// 0084f914  eb27                 jmp 0x84f93d
// 0084f916  83ff08               cmp edi, 8
// 0084f919  7532                 jne 0x84f94d
// 0084f91b  6a7c                 push 0x7c
// 0084f91d  e83e3ffaff           call 0x7f3860
// 0084f922  83c404               add esp, 4
// 0084f925  8944241c             mov dword ptr [esp + 0x1c], eax
// 0084f929  897c2414             mov dword ptr [esp + 0x14], edi
// 0084f92d  85c0                 test eax, eax
// 0084f92f  740a                 je 0x84f93b
// 0084f931  56                   push esi
// 0084f932  8bc8                 mov ecx, eax
// 0084f934  e807bb0700           call 0x8cb440
// 0084f939  eb02                 jmp 0x84f93d
// 0084f93b  33c0                 xor eax, eax
// 0084f93d  50                   push eax
// 0084f93e  8bce                 mov ecx, esi
// 0084f940  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 0084f948  e8f3f6ffff           call 0x84f040
// 0084f94d  89be40010000         mov dword ptr [esi + 0x140], edi
// 0084f953  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0084f957  64890d00000000       mov dword ptr fs:[0], ecx
// 0084f95e  59                   pop ecx
// 0084f95f  5f                   pop edi
// 0084f960  5e                   pop esi
// 0084f961  83c40c               add esp, 0xc
// 0084f964  c20400               ret 4
// copied from an identical function in another client (function ?SetTheme@CXTPPropertyGrid@@QAEXW4XTPPropertyGridPaintTheme@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/PropertyGrid/XTPPropertyGrid.cpp