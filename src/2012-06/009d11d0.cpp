// roc 2012-06 009d11d0  unit: CXTPControls  size: 1229 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009d11d0
//
// 009d11d0  83ec3c               sub esp, 0x3c
// 009d11d3  8b442450             mov eax, dword ptr [esp + 0x50]
// 009d11d7  8b00                 mov eax, dword ptr [eax]
// 009d11d9  53                   push ebx
// 009d11da  8b5c244c             mov ebx, dword ptr [esp + 0x4c]
// 009d11de  55                   push ebp
// 009d11df  56                   push esi
// 009d11e0  8be9                 mov ebp, ecx
// 009d11e2  83e010               and eax, 0x10
// 009d11e5  57                   push edi
// 009d11e6  896c2410             mov dword ptr [esp + 0x10], ebp
// 009d11ea  8944241c             mov dword ptr [esp + 0x1c], eax
// 009d11ee  8bff                 mov edi, edi
// 009d11f0  8b4d2c               mov ecx, dword ptr [ebp + 0x2c]
// 009d11f3  8d41ff               lea eax, [ecx - 1]
// 009d11f6  33d2                 xor edx, edx
// 009d11f8  8bf8                 mov edi, eax
// 009d11fa  83ff02               cmp edi, 2
// 009d11fd  89542418             mov dword ptr [esp + 0x18], edx
// 009d1201  894c2414             mov dword ptr [esp + 0x14], ecx
// 009d1205  0f8c8c000000         jl 0x9d1297
// 009d120b  8bcf                 mov ecx, edi
// 009d120d  c1e106               shl ecx, 6
// 009d1210  8d5c1934             lea ebx, [ecx + ebx + 0x34]
// 009d1214  eb02                 jmp 0x9d1218
// 009d1216  33d2                 xor edx, edx
// 009d1218  3953f4               cmp dword ptr [ebx - 0xc], edx
// 009d121b  746d                 je 0x9d128a
// 009d121d  3913                 cmp dword ptr [ebx], edx
// 009d121f  7569                 jne 0x9d128a
// 009d1221  3bfa                 cmp edi, edx
// 009d1223  89542428             mov dword ptr [esp + 0x28], edx
// 009d1227  8954242c             mov dword ptr [esp + 0x2c], edx
// 009d122b  89542430             mov dword ptr [esp + 0x30], edx
// 009d122f  8bc7                 mov eax, edi
// 009d1231  7c57                 jl 0x9d128a
// 009d1233  8bf3                 mov esi, ebx
// 009d1235  837ef400             cmp dword ptr [esi - 0xc], 0
// 009d1239  743e                 je 0x9d1279
// 009d123b  83fa02               cmp edx, 2
// 009d123e  7405                 je 0x9d1245
// 009d1240  833e00               cmp dword ptr [esi], 0
// 009d1243  753c                 jne 0x9d1281
// 009d1245  85c0                 test eax, eax
// 009d1247  7c17                 jl 0x9d1260
// 009d1249  3b442414             cmp eax, dword ptr [esp + 0x14]
// 009d124d  7d11                 jge 0x9d1260
// 009d124f  3b452c               cmp eax, dword ptr [ebp + 0x2c]
// 009d1252  0f8dcb030000         jge 0x9d1623
// 009d1258  8b4d28               mov ecx, dword ptr [ebp + 0x28]
// 009d125b  8b0c81               mov ecx, dword ptr [ecx + eax*4]
// 009d125e  eb02                 jmp 0x9d1262
// 009d1260  33c9                 xor ecx, ecx
// 009d1262  83b94801000004       cmp dword ptr [ecx + 0x148], 4
// 009d1269  7516                 jne 0x9d1281
// 009d126b  89449428             mov dword ptr [esp + edx*4 + 0x28], eax
// 009d126f  42                   inc edx
// 009d1270  83fa03               cmp edx, 3
// 009d1273  0f84bd000000         je 0x9d1336
// 009d1279  48                   dec eax
// 009d127a  83ee40               sub esi, 0x40
// 009d127d  85c0                 test eax, eax
// 009d127f  7db4                 jge 0x9d1235
// 009d1281  83fa03               cmp edx, 3
// 009d1284  0f84ac000000         je 0x9d1336
// 009d128a  4f                   dec edi
// 009d128b  83eb40               sub ebx, 0x40
// 009d128e  83ff02               cmp edi, 2
// 009d1291  7d83                 jge 0x9d1216
// 009d1293  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 009d1297  8d41ff               lea eax, [ecx - 1]
// 009d129a  83f802               cmp eax, 2
// 009d129d  0f8c52010000         jl 0x9d13f5
// 009d12a3  8b542458             mov edx, dword ptr [esp + 0x58]
// 009d12a7  8bc8                 mov ecx, eax
// 009d12a9  c1e106               shl ecx, 6
// 009d12ac  837c112800           cmp dword ptr [ecx + edx + 0x28], 0
// 009d12b1  8d3c11               lea edi, [ecx + edx]
// 009d12b4  0f8429010000         je 0x9d13e3
// 009d12ba  837f3400             cmp dword ptr [edi + 0x34], 0
// 009d12be  0f851f010000         jne 0x9d13e3
// 009d12c4  33f6                 xor esi, esi
// 009d12c6  33db                 xor ebx, ebx
// 009d12c8  33ed                 xor ebp, ebp
// 009d12ca  33d2                 xor edx, edx
// 009d12cc  33c9                 xor ecx, ecx
// 009d12ce  89742434             mov dword ptr [esp + 0x34], esi
// 009d12d2  895c2438             mov dword ptr [esp + 0x38], ebx
// 009d12d6  896c243c             mov dword ptr [esp + 0x3c], ebp
// 009d12da  85c0                 test eax, eax
// 009d12dc  0f8cf8000000         jl 0x9d13da
// 009d12e2  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 009d12e6  8d7734               lea esi, [edi + 0x34]
// 009d12e9  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 009d12ed  8d6a04               lea ebp, [edx + 4]
// 009d12f0  837ef400             cmp dword ptr [esi - 0xc], 0
// 009d12f4  0f84c8000000         je 0x9d13c2
// 009d12fa  83fa02               cmp edx, 2
// 009d12fd  7409                 je 0x9d1308
// 009d12ff  833e00               cmp dword ptr [esi], 0
// 009d1302  0f85c6000000         jne 0x9d13ce
// 009d1308  89449434             mov dword ptr [esp + edx*4 + 0x34], eax
// 009d130c  42                   inc edx
// 009d130d  85c9                 test ecx, ecx
// 009d130f  0f85a3000000         jne 0x9d13b8
// 009d1315  85c0                 test eax, eax
// 009d1317  0f8c8d000000         jl 0x9d13aa
// 009d131d  3bc3                 cmp eax, ebx
// 009d131f  0f8d85000000         jge 0x9d13aa
// 009d1325  3b472c               cmp eax, dword ptr [edi + 0x2c]
// 009d1328  0f8df5020000         jge 0x9d1623
// 009d132e  8b4f28               mov ecx, dword ptr [edi + 0x28]
// 009d1331  8b0c81               mov ecx, dword ptr [ecx + eax*4]
// 009d1334  eb76                 jmp 0x9d13ac
// 009d1336  8b442428             mov eax, dword ptr [esp + 0x28]
// 009d133a  85c0                 test eax, eax
// 009d133c  7c17                 jl 0x9d1355
// 009d133e  3b442414             cmp eax, dword ptr [esp + 0x14]
// 009d1342  7d11                 jge 0x9d1355
// 009d1344  3b452c               cmp eax, dword ptr [ebp + 0x2c]
// 009d1347  0f8dd6020000         jge 0x9d1623
// 009d134d  8b5528               mov edx, dword ptr [ebp + 0x28]
// 009d1350  8b0482               mov eax, dword ptr [edx + eax*4]
// 009d1353  eb02                 jmp 0x9d1357
// 009d1355  33c0                 xor eax, eax
// 009d1357  b903000000           mov ecx, 3
// 009d135c  898848010000         mov dword ptr [eax + 0x148], ecx
// 009d1362  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 009d1366  85c0                 test eax, eax
// 009d1368  7c0d                 jl 0x9d1377
// 009d136a  3b452c               cmp eax, dword ptr [ebp + 0x2c]
// 009d136d  7d08                 jge 0x9d1377
// 009d136f  8b5528               mov edx, dword ptr [ebp + 0x28]
// 009d1372  8b0482               mov eax, dword ptr [edx + eax*4]
// 009d1375  eb02                 jmp 0x9d1379
// 009d1377  33c0                 xor eax, eax
// 009d1379  898848010000         mov dword ptr [eax + 0x148], ecx
// 009d137f  8b442430             mov eax, dword ptr [esp + 0x30]
// 009d1383  85c0                 test eax, eax
// 009d1385  7c16                 jl 0x9d139d
// 009d1387  3b452c               cmp eax, dword ptr [ebp + 0x2c]
// 009d138a  7d11                 jge 0x9d139d
// 009d138c  8b5528               mov edx, dword ptr [ebp + 0x28]
// 009d138f  8b0482               mov eax, dword ptr [edx + eax*4]
// 009d1392  898848010000         mov dword ptr [eax + 0x148], ecx
// 009d1398  e90a020000           jmp 0x9d15a7
// 009d139d  33c0                 xor eax, eax
// 009d139f  898848010000         mov dword ptr [eax + 0x148], ecx
// 009d13a5  e9fd010000           jmp 0x9d15a7
// 009d13aa  33c9                 xor ecx, ecx
// 009d13ac  39a948010000         cmp dword ptr [ecx + 0x148], ebp
// 009d13b2  7404                 je 0x9d13b8
// 009d13b4  33c9                 xor ecx, ecx
// 009d13b6  eb05                 jmp 0x9d13bd
// 009d13b8  b901000000           mov ecx, 1
// 009d13bd  83fa03               cmp edx, 3
// 009d13c0  740c                 je 0x9d13ce
// 009d13c2  48                   dec eax
// 009d13c3  83ee40               sub esi, 0x40
// 009d13c6  85c0                 test eax, eax
// 009d13c8  0f8d22ffffff         jge 0x9d12f0
// 009d13ce  8b6c243c             mov ebp, dword ptr [esp + 0x3c]
// 009d13d2  8b5c2438             mov ebx, dword ptr [esp + 0x38]
// 009d13d6  8b742434             mov esi, dword ptr [esp + 0x34]
// 009d13da  83fa03               cmp edx, 3
// 009d13dd  7504                 jne 0x9d13e3
// 009d13df  85c9                 test ecx, ecx
// 009d13e1  7572                 jne 0x9d1455
// 009d13e3  48                   dec eax
// 009d13e4  83f802               cmp eax, 2
// 009d13e7  0f8db6feffff         jge 0x9d12a3
// 009d13ed  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 009d13f1  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 009d13f5  8d41ff               lea eax, [ecx - 1]
// 009d13f8  8bd8                 mov ebx, eax
// 009d13fa  83fb02               cmp ebx, 2
// 009d13fd  0f8cac010000         jl 0x9d15af
// 009d1403  8b542458             mov edx, dword ptr [esp + 0x58]
// 009d1407  8bcb                 mov ecx, ebx
// 009d1409  c1e106               shl ecx, 6
// 009d140c  8d6c1134             lea ebp, [ecx + edx + 0x34]
// 009d1410  33c9                 xor ecx, ecx
// 009d1412  394df4               cmp dword ptr [ebp - 0xc], ecx
// 009d1415  0f8407010000         je 0x9d1522
// 009d141b  394d00               cmp dword ptr [ebp], ecx
// 009d141e  0f85fe000000         jne 0x9d1522
// 009d1424  33d2                 xor edx, edx
// 009d1426  3bd9                 cmp ebx, ecx
// 009d1428  894c2440             mov dword ptr [esp + 0x40], ecx
// 009d142c  894c2444             mov dword ptr [esp + 0x44], ecx
// 009d1430  894c2448             mov dword ptr [esp + 0x48], ecx
// 009d1434  8bc3                 mov eax, ebx
// 009d1436  0f8ce6000000         jl 0x9d1522
// 009d143c  8d7dd0               lea edi, [ebp - 0x30]
// 009d143f  90                   nop 
// 009d1440  837f2400             cmp dword ptr [edi + 0x24], 0
// 009d1444  0f84c7000000         je 0x9d1511
// 009d144a  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 009d144f  7474                 je 0x9d14c5
// 009d1451  8b37                 mov esi, dword ptr [edi]
// 009d1453  eb73                 jmp 0x9d14c8
// 009d1455  85f6                 test esi, esi
// 009d1457  7c1b                 jl 0x9d1474
// 009d1459  3b742414             cmp esi, dword ptr [esp + 0x14]
// 009d145d  7d15                 jge 0x9d1474
// 009d145f  8b442410             mov eax, dword ptr [esp + 0x10]
// 009d1463  3b702c               cmp esi, dword ptr [eax + 0x2c]
// 009d1466  0f8db7010000         jge 0x9d1623
// 009d146c  8b5028               mov edx, dword ptr [eax + 0x28]
// 009d146f  8b34b2               mov esi, dword ptr [edx + esi*4]
// 009d1472  eb06                 jmp 0x9d147a
// 009d1474  8b442410             mov eax, dword ptr [esp + 0x10]
// 009d1478  33f6                 xor esi, esi
// 009d147a  b903000000           mov ecx, 3
// 009d147f  898e48010000         mov dword ptr [esi + 0x148], ecx
// 009d1485  85db                 test ebx, ebx
// 009d1487  7c0d                 jl 0x9d1496
// 009d1489  3b582c               cmp ebx, dword ptr [eax + 0x2c]
// 009d148c  7d08                 jge 0x9d1496
// 009d148e  8b5028               mov edx, dword ptr [eax + 0x28]
// 009d1491  8b1c9a               mov ebx, dword ptr [edx + ebx*4]
// 009d1494  eb02                 jmp 0x9d1498
// 009d1496  33db                 xor ebx, ebx
// 009d1498  898b48010000         mov dword ptr [ebx + 0x148], ecx
// 009d149e  85ed                 test ebp, ebp
// 009d14a0  7c16                 jl 0x9d14b8
// 009d14a2  3b682c               cmp ebp, dword ptr [eax + 0x2c]
// 009d14a5  7d11                 jge 0x9d14b8
// 009d14a7  8b4028               mov eax, dword ptr [eax + 0x28]
// 009d14aa  8b04a8               mov eax, dword ptr [eax + ebp*4]
// 009d14ad  898848010000         mov dword ptr [eax + 0x148], ecx
// 009d14b3  e9eb000000           jmp 0x9d15a3
// 009d14b8  33c0                 xor eax, eax
// 009d14ba  898848010000         mov dword ptr [eax + 0x148], ecx
// 009d14c0  e9de000000           jmp 0x9d15a3
// 009d14c5  8b77fc               mov esi, dword ptr [edi - 4]
// 009d14c8  85c9                 test ecx, ecx
// 009d14ca  7404                 je 0x9d14d0
// 009d14cc  3bf2                 cmp esi, edx
// 009d14ce  754d                 jne 0x9d151d
// 009d14d0  83f902               cmp ecx, 2
// 009d14d3  7406                 je 0x9d14db
// 009d14d5  837f3000             cmp dword ptr [edi + 0x30], 0
// 009d14d9  7542                 jne 0x9d151d
// 009d14db  85c0                 test eax, eax
// 009d14dd  7c1b                 jl 0x9d14fa
// 009d14df  3b442414             cmp eax, dword ptr [esp + 0x14]
// 009d14e3  7d15                 jge 0x9d14fa
// 009d14e5  8b542410             mov edx, dword ptr [esp + 0x10]
// 009d14e9  3b422c               cmp eax, dword ptr [edx + 0x2c]
// 009d14ec  0f8d31010000         jge 0x9d1623
// 009d14f2  8b5228               mov edx, dword ptr [edx + 0x28]
// 009d14f5  8b1482               mov edx, dword ptr [edx + eax*4]
// 009d14f8  eb02                 jmp 0x9d14fc
// 009d14fa  33d2                 xor edx, edx
// 009d14fc  83ba4801000003       cmp dword ptr [edx + 0x148], 3
// 009d1503  7518                 jne 0x9d151d
// 009d1505  89448c40             mov dword ptr [esp + ecx*4 + 0x40], eax
// 009d1509  41                   inc ecx
// 009d150a  8bd6                 mov edx, esi
// 009d150c  83f903               cmp ecx, 3
// 009d150f  7424                 je 0x9d1535
// 009d1511  48                   dec eax
// 009d1512  83ef40               sub edi, 0x40
// 009d1515  85c0                 test eax, eax
// 009d1517  0f8d23ffffff         jge 0x9d1440
// 009d151d  83f903               cmp ecx, 3
// 009d1520  7413                 je 0x9d1535
// 009d1522  4b                   dec ebx
// 009d1523  83ed40               sub ebp, 0x40
// 009d1526  83fb02               cmp ebx, 2
// 009d1529  0f8de1feffff         jge 0x9d1410
// 009d152f  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 009d1533  eb7a                 jmp 0x9d15af
// 009d1535  8b442440             mov eax, dword ptr [esp + 0x40]
// 009d1539  85c0                 test eax, eax
// 009d153b  7c1b                 jl 0x9d1558
// 009d153d  3b442414             cmp eax, dword ptr [esp + 0x14]
// 009d1541  7d15                 jge 0x9d1558
// 009d1543  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 009d1547  3b412c               cmp eax, dword ptr [ecx + 0x2c]
// 009d154a  0f8dd3000000         jge 0x9d1623
// 009d1550  8b5128               mov edx, dword ptr [ecx + 0x28]
// 009d1553  8b0482               mov eax, dword ptr [edx + eax*4]
// 009d1556  eb06                 jmp 0x9d155e
// 009d1558  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 009d155c  33c0                 xor eax, eax
// 009d155e  ba02000000           mov edx, 2
// 009d1563  899048010000         mov dword ptr [eax + 0x148], edx
// 009d1569  8b442444             mov eax, dword ptr [esp + 0x44]
// 009d156d  85c0                 test eax, eax
// 009d156f  7c0d                 jl 0x9d157e
// 009d1571  3b412c               cmp eax, dword ptr [ecx + 0x2c]
// 009d1574  7d08                 jge 0x9d157e
// 009d1576  8b7128               mov esi, dword ptr [ecx + 0x28]
// 009d1579  8b0486               mov eax, dword ptr [esi + eax*4]
// 009d157c  eb02                 jmp 0x9d1580
// 009d157e  33c0                 xor eax, eax
// 009d1580  899048010000         mov dword ptr [eax + 0x148], edx
// 009d1586  8b442448             mov eax, dword ptr [esp + 0x48]
// 009d158a  85c0                 test eax, eax
// 009d158c  7c0d                 jl 0x9d159b
// 009d158e  3b412c               cmp eax, dword ptr [ecx + 0x2c]
// 009d1591  7d08                 jge 0x9d159b
// 009d1593  8b4928               mov ecx, dword ptr [ecx + 0x28]
// 009d1596  8b0481               mov eax, dword ptr [ecx + eax*4]
// 009d1599  eb02                 jmp 0x9d159d
// 009d159b  33c0                 xor eax, eax
// 009d159d  899048010000         mov dword ptr [eax + 0x148], edx
// 009d15a3  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 009d15a7  c744241801000000     mov dword ptr [esp + 0x18], 1
// 009d15af  8b742460             mov esi, dword ptr [esp + 0x60]
// 009d15b3  8b5c2458             mov ebx, dword ptr [esp + 0x58]
// 009d15b7  8b542454             mov edx, dword ptr [esp + 0x54]
// 009d15bb  56                   push esi
// 009d15bc  53                   push ebx
// 009d15bd  52                   push edx
// 009d15be  8d44242c             lea eax, [esp + 0x2c]
// 009d15c2  50                   push eax
// 009d15c3  8bcd                 mov ecx, ebp
// 009d15c5  e896ecffff           call 0x9d0260
// 009d15ca  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 009d15cf  8b5004               mov edx, dword ptr [eax + 4]
// 009d15d2  8b08                 mov ecx, dword ptr [eax]
// 009d15d4  8bc2                 mov eax, edx
// 009d15d6  7502                 jne 0x9d15da
// 009d15d8  8bc1                 mov eax, ecx
// 009d15da  3b44245c             cmp eax, dword ptr [esp + 0x5c]
// 009d15de  0f8ca6000000         jl 0x9d168a
// 009d15e4  837c241800           cmp dword ptr [esp + 0x18], 0
// 009d15e9  0f8501fcffff         jne 0x9d11f0
// 009d15ef  f60680               test byte ptr [esi], 0x80
// 009d15f2  0f8492000000         je 0x9d168a
// 009d15f8  8b4d2c               mov ecx, dword ptr [ebp + 0x2c]
// 009d15fb  bf01000000           mov edi, 1
// 009d1600  33c0                 xor eax, eax
// 009d1602  8bf7                 mov esi, edi
// 009d1604  85c9                 test ecx, ecx
// 009d1606  7e5b                 jle 0x9d1663
// 009d1608  8bd3                 mov edx, ebx
// 009d160a  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 009d160e  83c20c               add edx, 0xc
// 009d1611  837a1c00             cmp dword ptr [edx + 0x1c], 0
// 009d1615  7440                 je 0x9d1657
// 009d1617  85f6                 test esi, esi
// 009d1619  753a                 jne 0x9d1655
// 009d161b  85db                 test ebx, ebx
// 009d161d  7409                 je 0x9d1628
// 009d161f  8b32                 mov esi, dword ptr [edx]
// 009d1621  eb08                 jmp 0x9d162b
// 009d1623  e8980dfbff           call 0x9823c0
// 009d1628  8b72fc               mov esi, dword ptr [edx - 4]
// 009d162b  3b74245c             cmp esi, dword ptr [esp + 0x5c]
// 009d162f  7e24                 jle 0x9d1655
// 009d1631  85c0                 test eax, eax
// 009d1633  7c11                 jl 0x9d1646
// 009d1635  3bc1                 cmp eax, ecx
// 009d1637  7d0d                 jge 0x9d1646
// 009d1639  3b452c               cmp eax, dword ptr [ebp + 0x2c]
// 009d163c  7de5                 jge 0x9d1623
// 009d163e  8b4d28               mov ecx, dword ptr [ebp + 0x28]
// 009d1641  8b0c81               mov ecx, dword ptr [ecx + eax*4]
// 009d1644  eb02                 jmp 0x9d1648
// 009d1646  33c9                 xor ecx, ecx
// 009d1648  c7814801000002000000 mov dword ptr [ecx + 0x148], 2
// 009d1652  897a24               mov dword ptr [edx + 0x24], edi
// 009d1655  33f6                 xor esi, esi
// 009d1657  8b4d2c               mov ecx, dword ptr [ebp + 0x2c]
// 009d165a  03c7                 add eax, edi
// 009d165c  83c240               add edx, 0x40
// 009d165f  3bc1                 cmp eax, ecx
// 009d1661  7cae                 jl 0x9d1611
// 009d1663  8b542460             mov edx, dword ptr [esp + 0x60]
// 009d1667  8b442458             mov eax, dword ptr [esp + 0x58]
// 009d166b  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 009d166f  8b742450             mov esi, dword ptr [esp + 0x50]
// 009d1673  52                   push edx
// 009d1674  50                   push eax
// 009d1675  51                   push ecx
// 009d1676  56                   push esi
// 009d1677  8bcd                 mov ecx, ebp
// 009d1679  e8e2ebffff           call 0x9d0260
// 009d167e  5f                   pop edi
// 009d167f  8bc6                 mov eax, esi
// 009d1681  5e                   pop esi
// 009d1682  5d                   pop ebp
// 009d1683  5b                   pop ebx
// 009d1684  83c43c               add esp, 0x3c
// 009d1687  c21400               ret 0x14
// 009d168a  8b442450             mov eax, dword ptr [esp + 0x50]
// 009d168e  5f                   pop edi
// 009d168f  5e                   pop esi
// 009d1690  5d                   pop ebp
// 009d1691  895004               mov dword ptr [eax + 4], edx
// 009d1694  8908                 mov dword ptr [eax], ecx
// 009d1696  5b                   pop ebx
// 009d1697  83c43c               add esp, 0x3c
// 009d169a  c21400               ret 0x14
// library xtp-11.2.2/Source\CommandBars\XTPControls.cpp (function ?_ReduceSmartLayoutToolBar@CXTPControls@@IAE?AVCSize@@PAVCDC@@PAUXTPBUTTONINFO@1@HAAK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControls.cpp
