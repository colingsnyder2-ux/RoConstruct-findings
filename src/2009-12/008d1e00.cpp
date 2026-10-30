// roc 2009-12 008d1e00  unit: CXTPTabPaintManager  size: 2792 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008d1e00
//
// 008d1e00  6aff                 push -1
// 008d1e02  6822529600           push 0x965222
// 008d1e07  64a100000000         mov eax, dword ptr fs:[0]
// 008d1e0d  50                   push eax
// 008d1e0e  83ec60               sub esp, 0x60
// 008d1e11  53                   push ebx
// 008d1e12  55                   push ebp
// 008d1e13  56                   push esi
// 008d1e14  57                   push edi
// 008d1e15  a10052b600           mov eax, dword ptr [0xb65200]
// 008d1e1a  33c4                 xor eax, esp
// 008d1e1c  50                   push eax
// 008d1e1d  8d442474             lea eax, [esp + 0x74]
// 008d1e21  64a300000000         mov dword ptr fs:[0], eax
// 008d1e27  8bf1                 mov esi, ecx
// 008d1e29  8b9c2488000000       mov ebx, dword ptr [esp + 0x88]
// 008d1e30  8b7b60               mov edi, dword ptr [ebx + 0x60]
// 008d1e33  8bcf                 mov ecx, edi
// 008d1e35  897c2420             mov dword ptr [esp + 0x20], edi
// 008d1e39  e822c5ffff           call 0x8ce360
// 008d1e3e  8944242c             mov dword ptr [esp + 0x2c], eax
// 008d1e42  8b07                 mov eax, dword ptr [edi]
// 008d1e44  8b5048               mov edx, dword ptr [eax + 0x48]
// 008d1e47  8bcf                 mov ecx, edi
// 008d1e49  ffd2                 call edx
// 008d1e4b  83f802               cmp eax, 2
// 008d1e4e  7411                 je 0x8d1e61
// 008d1e50  8b07                 mov eax, dword ptr [edi]
// 008d1e52  8b5048               mov edx, dword ptr [eax + 0x48]
// 008d1e55  8bcf                 mov ecx, edi
// 008d1e57  ffd2                 call edx
// 008d1e59  85c0                 test eax, eax
// 008d1e5b  7404                 je 0x8d1e61
// 008d1e5d  33c0                 xor eax, eax
// 008d1e5f  eb05                 jmp 0x8d1e66
// 008d1e61  b801000000           mov eax, 1
// 008d1e66  33c9                 xor ecx, ecx
// 008d1e68  85c0                 test eax, eax
// 008d1e6a  0f94c1               sete cl
// 008d1e6d  837c242c05           cmp dword ptr [esp + 0x2c], 5
// 008d1e72  8be9                 mov ebp, ecx
// 008d1e74  896c2418             mov dword ptr [esp + 0x18], ebp
// 008d1e78  750d                 jne 0x8d1e87
// 008d1e7a  33d2                 xor edx, edx
// 008d1e7c  85ed                 test ebp, ebp
// 008d1e7e  0f94c2               sete dl
// 008d1e81  8bea                 mov ebp, edx
// 008d1e83  89542418             mov dword ptr [esp + 0x18], edx
// 008d1e87  8d442414             lea eax, [esp + 0x14]
// 008d1e8b  50                   push eax
// 008d1e8c  8bcb                 mov ecx, ebx
// 008d1e8e  e83dc1ffff           call 0x8cdfd0
// 008d1e93  837e2800             cmp dword ptr [esi + 0x28], 0
// 008d1e97  c744247c00000000     mov dword ptr [esp + 0x7c], 0
// 008d1e9f  7422                 je 0x8d1ec3
// 008d1ea1  8b4b60               mov ecx, dword ptr [ebx + 0x60]
// 008d1ea4  395904               cmp dword ptr [ecx + 4], ebx
// 008d1ea7  751a                 jne 0x8d1ec3
// 008d1ea9  837f1c00             cmp dword ptr [edi + 0x1c], 0
// 008d1ead  7414                 je 0x8d1ec3
// 008d1eaf  85ed                 test ebp, ebp
// 008d1eb1  7408                 je 0x8d1ebb
// 008d1eb3  8d8624010000         lea eax, [esi + 0x124]
// 008d1eb9  eb18                 jmp 0x8d1ed3
// 008d1ebb  8d8614010000         lea eax, [esi + 0x114]
// 008d1ec1  eb10                 jmp 0x8d1ed3
// 008d1ec3  8d861c010000         lea eax, [esi + 0x11c]
// 008d1ec9  85ed                 test ebp, ebp
// 008d1ecb  7506                 jne 0x8d1ed3
// 008d1ecd  8d860c010000         lea eax, [esi + 0x10c]
// 008d1ed3  8bac2484000000       mov ebp, dword ptr [esp + 0x84]
// 008d1eda  50                   push eax
// 008d1edb  55                   push ebp
// 008d1edc  8d4c245c             lea ecx, [esp + 0x5c]
// 008d1ee0  e87b97f7ff           call 0x84b660
// 008d1ee5  8b868c000000         mov eax, dword ptr [esi + 0x8c]
// 008d1eeb  8b9688000000         mov edx, dword ptr [esi + 0x88]
// 008d1ef1  8d4c243c             lea ecx, [esp + 0x3c]
// 008d1ef5  51                   push ecx
// 008d1ef6  6a00                 push 0
// 008d1ef8  89442448             mov dword ptr [esp + 0x48], eax
// 008d1efc  53                   push ebx
// 008d1efd  83ec08               sub esp, 8
// 008d1f00  8bc4                 mov eax, esp
// 008d1f02  89542450             mov dword ptr [esp + 0x50], edx
// 008d1f06  c70000000000         mov dword ptr [eax], 0
// 008d1f0c  c7400400000000       mov dword ptr [eax + 4], 0
// 008d1f13  8b17                 mov edx, dword ptr [edi]
// 008d1f15  8b4244               mov eax, dword ptr [edx + 0x44]
// 008d1f18  8964243c             mov dword ptr [esp + 0x3c], esp
// 008d1f1c  55                   push ebp
// 008d1f1d  8bcf                 mov ecx, edi
// 008d1f1f  c684249400000001     mov byte ptr [esp + 0x94], 1
// 008d1f27  ffd0                 call eax
// 008d1f29  837c242c03           cmp dword ptr [esp + 0x2c], 3
// 008d1f2e  89442424             mov dword ptr [esp + 0x24], eax
// 008d1f32  750c                 jne 0x8d1f40
// 008d1f34  8b4b60               mov ecx, dword ptr [ebx + 0x60]
// 008d1f37  395904               cmp dword ptr [ecx + 4], ebx
// 008d1f3a  7404                 je 0x8d1f40
// 008d1f3c  33c0                 xor eax, eax
// 008d1f3e  eb05                 jmp 0x8d1f45
// 008d1f40  b801000000           mov eax, 1
// 008d1f45  89442428             mov dword ptr [esp + 0x28], eax
// 008d1f49  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 008d1f51  85c0                 test eax, eax
// 008d1f53  7471                 je 0x8d1fc6
// 008d1f55  8b4374               mov eax, dword ptr [ebx + 0x74]
// 008d1f58  85c0                 test eax, eax
// 008d1f5a  7e6a                 jle 0x8d1fc6
// 008d1f5c  33ed                 xor ebp, ebp
// 008d1f5e  3bc5                 cmp eax, ebp
// 008d1f60  896c241c             mov dword ptr [esp + 0x1c], ebp
// 008d1f64  7e60                 jle 0x8d1fc6
// 008d1f66  85ed                 test ebp, ebp
// 008d1f68  0f8c98000000         jl 0x8d2006
// 008d1f6e  3b6b74               cmp ebp, dword ptr [ebx + 0x74]
// 008d1f71  0f8d8f000000         jge 0x8d2006
// 008d1f77  8b5370               mov edx, dword ptr [ebx + 0x70]
// 008d1f7a  8b0caa               mov ecx, dword ptr [edx + ebp*4]
// 008d1f7d  8d04aa               lea eax, [edx + ebp*4]
// 008d1f80  8b4108               mov eax, dword ptr [ecx + 8]
// 008d1f83  83f802               cmp eax, 2
// 008d1f86  740d                 je 0x8d1f95
// 008d1f88  83f801               cmp eax, 1
// 008d1f8b  7527                 jne 0x8d1fb4
// 008d1f8d  8b4360               mov eax, dword ptr [ebx + 0x60]
// 008d1f90  395804               cmp dword ptr [eax + 4], ebx
// 008d1f93  751f                 jne 0x8d1fb4
// 008d1f95  8b11                 mov edx, dword ptr [ecx]
// 008d1f97  8b5208               mov edx, dword ptr [edx + 8]
// 008d1f9a  8d442444             lea eax, [esp + 0x44]
// 008d1f9e  50                   push eax
// 008d1f9f  ffd2                 call edx
// 008d1fa1  837c241800           cmp dword ptr [esp + 0x18], 0
// 008d1fa6  8b442448             mov eax, dword ptr [esp + 0x48]
// 008d1faa  7504                 jne 0x8d1fb0
// 008d1fac  8b442444             mov eax, dword ptr [esp + 0x44]
// 008d1fb0  0144241c             add dword ptr [esp + 0x1c], eax
// 008d1fb4  45                   inc ebp
// 008d1fb5  3b6b74               cmp ebp, dword ptr [ebx + 0x74]
// 008d1fb8  7cac                 jl 0x8d1f66
// 008d1fba  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 008d1fbf  7e05                 jle 0x8d1fc6
// 008d1fc1  8344241c03           add dword ptr [esp + 0x1c], 3
// 008d1fc6  83bc249c00000000     cmp dword ptr [esp + 0x9c], 0
// 008d1fce  0f8473060000         je 0x8d2647
// 008d1fd4  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 008d1fd9  0f8e93010000         jle 0x8d2172
// 008d1fdf  8b8ee4000000         mov ecx, dword ptr [esi + 0xe4]
// 008d1fe5  8b01                 mov eax, dword ptr [ecx]
// 008d1fe7  8b942484000000       mov edx, dword ptr [esp + 0x84]
// 008d1fee  8b4008               mov eax, dword ptr [eax + 8]
// 008d1ff1  53                   push ebx
// 008d1ff2  52                   push edx
// 008d1ff3  ffd0                 call eax
// 008d1ff5  837c241800           cmp dword ptr [esp + 0x18], 0
// 008d1ffa  740f                 je 0x8d200b
// 008d1ffc  83ac249800000003     sub dword ptr [esp + 0x98], 3
// 008d2004  eb0d                 jmp 0x8d2013
// 008d2006  e8011bf2ff           call 0x7f3b0c
// 008d200b  83ac249400000003     sub dword ptr [esp + 0x94], 3
// 008d2013  8b4b74               mov ecx, dword ptr [ebx + 0x74]
// 008d2016  83c1ff               add ecx, -1
// 008d2019  898c249c000000       mov dword ptr [esp + 0x9c], ecx
// 008d2020  0f884c010000         js 0x8d2172
// 008d2026  85c9                 test ecx, ecx
// 008d2028  7cdc                 jl 0x8d2006
// 008d202a  3b4b74               cmp ecx, dword ptr [ebx + 0x74]
// 008d202d  7dd7                 jge 0x8d2006
// 008d202f  8b4370               mov eax, dword ptr [ebx + 0x70]
// 008d2032  8d148d00000000       lea edx, [ecx*4]
// 008d2039  8b2c10               mov ebp, dword ptr [eax + edx]
// 008d203c  03c2                 add eax, edx
// 008d203e  8b4508               mov eax, dword ptr [ebp + 8]
// 008d2041  83f802               cmp eax, 2
// 008d2044  7415                 je 0x8d205b
// 008d2046  83f801               cmp eax, 1
// 008d2049  0f8513010000         jne 0x8d2162
// 008d204f  8b5360               mov edx, dword ptr [ebx + 0x60]
// 008d2052  395a04               cmp dword ptr [edx + 4], ebx
// 008d2055  0f8507010000         jne 0x8d2162
// 008d205b  8b4500               mov eax, dword ptr [ebp]
// 008d205e  8b5008               mov edx, dword ptr [eax + 8]
// 008d2061  8d4c242c             lea ecx, [esp + 0x2c]
// 008d2065  51                   push ecx
// 008d2066  8bcd                 mov ecx, ebp
// 008d2068  ffd2                 call edx
// 008d206a  83ec10               sub esp, 0x10
// 008d206d  837c242800           cmp dword ptr [esp + 0x28], 0
// 008d2072  7557                 jne 0x8d20cb
// 008d2074  8b8c24a0000000       mov ecx, dword ptr [esp + 0xa0]
// 008d207b  8b8424a8000000       mov eax, dword ptr [esp + 0xa8]
// 008d2082  8b7c2440             mov edi, dword ptr [esp + 0x40]
// 008d2086  03c1                 add eax, ecx
// 008d2088  99                   cdq 
// 008d2089  2bc2                 sub eax, edx
// 008d208b  8bc8                 mov ecx, eax
// 008d208d  8bc7                 mov eax, edi
// 008d208f  99                   cdq 
// 008d2090  2bc2                 sub eax, edx
// 008d2092  d1f9                 sar ecx, 1
// 008d2094  d1f8                 sar eax, 1
// 008d2096  8d1c08               lea ebx, [eax + ecx]
// 008d2099  2bc7                 sub eax, edi
// 008d209b  8bbc24a4000000       mov edi, dword ptr [esp + 0xa4]
// 008d20a2  03c1                 add eax, ecx
// 008d20a4  8bcc                 mov ecx, esp
// 008d20a6  8bd7                 mov edx, edi
// 008d20a8  2b54243c             sub edx, dword ptr [esp + 0x3c]
// 008d20ac  8911                 mov dword ptr [ecx], edx
// 008d20ae  894104               mov dword ptr [ecx + 4], eax
// 008d20b1  897908               mov dword ptr [ecx + 8], edi
// 008d20b4  89590c               mov dword ptr [ecx + 0xc], ebx
// 008d20b7  8bcd                 mov ecx, ebp
// 008d20b9  e872c0ffff           call 0x8ce130
// 008d20be  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 008d20c2  29942494000000       sub dword ptr [esp + 0x94], edx
// 008d20c9  eb56                 jmp 0x8d2121
// 008d20cb  8b8c249c000000       mov ecx, dword ptr [esp + 0x9c]
// 008d20d2  8b8424a4000000       mov eax, dword ptr [esp + 0xa4]
// 008d20d9  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 008d20dd  8b9c24a8000000       mov ebx, dword ptr [esp + 0xa8]
// 008d20e4  03c1                 add eax, ecx
// 008d20e6  99                   cdq 
// 008d20e7  2bc2                 sub eax, edx
// 008d20e9  8bc8                 mov ecx, eax
// 008d20eb  8bc7                 mov eax, edi
// 008d20ed  99                   cdq 
// 008d20ee  2bc2                 sub eax, edx
// 008d20f0  d1f9                 sar ecx, 1
// 008d20f2  d1f8                 sar eax, 1
// 008d20f4  8bd1                 mov edx, ecx
// 008d20f6  2bd0                 sub edx, eax
// 008d20f8  03d7                 add edx, edi
// 008d20fa  2bc8                 sub ecx, eax
// 008d20fc  8bc4                 mov eax, esp
// 008d20fe  8bfb                 mov edi, ebx
// 008d2100  2b7c2440             sub edi, dword ptr [esp + 0x40]
// 008d2104  8908                 mov dword ptr [eax], ecx
// 008d2106  897804               mov dword ptr [eax + 4], edi
// 008d2109  895008               mov dword ptr [eax + 8], edx
// 008d210c  8bcd                 mov ecx, ebp
// 008d210e  89580c               mov dword ptr [eax + 0xc], ebx
// 008d2111  e81ac0ffff           call 0x8ce130
// 008d2116  8b542430             mov edx, dword ptr [esp + 0x30]
// 008d211a  29942498000000       sub dword ptr [esp + 0x98], edx
// 008d2121  8b84249c000000       mov eax, dword ptr [esp + 0x9c]
// 008d2128  8b8c2488000000       mov ecx, dword ptr [esp + 0x88]
// 008d212f  3b4174               cmp eax, dword ptr [ecx + 0x74]
// 008d2132  0f8dcefeffff         jge 0x8d2006
// 008d2138  8b4970               mov ecx, dword ptr [ecx + 0x70]
// 008d213b  03c0                 add eax, eax
// 008d213d  03c0                 add eax, eax
// 008d213f  03c8                 add ecx, eax
// 008d2141  8b842484000000       mov eax, dword ptr [esp + 0x84]
// 008d2148  8b09                 mov ecx, dword ptr [ecx]
// 008d214a  50                   push eax
// 008d214b  e860c8ffff           call 0x8ce9b0
// 008d2150  8b9c2488000000       mov ebx, dword ptr [esp + 0x88]
// 008d2157  8b8c249c000000       mov ecx, dword ptr [esp + 0x9c]
// 008d215e  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 008d2162  83e901               sub ecx, 1
// 008d2165  898c249c000000       mov dword ptr [esp + 0x9c], ecx
// 008d216c  0f89b4feffff         jns 0x8d2026
// 008d2172  8b8ee4000000         mov ecx, dword ptr [esi + 0xe4]
// 008d2178  8b11                 mov edx, dword ptr [ecx]
// 008d217a  8b842484000000       mov eax, dword ptr [esp + 0x84]
// 008d2181  8b5208               mov edx, dword ptr [edx + 8]
// 008d2184  53                   push ebx
// 008d2185  50                   push eax
// 008d2186  ffd2                 call edx
// 008d2188  8b84248c000000       mov eax, dword ptr [esp + 0x8c]
// 008d218f  8b8c2490000000       mov ecx, dword ptr [esp + 0x90]
// 008d2196  8b942494000000       mov edx, dword ptr [esp + 0x94]
// 008d219d  8944242c             mov dword ptr [esp + 0x2c], eax
// 008d21a1  8b842498000000       mov eax, dword ptr [esp + 0x98]
// 008d21a8  89442438             mov dword ptr [esp + 0x38], eax
// 008d21ac  8b4320               mov eax, dword ptr [ebx + 0x20]
// 008d21af  2b4324               sub eax, dword ptr [ebx + 0x24]
// 008d21b2  837c241800           cmp dword ptr [esp + 0x18], 0
// 008d21b7  894c2430             mov dword ptr [esp + 0x30], ecx
// 008d21bb  89542434             mov dword ptr [esp + 0x34], edx
// 008d21bf  0f8440020000         je 0x8d2405
// 008d21c5  85c0                 test eax, eax
// 008d21c7  7e18                 jle 0x8d21e1
// 008d21c9  99                   cdq 
// 008d21ca  2bc2                 sub eax, edx
// 008d21cc  d1f8                 sar eax, 1
// 008d21ce  f7d8                 neg eax
// 008d21d0  50                   push eax
// 008d21d1  6a00                 push 0
// 008d21d3  8d8c2494000000       lea ecx, [esp + 0x94]
// 008d21da  51                   push ecx
// 008d21db  ff1558ca9800         call dword ptr [0x98ca58]
// 008d21e1  8b5670               mov edx, dword ptr [esi + 0x70]
// 008d21e4  035660               add edx, dword ptr [esi + 0x60]
// 008d21e7  8bcf                 mov ecx, edi
// 008d21e9  01942490000000       add dword ptr [esp + 0x90], edx
// 008d21f0  8b07                 mov eax, dword ptr [edi]
// 008d21f2  8b5048               mov edx, dword ptr [eax + 0x48]
// 008d21f5  ffd2                 call edx
// 008d21f7  83f803               cmp eax, 3
// 008d21fa  7508                 jne 0x8d2204
// 008d21fc  8b4664               mov eax, dword ptr [esi + 0x64]
// 008d21ff  8b4e6c               mov ecx, dword ptr [esi + 0x6c]
// 008d2202  eb06                 jmp 0x8d220a
// 008d2204  8b466c               mov eax, dword ptr [esi + 0x6c]
// 008d2207  8b4e64               mov ecx, dword ptr [esi + 0x64]
// 008d220a  018c248c000000       add dword ptr [esp + 0x8c], ecx
// 008d2211  29842494000000       sub dword ptr [esp + 0x94], eax
// 008d2218  837c242400           cmp dword ptr [esp + 0x24], 0
// 008d221d  7470                 je 0x8d228f
// 008d221f  8b8c2494000000       mov ecx, dword ptr [esp + 0x94]
// 008d2226  8b84248c000000       mov eax, dword ptr [esp + 0x8c]
// 008d222d  8bac2490000000       mov ebp, dword ptr [esp + 0x90]
// 008d2234  03c1                 add eax, ecx
// 008d2236  99                   cdq 
// 008d2237  2bc2                 sub eax, edx
// 008d2239  8bc8                 mov ecx, eax
// 008d223b  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 008d223f  99                   cdq 
// 008d2240  2bc2                 sub eax, edx
// 008d2242  8b942498000000       mov edx, dword ptr [esp + 0x98]
// 008d2249  d1f9                 sar ecx, 1
// 008d224b  d1f8                 sar eax, 1
// 008d224d  2bd5                 sub edx, ebp
// 008d224f  2bc8                 sub ecx, eax
// 008d2251  3b542440             cmp edx, dword ptr [esp + 0x40]
// 008d2255  8d7dff               lea edi, [ebp - 1]
// 008d2258  7e26                 jle 0x8d2280
// 008d225a  8b442420             mov eax, dword ptr [esp + 0x20]
// 008d225e  8b10                 mov edx, dword ptr [eax]
// 008d2260  8b5244               mov edx, dword ptr [edx + 0x44]
// 008d2263  8d6c243c             lea ebp, [esp + 0x3c]
// 008d2267  55                   push ebp
// 008d2268  6a01                 push 1
// 008d226a  53                   push ebx
// 008d226b  57                   push edi
// 008d226c  51                   push ecx
// 008d226d  8b8c2498000000       mov ecx, dword ptr [esp + 0x98]
// 008d2274  51                   push ecx
// 008d2275  8bc8                 mov ecx, eax
// 008d2277  ffd2                 call edx
// 008d2279  8bac2490000000       mov ebp, dword ptr [esp + 0x90]
// 008d2280  8b442440             mov eax, dword ptr [esp + 0x40]
// 008d2284  8d4c2802             lea ecx, [eax + ebp + 2]
// 008d2288  898c2490000000       mov dword ptr [esp + 0x90], ecx
// 008d228f  837c242800           cmp dword ptr [esp + 0x28], 0
// 008d2294  0f8449030000         je 0x8d25e3
// 008d229a  8b942490000000       mov edx, dword ptr [esp + 0x90]
// 008d22a1  83c208               add edx, 8
// 008d22a4  39942498000000       cmp dword ptr [esp + 0x98], edx
// 008d22ab  0f8e32030000         jle 0x8d25e3
// 008d22b1  8d442444             lea eax, [esp + 0x44]
// 008d22b5  50                   push eax
// 008d22b6  8d4c2418             lea ecx, [esp + 0x18]
// 008d22ba  ff15b4dd9800         call dword ptr [0x98ddb4]
// 008d22c0  50                   push eax
// 008d22c1  8d4c241c             lea ecx, [esp + 0x1c]
// 008d22c5  ff1580de9800         call dword ptr [0x98de80]
// 008d22cb  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 008d22d2  8b5108               mov edx, dword ptr [ecx + 8]
// 008d22d5  50                   push eax
// 008d22d6  52                   push edx
// 008d22d7  ff156cb19800         call dword ptr [0x98b16c]
// 008d22dd  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008d22e1  8b01                 mov eax, dword ptr [ecx]
// 008d22e3  8bbc2494000000       mov edi, dword ptr [esp + 0x94]
// 008d22ea  8b5048               mov edx, dword ptr [eax + 0x48]
// 008d22ed  2bbc248c000000       sub edi, dword ptr [esp + 0x8c]
// 008d22f4  ffd2                 call edx
// 008d22f6  33c9                 xor ecx, ecx
// 008d22f8  83f803               cmp eax, 3
// 008d22fb  0f94c1               sete cl
// 008d22fe  8bac2498000000       mov ebp, dword ptr [esp + 0x98]
// 008d2305  8bc7                 mov eax, edi
// 008d2307  8b7e78               mov edi, dword ptr [esi + 0x78]
// 008d230a  83c7fc               add edi, -4
// 008d230d  2bc1                 sub eax, ecx
// 008d230f  2b442448             sub eax, dword ptr [esp + 0x48]
// 008d2313  8b8c2494000000       mov ecx, dword ptr [esp + 0x94]
// 008d231a  99                   cdq 
// 008d231b  2bc2                 sub eax, edx
// 008d231d  d1f8                 sar eax, 1
// 008d231f  2bc8                 sub ecx, eax
// 008d2321  8bc1                 mov eax, ecx
// 008d2323  2b842490000000       sub eax, dword ptr [esp + 0x90]
// 008d232a  33d2                 xor edx, edx
// 008d232c  03c5                 add eax, ebp
// 008d232e  85ff                 test edi, edi
// 008d2330  0f9cc2               setl dl
// 008d2333  898c248c000000       mov dword ptr [esp + 0x8c], ecx
// 008d233a  89842494000000       mov dword ptr [esp + 0x94], eax
// 008d2341  4a                   dec edx
// 008d2342  23d7                 and edx, edi
// 008d2344  8b7e68               mov edi, dword ptr [esi + 0x68]
// 008d2347  03fa                 add edi, edx
// 008d2349  2bef                 sub ebp, edi
// 008d234b  83be9800000000       cmp dword ptr [esi + 0x98], 0
// 008d2352  89ac2498000000       mov dword ptr [esp + 0x98], ebp
// 008d2359  751a                 jne 0x8d2375
// 008d235b  8d542414             lea edx, [esp + 0x14]
// 008d235f  52                   push edx
// 008d2360  8bce                 mov ecx, esi
// 008d2362  e859e5ffff           call 0x8d08c0
// 008d2367  8b842494000000       mov eax, dword ptr [esp + 0x94]
// 008d236e  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 008d2375  83be9000000000       cmp dword ptr [esi + 0x90], 0
// 008d237c  743c                 je 0x8d23ba
// 008d237e  6820090000           push 0x920
// 008d2383  83ec10               sub esp, 0x10
// 008d2386  8bd4                 mov edx, esp
// 008d2388  890a                 mov dword ptr [edx], ecx
// 008d238a  8b8c24a4000000       mov ecx, dword ptr [esp + 0xa4]
// 008d2391  894a04               mov dword ptr [edx + 4], ecx
// 008d2394  894208               mov dword ptr [edx + 8], eax
// 008d2397  8b8424ac000000       mov eax, dword ptr [esp + 0xac]
// 008d239e  8d4c2428             lea ecx, [esp + 0x28]
// 008d23a2  89420c               mov dword ptr [edx + 0xc], eax
// 008d23a5  8b942498000000       mov edx, dword ptr [esp + 0x98]
// 008d23ac  51                   push ecx
// 008d23ad  52                   push edx
// 008d23ae  8bce                 mov ecx, esi
// 008d23b0  e8cbecffff           call 0x8d1080
// 008d23b5  e929020000           jmp 0x8d25e3
// 008d23ba  8b8694000000         mov eax, dword ptr [esi + 0x94]
// 008d23c0  8bac2484000000       mov ebp, dword ptr [esp + 0x84]
// 008d23c7  8b7d00               mov edi, dword ptr [ebp]
// 008d23ca  f7d8                 neg eax
// 008d23cc  1bc0                 sbb eax, eax
// 008d23ce  2500800000           and eax, 0x8000
// 008d23d3  0d20090000           or eax, 0x920
// 008d23d8  50                   push eax
// 008d23d9  8d842490000000       lea eax, [esp + 0x90]
// 008d23e0  50                   push eax
// 008d23e1  8d4c241c             lea ecx, [esp + 0x1c]
// 008d23e5  83c770               add edi, 0x70
// 008d23e8  ff15b4dd9800         call dword ptr [0x98ddb4]
// 008d23ee  50                   push eax
// 008d23ef  8d4c2420             lea ecx, [esp + 0x20]
// 008d23f3  ff1580de9800         call dword ptr [0x98de80]
// 008d23f9  8b17                 mov edx, dword ptr [edi]
// 008d23fb  50                   push eax
// 008d23fc  8bcd                 mov ecx, ebp
// 008d23fe  ffd2                 call edx
// 008d2400  e9de010000           jmp 0x8d25e3
// 008d2405  85c0                 test eax, eax
// 008d2407  7e18                 jle 0x8d2421
// 008d2409  99                   cdq 
// 008d240a  2bc2                 sub eax, edx
// 008d240c  d1f8                 sar eax, 1
// 008d240e  6a00                 push 0
// 008d2410  f7d8                 neg eax
// 008d2412  50                   push eax
// 008d2413  8d842494000000       lea eax, [esp + 0x94]
// 008d241a  50                   push eax
// 008d241b  ff1558ca9800         call dword ptr [0x98ca58]
// 008d2421  8b4e70               mov ecx, dword ptr [esi + 0x70]
// 008d2424  034e60               add ecx, dword ptr [esi + 0x60]
// 008d2427  018c248c000000       add dword ptr [esp + 0x8c], ecx
// 008d242e  8b17                 mov edx, dword ptr [edi]
// 008d2430  8b4248               mov eax, dword ptr [edx + 0x48]
// 008d2433  8bcf                 mov ecx, edi
// 008d2435  ffd0                 call eax
// 008d2437  83f802               cmp eax, 2
// 008d243a  7508                 jne 0x8d2444
// 008d243c  8b4664               mov eax, dword ptr [esi + 0x64]
// 008d243f  8b4e6c               mov ecx, dword ptr [esi + 0x6c]
// 008d2442  eb06                 jmp 0x8d244a
// 008d2444  8b466c               mov eax, dword ptr [esi + 0x6c]
// 008d2447  8b4e64               mov ecx, dword ptr [esi + 0x64]
// 008d244a  29842498000000       sub dword ptr [esp + 0x98], eax
// 008d2451  8b442424             mov eax, dword ptr [esp + 0x24]
// 008d2455  018c2490000000       add dword ptr [esp + 0x90], ecx
// 008d245c  85c0                 test eax, eax
// 008d245e  7473                 je 0x8d24d3
// 008d2460  8b8c2490000000       mov ecx, dword ptr [esp + 0x90]
// 008d2467  8b942498000000       mov edx, dword ptr [esp + 0x98]
// 008d246e  8bac2494000000       mov ebp, dword ptr [esp + 0x94]
// 008d2475  8d0411               lea eax, [ecx + edx]
// 008d2478  99                   cdq 
// 008d2479  2bc2                 sub eax, edx
// 008d247b  8bc8                 mov ecx, eax
// 008d247d  8b442440             mov eax, dword ptr [esp + 0x40]
// 008d2481  99                   cdq 
// 008d2482  2bc2                 sub eax, edx
// 008d2484  d1f8                 sar eax, 1
// 008d2486  d1f9                 sar ecx, 1
// 008d2488  2bc8                 sub ecx, eax
// 008d248a  8b84248c000000       mov eax, dword ptr [esp + 0x8c]
// 008d2491  2be8                 sub ebp, eax
// 008d2493  3b6c243c             cmp ebp, dword ptr [esp + 0x3c]
// 008d2497  8d50ff               lea edx, [eax - 1]
// 008d249a  7e22                 jle 0x8d24be
// 008d249c  8b07                 mov eax, dword ptr [edi]
// 008d249e  8d6c243c             lea ebp, [esp + 0x3c]
// 008d24a2  55                   push ebp
// 008d24a3  6a01                 push 1
// 008d24a5  53                   push ebx
// 008d24a6  51                   push ecx
// 008d24a7  8b8c2494000000       mov ecx, dword ptr [esp + 0x94]
// 008d24ae  52                   push edx
// 008d24af  8b5044               mov edx, dword ptr [eax + 0x44]
// 008d24b2  51                   push ecx
// 008d24b3  8bcf                 mov ecx, edi
// 008d24b5  ffd2                 call edx
// 008d24b7  8b84248c000000       mov eax, dword ptr [esp + 0x8c]
// 008d24be  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 008d24c2  8d4c0802             lea ecx, [eax + ecx + 2]
// 008d24c6  8b442424             mov eax, dword ptr [esp + 0x24]
// 008d24ca  898c248c000000       mov dword ptr [esp + 0x8c], ecx
// 008d24d1  eb07                 jmp 0x8d24da
// 008d24d3  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 008d24da  837c242800           cmp dword ptr [esp + 0x28], 0
// 008d24df  0f84fe000000         je 0x8d25e3
// 008d24e5  8b942494000000       mov edx, dword ptr [esp + 0x94]
// 008d24ec  3bd1                 cmp edx, ecx
// 008d24ee  0f8eef000000         jle 0x8d25e3
// 008d24f4  f7d8                 neg eax
// 008d24f6  1bc0                 sbb eax, eax
// 008d24f8  83e002               and eax, 2
// 008d24fb  2b4678               sub eax, dword ptr [esi + 0x78]
// 008d24fe  2b4668               sub eax, dword ptr [esi + 0x68]
// 008d2501  03d0                 add edx, eax
// 008d2503  83be9000000000       cmp dword ptr [esi + 0x90], 0
// 008d250a  89942494000000       mov dword ptr [esp + 0x94], edx
// 008d2511  7450                 je 0x8d2563
// 008d2513  8b8698000000         mov eax, dword ptr [esi + 0x98]
// 008d2519  f7d8                 neg eax
// 008d251b  1bc0                 sbb eax, eax
// 008d251d  2500080000           and eax, 0x800
// 008d2522  0b869c000000         or eax, dword ptr [esi + 0x9c]
// 008d2528  83c820               or eax, 0x20
// 008d252b  50                   push eax
// 008d252c  83ec10               sub esp, 0x10
// 008d252f  8bc4                 mov eax, esp
// 008d2531  8908                 mov dword ptr [eax], ecx
// 008d2533  8b8c24a4000000       mov ecx, dword ptr [esp + 0xa4]
// 008d253a  894804               mov dword ptr [eax + 4], ecx
// 008d253d  8b8c2498000000       mov ecx, dword ptr [esp + 0x98]
// 008d2544  895008               mov dword ptr [eax + 8], edx
// 008d2547  8b9424ac000000       mov edx, dword ptr [esp + 0xac]
// 008d254e  89500c               mov dword ptr [eax + 0xc], edx
// 008d2551  8d442428             lea eax, [esp + 0x28]
// 008d2555  50                   push eax
// 008d2556  51                   push ecx
// 008d2557  8bce                 mov ecx, esi
// 008d2559  e822ebffff           call 0x8d1080
// 008d255e  e980000000           jmp 0x8d25e3
// 008d2563  83bea000000000       cmp dword ptr [esi + 0xa0], 0
// 008d256a  7415                 je 0x8d2581
// 008d256c  8d542414             lea edx, [esp + 0x14]
// 008d2570  52                   push edx
// 008d2571  8bce                 mov ecx, esi
// 008d2573  e848e3ffff           call 0x8d08c0
// 008d2578  83bea000000000       cmp dword ptr [esi + 0xa0], 0
// 008d257f  750d                 jne 0x8d258e
// 008d2581  83be9800000000       cmp dword ptr [esi + 0x98], 0
// 008d2588  7504                 jne 0x8d258e
// 008d258a  33c9                 xor ecx, ecx
// 008d258c  eb05                 jmp 0x8d2593
// 008d258e  b900080000           mov ecx, 0x800
// 008d2593  8b8694000000         mov eax, dword ptr [esi + 0x94]
// 008d2599  f7d8                 neg eax
// 008d259b  1bc0                 sbb eax, eax
// 008d259d  2500800000           and eax, 0x8000
// 008d25a2  0b869c000000         or eax, dword ptr [esi + 0x9c]
// 008d25a8  8d94248c000000       lea edx, [esp + 0x8c]
// 008d25af  0bc1                 or eax, ecx
// 008d25b1  8b8c2484000000       mov ecx, dword ptr [esp + 0x84]
// 008d25b8  8b39                 mov edi, dword ptr [ecx]
// 008d25ba  83c820               or eax, 0x20
// 008d25bd  50                   push eax
// 008d25be  52                   push edx
// 008d25bf  8d4c241c             lea ecx, [esp + 0x1c]
// 008d25c3  83c770               add edi, 0x70
// 008d25c6  ff15b4dd9800         call dword ptr [0x98ddb4]
// 008d25cc  50                   push eax
// 008d25cd  8d4c2420             lea ecx, [esp + 0x20]
// 008d25d1  ff1580de9800         call dword ptr [0x98de80]
// 008d25d7  8b8c2490000000       mov ecx, dword ptr [esp + 0x90]
// 008d25de  50                   push eax
// 008d25df  8b07                 mov eax, dword ptr [edi]
// 008d25e1  ffd0                 call eax
// 008d25e3  8b4b60               mov ecx, dword ptr [ebx + 0x60]
// 008d25e6  395904               cmp dword ptr [ecx + 4], ebx
// 008d25e9  753d                 jne 0x8d2628
// 008d25eb  8b11                 mov edx, dword ptr [ecx]
// 008d25ed  8b4278               mov eax, dword ptr [edx + 0x78]
// 008d25f0  ffd0                 call eax
// 008d25f2  85c0                 test eax, eax
// 008d25f4  7432                 je 0x8d2628
// 008d25f6  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 008d25fa  8b16                 mov edx, dword ptr [esi]
// 008d25fc  8b5274               mov edx, dword ptr [edx + 0x74]
// 008d25ff  83ec10               sub esp, 0x10
// 008d2602  8bc4                 mov eax, esp
// 008d2604  8908                 mov dword ptr [eax], ecx
// 008d2606  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 008d260a  894804               mov dword ptr [eax + 4], ecx
// 008d260d  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 008d2611  894808               mov dword ptr [eax + 8], ecx
// 008d2614  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 008d2618  89480c               mov dword ptr [eax + 0xc], ecx
// 008d261b  8b842494000000       mov eax, dword ptr [esp + 0x94]
// 008d2622  53                   push ebx
// 008d2623  50                   push eax
// 008d2624  8bce                 mov ecx, esi
// 008d2626  ffd2                 call edx
// 008d2628  8d4c2454             lea ecx, [esp + 0x54]
// 008d262c  c644247c00           mov byte ptr [esp + 0x7c], 0
// 008d2631  e8aa90f7ff           call 0x84b6e0
// 008d2636  8d4c2414             lea ecx, [esp + 0x14]
// 008d263a  ff15c0de9800         call dword ptr [0x98dec0]
// 008d2640  33c0                 xor eax, eax
// 008d2642  e98b020000           jmp 0x8d28d2
// 008d2647  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 008d264b  83f802               cmp eax, 2
// 008d264e  751a                 jne 0x8d266a
// 008d2650  8b86d4000000         mov eax, dword ptr [esi + 0xd4]
// 008d2656  8b8ed0000000         mov ecx, dword ptr [esi + 0xd0]
// 008d265c  8b96d8000000         mov edx, dword ptr [esi + 0xd8]
// 008d2662  50                   push eax
// 008d2663  51                   push ecx
// 008d2664  52                   push edx
// 008d2665  e945020000           jmp 0x8d28af
// 008d266a  83f803               cmp eax, 3
// 008d266d  0f85b4010000         jne 0x8d2827
// 008d2673  837c242800           cmp dword ptr [esp + 0x28], 0
// 008d2678  7526                 jne 0x8d26a0
// 008d267a  837c241800           cmp dword ptr [esp + 0x18], 0
// 008d267f  8b442440             mov eax, dword ptr [esp + 0x40]
// 008d2683  7504                 jne 0x8d2689
// 008d2685  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 008d2689  8b8ed4000000         mov ecx, dword ptr [esi + 0xd4]
// 008d268f  8b96d0000000         mov edx, dword ptr [esi + 0xd0]
// 008d2695  51                   push ecx
// 008d2696  52                   push edx
// 008d2697  83c008               add eax, 8
// 008d269a  50                   push eax
// 008d269b  e90f020000           jmp 0x8d28af
// 008d26a0  837e2800             cmp dword ptr [esi + 0x28], 0
// 008d26a4  7414                 je 0x8d26ba
// 008d26a6  837f1c00             cmp dword ptr [edi + 0x1c], 0
// 008d26aa  740e                 je 0x8d26ba
// 008d26ac  8b442418             mov eax, dword ptr [esp + 0x18]
// 008d26b0  50                   push eax
// 008d26b1  8bce                 mov ecx, esi
// 008d26b3  e878e0ffff           call 0x8d0730
// 008d26b8  eb13                 jmp 0x8d26cd
// 008d26ba  837c241800           cmp dword ptr [esp + 0x18], 0
// 008d26bf  8d861c010000         lea eax, [esi + 0x11c]
// 008d26c5  7506                 jne 0x8d26cd
// 008d26c7  8d860c010000         lea eax, [esi + 0x10c]
// 008d26cd  8b8c2484000000       mov ecx, dword ptr [esp + 0x84]
// 008d26d4  50                   push eax
// 008d26d5  51                   push ecx
// 008d26d6  8d4c246c             lea ecx, [esp + 0x6c]
// 008d26da  e8818ff7ff           call 0x84b660
// 008d26df  8b475c               mov eax, dword ptr [edi + 0x5c]
// 008d26e2  33d2                 xor edx, edx
// 008d26e4  3bc2                 cmp eax, edx
// 008d26e6  c644247c02           mov byte ptr [esp + 0x7c], 2
// 008d26eb  8994249c000000       mov dword ptr [esp + 0x9c], edx
// 008d26f2  89942488000000       mov dword ptr [esp + 0x88], edx
// 008d26f9  0f8ed0000000         jle 0x8d27cf
// 008d26ff  eb07                 jmp 0x8d2708
// 008d2701  8b942488000000       mov edx, dword ptr [esp + 0x88]
// 008d2708  33c9                 xor ecx, ecx
// 008d270a  3bd1                 cmp edx, ecx
// 008d270c  894c2444             mov dword ptr [esp + 0x44], ecx
// 008d2710  894c2448             mov dword ptr [esp + 0x48], ecx
// 008d2714  894c244c             mov dword ptr [esp + 0x4c], ecx
// 008d2718  894c2450             mov dword ptr [esp + 0x50], ecx
// 008d271c  7c1a                 jl 0x8d2738
// 008d271e  3bd0                 cmp edx, eax
// 008d2720  7d16                 jge 0x8d2738
// 008d2722  8b442420             mov eax, dword ptr [esp + 0x20]
// 008d2726  3b505c               cmp edx, dword ptr [eax + 0x5c]
// 008d2729  0f8dd7f8ffff         jge 0x8d2006
// 008d272f  8b4058               mov eax, dword ptr [eax + 0x58]
// 008d2732  8b0c90               mov ecx, dword ptr [eax + edx*4]
// 008d2735  8d0490               lea eax, [eax + edx*4]
// 008d2738  8d542428             lea edx, [esp + 0x28]
// 008d273c  52                   push edx
// 008d273d  e88eb8ffff           call 0x8cdfd0
// 008d2742  8be8                 mov ebp, eax
// 008d2744  8b8698000000         mov eax, dword ptr [esi + 0x98]
// 008d274a  8b9c2484000000       mov ebx, dword ptr [esp + 0x84]
// 008d2751  8b3b                 mov edi, dword ptr [ebx]
// 008d2753  f7d8                 neg eax
// 008d2755  1bc0                 sbb eax, eax
// 008d2757  2500080000           and eax, 0x800
// 008d275c  0d20050000           or eax, 0x520
// 008d2761  50                   push eax
// 008d2762  8d442448             lea eax, [esp + 0x48]
// 008d2766  50                   push eax
// 008d2767  8bcd                 mov ecx, ebp
// 008d2769  c684248400000003     mov byte ptr [esp + 0x84], 3
// 008d2771  83c770               add edi, 0x70
// 008d2774  ff15b4dd9800         call dword ptr [0x98ddb4]
// 008d277a  50                   push eax
// 008d277b  8bcd                 mov ecx, ebp
// 008d277d  ff1580de9800         call dword ptr [0x98de80]
// 008d2783  8b17                 mov edx, dword ptr [edi]
// 008d2785  50                   push eax
// 008d2786  8bcb                 mov ecx, ebx
// 008d2788  ffd2                 call edx
// 008d278a  8d4c2428             lea ecx, [esp + 0x28]
// 008d278e  c644247c02           mov byte ptr [esp + 0x7c], 2
// 008d2793  ff15c0de9800         call dword ptr [0x98dec0]
// 008d2799  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 008d279d  2b442444             sub eax, dword ptr [esp + 0x44]
// 008d27a1  3984249c000000       cmp dword ptr [esp + 0x9c], eax
// 008d27a8  7f07                 jg 0x8d27b1
// 008d27aa  8984249c000000       mov dword ptr [esp + 0x9c], eax
// 008d27b1  8b8c2488000000       mov ecx, dword ptr [esp + 0x88]
// 008d27b8  8b442420             mov eax, dword ptr [esp + 0x20]
// 008d27bc  8b405c               mov eax, dword ptr [eax + 0x5c]
// 008d27bf  41                   inc ecx
// 008d27c0  3bc8                 cmp ecx, eax
// 008d27c2  898c2488000000       mov dword ptr [esp + 0x88], ecx
// 008d27c9  0f8c32ffffff         jl 0x8d2701
// 008d27cf  837c242400           cmp dword ptr [esp + 0x24], 0
// 008d27d4  7504                 jne 0x8d27da
// 008d27d6  33c0                 xor eax, eax
// 008d27d8  eb0f                 jmp 0x8d27e9
// 008d27da  837c241800           cmp dword ptr [esp + 0x18], 0
// 008d27df  8b442440             mov eax, dword ptr [esp + 0x40]
// 008d27e3  7504                 jne 0x8d27e9
// 008d27e5  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 008d27e9  8b8ed4000000         mov ecx, dword ptr [esi + 0xd4]
// 008d27ef  8b96d0000000         mov edx, dword ptr [esi + 0xd0]
// 008d27f5  51                   push ecx
// 008d27f6  8b4e78               mov ecx, dword ptr [esi + 0x78]
// 008d27f9  034e70               add ecx, dword ptr [esi + 0x70]
// 008d27fc  52                   push edx
// 008d27fd  03c8                 add ecx, eax
// 008d27ff  038c24a4000000       add ecx, dword ptr [esp + 0xa4]
// 008d2806  034c2424             add ecx, dword ptr [esp + 0x24]
// 008d280a  51                   push ecx
// 008d280b  8bce                 mov ecx, esi
// 008d280d  e87ee0ffff           call 0x8d0890
// 008d2812  8d4c2464             lea ecx, [esp + 0x64]
// 008d2816  8bf0                 mov esi, eax
// 008d2818  c644247c01           mov byte ptr [esp + 0x7c], 1
// 008d281d  e8be8ef7ff           call 0x84b6e0
// 008d2822  e991000000           jmp 0x8d28b8
// 008d2827  8b8698000000         mov eax, dword ptr [esi + 0x98]
// 008d282d  8bbc2484000000       mov edi, dword ptr [esp + 0x84]
// 008d2834  8b1f                 mov ebx, dword ptr [edi]
// 008d2836  f7d8                 neg eax
// 008d2838  1bc0                 sbb eax, eax
// 008d283a  2500080000           and eax, 0x800
// 008d283f  0d20050000           or eax, 0x520
// 008d2844  50                   push eax
// 008d2845  8d942490000000       lea edx, [esp + 0x90]
// 008d284c  52                   push edx
// 008d284d  8d4c241c             lea ecx, [esp + 0x1c]
// 008d2851  83c370               add ebx, 0x70
// 008d2854  ff15b4dd9800         call dword ptr [0x98ddb4]
// 008d285a  50                   push eax
// 008d285b  8d4c2420             lea ecx, [esp + 0x20]
// 008d285f  ff1580de9800         call dword ptr [0x98de80]
// 008d2865  50                   push eax
// 008d2866  8b03                 mov eax, dword ptr [ebx]
// 008d2868  8bcf                 mov ecx, edi
// 008d286a  ffd0                 call eax
// 008d286c  837c242400           cmp dword ptr [esp + 0x24], 0
// 008d2871  7504                 jne 0x8d2877
// 008d2873  33c0                 xor eax, eax
// 008d2875  eb0f                 jmp 0x8d2886
// 008d2877  837c241800           cmp dword ptr [esp + 0x18], 0
// 008d287c  8b442440             mov eax, dword ptr [esp + 0x40]
// 008d2880  7504                 jne 0x8d2886
// 008d2882  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 008d2886  8b8ed4000000         mov ecx, dword ptr [esi + 0xd4]
// 008d288c  8b96d0000000         mov edx, dword ptr [esi + 0xd0]
// 008d2892  51                   push ecx
// 008d2893  8b4e78               mov ecx, dword ptr [esi + 0x78]
// 008d2896  034e70               add ecx, dword ptr [esi + 0x70]
// 008d2899  52                   push edx
// 008d289a  2b8c2494000000       sub ecx, dword ptr [esp + 0x94]
// 008d28a1  03c8                 add ecx, eax
// 008d28a3  038c249c000000       add ecx, dword ptr [esp + 0x9c]
// 008d28aa  034c2424             add ecx, dword ptr [esp + 0x24]
// 008d28ae  51                   push ecx
// 008d28af  8bce                 mov ecx, esi
// 008d28b1  e8dadfffff           call 0x8d0890
// 008d28b6  8bf0                 mov esi, eax
// 008d28b8  8d4c2454             lea ecx, [esp + 0x54]
// 008d28bc  c644247c00           mov byte ptr [esp + 0x7c], 0
// 008d28c1  e81a8ef7ff           call 0x84b6e0
// 008d28c6  8d4c2414             lea ecx, [esp + 0x14]
// 008d28ca  ff15c0de9800         call dword ptr [0x98dec0]
// 008d28d0  8bc6                 mov eax, esi
// 008d28d2  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 008d28d6  64890d00000000       mov dword ptr fs:[0], ecx
// 008d28dd  59                   pop ecx
// 008d28de  5f                   pop edi
// 008d28df  5e                   pop esi
// 008d28e0  5d                   pop ebp
// 008d28e1  5b                   pop ebx
// 008d28e2  83c46c               add esp, 0x6c
// 008d28e5  c21c00               ret 0x1c
// copied from an identical function in another client (function ?DrawSingleButtonIconAndText@CXTPTabPaintManager@@UAEHPAVCDC@@PAVCXTPTabManagerItem@@VCRect@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\TabManager\XTPTabPaintManager.cpp