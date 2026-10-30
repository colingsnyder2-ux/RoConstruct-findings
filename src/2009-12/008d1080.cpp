// roc 2009-12 008d1080  unit: CXTPTabPaintManager  size: 881 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008d1080
//
// 008d1080  6aff                 push -1
// 008d1082  68d8509600           push 0x9650d8
// 008d1087  64a100000000         mov eax, dword ptr fs:[0]
// 008d108d  50                   push eax
// 008d108e  83ec18               sub esp, 0x18
// 008d1091  53                   push ebx
// 008d1092  55                   push ebp
// 008d1093  56                   push esi
// 008d1094  57                   push edi
// 008d1095  a10052b600           mov eax, dword ptr [0xb65200]
// 008d109a  33c4                 xor eax, esp
// 008d109c  50                   push eax
// 008d109d  8d44242c             lea eax, [esp + 0x2c]
// 008d10a1  64a300000000         mov dword ptr fs:[0], eax
// 008d10a7  8bf1                 mov esi, ecx
// 008d10a9  89742414             mov dword ptr [esp + 0x14], esi
// 008d10ad  8b6c2440             mov ebp, dword ptr [esp + 0x40]
// 008d10b1  6a00                 push 0
// 008d10b3  6a5c                 push 0x5c
// 008d10b5  8bcd                 mov ecx, ebp
// 008d10b7  ff1580d69800         call dword ptr [0x98d680]
// 008d10bd  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 008d10c1  83f8ff               cmp eax, -1
// 008d10c4  7431                 je 0x8d10f7
// 008d10c6  8b442454             mov eax, dword ptr [esp + 0x54]
// 008d10ca  8b37                 mov esi, dword ptr [edi]
// 008d10cc  0d00400000           or eax, 0x4000
// 008d10d1  50                   push eax
// 008d10d2  8d4c2448             lea ecx, [esp + 0x48]
// 008d10d6  51                   push ecx
// 008d10d7  8bcd                 mov ecx, ebp
// 008d10d9  83c670               add esi, 0x70
// 008d10dc  ff15b4dd9800         call dword ptr [0x98ddb4]
// 008d10e2  50                   push eax
// 008d10e3  8bcd                 mov ecx, ebp
// 008d10e5  ff1580de9800         call dword ptr [0x98de80]
// 008d10eb  8b16                 mov edx, dword ptr [esi]
// 008d10ed  50                   push eax
// 008d10ee  8bcf                 mov ecx, edi
// 008d10f0  ffd2                 call edx
// 008d10f2  e9e4020000           jmp 0x8d13db
// 008d10f7  8b4f08               mov ecx, dword ptr [edi + 8]
// 008d10fa  8d44241c             lea eax, [esp + 0x1c]
// 008d10fe  50                   push eax
// 008d10ff  6a03                 push 3
// 008d1101  6854ab9e00           push 0x9eab54
// 008d1106  51                   push ecx
// 008d1107  ff156cb19800         call dword ptr [0x98b16c]
// 008d110d  8b5c2454             mov ebx, dword ptr [esp + 0x54]
// 008d1111  53                   push ebx
// 008d1112  55                   push ebp
// 008d1113  57                   push edi
// 008d1114  8bce                 mov ecx, esi
// 008d1116  e895feffff           call 0x8d0fb0
// 008d111b  8bf0                 mov esi, eax
// 008d111d  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 008d1121  2b442444             sub eax, dword ptr [esp + 0x44]
// 008d1125  3bf0                 cmp esi, eax
// 008d1127  7f28                 jg 0x8d1151
// 008d1129  8b37                 mov esi, dword ptr [edi]
// 008d112b  53                   push ebx
// 008d112c  8d542448             lea edx, [esp + 0x48]
// 008d1130  52                   push edx
// 008d1131  8bcd                 mov ecx, ebp
// 008d1133  83c670               add esi, 0x70
// 008d1136  ff15b4dd9800         call dword ptr [0x98ddb4]
// 008d113c  50                   push eax
// 008d113d  8bcd                 mov ecx, ebp
// 008d113f  ff1580de9800         call dword ptr [0x98de80]
// 008d1145  50                   push eax
// 008d1146  8b06                 mov eax, dword ptr [esi]
// 008d1148  8bcf                 mov ecx, edi
// 008d114a  ffd0                 call eax
// 008d114c  e98a020000           jmp 0x8d13db
// 008d1151  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008d1155  3bc1                 cmp eax, ecx
// 008d1157  7f1b                 jg 0x8d1174
// 008d1159  8b17                 mov edx, dword ptr [edi]
// 008d115b  8b5270               mov edx, dword ptr [edx + 0x70]
// 008d115e  53                   push ebx
// 008d115f  8d442448             lea eax, [esp + 0x48]
// 008d1163  50                   push eax
// 008d1164  6a03                 push 3
// 008d1166  6854ab9e00           push 0x9eab54
// 008d116b  8bcf                 mov ecx, edi
// 008d116d  ffd2                 call edx
// 008d116f  e967020000           jmp 0x8d13db
// 008d1174  2bc1                 sub eax, ecx
// 008d1176  8bd8                 mov ebx, eax
// 008d1178  8bcd                 mov ecx, ebp
// 008d117a  895c243c             mov dword ptr [esp + 0x3c], ebx
// 008d117e  ff15b4dd9800         call dword ptr [0x98ddb4]
// 008d1184  0fafc3               imul eax, ebx
// 008d1187  99                   cdq 
// 008d1188  f7fe                 idiv esi
// 008d118a  8d4c2418             lea ecx, [esp + 0x18]
// 008d118e  8bf0                 mov esi, eax
// 008d1190  99                   cdq 
// 008d1191  2bc2                 sub eax, edx
// 008d1193  8bd8                 mov ebx, eax
// 008d1195  d1fb                 sar ebx, 1
// 008d1197  8bc6                 mov eax, esi
// 008d1199  2bc3                 sub eax, ebx
// 008d119b  50                   push eax
// 008d119c  51                   push ecx
// 008d119d  8bcd                 mov ecx, ebp
// 008d119f  ff1544cf9800         call dword ptr [0x98cf44]
// 008d11a5  53                   push ebx
// 008d11a6  8d542444             lea edx, [esp + 0x44]
// 008d11aa  52                   push edx
// 008d11ab  8bcd                 mov ecx, ebp
// 008d11ad  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 008d11b5  ff15a4d89800         call dword ptr [0x98d8a4]
// 008d11bb  8b5c2454             mov ebx, dword ptr [esp + 0x54]
// 008d11bf  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008d11c3  53                   push ebx
// 008d11c4  8d442444             lea eax, [esp + 0x44]
// 008d11c8  50                   push eax
// 008d11c9  57                   push edi
// 008d11ca  c644244001           mov byte ptr [esp + 0x40], 1
// 008d11cf  e8dcfdffff           call 0x8d0fb0
// 008d11d4  53                   push ebx
// 008d11d5  8d4c241c             lea ecx, [esp + 0x1c]
// 008d11d9  51                   push ecx
// 008d11da  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008d11de  57                   push edi
// 008d11df  89442428             mov dword ptr [esp + 0x28], eax
// 008d11e3  e8c8fdffff           call 0x8d0fb0
// 008d11e8  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008d11ec  03c8                 add ecx, eax
// 008d11ee  3b4c243c             cmp ecx, dword ptr [esp + 0x3c]
// 008d11f2  0f8da0000000         jge 0x8d1298
// 008d11f8  46                   inc esi
// 008d11f9  8bc6                 mov eax, esi
// 008d11fb  99                   cdq 
// 008d11fc  2bc2                 sub eax, edx
// 008d11fe  8bd8                 mov ebx, eax
// 008d1200  d1fb                 sar ebx, 1
// 008d1202  8bd6                 mov edx, esi
// 008d1204  2bd3                 sub edx, ebx
// 008d1206  52                   push edx
// 008d1207  8d442420             lea eax, [esp + 0x20]
// 008d120b  50                   push eax
// 008d120c  8bcd                 mov ecx, ebp
// 008d120e  ff1544cf9800         call dword ptr [0x98cf44]
// 008d1214  50                   push eax
// 008d1215  8d4c241c             lea ecx, [esp + 0x1c]
// 008d1219  c644243802           mov byte ptr [esp + 0x38], 2
// 008d121e  ff1538d59800         call dword ptr [0x98d538]
// 008d1224  8d4c241c             lea ecx, [esp + 0x1c]
// 008d1228  c644243401           mov byte ptr [esp + 0x34], 1
// 008d122d  ff15c0de9800         call dword ptr [0x98dec0]
// 008d1233  53                   push ebx
// 008d1234  8d4c2428             lea ecx, [esp + 0x28]
// 008d1238  51                   push ecx
// 008d1239  8bcd                 mov ecx, ebp
// 008d123b  ff15a4d89800         call dword ptr [0x98d8a4]
// 008d1241  50                   push eax
// 008d1242  8d4c2444             lea ecx, [esp + 0x44]
// 008d1246  c644243803           mov byte ptr [esp + 0x38], 3
// 008d124b  ff1538d59800         call dword ptr [0x98d538]
// 008d1251  8d4c2424             lea ecx, [esp + 0x24]
// 008d1255  c644243401           mov byte ptr [esp + 0x34], 1
// 008d125a  ff15c0de9800         call dword ptr [0x98dec0]
// 008d1260  8b5c2454             mov ebx, dword ptr [esp + 0x54]
// 008d1264  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008d1268  53                   push ebx
// 008d1269  8d542444             lea edx, [esp + 0x44]
// 008d126d  52                   push edx
// 008d126e  57                   push edi
// 008d126f  e83cfdffff           call 0x8d0fb0
// 008d1274  53                   push ebx
// 008d1275  8d4c241c             lea ecx, [esp + 0x1c]
// 008d1279  51                   push ecx
// 008d127a  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008d127e  57                   push edi
// 008d127f  89442434             mov dword ptr [esp + 0x34], eax
// 008d1283  e828fdffff           call 0x8d0fb0
// 008d1288  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008d128c  03c8                 add ecx, eax
// 008d128e  3b4c243c             cmp ecx, dword ptr [esp + 0x3c]
// 008d1292  0f8c60ffffff         jl 0x8d11f8
// 008d1298  8b5c2454             mov ebx, dword ptr [esp + 0x54]
// 008d129c  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008d12a0  53                   push ebx
// 008d12a1  8d542444             lea edx, [esp + 0x44]
// 008d12a5  52                   push edx
// 008d12a6  57                   push edi
// 008d12a7  e804fdffff           call 0x8d0fb0
// 008d12ac  53                   push ebx
// 008d12ad  8d4c241c             lea ecx, [esp + 0x1c]
// 008d12b1  51                   push ecx
// 008d12b2  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008d12b6  57                   push edi
// 008d12b7  89442434             mov dword ptr [esp + 0x34], eax
// 008d12bb  e8f0fcffff           call 0x8d0fb0
// 008d12c0  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008d12c4  03c8                 add ecx, eax
// 008d12c6  3b4c243c             cmp ecx, dword ptr [esp + 0x3c]
// 008d12ca  0f8ea0000000         jle 0x8d1370
// 008d12d0  4e                   dec esi
// 008d12d1  8bc6                 mov eax, esi
// 008d12d3  99                   cdq 
// 008d12d4  2bc2                 sub eax, edx
// 008d12d6  8bd8                 mov ebx, eax
// 008d12d8  d1fb                 sar ebx, 1
// 008d12da  8bd6                 mov edx, esi
// 008d12dc  2bd3                 sub edx, ebx
// 008d12de  52                   push edx
// 008d12df  8d44242c             lea eax, [esp + 0x2c]
// 008d12e3  50                   push eax
// 008d12e4  8bcd                 mov ecx, ebp
// 008d12e6  ff1544cf9800         call dword ptr [0x98cf44]
// 008d12ec  50                   push eax
// 008d12ed  8d4c241c             lea ecx, [esp + 0x1c]
// 008d12f1  c644243804           mov byte ptr [esp + 0x38], 4
// 008d12f6  ff1538d59800         call dword ptr [0x98d538]
// 008d12fc  8d4c2428             lea ecx, [esp + 0x28]
// 008d1300  c644243401           mov byte ptr [esp + 0x34], 1
// 008d1305  ff15c0de9800         call dword ptr [0x98dec0]
// 008d130b  53                   push ebx
// 008d130c  8d4c2428             lea ecx, [esp + 0x28]
// 008d1310  51                   push ecx
// 008d1311  8bcd                 mov ecx, ebp
// 008d1313  ff15a4d89800         call dword ptr [0x98d8a4]
// 008d1319  50                   push eax
// 008d131a  8d4c2444             lea ecx, [esp + 0x44]
// 008d131e  c644243805           mov byte ptr [esp + 0x38], 5
// 008d1323  ff1538d59800         call dword ptr [0x98d538]
// 008d1329  8d4c2424             lea ecx, [esp + 0x24]
// 008d132d  c644243401           mov byte ptr [esp + 0x34], 1
// 008d1332  ff15c0de9800         call dword ptr [0x98dec0]
// 008d1338  8b5c2454             mov ebx, dword ptr [esp + 0x54]
// 008d133c  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008d1340  53                   push ebx
// 008d1341  8d542444             lea edx, [esp + 0x44]
// 008d1345  52                   push edx
// 008d1346  57                   push edi
// 008d1347  e864fcffff           call 0x8d0fb0
// 008d134c  53                   push ebx
// 008d134d  8d4c241c             lea ecx, [esp + 0x1c]
// 008d1351  51                   push ecx
// 008d1352  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008d1356  57                   push edi
// 008d1357  89442428             mov dword ptr [esp + 0x28], eax
// 008d135b  e850fcffff           call 0x8d0fb0
// 008d1360  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008d1364  03c8                 add ecx, eax
// 008d1366  3b4c243c             cmp ecx, dword ptr [esp + 0x3c]
// 008d136a  0f8f60ffffff         jg 0x8d12d0
// 008d1370  6854ab9e00           push 0x9eab54
// 008d1375  8d54241c             lea edx, [esp + 0x1c]
// 008d1379  52                   push edx
// 008d137a  8d44242c             lea eax, [esp + 0x2c]
// 008d137e  50                   push eax
// 008d137f  e85cbab3ff           call 0x40cde0
// 008d1384  8d4c244c             lea ecx, [esp + 0x4c]
// 008d1388  51                   push ecx
// 008d1389  50                   push eax
// 008d138a  8d54243c             lea edx, [esp + 0x3c]
// 008d138e  52                   push edx
// 008d138f  c644244c06           mov byte ptr [esp + 0x4c], 6
// 008d1394  e8a7a9b8ff           call 0x45bd40
// 008d1399  83c418               add esp, 0x18
// 008d139c  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 008d13a0  51                   push ecx
// 008d13a1  8d542448             lea edx, [esp + 0x48]
// 008d13a5  52                   push edx
// 008d13a6  50                   push eax
// 008d13a7  8bcf                 mov ecx, edi
// 008d13a9  c644244007           mov byte ptr [esp + 0x40], 7
// 008d13ae  e86d87f2ff           call 0x7f9b20
// 008d13b3  8d4c2428             lea ecx, [esp + 0x28]
// 008d13b7  ff15c0de9800         call dword ptr [0x98dec0]
// 008d13bd  8d4c2424             lea ecx, [esp + 0x24]
// 008d13c1  ff15c0de9800         call dword ptr [0x98dec0]
// 008d13c7  8d4c2440             lea ecx, [esp + 0x40]
// 008d13cb  ff15c0de9800         call dword ptr [0x98dec0]
// 008d13d1  8d4c2418             lea ecx, [esp + 0x18]
// 008d13d5  ff15c0de9800         call dword ptr [0x98dec0]
// 008d13db  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 008d13df  64890d00000000       mov dword ptr fs:[0], ecx
// 008d13e6  59                   pop ecx
// 008d13e7  5f                   pop edi
// 008d13e8  5e                   pop esi
// 008d13e9  5d                   pop ebp
// 008d13ea  5b                   pop ebx
// 008d13eb  83c424               add esp, 0x24
// 008d13ee  c21c00               ret 0x1c
// copied from an identical function in another client (function ?DrawTextPathEllipsis@CXTPTabPaintManager@@IAEXPAVCDC@@ABV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@VCRect@@I@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\TabManager\XTPTabPaintManager.cpp