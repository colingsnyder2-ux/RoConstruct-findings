// roc 2009-06 005a1370  unit: seg_005a0000  size: 649 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005a1370
//
// 005a1370  83ec2c               sub esp, 0x2c
// 005a1373  53                   push ebx
// 005a1374  55                   push ebp
// 005a1375  56                   push esi
// 005a1376  8b74243c             mov esi, dword ptr [esp + 0x3c]
// 005a137a  8b86e0000000         mov eax, dword ptr [esi + 0xe0]
// 005a1380  8bae48010000         mov ebp, dword ptr [esi + 0x148]
// 005a1386  8b8ef8000000         mov ecx, dword ptr [esi + 0xf8]
// 005a138c  48                   dec eax
// 005a138d  89442430             mov dword ptr [esp + 0x30], eax
// 005a1391  8b4510               mov eax, dword ptr [ebp + 0x10]
// 005a1394  49                   dec ecx
// 005a1395  3b4514               cmp eax, dword ptr [ebp + 0x14]
// 005a1398  57                   push edi
// 005a1399  894c2420             mov dword ptr [esp + 0x20], ecx
// 005a139d  89442410             mov dword ptr [esp + 0x10], eax
// 005a13a1  7c33                 jl 0x5a13d6
// 005a13a3  ff4508               inc dword ptr [ebp + 8]
// 005a13a6  83bee400000001       cmp dword ptr [esi + 0xe4], 1
// 005a13ad  8b8648010000         mov eax, dword ptr [esi + 0x148]
// 005a13b3  0f8e11020000         jle 0x5a15ca
// 005a13b9  5f                   pop edi
// 005a13ba  5e                   pop esi
// 005a13bb  33c9                 xor ecx, ecx
// 005a13bd  5d                   pop ebp
// 005a13be  c7401401000000       mov dword ptr [eax + 0x14], 1
// 005a13c5  89480c               mov dword ptr [eax + 0xc], ecx
// 005a13c8  894810               mov dword ptr [eax + 0x10], ecx
// 005a13cb  b001                 mov al, 1
// 005a13cd  5b                   pop ebx
// 005a13ce  83c42c               add esp, 0x2c
// 005a13d1  c3                   ret 
// 005a13d2  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005a13d6  8b5d0c               mov ebx, dword ptr [ebp + 0xc]
// 005a13d9  895c2414             mov dword ptr [esp + 0x14], ebx
// 005a13dd  3bd9                 cmp ebx, ecx
// 005a13df  0f87b7010000         ja 0x5a159c
// 005a13e5  eb09                 jmp 0x5a13f0
// 005a13e7  8da42400000000       lea esp, [esp]
// 005a13ee  8bff                 mov edi, edi
// 005a13f0  33ff                 xor edi, edi
// 005a13f2  39bee4000000         cmp dword ptr [esi + 0xe4], edi
// 005a13f8  897c242c             mov dword ptr [esp + 0x2c], edi
// 005a13fc  0f8e70010000         jle 0x5a1572
// 005a1402  81c6e8000000         add esi, 0xe8
// 005a1408  89742430             mov dword ptr [esp + 0x30], esi
// 005a140c  8d642400             lea esp, [esp]
// 005a1410  8b36                 mov esi, dword ptr [esi]
// 005a1412  3b5c2420             cmp ebx, dword ptr [esp + 0x20]
// 005a1416  7305                 jae 0x5a141d
// 005a1418  8b5e34               mov ebx, dword ptr [esi + 0x34]
// 005a141b  eb03                 jmp 0x5a1420
// 005a141d  8b5e44               mov ebx, dword ptr [esi + 0x44]
// 005a1420  8b4640               mov eax, dword ptr [esi + 0x40]
// 005a1423  0faf442414           imul eax, dword ptr [esp + 0x14]
// 005a1428  89442438             mov dword ptr [esp + 0x38], eax
// 005a142c  8b442410             mov eax, dword ptr [esp + 0x10]
// 005a1430  03c0                 add eax, eax
// 005a1432  03c0                 add eax, eax
// 005a1434  03c0                 add eax, eax
// 005a1436  837e3800             cmp dword ptr [esi + 0x38], 0
// 005a143a  895c2424             mov dword ptr [esp + 0x24], ebx
// 005a143e  89442418             mov dword ptr [esp + 0x18], eax
// 005a1442  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 005a144a  0f8ef8000000         jle 0x5a1548
// 005a1450  8b4634               mov eax, dword ptr [esi + 0x34]
// 005a1453  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 005a1457  394d08               cmp dword ptr [ebp + 8], ecx
// 005a145a  7252                 jb 0x5a14ae
// 005a145c  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 005a1460  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005a1464  03d1                 add edx, ecx
// 005a1466  3b5648               cmp edx, dword ptr [esi + 0x48]
// 005a1469  7c43                 jl 0x5a14ae
// 005a146b  8b54bd18             mov edx, dword ptr [ebp + edi*4 + 0x18]
// 005a146f  c1e007               shl eax, 7
// 005a1472  50                   push eax
// 005a1473  52                   push edx
// 005a1474  e8378afeff           call 0x589eb0
// 005a1479  33c0                 xor eax, eax
// 005a147b  83c408               add esp, 8
// 005a147e  394634               cmp dword ptr [esi + 0x34], eax
// 005a1481  0f8ea5000000         jle 0x5a152c
// 005a1487  8d4cbd18             lea ecx, [ebp + edi*4 + 0x18]
// 005a148b  eb03                 jmp 0x5a1490
// 005a148d  8d4900               lea ecx, [ecx]
// 005a1490  8b54bd14             mov edx, dword ptr [ebp + edi*4 + 0x14]
// 005a1494  8b19                 mov ebx, dword ptr [ecx]
// 005a1496  668b12               mov dx, word ptr [edx]
// 005a1499  40                   inc eax
// 005a149a  668913               mov word ptr [ebx], dx
// 005a149d  83c104               add ecx, 4
// 005a14a0  3b4634               cmp eax, dword ptr [esi + 0x34]
// 005a14a3  7ceb                 jl 0x5a1490
// 005a14a5  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 005a14a9  e97e000000           jmp 0x5a152c
// 005a14ae  8b442440             mov eax, dword ptr [esp + 0x40]
// 005a14b2  8b8858010000         mov ecx, dword ptr [eax + 0x158]
// 005a14b8  8b542438             mov edx, dword ptr [esp + 0x38]
// 005a14bc  8b442418             mov eax, dword ptr [esp + 0x18]
// 005a14c0  53                   push ebx
// 005a14c1  52                   push edx
// 005a14c2  8b54bd18             mov edx, dword ptr [ebp + edi*4 + 0x18]
// 005a14c6  50                   push eax
// 005a14c7  8b4604               mov eax, dword ptr [esi + 4]
// 005a14ca  52                   push edx
// 005a14cb  8b542454             mov edx, dword ptr [esp + 0x54]
// 005a14cf  8b0482               mov eax, dword ptr [edx + eax*4]
// 005a14d2  8b542450             mov edx, dword ptr [esp + 0x50]
// 005a14d6  50                   push eax
// 005a14d7  8b4104               mov eax, dword ptr [ecx + 4]
// 005a14da  56                   push esi
// 005a14db  52                   push edx
// 005a14dc  ffd0                 call eax
// 005a14de  8b4634               mov eax, dword ptr [esi + 0x34]
// 005a14e1  83c41c               add esp, 0x1c
// 005a14e4  3bd8                 cmp ebx, eax
// 005a14e6  7d44                 jge 0x5a152c
// 005a14e8  2bc3                 sub eax, ebx
// 005a14ea  c1e007               shl eax, 7
// 005a14ed  8d0c3b               lea ecx, [ebx + edi]
// 005a14f0  8b548d18             mov edx, dword ptr [ebp + ecx*4 + 0x18]
// 005a14f4  50                   push eax
// 005a14f5  52                   push edx
// 005a14f6  e8b589feff           call 0x589eb0
// 005a14fb  83c408               add esp, 8
// 005a14fe  3b5e34               cmp ebx, dword ptr [esi + 0x34]
// 005a1501  895c2428             mov dword ptr [esp + 0x28], ebx
// 005a1505  7d25                 jge 0x5a152c
// 005a1507  8d043b               lea eax, [ebx + edi]
// 005a150a  8d448518             lea eax, [ebp + eax*4 + 0x18]
// 005a150e  8bff                 mov edi, edi
// 005a1510  8b48fc               mov ecx, dword ptr [eax - 4]
// 005a1513  668b09               mov cx, word ptr [ecx]
// 005a1516  8b10                 mov edx, dword ptr [eax]
// 005a1518  66890a               mov word ptr [edx], cx
// 005a151b  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005a151f  41                   inc ecx
// 005a1520  83c004               add eax, 4
// 005a1523  3b4e34               cmp ecx, dword ptr [esi + 0x34]
// 005a1526  894c2428             mov dword ptr [esp + 0x28], ecx
// 005a152a  7ce4                 jl 0x5a1510
// 005a152c  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005a1530  8b4634               mov eax, dword ptr [esi + 0x34]
// 005a1533  8344241808           add dword ptr [esp + 0x18], 8
// 005a1538  41                   inc ecx
// 005a1539  03f8                 add edi, eax
// 005a153b  3b4e38               cmp ecx, dword ptr [esi + 0x38]
// 005a153e  894c241c             mov dword ptr [esp + 0x1c], ecx
// 005a1542  0f8c0bffffff         jl 0x5a1453
// 005a1548  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005a154c  8b742430             mov esi, dword ptr [esp + 0x30]
// 005a1550  8b542440             mov edx, dword ptr [esp + 0x40]
// 005a1554  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 005a1558  40                   inc eax
// 005a1559  83c604               add esi, 4
// 005a155c  3b82e4000000         cmp eax, dword ptr [edx + 0xe4]
// 005a1562  8944242c             mov dword ptr [esp + 0x2c], eax
// 005a1566  89742430             mov dword ptr [esp + 0x30], esi
// 005a156a  0f8ca0feffff         jl 0x5a1410
// 005a1570  8bf2                 mov esi, edx
// 005a1572  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 005a1578  8b5104               mov edx, dword ptr [ecx + 4]
// 005a157b  8d4518               lea eax, [ebp + 0x18]
// 005a157e  50                   push eax
// 005a157f  56                   push esi
// 005a1580  ffd2                 call edx
// 005a1582  83c408               add esp, 8
// 005a1585  84c0                 test al, al
// 005a1587  742d                 je 0x5a15b6
// 005a1589  43                   inc ebx
// 005a158a  895c2414             mov dword ptr [esp + 0x14], ebx
// 005a158e  3b5c2420             cmp ebx, dword ptr [esp + 0x20]
// 005a1592  0f8658feffff         jbe 0x5a13f0
// 005a1598  8b442410             mov eax, dword ptr [esp + 0x10]
// 005a159c  40                   inc eax
// 005a159d  c7450c00000000       mov dword ptr [ebp + 0xc], 0
// 005a15a4  3b4514               cmp eax, dword ptr [ebp + 0x14]
// 005a15a7  89442410             mov dword ptr [esp + 0x10], eax
// 005a15ab  0f8c21feffff         jl 0x5a13d2
// 005a15b1  e9edfdffff           jmp 0x5a13a3
// 005a15b6  8b442410             mov eax, dword ptr [esp + 0x10]
// 005a15ba  5f                   pop edi
// 005a15bb  5e                   pop esi
// 005a15bc  894510               mov dword ptr [ebp + 0x10], eax
// 005a15bf  895d0c               mov dword ptr [ebp + 0xc], ebx
// 005a15c2  5d                   pop ebp
// 005a15c3  32c0                 xor al, al
// 005a15c5  5b                   pop ebx
// 005a15c6  83c42c               add esp, 0x2c
// 005a15c9  c3                   ret 
// 005a15ca  8b8ee0000000         mov ecx, dword ptr [esi + 0xe0]
// 005a15d0  8b96e8000000         mov edx, dword ptr [esi + 0xe8]
// 005a15d6  49                   dec ecx
// 005a15d7  394808               cmp dword ptr [eax + 8], ecx
// 005a15da  7305                 jae 0x5a15e1
// 005a15dc  8b4a0c               mov ecx, dword ptr [edx + 0xc]
// 005a15df  eb03                 jmp 0x5a15e4
// 005a15e1  8b4a48               mov ecx, dword ptr [edx + 0x48]
// 005a15e4  5f                   pop edi
// 005a15e5  894814               mov dword ptr [eax + 0x14], ecx
// 005a15e8  5e                   pop esi
// 005a15e9  33c9                 xor ecx, ecx
// 005a15eb  5d                   pop ebp
// 005a15ec  89480c               mov dword ptr [eax + 0xc], ecx
// 005a15ef  894810               mov dword ptr [eax + 0x10], ecx
// 005a15f2  b001                 mov al, 1
// 005a15f4  5b                   pop ebx
// 005a15f5  83c42c               add esp, 0x2c
// 005a15f8  c3                   ret 
// library jpeg-6b/jccoefct.c (function _compress_data)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jccoefct.c
