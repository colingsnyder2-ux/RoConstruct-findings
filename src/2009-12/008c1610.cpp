// roc 2009-12 008c1610  unit: CXTPImageEditorDlg::CDlgToolBar  size: 877 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008c1610
//
// 008c1610  6aff                 push -1
// 008c1612  68a33e9600           push 0x963ea3
// 008c1617  64a100000000         mov eax, dword ptr fs:[0]
// 008c161d  50                   push eax
// 008c161e  81ecb8000000         sub esp, 0xb8
// 008c1624  a10052b600           mov eax, dword ptr [0xb65200]
// 008c1629  33c4                 xor eax, esp
// 008c162b  898424b4000000       mov dword ptr [esp + 0xb4], eax
// 008c1632  53                   push ebx
// 008c1633  55                   push ebp
// 008c1634  56                   push esi
// 008c1635  57                   push edi
// 008c1636  a10052b600           mov eax, dword ptr [0xb65200]
// 008c163b  33c4                 xor eax, esp
// 008c163d  50                   push eax
// 008c163e  8d8424cc000000       lea eax, [esp + 0xcc]
// 008c1645  64a300000000         mov dword ptr fs:[0], eax
// 008c164b  8bf1                 mov esi, ecx
// 008c164d  56                   push esi
// 008c164e  8d4c2478             lea ecx, [esp + 0x78]
// 008c1652  89742428             mov dword ptr [esp + 0x28], esi
// 008c1656  e8952bf3ff           call 0x7f41f0
// 008c165b  33ed                 xor ebp, ebp
// 008c165d  56                   push esi
// 008c165e  8d4c242c             lea ecx, [esp + 0x2c]
// 008c1662  89ac24d8000000       mov dword ptr [esp + 0xd8], ebp
// 008c1669  e8629cf8ff           call 0x84b2d0
// 008c166e  8b4c2478             mov ecx, dword ptr [esp + 0x78]
// 008c1672  8d442428             lea eax, [esp + 0x28]
// 008c1676  50                   push eax
// 008c1677  51                   push ecx
// 008c1678  8d4c244c             lea ecx, [esp + 0x4c]
// 008c167c  e8af9cf8ff           call 0x84b330
// 008c1681  68ffffff00           push 0xffffff
// 008c1686  8d54242c             lea edx, [esp + 0x2c]
// 008c168a  52                   push edx
// 008c168b  8d4c244c             lea ecx, [esp + 0x4c]
// 008c168f  c68424dc00000001     mov byte ptr [esp + 0xdc], 1
// 008c1697  e8622ff3ff           call 0x7f45fe
// 008c169c  8b767c               mov esi, dword ptr [esi + 0x7c]
// 008c169f  3bf5                 cmp esi, ebp
// 008c16a1  740d                 je 0x8c16b0
// 008c16a3  c744243801000000     mov dword ptr [esp + 0x38], 1
// 008c16ab  396e08               cmp dword ptr [esi + 8], ebp
// 008c16ae  7504                 jne 0x8c16b4
// 008c16b0  896c2438             mov dword ptr [esp + 0x38], ebp
// 008c16b4  896c2420             mov dword ptr [esp + 0x20], ebp
// 008c16b8  896c2414             mov dword ptr [esp + 0x14], ebp
// 008c16bc  3bf5                 cmp esi, ebp
// 008c16be  0f846c020000         je 0x8c1930
// 008c16c4  8b7604               mov esi, dword ptr [esi + 4]
// 008c16c7  8d442440             lea eax, [esp + 0x40]
// 008c16cb  50                   push eax
// 008c16cc  8d4c2424             lea ecx, [esp + 0x24]
// 008c16d0  51                   push ecx
// 008c16d1  8d54241c             lea edx, [esp + 0x1c]
// 008c16d5  52                   push edx
// 008c16d6  8d442450             lea eax, [esp + 0x50]
// 008c16da  56                   push esi
// 008c16db  50                   push eax
// 008c16dc  e8ef91f4ff           call 0x80a8d0
// 008c16e1  83c414               add esp, 0x14
// 008c16e4  85c0                 test eax, eax
// 008c16e6  0f8444020000         je 0x8c1930
// 008c16ec  396c2414             cmp dword ptr [esp + 0x14], ebp
// 008c16f0  0f843a020000         je 0x8c1930
// 008c16f6  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 008c16fa  3bdd                 cmp ebx, ebp
// 008c16fc  0f842e020000         je 0x8c1930
// 008c1702  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 008c1706  8bd7                 mov edx, edi
// 008c1708  2b542428             sub edx, dword ptr [esp + 0x28]
// 008c170c  33c9                 xor ecx, ecx
// 008c170e  894c241c             mov dword ptr [esp + 0x1c], ecx
// 008c1712  85d2                 test edx, edx
// 008c1714  0f8ef3010000         jle 0x8c190d
// 008c171a  8b742434             mov esi, dword ptr [esp + 0x34]
// 008c171e  2b74242c             sub esi, dword ptr [esp + 0x2c]
// 008c1722  89742418             mov dword ptr [esp + 0x18], esi
// 008c1726  eb08                 jmp 0x8c1730
// 008c1728  8da42400000000       lea esp, [esp]
// 008c172f  90                   nop 
// 008c1730  3bf5                 cmp esi, ebp
// 008c1732  896c243c             mov dword ptr [esp + 0x3c], ebp
// 008c1736  0f8ebe010000         jle 0x8c18fa
// 008c173c  8d642400             lea esp, [esp]
// 008c1740  8b442424             mov eax, dword ptr [esp + 0x24]
// 008c1744  8b4058               mov eax, dword ptr [eax + 0x58]
// 008c1747  0fafc5               imul eax, ebp
// 008c174a  99                   cdq 
// 008c174b  f7fe                 idiv esi
// 008c174d  8b542424             mov edx, dword ptr [esp + 0x24]
// 008c1751  2b7c2428             sub edi, dword ptr [esp + 0x28]
// 008c1755  8bf0                 mov esi, eax
// 008c1757  8b4254               mov eax, dword ptr [edx + 0x54]
// 008c175a  0fafc1               imul eax, ecx
// 008c175d  99                   cdq 
// 008c175e  f7ff                 idiv edi
// 008c1760  837c243800           cmp dword ptr [esp + 0x38], 0
// 008c1765  0f84d5000000         je 0x8c1840
// 008c176b  8b542414             mov edx, dword ptr [esp + 0x14]
// 008c176f  8b5204               mov edx, dword ptr [edx + 4]
// 008c1772  0fafd6               imul edx, esi
// 008c1775  03d0                 add edx, eax
// 008c1777  8b1c93               mov ebx, dword ptr [ebx + edx*4]
// 008c177a  8d4503               lea eax, [ebp + 3]
// 008c177d  99                   cdq 
// 008c177e  83e203               and edx, 3
// 008c1781  03c2                 add eax, edx
// 008c1783  8bf0                 mov esi, eax
// 008c1785  8d4103               lea eax, [ecx + 3]
// 008c1788  99                   cdq 
// 008c1789  83e203               and edx, 3
// 008c178c  03c2                 add eax, edx
// 008c178e  c1fe02               sar esi, 2
// 008c1791  c1f802               sar eax, 2
// 008c1794  03f0                 add esi, eax
// 008c1796  8bfb                 mov edi, ebx
// 008c1798  8bce                 mov ecx, esi
// 008c179a  c1ef18               shr edi, 0x18
// 008c179d  81e101000080         and ecx, 0x80000001
// 008c17a3  7905                 jns 0x8c17aa
// 008c17a5  49                   dec ecx
// 008c17a6  83c9fe               or ecx, 0xfffffffe
// 008c17a9  41                   inc ecx
// 008c17aa  f7d9                 neg ecx
// 008c17ac  1bc9                 sbb ecx, ecx
// 008c17ae  8bc3                 mov eax, ebx
// 008c17b0  c1e808               shr eax, 8
// 008c17b3  0fb6d0               movzx edx, al
// 008c17b6  83e1ec               and ecx, 0xffffffec
// 008c17b9  81c1ff000000         add ecx, 0xff
// 008c17bf  8bf1                 mov esi, ecx
// 008c17c1  2bf2                 sub esi, edx
// 008c17c3  0faff7               imul esi, edi
// 008c17c6  b881808080           mov eax, 0x80808081
// 008c17cb  f7ee                 imul esi
// 008c17cd  03d6                 add edx, esi
// 008c17cf  c1fa07               sar edx, 7
// 008c17d2  8bc2                 mov eax, edx
// 008c17d4  c1e81f               shr eax, 0x1f
// 008c17d7  03c2                 add eax, edx
// 008c17d9  8ad1                 mov dl, cl
// 008c17db  2ad0                 sub dl, al
// 008c17dd  0fb6c3               movzx eax, bl
// 008c17e0  8be9                 mov ebp, ecx
// 008c17e2  2be8                 sub ebp, eax
// 008c17e4  0fafef               imul ebp, edi
// 008c17e7  0fb6f2               movzx esi, dl
// 008c17ea  b881808080           mov eax, 0x80808081
// 008c17ef  f7ed                 imul ebp
// 008c17f1  03d5                 add edx, ebp
// 008c17f3  c1fa07               sar edx, 7
// 008c17f6  8bc2                 mov eax, edx
// 008c17f8  c1e81f               shr eax, 0x1f
// 008c17fb  03c2                 add eax, edx
// 008c17fd  8ad1                 mov dl, cl
// 008c17ff  2ad0                 sub dl, al
// 008c1801  c1eb10               shr ebx, 0x10
// 008c1804  0fb6c2               movzx eax, dl
// 008c1807  0fb6d3               movzx edx, bl
// 008c180a  8bd9                 mov ebx, ecx
// 008c180c  2bda                 sub ebx, edx
// 008c180e  0fafdf               imul ebx, edi
// 008c1811  c1e008               shl eax, 8
// 008c1814  0bf0                 or esi, eax
// 008c1816  8b6c243c             mov ebp, dword ptr [esp + 0x3c]
// 008c181a  b881808080           mov eax, 0x80808081
// 008c181f  f7eb                 imul ebx
// 008c1821  03d3                 add edx, ebx
// 008c1823  c1fa07               sar edx, 7
// 008c1826  8bc2                 mov eax, edx
// 008c1828  c1e81f               shr eax, 0x1f
// 008c182b  03c2                 add eax, edx
// 008c182d  2ac8                 sub cl, al
// 008c182f  0fb6c9               movzx ecx, cl
// 008c1832  c1e608               shl esi, 8
// 008c1835  0bf1                 or esi, ecx
// 008c1837  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008c183b  e97c000000           jmp 0x8c18bc
// 008c1840  8b542424             mov edx, dword ptr [esp + 0x24]
// 008c1844  837a7c00             cmp dword ptr [edx + 0x7c], 0
// 008c1848  7507                 jne 0x8c1851
// 008c184a  b8fffeff00           mov eax, 0xfffeff
// 008c184f  eb0f                 jmp 0x8c1860
// 008c1851  8b542414             mov edx, dword ptr [esp + 0x14]
// 008c1855  8b5204               mov edx, dword ptr [edx + 4]
// 008c1858  0fafd6               imul edx, esi
// 008c185b  03d0                 add edx, eax
// 008c185d  8b0493               mov eax, dword ptr [ebx + edx*4]
// 008c1860  8bd0                 mov edx, eax
// 008c1862  c1ea08               shr edx, 8
// 008c1865  0fb6f2               movzx esi, dl
// 008c1868  0fb6d0               movzx edx, al
// 008c186b  c1e208               shl edx, 8
// 008c186e  c1e810               shr eax, 0x10
// 008c1871  0bf2                 or esi, edx
// 008c1873  0fb6c0               movzx eax, al
// 008c1876  c1e608               shl esi, 8
// 008c1879  0bf0                 or esi, eax
// 008c187b  81fefffeff00         cmp esi, 0xfffeff
// 008c1881  7539                 jne 0x8c18bc
// 008c1883  8d4503               lea eax, [ebp + 3]
// 008c1886  99                   cdq 
// 008c1887  83e203               and edx, 3
// 008c188a  03c2                 add eax, edx
// 008c188c  8bf0                 mov esi, eax
// 008c188e  8d4103               lea eax, [ecx + 3]
// 008c1891  99                   cdq 
// 008c1892  83e203               and edx, 3
// 008c1895  03c2                 add eax, edx
// 008c1897  c1fe02               sar esi, 2
// 008c189a  c1f802               sar eax, 2
// 008c189d  03f0                 add esi, eax
// 008c189f  81e601000080         and esi, 0x80000001
// 008c18a5  7905                 jns 0x8c18ac
// 008c18a7  4e                   dec esi
// 008c18a8  83cefe               or esi, 0xfffffffe
// 008c18ab  46                   inc esi
// 008c18ac  f7de                 neg esi
// 008c18ae  1bf6                 sbb esi, esi
// 008c18b0  81e6ecebebff         and esi, 0xffebebec
// 008c18b6  81c6ffffff00         add esi, 0xffffff
// 008c18bc  8b442418             mov eax, dword ptr [esp + 0x18]
// 008c18c0  2bc5                 sub eax, ebp
// 008c18c2  56                   push esi
// 008c18c3  48                   dec eax
// 008c18c4  50                   push eax
// 008c18c5  51                   push ecx
// 008c18c6  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 008c18ca  51                   push ecx
// 008c18cb  ff1514b19800         call dword ptr [0x98b114]
// 008c18d1  8b442434             mov eax, dword ptr [esp + 0x34]
// 008c18d5  2b44242c             sub eax, dword ptr [esp + 0x2c]
// 008c18d9  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 008c18dd  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 008c18e1  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008c18e5  45                   inc ebp
// 008c18e6  3be8                 cmp ebp, eax
// 008c18e8  896c243c             mov dword ptr [esp + 0x3c], ebp
// 008c18ec  89442418             mov dword ptr [esp + 0x18], eax
// 008c18f0  8bf0                 mov esi, eax
// 008c18f2  0f8c48feffff         jl 0x8c1740
// 008c18f8  33ed                 xor ebp, ebp
// 008c18fa  8bd7                 mov edx, edi
// 008c18fc  2b542428             sub edx, dword ptr [esp + 0x28]
// 008c1900  41                   inc ecx
// 008c1901  3bca                 cmp ecx, edx
// 008c1903  894c241c             mov dword ptr [esp + 0x1c], ecx
// 008c1907  0f8c23feffff         jl 0x8c1730
// 008c190d  8b3540b79800         mov esi, dword ptr [0x98b740]
// 008c1913  53                   push ebx
// 008c1914  ffd6                 call esi
// 008c1916  8b442418             mov eax, dword ptr [esp + 0x18]
// 008c191a  50                   push eax
// 008c191b  ffd6                 call esi
// 008c191d  83c408               add esp, 8
// 008c1920  55                   push ebp
// 008c1921  55                   push ebp
// 008c1922  8d4c2430             lea ecx, [esp + 0x30]
// 008c1926  51                   push ecx
// 008c1927  8d4c2450             lea ecx, [esp + 0x50]
// 008c192b  e8c82cf3ff           call 0x7f45f8
// 008c1930  8d4c2444             lea ecx, [esp + 0x44]
// 008c1934  c68424d400000000     mov byte ptr [esp + 0xd4], 0
// 008c193c  e8ff9bf8ff           call 0x84b540
// 008c1941  8d4c2474             lea ecx, [esp + 0x74]
// 008c1945  c78424d4000000ffffffff mov dword ptr [esp + 0xd4], 0xffffffff
// 008c1950  e89528f3ff           call 0x7f41ea
// 008c1955  8b8c24cc000000       mov ecx, dword ptr [esp + 0xcc]
// 008c195c  64890d00000000       mov dword ptr fs:[0], ecx
// 008c1963  59                   pop ecx
// 008c1964  5f                   pop edi
// 008c1965  5e                   pop esi
// 008c1966  5d                   pop ebp
// 008c1967  5b                   pop ebx
// 008c1968  8b8c24b4000000       mov ecx, dword ptr [esp + 0xb4]
// 008c196f  33cc                 xor ecx, esp
// 008c1971  e8243af3ff           call 0x7f539a
// 008c1976  81c4c4000000         add esp, 0xc4
// 008c197c  c3                   ret 
// copied from an identical function in another client (function ?OnPaint@CXTPImageEditorPicture@@IAEXXZ)

// roc-cl: 21022
// roc-lang: cpp
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-vc8-shared-mfc Source/CommandBars/XTPImageEditor.cpp