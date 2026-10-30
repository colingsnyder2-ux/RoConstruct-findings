// from server: 100% by auto
// roc 2008-06 006d1180  unit: CXTPReportControl  size: 863 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006d1180
//
// 006d1180  55                   push ebp
// 006d1181  8dac24f8fbffff       lea ebp, [esp - 0x408]
// 006d1188  81ec08040000         sub esp, 0x408
// 006d118e  6aff                 push -1
// 006d1190  6823177e00           push 0x7e1723
// 006d1195  64a100000000         mov eax, dword ptr fs:[0]
// 006d119b  50                   push eax
// 006d119c  81ec2c010000         sub esp, 0x12c
// 006d11a2  a1c05c9600           mov eax, dword ptr [0x965cc0]
// 006d11a7  33c5                 xor eax, ebp
// 006d11a9  898504040000         mov dword ptr [ebp + 0x404], eax
// 006d11af  53                   push ebx
// 006d11b0  56                   push esi
// 006d11b1  57                   push edi
// 006d11b2  50                   push eax
// 006d11b3  8d45f4               lea eax, [ebp - 0xc]
// 006d11b6  64a300000000         mov dword ptr fs:[0], eax
// 006d11bc  8965f0               mov dword ptr [ebp - 0x10], esp
// 006d11bf  6aff                 push -1
// 006d11c1  8d8510040000         lea eax, [ebp + 0x410]
// 006d11c7  50                   push eax
// 006d11c8  6a93                 push -0x6d
// 006d11ca  6a00                 push 0
// 006d11cc  6a00                 push 0
// 006d11ce  8bf1                 mov esi, ecx
// 006d11d0  6a00                 push 0
// 006d11d2  8975e4               mov dword ptr [ebp - 0x1c], esi
// 006d11d5  e8d6ebffff           call 0x6cfdb0
// 006d11da  85c0                 test eax, eax
// 006d11dc  0f85d6020000         jne 0x6d14b8
// 006d11e2  66398690020000       cmp word ptr [esi + 0x290], ax
// 006d11e9  0f84c9020000         je 0x6d14b8
// 006d11ef  8b9e28010000         mov ebx, dword ptr [esi + 0x128]
// 006d11f5  895dec               mov dword ptr [ebp - 0x14], ebx
// 006d11f8  85db                 test ebx, ebx
// 006d11fa  0f84b8020000         je 0x6d14b8
// 006d1200  f6869c02000006       test byte ptr [esi + 0x29c], 6
// 006d1207  0f84ab020000         je 0x6d14b8
// 006d120d  8bcb                 mov ecx, ebx
// 006d120f  e8fca20000           call 0x6db510
// 006d1214  8d78ff               lea edi, [eax - 1]
// 006d1217  85ff                 test edi, edi
// 006d1219  7c3e                 jl 0x6d1259
// 006d121b  eb03                 jmp 0x6d1220
// 006d121d  8d4900               lea ecx, [ecx]
// 006d1220  57                   push edi
// 006d1221  8bcb                 mov ecx, ebx
// 006d1223  e8f8a30000           call 0x6db620
// 006d1228  8bd8                 mov ebx, eax
// 006d122a  8b13                 mov edx, dword ptr [ebx]
// 006d122c  8b8288000000         mov eax, dword ptr [edx + 0x88]
// 006d1232  8bcb                 mov ecx, ebx
// 006d1234  ffd0                 call eax
// 006d1236  85c0                 test eax, eax
// 006d1238  7417                 je 0x6d1251
// 006d123a  8b13                 mov edx, dword ptr [ebx]
// 006d123c  8b427c               mov eax, dword ptr [edx + 0x7c]
// 006d123f  6a01                 push 1
// 006d1241  8bcb                 mov ecx, ebx
// 006d1243  ffd0                 call eax
// 006d1245  8b13                 mov edx, dword ptr [ebx]
// 006d1247  8b8284000000         mov eax, dword ptr [edx + 0x84]
// 006d124d  8bcb                 mov ecx, ebx
// 006d124f  ffd0                 call eax
// 006d1251  83ef01               sub edi, 1
// 006d1254  8b5dec               mov ebx, dword ptr [ebp - 0x14]
// 006d1257  79c7                 jns 0x6d1220
// 006d1259  8d4d8c               lea ecx, [ebp - 0x74]
// 006d125c  e83db00e00           call 0x7bc29e
// 006d1261  33ff                 xor edi, edi
// 006d1263  8bcb                 mov ecx, ebx
// 006d1265  897dfc               mov dword ptr [ebp - 4], edi
// 006d1268  e8a3a20000           call 0x6db510
// 006d126d  83f801               cmp eax, 1
// 006d1270  0f8c33020000         jl 0x6d14a9
// 006d1276  69c0dc050000         imul eax, eax, 0x5dc
// 006d127c  c1e80c               shr eax, 0xc
// 006d127f  40                   inc eax
// 006d1280  c1e00c               shl eax, 0xc
// 006d1283  50                   push eax
// 006d1284  6842200000           push 0x2042
// 006d1289  8d8d58ffffff         lea ecx, [ebp - 0xa8]
// 006d128f  e8c6ae0e00           call 0x7bc15a
// 006d1294  6a48                 push 0x48
// 006d1296  c645fc01             mov byte ptr [ebp - 4], 1
// 006d129a  897de8               mov dword ptr [ebp - 0x18], edi
// 006d129d  e84e6fffff           call 0x6c81f0
// 006d12a2  8945ec               mov dword ptr [ebp - 0x14], eax
// 006d12a5  c645fc02             mov byte ptr [ebp - 4], 2
// 006d12a9  3bc7                 cmp eax, edi
// 006d12ab  7410                 je 0x6d12bd
// 006d12ad  6a01                 push 1
// 006d12af  8bc8                 mov ecx, eax
// 006d12b1  e8ba680000           call 0x6d7b70
// 006d12b6  8bf8                 mov edi, eax
// 006d12b8  8945ec               mov dword ptr [ebp - 0x14], eax
// 006d12bb  eb03                 jmp 0x6d12c0
// 006d12bd  897dec               mov dword ptr [ebp - 0x14], edi
// 006d12c0  6a00                 push 0
// 006d12c2  57                   push edi
// 006d12c3  8bce                 mov ecx, esi
// 006d12c5  c645fc01             mov byte ptr [ebp - 4], 1
// 006d12c9  e8029fffff           call 0x6cb1d0
// 006d12ce  85c0                 test eax, eax
// 006d12d0  7514                 jne 0x6d12e6
// 006d12d2  85ff                 test edi, edi
// 006d12d4  0f84c0010000         je 0x6d149a
// 006d12da  8bcf                 mov ecx, edi
// 006d12dc  e803f9fcff           call 0x6a0be4
// 006d12e1  e9b4010000           jmp 0x6d149a
// 006d12e6  6a00                 push 0
// 006d12e8  6800100000           push 0x1000
// 006d12ed  6a00                 push 0
// 006d12ef  8d8d58ffffff         lea ecx, [ebp - 0xa8]
// 006d12f5  51                   push ecx
// 006d12f6  8d8d10ffffff         lea ecx, [ebp - 0xf0]
// 006d12fc  c645fc03             mov byte ptr [ebp - 4], 3
// 006d1300  e83dae0e00           call 0x7bc142
// 006d1305  8d9510ffffff         lea edx, [ebp - 0xf0]
// 006d130b  b304                 mov bl, 4
// 006d130d  52                   push edx
// 006d130e  8d8dc8feffff         lea ecx, [ebp - 0x138]
// 006d1314  885dfc               mov byte ptr [ebp - 4], bl
// 006d1317  e814d10200           call 0x6fe430
// 006d131c  57                   push edi
// 006d131d  8d85c8feffff         lea eax, [ebp - 0x138]
// 006d1323  50                   push eax
// 006d1324  8bce                 mov ecx, esi
// 006d1326  c645fc05             mov byte ptr [ebp - 4], 5
// 006d132a  e8c1d3ffff           call 0x6ce6f0
// 006d132f  8d8d10ffffff         lea ecx, [ebp - 0xf0]
// 006d1335  8945e8               mov dword ptr [ebp - 0x18], eax
// 006d1338  e8f3ad0e00           call 0x7bc130
// 006d133d  8d8dc8feffff         lea ecx, [ebp - 0x138]
// 006d1343  885dfc               mov byte ptr [ebp - 4], bl
// 006d1346  e855b60200           call 0x6fc9a0
// 006d134b  8d8d10ffffff         lea ecx, [ebp - 0xf0]
// 006d1351  c645fc03             mov byte ptr [ebp - 4], 3
// 006d1355  e8caad0e00           call 0x7bc124
// 006d135a  c745fc01000000       mov dword ptr [ebp - 4], 1
// 006d1361  eb69                 jmp 0x6d13cc
// 006d1363  8b75c4               mov esi, dword ptr [ebp - 0x3c]
// 006d1366  8b16                 mov edx, dword ptr [esi]
// 006d1368  8b5218               mov edx, dword ptr [edx + 0x18]
// 006d136b  6a00                 push 0
// 006d136d  6800040000           push 0x400
// 006d1372  8d4500               lea eax, [ebp]
// 006d1375  50                   push eax
// 006d1376  8bce                 mov ecx, esi
// 006d1378  ffd2                 call edx
// 006d137a  8bce                 mov ecx, esi
// 006d137c  e8cff5fcff           call 0x6a0950
// 006d1381  c745fc01000000       mov dword ptr [ebp - 4], 1
// 006d1388  b8c6136d00           mov eax, 0x6d13c6
// 006d138d  c3                   ret 
// 006d138e  8b75c0               mov esi, dword ptr [ebp - 0x40]
// 006d1391  8b06                 mov eax, dword ptr [esi]
// 006d1393  8b5018               mov edx, dword ptr [eax + 0x18]
// 006d1396  6a00                 push 0
// 006d1398  6800040000           push 0x400
// 006d139d  8d4d00               lea ecx, [ebp]
// 006d13a0  51                   push ecx
// 006d13a1  8bce                 mov ecx, esi
// 006d13a3  ffd2                 call edx
// 006d13a5  8bce                 mov ecx, esi
// 006d13a7  e8a4f5fcff           call 0x6a0950
// 006d13ac  c745fc01000000       mov dword ptr [ebp - 4], 1
// 006d13b3  b8c6136d00           mov eax, 0x6d13c6
// 006d13b8  c3                   ret 
// 006d13b9  c745fc01000000       mov dword ptr [ebp - 4], 1
// 006d13c0  b8c6136d00           mov eax, 0x6d13c6
// 006d13c5  c3                   ret 
// 006d13c6  8b7dec               mov edi, dword ptr [ebp - 0x14]
// 006d13c9  8b75e4               mov esi, dword ptr [ebp - 0x1c]
// 006d13cc  837de800             cmp dword ptr [ebp - 0x18], 0
// 006d13d0  0f84fcfeffff         je 0x6d12d2
// 006d13d6  8d8d58ffffff         lea ecx, [ebp - 0xa8]
// 006d13dc  e893ae0e00           call 0x7bc274
// 006d13e1  8945e8               mov dword ptr [ebp - 0x18], eax
// 006d13e4  8b869c020000         mov eax, dword ptr [esi + 0x29c]
// 006d13ea  d1e8                 shr eax, 1
// 006d13ec  8bd8                 mov ebx, eax
// 006d13ee  83e001               and eax, 1
// 006d13f1  83e302               and ebx, 2
// 006d13f4  03d8                 add ebx, eax
// 006d13f6  33c0                 xor eax, eax
// 006d13f8  8945d4               mov dword ptr [ebp - 0x2c], eax
// 006d13fb  8945c8               mov dword ptr [ebp - 0x38], eax
// 006d13fe  8945cc               mov dword ptr [ebp - 0x34], eax
// 006d1401  8945d0               mov dword ptr [ebp - 0x30], eax
// 006d1404  8945d8               mov dword ptr [ebp - 0x28], eax
// 006d1407  8945dc               mov dword ptr [ebp - 0x24], eax
// 006d140a  8945e0               mov dword ptr [ebp - 0x20], eax
// 006d140d  8d45c8               lea eax, [ebp - 0x38]
// 006d1410  50                   push eax
// 006d1411  6aba                 push -0x46
// 006d1413  8bce                 mov ecx, esi
// 006d1415  c7869802000001000000 mov dword ptr [esi + 0x298], 1
// 006d141f  897dd4               mov dword ptr [ebp - 0x2c], edi
// 006d1422  e8f9e8ffff           call 0x6cfd20
// 006d1427  83f8ff               cmp eax, -1
// 006d142a  746e                 je 0x6d149a
// 006d142c  8b4de8               mov ecx, dword ptr [ebp - 0x18]
// 006d142f  0fb79690020000       movzx edx, word ptr [esi + 0x290]
// 006d1436  6a00                 push 0
// 006d1438  51                   push ecx
// 006d1439  52                   push edx
// 006d143a  8d4d8c               lea ecx, [ebp - 0x74]
// 006d143d  e856ae0e00           call 0x7bc298
// 006d1442  6a00                 push 0
// 006d1444  6a00                 push 0
// 006d1446  53                   push ebx
// 006d1447  8d4d8c               lea ecx, [ebp - 0x74]
// 006d144a  e843ae0e00           call 0x7bc292
// 006d144f  8945e8               mov dword ptr [ebp - 0x18], eax
// 006d1452  8945e0               mov dword ptr [ebp - 0x20], eax
// 006d1455  8d45c8               lea eax, [ebp - 0x38]
// 006d1458  50                   push eax
// 006d1459  6ab3                 push -0x4d
// 006d145b  8bce                 mov ecx, esi
// 006d145d  c7869802000000000000 mov dword ptr [esi + 0x298], 0
// 006d1467  e8b4e8ffff           call 0x6cfd20
// 006d146c  837de802             cmp dword ptr [ebp - 0x18], 2
// 006d1470  7511                 jne 0x6d1483
// 006d1472  f6c302               test bl, 2
// 006d1475  740c                 je 0x6d1483
// 006d1477  8b16                 mov edx, dword ptr [esi]
// 006d1479  8b8284010000         mov eax, dword ptr [edx + 0x184]
// 006d147f  8bce                 mov ecx, esi
// 006d1481  ffd0                 call eax
// 006d1483  85ff                 test edi, edi
// 006d1485  7407                 je 0x6d148e
// 006d1487  8bcf                 mov ecx, edi
// 006d1489  e856f7fcff           call 0x6a0be4
// 006d148e  8b16                 mov edx, dword ptr [esi]
// 006d1490  8b8214020000         mov eax, dword ptr [edx + 0x214]
// 006d1496  8bce                 mov ecx, esi
// 006d1498  ffd0                 call eax
// 006d149a  8d8d58ffffff         lea ecx, [ebp - 0xa8]
// 006d14a0  c645fc00             mov byte ptr [ebp - 4], 0
// 006d14a4  e8a5ac0e00           call 0x7bc14e
// 006d14a9  8d4d8c               lea ecx, [ebp - 0x74]
// 006d14ac  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 006d14b3  e8d4ad0e00           call 0x7bc28c
// 006d14b8  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 006d14bb  64890d00000000       mov dword ptr fs:[0], ecx
// 006d14c2  59                   pop ecx
// 006d14c3  5f                   pop edi
// 006d14c4  5e                   pop esi
// 006d14c5  5b                   pop ebx
// 006d14c6  8b8d04040000         mov ecx, dword ptr [ebp + 0x404]
// 006d14cc  33cd                 xor ecx, ebp
// 006d14ce  e8ff08fdff           call 0x6a1dd2
// 006d14d3  81c508040000         add ebp, 0x408
// 006d14d9  8be5                 mov esp, ebp
// 006d14db  5d                   pop ebp
// 006d14dc  c20800               ret 8

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\ReportControl\XTPReportControl.cpp
