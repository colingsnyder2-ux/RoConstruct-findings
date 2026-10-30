// from server: 100% by auto
// roc 2009-06 005a17f0  unit: seg_005a0000  size: 524 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005a17f0
//
// 005a17f0  83ec2c               sub esp, 0x2c
// 005a17f3  8b442430             mov eax, dword ptr [esp + 0x30]
// 005a17f7  53                   push ebx
// 005a17f8  8b98e0000000         mov ebx, dword ptr [eax + 0xe0]
// 005a17fe  56                   push esi
// 005a17ff  8b7044               mov esi, dword ptr [eax + 0x44]
// 005a1802  57                   push edi
// 005a1803  8bb848010000         mov edi, dword ptr [eax + 0x148]
// 005a1809  4b                   dec ebx
// 005a180a  83783c00             cmp dword ptr [eax + 0x3c], 0
// 005a180e  897c2428             mov dword ptr [esp + 0x28], edi
// 005a1812  895c2424             mov dword ptr [esp + 0x24], ebx
// 005a1816  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 005a181e  89742410             mov dword ptr [esp + 0x10], esi
// 005a1822  0f8ec5010000         jle 0x5a19ed
// 005a1828  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 005a182c  8d5740               lea edx, [edi + 0x40]
// 005a182f  55                   push ebp
// 005a1830  894c2424             mov dword ptr [esp + 0x24], ecx
// 005a1834  89542420             mov dword ptr [esp + 0x20], edx
// 005a1838  eb0e                 jmp 0x5a1848
// 005a183a  8d9b00000000         lea ebx, [ebx]
// 005a1840  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 005a1844  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 005a1848  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 005a184b  8b6f08               mov ebp, dword ptr [edi + 8]
// 005a184e  8b5004               mov edx, dword ptr [eax + 4]
// 005a1851  0fafe9               imul ebp, ecx
// 005a1854  8b5220               mov edx, dword ptr [edx + 0x20]
// 005a1857  6a01                 push 1
// 005a1859  51                   push ecx
// 005a185a  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005a185e  8b09                 mov ecx, dword ptr [ecx]
// 005a1860  55                   push ebp
// 005a1861  51                   push ecx
// 005a1862  50                   push eax
// 005a1863  ffd2                 call edx
// 005a1865  83c414               add esp, 0x14
// 005a1868  8bc8                 mov ecx, eax
// 005a186a  894c2418             mov dword ptr [esp + 0x18], ecx
// 005a186e  395f08               cmp dword ptr [edi + 8], ebx
// 005a1871  7309                 jae 0x5a187c
// 005a1873  8b460c               mov eax, dword ptr [esi + 0xc]
// 005a1876  89442410             mov dword ptr [esp + 0x10], eax
// 005a187a  eb16                 jmp 0x5a1892
// 005a187c  8b7e0c               mov edi, dword ptr [esi + 0xc]
// 005a187f  8b4620               mov eax, dword ptr [esi + 0x20]
// 005a1882  33d2                 xor edx, edx
// 005a1884  f7f7                 div edi
// 005a1886  89542410             mov dword ptr [esp + 0x10], edx
// 005a188a  85d2                 test edx, edx
// 005a188c  7504                 jne 0x5a1892
// 005a188e  897c2410             mov dword ptr [esp + 0x10], edi
// 005a1892  8b5e1c               mov ebx, dword ptr [esi + 0x1c]
// 005a1895  8b6e08               mov ebp, dword ptr [esi + 8]
// 005a1898  33d2                 xor edx, edx
// 005a189a  8bc3                 mov eax, ebx
// 005a189c  f7f5                 div ebp
// 005a189e  896c241c             mov dword ptr [esp + 0x1c], ebp
// 005a18a2  8bfa                 mov edi, edx
// 005a18a4  85ff                 test edi, edi
// 005a18a6  7e04                 jle 0x5a18ac
// 005a18a8  2bef                 sub ebp, edi
// 005a18aa  8bfd                 mov edi, ebp
// 005a18ac  33ed                 xor ebp, ebp
// 005a18ae  396c2410             cmp dword ptr [esp + 0x10], ebp
// 005a18b2  7e78                 jle 0x5a192c
// 005a18b4  eb0a                 jmp 0x5a18c0
// 005a18b6  8da42400000000       lea esp, [esp]
// 005a18bd  8d4900               lea ecx, [ecx]
// 005a18c0  8b34a9               mov esi, dword ptr [ecx + ebp*4]
// 005a18c3  8b442440             mov eax, dword ptr [esp + 0x40]
// 005a18c7  8b8858010000         mov ecx, dword ptr [eax + 0x158]
// 005a18cd  53                   push ebx
// 005a18ce  6a00                 push 0
// 005a18d0  8d14ed00000000       lea edx, [ebp*8]
// 005a18d7  52                   push edx
// 005a18d8  8b542430             mov edx, dword ptr [esp + 0x30]
// 005a18dc  8b12                 mov edx, dword ptr [edx]
// 005a18de  56                   push esi
// 005a18df  52                   push edx
// 005a18e0  8b542428             mov edx, dword ptr [esp + 0x28]
// 005a18e4  52                   push edx
// 005a18e5  50                   push eax
// 005a18e6  8b4104               mov eax, dword ptr [ecx + 4]
// 005a18e9  ffd0                 call eax
// 005a18eb  83c41c               add esp, 0x1c
// 005a18ee  85ff                 test edi, edi
// 005a18f0  7e2b                 jle 0x5a191d
// 005a18f2  8bcb                 mov ecx, ebx
// 005a18f4  8bd7                 mov edx, edi
// 005a18f6  c1e107               shl ecx, 7
// 005a18f9  c1e207               shl edx, 7
// 005a18fc  03f1                 add esi, ecx
// 005a18fe  52                   push edx
// 005a18ff  56                   push esi
// 005a1900  e8ab85feff           call 0x589eb0
// 005a1905  0fb74e80             movzx ecx, word ptr [esi - 0x80]
// 005a1909  83c408               add esp, 8
// 005a190c  85ff                 test edi, edi
// 005a190e  7e0d                 jle 0x5a191d
// 005a1910  8bc7                 mov eax, edi
// 005a1912  66890e               mov word ptr [esi], cx
// 005a1915  83ee80               sub esi, -0x80
// 005a1918  83e801               sub eax, 1
// 005a191b  75f5                 jne 0x5a1912
// 005a191d  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005a1921  45                   inc ebp
// 005a1922  3b6c2410             cmp ebp, dword ptr [esp + 0x10]
// 005a1926  7c98                 jl 0x5a18c0
// 005a1928  8b742414             mov esi, dword ptr [esp + 0x14]
// 005a192c  8b442428             mov eax, dword ptr [esp + 0x28]
// 005a1930  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 005a1934  394208               cmp dword ptr [edx + 8], eax
// 005a1937  0f8583000000         jne 0x5a19c0
// 005a193d  03df                 add ebx, edi
// 005a193f  33d2                 xor edx, edx
// 005a1941  8bc3                 mov eax, ebx
// 005a1943  f774241c             div dword ptr [esp + 0x1c]
// 005a1947  89442438             mov dword ptr [esp + 0x38], eax
// 005a194b  8b442410             mov eax, dword ptr [esp + 0x10]
// 005a194f  3b460c               cmp eax, dword ptr [esi + 0xc]
// 005a1952  8be8                 mov ebp, eax
// 005a1954  7d6a                 jge 0x5a19c0
// 005a1956  c1e307               shl ebx, 7
// 005a1959  895c2434             mov dword ptr [esp + 0x34], ebx
// 005a195d  eb05                 jmp 0x5a1964
// 005a195f  90                   nop 
// 005a1960  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005a1964  8b442434             mov eax, dword ptr [esp + 0x34]
// 005a1968  8b3ca9               mov edi, dword ptr [ecx + ebp*4]
// 005a196b  8b5ca9fc             mov ebx, dword ptr [ecx + ebp*4 - 4]
// 005a196f  50                   push eax
// 005a1970  57                   push edi
// 005a1971  e83a85feff           call 0x589eb0
// 005a1976  8b442440             mov eax, dword ptr [esp + 0x40]
// 005a197a  83c408               add esp, 8
// 005a197d  85c0                 test eax, eax
// 005a197f  7639                 jbe 0x5a19ba
// 005a1981  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 005a1985  c1e207               shl edx, 7
// 005a1988  89442410             mov dword ptr [esp + 0x10], eax
// 005a198c  8d642400             lea esp, [esp]
// 005a1990  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005a1994  0fb7741a80           movzx esi, word ptr [edx + ebx - 0x80]
// 005a1999  85c9                 test ecx, ecx
// 005a199b  7e0e                 jle 0x5a19ab
// 005a199d  8bc7                 mov eax, edi
// 005a199f  90                   nop 
// 005a19a0  668930               mov word ptr [eax], si
// 005a19a3  83e880               sub eax, -0x80
// 005a19a6  83e901               sub ecx, 1
// 005a19a9  75f5                 jne 0x5a19a0
// 005a19ab  03fa                 add edi, edx
// 005a19ad  03da                 add ebx, edx
// 005a19af  836c241001           sub dword ptr [esp + 0x10], 1
// 005a19b4  75da                 jne 0x5a1990
// 005a19b6  8b742414             mov esi, dword ptr [esp + 0x14]
// 005a19ba  45                   inc ebp
// 005a19bb  3b6e0c               cmp ebp, dword ptr [esi + 0xc]
// 005a19be  7ca0                 jl 0x5a1960
// 005a19c0  8b442430             mov eax, dword ptr [esp + 0x30]
// 005a19c4  b904000000           mov ecx, 4
// 005a19c9  014c2420             add dword ptr [esp + 0x20], ecx
// 005a19cd  014c2424             add dword ptr [esp + 0x24], ecx
// 005a19d1  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 005a19d5  40                   inc eax
// 005a19d6  83c654               add esi, 0x54
// 005a19d9  3b413c               cmp eax, dword ptr [ecx + 0x3c]
// 005a19dc  89442430             mov dword ptr [esp + 0x30], eax
// 005a19e0  89742414             mov dword ptr [esp + 0x14], esi
// 005a19e4  8bc1                 mov eax, ecx
// 005a19e6  0f8c54feffff         jl 0x5a1840
// 005a19ec  5d                   pop ebp
// 005a19ed  5f                   pop edi
// 005a19ee  5e                   pop esi
// 005a19ef  5b                   pop ebx
// 005a19f0  83c42c               add esp, 0x2c
// 005a19f3  89442404             mov dword ptr [esp + 4], eax
// 005a19f7  e904fcffff           jmp 0x5a1600
// library jpeg-6b/jccoefct.c (function _compress_first_pass)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jccoefct.c
