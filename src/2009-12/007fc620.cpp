// roc 2009-12 007fc620  unit: CPatchedControlComboBox  size: 371 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007fc620
//
// 007fc620  6aff                 push -1
// 007fc622  68f38e9500           push 0x958ef3
// 007fc627  64a100000000         mov eax, dword ptr fs:[0]
// 007fc62d  50                   push eax
// 007fc62e  83ec0c               sub esp, 0xc
// 007fc631  53                   push ebx
// 007fc632  56                   push esi
// 007fc633  a10052b600           mov eax, dword ptr [0xb65200]
// 007fc638  33c4                 xor eax, esp
// 007fc63a  50                   push eax
// 007fc63b  8d442418             lea eax, [esp + 0x18]
// 007fc63f  64a300000000         mov dword ptr fs:[0], eax
// 007fc645  8bf1                 mov esi, ecx
// 007fc647  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 007fc64f  8b442428             mov eax, dword ptr [esp + 0x28]
// 007fc653  83f802               cmp eax, 2
// 007fc656  7519                 jne 0x7fc671
// 007fc658  e853e1ffff           call 0x7fa7b0
// 007fc65d  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007fc661  64890d00000000       mov dword ptr fs:[0], ecx
// 007fc668  59                   pop ecx
// 007fc669  5e                   pop esi
// 007fc66a  5b                   pop ebx
// 007fc66b  83c418               add esp, 0x18
// 007fc66e  c20400               ret 4
// 007fc671  85c0                 test eax, eax
// 007fc673  755d                 jne 0x7fc6d2
// 007fc675  8b8684010000         mov eax, dword ptr [esi + 0x184]
// 007fc67b  85c0                 test eax, eax
// 007fc67d  0f84fc000000         je 0x7fc77f
// 007fc683  83782000             cmp dword ptr [eax + 0x20], 0
// 007fc687  0f84f2000000         je 0x7fc77f
// 007fc68d  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 007fc693  83f8ff               cmp eax, -1
// 007fc696  750f                 jne 0x7fc6a7
// 007fc698  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 007fc69e  85c9                 test ecx, ecx
// 007fc6a0  7405                 je 0x7fc6a7
// 007fc6a2  e8099fffff           call 0x7f65b0
// 007fc6a7  8b8e84010000         mov ecx, dword ptr [esi + 0x184]
// 007fc6ad  50                   push eax
// 007fc6ae  e82b78ffff           call 0x7f3ede
// 007fc6b3  8b8e84010000         mov ecx, dword ptr [esi + 0x184]
// 007fc6b9  e862edffff           call 0x7fb420
// 007fc6be  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007fc6c2  64890d00000000       mov dword ptr fs:[0], ecx
// 007fc6c9  59                   pop ecx
// 007fc6ca  5e                   pop esi
// 007fc6cb  5b                   pop ebx
// 007fc6cc  83c418               add esp, 0x18
// 007fc6cf  c20400               ret 4
// 007fc6d2  83f804               cmp eax, 4
// 007fc6d5  0f85a4000000         jne 0x7fc77f
// 007fc6db  8d442414             lea eax, [esp + 0x14]
// 007fc6df  50                   push eax
// 007fc6e0  e81bdcffff           call 0x7fa300
// 007fc6e5  bb01000000           mov ebx, 1
// 007fc6ea  8bc8                 mov ecx, eax
// 007fc6ec  c744242000000000     mov dword ptr [esp + 0x20], 0
// 007fc6f4  895c240c             mov dword ptr [esp + 0xc], ebx
// 007fc6f8  ff15bcdd9800         call dword ptr [0x98ddbc]
// 007fc6fe  84c0                 test al, al
// 007fc700  7422                 je 0x7fc724
// 007fc702  8d4c2410             lea ecx, [esp + 0x10]
// 007fc706  51                   push ecx
// 007fc707  8bce                 mov ecx, esi
// 007fc709  e882ccffff           call 0x7f9390
// 007fc70e  8bc8                 mov ecx, eax
// 007fc710  bb03000000           mov ebx, 3
// 007fc715  ff15bcdd9800         call dword ptr [0x98ddbc]
// 007fc71b  c644242801           mov byte ptr [esp + 0x28], 1
// 007fc720  84c0                 test al, al
// 007fc722  7405                 je 0x7fc729
// 007fc724  c644242800           mov byte ptr [esp + 0x28], 0
// 007fc729  f6c302               test bl, 2
// 007fc72c  740d                 je 0x7fc73b
// 007fc72e  8d4c2410             lea ecx, [esp + 0x10]
// 007fc732  83e3fd               and ebx, 0xfffffffd
// 007fc735  ff15c0de9800         call dword ptr [0x98dec0]
// 007fc73b  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 007fc743  f6c301               test bl, 1
// 007fc746  740a                 je 0x7fc752
// 007fc748  8d4c2414             lea ecx, [esp + 0x14]
// 007fc74c  ff15c0de9800         call dword ptr [0x98dec0]
// 007fc752  807c242800           cmp byte ptr [esp + 0x28], 0
// 007fc757  7426                 je 0x7fc77f
// 007fc759  8d542428             lea edx, [esp + 0x28]
// 007fc75d  52                   push edx
// 007fc75e  8bce                 mov ecx, esi
// 007fc760  e82bccffff           call 0x7f9390
// 007fc765  50                   push eax
// 007fc766  8bce                 mov ecx, esi
// 007fc768  c744242401000000     mov dword ptr [esp + 0x24], 1
// 007fc770  e8ebdbffff           call 0x7fa360
// 007fc775  8d4c2428             lea ecx, [esp + 0x28]
// 007fc779  ff15c0de9800         call dword ptr [0x98dec0]
// 007fc77f  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007fc783  64890d00000000       mov dword ptr fs:[0], ecx
// 007fc78a  59                   pop ecx
// 007fc78b  5e                   pop esi
// 007fc78c  5b                   pop ebx
// 007fc78d  83c418               add esp, 0x18
// 007fc790  c20400               ret 4
// copied from an identical function in another client (function ?OnActionChanged@CXTPControlComboBox@@UAEXH@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\CommandBars\XTPControlComboBox.cpp