// roc 2009-12 008b1370  unit: CXTPDockingPaneTabbedContainer  size: 292 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008b1370
//
// 008b1370  83ec10               sub esp, 0x10
// 008b1373  53                   push ebx
// 008b1374  56                   push esi
// 008b1375  8bf1                 mov esi, ecx
// 008b1377  57                   push edi
// 008b1378  8d7eac               lea edi, [esi - 0x54]
// 008b137b  85ff                 test edi, edi
// 008b137d  0f8408010000         je 0x8b148b
// 008b1383  837f2000             cmp dword ptr [edi + 0x20], 0
// 008b1387  0f84fe000000         je 0x8b148b
// 008b138d  837e1000             cmp dword ptr [esi + 0x10], 0
// 008b1391  0f84f4000000         je 0x8b148b
// 008b1397  83be4801000000       cmp dword ptr [esi + 0x148], 0
// 008b139e  0f85e7000000         jne 0x8b148b
// 008b13a4  8b07                 mov eax, dword ptr [edi]
// 008b13a6  8b9060010000         mov edx, dword ptr [eax + 0x160]
// 008b13ac  8bcf                 mov ecx, edi
// 008b13ae  c7864801000001000000 mov dword ptr [esi + 0x148], 1
// 008b13b8  ffd2                 call edx
// 008b13ba  8b461c               mov eax, dword ptr [esi + 0x1c]
// 008b13bd  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008b13c0  8b5624               mov edx, dword ptr [esi + 0x24]
// 008b13c3  ff8e48010000         dec dword ptr [esi + 0x148]
// 008b13c9  8944240c             mov dword ptr [esp + 0xc], eax
// 008b13cd  8b4628               mov eax, dword ptr [esi + 0x28]
// 008b13d0  894c2410             mov dword ptr [esp + 0x10], ecx
// 008b13d4  8bce                 mov ecx, esi
// 008b13d6  89542414             mov dword ptr [esp + 0x14], edx
// 008b13da  89442418             mov dword ptr [esp + 0x18], eax
// 008b13de  e86df4ffff           call 0x8b0850
// 008b13e3  8b10                 mov edx, dword ptr [eax]
// 008b13e5  8b526c               mov edx, dword ptr [edx + 0x6c]
// 008b13e8  6a01                 push 1
// 008b13ea  8d4c2410             lea ecx, [esp + 0x10]
// 008b13ee  51                   push ecx
// 008b13ef  57                   push edi
// 008b13f0  8bc8                 mov ecx, eax
// 008b13f2  ffd2                 call edx
// 008b13f4  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 008b13f8  85db                 test ebx, ebx
// 008b13fa  7476                 je 0x8b1472
// 008b13fc  8bce                 mov ecx, esi
// 008b13fe  e88d93faff           call 0x85a790
// 008b1403  89442420             mov dword ptr [esp + 0x20], eax
// 008b1407  85c0                 test eax, eax
// 008b1409  7467                 je 0x8b1472
// 008b140b  eb03                 jmp 0x8b1410
// 008b140d  8d4900               lea ecx, [ecx]
// 008b1410  8d442420             lea eax, [esp + 0x20]
// 008b1414  50                   push eax
// 008b1415  8bce                 mov ecx, esi
// 008b1417  e8f41a0400           call 0x8f2f10
// 008b141c  85c0                 test eax, eax
// 008b141e  7405                 je 0x8b1425
// 008b1420  8d78e0               lea edi, [eax - 0x20]
// 008b1423  eb02                 jmp 0x8b1427
// 008b1425  33ff                 xor edi, edi
// 008b1427  33c9                 xor ecx, ecx
// 008b1429  39be50010000         cmp dword ptr [esi + 0x150], edi
// 008b142f  0f94c1               sete cl
// 008b1432  51                   push ecx
// 008b1433  8bcf                 mov ecx, edi
// 008b1435  e896b3faff           call 0x85c7d0
// 008b143a  8b5720               mov edx, dword ptr [edi + 0x20]
// 008b143d  8b5224               mov edx, dword ptr [edx + 0x24]
// 008b1440  8d4f20               lea ecx, [edi + 0x20]
// 008b1443  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 008b1447  6a00                 push 0
// 008b1449  83ec10               sub esp, 0x10
// 008b144c  8bc4                 mov eax, esp
// 008b144e  8938                 mov dword ptr [eax], edi
// 008b1450  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 008b1454  897804               mov dword ptr [eax + 4], edi
// 008b1457  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 008b145b  897808               mov dword ptr [eax + 8], edi
// 008b145e  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 008b1462  89780c               mov dword ptr [eax + 0xc], edi
// 008b1465  8b4614               mov eax, dword ptr [esi + 0x14]
// 008b1468  50                   push eax
// 008b1469  ffd2                 call edx
// 008b146b  837c242000           cmp dword ptr [esp + 0x20], 0
// 008b1470  759e                 jne 0x8b1410
// 008b1472  8b46cc               mov eax, dword ptr [esi - 0x34]
// 008b1475  6a00                 push 0
// 008b1477  6a00                 push 0
// 008b1479  50                   push eax
// 008b147a  ff15e8cb9800         call dword ptr [0x98cbe8]
// 008b1480  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 008b1483  8b11                 mov edx, dword ptr [ecx]
// 008b1485  8b4238               mov eax, dword ptr [edx + 0x38]
// 008b1488  53                   push ebx
// 008b1489  ffd0                 call eax
// 008b148b  5f                   pop edi
// 008b148c  5e                   pop esi
// 008b148d  5b                   pop ebx
// 008b148e  83c410               add esp, 0x10
// 008b1491  c20400               ret 4
// copied from an identical function in another client (function ?InvalidatePane@CXTPDockingPaneTabbedContainer@@MAEXH@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/DockingPane/XTPDockingPaneTabbedContainer.cpp