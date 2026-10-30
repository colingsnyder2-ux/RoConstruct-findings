// from server: 100% by auto
// roc 2009-06 006f1800  unit: seg_006f0000  size: 327 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006f1800
//
// 006f1800  83ec5c               sub esp, 0x5c
// 006f1803  53                   push ebx
// 006f1804  55                   push ebp
// 006f1805  57                   push edi
// 006f1806  8b3e                 mov edi, dword ptr [esi]
// 006f1808  33ed                 xor ebp, ebp
// 006f180a  57                   push edi
// 006f180b  8bde                 mov ebx, esi
// 006f180d  896c2410             mov dword ptr [esp + 0x10], ebp
// 006f1811  897c2418             mov dword ptr [esp + 0x18], edi
// 006f1815  e816f9ffff           call 0x6f1130
// 006f181a  8b4638               mov eax, dword ptr [esi + 0x38]
// 006f181d  8b08                 mov ecx, dword ptr [eax]
// 006f181f  83c404               add esp, 4
// 006f1822  8d51ff               lea edx, [ecx - 1]
// 006f1825  8910                 mov dword ptr [eax], edx
// 006f1827  85c9                 test ecx, ecx
// 006f1829  760f                 jbe 0x6f183a
// 006f182b  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 006f182e  8b5104               mov edx, dword ptr [ecx + 4]
// 006f1831  0fb602               movzx eax, byte ptr [edx]
// 006f1834  42                   inc edx
// 006f1835  895104               mov dword ptr [ecx + 4], edx
// 006f1838  eb0c                 jmp 0x6f1846
// 006f183a  8b4638               mov eax, dword ptr [esi + 0x38]
// 006f183d  50                   push eax
// 006f183e  e83db8ffff           call 0x6ed080
// 006f1843  83c404               add esp, 4
// 006f1846  8906                 mov dword ptr [esi], eax
// 006f1848  83f83d               cmp eax, 0x3d
// 006f184b  0f85dd000000         jne 0x6f192e
// 006f1851  8d68c4               lea ebp, [eax - 0x3c]
// 006f1854  8b7e3c               mov edi, dword ptr [esi + 0x3c]
// 006f1857  8b5704               mov edx, dword ptr [edi + 4]
// 006f185a  8b4708               mov eax, dword ptr [edi + 8]
// 006f185d  8b0e                 mov ecx, dword ptr [esi]
// 006f185f  03d5                 add edx, ebp
// 006f1861  894c2410             mov dword ptr [esp + 0x10], ecx
// 006f1865  3bd0                 cmp edx, eax
// 006f1867  7676                 jbe 0x6f18df
// 006f1869  3dfeffff7f           cmp eax, 0x7ffffffe
// 006f186e  723d                 jb 0x6f18ad
// 006f1870  8b4640               mov eax, dword ptr [esi + 0x40]
// 006f1873  6a50                 push 0x50
// 006f1875  83c010               add eax, 0x10
// 006f1878  50                   push eax
// 006f1879  8d4c2420             lea ecx, [esp + 0x20]
// 006f187d  51                   push ecx
// 006f187e  e83d78fdff           call 0x6c90c0
// 006f1883  8b5604               mov edx, dword ptr [esi + 4]
// 006f1886  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 006f1889  68c0e18e00           push 0x8ee1c0
// 006f188e  52                   push edx
// 006f188f  8d44242c             lea eax, [esp + 0x2c]
// 006f1893  50                   push eax
// 006f1894  68c4c28e00           push 0x8ec2c4
// 006f1899  51                   push ecx
// 006f189a  e80178fdff           call 0x6c90a0
// 006f189f  8b5634               mov edx, dword ptr [esi + 0x34]
// 006f18a2  6a03                 push 3
// 006f18a4  52                   push edx
// 006f18a5  e8361afdff           call 0x6c32e0
// 006f18aa  83c428               add esp, 0x28
// 006f18ad  8b4708               mov eax, dword ptr [edi + 8]
// 006f18b0  8d1c00               lea ebx, [eax + eax]
// 006f18b3  8d4b01               lea ecx, [ebx + 1]
// 006f18b6  83f9fd               cmp ecx, -3
// 006f18b9  7713                 ja 0x6f18ce
// 006f18bb  8b17                 mov edx, dword ptr [edi]
// 006f18bd  53                   push ebx
// 006f18be  50                   push eax
// 006f18bf  8b4634               mov eax, dword ptr [esi + 0x34]
// 006f18c2  52                   push edx
// 006f18c3  50                   push eax
// 006f18c4  e897beffff           call 0x6ed760
// 006f18c9  83c410               add esp, 0x10
// 006f18cc  eb0c                 jmp 0x6f18da
// 006f18ce  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 006f18d1  51                   push ecx
// 006f18d2  e869beffff           call 0x6ed740
// 006f18d7  83c404               add esp, 4
// 006f18da  8907                 mov dword ptr [edi], eax
// 006f18dc  895f08               mov dword ptr [edi + 8], ebx
// 006f18df  8b4704               mov eax, dword ptr [edi + 4]
// 006f18e2  8b17                 mov edx, dword ptr [edi]
// 006f18e4  8a4c2410             mov cl, byte ptr [esp + 0x10]
// 006f18e8  880c02               mov byte ptr [edx + eax], cl
// 006f18eb  016f04               add dword ptr [edi + 4], ebp
// 006f18ee  8b4638               mov eax, dword ptr [esi + 0x38]
// 006f18f1  8b08                 mov ecx, dword ptr [eax]
// 006f18f3  8d51ff               lea edx, [ecx - 1]
// 006f18f6  8910                 mov dword ptr [eax], edx
// 006f18f8  85c9                 test ecx, ecx
// 006f18fa  760f                 jbe 0x6f190b
// 006f18fc  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 006f18ff  8b5104               mov edx, dword ptr [ecx + 4]
// 006f1902  0fb602               movzx eax, byte ptr [edx]
// 006f1905  42                   inc edx
// 006f1906  895104               mov dword ptr [ecx + 4], edx
// 006f1909  eb0c                 jmp 0x6f1917
// 006f190b  8b4638               mov eax, dword ptr [esi + 0x38]
// 006f190e  50                   push eax
// 006f190f  e86cb7ffff           call 0x6ed080
// 006f1914  83c404               add esp, 4
// 006f1917  016c240c             add dword ptr [esp + 0xc], ebp
// 006f191b  8906                 mov dword ptr [esi], eax
// 006f191d  83f83d               cmp eax, 0x3d
// 006f1920  0f842effffff         je 0x6f1854
// 006f1926  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 006f192a  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 006f192e  393e                 cmp dword ptr [esi], edi
// 006f1930  7509                 jne 0x6f193b
// 006f1932  5f                   pop edi
// 006f1933  8bc5                 mov eax, ebp
// 006f1935  5d                   pop ebp
// 006f1936  5b                   pop ebx
// 006f1937  83c45c               add esp, 0x5c
// 006f193a  c3                   ret 
// 006f193b  83c8ff               or eax, 0xffffffff
// 006f193e  5f                   pop edi
// 006f193f  2bc5                 sub eax, ebp
// 006f1941  5d                   pop ebp
// 006f1942  5b                   pop ebx
// 006f1943  83c45c               add esp, 0x5c
// 006f1946  c3                   ret 
// library lua-5.1.4/llex.c (function _skip_sep)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 llex.c
