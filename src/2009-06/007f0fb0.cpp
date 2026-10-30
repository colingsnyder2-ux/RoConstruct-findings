// roc 2009-06 007f0fb0  unit: CXTPPropertyGridPaintManager  size: 1081 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007f0fb0
//
// 007f0fb0  6aff                 push -1
// 007f0fb2  68de0a8800           push 0x880ade
// 007f0fb7  64a100000000         mov eax, dword ptr fs:[0]
// 007f0fbd  50                   push eax
// 007f0fbe  81ec80000000         sub esp, 0x80
// 007f0fc4  53                   push ebx
// 007f0fc5  55                   push ebp
// 007f0fc6  56                   push esi
// 007f0fc7  57                   push edi
// 007f0fc8  a1304fa200           mov eax, dword ptr [0xa24f30]
// 007f0fcd  33c4                 xor eax, esp
// 007f0fcf  50                   push eax
// 007f0fd0  8d842494000000       lea eax, [esp + 0x94]
// 007f0fd7  64a300000000         mov dword ptr fs:[0], eax
// 007f0fdd  8bf9                 mov edi, ecx
// 007f0fdf  8b4760               mov eax, dword ptr [edi + 0x60]
// 007f0fe2  50                   push eax
// 007f0fe3  8d4c2438             lea ecx, [esp + 0x38]
// 007f0fe7  e8e4f4f7ff           call 0x7704d0
// 007f0fec  837f2c00             cmp dword ptr [edi + 0x2c], 0
// 007f0ff0  8bb424a4000000       mov esi, dword ptr [esp + 0xa4]
// 007f0ff7  c744241800000000     mov dword ptr [esp + 0x18], 0
// 007f0fff  7521                 jne 0x7f1022
// 007f1001  8b4738               mov eax, dword ptr [edi + 0x38]
// 007f1004  83f8ff               cmp eax, -1
// 007f1007  7505                 jne 0x7f100e
// 007f1009  8b5f34               mov ebx, dword ptr [edi + 0x34]
// 007f100c  eb02                 jmp 0x7f1010
// 007f100e  8bd8                 mov ebx, eax
// 007f1010  e80b3bf6ff           call 0x754b20
// 007f1015  6a0f                 push 0xf
// 007f1017  8bc8                 mov ecx, eax
// 007f1019  e88232f6ff           call 0x7542a0
// 007f101e  3bd8                 cmp ebx, eax
// 007f1020  756c                 jne 0x7f108e
// 007f1022  85f6                 test esi, esi
// 007f1024  7504                 jne 0x7f102a
// 007f1026  33db                 xor ebx, ebx
// 007f1028  eb03                 jmp 0x7f102d
// 007f102a  8b5e04               mov ebx, dword ptr [esi + 4]
// 007f102d  8b4760               mov eax, dword ptr [edi + 0x60]
// 007f1030  8b4820               mov ecx, dword ptr [eax + 0x20]
// 007f1033  51                   push ecx
// 007f1034  ff1598ee8900         call dword ptr [0x89ee98]
// 007f103a  50                   push eax
// 007f103b  e8c27cf2ff           call 0x718d02
// 007f1040  8b5760               mov edx, dword ptr [edi + 0x60]
// 007f1043  8b4a20               mov ecx, dword ptr [edx + 0x20]
// 007f1046  8b4020               mov eax, dword ptr [eax + 0x20]
// 007f1049  51                   push ecx
// 007f104a  53                   push ebx
// 007f104b  6838010000           push 0x138
// 007f1050  50                   push eax
// 007f1051  ff1590ee8900         call dword ptr [0x89ee90]
// 007f1057  89442418             mov dword ptr [esp + 0x18], eax
// 007f105b  85c0                 test eax, eax
// 007f105d  742f                 je 0x7f108e
// 007f105f  85f6                 test esi, esi
// 007f1061  7515                 jne 0x7f1078
// 007f1063  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007f1067  51                   push ecx
// 007f1068  8d542438             lea edx, [esp + 0x38]
// 007f106c  33c0                 xor eax, eax
// 007f106e  52                   push edx
// 007f106f  50                   push eax
// 007f1070  ff15b4ec8900         call dword ptr [0x89ecb4]
// 007f1076  eb2e                 jmp 0x7f10a6
// 007f1078  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007f107c  8b4604               mov eax, dword ptr [esi + 4]
// 007f107f  51                   push ecx
// 007f1080  8d542438             lea edx, [esp + 0x38]
// 007f1084  52                   push edx
// 007f1085  50                   push eax
// 007f1086  ff15b4ec8900         call dword ptr [0x89ecb4]
// 007f108c  eb18                 jmp 0x7f10a6
// 007f108e  8b4738               mov eax, dword ptr [edi + 0x38]
// 007f1091  83f8ff               cmp eax, -1
// 007f1094  7503                 jne 0x7f1099
// 007f1096  8b4734               mov eax, dword ptr [edi + 0x34]
// 007f1099  50                   push eax
// 007f109a  8d442438             lea eax, [esp + 0x38]
// 007f109e  50                   push eax
// 007f109f  8bce                 mov ecx, esi
// 007f10a1  e82a87f2ff           call 0x7197d0
// 007f10a6  6a01                 push 1
// 007f10a8  8bce                 mov ecx, esi
// 007f10aa  e857ae0500           call 0x84bf06
// 007f10af  8b4f60               mov ecx, dword ptr [edi + 0x60]
// 007f10b2  8b4160               mov eax, dword ptr [ecx + 0x60]
// 007f10b5  85c0                 test eax, eax
// 007f10b7  0f8468020000         je 0x7f1325
// 007f10bd  e80e1ef8ff           call 0x772ed0
// 007f10c2  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 007f10c6  8b542438             mov edx, dword ptr [esp + 0x38]
// 007f10ca  8be8                 mov ebp, eax
// 007f10cc  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 007f10d0  8944242c             mov dword ptr [esp + 0x2c], eax
// 007f10d4  8b442440             mov eax, dword ptr [esp + 0x40]
// 007f10d8  894c2424             mov dword ptr [esp + 0x24], ecx
// 007f10dc  8b4f60               mov ecx, dword ptr [edi + 0x60]
// 007f10df  89542428             mov dword ptr [esp + 0x28], edx
// 007f10e3  89442430             mov dword ptr [esp + 0x30], eax
// 007f10e7  2b4154               sub eax, dword ptr [ecx + 0x54]
// 007f10ea  837c241800           cmp dword ptr [esp + 0x18], 0
// 007f10ef  89442428             mov dword ptr [esp + 0x28], eax
// 007f10f3  7406                 je 0x7f10fb
// 007f10f5  837f2c00             cmp dword ptr [edi + 0x2c], 0
// 007f10f9  7522                 jne 0x7f111d
// 007f10fb  8b4774               mov eax, dword ptr [edi + 0x74]
// 007f10fe  8b483c               mov ecx, dword ptr [eax + 0x3c]
// 007f1101  83c034               add eax, 0x34
// 007f1104  83f9ff               cmp ecx, -1
// 007f1107  7505                 jne 0x7f110e
// 007f1109  8b4004               mov eax, dword ptr [eax + 4]
// 007f110c  eb02                 jmp 0x7f1110
// 007f110e  8bc1                 mov eax, ecx
// 007f1110  50                   push eax
// 007f1111  8d542428             lea edx, [esp + 0x28]
// 007f1115  52                   push edx
// 007f1116  8bce                 mov ecx, esi
// 007f1118  e8b386f2ff           call 0x7197d0
// 007f111d  8b07                 mov eax, dword ptr [edi]
// 007f111f  8b5018               mov edx, dword ptr [eax + 0x18]
// 007f1122  6a00                 push 0
// 007f1124  8d4c2428             lea ecx, [esp + 0x28]
// 007f1128  51                   push ecx
// 007f1129  56                   push esi
// 007f112a  8bcf                 mov ecx, edi
// 007f112c  ffd2                 call edx
// 007f112e  8b4774               mov eax, dword ptr [edi + 0x74]
// 007f1131  83c028               add eax, 0x28
// 007f1134  50                   push eax
// 007f1135  56                   push esi
// 007f1136  8d8c248c000000       lea ecx, [esp + 0x8c]
// 007f113d  e81ef7f7ff           call 0x770860
// 007f1142  c784249c00000000000000 mov dword ptr [esp + 0x9c], 0
// 007f114d  85ed                 test ebp, ebp
// 007f114f  0f84aa010000         je 0x7f12ff
// 007f1155  8b4774               mov eax, dword ptr [edi + 0x74]
// 007f1158  8b4848               mov ecx, dword ptr [eax + 0x48]
// 007f115b  83c040               add eax, 0x40
// 007f115e  83f9ff               cmp ecx, -1
// 007f1161  7505                 jne 0x7f1168
// 007f1163  8b4004               mov eax, dword ptr [eax + 4]
// 007f1166  eb02                 jmp 0x7f116a
// 007f1168  8bc1                 mov eax, ecx
// 007f116a  8b16                 mov edx, dword ptr [esi]
// 007f116c  50                   push eax
// 007f116d  8b4238               mov eax, dword ptr [edx + 0x38]
// 007f1170  8bce                 mov ecx, esi
// 007f1172  ffd0                 call eax
// 007f1174  6a01                 push 1
// 007f1176  8bce                 mov ecx, esi
// 007f1178  e889ad0500           call 0x84bf06
// 007f117d  8b542428             mov edx, dword ptr [esp + 0x28]
// 007f1181  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 007f1185  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 007f1189  6afd                 push -3
// 007f118b  8954244c             mov dword ptr [esp + 0x4c], edx
// 007f118f  894c2448             mov dword ptr [esp + 0x48], ecx
// 007f1193  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 007f1197  6afa                 push -6
// 007f1199  8d54244c             lea edx, [esp + 0x4c]
// 007f119d  52                   push edx
// 007f119e  89442458             mov dword ptr [esp + 0x58], eax
// 007f11a2  894c245c             mov dword ptr [esp + 0x5c], ecx
// 007f11a6  ff15bced8900         call dword ptr [0x89edbc]
// 007f11ac  8d442420             lea eax, [esp + 0x20]
// 007f11b0  50                   push eax
// 007f11b1  8bcd                 mov ecx, ebp
// 007f11b3  e85804c4ff           call 0x431610
// 007f11b8  8bd8                 mov ebx, eax
// 007f11ba  8b0e                 mov ecx, dword ptr [esi]
// 007f11bc  6820080000           push 0x820
// 007f11c1  8d542448             lea edx, [esp + 0x48]
// 007f11c5  894c2420             mov dword ptr [esp + 0x20], ecx
// 007f11c9  52                   push edx
// 007f11ca  8bcb                 mov ecx, ebx
// 007f11cc  c68424a400000001     mov byte ptr [esp + 0xa4], 1
// 007f11d4  ff1554fb8900         call dword ptr [0x89fb54]
// 007f11da  50                   push eax
// 007f11db  8bcb                 mov ecx, ebx
// 007f11dd  ff15d0fc8900         call dword ptr [0x89fcd0]
// 007f11e3  50                   push eax
// 007f11e4  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 007f11e8  8b5070               mov edx, dword ptr [eax + 0x70]
// 007f11eb  8bce                 mov ecx, esi
// 007f11ed  ffd2                 call edx
// 007f11ef  8d4c2420             lea ecx, [esp + 0x20]
// 007f11f3  c684249c00000000     mov byte ptr [esp + 0x9c], 0
// 007f11fb  ff1510fd8900         call dword ptr [0x89fd10]
// 007f1201  8d442414             lea eax, [esp + 0x14]
// 007f1205  50                   push eax
// 007f1206  8bcd                 mov ecx, ebp
// 007f1208  e84383f9ff           call 0x789550
// 007f120d  8d4c2414             lea ecx, [esp + 0x14]
// 007f1211  c684249c00000002     mov byte ptr [esp + 0x9c], 2
// 007f1219  ff155cfb8900         call dword ptr [0x89fb5c]
// 007f121f  84c0                 test al, al
// 007f1221  0f85ce000000         jne 0x7f12f5
// 007f1227  8b4f74               mov ecx, dword ptr [edi + 0x74]
// 007f122a  83c120               add ecx, 0x20
// 007f122d  51                   push ecx
// 007f122e  56                   push esi
// 007f122f  8d4c247c             lea ecx, [esp + 0x7c]
// 007f1233  e828f6f7ff           call 0x770860
// 007f1238  8d4c2464             lea ecx, [esp + 0x64]
// 007f123c  c684249c00000003     mov byte ptr [esp + 0x9c], 3
// 007f1244  e8e7f1f7ff           call 0x770430
// 007f1249  8d542420             lea edx, [esp + 0x20]
// 007f124d  52                   push edx
// 007f124e  8bcd                 mov ecx, ebp
// 007f1250  e8bb03c4ff           call 0x431610
// 007f1255  68200c0000           push 0xc20
// 007f125a  8d4c2468             lea ecx, [esp + 0x68]
// 007f125e  51                   push ecx
// 007f125f  50                   push eax
// 007f1260  8bce                 mov ecx, esi
// 007f1262  c68424a800000004     mov byte ptr [esp + 0xa8], 4
// 007f126a  e821a7f2ff           call 0x71b990
// 007f126f  8d4c2420             lea ecx, [esp + 0x20]
// 007f1273  c684249c00000003     mov byte ptr [esp + 0x9c], 3
// 007f127b  ff1510fd8900         call dword ptr [0x89fd10]
// 007f1281  8b442470             mov eax, dword ptr [esp + 0x70]
// 007f1285  2b442468             sub eax, dword ptr [esp + 0x68]
// 007f1289  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 007f128d  8b542428             mov edx, dword ptr [esp + 0x28]
// 007f1291  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 007f1295  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 007f1299  83c006               add eax, 6
// 007f129c  894c2454             mov dword ptr [esp + 0x54], ecx
// 007f12a0  03d0                 add edx, eax
// 007f12a2  83c106               add ecx, 6
// 007f12a5  89542458             mov dword ptr [esp + 0x58], edx
// 007f12a9  83eb03               sub ebx, 3
// 007f12ac  6810080000           push 0x810
// 007f12b1  8d542458             lea edx, [esp + 0x58]
// 007f12b5  894c2458             mov dword ptr [esp + 0x58], ecx
// 007f12b9  83ed06               sub ebp, 6
// 007f12bc  895c2464             mov dword ptr [esp + 0x64], ebx
// 007f12c0  8b1e                 mov ebx, dword ptr [esi]
// 007f12c2  52                   push edx
// 007f12c3  8d4c241c             lea ecx, [esp + 0x1c]
// 007f12c7  896c2464             mov dword ptr [esp + 0x64], ebp
// 007f12cb  ff1554fb8900         call dword ptr [0x89fb54]
// 007f12d1  50                   push eax
// 007f12d2  8d4c2420             lea ecx, [esp + 0x20]
// 007f12d6  ff15d0fc8900         call dword ptr [0x89fcd0]
// 007f12dc  50                   push eax
// 007f12dd  8b4370               mov eax, dword ptr [ebx + 0x70]
// 007f12e0  8bce                 mov ecx, esi
// 007f12e2  ffd0                 call eax
// 007f12e4  8d4c2474             lea ecx, [esp + 0x74]
// 007f12e8  c684249c00000002     mov byte ptr [esp + 0x9c], 2
// 007f12f0  e8ebf5f7ff           call 0x7708e0
// 007f12f5  8d4c2414             lea ecx, [esp + 0x14]
// 007f12f9  ff1510fd8900         call dword ptr [0x89fd10]
// 007f12ff  8b4f60               mov ecx, dword ptr [edi + 0x60]
// 007f1302  bafdffffff           mov edx, 0xfffffffd
// 007f1307  2b5154               sub edx, dword ptr [ecx + 0x54]
// 007f130a  8d8c2484000000       lea ecx, [esp + 0x84]
// 007f1311  01542440             add dword ptr [esp + 0x40], edx
// 007f1315  c784249c000000ffffffff mov dword ptr [esp + 0x9c], 0xffffffff
// 007f1320  e8bbf5f7ff           call 0x7708e0
// 007f1325  8b4f60               mov ecx, dword ptr [edi + 0x60]
// 007f1328  8b8138010000         mov eax, dword ptr [ecx + 0x138]
// 007f132e  83782800             cmp dword ptr [eax + 0x28], 0
// 007f1332  0f8495000000         je 0x7f13cd
// 007f1338  8b542434             mov edx, dword ptr [esp + 0x34]
// 007f133c  8b442438             mov eax, dword ptr [esp + 0x38]
// 007f1340  89442448             mov dword ptr [esp + 0x48], eax
// 007f1344  8b442440             mov eax, dword ptr [esp + 0x40]
// 007f1348  89542444             mov dword ptr [esp + 0x44], edx
// 007f134c  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 007f1350  8954244c             mov dword ptr [esp + 0x4c], edx
// 007f1354  89442450             mov dword ptr [esp + 0x50], eax
// 007f1358  2b4158               sub eax, dword ptr [ecx + 0x58]
// 007f135b  837c241800           cmp dword ptr [esp + 0x18], 0
// 007f1360  89442448             mov dword ptr [esp + 0x48], eax
// 007f1364  7406                 je 0x7f136c
// 007f1366  837f2c00             cmp dword ptr [edi + 0x2c], 0
// 007f136a  7522                 jne 0x7f138e
// 007f136c  8b4774               mov eax, dword ptr [edi + 0x74]
// 007f136f  8b483c               mov ecx, dword ptr [eax + 0x3c]
// 007f1372  83c034               add eax, 0x34
// 007f1375  83f9ff               cmp ecx, -1
// 007f1378  7505                 jne 0x7f137f
// 007f137a  8b4004               mov eax, dword ptr [eax + 4]
// 007f137d  eb02                 jmp 0x7f1381
// 007f137f  8bc1                 mov eax, ecx
// 007f1381  50                   push eax
// 007f1382  8d442448             lea eax, [esp + 0x48]
// 007f1386  50                   push eax
// 007f1387  8bce                 mov ecx, esi
// 007f1389  e84284f2ff           call 0x7197d0
// 007f138e  8b17                 mov edx, dword ptr [edi]
// 007f1390  8b5218               mov edx, dword ptr [edx + 0x18]
// 007f1393  6a00                 push 0
// 007f1395  8d442448             lea eax, [esp + 0x48]
// 007f1399  50                   push eax
// 007f139a  56                   push esi
// 007f139b  8bcf                 mov ecx, edi
// 007f139d  ffd2                 call edx
// 007f139f  8b542448             mov edx, dword ptr [esp + 0x48]
// 007f13a3  33c9                 xor ecx, ecx
// 007f13a5  51                   push ecx
// 007f13a6  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 007f13aa  33c0                 xor eax, eax
// 007f13ac  50                   push eax
// 007f13ad  83ec10               sub esp, 0x10
// 007f13b0  8bc4                 mov eax, esp
// 007f13b2  8908                 mov dword ptr [eax], ecx
// 007f13b4  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 007f13b8  895004               mov dword ptr [eax + 4], edx
// 007f13bb  8b542468             mov edx, dword ptr [esp + 0x68]
// 007f13bf  894808               mov dword ptr [eax + 8], ecx
// 007f13c2  56                   push esi
// 007f13c3  8bcf                 mov ecx, edi
// 007f13c5  89500c               mov dword ptr [eax + 0xc], edx
// 007f13c8  e8f3deffff           call 0x7ef2c0
// 007f13cd  8b8c2494000000       mov ecx, dword ptr [esp + 0x94]
// 007f13d4  64890d00000000       mov dword ptr fs:[0], ecx
// 007f13db  59                   pop ecx
// 007f13dc  5f                   pop edi
// 007f13dd  5e                   pop esi
// 007f13de  5d                   pop ebp
// 007f13df  5b                   pop ebx
// 007f13e0  81c48c000000         add esp, 0x8c
// 007f13e6  c20400               ret 4
// copied from an identical function in another client (function ?FillPropertyGrid@CXTPPropertyGridPaintManager@@UAEXPAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\PropertyGrid\XTPPropertyGridPaintManager.cpp