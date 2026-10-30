// roc 2009-12 007fa360  unit: CPatchedControlComboBox  size: 216 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007fa360
//
// 007fa360  6aff                 push -1
// 007fa362  68ba8b9500           push 0x958bba
// 007fa367  64a100000000         mov eax, dword ptr fs:[0]
// 007fa36d  50                   push eax
// 007fa36e  83ec08               sub esp, 8
// 007fa371  53                   push ebx
// 007fa372  55                   push ebp
// 007fa373  56                   push esi
// 007fa374  57                   push edi
// 007fa375  a10052b600           mov eax, dword ptr [0xb65200]
// 007fa37a  33c4                 xor eax, esp
// 007fa37c  50                   push eax
// 007fa37d  8d44241c             lea eax, [esp + 0x1c]
// 007fa381  64a300000000         mov dword ptr fs:[0], eax
// 007fa387  8bf1                 mov esi, ecx
// 007fa389  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 007fa38d  33db                 xor ebx, ebx
// 007fa38f  895c2414             mov dword ptr [esp + 0x14], ebx
// 007fa393  8b8684010000         mov eax, dword ptr [esi + 0x184]
// 007fa399  85c0                 test eax, eax
// 007fa39b  7437                 je 0x7fa3d4
// 007fa39d  395820               cmp dword ptr [eax + 0x20], ebx
// 007fa3a0  7432                 je 0x7fa3d4
// 007fa3a2  8d442418             lea eax, [esp + 0x18]
// 007fa3a6  50                   push eax
// 007fa3a7  e854ffffff           call 0x7fa300
// 007fa3ac  8bf8                 mov edi, eax
// 007fa3ae  895c2424             mov dword ptr [esp + 0x24], ebx
// 007fa3b2  bb01000000           mov ebx, 1
// 007fa3b7  8bcd                 mov ecx, ebp
// 007fa3b9  895c2414             mov dword ptr [esp + 0x14], ebx
// 007fa3bd  ff1580de9800         call dword ptr [0x98de80]
// 007fa3c3  50                   push eax
// 007fa3c4  8bcf                 mov ecx, edi
// 007fa3c6  ff1584de9800         call dword ptr [0x98de84]
// 007fa3cc  885c242c             mov byte ptr [esp + 0x2c], bl
// 007fa3d0  85c0                 test eax, eax
// 007fa3d2  7505                 jne 0x7fa3d9
// 007fa3d4  c644242c00           mov byte ptr [esp + 0x2c], 0
// 007fa3d9  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 007fa3e1  f6c301               test bl, 1
// 007fa3e4  740a                 je 0x7fa3f0
// 007fa3e6  8d4c2418             lea ecx, [esp + 0x18]
// 007fa3ea  ff15c0de9800         call dword ptr [0x98dec0]
// 007fa3f0  807c242c00           cmp byte ptr [esp + 0x2c], 0
// 007fa3f5  7414                 je 0x7fa40b
// 007fa3f7  8bcd                 mov ecx, ebp
// 007fa3f9  ff1580de9800         call dword ptr [0x98de80]
// 007fa3ff  8b8e84010000         mov ecx, dword ptr [esi + 0x184]
// 007fa405  50                   push eax
// 007fa406  e895ebffff           call 0x7f8fa0
// 007fa40b  55                   push ebp
// 007fa40c  8d8ec8010000         lea ecx, [esi + 0x1c8]
// 007fa412  ff1538d59800         call dword ptr [0x98d538]
// 007fa418  c786cc01000000000000 mov dword ptr [esi + 0x1cc], 0
// 007fa422  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 007fa426  64890d00000000       mov dword ptr fs:[0], ecx
// 007fa42d  59                   pop ecx
// 007fa42e  5f                   pop edi
// 007fa42f  5e                   pop esi
// 007fa430  5d                   pop ebp
// 007fa431  5b                   pop ebx
// 007fa432  83c414               add esp, 0x14
// 007fa435  c20400               ret 4
// copied from an identical function in another client (function ?_SetEditText@CXTPControlComboBox@@IAEXABV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\CommandBars\XTPControlComboBox.cpp