// roc 2011-06 0089c2a0  unit: CXTPControlEdit  size: 310 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0089c2a0
//
// 0089c2a0  6aff                 push -1
// 0089c2a2  68e79ca000           push 0xa09ce7
// 0089c2a7  64a100000000         mov eax, dword ptr fs:[0]
// 0089c2ad  50                   push eax
// 0089c2ae  83ec10               sub esp, 0x10
// 0089c2b1  53                   push ebx
// 0089c2b2  55                   push ebp
// 0089c2b3  56                   push esi
// 0089c2b4  57                   push edi
// 0089c2b5  a12058c900           mov eax, dword ptr [0xc95820]
// 0089c2ba  33c4                 xor eax, esp
// 0089c2bc  50                   push eax
// 0089c2bd  8d442424             lea eax, [esp + 0x24]
// 0089c2c1  64a300000000         mov dword ptr fs:[0], eax
// 0089c2c7  8bf1                 mov esi, ecx
// 0089c2c9  33db                 xor ebx, ebx
// 0089c2cb  895c2414             mov dword ptr [esp + 0x14], ebx
// 0089c2cf  837c243404           cmp dword ptr [esp + 0x34], 4
// 0089c2d4  7576                 jne 0x89c34c
// 0089c2d6  8d442420             lea eax, [esp + 0x20]
// 0089c2da  50                   push eax
// 0089c2db  e8d0f4ffff           call 0x89b7b0
// 0089c2e0  895c242c             mov dword ptr [esp + 0x2c], ebx
// 0089c2e4  bb01000000           mov ebx, 1
// 0089c2e9  8bc8                 mov ecx, eax
// 0089c2eb  895c2414             mov dword ptr [esp + 0x14], ebx
// 0089c2ef  ff15b026a400         call dword ptr [0xa426b0]
// 0089c2f5  84c0                 test al, al
// 0089c2f7  7553                 jne 0x89c34c
// 0089c2f9  8d4c241c             lea ecx, [esp + 0x1c]
// 0089c2fd  51                   push ecx
// 0089c2fe  8bce                 mov ecx, esi
// 0089c300  e8abf4ffff           call 0x89b7b0
// 0089c305  8bf8                 mov edi, eax
// 0089c307  8d542418             lea edx, [esp + 0x18]
// 0089c30b  52                   push edx
// 0089c30c  8bce                 mov ecx, esi
// 0089c30e  895c2430             mov dword ptr [esp + 0x30], ebx
// 0089c312  c744241803000000     mov dword ptr [esp + 0x18], 3
// 0089c31a  e841f8ffff           call 0x89bb60
// 0089c31f  8be8                 mov ebp, eax
// 0089c321  bb07000000           mov ebx, 7
// 0089c326  8bcf                 mov ecx, edi
// 0089c328  c744242c02000000     mov dword ptr [esp + 0x2c], 2
// 0089c330  895c2414             mov dword ptr [esp + 0x14], ebx
// 0089c334  ff15c82da400         call dword ptr [0xa42dc8]
// 0089c33a  50                   push eax
// 0089c33b  8bcd                 mov ecx, ebp
// 0089c33d  ff15cc2da400         call dword ptr [0xa42dcc]
// 0089c343  c644243401           mov byte ptr [esp + 0x34], 1
// 0089c348  85c0                 test eax, eax
// 0089c34a  7405                 je 0x89c351
// 0089c34c  c644243400           mov byte ptr [esp + 0x34], 0
// 0089c351  f6c304               test bl, 4
// 0089c354  740d                 je 0x89c363
// 0089c356  8d4c2418             lea ecx, [esp + 0x18]
// 0089c35a  83e3fb               and ebx, 0xfffffffb
// 0089c35d  ff15082ea400         call dword ptr [0xa42e08]
// 0089c363  f6c302               test bl, 2
// 0089c366  740d                 je 0x89c375
// 0089c368  8d4c241c             lea ecx, [esp + 0x1c]
// 0089c36c  83e3fd               and ebx, 0xfffffffd
// 0089c36f  ff15082ea400         call dword ptr [0xa42e08]
// 0089c375  c744242cffffffff     mov dword ptr [esp + 0x2c], 0xffffffff
// 0089c37d  f6c301               test bl, 1
// 0089c380  740a                 je 0x89c38c
// 0089c382  8d4c2420             lea ecx, [esp + 0x20]
// 0089c386  ff15082ea400         call dword ptr [0xa42e08]
// 0089c38c  807c243400           cmp byte ptr [esp + 0x34], 0
// 0089c391  742d                 je 0x89c3c0
// 0089c393  68cabea500           push 0xa5beca
// 0089c398  8d4c2438             lea ecx, [esp + 0x38]
// 0089c39c  ff15002ea400         call dword ptr [0xa42e00]
// 0089c3a2  8d442434             lea eax, [esp + 0x34]
// 0089c3a6  50                   push eax
// 0089c3a7  8bce                 mov ecx, esi
// 0089c3a9  c744243003000000     mov dword ptr [esp + 0x30], 3
// 0089c3b1  e80af8ffff           call 0x89bbc0
// 0089c3b6  8d4c2434             lea ecx, [esp + 0x34]
// 0089c3ba  ff15082ea400         call dword ptr [0xa42e08]
// 0089c3c0  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0089c3c4  64890d00000000       mov dword ptr fs:[0], ecx
// 0089c3cb  59                   pop ecx
// 0089c3cc  5f                   pop edi
// 0089c3cd  5e                   pop esi
// 0089c3ce  5d                   pop ebp
// 0089c3cf  5b                   pop ebx
// 0089c3d0  83c41c               add esp, 0x1c
// 0089c3d3  c20400               ret 4
// copied from an identical function in another client (function ?OnActionChanging@CXTPControlComboBox@@UAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\CommandBars\XTPControlComboBox.cpp