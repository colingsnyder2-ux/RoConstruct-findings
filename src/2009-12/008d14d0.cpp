// roc 2009-12 008d14d0  unit: CXTPTabPaintManager  size: 317 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008d14d0
//
// 008d14d0  83ec30               sub esp, 0x30
// 008d14d3  53                   push ebx
// 008d14d4  8b1d68cc9800         mov ebx, dword ptr [0x98cc68]
// 008d14da  56                   push esi
// 008d14db  8b74243c             mov esi, dword ptr [esp + 0x3c]
// 008d14df  8b4624               mov eax, dword ptr [esi + 0x24]
// 008d14e2  8b562c               mov edx, dword ptr [esi + 0x2c]
// 008d14e5  89442418             mov dword ptr [esp + 0x18], eax
// 008d14e9  8b4630               mov eax, dword ptr [esi + 0x30]
// 008d14ec  57                   push edi
// 008d14ed  8bf9                 mov edi, ecx
// 008d14ef  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 008d14f2  89442428             mov dword ptr [esp + 0x28], eax
// 008d14f6  8b442444             mov eax, dword ptr [esp + 0x44]
// 008d14fa  894c2420             mov dword ptr [esp + 0x20], ecx
// 008d14fe  8b4844               mov ecx, dword ptr [eax + 0x44]
// 008d1501  89542424             mov dword ptr [esp + 0x24], edx
// 008d1505  8b5048               mov edx, dword ptr [eax + 0x48]
// 008d1508  894c240c             mov dword ptr [esp + 0xc], ecx
// 008d150c  8b484c               mov ecx, dword ptr [eax + 0x4c]
// 008d150f  89542410             mov dword ptr [esp + 0x10], edx
// 008d1513  8b5050               mov edx, dword ptr [eax + 0x50]
// 008d1516  8d44241c             lea eax, [esp + 0x1c]
// 008d151a  50                   push eax
// 008d151b  894c2418             mov dword ptr [esp + 0x18], ecx
// 008d151f  8954241c             mov dword ptr [esp + 0x1c], edx
// 008d1523  ffd3                 call ebx
// 008d1525  85c0                 test eax, eax
// 008d1527  0f85d7000000         jne 0x8d1604
// 008d152d  8d4c240c             lea ecx, [esp + 0xc]
// 008d1531  51                   push ecx
// 008d1532  ffd3                 call ebx
// 008d1534  85c0                 test eax, eax
// 008d1536  0f85c8000000         jne 0x8d1604
// 008d153c  8bcf                 mov ecx, edi
// 008d153e  e8fdf3ffff           call 0x8d0940
// 008d1543  83f801               cmp eax, 1
// 008d1546  0f84b8000000         je 0x8d1604
// 008d154c  8b16                 mov edx, dword ptr [esi]
// 008d154e  8b4248               mov eax, dword ptr [edx + 0x48]
// 008d1551  8bce                 mov ecx, esi
// 008d1553  ffd0                 call eax
// 008d1555  83f802               cmp eax, 2
// 008d1558  740d                 je 0x8d1567
// 008d155a  8b16                 mov edx, dword ptr [esi]
// 008d155c  8b4248               mov eax, dword ptr [edx + 0x48]
// 008d155f  8bce                 mov ecx, esi
// 008d1561  ffd0                 call eax
// 008d1563  85c0                 test eax, eax
// 008d1565  7546                 jne 0x8d15ad
// 008d1567  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008d156b  3b4c241c             cmp ecx, dword ptr [esp + 0x1c]
// 008d156f  7d32                 jge 0x8d15a3
// 008d1571  8b8fe0000000         mov ecx, dword ptr [edi + 0xe0]
// 008d1577  8b11                 mov edx, dword ptr [ecx]
// 008d1579  8b5210               mov edx, dword ptr [edx + 0x10]
// 008d157c  8b5e14               mov ebx, dword ptr [esi + 0x14]
// 008d157f  8d44242c             lea eax, [esp + 0x2c]
// 008d1583  50                   push eax
// 008d1584  ffd2                 call edx
// 008d1586  8b00                 mov eax, dword ptr [eax]
// 008d1588  2b44240c             sub eax, dword ptr [esp + 0xc]
// 008d158c  8bce                 mov ecx, esi
// 008d158e  03c3                 add eax, ebx
// 008d1590  0344241c             add eax, dword ptr [esp + 0x1c]
// 008d1594  50                   push eax
// 008d1595  e806cdffff           call 0x8ce2a0
// 008d159a  5f                   pop edi
// 008d159b  5e                   pop esi
// 008d159c  5b                   pop ebx
// 008d159d  83c430               add esp, 0x30
// 008d15a0  c20800               ret 8
// 008d15a3  8b442414             mov eax, dword ptr [esp + 0x14]
// 008d15a7  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008d15ab  eb44                 jmp 0x8d15f1
// 008d15ad  8b442410             mov eax, dword ptr [esp + 0x10]
// 008d15b1  3b442420             cmp eax, dword ptr [esp + 0x20]
// 008d15b5  7d32                 jge 0x8d15e9
// 008d15b7  8b8fe0000000         mov ecx, dword ptr [edi + 0xe0]
// 008d15bd  8b11                 mov edx, dword ptr [ecx]
// 008d15bf  8b5210               mov edx, dword ptr [edx + 0x10]
// 008d15c2  8b5e14               mov ebx, dword ptr [esi + 0x14]
// 008d15c5  8d44242c             lea eax, [esp + 0x2c]
// 008d15c9  50                   push eax
// 008d15ca  ffd2                 call edx
// 008d15cc  8b00                 mov eax, dword ptr [eax]
// 008d15ce  2b442410             sub eax, dword ptr [esp + 0x10]
// 008d15d2  8bce                 mov ecx, esi
// 008d15d4  03c3                 add eax, ebx
// 008d15d6  03442420             add eax, dword ptr [esp + 0x20]
// 008d15da  50                   push eax
// 008d15db  e8c0ccffff           call 0x8ce2a0
// 008d15e0  5f                   pop edi
// 008d15e1  5e                   pop esi
// 008d15e2  5b                   pop ebx
// 008d15e3  83c430               add esp, 0x30
// 008d15e6  c20800               ret 8
// 008d15e9  8b442418             mov eax, dword ptr [esp + 0x18]
// 008d15ed  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008d15f1  3bc1                 cmp eax, ecx
// 008d15f3  7e0f                 jle 0x8d1604
// 008d15f5  8b5614               mov edx, dword ptr [esi + 0x14]
// 008d15f8  2bd0                 sub edx, eax
// 008d15fa  03d1                 add edx, ecx
// 008d15fc  52                   push edx
// 008d15fd  8bce                 mov ecx, esi
// 008d15ff  e89cccffff           call 0x8ce2a0
// 008d1604  5f                   pop edi
// 008d1605  5e                   pop esi
// 008d1606  5b                   pop ebx
// 008d1607  83c430               add esp, 0x30
// 008d160a  c20800               ret 8
// copied from an identical function in another client (function ?EnsureVisible@CXTPTabPaintManager@@QAEXPAVCXTPTabManager@@PAVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\TabManager\XTPTabPaintManager.cpp