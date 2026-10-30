// roc 2011-06 008e1ca0  unit: CXTPPropertyGridPaintManager  size: 1667 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008e1ca0
//
// 008e1ca0  6aff                 push -1
// 008e1ca2  6826dba000           push 0xa0db26
// 008e1ca7  64a100000000         mov eax, dword ptr fs:[0]
// 008e1cad  50                   push eax
// 008e1cae  81ec80000000         sub esp, 0x80
// 008e1cb4  53                   push ebx
// 008e1cb5  55                   push ebp
// 008e1cb6  56                   push esi
// 008e1cb7  57                   push edi
// 008e1cb8  a12058c900           mov eax, dword ptr [0xc95820]
// 008e1cbd  33c4                 xor eax, esp
// 008e1cbf  50                   push eax
// 008e1cc0  8d842494000000       lea eax, [esp + 0x94]
// 008e1cc7  64a300000000         mov dword ptr fs:[0], eax
// 008e1ccd  8bf9                 mov edi, ecx
// 008e1ccf  897c2424             mov dword ptr [esp + 0x24], edi
// 008e1cd3  33db                 xor ebx, ebx
// 008e1cd5  399c24b8000000       cmp dword ptr [esp + 0xb8], ebx
// 008e1cdc  7511                 jne 0x8e1cef
// 008e1cde  c744242801000000     mov dword ptr [esp + 0x28], 1
// 008e1ce6  399c24bc000000       cmp dword ptr [esp + 0xbc], ebx
// 008e1ced  7404                 je 0x8e1cf3
// 008e1cef  895c2428             mov dword ptr [esp + 0x28], ebx
// 008e1cf3  8bb424a4000000       mov esi, dword ptr [esp + 0xa4]
// 008e1cfa  8d4764               lea eax, [edi + 0x64]
// 008e1cfd  50                   push eax
// 008e1cfe  56                   push esi
// 008e1cff  8d4c247c             lea ecx, [esp + 0x7c]
// 008e1d03  e818b4f7ff           call 0x85d120
// 008e1d08  6afc                 push -4
// 008e1d0a  6afa                 push -6
// 008e1d0c  8d8424b0000000       lea eax, [esp + 0xb0]
// 008e1d13  50                   push eax
// 008e1d14  899c24a8000000       mov dword ptr [esp + 0xa8], ebx
// 008e1d1b  ff15e41ba400         call dword ptr [0xa41be4]
// 008e1d21  8b4f60               mov ecx, dword ptr [edi + 0x60]
// 008e1d24  8b8938010000         mov ecx, dword ptr [ecx + 0x138]
// 008e1d2a  e86176f8ff           call 0x869390
// 008e1d2f  8bac24a8000000       mov ebp, dword ptr [esp + 0xa8]
// 008e1d36  8b4e08               mov ecx, dword ptr [esi + 8]
// 008e1d39  8b9424ac000000       mov edx, dword ptr [esp + 0xac]
// 008e1d40  8bd8                 mov ebx, eax
// 008e1d42  8b8424b0000000       mov eax, dword ptr [esp + 0xb0]
// 008e1d49  2bc5                 sub eax, ebp
// 008e1d4b  89442434             mov dword ptr [esp + 0x34], eax
// 008e1d4f  8d44243c             lea eax, [esp + 0x3c]
// 008e1d53  50                   push eax
// 008e1d54  6a03                 push 3
// 008e1d56  681cfbac00           push 0xacfb1c
// 008e1d5b  51                   push ecx
// 008e1d5c  895c243c             mov dword ptr [esp + 0x3c], ebx
// 008e1d60  89542428             mov dword ptr [esp + 0x28], edx
// 008e1d64  ff153801a400         call dword ptr [0xa40138]
// 008e1d6a  33c0                 xor eax, eax
// 008e1d6c  8944241c             mov dword ptr [esp + 0x1c], eax
// 008e1d70  85db                 test ebx, ebx
// 008e1d72  7f40                 jg 0x8e1db4
// 008e1d74  8d4c2474             lea ecx, [esp + 0x74]
// 008e1d78  c784249c000000ffffffff mov dword ptr [esp + 0x9c], 0xffffffff
// 008e1d83  e818b4f7ff           call 0x85d1a0
// 008e1d88  83c8ff               or eax, 0xffffffff
// 008e1d8b  8b8c2494000000       mov ecx, dword ptr [esp + 0x94]
// 008e1d92  64890d00000000       mov dword ptr fs:[0], ecx
// 008e1d99  59                   pop ecx
// 008e1d9a  5f                   pop edi
// 008e1d9b  5e                   pop esi
// 008e1d9c  5d                   pop ebp
// 008e1d9d  5b                   pop ebx
// 008e1d9e  81c48c000000         add esp, 0x8c
// 008e1da4  c21c00               ret 0x1c
// 008e1da7  eb07                 jmp 0x8e1db0
// 008e1da9  8da42400000000       lea esp, [esp]
// 008e1db0  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008e1db4  8b5760               mov edx, dword ptr [edi + 0x60]
// 008e1db7  8b8a38010000         mov ecx, dword ptr [edx + 0x138]
// 008e1dbd  85c0                 test eax, eax
// 008e1dbf  0f8c59050000         jl 0x8e231e
// 008e1dc5  3b4128               cmp eax, dword ptr [ecx + 0x28]
// 008e1dc8  0f8d50050000         jge 0x8e231e
// 008e1dce  8b4924               mov ecx, dword ptr [ecx + 0x24]
// 008e1dd1  8b1c81               mov ebx, dword ptr [ecx + eax*4]
// 008e1dd4  8d0481               lea eax, [ecx + eax*4]
// 008e1dd7  8d542414             lea edx, [esp + 0x14]
// 008e1ddb  52                   push edx
// 008e1ddc  8bcb                 mov ecx, ebx
// 008e1dde  e81df6ffff           call 0x8e1400
// 008e1de3  8d4c2414             lea ecx, [esp + 0x14]
// 008e1de7  c684249c00000001     mov byte ptr [esp + 0x9c], 1
// 008e1def  ff15b026a400         call dword ptr [0xa426b0]
// 008e1df5  84c0                 test al, al
// 008e1df7  0f8531040000         jne 0x8e222e
// 008e1dfd  8d442444             lea eax, [esp + 0x44]
// 008e1e01  50                   push eax
// 008e1e02  8d4c2418             lea ecx, [esp + 0x18]
// 008e1e06  ff15a826a400         call dword ptr [0xa426a8]
// 008e1e0c  50                   push eax
// 008e1e0d  8d4c241c             lea ecx, [esp + 0x1c]
// 008e1e11  ff15c82da400         call dword ptr [0xa42dc8]
// 008e1e17  8b4e08               mov ecx, dword ptr [esi + 8]
// 008e1e1a  50                   push eax
// 008e1e1b  51                   push ecx
// 008e1e1c  ff153801a400         call dword ptr [0xa40138]
// 008e1e22  8b7c2444             mov edi, dword ptr [esp + 0x44]
// 008e1e26  8d142f               lea edx, [edi + ebp]
// 008e1e29  3b542434             cmp edx, dword ptr [esp + 0x34]
// 008e1e2d  0f8cb6020000         jl 0x8e20e9
// 008e1e33  8d4c2414             lea ecx, [esp + 0x14]
// 008e1e37  ff15a826a400         call dword ptr [0xa426a8]
// 008e1e3d  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008e1e41  48                   dec eax
// 008e1e42  2bcd                 sub ecx, ebp
// 008e1e44  0fafc1               imul eax, ecx
// 008e1e47  99                   cdq 
// 008e1e48  f7ff                 idiv edi
// 008e1e4a  8b8c24a8000000       mov ecx, dword ptr [esp + 0xa8]
// 008e1e51  83f801               cmp eax, 1
// 008e1e54  89442438             mov dword ptr [esp + 0x38], eax
// 008e1e58  8bf8                 mov edi, eax
// 008e1e5a  7d08                 jge 0x8e1e64
// 008e1e5c  3be9                 cmp ebp, ecx
// 008e1e5e  0f84bd030000         je 0x8e2221
// 008e1e64  85c0                 test eax, eax
// 008e1e66  7c45                 jl 0x8e1ead
// 008e1e68  eb06                 jmp 0x8e1e70
// 008e1e6a  8d9b00000000         lea ebx, [ebx]
// 008e1e70  57                   push edi
// 008e1e71  8d4c2418             lea ecx, [esp + 0x18]
// 008e1e75  ff153c25a400         call dword ptr [0xa4253c]
// 008e1e7b  3c20                 cmp al, 0x20
// 008e1e7d  7423                 je 0x8e1ea2
// 008e1e7f  57                   push edi
// 008e1e80  8d4c2418             lea ecx, [esp + 0x18]
// 008e1e84  ff153c25a400         call dword ptr [0xa4253c]
// 008e1e8a  3c2c                 cmp al, 0x2c
// 008e1e8c  7414                 je 0x8e1ea2
// 008e1e8e  57                   push edi
// 008e1e8f  8d4c2418             lea ecx, [esp + 0x18]
// 008e1e93  ff153c25a400         call dword ptr [0xa4253c]
// 008e1e99  3c2d                 cmp al, 0x2d
// 008e1e9b  7405                 je 0x8e1ea2
// 008e1e9d  83ef01               sub edi, 1
// 008e1ea0  79ce                 jns 0x8e1e70
// 008e1ea2  8b8c24a8000000       mov ecx, dword ptr [esp + 0xa8]
// 008e1ea9  8b442438             mov eax, dword ptr [esp + 0x38]
// 008e1ead  85ff                 test edi, edi
// 008e1eaf  7f15                 jg 0x8e1ec6
// 008e1eb1  3be9                 cmp ebp, ecx
// 008e1eb3  740f                 je 0x8e1ec4
// 008e1eb5  8b542440             mov edx, dword ptr [esp + 0x40]
// 008e1eb9  01542418             add dword ptr [esp + 0x18], edx
// 008e1ebd  8be9                 mov ebp, ecx
// 008e1ebf  e9a3010000           jmp 0x8e2067
// 008e1ec4  8bf8                 mov edi, eax
// 008e1ec6  47                   inc edi
// 008e1ec7  57                   push edi
// 008e1ec8  8d442424             lea eax, [esp + 0x24]
// 008e1ecc  50                   push eax
// 008e1ecd  8d4c241c             lea ecx, [esp + 0x1c]
// 008e1ed1  ff15601fa400         call dword ptr [0xa41f60]
// 008e1ed7  57                   push edi
// 008e1ed8  8d4c2434             lea ecx, [esp + 0x34]
// 008e1edc  51                   push ecx
// 008e1edd  8d4c241c             lea ecx, [esp + 0x1c]
// 008e1ee1  c68424a400000002     mov byte ptr [esp + 0xa4], 2
// 008e1ee9  ff154827a400         call dword ptr [0xa42748]
// 008e1eef  8d54244c             lea edx, [esp + 0x4c]
// 008e1ef3  52                   push edx
// 008e1ef4  8d4c2424             lea ecx, [esp + 0x24]
// 008e1ef8  c68424a000000003     mov byte ptr [esp + 0xa0], 3
// 008e1f00  ff15a826a400         call dword ptr [0xa426a8]
// 008e1f06  50                   push eax
// 008e1f07  8d4c2428             lea ecx, [esp + 0x28]
// 008e1f0b  ff15c82da400         call dword ptr [0xa42dc8]
// 008e1f11  50                   push eax
// 008e1f12  8b4608               mov eax, dword ptr [esi + 8]
// 008e1f15  50                   push eax
// 008e1f16  ff153801a400         call dword ptr [0xa40138]
// 008e1f1c  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 008e1f20  8b442418             mov eax, dword ptr [esp + 0x18]
// 008e1f24  8d3c01               lea edi, [ecx + eax]
// 008e1f27  8b8c24b4000000       mov ecx, dword ptr [esp + 0xb4]
// 008e1f2e  3bf9                 cmp edi, ecx
// 008e1f30  897c2418             mov dword ptr [esp + 0x18], edi
// 008e1f34  8bd7                 mov edx, edi
// 008e1f36  7c02                 jl 0x8e1f3a
// 008e1f38  8bd1                 mov edx, ecx
// 008e1f3a  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 008e1f3e  03cd                 add ecx, ebp
// 008e1f40  3b8c24b0000000       cmp ecx, dword ptr [esp + 0xb0]
// 008e1f47  7c07                 jl 0x8e1f50
// 008e1f49  8b8c24b0000000       mov ecx, dword ptr [esp + 0xb0]
// 008e1f50  837c242800           cmp dword ptr [esp + 0x28], 0
// 008e1f55  896c2454             mov dword ptr [esp + 0x54], ebp
// 008e1f59  89442458             mov dword ptr [esp + 0x58], eax
// 008e1f5d  894c245c             mov dword ptr [esp + 0x5c], ecx
// 008e1f61  89542460             mov dword ptr [esp + 0x60], edx
// 008e1f65  0f8424010000         je 0x8e208f
// 008e1f6b  896b2c               mov dword ptr [ebx + 0x2c], ebp
// 008e1f6e  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 008e1f72  894330               mov dword ptr [ebx + 0x30], eax
// 008e1f75  894b34               mov dword ptr [ebx + 0x34], ecx
// 008e1f78  895338               mov dword ptr [ebx + 0x38], edx
// 008e1f7b  8b4574               mov eax, dword ptr [ebp + 0x74]
// 008e1f7e  8b8890000000         mov ecx, dword ptr [eax + 0x90]
// 008e1f84  0588000000           add eax, 0x88
// 008e1f89  83f9ff               cmp ecx, -1
// 008e1f8c  7505                 jne 0x8e1f93
// 008e1f8e  8b4004               mov eax, dword ptr [eax + 4]
// 008e1f91  eb02                 jmp 0x8e1f95
// 008e1f93  8bc1                 mov eax, ecx
// 008e1f95  8b16                 mov edx, dword ptr [esi]
// 008e1f97  50                   push eax
// 008e1f98  8b4238               mov eax, dword ptr [edx + 0x38]
// 008e1f9b  8bce                 mov ecx, esi
// 008e1f9d  ffd0                 call eax
// 008e1f9f  8b3e                 mov edi, dword ptr [esi]
// 008e1fa1  6820080000           push 0x820
// 008e1fa6  8d4c2458             lea ecx, [esp + 0x58]
// 008e1faa  51                   push ecx
// 008e1fab  8d4c2428             lea ecx, [esp + 0x28]
// 008e1faf  83c770               add edi, 0x70
// 008e1fb2  ff15a826a400         call dword ptr [0xa426a8]
// 008e1fb8  50                   push eax
// 008e1fb9  8d4c242c             lea ecx, [esp + 0x2c]
// 008e1fbd  ff15c82da400         call dword ptr [0xa42dc8]
// 008e1fc3  8b17                 mov edx, dword ptr [edi]
// 008e1fc5  50                   push eax
// 008e1fc6  8bce                 mov ecx, esi
// 008e1fc8  ffd2                 call edx
// 008e1fca  8b4344               mov eax, dword ptr [ebx + 0x44]
// 008e1fcd  8b4034               mov eax, dword ptr [eax + 0x34]
// 008e1fd0  8b4b28               mov ecx, dword ptr [ebx + 0x28]
// 008e1fd3  3b8848010000         cmp ecx, dword ptr [eax + 0x148]
// 008e1fd9  7552                 jne 0x8e202d
// 008e1fdb  85c0                 test eax, eax
// 008e1fdd  7504                 jne 0x8e1fe3
// 008e1fdf  33ff                 xor edi, edi
// 008e1fe1  eb03                 jmp 0x8e1fe6
// 008e1fe3  8b7820               mov edi, dword ptr [eax + 0x20]
// 008e1fe6  ff15f819a400         call dword ptr [0xa419f8]
// 008e1fec  3bc7                 cmp eax, edi
// 008e1fee  753d                 jne 0x8e202d
// 008e1ff0  8b4574               mov eax, dword ptr [ebp + 0x74]
// 008e1ff3  8b483c               mov ecx, dword ptr [eax + 0x3c]
// 008e1ff6  83c034               add eax, 0x34
// 008e1ff9  83f9ff               cmp ecx, -1
// 008e1ffc  7505                 jne 0x8e2003
// 008e1ffe  8b4004               mov eax, dword ptr [eax + 4]
// 008e2001  eb02                 jmp 0x8e2005
// 008e2003  8bc1                 mov eax, ecx
// 008e2005  8b16                 mov edx, dword ptr [esi]
// 008e2007  50                   push eax
// 008e2008  8b4238               mov eax, dword ptr [edx + 0x38]
// 008e200b  8bce                 mov ecx, esi
// 008e200d  ffd0                 call eax
// 008e200f  8b16                 mov edx, dword ptr [esi]
// 008e2011  8b4234               mov eax, dword ptr [edx + 0x34]
// 008e2014  6a00                 push 0
// 008e2016  8bce                 mov ecx, esi
// 008e2018  ffd0                 call eax
// 008e201a  8b5604               mov edx, dword ptr [esi + 4]
// 008e201d  ff442460             inc dword ptr [esp + 0x60]
// 008e2021  8d4c2454             lea ecx, [esp + 0x54]
// 008e2025  51                   push ecx
// 008e2026  52                   push edx
// 008e2027  ff151c1ba400         call dword ptr [0xa41b1c]
// 008e202d  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 008e2031  8bac24a8000000       mov ebp, dword ptr [esp + 0xa8]
// 008e2038  8d442430             lea eax, [esp + 0x30]
// 008e203c  50                   push eax
// 008e203d  8d4c2418             lea ecx, [esp + 0x18]
// 008e2041  897c241c             mov dword ptr [esp + 0x1c], edi
// 008e2045  ff156425a400         call dword ptr [0xa42564]
// 008e204b  8d4c2430             lea ecx, [esp + 0x30]
// 008e204f  ff15082ea400         call dword ptr [0xa42e08]
// 008e2055  8d4c2420             lea ecx, [esp + 0x20]
// 008e2059  c684249c00000001     mov byte ptr [esp + 0x9c], 1
// 008e2061  ff15082ea400         call dword ptr [0xa42e08]
// 008e2067  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008e206b  3b8c24b4000000       cmp ecx, dword ptr [esp + 0xb4]
// 008e2072  0f8d97020000         jge 0x8e230f
// 008e2078  8d4c2414             lea ecx, [esp + 0x14]
// 008e207c  ff15b026a400         call dword ptr [0xa426b0]
// 008e2082  84c0                 test al, al
// 008e2084  0f8473fdffff         je 0x8e1dfd
// 008e208a  e99b010000           jmp 0x8e222a
// 008e208f  8b8424bc000000       mov eax, dword ptr [esp + 0xbc]
// 008e2096  8b8c24b8000000       mov ecx, dword ptr [esp + 0xb8]
// 008e209d  50                   push eax
// 008e209e  51                   push ecx
// 008e209f  8d54245c             lea edx, [esp + 0x5c]
// 008e20a3  52                   push edx
// 008e20a4  ff15101ca400         call dword ptr [0xa41c10]
// 008e20aa  85c0                 test eax, eax
// 008e20ac  7483                 je 0x8e2031
// 008e20ae  8d4c2430             lea ecx, [esp + 0x30]
// 008e20b2  ff15082ea400         call dword ptr [0xa42e08]
// 008e20b8  8d4c2420             lea ecx, [esp + 0x20]
// 008e20bc  ff15082ea400         call dword ptr [0xa42e08]
// 008e20c2  8d4c2414             lea ecx, [esp + 0x14]
// 008e20c6  ff15082ea400         call dword ptr [0xa42e08]
// 008e20cc  8d4c2474             lea ecx, [esp + 0x74]
// 008e20d0  c784249c000000ffffffff mov dword ptr [esp + 0x9c], 0xffffffff
// 008e20db  e8c0b0f7ff           call 0x85d1a0
// 008e20e0  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008e20e4  e9a2fcffff           jmp 0x8e1d8b
// 008e20e9  8b542440             mov edx, dword ptr [esp + 0x40]
// 008e20ed  8b442418             mov eax, dword ptr [esp + 0x18]
// 008e20f1  8d0c02               lea ecx, [edx + eax]
// 008e20f4  8b9424b4000000       mov edx, dword ptr [esp + 0xb4]
// 008e20fb  3bca                 cmp ecx, edx
// 008e20fd  7d02                 jge 0x8e2101
// 008e20ff  8bd1                 mov edx, ecx
// 008e2101  8b8c24b0000000       mov ecx, dword ptr [esp + 0xb0]
// 008e2108  03fd                 add edi, ebp
// 008e210a  3bf9                 cmp edi, ecx
// 008e210c  897c2438             mov dword ptr [esp + 0x38], edi
// 008e2110  7d02                 jge 0x8e2114
// 008e2112  8bcf                 mov ecx, edi
// 008e2114  837c242800           cmp dword ptr [esp + 0x28], 0
// 008e2119  896c2464             mov dword ptr [esp + 0x64], ebp
// 008e211d  89442468             mov dword ptr [esp + 0x68], eax
// 008e2121  894c246c             mov dword ptr [esp + 0x6c], ecx
// 008e2125  89542470             mov dword ptr [esp + 0x70], edx
// 008e2129  0f84cb000000         je 0x8e21fa
// 008e212f  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 008e2133  896b2c               mov dword ptr [ebx + 0x2c], ebp
// 008e2136  894330               mov dword ptr [ebx + 0x30], eax
// 008e2139  894b34               mov dword ptr [ebx + 0x34], ecx
// 008e213c  895338               mov dword ptr [ebx + 0x38], edx
// 008e213f  8b4774               mov eax, dword ptr [edi + 0x74]
// 008e2142  8b8890000000         mov ecx, dword ptr [eax + 0x90]
// 008e2148  0588000000           add eax, 0x88
// 008e214d  83f9ff               cmp ecx, -1
// 008e2150  7505                 jne 0x8e2157
// 008e2152  8b4004               mov eax, dword ptr [eax + 4]
// 008e2155  eb02                 jmp 0x8e2159
// 008e2157  8bc1                 mov eax, ecx
// 008e2159  8b16                 mov edx, dword ptr [esi]
// 008e215b  50                   push eax
// 008e215c  8b4238               mov eax, dword ptr [edx + 0x38]
// 008e215f  8bce                 mov ecx, esi
// 008e2161  ffd0                 call eax
// 008e2163  8b2e                 mov ebp, dword ptr [esi]
// 008e2165  6820080000           push 0x820
// 008e216a  8d4c2468             lea ecx, [esp + 0x68]
// 008e216e  51                   push ecx
// 008e216f  8d4c241c             lea ecx, [esp + 0x1c]
// 008e2173  83c570               add ebp, 0x70
// 008e2176  ff15a826a400         call dword ptr [0xa426a8]
// 008e217c  50                   push eax
// 008e217d  8d4c2420             lea ecx, [esp + 0x20]
// 008e2181  ff15c82da400         call dword ptr [0xa42dc8]
// 008e2187  8b5500               mov edx, dword ptr [ebp]
// 008e218a  50                   push eax
// 008e218b  8bce                 mov ecx, esi
// 008e218d  ffd2                 call edx
// 008e218f  8b4344               mov eax, dword ptr [ebx + 0x44]
// 008e2192  8b4034               mov eax, dword ptr [eax + 0x34]
// 008e2195  8b4b28               mov ecx, dword ptr [ebx + 0x28]
// 008e2198  3b8848010000         cmp ecx, dword ptr [eax + 0x148]
// 008e219e  7552                 jne 0x8e21f2
// 008e21a0  85c0                 test eax, eax
// 008e21a2  7504                 jne 0x8e21a8
// 008e21a4  33db                 xor ebx, ebx
// 008e21a6  eb03                 jmp 0x8e21ab
// 008e21a8  8b5820               mov ebx, dword ptr [eax + 0x20]
// 008e21ab  ff15f819a400         call dword ptr [0xa419f8]
// 008e21b1  3bc3                 cmp eax, ebx
// 008e21b3  753d                 jne 0x8e21f2
// 008e21b5  8b4774               mov eax, dword ptr [edi + 0x74]
// 008e21b8  8b483c               mov ecx, dword ptr [eax + 0x3c]
// 008e21bb  83c034               add eax, 0x34
// 008e21be  83f9ff               cmp ecx, -1
// 008e21c1  7505                 jne 0x8e21c8
// 008e21c3  8b4004               mov eax, dword ptr [eax + 4]
// 008e21c6  eb02                 jmp 0x8e21ca
// 008e21c8  8bc1                 mov eax, ecx
// 008e21ca  8b16                 mov edx, dword ptr [esi]
// 008e21cc  50                   push eax
// 008e21cd  8b4238               mov eax, dword ptr [edx + 0x38]
// 008e21d0  8bce                 mov ecx, esi
// 008e21d2  ffd0                 call eax
// 008e21d4  8b16                 mov edx, dword ptr [esi]
// 008e21d6  8b4234               mov eax, dword ptr [edx + 0x34]
// 008e21d9  6a00                 push 0
// 008e21db  8bce                 mov ecx, esi
// 008e21dd  ffd0                 call eax
// 008e21df  8b5604               mov edx, dword ptr [esi + 4]
// 008e21e2  ff442470             inc dword ptr [esp + 0x70]
// 008e21e6  8d4c2464             lea ecx, [esp + 0x64]
// 008e21ea  51                   push ecx
// 008e21eb  52                   push edx
// 008e21ec  ff151c1ba400         call dword ptr [0xa41b1c]
// 008e21f2  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 008e21f6  8bef                 mov ebp, edi
// 008e21f8  eb30                 jmp 0x8e222a
// 008e21fa  8b8424bc000000       mov eax, dword ptr [esp + 0xbc]
// 008e2201  8b8c24b8000000       mov ecx, dword ptr [esp + 0xb8]
// 008e2208  50                   push eax
// 008e2209  51                   push ecx
// 008e220a  8d54246c             lea edx, [esp + 0x6c]
// 008e220e  52                   push edx
// 008e220f  ff15101ca400         call dword ptr [0xa41c10]
// 008e2215  85c0                 test eax, eax
// 008e2217  0f85a5feffff         jne 0x8e20c2
// 008e221d  8bef                 mov ebp, edi
// 008e221f  eb09                 jmp 0x8e222a
// 008e2221  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 008e2225  48                   dec eax
// 008e2226  8944241c             mov dword ptr [esp + 0x1c], eax
// 008e222a  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 008e222e  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 008e2232  3b9c24b4000000       cmp ebx, dword ptr [esp + 0xb4]
// 008e2239  0f8dd0000000         jge 0x8e230f
// 008e223f  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 008e2243  49                   dec ecx
// 008e2244  394c241c             cmp dword ptr [esp + 0x1c], ecx
// 008e2248  0f84c1000000         je 0x8e230f
// 008e224e  837c242800           cmp dword ptr [esp + 0x28], 0
// 008e2253  0f8489000000         je 0x8e22e2
// 008e2259  8d576c               lea edx, [edi + 0x6c]
// 008e225c  52                   push edx
// 008e225d  8d4c2478             lea ecx, [esp + 0x78]
// 008e2261  e8ca99f7ff           call 0x85bc30
// 008e2266  8b4774               mov eax, dword ptr [edi + 0x74]
// 008e2269  8b4848               mov ecx, dword ptr [eax + 0x48]
// 008e226c  83c040               add eax, 0x40
// 008e226f  83f9ff               cmp ecx, -1
// 008e2272  7505                 jne 0x8e2279
// 008e2274  8b4004               mov eax, dword ptr [eax + 4]
// 008e2277  eb02                 jmp 0x8e227b
// 008e2279  8bc1                 mov eax, ecx
// 008e227b  8b16                 mov edx, dword ptr [esi]
// 008e227d  50                   push eax
// 008e227e  8b4238               mov eax, dword ptr [edx + 0x38]
// 008e2281  8bce                 mov ecx, esi
// 008e2283  ffd0                 call eax
// 008e2285  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 008e2289  8d0419               lea eax, [ecx + ebx]
// 008e228c  8b8c24b4000000       mov ecx, dword ptr [esp + 0xb4]
// 008e2293  3bc1                 cmp eax, ecx
// 008e2295  7c02                 jl 0x8e2299
// 008e2297  8bc1                 mov eax, ecx
// 008e2299  6820080000           push 0x820
// 008e229e  8d8c2488000000       lea ecx, [esp + 0x88]
// 008e22a5  51                   push ecx
// 008e22a6  8d5508               lea edx, [ebp + 8]
// 008e22a9  89842498000000       mov dword ptr [esp + 0x98], eax
// 008e22b0  8b06                 mov eax, dword ptr [esi]
// 008e22b2  6a01                 push 1
// 008e22b4  89942498000000       mov dword ptr [esp + 0x98], edx
// 008e22bb  8b5070               mov edx, dword ptr [eax + 0x70]
// 008e22be  68acf5a700           push 0xa7f5ac
// 008e22c3  8bce                 mov ecx, esi
// 008e22c5  89ac2494000000       mov dword ptr [esp + 0x94], ebp
// 008e22cc  899c2498000000       mov dword ptr [esp + 0x98], ebx
// 008e22d3  ffd2                 call edx
// 008e22d5  8d4764               lea eax, [edi + 0x64]
// 008e22d8  50                   push eax
// 008e22d9  8d4c2478             lea ecx, [esp + 0x78]
// 008e22dd  e84e99f7ff           call 0x85bc30
// 008e22e2  8d4c2414             lea ecx, [esp + 0x14]
// 008e22e6  83c508               add ebp, 8
// 008e22e9  c684249c00000000     mov byte ptr [esp + 0x9c], 0
// 008e22f1  ff15082ea400         call dword ptr [0xa42e08]
// 008e22f7  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008e22fb  40                   inc eax
// 008e22fc  3b44242c             cmp eax, dword ptr [esp + 0x2c]
// 008e2300  8944241c             mov dword ptr [esp + 0x1c], eax
// 008e2304  0f8ca6faffff         jl 0x8e1db0
// 008e230a  e965faffff           jmp 0x8e1d74
// 008e230f  8d4c2414             lea ecx, [esp + 0x14]
// 008e2313  ff15082ea400         call dword ptr [0xa42e08]
// 008e2319  e956faffff           jmp 0x8e1d74
// 008e231e  e8e77ff2ff           call 0x80a30a
// copied from an identical function in another client (function ?HitTestVerbs@CXTPPropertyGridPaintManager@@QAEHPAVCDC@@VCRect@@VCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\PropertyGrid\XTPPropertyGridPaintManager.cpp