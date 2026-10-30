// roc 2009-12 008f1280  unit: CXTPRibbonControlTab  size: 451 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008f1280
//
// 008f1280  6aff                 push -1
// 008f1282  6890699600           push 0x966990
// 008f1287  64a100000000         mov eax, dword ptr fs:[0]
// 008f128d  50                   push eax
// 008f128e  83ec10               sub esp, 0x10
// 008f1291  53                   push ebx
// 008f1292  55                   push ebp
// 008f1293  56                   push esi
// 008f1294  57                   push edi
// 008f1295  a10052b600           mov eax, dword ptr [0xb65200]
// 008f129a  33c4                 xor eax, esp
// 008f129c  50                   push eax
// 008f129d  8d442424             lea eax, [esp + 0x24]
// 008f12a1  64a300000000         mov dword ptr fs:[0], eax
// 008f12a7  8be9                 mov ebp, ecx
// 008f12a9  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008f12ad  8b01                 mov eax, dword ptr [ecx]
// 008f12af  8b9094000000         mov edx, dword ptr [eax + 0x94]
// 008f12b5  33ff                 xor edi, edi
// 008f12b7  68ac35a000           push 0xa035ac
// 008f12bc  397928               cmp dword ptr [ecx + 0x28], edi
// 008f12bf  0f85a1000000         jne 0x8f1366
// 008f12c5  8bb5e0010000         mov esi, dword ptr [ebp + 0x1e0]
// 008f12cb  89742420             mov dword ptr [esp + 0x20], esi
// 008f12cf  ffd2                 call edx
// 008f12d1  8bd8                 mov ebx, eax
// 008f12d3  895c2414             mov dword ptr [esp + 0x14], ebx
// 008f12d7  8b03                 mov eax, dword ptr [ebx]
// 008f12d9  8b5004               mov edx, dword ptr [eax + 4]
// 008f12dc  57                   push edi
// 008f12dd  56                   push esi
// 008f12de  8bcb                 mov ecx, ebx
// 008f12e0  897c2434             mov dword ptr [esp + 0x34], edi
// 008f12e4  ffd2                 call edx
// 008f12e6  89442418             mov dword ptr [esp + 0x18], eax
// 008f12ea  85f6                 test esi, esi
// 008f12ec  7e6f                 jle 0x8f135d
// 008f12ee  85ff                 test edi, edi
// 008f12f0  7c15                 jl 0x8f1307
// 008f12f2  3bbde0010000         cmp edi, dword ptr [ebp + 0x1e0]
// 008f12f8  7d0d                 jge 0x8f1307
// 008f12fa  8b85dc010000         mov eax, dword ptr [ebp + 0x1dc]
// 008f1300  8d04b8               lea eax, [eax + edi*4]
// 008f1303  8b00                 mov eax, dword ptr [eax]
// 008f1305  eb02                 jmp 0x8f1309
// 008f1307  33c0                 xor eax, eax
// 008f1309  89442434             mov dword ptr [esp + 0x34], eax
// 008f130d  8b13                 mov edx, dword ptr [ebx]
// 008f130f  8b5208               mov edx, dword ptr [edx + 8]
// 008f1312  8d442418             lea eax, [esp + 0x18]
// 008f1316  50                   push eax
// 008f1317  8bcb                 mov ecx, ebx
// 008f1319  ffd2                 call edx
// 008f131b  8bf0                 mov esi, eax
// 008f131d  89742420             mov dword ptr [esp + 0x20], esi
// 008f1321  c644242c01           mov byte ptr [esp + 0x2c], 1
// 008f1326  e8e590ffff           call 0x8ea410
// 008f132b  8b16                 mov edx, dword ptr [esi]
// 008f132d  8b5264               mov edx, dword ptr [edx + 0x64]
// 008f1330  50                   push eax
// 008f1331  8d442438             lea eax, [esp + 0x38]
// 008f1335  50                   push eax
// 008f1336  8bce                 mov ecx, esi
// 008f1338  ffd2                 call edx
// 008f133a  85c0                 test eax, eax
// 008f133c  740c                 je 0x8f134a
// 008f133e  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008f1342  8b01                 mov eax, dword ptr [ecx]
// 008f1344  8b5064               mov edx, dword ptr [eax + 0x64]
// 008f1347  56                   push esi
// 008f1348  ffd2                 call edx
// 008f134a  8bce                 mov ecx, esi
// 008f134c  c644242c00           mov byte ptr [esp + 0x2c], 0
// 008f1351  e8862af0ff           call 0x7f3ddc
// 008f1356  47                   inc edi
// 008f1357  3b7c241c             cmp edi, dword ptr [esp + 0x1c]
// 008f135b  7c91                 jl 0x8f12ee
// 008f135d  8b03                 mov eax, dword ptr [ebx]
// 008f135f  8bcb                 mov ecx, ebx
// 008f1361  e9b0000000           jmp 0x8f1416
// 008f1366  ffd2                 call edx
// 008f1368  8bf8                 mov edi, eax
// 008f136a  897c2420             mov dword ptr [esp + 0x20], edi
// 008f136e  8b07                 mov eax, dword ptr [edi]
// 008f1370  8b5004               mov edx, dword ptr [eax + 4]
// 008f1373  6a00                 push 0
// 008f1375  6a00                 push 0
// 008f1377  8bcf                 mov ecx, edi
// 008f1379  c744243402000000     mov dword ptr [esp + 0x34], 2
// 008f1381  ffd2                 call edx
// 008f1383  8d9d84010000         lea ebx, [ebp + 0x184]
// 008f1389  8bcb                 mov ecx, ebx
// 008f138b  89442414             mov dword ptr [esp + 0x14], eax
// 008f138f  e8dce0fdff           call 0x8cf470
// 008f1394  837c241400           cmp dword ptr [esp + 0x14], 0
// 008f1399  7477                 je 0x8f1412
// 008f139b  eb03                 jmp 0x8f13a0
// 008f139d  8d4900               lea ecx, [ecx]
// 008f13a0  8b07                 mov eax, dword ptr [edi]
// 008f13a2  8b5008               mov edx, dword ptr [eax + 8]
// 008f13a5  8d4c2414             lea ecx, [esp + 0x14]
// 008f13a9  51                   push ecx
// 008f13aa  8bcf                 mov ecx, edi
// 008f13ac  ffd2                 call edx
// 008f13ae  8bf0                 mov esi, eax
// 008f13b0  8974241c             mov dword ptr [esp + 0x1c], esi
// 008f13b4  896e24               mov dword ptr [esi + 0x24], ebp
// 008f13b7  c644242c03           mov byte ptr [esp + 0x2c], 3
// 008f13bc  c744243400000000     mov dword ptr [esp + 0x34], 0
// 008f13c4  e84790ffff           call 0x8ea410
// 008f13c9  8b16                 mov edx, dword ptr [esi]
// 008f13cb  8b5264               mov edx, dword ptr [edx + 0x64]
// 008f13ce  50                   push eax
// 008f13cf  8d442438             lea eax, [esp + 0x38]
// 008f13d3  50                   push eax
// 008f13d4  8bce                 mov ecx, esi
// 008f13d6  ffd2                 call edx
// 008f13d8  85c0                 test eax, eax
// 008f13da  740c                 je 0x8f13e8
// 008f13dc  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008f13e0  8b01                 mov eax, dword ptr [ecx]
// 008f13e2  8b5064               mov edx, dword ptr [eax + 0x64]
// 008f13e5  56                   push esi
// 008f13e6  ffd2                 call edx
// 008f13e8  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008f13ec  85c9                 test ecx, ecx
// 008f13ee  744a                 je 0x8f143a
// 008f13f0  8b85e0010000         mov eax, dword ptr [ebp + 0x1e0]
// 008f13f6  51                   push ecx
// 008f13f7  50                   push eax
// 008f13f8  8bcb                 mov ecx, ebx
// 008f13fa  e8e1e0fdff           call 0x8cf4e0
// 008f13ff  8bce                 mov ecx, esi
// 008f1401  c644242c02           mov byte ptr [esp + 0x2c], 2
// 008f1406  e8d129f0ff           call 0x7f3ddc
// 008f140b  837c241400           cmp dword ptr [esp + 0x14], 0
// 008f1410  758e                 jne 0x8f13a0
// 008f1412  8b07                 mov eax, dword ptr [edi]
// 008f1414  8bcf                 mov ecx, edi
// 008f1416  8b10                 mov edx, dword ptr [eax]
// 008f1418  6a01                 push 1
// 008f141a  c7442430ffffffff     mov dword ptr [esp + 0x30], 0xffffffff
// 008f1422  ffd2                 call edx
// 008f1424  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008f1428  64890d00000000       mov dword ptr fs:[0], ecx
// 008f142f  59                   pop ecx
// 008f1430  5f                   pop edi
// 008f1431  5e                   pop esi
// 008f1432  5d                   pop ebp
// 008f1433  5b                   pop ebx
// 008f1434  83c41c               add esp, 0x1c
// 008f1437  c20400               ret 4
// 008f143a  6a00                 push 0
// 008f143c  6a06                 push 6
// 008f143e  e88d2ff0ff           call 0x7f43d0
// copied from an identical function in another client (function ?DoPropExchange@CXTPRibbonControlTab@@MAEXPAVCXTPPropExchange@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Ribbon\XTPRibbonControlTab.cpp