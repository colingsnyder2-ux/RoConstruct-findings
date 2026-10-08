// roc 2007-03 004c12a0  unit: seg_004c0000  size: 923 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004c12a0
//
// 004c12a0  83ec10               sub esp, 0x10
// 004c12a3  a1949e8b00           mov eax, dword ptr [0x8b9e94]
// 004c12a8  53                   push ebx
// 004c12a9  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 004c12ad  8b0b                 mov ecx, dword ptr [ebx]
// 004c12af  55                   push ebp
// 004c12b0  c1e004               shl eax, 4
// 004c12b3  56                   push esi
// 004c12b4  8b742428             mov esi, dword ptr [esp + 0x28]
// 004c12b8  330c30               xor ecx, dword ptr [eax + esi]
// 004c12bb  8b6c3008             mov ebp, dword ptr [eax + esi + 8]
// 004c12bf  336b08               xor ebp, dword ptr [ebx + 8]
// 004c12c2  8b543004             mov edx, dword ptr [eax + esi + 4]
// 004c12c6  335304               xor edx, dword ptr [ebx + 4]
// 004c12c9  57                   push edi
// 004c12ca  8b7c300c             mov edi, dword ptr [eax + esi + 0xc]
// 004c12ce  337b0c               xor edi, dword ptr [ebx + 0xc]
// 004c12d1  03c6                 add eax, esi
// 004c12d3  8bc7                 mov eax, edi
// 004c12d5  c1e808               shr eax, 8
// 004c12d8  8bdd                 mov ebx, ebp
// 004c12da  c1eb10               shr ebx, 0x10
// 004c12dd  0fb6db               movzx ebx, bl
// 004c12e0  0fb6c0               movzx eax, al
// 004c12e3  896c2418             mov dword ptr [esp + 0x18], ebp
// 004c12e7  8b2c85882d8900       mov ebp, dword ptr [eax*4 + 0x892d88]
// 004c12ee  332c9d88318900       xor ebp, dword ptr [ebx*4 + 0x893188]
// 004c12f5  8bdf                 mov ebx, edi
// 004c12f7  897c241c             mov dword ptr [esp + 0x1c], edi
// 004c12fb  c1eb10               shr ebx, 0x10
// 004c12fe  0fb6fb               movzx edi, bl
// 004c1301  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 004c1305  8bc2                 mov eax, edx
// 004c1307  c1e818               shr eax, 0x18
// 004c130a  332c8588358900       xor ebp, dword ptr [eax*4 + 0x893588]
// 004c1311  0fb6c1               movzx eax, cl
// 004c1314  332c8588298900       xor ebp, dword ptr [eax*4 + 0x892988]
// 004c131b  8b442428             mov eax, dword ptr [esp + 0x28]
// 004c131f  8928                 mov dword ptr [eax], ebp
// 004c1321  8b3cbd88318900       mov edi, dword ptr [edi*4 + 0x893188]
// 004c1328  c1eb18               shr ebx, 0x18
// 004c132b  333c9d88358900       xor edi, dword ptr [ebx*4 + 0x893588]
// 004c1332  8bd9                 mov ebx, ecx
// 004c1334  c1eb08               shr ebx, 8
// 004c1337  0fb6db               movzx ebx, bl
// 004c133a  333c9d882d8900       xor edi, dword ptr [ebx*4 + 0x892d88]
// 004c1341  0fb6da               movzx ebx, dl
// 004c1344  333c9d88298900       xor edi, dword ptr [ebx*4 + 0x892988]
// 004c134b  8bda                 mov ebx, edx
// 004c134d  897804               mov dword ptr [eax + 4], edi
// 004c1350  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 004c1354  c1ef18               shr edi, 0x18
// 004c1357  8b3cbd88358900       mov edi, dword ptr [edi*4 + 0x893588]
// 004c135e  c1eb08               shr ebx, 8
// 004c1361  0fb6db               movzx ebx, bl
// 004c1364  333c9d882d8900       xor edi, dword ptr [ebx*4 + 0x892d88]
// 004c136b  8bd9                 mov ebx, ecx
// 004c136d  c1eb10               shr ebx, 0x10
// 004c1370  0fb6db               movzx ebx, bl
// 004c1373  333c9d88318900       xor edi, dword ptr [ebx*4 + 0x893188]
// 004c137a  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 004c137e  0fb6eb               movzx ebp, bl
// 004c1381  333cad88298900       xor edi, dword ptr [ebp*4 + 0x892988]
// 004c1388  c1eb08               shr ebx, 8
// 004c138b  897808               mov dword ptr [eax + 8], edi
// 004c138e  c1ea10               shr edx, 0x10
// 004c1391  0fb6fb               movzx edi, bl
// 004c1394  8b3cbd882d8900       mov edi, dword ptr [edi*4 + 0x892d88]
// 004c139b  0fb6d2               movzx edx, dl
// 004c139e  333c9588318900       xor edi, dword ptr [edx*4 + 0x893188]
// 004c13a5  c1e918               shr ecx, 0x18
// 004c13a8  333c8d88358900       xor edi, dword ptr [ecx*4 + 0x893588]
// 004c13af  0fb64c241c           movzx ecx, byte ptr [esp + 0x1c]
// 004c13b4  333c8d88298900       xor edi, dword ptr [ecx*4 + 0x892988]
// 004c13bb  89780c               mov dword ptr [eax + 0xc], edi
// 004c13be  8b0d949e8b00         mov ecx, dword ptr [0x8b9e94]
// 004c13c4  83c1ff               add ecx, -1
// 004c13c7  83f901               cmp ecx, 1
// 004c13ca  0f8e23010000         jle 0x4c14f3
// 004c13d0  8bd1                 mov edx, ecx
// 004c13d2  c1e204               shl edx, 4
// 004c13d5  83c1ff               add ecx, -1
// 004c13d8  8d743208             lea esi, [edx + esi + 8]
// 004c13dc  894c2424             mov dword ptr [esp + 0x24], ecx
// 004c13e0  8b3e                 mov edi, dword ptr [esi]
// 004c13e2  337808               xor edi, dword ptr [eax + 8]
// 004c13e5  8b56fc               mov edx, dword ptr [esi - 4]
// 004c13e8  897c2418             mov dword ptr [esp + 0x18], edi
// 004c13ec  8b7e04               mov edi, dword ptr [esi + 4]
// 004c13ef  33780c               xor edi, dword ptr [eax + 0xc]
// 004c13f2  335004               xor edx, dword ptr [eax + 4]
// 004c13f5  8b4ef8               mov ecx, dword ptr [esi - 8]
// 004c13f8  3308                 xor ecx, dword ptr [eax]
// 004c13fa  8bdf                 mov ebx, edi
// 004c13fc  c1eb08               shr ebx, 8
// 004c13ff  897c241c             mov dword ptr [esp + 0x1c], edi
// 004c1403  0fb6fb               movzx edi, bl
// 004c1406  8b3cbd882d8900       mov edi, dword ptr [edi*4 + 0x892d88]
// 004c140d  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 004c1411  c1eb10               shr ebx, 0x10
// 004c1414  0fb6db               movzx ebx, bl
// 004c1417  333c9d88318900       xor edi, dword ptr [ebx*4 + 0x893188]
// 004c141e  8bda                 mov ebx, edx
// 004c1420  c1eb18               shr ebx, 0x18
// 004c1423  333c9d88358900       xor edi, dword ptr [ebx*4 + 0x893588]
// 004c142a  0fb6d9               movzx ebx, cl
// 004c142d  333c9d88298900       xor edi, dword ptr [ebx*4 + 0x892988]
// 004c1434  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 004c1438  c1eb10               shr ebx, 0x10
// 004c143b  8938                 mov dword ptr [eax], edi
// 004c143d  0fb6fb               movzx edi, bl
// 004c1440  8b3cbd88318900       mov edi, dword ptr [edi*4 + 0x893188]
// 004c1447  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 004c144b  c1eb18               shr ebx, 0x18
// 004c144e  333c9d88358900       xor edi, dword ptr [ebx*4 + 0x893588]
// 004c1455  8bd9                 mov ebx, ecx
// 004c1457  c1eb08               shr ebx, 8
// 004c145a  0fb6db               movzx ebx, bl
// 004c145d  333c9d882d8900       xor edi, dword ptr [ebx*4 + 0x892d88]
// 004c1464  0fb6da               movzx ebx, dl
// 004c1467  333c9d88298900       xor edi, dword ptr [ebx*4 + 0x892988]
// 004c146e  8bda                 mov ebx, edx
// 004c1470  897804               mov dword ptr [eax + 4], edi
// 004c1473  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 004c1477  c1ef18               shr edi, 0x18
// 004c147a  8b3cbd88358900       mov edi, dword ptr [edi*4 + 0x893588]
// 004c1481  c1eb08               shr ebx, 8
// 004c1484  0fb6db               movzx ebx, bl
// 004c1487  333c9d882d8900       xor edi, dword ptr [ebx*4 + 0x892d88]
// 004c148e  8bd9                 mov ebx, ecx
// 004c1490  c1eb10               shr ebx, 0x10
// 004c1493  0fb6db               movzx ebx, bl
// 004c1496  333c9d88318900       xor edi, dword ptr [ebx*4 + 0x893188]
// 004c149d  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 004c14a1  0fb6eb               movzx ebp, bl
// 004c14a4  333cad88298900       xor edi, dword ptr [ebp*4 + 0x892988]
// 004c14ab  c1eb08               shr ebx, 8
// 004c14ae  897808               mov dword ptr [eax + 8], edi
// 004c14b1  c1ea10               shr edx, 0x10
// 004c14b4  0fb6fb               movzx edi, bl
// 004c14b7  8b3cbd882d8900       mov edi, dword ptr [edi*4 + 0x892d88]
// 004c14be  0fb6d2               movzx edx, dl
// 004c14c1  333c9588318900       xor edi, dword ptr [edx*4 + 0x893188]
// 004c14c8  c1e918               shr ecx, 0x18
// 004c14cb  333c8d88358900       xor edi, dword ptr [ecx*4 + 0x893588]
// 004c14d2  0fb64c241c           movzx ecx, byte ptr [esp + 0x1c]
// 004c14d7  333c8d88298900       xor edi, dword ptr [ecx*4 + 0x892988]
// 004c14de  83ee10               sub esi, 0x10
// 004c14e1  836c242401           sub dword ptr [esp + 0x24], 1
// 004c14e6  89780c               mov dword ptr [eax + 0xc], edi
// 004c14e9  0f85f1feffff         jne 0x4c13e0
// 004c14ef  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 004c14f3  8b7e18               mov edi, dword ptr [esi + 0x18]
// 004c14f6  337808               xor edi, dword ptr [eax + 8]
// 004c14f9  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 004c14fc  3308                 xor ecx, dword ptr [eax]
// 004c14fe  8b5614               mov edx, dword ptr [esi + 0x14]
// 004c1501  897c2418             mov dword ptr [esp + 0x18], edi
// 004c1505  8b7e1c               mov edi, dword ptr [esi + 0x1c]
// 004c1508  33780c               xor edi, dword ptr [eax + 0xc]
// 004c150b  335004               xor edx, dword ptr [eax + 4]
// 004c150e  897c241c             mov dword ptr [esp + 0x1c], edi
// 004c1512  0fb6f9               movzx edi, cl
// 004c1515  0fb69f88398900       movzx ebx, byte ptr [edi + 0x893988]
// 004c151c  8818                 mov byte ptr [eax], bl
// 004c151e  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 004c1522  c1eb08               shr ebx, 8
// 004c1525  0fb6fb               movzx edi, bl
// 004c1528  0fb69f88398900       movzx ebx, byte ptr [edi + 0x893988]
// 004c152f  885801               mov byte ptr [eax + 1], bl
// 004c1532  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 004c1536  c1eb10               shr ebx, 0x10
// 004c1539  0fb6fb               movzx edi, bl
// 004c153c  0fb69f88398900       movzx ebx, byte ptr [edi + 0x893988]
// 004c1543  885802               mov byte ptr [eax + 2], bl
// 004c1546  8bfa                 mov edi, edx
// 004c1548  c1ef18               shr edi, 0x18
// 004c154b  0fb69f88398900       movzx ebx, byte ptr [edi + 0x893988]
// 004c1552  885803               mov byte ptr [eax + 3], bl
// 004c1555  0fb6fa               movzx edi, dl
// 004c1558  0fb69f88398900       movzx ebx, byte ptr [edi + 0x893988]
// 004c155f  885804               mov byte ptr [eax + 4], bl
// 004c1562  8bd9                 mov ebx, ecx
// 004c1564  c1eb08               shr ebx, 8
// 004c1567  0fb6fb               movzx edi, bl
// 004c156a  0fb69f88398900       movzx ebx, byte ptr [edi + 0x893988]
// 004c1571  885805               mov byte ptr [eax + 5], bl
// 004c1574  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 004c1578  c1eb10               shr ebx, 0x10
// 004c157b  0fb6fb               movzx edi, bl
// 004c157e  0fb69f88398900       movzx ebx, byte ptr [edi + 0x893988]
// 004c1585  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 004c1589  885806               mov byte ptr [eax + 6], bl
// 004c158c  c1ef18               shr edi, 0x18
// 004c158f  0fb69f88398900       movzx ebx, byte ptr [edi + 0x893988]
// 004c1596  0fb67c2418           movzx edi, byte ptr [esp + 0x18]
// 004c159b  885807               mov byte ptr [eax + 7], bl
// 004c159e  0fb69f88398900       movzx ebx, byte ptr [edi + 0x893988]
// 004c15a5  885808               mov byte ptr [eax + 8], bl
// 004c15a8  8bda                 mov ebx, edx
// 004c15aa  c1eb08               shr ebx, 8
// 004c15ad  0fb6fb               movzx edi, bl
// 004c15b0  0fb69f88398900       movzx ebx, byte ptr [edi + 0x893988]
// 004c15b7  885809               mov byte ptr [eax + 9], bl
// 004c15ba  8bd9                 mov ebx, ecx
// 004c15bc  c1eb10               shr ebx, 0x10
// 004c15bf  0fb6fb               movzx edi, bl
// 004c15c2  0fb69f88398900       movzx ebx, byte ptr [edi + 0x893988]
// 004c15c9  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 004c15cd  88580a               mov byte ptr [eax + 0xa], bl
// 004c15d0  c1ef18               shr edi, 0x18
// 004c15d3  0fb69f88398900       movzx ebx, byte ptr [edi + 0x893988]
// 004c15da  0fb67c241c           movzx edi, byte ptr [esp + 0x1c]
// 004c15df  88580b               mov byte ptr [eax + 0xb], bl
// 004c15e2  0fb69f88398900       movzx ebx, byte ptr [edi + 0x893988]
// 004c15e9  88580c               mov byte ptr [eax + 0xc], bl
// 004c15ec  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 004c15f0  c1eb08               shr ebx, 8
// 004c15f3  c1ea10               shr edx, 0x10
// 004c15f6  0fb6fb               movzx edi, bl
// 004c15f9  0fb69f88398900       movzx ebx, byte ptr [edi + 0x893988]
// 004c1600  0fb6d2               movzx edx, dl
// 004c1603  88580d               mov byte ptr [eax + 0xd], bl
// 004c1606  8a9288398900         mov dl, byte ptr [edx + 0x893988]
// 004c160c  88500e               mov byte ptr [eax + 0xe], dl
// 004c160f  c1e918               shr ecx, 0x18
// 004c1612  8a8988398900         mov cl, byte ptr [ecx + 0x893988]
// 004c1618  88480f               mov byte ptr [eax + 0xf], cl
// 004c161b  8b16                 mov edx, dword ptr [esi]
// 004c161d  3110                 xor dword ptr [eax], edx
// 004c161f  8b4e04               mov ecx, dword ptr [esi + 4]
// 004c1622  314804               xor dword ptr [eax + 4], ecx
// 004c1625  8b5608               mov edx, dword ptr [esi + 8]
// 004c1628  315008               xor dword ptr [eax + 8], edx
// 004c162b  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 004c162e  31480c               xor dword ptr [eax + 0xc], ecx
// 004c1631  5f                   pop edi
// 004c1632  5e                   pop esi
// 004c1633  5d                   pop ebp
// 004c1634  33c0                 xor eax, eax
// 004c1636  5b                   pop ebx
// 004c1637  83c410               add esp, 0x10
// 004c163a  c3                   ret 
// library rbxgs-raknet/rijndael.cpp (function ?rijndaelDecrypt@@YAHQAE0QAY133E@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet rijndael.cpp
