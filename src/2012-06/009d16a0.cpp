// roc 2012-06 009d16a0  unit: CXTPControls  size: 459 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009d16a0
//
// 009d16a0  83ec10               sub esp, 0x10
// 009d16a3  8b442424             mov eax, dword ptr [esp + 0x24]
// 009d16a7  8b00                 mov eax, dword ptr [eax]
// 009d16a9  53                   push ebx
// 009d16aa  55                   push ebp
// 009d16ab  56                   push esi
// 009d16ac  57                   push edi
// 009d16ad  8be9                 mov ebp, ecx
// 009d16af  33db                 xor ebx, ebx
// 009d16b1  53                   push ebx
// 009d16b2  8d4c241c             lea ecx, [esp + 0x1c]
// 009d16b6  83e010               and eax, 0x10
// 009d16b9  51                   push ecx
// 009d16ba  8b4d20               mov ecx, dword ptr [ebp + 0x20]
// 009d16bd  89442418             mov dword ptr [esp + 0x18], eax
// 009d16c1  e86afdfcff           call 0x9a1430
// 009d16c6  8b552c               mov edx, dword ptr [ebp + 0x2c]
// 009d16c9  33f6                 xor esi, esi
// 009d16cb  3bd3                 cmp edx, ebx
// 009d16cd  0f8e32010000         jle 0x9d1805
// 009d16d3  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 009d16d7  83c730               add edi, 0x30
// 009d16da  8d9b00000000         lea ebx, [ebx]
// 009d16e0  395ff8               cmp dword ptr [edi - 8], ebx
// 009d16e3  0f840d010000         je 0x9d17f6
// 009d16e9  3bf3                 cmp esi, ebx
// 009d16eb  7c15                 jl 0x9d1702
// 009d16ed  3bf2                 cmp esi, edx
// 009d16ef  7d11                 jge 0x9d1702
// 009d16f1  3b752c               cmp esi, dword ptr [ebp + 0x2c]
// 009d16f4  0f8d31010000         jge 0x9d182b
// 009d16fa  8b4528               mov eax, dword ptr [ebp + 0x28]
// 009d16fd  8b04b0               mov eax, dword ptr [eax + esi*4]
// 009d1700  eb02                 jmp 0x9d1704
// 009d1702  33c0                 xor eax, eax
// 009d1704  8b8890000000         mov ecx, dword ptr [eax + 0x90]
// 009d170a  3bcb                 cmp ecx, ebx
// 009d170c  7404                 je 0x9d1712
// 009d170e  8bc1                 mov eax, ecx
// 009d1710  eb2a                 jmp 0x9d173c
// 009d1712  8b8888000000         mov ecx, dword ptr [eax + 0x88]
// 009d1718  3bcb                 cmp ecx, ebx
// 009d171a  7e04                 jle 0x9d1720
// 009d171c  8bc1                 mov eax, ecx
// 009d171e  eb1c                 jmp 0x9d173c
// 009d1720  8b885c010000         mov ecx, dword ptr [eax + 0x15c]
// 009d1726  3bcb                 cmp ecx, ebx
// 009d1728  740c                 je 0x9d1736
// 009d172a  8b412c               mov eax, dword ptr [ecx + 0x2c]
// 009d172d  3bc3                 cmp eax, ebx
// 009d172f  7f13                 jg 0x9d1744
// 009d1731  8b4128               mov eax, dword ptr [ecx + 0x28]
// 009d1734  eb06                 jmp 0x9d173c
// 009d1736  8b8084000000         mov eax, dword ptr [eax + 0x84]
// 009d173c  3bc3                 cmp eax, ebx
// 009d173e  0f8e88000000         jle 0x9d17cc
// 009d1744  3bf3                 cmp esi, ebx
// 009d1746  7c15                 jl 0x9d175d
// 009d1748  3bf2                 cmp esi, edx
// 009d174a  7d11                 jge 0x9d175d
// 009d174c  3b752c               cmp esi, dword ptr [ebp + 0x2c]
// 009d174f  0f8dd6000000         jge 0x9d182b
// 009d1755  8b4d28               mov ecx, dword ptr [ebp + 0x28]
// 009d1758  8b04b1               mov eax, dword ptr [ecx + esi*4]
// 009d175b  eb02                 jmp 0x9d175f
// 009d175d  33c0                 xor eax, eax
// 009d175f  8b8890000000         mov ecx, dword ptr [eax + 0x90]
// 009d1765  3bcb                 cmp ecx, ebx
// 009d1767  7404                 je 0x9d176d
// 009d1769  8bc1                 mov eax, ecx
// 009d176b  eb2a                 jmp 0x9d1797
// 009d176d  8b8888000000         mov ecx, dword ptr [eax + 0x88]
// 009d1773  3bcb                 cmp ecx, ebx
// 009d1775  7e04                 jle 0x9d177b
// 009d1777  8bc1                 mov eax, ecx
// 009d1779  eb1c                 jmp 0x9d1797
// 009d177b  8b885c010000         mov ecx, dword ptr [eax + 0x15c]
// 009d1781  3bcb                 cmp ecx, ebx
// 009d1783  740c                 je 0x9d1791
// 009d1785  8b412c               mov eax, dword ptr [ecx + 0x2c]
// 009d1788  3bc3                 cmp eax, ebx
// 009d178a  7f0b                 jg 0x9d1797
// 009d178c  8b4128               mov eax, dword ptr [ecx + 0x28]
// 009d178f  eb06                 jmp 0x9d1797
// 009d1791  8b8084000000         mov eax, dword ptr [eax + 0x84]
// 009d1797  3bf3                 cmp esi, ebx
// 009d1799  7c15                 jl 0x9d17b0
// 009d179b  3bf2                 cmp esi, edx
// 009d179d  7d11                 jge 0x9d17b0
// 009d179f  3b752c               cmp esi, dword ptr [ebp + 0x2c]
// 009d17a2  0f8d83000000         jge 0x9d182b
// 009d17a8  8b5528               mov edx, dword ptr [ebp + 0x28]
// 009d17ab  8b0cb2               mov ecx, dword ptr [edx + esi*4]
// 009d17ae  eb02                 jmp 0x9d17b2
// 009d17b0  33c9                 xor ecx, ecx
// 009d17b2  8b542418             mov edx, dword ptr [esp + 0x18]
// 009d17b6  52                   push edx
// 009d17b7  50                   push eax
// 009d17b8  e80332fbff           call 0x9849c0
// 009d17bd  8bc8                 mov ecx, eax
// 009d17bf  e84ca6fcff           call 0x99be10
// 009d17c4  f7d8                 neg eax
// 009d17c6  1bc0                 sbb eax, eax
// 009d17c8  f7d8                 neg eax
// 009d17ca  eb02                 jmp 0x9d17ce
// 009d17cc  33c0                 xor eax, eax
// 009d17ce  3bf3                 cmp esi, ebx
// 009d17d0  891f                 mov dword ptr [edi], ebx
// 009d17d2  895ffc               mov dword ptr [edi - 4], ebx
// 009d17d5  7c0d                 jl 0x9d17e4
// 009d17d7  3b752c               cmp esi, dword ptr [ebp + 0x2c]
// 009d17da  7d08                 jge 0x9d17e4
// 009d17dc  8b4d28               mov ecx, dword ptr [ebp + 0x28]
// 009d17df  8b0cb1               mov ecx, dword ptr [ecx + esi*4]
// 009d17e2  eb02                 jmp 0x9d17e6
// 009d17e4  33c9                 xor ecx, ecx
// 009d17e6  33d2                 xor edx, edx
// 009d17e8  3bc3                 cmp eax, ebx
// 009d17ea  0f95c2               setne dl
// 009d17ed  83c203               add edx, 3
// 009d17f0  899148010000         mov dword ptr [ecx + 0x148], edx
// 009d17f6  8b552c               mov edx, dword ptr [ebp + 0x2c]
// 009d17f9  46                   inc esi
// 009d17fa  83c740               add edi, 0x40
// 009d17fd  3bf2                 cmp esi, edx
// 009d17ff  0f8cdbfeffff         jl 0x9d16e0
// 009d1805  8b442434             mov eax, dword ptr [esp + 0x34]
// 009d1809  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 009d180d  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 009d1811  8b742424             mov esi, dword ptr [esp + 0x24]
// 009d1815  50                   push eax
// 009d1816  51                   push ecx
// 009d1817  57                   push edi
// 009d1818  56                   push esi
// 009d1819  8bcd                 mov ecx, ebp
// 009d181b  e840eaffff           call 0x9d0260
// 009d1820  395c2410             cmp dword ptr [esp + 0x10], ebx
// 009d1824  740a                 je 0x9d1830
// 009d1826  8b4e04               mov ecx, dword ptr [esi + 4]
// 009d1829  eb07                 jmp 0x9d1832
// 009d182b  e8900bfbff           call 0x9823c0
// 009d1830  8b0e                 mov ecx, dword ptr [esi]
// 009d1832  8b442430             mov eax, dword ptr [esp + 0x30]
// 009d1836  3bc8                 cmp ecx, eax
// 009d1838  7e25                 jle 0x9d185f
// 009d183a  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 009d183e  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 009d1842  53                   push ebx
// 009d1843  50                   push eax
// 009d1844  52                   push edx
// 009d1845  57                   push edi
// 009d1846  8d442420             lea eax, [esp + 0x20]
// 009d184a  50                   push eax
// 009d184b  8bcd                 mov ecx, ebp
// 009d184d  e87ef9ffff           call 0x9d11d0
// 009d1852  8b08                 mov ecx, dword ptr [eax]
// 009d1854  890e                 mov dword ptr [esi], ecx
// 009d1856  8b5004               mov edx, dword ptr [eax + 4]
// 009d1859  895604               mov dword ptr [esi + 4], edx
// 009d185c  830b01               or dword ptr [ebx], 1
// 009d185f  5f                   pop edi
// 009d1860  8bc6                 mov eax, esi
// 009d1862  5e                   pop esi
// 009d1863  5d                   pop ebp
// 009d1864  5b                   pop ebx
// 009d1865  83c410               add esp, 0x10
// 009d1868  c21400               ret 0x14
// library xtp-11.2.2/Source\CommandBars\XTPControls.cpp (function ?_WrapSmartLayoutToolBar@CXTPControls@@IAE?AVCSize@@PAVCDC@@PAUXTPBUTTONINFO@1@HAAK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControls.cpp
