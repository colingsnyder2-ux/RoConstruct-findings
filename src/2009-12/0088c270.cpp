// roc 2009-12 0088c270  unit: CXTPCustomizeSheet::CCustomizeEdit  size: 377 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0088c270
//
// 0088c270  6aff                 push -1
// 0088c272  684e8d9500           push 0x958d4e
// 0088c277  64a100000000         mov eax, dword ptr fs:[0]
// 0088c27d  50                   push eax
// 0088c27e  83ec18               sub esp, 0x18
// 0088c281  53                   push ebx
// 0088c282  55                   push ebp
// 0088c283  56                   push esi
// 0088c284  57                   push edi
// 0088c285  a10052b600           mov eax, dword ptr [0xb65200]
// 0088c28a  33c4                 xor eax, esp
// 0088c28c  50                   push eax
// 0088c28d  8d44242c             lea eax, [esp + 0x2c]
// 0088c291  64a300000000         mov dword ptr fs:[0], eax
// 0088c297  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 0088c29b  33db                 xor ebx, ebx
// 0088c29d  6a54                 push 0x54
// 0088c29f  53                   push ebx
// 0088c2a0  57                   push edi
// 0088c2a1  8bf1                 mov esi, ecx
// 0088c2a3  895c2424             mov dword ptr [esp + 0x24], ebx
// 0088c2a7  e8f887f6ff           call 0x7f4aa4
// 0088c2ac  c7470400000044       mov dword ptr [edi + 4], 0x44000000
// 0088c2b3  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 0088c2b9  83c40c               add esp, 0xc
// 0088c2bc  83f8ff               cmp eax, -1
// 0088c2bf  750f                 jne 0x88c2d0
// 0088c2c1  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 0088c2c7  3bcb                 cmp ecx, ebx
// 0088c2c9  7405                 je 0x88c2d0
// 0088c2cb  e8e0a2f6ff           call 0x7f65b0
// 0088c2d0  3bc3                 cmp eax, ebx
// 0088c2d2  0f84d4000000         je 0x88c3ac
// 0088c2d8  e8f336faff           call 0x82f9d0
// 0088c2dd  6a08                 push 8
// 0088c2df  8bc8                 mov ecx, eax
// 0088c2e1  e81a2efaff           call 0x82f100
// 0088c2e6  894714               mov dword ptr [edi + 0x14], eax
// 0088c2e9  8d442428             lea eax, [esp + 0x28]
// 0088c2ed  50                   push eax
// 0088c2ee  8bce                 mov ecx, esi
// 0088c2f0  e84befffff           call 0x88b240
// 0088c2f5  895c2434             mov dword ptr [esp + 0x34], ebx
// 0088c2f9  bb01000000           mov ebx, 1
// 0088c2fe  8bc8                 mov ecx, eax
// 0088c300  895c2418             mov dword ptr [esp + 0x18], ebx
// 0088c304  ff15bcdd9800         call dword ptr [0x98ddbc]
// 0088c30a  84c0                 test al, al
// 0088c30c  7557                 jne 0x88c365
// 0088c30e  8d4c2420             lea ecx, [esp + 0x20]
// 0088c312  51                   push ecx
// 0088c313  8bce                 mov ecx, esi
// 0088c315  e806f2ffff           call 0x88b520
// 0088c31a  8be8                 mov ebp, eax
// 0088c31c  8d542424             lea edx, [esp + 0x24]
// 0088c320  52                   push edx
// 0088c321  8bce                 mov ecx, esi
// 0088c323  895c2438             mov dword ptr [esp + 0x38], ebx
// 0088c327  c744241c03000000     mov dword ptr [esp + 0x1c], 3
// 0088c32f  e80cefffff           call 0x88b240
// 0088c334  8944241c             mov dword ptr [esp + 0x1c], eax
// 0088c338  bb07000000           mov ebx, 7
// 0088c33d  8bcd                 mov ecx, ebp
// 0088c33f  c744243402000000     mov dword ptr [esp + 0x34], 2
// 0088c347  895c2418             mov dword ptr [esp + 0x18], ebx
// 0088c34b  ff1580de9800         call dword ptr [0x98de80]
// 0088c351  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0088c355  50                   push eax
// 0088c356  ff1584de9800         call dword ptr [0x98de84]
// 0088c35c  c644241701           mov byte ptr [esp + 0x17], 1
// 0088c361  85c0                 test eax, eax
// 0088c363  7405                 je 0x88c36a
// 0088c365  c644241700           mov byte ptr [esp + 0x17], 0
// 0088c36a  f6c304               test bl, 4
// 0088c36d  740d                 je 0x88c37c
// 0088c36f  8d4c2424             lea ecx, [esp + 0x24]
// 0088c373  83e3fb               and ebx, 0xfffffffb
// 0088c376  ff15c0de9800         call dword ptr [0x98dec0]
// 0088c37c  f6c302               test bl, 2
// 0088c37f  740d                 je 0x88c38e
// 0088c381  8d4c2420             lea ecx, [esp + 0x20]
// 0088c385  83e3fd               and ebx, 0xfffffffd
// 0088c388  ff15c0de9800         call dword ptr [0x98dec0]
// 0088c38e  c7442434ffffffff     mov dword ptr [esp + 0x34], 0xffffffff
// 0088c396  f6c301               test bl, 1
// 0088c399  740a                 je 0x88c3a5
// 0088c39b  8d4c2428             lea ecx, [esp + 0x28]
// 0088c39f  ff15c0de9800         call dword ptr [0x98dec0]
// 0088c3a5  807c241700           cmp byte ptr [esp + 0x17], 0
// 0088c3aa  7411                 je 0x88c3bd
// 0088c3ac  e81f36faff           call 0x82f9d0
// 0088c3b1  6a11                 push 0x11
// 0088c3b3  8bc8                 mov ecx, eax
// 0088c3b5  e8462dfaff           call 0x82f100
// 0088c3ba  894714               mov dword ptr [edi + 0x14], eax
// 0088c3bd  8bce                 mov ecx, esi
// 0088c3bf  e87c9bf6ff           call 0x7f5f40
// 0088c3c4  8b10                 mov edx, dword ptr [eax]
// 0088c3c6  8bc8                 mov ecx, eax
// 0088c3c8  8b4268               mov eax, dword ptr [edx + 0x68]
// 0088c3cb  56                   push esi
// 0088c3cc  ffd0                 call eax
// 0088c3ce  894740               mov dword ptr [edi + 0x40], eax
// 0088c3d1  8bc7                 mov eax, edi
// 0088c3d3  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0088c3d7  64890d00000000       mov dword ptr fs:[0], ecx
// 0088c3de  59                   pop ecx
// 0088c3df  5f                   pop edi
// 0088c3e0  5e                   pop esi
// 0088c3e1  5d                   pop ebp
// 0088c3e2  5b                   pop ebx
// 0088c3e3  83c424               add esp, 0x24
// 0088c3e6  c20400               ret 4
// copied from an identical function in another client (function ?GetDefaultCharFormat@CXTPControlComboBox@@UAE?AUCHARFORMAT2A@@XZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\CommandBars\XTPControlComboBox.cpp