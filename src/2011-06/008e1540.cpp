// roc 2011-06 008e1540  unit: CXTPPropertyGridPaintManager  size: 367 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008e1540
//
// 008e1540  53                   push ebx
// 008e1541  55                   push ebp
// 008e1542  56                   push esi
// 008e1543  8bd9                 mov ebx, ecx
// 008e1545  8b4b60               mov ecx, dword ptr [ebx + 0x60]
// 008e1548  57                   push edi
// 008e1549  e8327ef8ff           call 0x869380
// 008e154e  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 008e1552  8b742418             mov esi, dword ptr [esp + 0x18]
// 008e1556  8be8                 mov ebp, eax
// 008e1558  85ff                 test edi, edi
// 008e155a  0f84f7000000         je 0x8e1657
// 008e1560  83e801               sub eax, 1
// 008e1563  0f84b4000000         je 0x8e161d
// 008e1569  83e801               sub eax, 1
// 008e156c  747d                 je 0x8e15eb
// 008e156e  83e801               sub eax, 1
// 008e1571  0f85e0000000         jne 0x8e1657
// 008e1577  e8643ef6ff           call 0x8453e0
// 008e157c  6a14                 push 0x14
// 008e157e  8bc8                 mov ecx, eax
// 008e1580  e82b36f6ff           call 0x844bb0
// 008e1585  8bd8                 mov ebx, eax
// 008e1587  e8543ef6ff           call 0x8453e0
// 008e158c  6a10                 push 0x10
// 008e158e  8bc8                 mov ecx, eax
// 008e1590  e81b36f6ff           call 0x844bb0
// 008e1595  8b4e04               mov ecx, dword ptr [esi + 4]
// 008e1598  8b16                 mov edx, dword ptr [esi]
// 008e159a  53                   push ebx
// 008e159b  50                   push eax
// 008e159c  8b460c               mov eax, dword ptr [esi + 0xc]
// 008e159f  2bc1                 sub eax, ecx
// 008e15a1  50                   push eax
// 008e15a2  8b4608               mov eax, dword ptr [esi + 8]
// 008e15a5  2bc2                 sub eax, edx
// 008e15a7  50                   push eax
// 008e15a8  51                   push ecx
// 008e15a9  52                   push edx
// 008e15aa  8bcf                 mov ecx, edi
// 008e15ac  e84bb70e00           call 0x9cccfc
// 008e15b1  e82a3ef6ff           call 0x8453e0
// 008e15b6  6a0f                 push 0xf
// 008e15b8  8bc8                 mov ecx, eax
// 008e15ba  e8f135f6ff           call 0x844bb0
// 008e15bf  8bd8                 mov ebx, eax
// 008e15c1  e81a3ef6ff           call 0x8453e0
// 008e15c6  6a15                 push 0x15
// 008e15c8  8bc8                 mov ecx, eax
// 008e15ca  e8e135f6ff           call 0x844bb0
// 008e15cf  8b4e04               mov ecx, dword ptr [esi + 4]
// 008e15d2  8b16                 mov edx, dword ptr [esi]
// 008e15d4  53                   push ebx
// 008e15d5  50                   push eax
// 008e15d6  8b460c               mov eax, dword ptr [esi + 0xc]
// 008e15d9  2bc1                 sub eax, ecx
// 008e15db  83e802               sub eax, 2
// 008e15de  50                   push eax
// 008e15df  8b4608               mov eax, dword ptr [esi + 8]
// 008e15e2  2bc2                 sub eax, edx
// 008e15e4  83e802               sub eax, 2
// 008e15e7  41                   inc ecx
// 008e15e8  42                   inc edx
// 008e15e9  eb62                 jmp 0x8e164d
// 008e15eb  8b4344               mov eax, dword ptr [ebx + 0x44]
// 008e15ee  83f8ff               cmp eax, -1
// 008e15f1  7505                 jne 0x8e15f8
// 008e15f3  8b5340               mov edx, dword ptr [ebx + 0x40]
// 008e15f6  eb02                 jmp 0x8e15fa
// 008e15f8  8bd0                 mov edx, eax
// 008e15fa  83f8ff               cmp eax, -1
// 008e15fd  7505                 jne 0x8e1604
// 008e15ff  8b5b40               mov ebx, dword ptr [ebx + 0x40]
// 008e1602  eb02                 jmp 0x8e1606
// 008e1604  8bd8                 mov ebx, eax
// 008e1606  8b4604               mov eax, dword ptr [esi + 4]
// 008e1609  8b0e                 mov ecx, dword ptr [esi]
// 008e160b  52                   push edx
// 008e160c  8b560c               mov edx, dword ptr [esi + 0xc]
// 008e160f  53                   push ebx
// 008e1610  2bd0                 sub edx, eax
// 008e1612  52                   push edx
// 008e1613  8b5608               mov edx, dword ptr [esi + 8]
// 008e1616  2bd1                 sub edx, ecx
// 008e1618  52                   push edx
// 008e1619  50                   push eax
// 008e161a  51                   push ecx
// 008e161b  eb33                 jmp 0x8e1650
// 008e161d  e8be3df6ff           call 0x8453e0
// 008e1622  6a06                 push 6
// 008e1624  8bc8                 mov ecx, eax
// 008e1626  e88535f6ff           call 0x844bb0
// 008e162b  8bd8                 mov ebx, eax
// 008e162d  e8ae3df6ff           call 0x8453e0
// 008e1632  6a06                 push 6
// 008e1634  8bc8                 mov ecx, eax
// 008e1636  e87535f6ff           call 0x844bb0
// 008e163b  8b4e04               mov ecx, dword ptr [esi + 4]
// 008e163e  8b16                 mov edx, dword ptr [esi]
// 008e1640  53                   push ebx
// 008e1641  50                   push eax
// 008e1642  8b460c               mov eax, dword ptr [esi + 0xc]
// 008e1645  2bc1                 sub eax, ecx
// 008e1647  50                   push eax
// 008e1648  8b4608               mov eax, dword ptr [esi + 8]
// 008e164b  2bc2                 sub eax, edx
// 008e164d  50                   push eax
// 008e164e  51                   push ecx
// 008e164f  52                   push edx
// 008e1650  8bcf                 mov ecx, edi
// 008e1652  e8a5b60e00           call 0x9cccfc
// 008e1657  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 008e165c  744a                 je 0x8e16a8
// 008e165e  83fd03               cmp ebp, 3
// 008e1661  7517                 jne 0x8e167a
// 008e1663  b802000000           mov eax, 2
// 008e1668  0106                 add dword ptr [esi], eax
// 008e166a  014604               add dword ptr [esi + 4], eax
// 008e166d  294608               sub dword ptr [esi + 8], eax
// 008e1670  29460c               sub dword ptr [esi + 0xc], eax
// 008e1673  5f                   pop edi
// 008e1674  5e                   pop esi
// 008e1675  5d                   pop ebp
// 008e1676  5b                   pop ebx
// 008e1677  c20c00               ret 0xc
// 008e167a  83fd02               cmp ebp, 2
// 008e167d  7419                 je 0x8e1698
// 008e167f  83fd01               cmp ebp, 1
// 008e1682  7414                 je 0x8e1698
// 008e1684  33c0                 xor eax, eax
// 008e1686  0106                 add dword ptr [esi], eax
// 008e1688  014604               add dword ptr [esi + 4], eax
// 008e168b  294608               sub dword ptr [esi + 8], eax
// 008e168e  29460c               sub dword ptr [esi + 0xc], eax
// 008e1691  5f                   pop edi
// 008e1692  5e                   pop esi
// 008e1693  5d                   pop ebp
// 008e1694  5b                   pop ebx
// 008e1695  c20c00               ret 0xc
// 008e1698  b801000000           mov eax, 1
// 008e169d  0106                 add dword ptr [esi], eax
// 008e169f  014604               add dword ptr [esi + 4], eax
// 008e16a2  294608               sub dword ptr [esi + 8], eax
// 008e16a5  29460c               sub dword ptr [esi + 0xc], eax
// 008e16a8  5f                   pop edi
// 008e16a9  5e                   pop esi
// 008e16aa  5d                   pop ebp
// 008e16ab  5b                   pop ebx
// 008e16ac  c20c00               ret 0xc
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridPaintManager.cpp (function ?DrawPropertyGridBorder@CXTPPropertyGridPaintManager@@UAEXPAVCDC@@AAUtagRECT@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridPaintManager.cpp
