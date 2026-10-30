// roc 2009-12 007fd380  unit: CPatchedControlComboBox  size: 307 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007fd380
//
// 007fd380  6aff                 push -1
// 007fd382  68430e9600           push 0x960e43
// 007fd387  64a100000000         mov eax, dword ptr fs:[0]
// 007fd38d  50                   push eax
// 007fd38e  83ec14               sub esp, 0x14
// 007fd391  53                   push ebx
// 007fd392  56                   push esi
// 007fd393  a10052b600           mov eax, dword ptr [0xb65200]
// 007fd398  33c4                 xor eax, esp
// 007fd39a  50                   push eax
// 007fd39b  8d442420             lea eax, [esp + 0x20]
// 007fd39f  64a300000000         mov dword ptr fs:[0], eax
// 007fd3a5  8bf1                 mov esi, ecx
// 007fd3a7  8d442418             lea eax, [esp + 0x18]
// 007fd3ab  50                   push eax
// 007fd3ac  c744241400000000     mov dword ptr [esp + 0x14], 0
// 007fd3b4  e8d7bfffff           call 0x7f9390
// 007fd3b9  bb01000000           mov ebx, 1
// 007fd3be  8bc8                 mov ecx, eax
// 007fd3c0  c744242800000000     mov dword ptr [esp + 0x28], 0
// 007fd3c8  895c2410             mov dword ptr [esp + 0x10], ebx
// 007fd3cc  ff15bcdd9800         call dword ptr [0x98ddbc]
// 007fd3d2  84c0                 test al, al
// 007fd3d4  7532                 jne 0x7fd408
// 007fd3d6  8b8684010000         mov eax, dword ptr [esi + 0x184]
// 007fd3dc  85c0                 test eax, eax
// 007fd3de  7428                 je 0x7fd408
// 007fd3e0  83782000             cmp dword ptr [eax + 0x20], 0
// 007fd3e4  7422                 je 0x7fd408
// 007fd3e6  8d4c2414             lea ecx, [esp + 0x14]
// 007fd3ea  51                   push ecx
// 007fd3eb  8bce                 mov ecx, esi
// 007fd3ed  e80ecfffff           call 0x7fa300
// 007fd3f2  8bc8                 mov ecx, eax
// 007fd3f4  bb03000000           mov ebx, 3
// 007fd3f9  ff15bcdd9800         call dword ptr [0x98ddbc]
// 007fd3ff  c644240f01           mov byte ptr [esp + 0xf], 1
// 007fd404  84c0                 test al, al
// 007fd406  7505                 jne 0x7fd40d
// 007fd408  c644240f00           mov byte ptr [esp + 0xf], 0
// 007fd40d  f6c302               test bl, 2
// 007fd410  740d                 je 0x7fd41f
// 007fd412  8d4c2414             lea ecx, [esp + 0x14]
// 007fd416  83e3fd               and ebx, 0xfffffffd
// 007fd419  ff15c0de9800         call dword ptr [0x98dec0]
// 007fd41f  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 007fd427  f6c301               test bl, 1
// 007fd42a  740a                 je 0x7fd436
// 007fd42c  8d4c2418             lea ecx, [esp + 0x18]
// 007fd430  ff15c0de9800         call dword ptr [0x98dec0]
// 007fd436  807c240f00           cmp byte ptr [esp + 0xf], 0
// 007fd43b  742e                 je 0x7fd46b
// 007fd43d  8d54241c             lea edx, [esp + 0x1c]
// 007fd441  52                   push edx
// 007fd442  8bce                 mov ecx, esi
// 007fd444  e847bfffff           call 0x7f9390
// 007fd449  50                   push eax
// 007fd44a  8bce                 mov ecx, esi
// 007fd44c  c744242c01000000     mov dword ptr [esp + 0x2c], 1
// 007fd454  e807cfffff           call 0x7fa360
// 007fd459  8d4c241c             lea ecx, [esp + 0x1c]
// 007fd45d  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 007fd465  ff15c0de9800         call dword ptr [0x98dec0]
// 007fd46b  8b06                 mov eax, dword ptr [esi]
// 007fd46d  8b5070               mov edx, dword ptr [eax + 0x70]
// 007fd470  6a00                 push 0
// 007fd472  8bce                 mov ecx, esi
// 007fd474  ffd2                 call edx
// 007fd476  8bce                 mov ecx, esi
// 007fd478  e853faf6ff           call 0x76ced0
// 007fd47d  85c0                 test eax, eax
// 007fd47f  740f                 je 0x7fd490
// 007fd481  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 007fd487  6a00                 push 0
// 007fd489  6aff                 push -1
// 007fd48b  e810910000           call 0x8065a0
// 007fd490  8b8ed0010000         mov ecx, dword ptr [esi + 0x1d0]
// 007fd496  85c9                 test ecx, ecx
// 007fd498  7407                 je 0x7fd4a1
// 007fd49a  6a00                 push 0
// 007fd49c  e8dff9ffff           call 0x7fce80
// 007fd4a1  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 007fd4a5  64890d00000000       mov dword ptr fs:[0], ecx
// 007fd4ac  59                   pop ecx
// 007fd4ad  5e                   pop esi
// 007fd4ae  5b                   pop ebx
// 007fd4af  83c420               add esp, 0x20
// 007fd4b2  c3                   ret 
// copied from an identical function in another client (function ?OnKillFocus@CXTPControlComboBox@@MAEXXZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\CommandBars\XTPControlComboBox.cpp