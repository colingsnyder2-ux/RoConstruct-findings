// roc 2007-03 004c1640  unit: seg_004c0000  size: 286 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004c1640
//
// 004c1640  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004c1644  83ec20               sub esp, 0x20
// 004c1647  55                   push ebp
// 004c1648  56                   push esi
// 004c1649  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 004c164d  85f6                 test esi, esi
// 004c164f  8d2ccd00000000       lea ebp, [ecx*8]
// 004c1656  750b                 jne 0x4c1663
// 004c1658  5e                   pop esi
// 004c1659  b8fdffffff           mov eax, 0xfffffffd
// 004c165e  5d                   pop ebp
// 004c165f  83c420               add esp, 0x20
// 004c1662  c3                   ret 
// 004c1663  53                   push ebx
// 004c1664  8a5c2434             mov bl, byte ptr [esp + 0x34]
// 004c1668  84db                 test bl, bl
// 004c166a  740f                 je 0x4c167b
// 004c166c  80fb01               cmp bl, 1
// 004c166f  740a                 je 0x4c167b
// 004c1671  5b                   pop ebx
// 004c1672  5e                   pop esi
// 004c1673  83c8ff               or eax, 0xffffffff
// 004c1676  5d                   pop ebp
// 004c1677  83c420               add esp, 0x20
// 004c167a  c3                   ret 
// 004c167b  81fd80000000         cmp ebp, 0x80
// 004c1681  881e                 mov byte ptr [esi], bl
// 004c1683  7414                 je 0x4c1699
// 004c1685  81fdc0000000         cmp ebp, 0xc0
// 004c168b  740c                 je 0x4c1699
// 004c168d  81fd00010000         cmp ebp, 0x100
// 004c1693  0f85b9000000         jne 0x4c1752
// 004c1699  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 004c169d  85c0                 test eax, eax
// 004c169f  896e04               mov dword ptr [esi + 4], ebp
// 004c16a2  0f84aa000000         je 0x4c1752
// 004c16a8  57                   push edi
// 004c16a9  51                   push ecx
// 004c16aa  50                   push eax
// 004c16ab  8d7e08               lea edi, [esi + 8]
// 004c16ae  57                   push edi
// 004c16af  e834db1500           call 0x61f1e8
// 004c16b4  8bc5                 mov eax, ebp
// 004c16b6  99                   cdq 
// 004c16b7  83e21f               and edx, 0x1f
// 004c16ba  03c2                 add eax, edx
// 004c16bc  c1f805               sar eax, 5
// 004c16bf  83c006               add eax, 6
// 004c16c2  a3949e8b00           mov dword ptr [0x8b9e94], eax
// 004c16c7  8b6e04               mov ebp, dword ptr [esi + 4]
// 004c16ca  8bc5                 mov eax, ebp
// 004c16cc  99                   cdq 
// 004c16cd  83e207               and edx, 7
// 004c16d0  03c2                 add eax, edx
// 004c16d2  c1f803               sar eax, 3
// 004c16d5  83c40c               add esp, 0xc
// 004c16d8  33c9                 xor ecx, ecx
// 004c16da  85c0                 test eax, eax
// 004c16dc  7e43                 jle 0x4c1721
// 004c16de  8bc5                 mov eax, ebp
// 004c16e0  99                   cdq 
// 004c16e1  83e207               and edx, 7
// 004c16e4  03c2                 add eax, edx
// 004c16e6  c1f803               sar eax, 3
// 004c16e9  8944243c             mov dword ptr [esp + 0x3c], eax
// 004c16ed  8d4900               lea ecx, [ecx]
// 004c16f0  8bc1                 mov eax, ecx
// 004c16f2  99                   cdq 
// 004c16f3  83e203               and edx, 3
// 004c16f6  03c2                 add eax, edx
// 004c16f8  8bd1                 mov edx, ecx
// 004c16fa  c1f802               sar eax, 2
// 004c16fd  81e203000080         and edx, 0x80000003
// 004c1703  7905                 jns 0x4c170a
// 004c1705  4a                   dec edx
// 004c1706  83cafc               or edx, 0xfffffffc
// 004c1709  42                   inc edx
// 004c170a  8a1c0f               mov bl, byte ptr [edi + ecx]
// 004c170d  83c101               add ecx, 1
// 004c1710  3b4c243c             cmp ecx, dword ptr [esp + 0x3c]
// 004c1714  8d541410             lea edx, [esp + edx + 0x10]
// 004c1718  881c82               mov byte ptr [edx + eax*4], bl
// 004c171b  7cd3                 jl 0x4c16f0
// 004c171d  8a5c2438             mov bl, byte ptr [esp + 0x38]
// 004c1721  8d7e30               lea edi, [esi + 0x30]
// 004c1724  57                   push edi
// 004c1725  8d442414             lea eax, [esp + 0x14]
// 004c1729  55                   push ebp
// 004c172a  50                   push eax
// 004c172b  e880f5ffff           call 0x4c0cb0
// 004c1730  83c40c               add esp, 0xc
// 004c1733  80fb01               cmp bl, 1
// 004c1736  750d                 jne 0x4c1745
// 004c1738  8b4e04               mov ecx, dword ptr [esi + 4]
// 004c173b  57                   push edi
// 004c173c  51                   push ecx
// 004c173d  e83ef7ffff           call 0x4c0e80
// 004c1742  83c408               add esp, 8
// 004c1745  5f                   pop edi
// 004c1746  5b                   pop ebx
// 004c1747  5e                   pop esi
// 004c1748  b801000000           mov eax, 1
// 004c174d  5d                   pop ebp
// 004c174e  83c420               add esp, 0x20
// 004c1751  c3                   ret 
// 004c1752  5b                   pop ebx
// 004c1753  5e                   pop esi
// 004c1754  b8feffffff           mov eax, 0xfffffffe
// 004c1759  5d                   pop ebp
// 004c175a  83c420               add esp, 0x20
// 004c175d  c3                   ret 
// library rbxgs-raknet/rijndael.cpp (function ?makeKey@@YAHPAUkeyInstance@@EHPAD@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet rijndael.cpp
