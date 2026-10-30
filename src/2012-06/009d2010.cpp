// roc 2012-06 009d2010  unit: CXTPControls  size: 812 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009d2010
//
// 009d2010  6aff                 push -1
// 009d2012  684bfead00           push 0xadfe4b
// 009d2017  64a100000000         mov eax, dword ptr fs:[0]
// 009d201d  50                   push eax
// 009d201e  83ec2c               sub esp, 0x2c
// 009d2021  53                   push ebx
// 009d2022  55                   push ebp
// 009d2023  56                   push esi
// 009d2024  57                   push edi
// 009d2025  a1d027e000           mov eax, dword ptr [0xe027d0]
// 009d202a  33c4                 xor eax, esp
// 009d202c  50                   push eax
// 009d202d  8d442440             lea eax, [esp + 0x40]
// 009d2031  64a300000000         mov dword ptr fs:[0], eax
// 009d2037  8bf9                 mov edi, ecx
// 009d2039  897c2414             mov dword ptr [esp + 0x14], edi
// 009d203d  e86ecfffff           call 0x9cefb0
// 009d2042  89442418             mov dword ptr [esp + 0x18], eax
// 009d2046  8b442450             mov eax, dword ptr [esp + 0x50]
// 009d204a  48                   dec eax
// 009d204b  83f80a               cmp eax, 0xa
// 009d204e  0f877d020000         ja 0x9d22d1
// 009d2054  8b5c2454             mov ebx, dword ptr [esp + 0x54]
// 009d2058  ff248510239d00       jmp dword ptr [eax*4 + 0x9d2310]
// 009d205f  68a4010000           push 0x1a4
// 009d2064  e8b100fbff           call 0x98211a
// 009d2069  83c404               add esp, 4
// 009d206c  89442450             mov dword ptr [esp + 0x50], eax
// 009d2070  c744244800000000     mov dword ptr [esp + 0x48], 0
// 009d2078  85c0                 test eax, eax
// 009d207a  7409                 je 0x9d2085
// 009d207c  8bc8                 mov ecx, eax
// 009d207e  e81d8d0700           call 0xa4ada0
// 009d2083  eb02                 jmp 0x9d2087
// 009d2085  33c0                 xor eax, eax
// 009d2087  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 009d208b  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 009d208f  51                   push ecx
// 009d2090  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 009d2094  52                   push edx
// 009d2095  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 009d2099  51                   push ecx
// 009d209a  52                   push edx
// 009d209b  c7442458ffffffff     mov dword ptr [esp + 0x58], 0xffffffff
// 009d20a3  50                   push eax
// 009d20a4  e947020000           jmp 0x9d22f0
// 009d20a9  81fbb8880000         cmp ebx, 0x88b8
// 009d20af  750c                 jne 0x9d20bd
// 009d20b1  e81a070000           call 0x9d27d0
// 009d20b6  8bf0                 mov esi, eax
// 009d20b8  e910020000           jmp 0x9d22cd
// 009d20bd  81fbba880000         cmp ebx, 0x88ba
// 009d20c3  750c                 jne 0x9d20d1
// 009d20c5  e8c6180000           call 0x9d3990
// 009d20ca  8bf0                 mov esi, eax
// 009d20cc  e9fc010000           jmp 0x9d22cd
// 009d20d1  81fb00e80000         cmp ebx, 0xe800
// 009d20d7  750c                 jne 0x9d20e5
// 009d20d9  e8c20a0000           call 0x9d2ba0
// 009d20de  8bf0                 mov esi, eax
// 009d20e0  e9e8010000           jmp 0x9d22cd
// 009d20e5  81fbbb880000         cmp ebx, 0x88bb
// 009d20eb  750c                 jne 0x9d20f9
// 009d20ed  e85e110000           call 0x9d3250
// 009d20f2  8bf0                 mov esi, eax
// 009d20f4  e9d4010000           jmp 0x9d22cd
// 009d20f9  e872790400           call 0xa19a70
// 009d20fe  8bf0                 mov esi, eax
// 009d2100  e9c8010000           jmp 0x9d22cd
// 009d2105  e8a6f0fbff           call 0x9911b0
// 009d210a  8bf0                 mov esi, eax
// 009d210c  e9bc010000           jmp 0x9d22cd
// 009d2111  e88a1a0000           call 0x9d3ba0
// 009d2116  8bf0                 mov esi, eax
// 009d2118  e9b0010000           jmp 0x9d22cd
// 009d211d  e82e1b0000           call 0x9d3c50
// 009d2122  8bf0                 mov esi, eax
// 009d2124  e9a4010000           jmp 0x9d22cd
// 009d2129  e8c21b0000           call 0x9d3cf0
// 009d212e  8bf0                 mov esi, eax
// 009d2130  e998010000           jmp 0x9d22cd
// 009d2135  e8c6aa0200           call 0x9fcc00
// 009d213a  8bf0                 mov esi, eax
// 009d213c  e98c010000           jmp 0x9d22cd
// 009d2141  e88a1f0400           call 0xa140d0
// 009d2146  8bf0                 mov esi, eax
// 009d2148  e980010000           jmp 0x9d22cd
// 009d214d  e8ae6effff           call 0x9c9000
// 009d2152  33ed                 xor ebp, ebp
// 009d2154  8bf0                 mov esi, eax
// 009d2156  c744241c8ceab400     mov dword ptr [esp + 0x1c], 0xb4ea8c
// 009d215e  896c2420             mov dword ptr [esp + 0x20], ebp
// 009d2162  3bdd                 cmp ebx, ebp
// 009d2164  c744244801000000     mov dword ptr [esp + 0x48], 1
// 009d216c  0f8e29010000         jle 0x9d229b
// 009d2172  8d4c2454             lea ecx, [esp + 0x54]
// 009d2176  ff158447b200         call dword ptr [0xb24784]
// 009d217c  53                   push ebx
// 009d217d  8d4c2420             lea ecx, [esp + 0x20]
// 009d2181  c644244c02           mov byte ptr [esp + 0x4c], 2
// 009d2186  e81583a5ff           call 0x42a4a0
// 009d218b  85c0                 test eax, eax
// 009d218d  7431                 je 0x9d21c0
// 009d218f  8b442420             mov eax, dword ptr [esp + 0x20]
// 009d2193  55                   push ebp
// 009d2194  50                   push eax
// 009d2195  ff15d03ab200         call dword ptr [0xb23ad0]
// 009d219b  50                   push eax
// 009d219c  e8c705fbff           call 0x982768
// 009d21a1  6800040000           push 0x400
// 009d21a6  8d4c2458             lea ecx, [esp + 0x58]
// 009d21aa  51                   push ecx
// 009d21ab  8d542424             lea edx, [esp + 0x24]
// 009d21af  6a00                 push 0
// 009d21b1  52                   push edx
// 009d21b2  8be8                 mov ebp, eax
// 009d21b4  e837630200           call 0x9f84f0
// 009d21b9  8bc8                 mov ecx, eax
// 009d21bb  e8705e0200           call 0x9f8030
// 009d21c0  8b4738               mov eax, dword ptr [edi + 0x38]
// 009d21c3  85c0                 test eax, eax
// 009d21c5  7408                 je 0x9d21cf
// 009d21c7  8bb8a0000000         mov edi, dword ptr [eax + 0xa0]
// 009d21cd  eb12                 jmp 0x9d21e1
// 009d21cf  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 009d21d2  85c9                 test ecx, ecx
// 009d21d4  7409                 je 0x9d21df
// 009d21d6  e8c537fcff           call 0x9959a0
// 009d21db  8bf8                 mov edi, eax
// 009d21dd  eb02                 jmp 0x9d21e1
// 009d21df  33ff                 xor edi, edi
// 009d21e1  85ff                 test edi, edi
// 009d21e3  746b                 je 0x9d2250
// 009d21e5  33c0                 xor eax, eax
// 009d21e7  89442428             mov dword ptr [esp + 0x28], eax
// 009d21eb  8d4c2454             lea ecx, [esp + 0x54]
// 009d21ef  89442424             mov dword ptr [esp + 0x24], eax
// 009d21f3  8944242c             mov dword ptr [esp + 0x2c], eax
// 009d21f7  89442430             mov dword ptr [esp + 0x30], eax
// 009d21fb  89442434             mov dword ptr [esp + 0x34], eax
// 009d21ff  89442438             mov dword ptr [esp + 0x38], eax
// 009d2203  8944243c             mov dword ptr [esp + 0x3c], eax
// 009d2207  c744242801000000     mov dword ptr [esp + 0x28], 1
// 009d220f  ff159847b200         call dword ptr [0xb24798]
// 009d2215  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 009d2218  89442438             mov dword ptr [esp + 0x38], eax
// 009d221c  8d442424             lea eax, [esp + 0x24]
// 009d2220  50                   push eax
// 009d2221  6a00                 push 0
// 009d2223  6861280000           push 0x2861
// 009d2228  51                   push ecx
// 009d2229  895c244c             mov dword ptr [esp + 0x4c], ebx
// 009d222d  ff15043cb200         call dword ptr [0xb23c04]
// 009d2233  85c0                 test eax, eax
// 009d2235  7419                 je 0x9d2250
// 009d2237  8b542424             mov edx, dword ptr [esp + 0x24]
// 009d223b  52                   push edx
// 009d223c  e86f95ffff           call 0x9cb7b0
// 009d2241  50                   push eax
// 009d2242  e89f02fbff           call 0x9824e6
// 009d2247  8bf8                 mov edi, eax
// 009d2249  83c408               add esp, 8
// 009d224c  85ff                 test edi, edi
// 009d224e  7514                 jne 0x9d2264
// 009d2250  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 009d2254  e857cdffff           call 0x9cefb0
// 009d2259  50                   push eax
// 009d225a  e86195ffff           call 0x9cb7c0
// 009d225f  83c404               add esp, 4
// 009d2262  8bf8                 mov edi, eax
// 009d2264  8d442454             lea eax, [esp + 0x54]
// 009d2268  50                   push eax
// 009d2269  8d8ed8000000         lea ecx, [esi + 0xd8]
// 009d226f  ff152045b200         call dword ptr [0xb24520]
// 009d2275  85ed                 test ebp, ebp
// 009d2277  740f                 je 0x9d2288
// 009d2279  8b17                 mov edx, dword ptr [edi]
// 009d227b  8b824c010000         mov eax, dword ptr [edx + 0x14c]
// 009d2281  6a01                 push 1
// 009d2283  55                   push ebp
// 009d2284  8bcf                 mov ecx, edi
// 009d2286  ffd0                 call eax
// 009d2288  8d4c2454             lea ecx, [esp + 0x54]
// 009d228c  c644244801           mov byte ptr [esp + 0x48], 1
// 009d2291  ff15d047b200         call dword ptr [0xb247d0]
// 009d2297  85ff                 test edi, edi
// 009d2299  750f                 jne 0x9d22aa
// 009d229b  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 009d229f  51                   push ecx
// 009d22a0  e81b95ffff           call 0x9cb7c0
// 009d22a5  83c404               add esp, 4
// 009d22a8  8bf8                 mov edi, eax
// 009d22aa  89be78010000         mov dword ptr [esi + 0x178], edi
// 009d22b0  8d4c241c             lea ecx, [esp + 0x1c]
// 009d22b4  c7442448ffffffff     mov dword ptr [esp + 0x48], 0xffffffff
// 009d22bc  c744241c8ceab400     mov dword ptr [esp + 0x1c], 0xb4ea8c
// 009d22c4  e88707fbff           call 0x982a50
// 009d22c9  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 009d22cd  85f6                 test esi, esi
// 009d22cf  7504                 jne 0x9d22d5
// 009d22d1  33c0                 xor eax, eax
// 009d22d3  eb22                 jmp 0x9d22f7
// 009d22d5  8b542450             mov edx, dword ptr [esp + 0x50]
// 009d22d9  8b442460             mov eax, dword ptr [esp + 0x60]
// 009d22dd  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 009d22e1  50                   push eax
// 009d22e2  51                   push ecx
// 009d22e3  8996fc000000         mov dword ptr [esi + 0xfc], edx
// 009d22e9  8b542460             mov edx, dword ptr [esp + 0x60]
// 009d22ed  52                   push edx
// 009d22ee  53                   push ebx
// 009d22ef  56                   push esi
// 009d22f0  8bcf                 mov ecx, edi
// 009d22f2  e8a9fbffff           call 0x9d1ea0
// 009d22f7  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 009d22fb  64890d00000000       mov dword ptr fs:[0], ecx
// 009d2302  59                   pop ecx
// 009d2303  5f                   pop edi
// 009d2304  5e                   pop esi
// 009d2305  5d                   pop ebp
// 009d2306  5b                   pop ebx
// 009d2307  83c438               add esp, 0x38
// 009d230a  c21400               ret 0x14
// 009d230d  8d4900               lea ecx, [ecx]
// 009d2310  a9209d004d           test eax, 0x4d009d20
// 009d2315  219d004d219d         and dword ptr [ebp - 0x62deb300], ebx
// 009d231b  004d21               add byte ptr [ebp + 0x21], cl
// 009d231e  9d                   popfd 
// 009d231f  0005219d0041         add byte ptr [0x41009d21], al
// 009d2325  219d005f209d         and dword ptr [ebp - 0x62dfa100], ebx
// 009d232b  0011                 add byte ptr [ecx], dl
// 009d232d  219d001d219d         and dword ptr [ebp - 0x62dee300], ebx
// 009d2333  0035219d0029         add byte ptr [0x29009d21], dh
// copied from an identical function in another client (function ?Add@CXTPControls@@QAEPAVCXTPControl@@W4XTPControlType@@HPBDHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\CommandBars\XTPControls.cpp