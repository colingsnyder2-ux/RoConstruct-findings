// roc 2009-12 008b14a0  unit: CXTPDockingPaneTabbedContainer  size: 435 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008b14a0
//
// 008b14a0  83ec10               sub esp, 0x10
// 008b14a3  53                   push ebx
// 008b14a4  55                   push ebp
// 008b14a5  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 008b14a9  56                   push esi
// 008b14aa  8bf1                 mov esi, ecx
// 008b14ac  8b06                 mov eax, dword ptr [esi]
// 008b14ae  8b502c               mov edx, dword ptr [eax + 0x2c]
// 008b14b1  57                   push edi
// 008b14b2  55                   push ebp
// 008b14b3  ffd2                 call edx
// 008b14b5  8b442428             mov eax, dword ptr [esp + 0x28]
// 008b14b9  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 008b14bd  8b542430             mov edx, dword ptr [esp + 0x30]
// 008b14c1  89461c               mov dword ptr [esi + 0x1c], eax
// 008b14c4  8b442434             mov eax, dword ptr [esp + 0x34]
// 008b14c8  894e20               mov dword ptr [esi + 0x20], ecx
// 008b14cb  895624               mov dword ptr [esi + 0x24], edx
// 008b14ce  894628               mov dword ptr [esi + 0x28], eax
// 008b14d1  8b442438             mov eax, dword ptr [esp + 0x38]
// 008b14d5  85c0                 test eax, eax
// 008b14d7  7409                 je 0x8b14e2
// 008b14d9  833800               cmp dword ptr [eax], 0
// 008b14dc  0f8467010000         je 0x8b1649
// 008b14e2  8b56cc               mov edx, dword ptr [esi - 0x34]
// 008b14e5  8d4c2410             lea ecx, [esp + 0x10]
// 008b14e9  51                   push ecx
// 008b14ea  52                   push edx
// 008b14eb  ff1570cc9800         call dword ptr [0x98cc70]
// 008b14f1  8b46cc               mov eax, dword ptr [esi - 0x34]
// 008b14f4  50                   push eax
// 008b14f5  ff15bccb9800         call dword ptr [0x98cbbc]
// 008b14fb  8b1d34cc9800         mov ebx, dword ptr [0x98cc34]
// 008b1501  8d4c2410             lea ecx, [esp + 0x10]
// 008b1505  8bf8                 mov edi, eax
// 008b1507  51                   push ecx
// 008b1508  57                   push edi
// 008b1509  ffd3                 call ebx
// 008b150b  8d542418             lea edx, [esp + 0x18]
// 008b150f  52                   push edx
// 008b1510  57                   push edi
// 008b1511  ffd3                 call ebx
// 008b1513  8d442428             lea eax, [esp + 0x28]
// 008b1517  50                   push eax
// 008b1518  8d4c2414             lea ecx, [esp + 0x14]
// 008b151c  51                   push ecx
// 008b151d  ff15bcca9800         call dword ptr [0x98cabc]
// 008b1523  85c0                 test eax, eax
// 008b1525  7409                 je 0x8b1530
// 008b1527  83be4c01000000       cmp dword ptr [esi + 0x14c], 0
// 008b152e  7440                 je 0x8b1570
// 008b1530  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 008b1534  8b542434             mov edx, dword ptr [esp + 0x34]
// 008b1538  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008b153c  6a00                 push 0
// 008b153e  2bd0                 sub edx, eax
// 008b1540  52                   push edx
// 008b1541  8b542438             mov edx, dword ptr [esp + 0x38]
// 008b1545  2bd1                 sub edx, ecx
// 008b1547  52                   push edx
// 008b1548  50                   push eax
// 008b1549  a1c4dc9800           mov eax, dword ptr [0x98dcc4]
// 008b154e  51                   push ecx
// 008b154f  50                   push eax
// 008b1550  8d4eac               lea ecx, [esi - 0x54]
// 008b1553  e8d426f4ff           call 0x7f3c2c
// 008b1558  8b4ecc               mov ecx, dword ptr [esi - 0x34]
// 008b155b  6a00                 push 0
// 008b155d  6a00                 push 0
// 008b155f  51                   push ecx
// 008b1560  ff15e8cb9800         call dword ptr [0x98cbe8]
// 008b1566  c7864c01000000000000 mov dword ptr [esi + 0x14c], 0
// 008b1570  8b56ac               mov edx, dword ptr [esi - 0x54]
// 008b1573  8b8260010000         mov eax, dword ptr [edx + 0x160]
// 008b1579  ff8648010000         inc dword ptr [esi + 0x148]
// 008b157f  8d7eac               lea edi, [esi - 0x54]
// 008b1582  8bcf                 mov ecx, edi
// 008b1584  ffd0                 call eax
// 008b1586  8b16                 mov edx, dword ptr [esi]
// 008b1588  8b421c               mov eax, dword ptr [edx + 0x1c]
// 008b158b  ff8e48010000         dec dword ptr [esi + 0x148]
// 008b1591  8bce                 mov ecx, esi
// 008b1593  ffd0                 call eax
// 008b1595  85c0                 test eax, eax
// 008b1597  7407                 je 0x8b15a0
// 008b1599  bb03000000           mov ebx, 3
// 008b159e  eb16                 jmp 0x8b15b6
// 008b15a0  55                   push ebp
// 008b15a1  e81acfffff           call 0x8ae4c0
// 008b15a6  50                   push eax
// 008b15a7  e89226f4ff           call 0x7f3c3e
// 008b15ac  83c408               add esp, 8
// 008b15af  8bd8                 mov ebx, eax
// 008b15b1  f7db                 neg ebx
// 008b15b3  1bdb                 sbb ebx, ebx
// 008b15b5  43                   inc ebx
// 008b15b6  8bcf                 mov ecx, edi
// 008b15b8  e873f6ffff           call 0x8b0c30
// 008b15bd  8bce                 mov ecx, esi
// 008b15bf  895820               mov dword ptr [eax + 0x20], ebx
// 008b15c2  e889f2ffff           call 0x8b0850
// 008b15c7  8b10                 mov edx, dword ptr [eax]
// 008b15c9  8b526c               mov edx, dword ptr [edx + 0x6c]
// 008b15cc  6a01                 push 1
// 008b15ce  8d4c242c             lea ecx, [esp + 0x2c]
// 008b15d2  51                   push ecx
// 008b15d3  57                   push edi
// 008b15d4  8bc8                 mov ecx, eax
// 008b15d6  ffd2                 call edx
// 008b15d8  8bce                 mov ecx, esi
// 008b15da  e8b191faff           call 0x85a790
// 008b15df  89442424             mov dword ptr [esp + 0x24], eax
// 008b15e3  85c0                 test eax, eax
// 008b15e5  7462                 je 0x8b1649
// 008b15e7  8d442424             lea eax, [esp + 0x24]
// 008b15eb  50                   push eax
// 008b15ec  8bce                 mov ecx, esi
// 008b15ee  e81d190400           call 0x8f2f10
// 008b15f3  85c0                 test eax, eax
// 008b15f5  7405                 je 0x8b15fc
// 008b15f7  8d78e0               lea edi, [eax - 0x20]
// 008b15fa  eb02                 jmp 0x8b15fe
// 008b15fc  33ff                 xor edi, edi
// 008b15fe  33c9                 xor ecx, ecx
// 008b1600  39be50010000         cmp dword ptr [esi + 0x150], edi
// 008b1606  0f94c1               sete cl
// 008b1609  51                   push ecx
// 008b160a  8bcf                 mov ecx, edi
// 008b160c  e8bfb1faff           call 0x85c7d0
// 008b1611  8b442438             mov eax, dword ptr [esp + 0x38]
// 008b1615  8b5720               mov edx, dword ptr [edi + 0x20]
// 008b1618  8b5224               mov edx, dword ptr [edx + 0x24]
// 008b161b  50                   push eax
// 008b161c  8d4f20               lea ecx, [edi + 0x20]
// 008b161f  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 008b1623  83ec10               sub esp, 0x10
// 008b1626  8bc4                 mov eax, esp
// 008b1628  8938                 mov dword ptr [eax], edi
// 008b162a  8b7c2440             mov edi, dword ptr [esp + 0x40]
// 008b162e  897804               mov dword ptr [eax + 4], edi
// 008b1631  8b7c2444             mov edi, dword ptr [esp + 0x44]
// 008b1635  897808               mov dword ptr [eax + 8], edi
// 008b1638  8b7c2448             mov edi, dword ptr [esp + 0x48]
// 008b163c  55                   push ebp
// 008b163d  89780c               mov dword ptr [eax + 0xc], edi
// 008b1640  ffd2                 call edx
// 008b1642  837c242400           cmp dword ptr [esp + 0x24], 0
// 008b1647  759e                 jne 0x8b15e7
// 008b1649  5f                   pop edi
// 008b164a  5e                   pop esi
// 008b164b  5d                   pop ebp
// 008b164c  5b                   pop ebx
// 008b164d  83c410               add esp, 0x10
// 008b1650  c21800               ret 0x18
// copied from an identical function in another client (function ?OnSizeParent@CXTPDockingPaneTabbedContainer@@MAEXPAVCWnd@@VCRect@@PAX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneTabbedContainer.cpp