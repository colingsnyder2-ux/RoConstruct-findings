// roc 2009-12 004d18c0  unit: G3D::TextureManager::TextureArgs  size: 229 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004d18c0
//
// 004d18c0  64a100000000         mov eax, dword ptr fs:[0]
// 004d18c6  6aff                 push -1
// 004d18c8  68012b9300           push 0x932b01
// 004d18cd  50                   push eax
// 004d18ce  64892500000000       mov dword ptr fs:[0], esp
// 004d18d5  83ec08               sub esp, 8
// 004d18d8  55                   push ebp
// 004d18d9  56                   push esi
// 004d18da  57                   push edi
// 004d18db  8bf9                 mov edi, ecx
// 004d18dd  8b4708               mov eax, dword ptr [edi + 8]
// 004d18e0  8b2f                 mov ebp, dword ptr [edi]
// 004d18e2  8d0cc500000000       lea ecx, [eax*8]
// 004d18e9  2bc8                 sub ecx, eax
// 004d18eb  03c9                 add ecx, ecx
// 004d18ed  03c9                 add ecx, ecx
// 004d18ef  03c9                 add ecx, ecx
// 004d18f1  6a10                 push 0x10
// 004d18f3  51                   push ecx
// 004d18f4  e8c7891100           call 0x5ea2c0
// 004d18f9  8b4f08               mov ecx, dword ptr [edi + 8]
// 004d18fc  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 004d1900  83c408               add esp, 8
// 004d1903  3bd1                 cmp edx, ecx
// 004d1905  8907                 mov dword ptr [edi], eax
// 004d1907  7d02                 jge 0x4d190b
// 004d1909  8bca                 mov ecx, edx
// 004d190b  8d34cd00000000       lea esi, [ecx*8]
// 004d1912  2bf1                 sub esi, ecx
// 004d1914  8d3cf0               lea edi, [eax + esi*8]
// 004d1917  8bf0                 mov esi, eax
// 004d1919  53                   push ebx
// 004d191a  8bdd                 mov ebx, ebp
// 004d191c  89742410             mov dword ptr [esp + 0x10], esi
// 004d1920  3bf7                 cmp esi, edi
// 004d1922  733e                 jae 0x4d1962
// 004d1924  eb0a                 jmp 0x4d1930
// 004d1926  8da42400000000       lea esp, [esp]
// 004d192d  8d4900               lea ecx, [ecx]
// 004d1930  89742414             mov dword ptr [esp + 0x14], esi
// 004d1934  c744242000000000     mov dword ptr [esp + 0x20], 0
// 004d193c  85f6                 test esi, esi
// 004d193e  740c                 je 0x4d194c
// 004d1940  53                   push ebx
// 004d1941  8bce                 mov ecx, esi
// 004d1943  e8c8feffff           call 0x4d1810
// 004d1948  8b542428             mov edx, dword ptr [esp + 0x28]
// 004d194c  83c638               add esi, 0x38
// 004d194f  83c338               add ebx, 0x38
// 004d1952  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 004d195a  89742410             mov dword ptr [esp + 0x10], esi
// 004d195e  3bf7                 cmp esi, edi
// 004d1960  72ce                 jb 0x4d1930
// 004d1962  8d04d500000000       lea eax, [edx*8]
// 004d1969  2bc2                 sub eax, edx
// 004d196b  8d7cc500             lea edi, [ebp + eax*8]
// 004d196f  8bf5                 mov esi, ebp
// 004d1971  5b                   pop ebx
// 004d1972  3bef                 cmp ebp, edi
// 004d1974  7312                 jae 0x4d1988
// 004d1976  8b16                 mov edx, dword ptr [esi]
// 004d1978  8b4204               mov eax, dword ptr [edx + 4]
// 004d197b  6a00                 push 0
// 004d197d  8bce                 mov ecx, esi
// 004d197f  ffd0                 call eax
// 004d1981  83c638               add esi, 0x38
// 004d1984  3bf7                 cmp esi, edi
// 004d1986  72ee                 jb 0x4d1976
// 004d1988  55                   push ebp
// 004d1989  e8528a1100           call 0x5ea3e0
// 004d198e  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004d1992  83c404               add esp, 4
// 004d1995  5f                   pop edi
// 004d1996  5e                   pop esi
// 004d1997  5d                   pop ebp
// 004d1998  64890d00000000       mov dword ptr fs:[0], ecx
// 004d199f  83c414               add esp, 0x14
// 004d19a2  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\TextureManager.cpp (function ?realloc@?$Array@VTextureArgs@TextureManager@G3D@@@G3D@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/TextureManager.cpp
