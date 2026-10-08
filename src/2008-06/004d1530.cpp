// roc 2008-06 004d1530  unit: RBX::Network::PhysicsSender  size: 330 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004d1530
//
// 004d1530  83ec0c               sub esp, 0xc
// 004d1533  53                   push ebx
// 004d1534  56                   push esi
// 004d1535  8bf1                 mov esi, ecx
// 004d1537  837e0400             cmp dword ptr [esi + 4], 0
// 004d153b  57                   push edi
// 004d153c  68a0ef4c00           push 0x4cefa0
// 004d1541  754c                 jne 0x4d158f
// 004d1543  8b442420             mov eax, dword ptr [esp + 0x20]
// 004d1547  8bf8                 mov edi, eax
// 004d1549  8bd8                 mov ebx, eax
// 004d154b  8d442413             lea eax, [esp + 0x13]
// 004d154f  50                   push eax
// 004d1550  8d4c2424             lea ecx, [esp + 0x24]
// 004d1554  51                   push ecx
// 004d1555  8bce                 mov ecx, esi
// 004d1557  e814e5ffff           call 0x4cfa70
// 004d155c  807c240f00           cmp byte ptr [esp + 0xf], 0
// 004d1561  0f850a010000         jne 0x4d1671
// 004d1567  8bce                 mov ecx, esi
// 004d1569  3b4604               cmp eax, dword ptr [esi + 4]
// 004d156c  7210                 jb 0x4d157e
// 004d156e  53                   push ebx
// 004d156f  57                   push edi
// 004d1570  e84be7ffff           call 0x4cfcc0
// 004d1575  5f                   pop edi
// 004d1576  5e                   pop esi
// 004d1577  5b                   pop ebx
// 004d1578  83c40c               add esp, 0xc
// 004d157b  c20400               ret 4
// 004d157e  50                   push eax
// 004d157f  53                   push ebx
// 004d1580  57                   push edi
// 004d1581  e84ae8ffff           call 0x4cfdd0
// 004d1586  5f                   pop edi
// 004d1587  5e                   pop esi
// 004d1588  5b                   pop ebx
// 004d1589  83c40c               add esp, 0xc
// 004d158c  c20400               ret 4
// 004d158f  8d542413             lea edx, [esp + 0x13]
// 004d1593  52                   push edx
// 004d1594  8d442424             lea eax, [esp + 0x24]
// 004d1598  50                   push eax
// 004d1599  e8d2e4ffff           call 0x4cfa70
// 004d159e  8b0e                 mov ecx, dword ptr [esi]
// 004d15a0  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 004d15a4  3b4604               cmp eax, dword ptr [esi + 4]
// 004d15a7  7545                 jne 0x4d15ee
// 004d15a9  8d44c1fc             lea eax, [ecx + eax*8 - 4]
// 004d15ad  8b08                 mov ecx, dword ptr [eax]
// 004d15af  41                   inc ecx
// 004d15b0  3bd1                 cmp edx, ecx
// 004d15b2  750b                 jne 0x4d15bf
// 004d15b4  ff00                 inc dword ptr [eax]
// 004d15b6  5f                   pop edi
// 004d15b7  5e                   pop esi
// 004d15b8  5b                   pop ebx
// 004d15b9  83c40c               add esp, 0xc
// 004d15bc  c20400               ret 4
// 004d15bf  0f86ac000000         jbe 0x4d1671
// 004d15c5  68a0ef4c00           push 0x4cefa0
// 004d15ca  89542414             mov dword ptr [esp + 0x14], edx
// 004d15ce  89542418             mov dword ptr [esp + 0x18], edx
// 004d15d2  6a01                 push 1
// 004d15d4  8d542418             lea edx, [esp + 0x18]
// 004d15d8  52                   push edx
// 004d15d9  8d442428             lea eax, [esp + 0x28]
// 004d15dd  50                   push eax
// 004d15de  8bce                 mov ecx, esi
// 004d15e0  e8abf5ffff           call 0x4d0b90
// 004d15e5  5f                   pop edi
// 004d15e6  5e                   pop esi
// 004d15e7  5b                   pop ebx
// 004d15e8  83c40c               add esp, 0xc
// 004d15eb  c20400               ret 4
// 004d15ee  8b1cc1               mov ebx, dword ptr [ecx + eax*8]
// 004d15f1  8d0cc1               lea ecx, [ecx + eax*8]
// 004d15f4  8d7bff               lea edi, [ebx - 1]
// 004d15f7  3bd7                 cmp edx, edi
// 004d15f9  7313                 jae 0x4d160e
// 004d15fb  50                   push eax
// 004d15fc  52                   push edx
// 004d15fd  52                   push edx
// 004d15fe  8bce                 mov ecx, esi
// 004d1600  e8cbe7ffff           call 0x4cfdd0
// 004d1605  5f                   pop edi
// 004d1606  5e                   pop esi
// 004d1607  5b                   pop ebx
// 004d1608  83c40c               add esp, 0xc
// 004d160b  c20400               ret 4
// 004d160e  752a                 jne 0x4d163a
// 004d1610  ff09                 dec dword ptr [ecx]
// 004d1612  85c0                 test eax, eax
// 004d1614  765b                 jbe 0x4d1671
// 004d1616  8b16                 mov edx, dword ptr [esi]
// 004d1618  8d0cc2               lea ecx, [edx + eax*8]
// 004d161b  8b51fc               mov edx, dword ptr [ecx - 4]
// 004d161e  42                   inc edx
// 004d161f  3b11                 cmp edx, dword ptr [ecx]
// 004d1621  754e                 jne 0x4d1671
// 004d1623  8b5104               mov edx, dword ptr [ecx + 4]
// 004d1626  8951fc               mov dword ptr [ecx - 4], edx
// 004d1629  50                   push eax
// 004d162a  8bce                 mov ecx, esi
// 004d162c  e8bff5ffff           call 0x4d0bf0
// 004d1631  5f                   pop edi
// 004d1632  5e                   pop esi
// 004d1633  5b                   pop ebx
// 004d1634  83c40c               add esp, 0xc
// 004d1637  c20400               ret 4
// 004d163a  3bd3                 cmp edx, ebx
// 004d163c  7205                 jb 0x4d1643
// 004d163e  3b5104               cmp edx, dword ptr [ecx + 4]
// 004d1641  762e                 jbe 0x4d1671
// 004d1643  8b7904               mov edi, dword ptr [ecx + 4]
// 004d1646  47                   inc edi
// 004d1647  3bd7                 cmp edx, edi
// 004d1649  7526                 jne 0x4d1671
// 004d164b  ff4104               inc dword ptr [ecx + 4]
// 004d164e  8b4e04               mov ecx, dword ptr [esi + 4]
// 004d1651  49                   dec ecx
// 004d1652  3bc1                 cmp eax, ecx
// 004d1654  731b                 jae 0x4d1671
// 004d1656  8b16                 mov edx, dword ptr [esi]
// 004d1658  8d0cc2               lea ecx, [edx + eax*8]
// 004d165b  8b5104               mov edx, dword ptr [ecx + 4]
// 004d165e  42                   inc edx
// 004d165f  395108               cmp dword ptr [ecx + 8], edx
// 004d1662  750d                 jne 0x4d1671
// 004d1664  8b11                 mov edx, dword ptr [ecx]
// 004d1666  895108               mov dword ptr [ecx + 8], edx
// 004d1669  50                   push eax
// 004d166a  8bce                 mov ecx, esi
// 004d166c  e87ff5ffff           call 0x4d0bf0
// 004d1671  5f                   pop edi
// 004d1672  5e                   pop esi
// 004d1673  5b                   pop ebx
// 004d1674  83c40c               add esp, 0xc
// 004d1677  c20400               ret 4
// library rbxgs-raknet/ReliabilityLayer.cpp (function ?Insert@?$RangeList@I@DataStructures@@QAEXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet ReliabilityLayer.cpp
