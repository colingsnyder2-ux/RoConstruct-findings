// roc 2011-06 008d12c0  unit: CXTPDockingPaneContext  size: 892 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008d12c0
//
// 008d12c0  8b442404             mov eax, dword ptr [esp + 4]
// 008d12c4  83ec28               sub esp, 0x28
// 008d12c7  53                   push ebx
// 008d12c8  55                   push ebp
// 008d12c9  56                   push esi
// 008d12ca  8bf1                 mov esi, ecx
// 008d12cc  8b8eec000000         mov ecx, dword ptr [esi + 0xec]
// 008d12d2  8b96f0000000         mov edx, dword ptr [esi + 0xf0]
// 008d12d8  2bc1                 sub eax, ecx
// 008d12da  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 008d12de  57                   push edi
// 008d12df  2bca                 sub ecx, edx
// 008d12e1  51                   push ecx
// 008d12e2  50                   push eax
// 008d12e3  8dbe0c010000         lea edi, [esi + 0x10c]
// 008d12e9  57                   push edi
// 008d12ea  ff15601ca400         call dword ptr [0xa41c60]
// 008d12f0  8d9efc000000         lea ebx, [esi + 0xfc]
// 008d12f6  8d442418             lea eax, [esp + 0x18]
// 008d12fa  53                   push ebx
// 008d12fb  50                   push eax
// 008d12fc  e80f0ef8ff           call 0x852110
// 008d1301  8bc8                 mov ecx, eax
// 008d1303  e86809f8ff           call 0x851c70
// 008d1308  50                   push eax
// 008d1309  57                   push edi
// 008d130a  8d4c2430             lea ecx, [esp + 0x30]
// 008d130e  51                   push ecx
// 008d130f  ff15fc1ba400         call dword ptr [0xa41bfc]
// 008d1315  85c0                 test eax, eax
// 008d1317  7416                 je 0x8d132f
// 008d1319  8b17                 mov edx, dword ptr [edi]
// 008d131b  8b4704               mov eax, dword ptr [edi + 4]
// 008d131e  8b4f08               mov ecx, dword ptr [edi + 8]
// 008d1321  8913                 mov dword ptr [ebx], edx
// 008d1323  8b570c               mov edx, dword ptr [edi + 0xc]
// 008d1326  894304               mov dword ptr [ebx + 4], eax
// 008d1329  894b08               mov dword ptr [ebx + 8], ecx
// 008d132c  89530c               mov dword ptr [ebx + 0xc], edx
// 008d132f  53                   push ebx
// 008d1330  e8abd3ffff           call 0x8ce6e0
// 008d1335  83c404               add esp, 4
// 008d1338  53                   push ebx
// 008d1339  ff15641ca400         call dword ptr [0xa41c64]
// 008d133f  85c0                 test eax, eax
// 008d1341  7519                 jne 0x8d135c
// 008d1343  8b861c010000         mov eax, dword ptr [esi + 0x11c]
// 008d1349  83b8e000000000       cmp dword ptr [eax + 0xe0], 0
// 008d1350  740a                 je 0x8d135c
// 008d1352  8b16                 mov edx, dword ptr [esi]
// 008d1354  8b4224               mov eax, dword ptr [edx + 0x24]
// 008d1357  53                   push ebx
// 008d1358  8bce                 mov ecx, esi
// 008d135a  ffd0                 call eax
// 008d135c  8d86b8000000         lea eax, [esi + 0xb8]
// 008d1362  33ed                 xor ebp, ebp
// 008d1364  50                   push eax
// 008d1365  89ae2c010000         mov dword ptr [esi + 0x12c], ebp
// 008d136b  89ae44010000         mov dword ptr [esi + 0x144], ebp
// 008d1371  ff15ac19a400         call dword ptr [0xa419ac]
// 008d1377  6a11                 push 0x11
// 008d1379  89aec8000000         mov dword ptr [esi + 0xc8], ebp
// 008d137f  ff15601aa400         call dword ptr [0xa41a60]
// 008d1385  6685c0               test ax, ax
// 008d1388  7c1b                 jl 0x8d13a5
// 008d138a  39ae4c010000         cmp dword ptr [esi + 0x14c], ebp
// 008d1390  7413                 je 0x8d13a5
// 008d1392  8b442440             mov eax, dword ptr [esp + 0x40]
// 008d1396  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 008d139a  8b16                 mov edx, dword ptr [esi]
// 008d139c  8b5220               mov edx, dword ptr [edx + 0x20]
// 008d139f  50                   push eax
// 008d13a0  51                   push ecx
// 008d13a1  8bce                 mov ecx, esi
// 008d13a3  ffd2                 call edx
// 008d13a5  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 008d13a9  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 008d13ad  8986ec000000         mov dword ptr [esi + 0xec], eax
// 008d13b3  898ef0000000         mov dword ptr [esi + 0xf0], ecx
// 008d13b9  39aeb0000000         cmp dword ptr [esi + 0xb0], ebp
// 008d13bf  0f843b020000         je 0x8d1600
// 008d13c5  8bce                 mov ecx, esi
// 008d13c7  e864fbffff           call 0x8d0f30
// 008d13cc  8b86d8000000         mov eax, dword ptr [esi + 0xd8]
// 008d13d2  33db                 xor ebx, ebx
// 008d13d4  3bc5                 cmp eax, ebp
// 008d13d6  0f8424020000         je 0x8d1600
// 008d13dc  eb06                 jmp 0x8d13e4
// 008d13de  8bff                 mov edi, edi
// 008d13e0  8b442414             mov eax, dword ptr [esp + 0x14]
// 008d13e4  8b5004               mov edx, dword ptr [eax + 4]
// 008d13e7  8b7808               mov edi, dword ptr [eax + 8]
// 008d13ea  89542414             mov dword ptr [esp + 0x14], edx
// 008d13ee  896c2410             mov dword ptr [esp + 0x10], ebp
// 008d13f2  3bdd                 cmp ebx, ebp
// 008d13f4  0f85e0010000         jne 0x8d15da
// 008d13fa  8b442440             mov eax, dword ptr [esp + 0x40]
// 008d13fe  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 008d1402  50                   push eax
// 008d1403  51                   push ecx
// 008d1404  8bcf                 mov ecx, edi
// 008d1406  e825caffff           call 0x8cde30
// 008d140b  8be8                 mov ebp, eax
// 008d140d  85ed                 test ebp, ebp
// 008d140f  0f84c5010000         je 0x8d15da
// 008d1415  f6475420             test byte ptr [edi + 0x54], 0x20
// 008d1419  7438                 je 0x8d1453
// 008d141b  8b96c8000000         mov edx, dword ptr [esi + 0xc8]
// 008d1421  8b86b8000000         mov eax, dword ptr [esi + 0xb8]
// 008d1427  8b8ebc000000         mov ecx, dword ptr [esi + 0xbc]
// 008d142d  898630010000         mov dword ptr [esi + 0x130], eax
// 008d1433  8b86c4000000         mov eax, dword ptr [esi + 0xc4]
// 008d1439  89962c010000         mov dword ptr [esi + 0x12c], edx
// 008d143f  8b96c0000000         mov edx, dword ptr [esi + 0xc0]
// 008d1445  898e34010000         mov dword ptr [esi + 0x134], ecx
// 008d144b  899638010000         mov dword ptr [esi + 0x138], edx
// 008d1451  eb3a                 jmp 0x8d148d
// 008d1453  8b8e1c010000         mov ecx, dword ptr [esi + 0x11c]
// 008d1459  e892ccf7ff           call 0x84e0f0
// 008d145e  8d4c2428             lea ecx, [esp + 0x28]
// 008d1462  51                   push ecx
// 008d1463  8bc8                 mov ecx, eax
// 008d1465  89862c010000         mov dword ptr [esi + 0x12c], eax
// 008d146b  e85008ffff           call 0x8c1cc0
// 008d1470  8b10                 mov edx, dword ptr [eax]
// 008d1472  899630010000         mov dword ptr [esi + 0x130], edx
// 008d1478  8b4804               mov ecx, dword ptr [eax + 4]
// 008d147b  898e34010000         mov dword ptr [esi + 0x134], ecx
// 008d1481  8b5008               mov edx, dword ptr [eax + 8]
// 008d1484  899638010000         mov dword ptr [esi + 0x138], edx
// 008d148a  8b400c               mov eax, dword ptr [eax + 0xc]
// 008d148d  89863c010000         mov dword ptr [esi + 0x13c], eax
// 008d1493  8d45ff               lea eax, [ebp - 1]
// 008d1496  83f80f               cmp eax, 0xf
// 008d1499  0f87a4000000         ja 0x8d1543
// 008d149f  0fb6882c168d00       movzx ecx, byte ptr [eax + 0x8d162c]
// 008d14a6  ff248d14168d00       jmp dword ptr [ecx*4 + 0x8d1614]
// 008d14ad  8b863c010000         mov eax, dword ptr [esi + 0x13c]
// 008d14b3  038634010000         add eax, dword ptr [esi + 0x134]
// 008d14b9  c7868801000002000000 mov dword ptr [esi + 0x188], 2
// 008d14c3  99                   cdq 
// 008d14c4  2bc2                 sub eax, edx
// 008d14c6  d1f8                 sar eax, 1
// 008d14c8  89863c010000         mov dword ptr [esi + 0x13c], eax
// 008d14ce  eb73                 jmp 0x8d1543
// 008d14d0  8b863c010000         mov eax, dword ptr [esi + 0x13c]
// 008d14d6  038634010000         add eax, dword ptr [esi + 0x134]
// 008d14dc  c7868801000003000000 mov dword ptr [esi + 0x188], 3
// 008d14e6  99                   cdq 
// 008d14e7  2bc2                 sub eax, edx
// 008d14e9  d1f8                 sar eax, 1
// 008d14eb  898634010000         mov dword ptr [esi + 0x134], eax
// 008d14f1  eb50                 jmp 0x8d1543
// 008d14f3  8b8638010000         mov eax, dword ptr [esi + 0x138]
// 008d14f9  038630010000         add eax, dword ptr [esi + 0x130]
// 008d14ff  c7868801000000000000 mov dword ptr [esi + 0x188], 0
// 008d1509  99                   cdq 
// 008d150a  2bc2                 sub eax, edx
// 008d150c  d1f8                 sar eax, 1
// 008d150e  898638010000         mov dword ptr [esi + 0x138], eax
// 008d1514  eb2d                 jmp 0x8d1543
// 008d1516  8b8638010000         mov eax, dword ptr [esi + 0x138]
// 008d151c  038630010000         add eax, dword ptr [esi + 0x130]
// 008d1522  c7868801000001000000 mov dword ptr [esi + 0x188], 1
// 008d152c  99                   cdq 
// 008d152d  2bc2                 sub eax, edx
// 008d152f  d1f8                 sar eax, 1
// 008d1531  898630010000         mov dword ptr [esi + 0x130], eax
// 008d1537  eb0a                 jmp 0x8d1543
// 008d1539  c7864401000001000000 mov dword ptr [esi + 0x144], 1
// 008d1543  83fd10               cmp ebp, 0x10
// 008d1546  7421                 je 0x8d1569
// 008d1548  8b9688010000         mov edx, dword ptr [esi + 0x188]
// 008d154e  8b862c010000         mov eax, dword ptr [esi + 0x12c]
// 008d1554  52                   push edx
// 008d1555  50                   push eax
// 008d1556  8bce                 mov ecx, esi
// 008d1558  e843e7ffff           call 0x8cfca0
// 008d155d  85c0                 test eax, eax
// 008d155f  7528                 jne 0x8d1589
// 008d1561  89862c010000         mov dword ptr [esi + 0x12c], eax
// 008d1567  eb6c                 jmp 0x8d15d5
// 008d1569  8b8e2c010000         mov ecx, dword ptr [esi + 0x12c]
// 008d156f  51                   push ecx
// 008d1570  8bce                 mov ecx, esi
// 008d1572  e8f9e7ffff           call 0x8cfd70
// 008d1577  85c0                 test eax, eax
// 008d1579  7556                 jne 0x8d15d1
// 008d157b  89862c010000         mov dword ptr [esi + 0x12c], eax
// 008d1581  898644010000         mov dword ptr [esi + 0x144], eax
// 008d1587  eb4c                 jmp 0x8d15d5
// 008d1589  8b962c010000         mov edx, dword ptr [esi + 0x12c]
// 008d158f  8b8688010000         mov eax, dword ptr [esi + 0x188]
// 008d1595  8b8e20010000         mov ecx, dword ptr [esi + 0x120]
// 008d159b  52                   push edx
// 008d159c  50                   push eax
// 008d159d  51                   push ecx
// 008d159e  8b8e1c010000         mov ecx, dword ptr [esi + 0x11c]
// 008d15a4  8d542424             lea edx, [esp + 0x24]
// 008d15a8  52                   push edx
// 008d15a9  e872d1f7ff           call 0x84e720
// 008d15ae  8b08                 mov ecx, dword ptr [eax]
// 008d15b0  898e30010000         mov dword ptr [esi + 0x130], ecx
// 008d15b6  8b5004               mov edx, dword ptr [eax + 4]
// 008d15b9  899634010000         mov dword ptr [esi + 0x134], edx
// 008d15bf  8b4808               mov ecx, dword ptr [eax + 8]
// 008d15c2  898e38010000         mov dword ptr [esi + 0x138], ecx
// 008d15c8  8b500c               mov edx, dword ptr [eax + 0xc]
// 008d15cb  89963c010000         mov dword ptr [esi + 0x13c], edx
// 008d15d1  896c2410             mov dword ptr [esp + 0x10], ebp
// 008d15d5  bb01000000           mov ebx, 1
// 008d15da  8b442410             mov eax, dword ptr [esp + 0x10]
// 008d15de  394758               cmp dword ptr [edi + 0x58], eax
// 008d15e1  7411                 je 0x8d15f4
// 008d15e3  6a00                 push 0
// 008d15e5  894758               mov dword ptr [edi + 0x58], eax
// 008d15e8  8b4720               mov eax, dword ptr [edi + 0x20]
// 008d15eb  6a00                 push 0
// 008d15ed  50                   push eax
// 008d15ee  ff15ec19a400         call dword ptr [0xa419ec]
// 008d15f4  33ed                 xor ebp, ebp
// 008d15f6  396c2414             cmp dword ptr [esp + 0x14], ebp
// 008d15fa  0f85e0fdffff         jne 0x8d13e0
// 008d1600  8b16                 mov edx, dword ptr [esi]
// 008d1602  8b421c               mov eax, dword ptr [edx + 0x1c]
// 008d1605  55                   push ebp
// 008d1606  8bce                 mov ecx, esi
// 008d1608  ffd0                 call eax
// 008d160a  5f                   pop edi
// 008d160b  5e                   pop esi
// 008d160c  5d                   pop ebp
// 008d160d  5b                   pop ebx
// 008d160e  83c428               add esp, 0x28
// 008d1611  c20800               ret 8
// 008d1614  f3148d               adc al, 0x8d
// 008d1617  0016                 add byte ptr [esi], dl
// 008d1619  158d00ad14           adc eax, 0x14ad008d
// 008d161e  8d00                 lea eax, [eax]
// 008d1620  d0148d0039158d       rcl byte ptr [ecx*4 - 0x72eac700]
// 008d1627  004315               add byte ptr [ebx + 0x15], al
// 008d162a  8d00                 lea eax, [eax]
// 008d162c  0001                 add byte ptr [ecx], al
// 008d162e  0502050505           add eax, 0x5050502
// 008d1633  030505050505         add eax, dword ptr [0x5050505]
// copied from an identical function in another client (function ?Move@CXTPDockingPaneContext@@MAEXVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/DockingPane/XTPDockingPaneContext.cpp