// roc 2009-06 004b1be0  unit: G3D::Shader  size: 1317 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004b1be0
//
// 004b1be0  64a100000000         mov eax, dword ptr fs:[0]
// 004b1be6  6aff                 push -1
// 004b1be8  6871848500           push 0x858471
// 004b1bed  50                   push eax
// 004b1bee  64892500000000       mov dword ptr fs:[0], esp
// 004b1bf5  81ecd4000000         sub esp, 0xd4
// 004b1bfb  56                   push esi
// 004b1bfc  8bf1                 mov esi, ecx
// 004b1bfe  807e1400             cmp byte ptr [esi + 0x14], 0
// 004b1c02  740c                 je 0x4b1c10
// 004b1c04  8b8c24e8000000       mov ecx, dword ptr [esp + 0xe8]
// 004b1c0b  e8b025ffff           call 0x4a41c0
// 004b1c10  837e1000             cmp dword ptr [esi + 0x10], 0
// 004b1c14  0f85bf040000         jne 0x4b20d9
// 004b1c1a  53                   push ebx
// 004b1c1b  55                   push ebp
// 004b1c1c  57                   push edi
// 004b1c1d  8bbc24f4000000       mov edi, dword ptr [esp + 0xf4]
// 004b1c24  8bcf                 mov ecx, edi
// 004b1c26  e895d2feff           call 0x49eec0
// 004b1c2b  8bcf                 mov ecx, edi
// 004b1c2d  89442430             mov dword ptr [esp + 0x30], eax
// 004b1c31  e89ad2feff           call 0x49eed0
// 004b1c36  8b7e0c               mov edi, dword ptr [esi + 0xc]
// 004b1c39  6834428c00           push 0x8c4234
// 004b1c3e  8d4c2414             lea ecx, [esp + 0x14]
// 004b1c42  89442438             mov dword ptr [esp + 0x38], eax
// 004b1c46  ff15b4e48900         call dword ptr [0x89e4b4]
// 004b1c4c  8d442410             lea eax, [esp + 0x10]
// 004b1c50  81c7a0010000         add edi, 0x1a0
// 004b1c56  50                   push eax
// 004b1c57  8bcf                 mov ecx, edi
// 004b1c59  c78424f000000000000000 mov dword ptr [esp + 0xf0], 0
// 004b1c64  e8874cffff           call 0x4a68f0
// 004b1c69  83cdff               or ebp, 0xffffffff
// 004b1c6c  8d4c2410             lea ecx, [esp + 0x10]
// 004b1c70  8ad8                 mov bl, al
// 004b1c72  89ac24ec000000       mov dword ptr [esp + 0xec], ebp
// 004b1c79  ff15c4e48900         call dword ptr [0x89e4c4]
// 004b1c7f  84db                 test bl, bl
// 004b1c81  744a                 je 0x4b1ccd
// 004b1c83  6834428c00           push 0x8c4234
// 004b1c88  8d4c2414             lea ecx, [esp + 0x14]
// 004b1c8c  ff15b4e48900         call dword ptr [0x89e4b4]
// 004b1c92  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 004b1c96  51                   push ecx
// 004b1c97  8d8c24a8000000       lea ecx, [esp + 0xa8]
// 004b1c9e  c78424f000000001000000 mov dword ptr [esp + 0xf0], 1
// 004b1ca9  e8125b0c00           call 0x5777c0
// 004b1cae  50                   push eax
// 004b1caf  8d542414             lea edx, [esp + 0x14]
// 004b1cb3  52                   push edx
// 004b1cb4  8d4e18               lea ecx, [esi + 0x18]
// 004b1cb7  e854f2ffff           call 0x4b0f10
// 004b1cbc  8d4c2410             lea ecx, [esp + 0x10]
// 004b1cc0  89ac24ec000000       mov dword ptr [esp + 0xec], ebp
// 004b1cc7  ff15c4e48900         call dword ptr [0x89e4c4]
// 004b1ccd  681c428c00           push 0x8c421c
// 004b1cd2  8d4c2414             lea ecx, [esp + 0x14]
// 004b1cd6  ff15b4e48900         call dword ptr [0x89e4b4]
// 004b1cdc  8d442410             lea eax, [esp + 0x10]
// 004b1ce0  50                   push eax
// 004b1ce1  8bcf                 mov ecx, edi
// 004b1ce3  c78424f000000002000000 mov dword ptr [esp + 0xf0], 2
// 004b1cee  e8fd4bffff           call 0x4a68f0
// 004b1cf3  8d4c2410             lea ecx, [esp + 0x10]
// 004b1cf7  8ad8                 mov bl, al
// 004b1cf9  89ac24ec000000       mov dword ptr [esp + 0xec], ebp
// 004b1d00  ff15c4e48900         call dword ptr [0x89e4c4]
// 004b1d06  84db                 test bl, bl
// 004b1d08  744a                 je 0x4b1d54
// 004b1d0a  681c428c00           push 0x8c421c
// 004b1d0f  8d4c2414             lea ecx, [esp + 0x14]
// 004b1d13  ff15b4e48900         call dword ptr [0x89e4b4]
// 004b1d19  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 004b1d1d  51                   push ecx
// 004b1d1e  8d8c24a8000000       lea ecx, [esp + 0xa8]
// 004b1d25  c78424f000000003000000 mov dword ptr [esp + 0xf0], 3
// 004b1d30  e88b5a0c00           call 0x5777c0
// 004b1d35  50                   push eax
// 004b1d36  8d542414             lea edx, [esp + 0x14]
// 004b1d3a  52                   push edx
// 004b1d3b  8d4e18               lea ecx, [esi + 0x18]
// 004b1d3e  e8cdf1ffff           call 0x4b0f10
// 004b1d43  8d4c2410             lea ecx, [esp + 0x10]
// 004b1d47  89ac24ec000000       mov dword ptr [esp + 0xec], ebp
// 004b1d4e  ff15c4e48900         call dword ptr [0x89e4c4]
// 004b1d54  6804428c00           push 0x8c4204
// 004b1d59  8d4c2414             lea ecx, [esp + 0x14]
// 004b1d5d  ff15b4e48900         call dword ptr [0x89e4b4]
// 004b1d63  8d442410             lea eax, [esp + 0x10]
// 004b1d67  50                   push eax
// 004b1d68  8bcf                 mov ecx, edi
// 004b1d6a  c78424f000000004000000 mov dword ptr [esp + 0xf0], 4
// 004b1d75  e8764bffff           call 0x4a68f0
// 004b1d7a  8d4c2410             lea ecx, [esp + 0x10]
// 004b1d7e  8ad8                 mov bl, al
// 004b1d80  89ac24ec000000       mov dword ptr [esp + 0xec], ebp
// 004b1d87  ff15c4e48900         call dword ptr [0x89e4c4]
// 004b1d8d  84db                 test bl, bl
// 004b1d8f  7454                 je 0x4b1de5
// 004b1d91  6804428c00           push 0x8c4204
// 004b1d96  8d4c2414             lea ecx, [esp + 0x14]
// 004b1d9a  ff15b4e48900         call dword ptr [0x89e4b4]
// 004b1da0  8d4c2448             lea ecx, [esp + 0x48]
// 004b1da4  51                   push ecx
// 004b1da5  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 004b1da9  c78424f000000005000000 mov dword ptr [esp + 0xf0], 5
// 004b1db4  e857dbfeff           call 0x49f910
// 004b1db9  50                   push eax
// 004b1dba  8d8c24a8000000       lea ecx, [esp + 0xa8]
// 004b1dc1  e8fa590c00           call 0x5777c0
// 004b1dc6  50                   push eax
// 004b1dc7  8d542414             lea edx, [esp + 0x14]
// 004b1dcb  52                   push edx
// 004b1dcc  8d4e18               lea ecx, [esi + 0x18]
// 004b1dcf  e83cf1ffff           call 0x4b0f10
// 004b1dd4  8d4c2410             lea ecx, [esp + 0x10]
// 004b1dd8  89ac24ec000000       mov dword ptr [esp + 0xec], ebp
// 004b1ddf  ff15c4e48900         call dword ptr [0x89e4c4]
// 004b1de5  68ec418c00           push 0x8c41ec
// 004b1dea  8d4c2414             lea ecx, [esp + 0x14]
// 004b1dee  ff15b4e48900         call dword ptr [0x89e4b4]
// 004b1df4  8d442410             lea eax, [esp + 0x10]
// 004b1df8  50                   push eax
// 004b1df9  8bcf                 mov ecx, edi
// 004b1dfb  c78424f000000006000000 mov dword ptr [esp + 0xf0], 6
// 004b1e06  e8e54affff           call 0x4a68f0
// 004b1e0b  8d4c2410             lea ecx, [esp + 0x10]
// 004b1e0f  8ad8                 mov bl, al
// 004b1e11  89ac24ec000000       mov dword ptr [esp + 0xec], ebp
// 004b1e18  ff15c4e48900         call dword ptr [0x89e4c4]
// 004b1e1e  84db                 test bl, bl
// 004b1e20  7454                 je 0x4b1e76
// 004b1e22  68ec418c00           push 0x8c41ec
// 004b1e27  8d4c2414             lea ecx, [esp + 0x14]
// 004b1e2b  ff15b4e48900         call dword ptr [0x89e4b4]
// 004b1e31  8d4c2448             lea ecx, [esp + 0x48]
// 004b1e35  51                   push ecx
// 004b1e36  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 004b1e3a  c78424f000000007000000 mov dword ptr [esp + 0xf0], 7
// 004b1e45  e8c6dafeff           call 0x49f910
// 004b1e4a  50                   push eax
// 004b1e4b  8d8c24a8000000       lea ecx, [esp + 0xa8]
// 004b1e52  e869590c00           call 0x5777c0
// 004b1e57  50                   push eax
// 004b1e58  8d542414             lea edx, [esp + 0x14]
// 004b1e5c  52                   push edx
// 004b1e5d  8d4e18               lea ecx, [esi + 0x18]
// 004b1e60  e8abf0ffff           call 0x4b0f10
// 004b1e65  8d4c2410             lea ecx, [esp + 0x10]
// 004b1e69  89ac24ec000000       mov dword ptr [esp + 0xec], ebp
// 004b1e70  ff15c4e48900         call dword ptr [0x89e4c4]
// 004b1e76  68dc418c00           push 0x8c41dc
// 004b1e7b  8d4c2414             lea ecx, [esp + 0x14]
// 004b1e7f  ff15b4e48900         call dword ptr [0x89e4b4]
// 004b1e85  8d442410             lea eax, [esp + 0x10]
// 004b1e89  50                   push eax
// 004b1e8a  8bcf                 mov ecx, edi
// 004b1e8c  c78424f000000008000000 mov dword ptr [esp + 0xf0], 8
// 004b1e97  e8544affff           call 0x4a68f0
// 004b1e9c  8d4c2410             lea ecx, [esp + 0x10]
// 004b1ea0  8ad8                 mov bl, al
// 004b1ea2  89ac24ec000000       mov dword ptr [esp + 0xec], ebp
// 004b1ea9  ff15c4e48900         call dword ptr [0x89e4c4]
// 004b1eaf  84db                 test bl, bl
// 004b1eb1  0f849d000000         je 0x4b1f54
// 004b1eb7  68500b0000           push 0xb50
// 004b1ebc  e82fbaffff           call 0x4ad8f0
// 004b1ec1  83c404               add esp, 4
// 004b1ec4  84c0                 test al, al
// 004b1ec6  744e                 je 0x4b1f16
// 004b1ec8  bb07000000           mov ebx, 7
// 004b1ecd  8d4900               lea ecx, [ecx]
// 004b1ed0  8d8b00400000         lea ecx, [ebx + 0x4000]
// 004b1ed6  51                   push ecx
// 004b1ed7  e814baffff           call 0x4ad8f0
// 004b1edc  83c404               add esp, 4
// 004b1edf  84c0                 test al, al
// 004b1ee1  7505                 jne 0x4b1ee8
// 004b1ee3  83eb01               sub ebx, 1
// 004b1ee6  79e8                 jns 0x4b1ed0
// 004b1ee8  68dc418c00           push 0x8c41dc
// 004b1eed  8d4c2414             lea ecx, [esp + 0x14]
// 004b1ef1  ff15b4e48900         call dword ptr [0x89e4b4]
// 004b1ef7  43                   inc ebx
// 004b1ef8  895c242c             mov dword ptr [esp + 0x2c], ebx
// 004b1efc  db44242c             fild dword ptr [esp + 0x2c]
// 004b1f00  51                   push ecx
// 004b1f01  8d542414             lea edx, [esp + 0x14]
// 004b1f05  c78424f000000009000000 mov dword ptr [esp + 0xf0], 9
// 004b1f10  d91c24               fstp dword ptr [esp]
// 004b1f13  52                   push edx
// 004b1f14  eb25                 jmp 0x4b1f3b
// 004b1f16  68dc418c00           push 0x8c41dc
// 004b1f1b  8d4c2414             lea ecx, [esp + 0x14]
// 004b1f1f  ff15b4e48900         call dword ptr [0x89e4b4]
// 004b1f25  d9ee                 fldz 
// 004b1f27  51                   push ecx
// 004b1f28  d91c24               fstp dword ptr [esp]
// 004b1f2b  8d442414             lea eax, [esp + 0x14]
// 004b1f2f  c78424f00000000a000000 mov dword ptr [esp + 0xf0], 0xa
// 004b1f3a  50                   push eax
// 004b1f3b  8d4e18               lea ecx, [esi + 0x18]
// 004b1f3e  e8ddf1ffff           call 0x4b1120
// 004b1f43  8d4c2410             lea ecx, [esp + 0x10]
// 004b1f47  89ac24ec000000       mov dword ptr [esp + 0xec], ebp
// 004b1f4e  ff15c4e48900         call dword ptr [0x89e4c4]
// 004b1f54  68c8418c00           push 0x8c41c8
// 004b1f59  8d4c2414             lea ecx, [esp + 0x14]
// 004b1f5d  ff15b4e48900         call dword ptr [0x89e4b4]
// 004b1f63  8d4c2410             lea ecx, [esp + 0x10]
// 004b1f67  51                   push ecx
// 004b1f68  8bcf                 mov ecx, edi
// 004b1f6a  c78424f00000000b000000 mov dword ptr [esp + 0xf0], 0xb
// 004b1f75  e87649ffff           call 0x4a68f0
// 004b1f7a  8d4c2410             lea ecx, [esp + 0x10]
// 004b1f7e  8ad8                 mov bl, al
// 004b1f80  89ac24ec000000       mov dword ptr [esp + 0xec], ebp
// 004b1f87  ff15c4e48900         call dword ptr [0x89e4c4]
// 004b1f8d  84db                 test bl, bl
// 004b1f8f  0f8495000000         je 0x4b202a
// 004b1f95  d9ee                 fldz 
// 004b1f97  8d542438             lea edx, [esp + 0x38]
// 004b1f9b  52                   push edx
// 004b1f9c  d9542448             fst dword ptr [esp + 0x48]
// 004b1fa0  d9542444             fst dword ptr [esp + 0x44]
// 004b1fa4  6803120000           push 0x1203
// 004b1fa9  d9542444             fst dword ptr [esp + 0x44]
// 004b1fad  6800400000           push 0x4000
// 004b1fb2  d95c2444             fstp dword ptr [esp + 0x44]
// 004b1fb6  ff1580ea8900         call dword ptr [0x89ea80]
// 004b1fbc  68c8418c00           push 0x8c41c8
// 004b1fc1  8d4c244c             lea ecx, [esp + 0x4c]
// 004b1fc5  ff15b4e48900         call dword ptr [0x89e4b4]
// 004b1fcb  8d442438             lea eax, [esp + 0x38]
// 004b1fcf  50                   push eax
// 004b1fd0  8d4c2414             lea ecx, [esp + 0x14]
// 004b1fd4  51                   push ecx
// 004b1fd5  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 004b1fd9  c78424f40000000c000000 mov dword ptr [esp + 0xf4], 0xc
// 004b1fe4  e897d2ffff           call 0x4af280
// 004b1fe9  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 004b1fed  50                   push eax
// 004b1fee  8d54247c             lea edx, [esp + 0x7c]
// 004b1ff2  52                   push edx
// 004b1ff3  8d8424ac000000       lea eax, [esp + 0xac]
// 004b1ffa  50                   push eax
// 004b1ffb  e810d9feff           call 0x49f910
// 004b2000  8bc8                 mov ecx, eax
// 004b2002  e879d2ffff           call 0x4af280
// 004b2007  8d4c2478             lea ecx, [esp + 0x78]
// 004b200b  51                   push ecx
// 004b200c  8d54244c             lea edx, [esp + 0x4c]
// 004b2010  52                   push edx
// 004b2011  8d4e18               lea ecx, [esi + 0x18]
// 004b2014  e827f0ffff           call 0x4b1040
// 004b2019  8d4c2448             lea ecx, [esp + 0x48]
// 004b201d  89ac24ec000000       mov dword ptr [esp + 0xec], ebp
// 004b2024  ff15c4e48900         call dword ptr [0x89e4c4]
// 004b202a  68b8418c00           push 0x8c41b8
// 004b202f  8d4c244c             lea ecx, [esp + 0x4c]
// 004b2033  ff15b4e48900         call dword ptr [0x89e4b4]
// 004b2039  8d442448             lea eax, [esp + 0x48]
// 004b203d  50                   push eax
// 004b203e  8bcf                 mov ecx, edi
// 004b2040  c78424f00000000d000000 mov dword ptr [esp + 0xf0], 0xd
// 004b204b  e8a048ffff           call 0x4a68f0
// 004b2050  8d4c2448             lea ecx, [esp + 0x48]
// 004b2054  8ad8                 mov bl, al
// 004b2056  89ac24ec000000       mov dword ptr [esp + 0xec], ebp
// 004b205d  ff15c4e48900         call dword ptr [0x89e4c4]
// 004b2063  84db                 test bl, bl
// 004b2065  746f                 je 0x4b20d6
// 004b2067  bf07000000           mov edi, 7
// 004b206c  8d642400             lea esp, [esp]
// 004b2070  8d8fc0840000         lea ecx, [edi + 0x84c0]
// 004b2076  51                   push ecx
// 004b2077  e874b8ffff           call 0x4ad8f0
// 004b207c  83c404               add esp, 4
// 004b207f  84c0                 test al, al
// 004b2081  7505                 jne 0x4b2088
// 004b2083  83ef01               sub edi, 1
// 004b2086  79e8                 jns 0x4b2070
// 004b2088  68b8418c00           push 0x8c41b8
// 004b208d  8d8c248c000000       lea ecx, [esp + 0x8c]
// 004b2094  ff15b4e48900         call dword ptr [0x89e4b4]
// 004b209a  47                   inc edi
// 004b209b  897c242c             mov dword ptr [esp + 0x2c], edi
// 004b209f  db44242c             fild dword ptr [esp + 0x2c]
// 004b20a3  51                   push ecx
// 004b20a4  8d94248c000000       lea edx, [esp + 0x8c]
// 004b20ab  8d4e18               lea ecx, [esi + 0x18]
// 004b20ae  d91c24               fstp dword ptr [esp]
// 004b20b1  52                   push edx
// 004b20b2  c78424f40000000e000000 mov dword ptr [esp + 0xf4], 0xe
// 004b20bd  e85ef0ffff           call 0x4b1120
// 004b20c2  8d8c2488000000       lea ecx, [esp + 0x88]
// 004b20c9  89ac24ec000000       mov dword ptr [esp + 0xec], ebp
// 004b20d0  ff15c4e48900         call dword ptr [0x89e4c4]
// 004b20d6  5f                   pop edi
// 004b20d7  5d                   pop ebp
// 004b20d8  5b                   pop ebx
// 004b20d9  8b8c24e8000000       mov ecx, dword ptr [esp + 0xe8]
// 004b20e0  8d4618               lea eax, [esi + 0x18]
// 004b20e3  50                   push eax
// 004b20e4  83c60c               add esi, 0xc
// 004b20e7  56                   push esi
// 004b20e8  e8f3e3feff           call 0x4a04e0
// 004b20ed  8b8c24d8000000       mov ecx, dword ptr [esp + 0xd8]
// 004b20f4  5e                   pop esi
// 004b20f5  64890d00000000       mov dword ptr fs:[0], ecx
// 004b20fc  81c4e0000000         add esp, 0xe0
// 004b2102  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Shader.cpp (function ?beforePrimitive@Shader@G3D@@UAEXPAVRenderDevice@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shader.cpp
