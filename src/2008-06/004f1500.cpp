// roc 2008-06 004f1500  unit: RBX::RenderBase::VMaterialBase::?$WeakReferenceCountedPointer  size: 528 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004f1500
//
// 004f1500  83ec14               sub esp, 0x14
// 004f1503  56                   push esi
// 004f1504  8bf1                 mov esi, ecx
// 004f1506  837e1c00             cmp dword ptr [esi + 0x1c], 0
// 004f150a  57                   push edi
// 004f150b  7521                 jne 0x4f152e
// 004f150d  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 004f1511  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 004f1514  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 004f1518  50                   push eax
// 004f1519  51                   push ecx
// 004f151a  6a01                 push 1
// 004f151c  57                   push edi
// 004f151d  8bce                 mov ecx, esi
// 004f151f  e89cf8ffff           call 0x4f0dc0
// 004f1524  8bc7                 mov eax, edi
// 004f1526  5f                   pop edi
// 004f1527  5e                   pop esi
// 004f1528  83c414               add esp, 0x14
// 004f152b  c21000               ret 0x10
// 004f152e  8b5618               mov edx, dword ptr [esi + 0x18]
// 004f1531  8b3a                 mov edi, dword ptr [edx]
// 004f1533  8b06                 mov eax, dword ptr [esi]
// 004f1535  53                   push ebx
// 004f1536  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 004f153a  85db                 test ebx, ebx
// 004f153c  7404                 je 0x4f1542
// 004f153e  3bd8                 cmp ebx, eax
// 004f1540  740a                 je 0x4f154c
// 004f1542  ff1590288000         call dword ptr [0x802890]
// 004f1548  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 004f154c  55                   push ebp
// 004f154d  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 004f1551  3bef                 cmp ebp, edi
// 004f1553  7533                 jne 0x4f1588
// 004f1555  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 004f1559  8d450c               lea eax, [ebp + 0xc]
// 004f155c  50                   push eax
// 004f155d  8bcf                 mov ecx, edi
// 004f155f  e84cf2ffff           call 0x4f07b0
// 004f1564  84c0                 test al, al
// 004f1566  0f847d010000         je 0x4f16e9
// 004f156c  57                   push edi
// 004f156d  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 004f1571  55                   push ebp
// 004f1572  6a01                 push 1
// 004f1574  57                   push edi
// 004f1575  8bce                 mov ecx, esi
// 004f1577  e844f8ffff           call 0x4f0dc0
// 004f157c  5d                   pop ebp
// 004f157d  5b                   pop ebx
// 004f157e  8bc7                 mov eax, edi
// 004f1580  5f                   pop edi
// 004f1581  5e                   pop esi
// 004f1582  83c414               add esp, 0x14
// 004f1585  c21000               ret 0x10
// 004f1588  8b7e18               mov edi, dword ptr [esi + 0x18]
// 004f158b  8b06                 mov eax, dword ptr [esi]
// 004f158d  85db                 test ebx, ebx
// 004f158f  7404                 je 0x4f1595
// 004f1591  3bd8                 cmp ebx, eax
// 004f1593  740e                 je 0x4f15a3
// 004f1595  ff1590288000         call dword ptr [0x802890]
// 004f159b  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 004f159f  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 004f15a3  3bef                 cmp ebp, edi
// 004f15a5  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 004f15a9  7533                 jne 0x4f15de
// 004f15ab  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 004f15ae  8b5908               mov ebx, dword ptr [ecx + 8]
// 004f15b1  57                   push edi
// 004f15b2  8d4b0c               lea ecx, [ebx + 0xc]
// 004f15b5  e8f6f1ffff           call 0x4f07b0
// 004f15ba  84c0                 test al, al
// 004f15bc  0f8427010000         je 0x4f16e9
// 004f15c2  57                   push edi
// 004f15c3  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 004f15c7  53                   push ebx
// 004f15c8  6a00                 push 0
// 004f15ca  57                   push edi
// 004f15cb  8bce                 mov ecx, esi
// 004f15cd  e8eef7ffff           call 0x4f0dc0
// 004f15d2  5d                   pop ebp
// 004f15d3  5b                   pop ebx
// 004f15d4  8bc7                 mov eax, edi
// 004f15d6  5f                   pop edi
// 004f15d7  5e                   pop esi
// 004f15d8  83c414               add esp, 0x14
// 004f15db  c21000               ret 0x10
// 004f15de  8d550c               lea edx, [ebp + 0xc]
// 004f15e1  52                   push edx
// 004f15e2  8bcf                 mov ecx, edi
// 004f15e4  e8c7f1ffff           call 0x4f07b0
// 004f15e9  84c0                 test al, al
// 004f15eb  746a                 je 0x4f1657
// 004f15ed  8d4c2410             lea ecx, [esp + 0x10]
// 004f15f1  895c2410             mov dword ptr [esp + 0x10], ebx
// 004f15f5  896c2414             mov dword ptr [esp + 0x14], ebp
// 004f15f9  e8724cffff           call 0x4e6270
// 004f15fe  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 004f1602  57                   push edi
// 004f1603  8d4b0c               lea ecx, [ebx + 0xc]
// 004f1606  e8a5f1ffff           call 0x4f07b0
// 004f160b  84c0                 test al, al
// 004f160d  7440                 je 0x4f164f
// 004f160f  8b4308               mov eax, dword ptr [ebx + 8]
// 004f1612  80782100             cmp byte ptr [eax + 0x21], 0
// 004f1616  57                   push edi
// 004f1617  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 004f161b  7417                 je 0x4f1634
// 004f161d  53                   push ebx
// 004f161e  6a00                 push 0
// 004f1620  57                   push edi
// 004f1621  8bce                 mov ecx, esi
// 004f1623  e898f7ffff           call 0x4f0dc0
// 004f1628  5d                   pop ebp
// 004f1629  5b                   pop ebx
// 004f162a  8bc7                 mov eax, edi
// 004f162c  5f                   pop edi
// 004f162d  5e                   pop esi
// 004f162e  83c414               add esp, 0x14
// 004f1631  c21000               ret 0x10
// 004f1634  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 004f1638  51                   push ecx
// 004f1639  6a01                 push 1
// 004f163b  57                   push edi
// 004f163c  8bce                 mov ecx, esi
// 004f163e  e87df7ffff           call 0x4f0dc0
// 004f1643  5d                   pop ebp
// 004f1644  5b                   pop ebx
// 004f1645  8bc7                 mov eax, edi
// 004f1647  5f                   pop edi
// 004f1648  5e                   pop esi
// 004f1649  83c414               add esp, 0x14
// 004f164c  c21000               ret 0x10
// 004f164f  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 004f1653  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 004f1657  57                   push edi
// 004f1658  8d4d0c               lea ecx, [ebp + 0xc]
// 004f165b  e850f1ffff           call 0x4f07b0
// 004f1660  84c0                 test al, al
// 004f1662  0f8481000000         je 0x4f16e9
// 004f1668  8b5618               mov edx, dword ptr [esi + 0x18]
// 004f166b  8b06                 mov eax, dword ptr [esi]
// 004f166d  8d4c2410             lea ecx, [esp + 0x10]
// 004f1671  895c2410             mov dword ptr [esp + 0x10], ebx
// 004f1675  896c2414             mov dword ptr [esp + 0x14], ebp
// 004f1679  8954241c             mov dword ptr [esp + 0x1c], edx
// 004f167d  89442418             mov dword ptr [esp + 0x18], eax
// 004f1681  e8ba5bfeff           call 0x4d7240
// 004f1686  8d4c2418             lea ecx, [esp + 0x18]
// 004f168a  51                   push ecx
// 004f168b  8d4c2414             lea ecx, [esp + 0x14]
// 004f168f  e80cb60f00           call 0x5ecca0
// 004f1694  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 004f1698  84c0                 test al, al
// 004f169a  750f                 jne 0x4f16ab
// 004f169c  8d530c               lea edx, [ebx + 0xc]
// 004f169f  52                   push edx
// 004f16a0  8bcf                 mov ecx, edi
// 004f16a2  e809f1ffff           call 0x4f07b0
// 004f16a7  84c0                 test al, al
// 004f16a9  743e                 je 0x4f16e9
// 004f16ab  8b442430             mov eax, dword ptr [esp + 0x30]
// 004f16af  8b4808               mov ecx, dword ptr [eax + 8]
// 004f16b2  80792100             cmp byte ptr [ecx + 0x21], 0
// 004f16b6  57                   push edi
// 004f16b7  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 004f16bb  8bce                 mov ecx, esi
// 004f16bd  7415                 je 0x4f16d4
// 004f16bf  50                   push eax
// 004f16c0  6a00                 push 0
// 004f16c2  57                   push edi
// 004f16c3  e8f8f6ffff           call 0x4f0dc0
// 004f16c8  5d                   pop ebp
// 004f16c9  5b                   pop ebx
// 004f16ca  8bc7                 mov eax, edi
// 004f16cc  5f                   pop edi
// 004f16cd  5e                   pop esi
// 004f16ce  83c414               add esp, 0x14
// 004f16d1  c21000               ret 0x10
// 004f16d4  53                   push ebx
// 004f16d5  6a01                 push 1
// 004f16d7  57                   push edi
// 004f16d8  e8e3f6ffff           call 0x4f0dc0
// 004f16dd  5d                   pop ebp
// 004f16de  5b                   pop ebx
// 004f16df  8bc7                 mov eax, edi
// 004f16e1  5f                   pop edi
// 004f16e2  5e                   pop esi
// 004f16e3  83c414               add esp, 0x14
// 004f16e6  c21000               ret 0x10
// 004f16e9  57                   push edi
// 004f16ea  8d54241c             lea edx, [esp + 0x1c]
// 004f16ee  52                   push edx
// 004f16ef  8bce                 mov ecx, esi
// 004f16f1  e84af9ffff           call 0x4f1040
// 004f16f6  8b10                 mov edx, dword ptr [eax]
// 004f16f8  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 004f16fc  5d                   pop ebp
// 004f16fd  5b                   pop ebx
// 004f16fe  8911                 mov dword ptr [ecx], edx
// 004f1700  8b4004               mov eax, dword ptr [eax + 4]
// 004f1703  5f                   pop edi
// 004f1704  894104               mov dword ptr [ecx + 4], eax
// 004f1707  8bc1                 mov eax, ecx
// 004f1709  5e                   pop esi
// 004f170a  83c414               add esp, 0x14
// 004f170d  c21000               ret 0x10
// library openrbx-client/RbxView\PBBMesh.cpp (function ?insert@?$_Tree@V?$_Tmap_traits@VDecalKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@U?$less@VDecalKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@@std@@V?$allocator@U?$pair@$$CBVDecalKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@@std@@@8@$0A@@std@@@std@@QAE?AViterator@12@Vconst_iterator@12@ABU?$pair@$$CBVDecalKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client RbxView/PBBMesh.cpp
