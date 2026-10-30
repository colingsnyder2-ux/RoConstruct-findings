// roc 2009-12 008f1450  unit: CXTPRibbonControlTab  size: 395 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008f1450
//
// 008f1450  6aff                 push -1
// 008f1452  68c1699600           push 0x9669c1
// 008f1457  64a100000000         mov eax, dword ptr fs:[0]
// 008f145d  50                   push eax
// 008f145e  83ec14               sub esp, 0x14
// 008f1461  56                   push esi
// 008f1462  a10052b600           mov eax, dword ptr [0xb65200]
// 008f1467  33c4                 xor eax, esp
// 008f1469  50                   push eax
// 008f146a  8d44241c             lea eax, [esp + 0x1c]
// 008f146e  64a300000000         mov dword ptr fs:[0], eax
// 008f1474  8bf1                 mov esi, ecx
// 008f1476  8b46fc               mov eax, dword ptr [esi - 4]
// 008f1479  50                   push eax
// 008f147a  8d4c2410             lea ecx, [esp + 0x10]
// 008f147e  e8ad26f0ff           call 0x7f3b30
// 008f1483  8d4c242c             lea ecx, [esp + 0x2c]
// 008f1487  51                   push ecx
// 008f1488  8bce                 mov ecx, esi
// 008f148a  c744242800000000     mov dword ptr [esp + 0x28], 0
// 008f1492  e809a5f4ff           call 0x83b9a0
// 008f1497  85c0                 test eax, eax
// 008f1499  756d                 jne 0x8f1508
// 008f149b  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 008f149f  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 008f14a3  52                   push edx
// 008f14a4  8b542434             mov edx, dword ptr [esp + 0x34]
// 008f14a8  83ec10               sub esp, 0x10
// 008f14ab  8bc4                 mov eax, esp
// 008f14ad  8908                 mov dword ptr [eax], ecx
// 008f14af  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 008f14b3  895004               mov dword ptr [eax + 4], edx
// 008f14b6  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 008f14ba  894808               mov dword ptr [eax + 8], ecx
// 008f14bd  8bce                 mov ecx, esi
// 008f14bf  89500c               mov dword ptr [eax + 0xc], edx
// 008f14c2  e8095ef0ff           call 0x7f72d0
// 008f14c7  8bf0                 mov esi, eax
// 008f14c9  8b442410             mov eax, dword ptr [esp + 0x10]
// 008f14cd  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 008f14d5  85c0                 test eax, eax
// 008f14d7  7407                 je 0x8f14e0
// 008f14d9  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008f14dd  894804               mov dword ptr [eax + 4], ecx
// 008f14e0  837c241800           cmp dword ptr [esp + 0x18], 0
// 008f14e5  740c                 je 0x8f14f3
// 008f14e7  8b542414             mov edx, dword ptr [esp + 0x14]
// 008f14eb  52                   push edx
// 008f14ec  6a00                 push 0
// 008f14ee  e83126f0ff           call 0x7f3b24
// 008f14f3  8bc6                 mov eax, esi
// 008f14f5  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008f14f9  64890d00000000       mov dword ptr fs:[0], ecx
// 008f1500  59                   pop ecx
// 008f1501  5e                   pop esi
// 008f1502  83c420               add esp, 0x20
// 008f1505  c21400               ret 0x14
// 008f1508  83c0ff               add eax, -1
// 008f150b  7817                 js 0x8f1524
// 008f150d  3b86c0010000         cmp eax, dword ptr [esi + 0x1c0]
// 008f1513  7d0f                 jge 0x8f1524
// 008f1515  8b8ebc010000         mov ecx, dword ptr [esi + 0x1bc]
// 008f151b  8d0481               lea eax, [ecx + eax*4]
// 008f151e  8b08                 mov ecx, dword ptr [eax]
// 008f1520  85c9                 test ecx, ecx
// 008f1522  7542                 jne 0x8f1566
// 008f1524  8b442410             mov eax, dword ptr [esp + 0x10]
// 008f1528  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 008f1530  85c0                 test eax, eax
// 008f1532  7407                 je 0x8f153b
// 008f1534  8b54240c             mov edx, dword ptr [esp + 0xc]
// 008f1538  895004               mov dword ptr [eax + 4], edx
// 008f153b  837c241800           cmp dword ptr [esp + 0x18], 0
// 008f1540  740c                 je 0x8f154e
// 008f1542  8b442414             mov eax, dword ptr [esp + 0x14]
// 008f1546  50                   push eax
// 008f1547  6a00                 push 0
// 008f1549  e8d625f0ff           call 0x7f3b24
// 008f154e  b857000780           mov eax, 0x80070057
// 008f1553  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008f1557  64890d00000000       mov dword ptr fs:[0], ecx
// 008f155e  59                   pop ecx
// 008f155f  5e                   pop esi
// 008f1560  83c420               add esp, 0x20
// 008f1563  c21400               ret 0x14
// 008f1566  8d542408             lea edx, [esp + 8]
// 008f156a  52                   push edx
// 008f156b  e860cafdff           call 0x8cdfd0
// 008f1570  8d442408             lea eax, [esp + 8]
// 008f1574  50                   push eax
// 008f1575  c644242801           mov byte ptr [esp + 0x28], 1
// 008f157a  e8b18df5ff           call 0x84a330
// 008f157f  83c404               add esp, 4
// 008f1582  8d4c2408             lea ecx, [esp + 8]
// 008f1586  ff156cd69800         call dword ptr [0x98d66c]
// 008f158c  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 008f1590  8901                 mov dword ptr [ecx], eax
// 008f1592  8d4c2408             lea ecx, [esp + 8]
// 008f1596  ff15c0de9800         call dword ptr [0x98dec0]
// 008f159c  8b442410             mov eax, dword ptr [esp + 0x10]
// 008f15a0  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 008f15a8  85c0                 test eax, eax
// 008f15aa  7407                 je 0x8f15b3
// 008f15ac  8b54240c             mov edx, dword ptr [esp + 0xc]
// 008f15b0  895004               mov dword ptr [eax + 4], edx
// 008f15b3  837c241800           cmp dword ptr [esp + 0x18], 0
// 008f15b8  740c                 je 0x8f15c6
// 008f15ba  8b442414             mov eax, dword ptr [esp + 0x14]
// 008f15be  50                   push eax
// 008f15bf  6a00                 push 0
// 008f15c1  e85e25f0ff           call 0x7f3b24
// 008f15c6  33c0                 xor eax, eax
// 008f15c8  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008f15cc  64890d00000000       mov dword ptr fs:[0], ecx
// 008f15d3  59                   pop ecx
// 008f15d4  5e                   pop esi
// 008f15d5  83c420               add esp, 0x20
// 008f15d8  c21400               ret 0x14
// copied from an identical function in another client (function ?GetAccessibleName@CXTPRibbonControlTab@@MAEJUtagVARIANT@@PAPA_W@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Ribbon\XTPRibbonControlTab.cpp