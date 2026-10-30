// roc 2009-12 008a17f0  unit: CXTPReportInplaceEdit  size: 345 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008a17f0
//
// 008a17f0  6aff                 push -1
// 008a17f2  68f2219600           push 0x9621f2
// 008a17f7  64a100000000         mov eax, dword ptr fs:[0]
// 008a17fd  50                   push eax
// 008a17fe  83ec10               sub esp, 0x10
// 008a1801  53                   push ebx
// 008a1802  56                   push esi
// 008a1803  57                   push edi
// 008a1804  a10052b600           mov eax, dword ptr [0xb65200]
// 008a1809  33c4                 xor eax, esp
// 008a180b  50                   push eax
// 008a180c  8d442420             lea eax, [esp + 0x20]
// 008a1810  64a300000000         mov dword ptr fs:[0], eax
// 008a1816  8bf1                 mov esi, ecx
// 008a1818  83be9000000000       cmp dword ptr [esi + 0x90], 0
// 008a181f  0f8511010000         jne 0x8a1936
// 008a1825  837e5800             cmp dword ptr [esi + 0x58], 0
// 008a1829  0f8407010000         je 0x8a1936
// 008a182f  837e6400             cmp dword ptr [esi + 0x64], 0
// 008a1833  0f84fd000000         je 0x8a1936
// 008a1839  8d4c2414             lea ecx, [esp + 0x14]
// 008a183d  ff1574de9800         call dword ptr [0x98de74]
// 008a1843  8d4c2410             lea ecx, [esp + 0x10]
// 008a1847  c744242800000000     mov dword ptr [esp + 0x28], 0
// 008a184f  ff1574de9800         call dword ptr [0x98de74]
// 008a1855  8d442414             lea eax, [esp + 0x14]
// 008a1859  50                   push eax
// 008a185a  8bce                 mov ecx, esi
// 008a185c  c644242c01           mov byte ptr [esp + 0x2c], 1
// 008a1861  e8e225f5ff           call 0x7f3e48
// 008a1866  8d4c2414             lea ecx, [esp + 0x14]
// 008a186a  51                   push ecx
// 008a186b  8d4c2414             lea ecx, [esp + 0x14]
// 008a186f  ff1538d59800         call dword ptr [0x98d538]
// 008a1875  8b4e64               mov ecx, dword ptr [esi + 0x64]
// 008a1878  8b11                 mov edx, dword ptr [ecx]
// 008a187a  8d7c2410             lea edi, [esp + 0x10]
// 008a187e  8d4654               lea eax, [esi + 0x54]
// 008a1881  57                   push edi
// 008a1882  50                   push eax
// 008a1883  8b822c010000         mov eax, dword ptr [edx + 0x12c]
// 008a1889  ffd0                 call eax
// 008a188b  8bf8                 mov edi, eax
// 008a188d  85ff                 test edi, edi
// 008a188f  7429                 je 0x8a18ba
// 008a1891  8d4c2414             lea ecx, [esp + 0x14]
// 008a1895  ff1580de9800         call dword ptr [0x98de80]
// 008a189b  50                   push eax
// 008a189c  8d4c2414             lea ecx, [esp + 0x14]
// 008a18a0  ff1584de9800         call dword ptr [0x98de84]
// 008a18a6  85c0                 test eax, eax
// 008a18a8  7510                 jne 0x8a18ba
// 008a18aa  8d4c2414             lea ecx, [esp + 0x14]
// 008a18ae  51                   push ecx
// 008a18af  8d4e7c               lea ecx, [esi + 0x7c]
// 008a18b2  ff1538d59800         call dword ptr [0x98d538]
// 008a18b8  eb68                 jmp 0x8a1922
// 008a18ba  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008a18bd  8b1dc4cb9800         mov ebx, dword ptr [0x98cbc4]
// 008a18c3  8d542418             lea edx, [esp + 0x18]
// 008a18c7  52                   push edx
// 008a18c8  8d442420             lea eax, [esp + 0x20]
// 008a18cc  50                   push eax
// 008a18cd  68b0000000           push 0xb0
// 008a18d2  51                   push ecx
// 008a18d3  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 008a18db  c744242800000000     mov dword ptr [esp + 0x28], 0
// 008a18e3  ffd3                 call ebx
// 008a18e5  8d4c2410             lea ecx, [esp + 0x10]
// 008a18e9  85ff                 test edi, edi
// 008a18eb  7503                 jne 0x8a18f0
// 008a18ed  8d4e7c               lea ecx, [esi + 0x7c]
// 008a18f0  ff1580de9800         call dword ptr [0x98de80]
// 008a18f6  50                   push eax
// 008a18f7  8bce                 mov ecx, esi
// 008a18f9  e862faffff           call 0x8a1360
// 008a18fe  8b542418             mov edx, dword ptr [esp + 0x18]
// 008a1902  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008a1906  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008a1909  52                   push edx
// 008a190a  50                   push eax
// 008a190b  68b1000000           push 0xb1
// 008a1910  51                   push ecx
// 008a1911  ffd3                 call ebx
// 008a1913  8b5620               mov edx, dword ptr [esi + 0x20]
// 008a1916  6a00                 push 0
// 008a1918  6a00                 push 0
// 008a191a  68b7000000           push 0xb7
// 008a191f  52                   push edx
// 008a1920  ffd3                 call ebx
// 008a1922  8d4c2410             lea ecx, [esp + 0x10]
// 008a1926  ff15c0de9800         call dword ptr [0x98dec0]
// 008a192c  8d4c2414             lea ecx, [esp + 0x14]
// 008a1930  ff15c0de9800         call dword ptr [0x98dec0]
// 008a1936  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008a193a  64890d00000000       mov dword ptr fs:[0], ecx
// 008a1941  59                   pop ecx
// 008a1942  5f                   pop edi
// 008a1943  5e                   pop esi
// 008a1944  5b                   pop ebx
// 008a1945  83c41c               add esp, 0x1c
// 008a1948  c3                   ret 
// copied from an identical function in another client (function ?OnEnChange@CXTPReportInplaceEdit@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\ReportControl\XTPReportInplaceControls.cpp