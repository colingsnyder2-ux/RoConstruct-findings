// roc 2009-12 007fa440  unit: CPatchedControlComboBox  size: 484 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007fa440
//
// 007fa440  6aff                 push -1
// 007fa442  685a8c9500           push 0x958c5a
// 007fa447  64a100000000         mov eax, dword ptr fs:[0]
// 007fa44d  50                   push eax
// 007fa44e  83ec14               sub esp, 0x14
// 007fa451  53                   push ebx
// 007fa452  55                   push ebp
// 007fa453  56                   push esi
// 007fa454  57                   push edi
// 007fa455  a10052b600           mov eax, dword ptr [0xb65200]
// 007fa45a  33c4                 xor eax, esp
// 007fa45c  50                   push eax
// 007fa45d  8d442428             lea eax, [esp + 0x28]
// 007fa461  64a300000000         mov dword ptr fs:[0], eax
// 007fa467  8bf1                 mov esi, ecx
// 007fa469  8d442424             lea eax, [esp + 0x24]
// 007fa46d  33ff                 xor edi, edi
// 007fa46f  50                   push eax
// 007fa470  897c241c             mov dword ptr [esp + 0x1c], edi
// 007fa474  e817efffff           call 0x7f9390
// 007fa479  bb01000000           mov ebx, 1
// 007fa47e  8bc8                 mov ecx, eax
// 007fa480  897c2430             mov dword ptr [esp + 0x30], edi
// 007fa484  895c2418             mov dword ptr [esp + 0x18], ebx
// 007fa488  ff15bcdd9800         call dword ptr [0x98ddbc]
// 007fa48e  84c0                 test al, al
// 007fa490  7553                 jne 0x7fa4e5
// 007fa492  8d4c2420             lea ecx, [esp + 0x20]
// 007fa496  51                   push ecx
// 007fa497  8bce                 mov ecx, esi
// 007fa499  e8f2eeffff           call 0x7f9390
// 007fa49e  8bf8                 mov edi, eax
// 007fa4a0  8d54241c             lea edx, [esp + 0x1c]
// 007fa4a4  52                   push edx
// 007fa4a5  8bce                 mov ecx, esi
// 007fa4a7  895c2434             mov dword ptr [esp + 0x34], ebx
// 007fa4ab  c744241c03000000     mov dword ptr [esp + 0x1c], 3
// 007fa4b3  e848feffff           call 0x7fa300
// 007fa4b8  8be8                 mov ebp, eax
// 007fa4ba  bb07000000           mov ebx, 7
// 007fa4bf  8bcf                 mov ecx, edi
// 007fa4c1  c744243002000000     mov dword ptr [esp + 0x30], 2
// 007fa4c9  895c2418             mov dword ptr [esp + 0x18], ebx
// 007fa4cd  ff1580de9800         call dword ptr [0x98de80]
// 007fa4d3  50                   push eax
// 007fa4d4  8bcd                 mov ecx, ebp
// 007fa4d6  ff1584de9800         call dword ptr [0x98de84]
// 007fa4dc  c644241701           mov byte ptr [esp + 0x17], 1
// 007fa4e1  85c0                 test eax, eax
// 007fa4e3  7405                 je 0x7fa4ea
// 007fa4e5  c644241700           mov byte ptr [esp + 0x17], 0
// 007fa4ea  f6c304               test bl, 4
// 007fa4ed  740d                 je 0x7fa4fc
// 007fa4ef  8d4c241c             lea ecx, [esp + 0x1c]
// 007fa4f3  83e3fb               and ebx, 0xfffffffb
// 007fa4f6  ff15c0de9800         call dword ptr [0x98dec0]
// 007fa4fc  f6c302               test bl, 2
// 007fa4ff  740d                 je 0x7fa50e
// 007fa501  8d4c2420             lea ecx, [esp + 0x20]
// 007fa505  83e3fd               and ebx, 0xfffffffd
// 007fa508  ff15c0de9800         call dword ptr [0x98dec0]
// 007fa50e  83cfff               or edi, 0xffffffff
// 007fa511  897c2430             mov dword ptr [esp + 0x30], edi
// 007fa515  f6c301               test bl, 1
// 007fa518  740d                 je 0x7fa527
// 007fa51a  8d4c2424             lea ecx, [esp + 0x24]
// 007fa51e  83e3fe               and ebx, 0xfffffffe
// 007fa521  ff15c0de9800         call dword ptr [0x98dec0]
// 007fa527  807c241700           cmp byte ptr [esp + 0x17], 0
// 007fa52c  7431                 je 0x7fa55f
// 007fa52e  6856fd9900           push 0x99fd56
// 007fa533  8d4c241c             lea ecx, [esp + 0x1c]
// 007fa537  ff15b8de9800         call dword ptr [0x98deb8]
// 007fa53d  8d442418             lea eax, [esp + 0x18]
// 007fa541  50                   push eax
// 007fa542  8bce                 mov ecx, esi
// 007fa544  c744243403000000     mov dword ptr [esp + 0x34], 3
// 007fa54c  e80ffeffff           call 0x7fa360
// 007fa551  8d4c2418             lea ecx, [esp + 0x18]
// 007fa555  897c2430             mov dword ptr [esp + 0x30], edi
// 007fa559  ff15c0de9800         call dword ptr [0x98dec0]
// 007fa55f  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 007fa563  51                   push ecx
// 007fa564  8d8ea8010000         lea ecx, [esi + 0x1a8]
// 007fa56a  ff155cde9800         call dword ptr [0x98de5c]
// 007fa570  8d542420             lea edx, [esp + 0x20]
// 007fa574  52                   push edx
// 007fa575  8bce                 mov ecx, esi
// 007fa577  e884fdffff           call 0x7fa300
// 007fa57c  83cb08               or ebx, 8
// 007fa57f  8bc8                 mov ecx, eax
// 007fa581  c744243004000000     mov dword ptr [esp + 0x30], 4
// 007fa589  895c2418             mov dword ptr [esp + 0x18], ebx
// 007fa58d  ff15bcdd9800         call dword ptr [0x98ddbc]
// 007fa593  84c0                 test al, al
// 007fa595  7420                 je 0x7fa5b7
// 007fa597  8d442424             lea eax, [esp + 0x24]
// 007fa59b  50                   push eax
// 007fa59c  8bce                 mov ecx, esi
// 007fa59e  e8ededffff           call 0x7f9390
// 007fa5a3  8bc8                 mov ecx, eax
// 007fa5a5  83cb10               or ebx, 0x10
// 007fa5a8  ff15bcdd9800         call dword ptr [0x98ddbc]
// 007fa5ae  c644243801           mov byte ptr [esp + 0x38], 1
// 007fa5b3  84c0                 test al, al
// 007fa5b5  7405                 je 0x7fa5bc
// 007fa5b7  c644243800           mov byte ptr [esp + 0x38], 0
// 007fa5bc  f6c310               test bl, 0x10
// 007fa5bf  740d                 je 0x7fa5ce
// 007fa5c1  8d4c2424             lea ecx, [esp + 0x24]
// 007fa5c5  83e3ef               and ebx, 0xffffffef
// 007fa5c8  ff15c0de9800         call dword ptr [0x98dec0]
// 007fa5ce  897c2430             mov dword ptr [esp + 0x30], edi
// 007fa5d2  f6c308               test bl, 8
// 007fa5d5  740a                 je 0x7fa5e1
// 007fa5d7  8d4c2420             lea ecx, [esp + 0x20]
// 007fa5db  ff15c0de9800         call dword ptr [0x98dec0]
// 007fa5e1  807c243800           cmp byte ptr [esp + 0x38], 0
// 007fa5e6  7426                 je 0x7fa60e
// 007fa5e8  8d4c2438             lea ecx, [esp + 0x38]
// 007fa5ec  51                   push ecx
// 007fa5ed  8bce                 mov ecx, esi
// 007fa5ef  e89cedffff           call 0x7f9390
// 007fa5f4  50                   push eax
// 007fa5f5  8bce                 mov ecx, esi
// 007fa5f7  c744243405000000     mov dword ptr [esp + 0x34], 5
// 007fa5ff  e85cfdffff           call 0x7fa360
// 007fa604  8d4c2438             lea ecx, [esp + 0x38]
// 007fa608  ff15c0de9800         call dword ptr [0x98dec0]
// 007fa60e  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 007fa612  64890d00000000       mov dword ptr fs:[0], ecx
// 007fa619  59                   pop ecx
// 007fa61a  5f                   pop edi
// 007fa61b  5e                   pop esi
// 007fa61c  5d                   pop ebp
// 007fa61d  5b                   pop ebx
// 007fa61e  83c420               add esp, 0x20
// 007fa621  c20400               ret 4
// copied from an identical function in another client (function ?SetEditHint@CXTPControlComboBox@@QAEXPBD@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\CommandBars\XTPControlComboBox.cpp