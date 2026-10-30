// roc 2010-06 007b1110  unit: CXTPPaintManager  size: 1820 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007b1110
//
// 007b1110  6aff                 push -1
// 007b1112  6895ec9a00           push 0x9aec95
// 007b1117  64a100000000         mov eax, dword ptr fs:[0]
// 007b111d  50                   push eax
// 007b111e  83ec6c               sub esp, 0x6c
// 007b1121  53                   push ebx
// 007b1122  55                   push ebp
// 007b1123  56                   push esi
// 007b1124  57                   push edi
// 007b1125  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 007b112a  33c4                 xor eax, esp
// 007b112c  50                   push eax
// 007b112d  8d842480000000       lea eax, [esp + 0x80]
// 007b1134  64a300000000         mov dword ptr fs:[0], eax
// 007b113a  8bd9                 mov ebx, ecx
// 007b113c  8bb42498000000       mov esi, dword ptr [esp + 0x98]
// 007b1143  8b8ec0000000         mov ecx, dword ptr [esi + 0xc0]
// 007b1149  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 007b114f  8b96c4000000         mov edx, dword ptr [esi + 0xc4]
// 007b1155  33ed                 xor ebp, ebp
// 007b1157  894c2460             mov dword ptr [esp + 0x60], ecx
// 007b115b  8b8ecc000000         mov ecx, dword ptr [esi + 0xcc]
// 007b1161  8944242c             mov dword ptr [esp + 0x2c], eax
// 007b1165  8b86c8000000         mov eax, dword ptr [esi + 0xc8]
// 007b116b  89542464             mov dword ptr [esp + 0x64], edx
// 007b116f  8b96fc000000         mov edx, dword ptr [esi + 0xfc]
// 007b1175  894c246c             mov dword ptr [esp + 0x6c], ecx
// 007b1179  8bce                 mov ecx, esi
// 007b117b  896c2414             mov dword ptr [esp + 0x14], ebp
// 007b117f  896c2450             mov dword ptr [esp + 0x50], ebp
// 007b1183  896c2454             mov dword ptr [esp + 0x54], ebp
// 007b1187  896c2458             mov dword ptr [esp + 0x58], ebp
// 007b118b  896c245c             mov dword ptr [esp + 0x5c], ebp
// 007b118f  896c2470             mov dword ptr [esp + 0x70], ebp
// 007b1193  896c2474             mov dword ptr [esp + 0x74], ebp
// 007b1197  896c2478             mov dword ptr [esp + 0x78], ebp
// 007b119b  896c247c             mov dword ptr [esp + 0x7c], ebp
// 007b119f  89442468             mov dword ptr [esp + 0x68], eax
// 007b11a3  89542424             mov dword ptr [esp + 0x24], edx
// 007b11a7  e8248cffff           call 0x7a9dd0
// 007b11ac  8bf8                 mov edi, eax
// 007b11ae  8b06                 mov eax, dword ptr [esi]
// 007b11b0  8b5058               mov edx, dword ptr [eax + 0x58]
// 007b11b3  8d4c2420             lea ecx, [esp + 0x20]
// 007b11b7  51                   push ecx
// 007b11b8  8bce                 mov ecx, esi
// 007b11ba  897c2434             mov dword ptr [esp + 0x34], edi
// 007b11be  ffd2                 call edx
// 007b11c0  89ac2488000000       mov dword ptr [esp + 0x88], ebp
// 007b11c7  3bfd                 cmp edi, ebp
// 007b11c9  740c                 je 0x7b11d7
// 007b11cb  89ac2498000000       mov dword ptr [esp + 0x98], ebp
// 007b11d2  83ff01               cmp edi, 1
// 007b11d5  740b                 je 0x7b11e2
// 007b11d7  c784249800000001000000 mov dword ptr [esp + 0x98], 1
// 007b11e2  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 007b11e6  8b03                 mov eax, dword ptr [ebx]
// 007b11e8  8b9010010000         mov edx, dword ptr [eax + 0x110]
// 007b11ee  57                   push edi
// 007b11ef  8d4c243c             lea ecx, [esp + 0x3c]
// 007b11f3  51                   push ecx
// 007b11f4  8bcb                 mov ecx, ebx
// 007b11f6  ffd2                 call edx
// 007b11f8  8b07                 mov eax, dword ptr [edi]
// 007b11fa  8b90a0010000         mov edx, dword ptr [eax + 0x1a0]
// 007b1200  8bcf                 mov ecx, edi
// 007b1202  ffd2                 call edx
// 007b1204  85c0                 test eax, eax
// 007b1206  7415                 je 0x7b121d
// 007b1208  39af10020000         cmp dword ptr [edi + 0x210], ebp
// 007b120e  740d                 je 0x7b121d
// 007b1210  8b442438             mov eax, dword ptr [esp + 0x38]
// 007b1214  8d0c00               lea ecx, [eax + eax]
// 007b1217  894c241c             mov dword ptr [esp + 0x1c], ecx
// 007b121b  eb08                 jmp 0x7b1225
// 007b121d  8b542438             mov edx, dword ptr [esp + 0x38]
// 007b1221  8954241c             mov dword ptr [esp + 0x1c], edx
// 007b1225  8b06                 mov eax, dword ptr [esi]
// 007b1227  8b506c               mov edx, dword ptr [eax + 0x6c]
// 007b122a  8bce                 mov ecx, esi
// 007b122c  ffd2                 call edx
// 007b122e  89442428             mov dword ptr [esp + 0x28], eax
// 007b1232  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 007b1238  83f8ff               cmp eax, -1
// 007b123b  750f                 jne 0x7b124c
// 007b123d  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 007b1243  3bcd                 cmp ecx, ebp
// 007b1245  7405                 je 0x7b124c
// 007b1247  e84494ffff           call 0x7aa690
// 007b124c  89442418             mov dword ptr [esp + 0x18], eax
// 007b1250  b804000000           mov eax, 4
// 007b1255  39442424             cmp dword ptr [esp + 0x24], eax
// 007b1259  750a                 jne 0x7b1265
// 007b125b  39442418             cmp dword ptr [esp + 0x18], eax
// 007b125f  7504                 jne 0x7b1265
// 007b1261  896c2418             mov dword ptr [esp + 0x18], ebp
// 007b1265  8b86fc000000         mov eax, dword ptr [esi + 0xfc]
// 007b126b  83f808               cmp eax, 8
// 007b126e  7524                 jne 0x7b1294
// 007b1270  39ab90000000         cmp dword ptr [ebx + 0x90], ebp
// 007b1276  7504                 jne 0x7b127c
// 007b1278  896c241c             mov dword ptr [esp + 0x1c], ebp
// 007b127c  83f808               cmp eax, 8
// 007b127f  7513                 jne 0x7b1294
// 007b1281  39ac2498000000       cmp dword ptr [esp + 0x98], ebp
// 007b1288  750a                 jne 0x7b1294
// 007b128a  8b8310010000         mov eax, dword ptr [ebx + 0x110]
// 007b1290  8944243c             mov dword ptr [esp + 0x3c], eax
// 007b1294  39ac249c000000       cmp dword ptr [esp + 0x9c], ebp
// 007b129b  8bac2494000000       mov ebp, dword ptr [esp + 0x94]
// 007b12a2  0f84e9000000         je 0x7b1391
// 007b12a8  8b8380000000         mov eax, dword ptr [ebx + 0x80]
// 007b12ae  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 007b12b2  03442460             add eax, dword ptr [esp + 0x60]
// 007b12b6  8b542468             mov edx, dword ptr [esp + 0x68]
// 007b12ba  0344241c             add eax, dword ptr [esp + 0x1c]
// 007b12be  8b3dc0bb9e00         mov edi, dword ptr [0x9ebbc0]
// 007b12c4  51                   push ecx
// 007b12c5  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 007b12c9  52                   push edx
// 007b12ca  51                   push ecx
// 007b12cb  50                   push eax
// 007b12cc  8d542460             lea edx, [esp + 0x60]
// 007b12d0  52                   push edx
// 007b12d1  ffd7                 call edi
// 007b12d3  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 007b12d7  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 007b12db  8b442468             mov eax, dword ptr [esp + 0x68]
// 007b12df  8d4c1108             lea ecx, [ecx + edx + 8]
// 007b12e3  8b54246c             mov edx, dword ptr [esp + 0x6c]
// 007b12e7  52                   push edx
// 007b12e8  83c0ed               add eax, -0x13
// 007b12eb  50                   push eax
// 007b12ec  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 007b12f0  50                   push eax
// 007b12f1  51                   push ecx
// 007b12f2  8d8c2480000000       lea ecx, [esp + 0x80]
// 007b12f9  51                   push ecx
// 007b12fa  ffd7                 call edi
// 007b12fc  bf01000000           mov edi, 1
// 007b1301  397c2424             cmp dword ptr [esp + 0x24], edi
// 007b1305  7527                 jne 0x7b132e
// 007b1307  8d942494000000       lea edx, [esp + 0x94]
// 007b130e  52                   push edx
// 007b130f  8bce                 mov ecx, esi
// 007b1311  e8aa88ffff           call 0x7a9bc0
// 007b1316  8bc8                 mov ecx, eax
// 007b1318  897c2414             mov dword ptr [esp + 0x14], edi
// 007b131c  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 007b1322  c684249800000001     mov byte ptr [esp + 0x98], 1
// 007b132a  85c0                 test eax, eax
// 007b132c  7508                 jne 0x7b1336
// 007b132e  c684249800000000     mov byte ptr [esp + 0x98], 0
// 007b1336  f644241401           test byte ptr [esp + 0x14], 1
// 007b133b  7412                 je 0x7b134f
// 007b133d  83642414fe           and dword ptr [esp + 0x14], 0xfffffffe
// 007b1342  8d8c2494000000       lea ecx, [esp + 0x94]
// 007b1349  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 007b134f  80bc249800000000     cmp byte ptr [esp + 0x98], 0
// 007b1357  7434                 je 0x7b138d
// 007b1359  8d842498000000       lea eax, [esp + 0x98]
// 007b1360  50                   push eax
// 007b1361  8bce                 mov ecx, esi
// 007b1363  e85888ffff           call 0x7a9bc0
// 007b1368  50                   push eax
// 007b1369  8d4c2444             lea ecx, [esp + 0x44]
// 007b136d  51                   push ecx
// 007b136e  8bcd                 mov ecx, ebp
// 007b1370  e83bdbcbff           call 0x46eeb0
// 007b1375  baedffffff           mov edx, 0xffffffed
// 007b137a  2b10                 sub edx, dword ptr [eax]
// 007b137c  8d8c2498000000       lea ecx, [esp + 0x98]
// 007b1383  01542458             add dword ptr [esp + 0x58], edx
// 007b1387  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 007b138d  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 007b1391  8b07                 mov eax, dword ptr [edi]
// 007b1393  8b90a8010000         mov edx, dword ptr [eax + 0x1a8]
// 007b1399  8bcf                 mov ecx, edi
// 007b139b  ffd2                 call edx
// 007b139d  8bf8                 mov edi, eax
// 007b139f  85ff                 test edi, edi
// 007b13a1  750d                 jne 0x7b13b0
// 007b13a3  8d442420             lea eax, [esp + 0x20]
// 007b13a7  50                   push eax
// 007b13a8  e8f3bfffff           call 0x7ad3a0
// 007b13ad  83c404               add esp, 4
// 007b13b0  837c243005           cmp dword ptr [esp + 0x30], 5
// 007b13b5  752a                 jne 0x7b13e1
// 007b13b7  8b16                 mov edx, dword ptr [esi]
// 007b13b9  8b525c               mov edx, dword ptr [edx + 0x5c]
// 007b13bc  8d842494000000       lea eax, [esp + 0x94]
// 007b13c3  50                   push eax
// 007b13c4  8bce                 mov ecx, esi
// 007b13c6  ffd2                 call edx
// 007b13c8  834c241402           or dword ptr [esp + 0x14], 2
// 007b13cd  8bc8                 mov ecx, eax
// 007b13cf  ff15eccd9e00         call dword ptr [0x9ecdec]
// 007b13d5  c684249800000001     mov byte ptr [esp + 0x98], 1
// 007b13dd  84c0                 test al, al
// 007b13df  7408                 je 0x7b13e9
// 007b13e1  c684249800000000     mov byte ptr [esp + 0x98], 0
// 007b13e9  f644241402           test byte ptr [esp + 0x14], 2
// 007b13ee  7412                 je 0x7b1402
// 007b13f0  83642414fd           and dword ptr [esp + 0x14], 0xfffffffd
// 007b13f5  8d8c2494000000       lea ecx, [esp + 0x94]
// 007b13fc  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 007b1402  80bc249800000000     cmp byte ptr [esp + 0x98], 0
// 007b140a  0f84de020000         je 0x7b16ee
// 007b1410  8d83f8000000         lea eax, [ebx + 0xf8]
// 007b1416  50                   push eax
// 007b1417  55                   push ebp
// 007b1418  8d4c2448             lea ecx, [esp + 0x48]
// 007b141c  e87fe20400           call 0x7ff6a0
// 007b1421  83bc249c00000000     cmp dword ptr [esp + 0x9c], 0
// 007b1429  c684248800000001     mov byte ptr [esp + 0x88], 1
// 007b1431  742a                 je 0x7b145d
// 007b1433  8b5508               mov edx, dword ptr [ebp + 8]
// 007b1436  8d4c2430             lea ecx, [esp + 0x30]
// 007b143a  51                   push ecx
// 007b143b  6a01                 push 1
// 007b143d  68e86ea000           push 0xa06ee8
// 007b1442  52                   push edx
// 007b1443  ff1594a19e00         call dword ptr [0x9ea194]
// 007b1449  8b442454             mov eax, dword ptr [esp + 0x54]
// 007b144d  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 007b1451  8d44010a             lea eax, [ecx + eax + 0xa]
// 007b1455  8944245c             mov dword ptr [esp + 0x5c], eax
// 007b1459  8944247c             mov dword ptr [esp + 0x7c], eax
// 007b145d  8b442418             mov eax, dword ptr [esp + 0x18]
// 007b1461  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 007b1465  8b13                 mov edx, dword ptr [ebx]
// 007b1467  8b9214010000         mov edx, dword ptr [edx + 0x114]
// 007b146d  50                   push eax
// 007b146e  8b8424a0000000       mov eax, dword ptr [esp + 0xa0]
// 007b1475  f7df                 neg edi
// 007b1477  51                   push ecx
// 007b1478  1bff                 sbb edi, edi
// 007b147a  50                   push eax
// 007b147b  81e700f8ffff         and edi, 0xfffff800
// 007b1481  81c700080000         add edi, 0x800
// 007b1487  81cf00800000         or edi, 0x8000
// 007b148d  57                   push edi
// 007b148e  8d4c2460             lea ecx, [esp + 0x60]
// 007b1492  51                   push ecx
// 007b1493  8d442434             lea eax, [esp + 0x34]
// 007b1497  50                   push eax
// 007b1498  55                   push ebp
// 007b1499  8bcb                 mov ecx, ebx
// 007b149b  ffd2                 call edx
// 007b149d  837c242401           cmp dword ptr [esp + 0x24], 1
// 007b14a2  7528                 jne 0x7b14cc
// 007b14a4  8d842494000000       lea eax, [esp + 0x94]
// 007b14ab  50                   push eax
// 007b14ac  8bce                 mov ecx, esi
// 007b14ae  e80d87ffff           call 0x7a9bc0
// 007b14b3  834c241404           or dword ptr [esp + 0x14], 4
// 007b14b8  8bc8                 mov ecx, eax
// 007b14ba  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 007b14c0  c684249800000001     mov byte ptr [esp + 0x98], 1
// 007b14c8  85c0                 test eax, eax
// 007b14ca  7508                 jne 0x7b14d4
// 007b14cc  c684249800000000     mov byte ptr [esp + 0x98], 0
// 007b14d4  f644241404           test byte ptr [esp + 0x14], 4
// 007b14d9  740d                 je 0x7b14e8
// 007b14db  8d8c2494000000       lea ecx, [esp + 0x94]
// 007b14e2  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 007b14e8  80bc249800000000     cmp byte ptr [esp + 0x98], 0
// 007b14f0  744e                 je 0x7b1540
// 007b14f2  8d8c2498000000       lea ecx, [esp + 0x98]
// 007b14f9  51                   push ecx
// 007b14fa  8bce                 mov ecx, esi
// 007b14fc  e8bf86ffff           call 0x7a9bc0
// 007b1501  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007b1505  8b13                 mov edx, dword ptr [ebx]
// 007b1507  8b9214010000         mov edx, dword ptr [edx + 0x114]
// 007b150d  51                   push ecx
// 007b150e  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 007b1512  51                   push ecx
// 007b1513  8b8c24a4000000       mov ecx, dword ptr [esp + 0xa4]
// 007b151a  51                   push ecx
// 007b151b  6a02                 push 2
// 007b151d  8d8c2480000000       lea ecx, [esp + 0x80]
// 007b1524  51                   push ecx
// 007b1525  50                   push eax
// 007b1526  55                   push ebp
// 007b1527  8bcb                 mov ecx, ebx
// 007b1529  c68424a400000002     mov byte ptr [esp + 0xa4], 2
// 007b1531  ffd2                 call edx
// 007b1533  8d8c2498000000       lea ecx, [esp + 0x98]
// 007b153a  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 007b1540  8d4c2440             lea ecx, [esp + 0x40]
// 007b1544  c684248800000000     mov byte ptr [esp + 0x88], 0
// 007b154c  e8cfe10400           call 0x7ff720
// 007b1551  33ff                 xor edi, edi
// 007b1553  39bc249c000000       cmp dword ptr [esp + 0x9c], edi
// 007b155a  0f8485000000         je 0x7b15e5
// 007b1560  8b442468             mov eax, dword ptr [esp + 0x68]
// 007b1564  8b542450             mov edx, dword ptr [esp + 0x50]
// 007b1568  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 007b156c  83c0f6               add eax, -0xa
// 007b156f  89442448             mov dword ptr [esp + 0x48], eax
// 007b1573  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 007b1577  83c1fe               add ecx, -2
// 007b157a  89542440             mov dword ptr [esp + 0x40], edx
// 007b157e  8b16                 mov edx, dword ptr [esi]
// 007b1580  8b525c               mov edx, dword ptr [edx + 0x5c]
// 007b1583  8944244c             mov dword ptr [esp + 0x4c], eax
// 007b1587  8d84249c000000       lea eax, [esp + 0x9c]
// 007b158e  894c2444             mov dword ptr [esp + 0x44], ecx
// 007b1592  50                   push eax
// 007b1593  8bce                 mov ecx, esi
// 007b1595  ffd2                 call edx
// 007b1597  8bf0                 mov esi, eax
// 007b1599  8b5d00               mov ebx, dword ptr [ebp]
// 007b159c  6810080000           push 0x810
// 007b15a1  8d442444             lea eax, [esp + 0x44]
// 007b15a5  50                   push eax
// 007b15a6  8bce                 mov ecx, esi
// 007b15a8  c684249000000003     mov byte ptr [esp + 0x90], 3
// 007b15b0  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 007b15b6  50                   push eax
// 007b15b7  8bce                 mov ecx, esi
// 007b15b9  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 007b15bf  8b5370               mov edx, dword ptr [ebx + 0x70]
// 007b15c2  50                   push eax
// 007b15c3  8bcd                 mov ecx, ebp
// 007b15c5  ffd2                 call edx
// 007b15c7  8d8c249c000000       lea ecx, [esp + 0x9c]
// 007b15ce  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 007b15d4  8bb42490000000       mov esi, dword ptr [esp + 0x90]
// 007b15db  893e                 mov dword ptr [esi], edi
// 007b15dd  897e04               mov dword ptr [esi + 4], edi
// 007b15e0  e922020000           jmp 0x7b1807
// 007b15e5  8b06                 mov eax, dword ptr [esi]
// 007b15e7  8b505c               mov edx, dword ptr [eax + 0x5c]
// 007b15ea  8d8c249c000000       lea ecx, [esp + 0x9c]
// 007b15f1  51                   push ecx
// 007b15f2  8bce                 mov ecx, esi
// 007b15f4  ffd2                 call edx
// 007b15f6  50                   push eax
// 007b15f7  8d442434             lea eax, [esp + 0x34]
// 007b15fb  50                   push eax
// 007b15fc  8bcd                 mov ecx, ebp
// 007b15fe  e8add8cbff           call 0x46eeb0
// 007b1603  8d8c249c000000       lea ecx, [esp + 0x9c]
// 007b160a  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 007b1610  8b442430             mov eax, dword ptr [esp + 0x30]
// 007b1614  83c014               add eax, 0x14
// 007b1617  99                   cdq 
// 007b1618  2bc2                 sub eax, edx
// 007b161a  d1f8                 sar eax, 1
// 007b161c  68145fa500           push 0xa55f14
// 007b1621  8d8c24a0000000       lea ecx, [esp + 0xa0]
// 007b1628  897c2464             mov dword ptr [esp + 0x64], edi
// 007b162c  897c2468             mov dword ptr [esp + 0x68], edi
// 007b1630  8944246c             mov dword ptr [esp + 0x6c], eax
// 007b1634  897c2470             mov dword ptr [esp + 0x70], edi
// 007b1638  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 007b163e  8b7d00               mov edi, dword ptr [ebp]
// 007b1641  6810040000           push 0x410
// 007b1646  8d4c2464             lea ecx, [esp + 0x64]
// 007b164a  51                   push ecx
// 007b164b  8d8c24a4000000       lea ecx, [esp + 0xa4]
// 007b1652  c684249000000004     mov byte ptr [esp + 0x90], 4
// 007b165a  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 007b1660  50                   push eax
// 007b1661  8d8c24a8000000       lea ecx, [esp + 0xa8]
// 007b1668  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 007b166e  8b5770               mov edx, dword ptr [edi + 0x70]
// 007b1671  50                   push eax
// 007b1672  8bcd                 mov ecx, ebp
// 007b1674  ffd2                 call edx
// 007b1676  8d8c249c000000       lea ecx, [esp + 0x9c]
// 007b167d  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 007b1683  8b8b80000000         mov ecx, dword ptr [ebx + 0x80]
// 007b1689  8b54246c             mov edx, dword ptr [esp + 0x6c]
// 007b168d  2b542464             sub edx, dword ptr [esp + 0x64]
// 007b1691  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 007b1695  2b542454             sub edx, dword ptr [esp + 0x54]
// 007b1699  8bc1                 mov eax, ecx
// 007b169b  2b442470             sub eax, dword ptr [esp + 0x70]
// 007b169f  2b442450             sub eax, dword ptr [esp + 0x50]
// 007b16a3  03442478             add eax, dword ptr [esp + 0x78]
// 007b16a7  03442458             add eax, dword ptr [esp + 0x58]
// 007b16ab  8d7c2820             lea edi, [eax + ebp + 0x20]
// 007b16af  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 007b16b3  8d440213             lea eax, [edx + eax + 0x13]
// 007b16b7  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 007b16bb  3bd0                 cmp edx, eax
// 007b16bd  8994249c000000       mov dword ptr [esp + 0x9c], edx
// 007b16c4  7f07                 jg 0x7b16cd
// 007b16c6  8984249c000000       mov dword ptr [esp + 0x9c], eax
// 007b16cd  8b442430             mov eax, dword ptr [esp + 0x30]
// 007b16d1  99                   cdq 
// 007b16d2  2bc2                 sub eax, edx
// 007b16d4  d1f8                 sar eax, 1
// 007b16d6  03c1                 add eax, ecx
// 007b16d8  8d442820             lea eax, [eax + ebp + 0x20]
// 007b16dc  3bf8                 cmp edi, eax
// 007b16de  7e02                 jle 0x7b16e2
// 007b16e0  8bc7                 mov eax, edi
// 007b16e2  8b8c249c000000       mov ecx, dword ptr [esp + 0x9c]
// 007b16e9  e905010000           jmp 0x7b17f3
// 007b16ee  8b442418             mov eax, dword ptr [esp + 0x18]
// 007b16f2  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 007b16f6  8b13                 mov edx, dword ptr [ebx]
// 007b16f8  8b9214010000         mov edx, dword ptr [edx + 0x114]
// 007b16fe  50                   push eax
// 007b16ff  8b8424a0000000       mov eax, dword ptr [esp + 0xa0]
// 007b1706  f7df                 neg edi
// 007b1708  51                   push ecx
// 007b1709  1bff                 sbb edi, edi
// 007b170b  50                   push eax
// 007b170c  81e700f8ffff         and edi, 0xfffff800
// 007b1712  81c700080000         add edi, 0x800
// 007b1718  81cf00800000         or edi, 0x8000
// 007b171e  57                   push edi
// 007b171f  8d4c2460             lea ecx, [esp + 0x60]
// 007b1723  51                   push ecx
// 007b1724  8d442434             lea eax, [esp + 0x34]
// 007b1728  50                   push eax
// 007b1729  55                   push ebp
// 007b172a  8bcb                 mov ecx, ebx
// 007b172c  ffd2                 call edx
// 007b172e  837c242401           cmp dword ptr [esp + 0x24], 1
// 007b1733  7528                 jne 0x7b175d
// 007b1735  8d842494000000       lea eax, [esp + 0x94]
// 007b173c  50                   push eax
// 007b173d  8bce                 mov ecx, esi
// 007b173f  e87c84ffff           call 0x7a9bc0
// 007b1744  834c241408           or dword ptr [esp + 0x14], 8
// 007b1749  8bc8                 mov ecx, eax
// 007b174b  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 007b1751  c684249800000001     mov byte ptr [esp + 0x98], 1
// 007b1759  85c0                 test eax, eax
// 007b175b  7508                 jne 0x7b1765
// 007b175d  c684249800000000     mov byte ptr [esp + 0x98], 0
// 007b1765  f644241408           test byte ptr [esp + 0x14], 8
// 007b176a  740d                 je 0x7b1779
// 007b176c  8d8c2494000000       lea ecx, [esp + 0x94]
// 007b1773  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 007b1779  80bc249800000000     cmp byte ptr [esp + 0x98], 0
// 007b1781  744e                 je 0x7b17d1
// 007b1783  8d8c2498000000       lea ecx, [esp + 0x98]
// 007b178a  51                   push ecx
// 007b178b  8bce                 mov ecx, esi
// 007b178d  e82e84ffff           call 0x7a9bc0
// 007b1792  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007b1796  8b13                 mov edx, dword ptr [ebx]
// 007b1798  8b9214010000         mov edx, dword ptr [edx + 0x114]
// 007b179e  51                   push ecx
// 007b179f  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 007b17a3  51                   push ecx
// 007b17a4  8b8c24a4000000       mov ecx, dword ptr [esp + 0xa4]
// 007b17ab  51                   push ecx
// 007b17ac  6a02                 push 2
// 007b17ae  8d8c2480000000       lea ecx, [esp + 0x80]
// 007b17b5  51                   push ecx
// 007b17b6  50                   push eax
// 007b17b7  55                   push ebp
// 007b17b8  8bcb                 mov ecx, ebx
// 007b17ba  c68424a400000005     mov byte ptr [esp + 0xa4], 5
// 007b17c2  ffd2                 call edx
// 007b17c4  8d8c2498000000       lea ecx, [esp + 0x98]
// 007b17cb  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 007b17d1  8b8380000000         mov eax, dword ptr [ebx + 0x80]
// 007b17d7  2b442470             sub eax, dword ptr [esp + 0x70]
// 007b17db  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 007b17df  2b442450             sub eax, dword ptr [esp + 0x50]
// 007b17e3  03442478             add eax, dword ptr [esp + 0x78]
// 007b17e7  03442458             add eax, dword ptr [esp + 0x58]
// 007b17eb  8d440820             lea eax, [eax + ecx + 0x20]
// 007b17ef  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 007b17f3  6a00                 push 0
// 007b17f5  51                   push ecx
// 007b17f6  50                   push eax
// 007b17f7  56                   push esi
// 007b17f8  8bb424a0000000       mov esi, dword ptr [esp + 0xa0]
// 007b17ff  56                   push esi
// 007b1800  8bcb                 mov ecx, ebx
// 007b1802  e829c1ffff           call 0x7ad930
// 007b1807  8d4c2420             lea ecx, [esp + 0x20]
// 007b180b  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 007b1811  8bc6                 mov eax, esi
// 007b1813  8b8c2480000000       mov ecx, dword ptr [esp + 0x80]
// 007b181a  64890d00000000       mov dword ptr fs:[0], ecx
// 007b1821  59                   pop ecx
// 007b1822  5f                   pop edi
// 007b1823  5e                   pop esi
// 007b1824  5d                   pop ebp
// 007b1825  5b                   pop ebx
// 007b1826  83c478               add esp, 0x78
// 007b1829  c21000               ret 0x10
// copied from an identical function in another client (function ?DrawControlPopupParent@CXTPPaintManager@@UAE?AVCSize@@PAVCDC@@PAVCXTPControl@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPPaintManager.cpp