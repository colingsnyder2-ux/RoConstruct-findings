// roc 2009-12 008e12d0  unit: CXTPOffice2007Image  size: 607 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008e12d0
//
// 008e12d0  6aff                 push -1
// 008e12d2  68005b9600           push 0x965b00
// 008e12d7  64a100000000         mov eax, dword ptr fs:[0]
// 008e12dd  50                   push eax
// 008e12de  83ec2c               sub esp, 0x2c
// 008e12e1  53                   push ebx
// 008e12e2  55                   push ebp
// 008e12e3  56                   push esi
// 008e12e4  57                   push edi
// 008e12e5  a10052b600           mov eax, dword ptr [0xb65200]
// 008e12ea  33c4                 xor eax, esp
// 008e12ec  50                   push eax
// 008e12ed  8d442440             lea eax, [esp + 0x40]
// 008e12f1  64a300000000         mov dword ptr fs:[0], eax
// 008e12f7  8bd9                 mov ebx, ecx
// 008e12f9  33d2                 xor edx, edx
// 008e12fb  3bda                 cmp ebx, edx
// 008e12fd  0f8416020000         je 0x8e1519
// 008e1303  395320               cmp dword ptr [ebx + 0x20], edx
// 008e1306  0f840d020000         je 0x8e1519
// 008e130c  8b742468             mov esi, dword ptr [esp + 0x68]
// 008e1310  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 008e1314  8b460c               mov eax, dword ptr [esi + 0xc]
// 008e1317  8b7c245c             mov edi, dword ptr [esp + 0x5c]
// 008e131b  034604               add eax, dword ptr [esi + 4]
// 008e131e  8be9                 mov ebp, ecx
// 008e1320  2bef                 sub ebp, edi
// 008e1322  3bc5                 cmp eax, ebp
// 008e1324  0f8fef010000         jg 0x8e1519
// 008e132a  f644247001           test byte ptr [esp + 0x70], 1
// 008e132f  7534                 jne 0x8e1365
// 008e1331  8b54246c             mov edx, dword ptr [esp + 0x6c]
// 008e1335  52                   push edx
// 008e1336  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 008e133a  56                   push esi
// 008e133b  83ec10               sub esp, 0x10
// 008e133e  8bc4                 mov eax, esp
// 008e1340  8910                 mov dword ptr [eax], edx
// 008e1342  8b542478             mov edx, dword ptr [esp + 0x78]
// 008e1346  897804               mov dword ptr [eax + 4], edi
// 008e1349  895008               mov dword ptr [eax + 8], edx
// 008e134c  89480c               mov dword ptr [eax + 0xc], ecx
// 008e134f  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 008e1353  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 008e1357  50                   push eax
// 008e1358  51                   push ecx
// 008e1359  8bcb                 mov ecx, ebx
// 008e135b  e8a0faffff           call 0x8e0e00
// 008e1360  e9b4010000           jmp 0x8e1519
// 008e1365  395324               cmp dword ptr [ebx + 0x24], edx
// 008e1368  744c                 je 0x8e13b6
// 008e136a  8b16                 mov edx, dword ptr [esi]
// 008e136c  83ec10               sub esp, 0x10
// 008e136f  8bc4                 mov eax, esp
// 008e1371  8910                 mov dword ptr [eax], edx
// 008e1373  8b5604               mov edx, dword ptr [esi + 4]
// 008e1376  895004               mov dword ptr [eax + 4], edx
// 008e1379  8b5608               mov edx, dword ptr [esi + 8]
// 008e137c  895008               mov dword ptr [eax + 8], edx
// 008e137f  8b560c               mov edx, dword ptr [esi + 0xc]
// 008e1382  89500c               mov dword ptr [eax + 0xc], edx
// 008e1385  8b542468             mov edx, dword ptr [esp + 0x68]
// 008e1389  83ec10               sub esp, 0x10
// 008e138c  8bc4                 mov eax, esp
// 008e138e  8910                 mov dword ptr [eax], edx
// 008e1390  8b942480000000       mov edx, dword ptr [esp + 0x80]
// 008e1397  897804               mov dword ptr [eax + 4], edi
// 008e139a  895008               mov dword ptr [eax + 8], edx
// 008e139d  89480c               mov dword ptr [eax + 0xc], ecx
// 008e13a0  8b442474             mov eax, dword ptr [esp + 0x74]
// 008e13a4  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 008e13a8  50                   push eax
// 008e13a9  51                   push ecx
// 008e13aa  8bcb                 mov ecx, ebx
// 008e13ac  e8dfedffff           call 0x8e0190
// 008e13b1  e963010000           jmp 0x8e1519
// 008e13b6  8b442454             mov eax, dword ptr [esp + 0x54]
// 008e13ba  8b780c               mov edi, dword ptr [eax + 0xc]
// 008e13bd  8b6808               mov ebp, dword ptr [eax + 8]
// 008e13c0  2b7804               sub edi, dword ptr [eax + 4]
// 008e13c3  2b28                 sub ebp, dword ptr [eax]
// 008e13c5  89542418             mov dword ptr [esp + 0x18], edx
// 008e13c9  c744241418229a00     mov dword ptr [esp + 0x14], 0x9a2218
// 008e13d1  8b442450             mov eax, dword ptr [esp + 0x50]
// 008e13d5  89542448             mov dword ptr [esp + 0x48], edx
// 008e13d9  3bc2                 cmp eax, edx
// 008e13db  7504                 jne 0x8e13e1
// 008e13dd  33c0                 xor eax, eax
// 008e13df  eb03                 jmp 0x8e13e4
// 008e13e1  8b4004               mov eax, dword ptr [eax + 4]
// 008e13e4  8d542468             lea edx, [esp + 0x68]
// 008e13e8  52                   push edx
// 008e13e9  57                   push edi
// 008e13ea  55                   push ebp
// 008e13eb  50                   push eax
// 008e13ec  e84f77f2ff           call 0x808b40
// 008e13f1  83c410               add esp, 0x10
// 008e13f4  50                   push eax
// 008e13f5  8d4c2418             lea ecx, [esp + 0x18]
// 008e13f9  e82c2af1ff           call 0x7f3e2a
// 008e13fe  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 008e1402  8d442414             lea eax, [esp + 0x14]
// 008e1406  50                   push eax
// 008e1407  51                   push ecx
// 008e1408  8d4c2434             lea ecx, [esp + 0x34]
// 008e140c  e86fa4f6ff           call 0x84b880
// 008e1411  33c0                 xor eax, eax
// 008e1413  8944241c             mov dword ptr [esp + 0x1c], eax
// 008e1417  89442420             mov dword ptr [esp + 0x20], eax
// 008e141b  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 008e141f  c644244801           mov byte ptr [esp + 0x48], 1
// 008e1424  896c2424             mov dword ptr [esp + 0x24], ebp
// 008e1428  897c2428             mov dword ptr [esp + 0x28], edi
// 008e142c  83f8ff               cmp eax, -1
// 008e142f  740f                 je 0x8e1440
// 008e1431  50                   push eax
// 008e1432  8d542420             lea edx, [esp + 0x20]
// 008e1436  52                   push edx
// 008e1437  8d4c2434             lea ecx, [esp + 0x34]
// 008e143b  e8be31f1ff           call 0x7f45fe
// 008e1440  8b0e                 mov ecx, dword ptr [esi]
// 008e1442  8b5604               mov edx, dword ptr [esi + 4]
// 008e1445  83ec10               sub esp, 0x10
// 008e1448  8bc4                 mov eax, esp
// 008e144a  8908                 mov dword ptr [eax], ecx
// 008e144c  8b4e08               mov ecx, dword ptr [esi + 8]
// 008e144f  895004               mov dword ptr [eax + 4], edx
// 008e1452  8b560c               mov edx, dword ptr [esi + 0xc]
// 008e1455  894808               mov dword ptr [eax + 8], ecx
// 008e1458  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 008e145c  89500c               mov dword ptr [eax + 0xc], edx
// 008e145f  8b54246c             mov edx, dword ptr [esp + 0x6c]
// 008e1463  83ec10               sub esp, 0x10
// 008e1466  8bc4                 mov eax, esp
// 008e1468  8908                 mov dword ptr [eax], ecx
// 008e146a  8b8c2480000000       mov ecx, dword ptr [esp + 0x80]
// 008e1471  895004               mov dword ptr [eax + 4], edx
// 008e1474  8b942484000000       mov edx, dword ptr [esp + 0x84]
// 008e147b  894808               mov dword ptr [eax + 8], ecx
// 008e147e  89500c               mov dword ptr [eax + 0xc], edx
// 008e1481  8d44243c             lea eax, [esp + 0x3c]
// 008e1485  50                   push eax
// 008e1486  8d4c2450             lea ecx, [esp + 0x50]
// 008e148a  51                   push ecx
// 008e148b  8bcb                 mov ecx, ebx
// 008e148d  e8feecffff           call 0x8e0190
// 008e1492  0faffd               imul edi, ebp
// 008e1495  85ff                 test edi, edi
// 008e1497  7e32                 jle 0x8e14cb
// 008e1499  8b442468             mov eax, dword ptr [esp + 0x68]
// 008e149d  8d4900               lea ecx, [ecx]
// 008e14a0  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 008e14a4  83f9ff               cmp ecx, -1
// 008e14a7  740c                 je 0x8e14b5
// 008e14a9  3908                 cmp dword ptr [eax], ecx
// 008e14ab  7508                 jne 0x8e14b5
// 008e14ad  c70000000000         mov dword ptr [eax], 0
// 008e14b3  eb06                 jmp 0x8e14bb
// 008e14b5  8108000000ff         or dword ptr [eax], 0xff000000
// 008e14bb  8b442468             mov eax, dword ptr [esp + 0x68]
// 008e14bf  83c004               add eax, 4
// 008e14c2  83ef01               sub edi, 1
// 008e14c5  89442468             mov dword ptr [esp + 0x68], eax
// 008e14c9  75d5                 jne 0x8e14a0
// 008e14cb  8b442450             mov eax, dword ptr [esp + 0x50]
// 008e14cf  85c0                 test eax, eax
// 008e14d1  7403                 je 0x8e14d6
// 008e14d3  8b4004               mov eax, dword ptr [eax + 4]
// 008e14d6  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 008e14da  8d54241c             lea edx, [esp + 0x1c]
// 008e14de  52                   push edx
// 008e14df  8b542458             mov edx, dword ptr [esp + 0x58]
// 008e14e3  51                   push ecx
// 008e14e4  52                   push edx
// 008e14e5  50                   push eax
// 008e14e6  e8c5eff2ff           call 0x8104b0
// 008e14eb  8bc8                 mov ecx, eax
// 008e14ed  e80e8bf2ff           call 0x80a000
// 008e14f2  8d4c242c             lea ecx, [esp + 0x2c]
// 008e14f6  c644244800           mov byte ptr [esp + 0x48], 0
// 008e14fb  e890a4f6ff           call 0x84b990
// 008e1500  8d4c2414             lea ecx, [esp + 0x14]
// 008e1504  c7442448ffffffff     mov dword ptr [esp + 0x48], 0xffffffff
// 008e150c  c744241418229a00     mov dword ptr [esp + 0x14], 0x9a2218
// 008e1514  e817ddb2ff           call 0x40f230
// 008e1519  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 008e151d  64890d00000000       mov dword ptr fs:[0], ecx
// 008e1524  59                   pop ecx
// 008e1525  5f                   pop edi
// 008e1526  5e                   pop esi
// 008e1527  5d                   pop ebp
// 008e1528  5b                   pop ebx
// 008e1529  83c438               add esp, 0x38
// 008e152c  c22400               ret 0x24
// copied from an identical function in another client (function ?DrawImage@CXTPOffice2007Image@@QAEXPAVCDC@@ABVCRect@@V3@1KK@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Common\XTPOffice2007Image.cpp