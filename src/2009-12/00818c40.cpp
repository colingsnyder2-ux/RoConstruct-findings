// roc 2009-12 00818c40  unit: CRobloxReportView  size: 1279 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00818c40
//
// 00818c40  6aff                 push -1
// 00818c42  6878a89500           push 0x95a878
// 00818c47  64a100000000         mov eax, dword ptr fs:[0]
// 00818c4d  50                   push eax
// 00818c4e  83ec70               sub esp, 0x70
// 00818c51  53                   push ebx
// 00818c52  55                   push ebp
// 00818c53  56                   push esi
// 00818c54  57                   push edi
// 00818c55  a10052b600           mov eax, dword ptr [0xb65200]
// 00818c5a  33c4                 xor eax, esp
// 00818c5c  50                   push eax
// 00818c5d  8d842484000000       lea eax, [esp + 0x84]
// 00818c64  64a300000000         mov dword ptr fs:[0], eax
// 00818c6a  8bf1                 mov esi, ecx
// 00818c6c  89742434             mov dword ptr [esp + 0x34], esi
// 00818c70  8b9c2498000000       mov ebx, dword ptr [esp + 0x98]
// 00818c77  8b03                 mov eax, dword ptr [ebx]
// 00818c79  8b9088000000         mov edx, dword ptr [eax + 0x88]
// 00818c7f  8bcb                 mov ecx, ebx
// 00818c81  ffd2                 call edx
// 00818c83  85c0                 test eax, eax
// 00818c85  7444                 je 0x818ccb
// 00818c87  8b8c249c000000       mov ecx, dword ptr [esp + 0x9c]
// 00818c8e  8b13                 mov edx, dword ptr [ebx]
// 00818c90  8b5264               mov edx, dword ptr [edx + 0x64]
// 00818c93  6a00                 push 0
// 00818c95  83ec10               sub esp, 0x10
// 00818c98  8bc4                 mov eax, esp
// 00818c9a  8908                 mov dword ptr [eax], ecx
// 00818c9c  8b8c24b4000000       mov ecx, dword ptr [esp + 0xb4]
// 00818ca3  894804               mov dword ptr [eax + 4], ecx
// 00818ca6  8b8c24b8000000       mov ecx, dword ptr [esp + 0xb8]
// 00818cad  894808               mov dword ptr [eax + 8], ecx
// 00818cb0  8b8c24bc000000       mov ecx, dword ptr [esp + 0xbc]
// 00818cb7  89480c               mov dword ptr [eax + 0xc], ecx
// 00818cba  8b8424a8000000       mov eax, dword ptr [esp + 0xa8]
// 00818cc1  50                   push eax
// 00818cc2  8bcb                 mov ecx, ebx
// 00818cc4  ffd2                 call edx
// 00818cc6  e946040000           jmp 0x819111
// 00818ccb  8b06                 mov eax, dword ptr [esi]
// 00818ccd  8b9094010000         mov edx, dword ptr [eax + 0x194]
// 00818cd3  8bce                 mov ecx, esi
// 00818cd5  ffd2                 call edx
// 00818cd7  8bf8                 mov edi, eax
// 00818cd9  8d4c2458             lea ecx, [esp + 0x58]
// 00818cdd  897c242c             mov dword ptr [esp + 0x2c], edi
// 00818ce1  e87a190000           call 0x81a660
// 00818ce6  c7442458dc429f00     mov dword ptr [esp + 0x58], 0x9f42dc
// 00818cee  8bac2494000000       mov ebp, dword ptr [esp + 0x94]
// 00818cf5  8bcf                 mov ecx, edi
// 00818cf7  c784248c00000000000000 mov dword ptr [esp + 0x8c], 0
// 00818d02  896c247c             mov dword ptr [esp + 0x7c], ebp
// 00818d06  897c245c             mov dword ptr [esp + 0x5c], edi
// 00818d0a  895c2460             mov dword ptr [esp + 0x60], ebx
// 00818d0e  e8ad570000           call 0x81e4c0
// 00818d13  8bce                 mov ecx, esi
// 00818d15  8944241c             mov dword ptr [esp + 0x1c], eax
// 00818d19  e802f5ffff           call 0x818220
// 00818d1e  8bbfec000000         mov edi, dword ptr [edi + 0xec]
// 00818d24  8b8c249c000000       mov ecx, dword ptr [esp + 0x9c]
// 00818d2b  8bf0                 mov esi, eax
// 00818d2d  8b4730               mov eax, dword ptr [edi + 0x30]
// 00818d30  8b16                 mov edx, dword ptr [esi]
// 00818d32  8b5274               mov edx, dword ptr [edx + 0x74]
// 00818d35  83ec10               sub esp, 0x10
// 00818d38  89442434             mov dword ptr [esp + 0x34], eax
// 00818d3c  8bc4                 mov eax, esp
// 00818d3e  8908                 mov dword ptr [eax], ecx
// 00818d40  8b8c24b0000000       mov ecx, dword ptr [esp + 0xb0]
// 00818d47  894804               mov dword ptr [eax + 4], ecx
// 00818d4a  8b8c24b4000000       mov ecx, dword ptr [esp + 0xb4]
// 00818d51  894808               mov dword ptr [eax + 8], ecx
// 00818d54  8b8c24b8000000       mov ecx, dword ptr [esp + 0xb8]
// 00818d5b  53                   push ebx
// 00818d5c  89480c               mov dword ptr [eax + 0xc], ecx
// 00818d5f  55                   push ebp
// 00818d60  8bce                 mov ecx, esi
// 00818d62  897c2448             mov dword ptr [esp + 0x48], edi
// 00818d66  ffd2                 call edx
// 00818d68  8b84249c000000       mov eax, dword ptr [esp + 0x9c]
// 00818d6f  8b8c24a0000000       mov ecx, dword ptr [esp + 0xa0]
// 00818d76  8b9424a4000000       mov edx, dword ptr [esp + 0xa4]
// 00818d7d  89442438             mov dword ptr [esp + 0x38], eax
// 00818d81  8b8424a8000000       mov eax, dword ptr [esp + 0xa8]
// 00818d88  89442444             mov dword ptr [esp + 0x44], eax
// 00818d8c  2b8424ac000000       sub eax, dword ptr [esp + 0xac]
// 00818d93  894c243c             mov dword ptr [esp + 0x3c], ecx
// 00818d97  89442444             mov dword ptr [esp + 0x44], eax
// 00818d9b  8b03                 mov eax, dword ptr [ebx]
// 00818d9d  89542440             mov dword ptr [esp + 0x40], edx
// 00818da1  8b5060               mov edx, dword ptr [eax + 0x60]
// 00818da4  8bcb                 mov ecx, ebx
// 00818da6  ffd2                 call edx
// 00818da8  89442428             mov dword ptr [esp + 0x28], eax
// 00818dac  85c0                 test eax, eax
// 00818dae  0f8446020000         je 0x818ffa
// 00818db4  8b8c249c000000       mov ecx, dword ptr [esp + 0x9c]
// 00818dbb  33ed                 xor ebp, ebp
// 00818dbd  396c2424             cmp dword ptr [esp + 0x24], ebp
// 00818dc1  c744242001000000     mov dword ptr [esp + 0x20], 1
// 00818dc9  894c2414             mov dword ptr [esp + 0x14], ecx
// 00818dcd  896c2418             mov dword ptr [esp + 0x18], ebp
// 00818dd1  0f8e53010000         jle 0x818f2a
// 00818dd7  eb0b                 jmp 0x818de4
// 00818dd9  8da42400000000       lea esp, [esp]
// 00818de0  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 00818de4  85ed                 test ebp, ebp
// 00818de6  0f8c28010000         jl 0x818f14
// 00818dec  3b6f30               cmp ebp, dword ptr [edi + 0x30]
// 00818def  0f8d1f010000         jge 0x818f14
// 00818df5  8b472c               mov eax, dword ptr [edi + 0x2c]
// 00818df8  8b3ca8               mov edi, dword ptr [eax + ebp*4]
// 00818dfb  8d04a8               lea eax, [eax + ebp*4]
// 00818dfe  85ff                 test edi, edi
// 00818e00  0f840e010000         je 0x818f14
// 00818e06  8bcf                 mov ecx, edi
// 00818e08  e8b3ac0900           call 0x8b3ac0
// 00818e0d  85c0                 test eax, eax
// 00818e0f  0f84ff000000         je 0x818f14
// 00818e15  8b13                 mov edx, dword ptr [ebx]
// 00818e17  8b82d0000000         mov eax, dword ptr [edx + 0xd0]
// 00818e1d  8bcb                 mov ecx, ebx
// 00818e1f  ffd0                 call eax
// 00818e21  85c0                 test eax, eax
// 00818e23  0f84eb000000         je 0x818f14
// 00818e29  8b8424a4000000       mov eax, dword ptr [esp + 0xa4]
// 00818e30  2b84249c000000       sub eax, dword ptr [esp + 0x9c]
// 00818e37  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00818e3b  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00818e3f  50                   push eax
// 00818e40  57                   push edi
// 00818e41  e8faf3ffff           call 0x818240
// 00818e46  03c5                 add eax, ebp
// 00818e48  837c242000           cmp dword ptr [esp + 0x20], 0
// 00818e4d  89442414             mov dword ptr [esp + 0x14], eax
// 00818e51  740c                 je 0x818e5f
// 00818e53  036c241c             add ebp, dword ptr [esp + 0x1c]
// 00818e57  c744242000000000     mov dword ptr [esp + 0x20], 0
// 00818e5f  8d4dff               lea ecx, [ebp - 1]
// 00818e62  896c2448             mov dword ptr [esp + 0x48], ebp
// 00818e66  894c2448             mov dword ptr [esp + 0x48], ecx
// 00818e6a  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00818e6e  57                   push edi
// 00818e6f  e8cc1e0100           call 0x82ad40
// 00818e74  8bd8                 mov ebx, eax
// 00818e76  85db                 test ebx, ebx
// 00818e78  7440                 je 0x818eba
// 00818e7a  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00818e7e  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 00818e82  8b442414             mov eax, dword ptr [esp + 0x14]
// 00818e86  894c2478             mov dword ptr [esp + 0x78], ecx
// 00818e8a  8bcf                 mov ecx, edi
// 00818e8c  897c2464             mov dword ptr [esp + 0x64], edi
// 00818e90  896c246c             mov dword ptr [esp + 0x6c], ebp
// 00818e94  89542470             mov dword ptr [esp + 0x70], edx
// 00818e98  89442474             mov dword ptr [esp + 0x74], eax
// 00818e9c  e89feb0000           call 0x827a40
// 00818ea1  89842480000000       mov dword ptr [esp + 0x80], eax
// 00818ea8  895c2468             mov dword ptr [esp + 0x68], ebx
// 00818eac  8b13                 mov edx, dword ptr [ebx]
// 00818eae  8b5258               mov edx, dword ptr [edx + 0x58]
// 00818eb1  8d442458             lea eax, [esp + 0x58]
// 00818eb5  50                   push eax
// 00818eb6  8bcb                 mov ecx, ebx
// 00818eb8  ffd2                 call edx
// 00818eba  8b842498000000       mov eax, dword ptr [esp + 0x98]
// 00818ec1  8b4070               mov eax, dword ptr [eax + 0x70]
// 00818ec4  83f801               cmp eax, 1
// 00818ec7  0f855d020000         jne 0x81912a
// 00818ecd  83bfb400000000       cmp dword ptr [edi + 0xb4], 0
// 00818ed4  7433                 je 0x818f09
// 00818ed6  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00818eda  8b16                 mov edx, dword ptr [esi]
// 00818edc  8b5278               mov edx, dword ptr [edx + 0x78]
// 00818edf  83ec10               sub esp, 0x10
// 00818ee2  8bc4                 mov eax, esp
// 00818ee4  8908                 mov dword ptr [eax], ecx
// 00818ee6  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00818eea  894804               mov dword ptr [eax + 4], ecx
// 00818eed  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00818ef1  894808               mov dword ptr [eax + 8], ecx
// 00818ef4  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 00818ef8  89480c               mov dword ptr [eax + 0xc], ecx
// 00818efb  8b8424a4000000       mov eax, dword ptr [esp + 0xa4]
// 00818f02  6a01                 push 1
// 00818f04  50                   push eax
// 00818f05  8bce                 mov ecx, esi
// 00818f07  ffd2                 call edx
// 00818f09  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 00818f0d  8b9c2498000000       mov ebx, dword ptr [esp + 0x98]
// 00818f14  45                   inc ebp
// 00818f15  3b6c2424             cmp ebp, dword ptr [esp + 0x24]
// 00818f19  896c2418             mov dword ptr [esp + 0x18], ebp
// 00818f1d  0f8cbdfeffff         jl 0x818de0
// 00818f23  8b8c249c000000       mov ecx, dword ptr [esp + 0x9c]
// 00818f2a  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00818f2e  85c0                 test eax, eax
// 00818f30  7e47                 jle 0x818f79
// 00818f32  8bbc24a4000000       mov edi, dword ptr [esp + 0xa4]
// 00818f39  8b9424a0000000       mov edx, dword ptr [esp + 0xa0]
// 00818f40  8b2e                 mov ebp, dword ptr [esi]
// 00818f42  03c1                 add eax, ecx
// 00818f44  83ec10               sub esp, 0x10
// 00818f47  897c2460             mov dword ptr [esp + 0x60], edi
// 00818f4b  8bbc24b8000000       mov edi, dword ptr [esp + 0xb8]
// 00818f52  89442460             mov dword ptr [esp + 0x60], eax
// 00818f56  8bc4                 mov eax, esp
// 00818f58  8908                 mov dword ptr [eax], ecx
// 00818f5a  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 00818f5e  895004               mov dword ptr [eax + 4], edx
// 00818f61  8b9424a4000000       mov edx, dword ptr [esp + 0xa4]
// 00818f68  894808               mov dword ptr [eax + 8], ecx
// 00818f6b  89780c               mov dword ptr [eax + 0xc], edi
// 00818f6e  8b8588000000         mov eax, dword ptr [ebp + 0x88]
// 00818f74  52                   push edx
// 00818f75  8bce                 mov ecx, esi
// 00818f77  ffd0                 call eax
// 00818f79  8b13                 mov edx, dword ptr [ebx]
// 00818f7b  8b82cc000000         mov eax, dword ptr [edx + 0xcc]
// 00818f81  8bcb                 mov ecx, ebx
// 00818f83  ffd0                 call eax
// 00818f85  85c0                 test eax, eax
// 00818f87  7471                 je 0x818ffa
// 00818f89  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00818f8d  e8fe170400           call 0x85a790
// 00818f92  8b9424a8000000       mov edx, dword ptr [esp + 0xa8]
// 00818f99  8b8c24a0000000       mov ecx, dword ptr [esp + 0xa0]
// 00818fa0  8bbc249c000000       mov edi, dword ptr [esp + 0x9c]
// 00818fa7  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 00818fab  89542454             mov dword ptr [esp + 0x54], edx
// 00818faf  2bd1                 sub edx, ecx
// 00818fb1  2b9424ac000000       sub edx, dword ptr [esp + 0xac]
// 00818fb8  897c2448             mov dword ptr [esp + 0x48], edi
// 00818fbc  03ca                 add ecx, edx
// 00818fbe  894c2470             mov dword ptr [esp + 0x70], ecx
// 00818fc2  8b8c24a4000000       mov ecx, dword ptr [esp + 0xa4]
// 00818fc9  894c2474             mov dword ptr [esp + 0x74], ecx
// 00818fcd  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 00818fd1  894c2478             mov dword ptr [esp + 0x78], ecx
// 00818fd5  33c9                 xor ecx, ecx
// 00818fd7  898c2480000000       mov dword ptr [esp + 0x80], ecx
// 00818fde  894c2464             mov dword ptr [esp + 0x64], ecx
// 00818fe2  03fd                 add edi, ebp
// 00818fe4  897c246c             mov dword ptr [esp + 0x6c], edi
// 00818fe8  89442468             mov dword ptr [esp + 0x68], eax
// 00818fec  8b10                 mov edx, dword ptr [eax]
// 00818fee  8b5258               mov edx, dword ptr [edx + 0x58]
// 00818ff1  8d4c2458             lea ecx, [esp + 0x58]
// 00818ff5  51                   push ecx
// 00818ff6  8bc8                 mov ecx, eax
// 00818ff8  ffd2                 call edx
// 00818ffa  8b94249c000000       mov edx, dword ptr [esp + 0x9c]
// 00819001  8bbc24a8000000       mov edi, dword ptr [esp + 0xa8]
// 00819008  33c0                 xor eax, eax
// 0081900a  3986b8020000         cmp dword ptr [esi + 0x2b8], eax
// 00819010  89542438             mov dword ptr [esp + 0x38], edx
// 00819014  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00819018  8baae0000000         mov ebp, dword ptr [edx + 0xe0]
// 0081901e  0f95c0               setne al
// 00819021  33c9                 xor ecx, ecx
// 00819023  85c0                 test eax, eax
// 00819025  8b8424a0000000       mov eax, dword ptr [esp + 0xa0]
// 0081902c  0f95c1               setne cl
// 0081902f  8944243c             mov dword ptr [esp + 0x3c], eax
// 00819033  8b03                 mov eax, dword ptr [ebx]
// 00819035  8b506c               mov edx, dword ptr [eax + 0x6c]
// 00819038  2bf9                 sub edi, ecx
// 0081903a  8b8c24a4000000       mov ecx, dword ptr [esp + 0xa4]
// 00819041  894c2440             mov dword ptr [esp + 0x40], ecx
// 00819045  8bcb                 mov ecx, ebx
// 00819047  ffd2                 call edx
// 00819049  8bcd                 mov ecx, ebp
// 0081904b  89442434             mov dword ptr [esp + 0x34], eax
// 0081904f  e8cc3b0100           call 0x82cc20
// 00819054  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00819058  48                   dec eax
// 00819059  3bc8                 cmp ecx, eax
// 0081905b  7d71                 jge 0x8190ce
// 0081905d  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 00819062  7e6a                 jle 0x8190ce
// 00819064  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00819068  8b80e0000000         mov eax, dword ptr [eax + 0xe0]
// 0081906e  8b28                 mov ebp, dword ptr [eax]
// 00819070  8b13                 mov edx, dword ptr [ebx]
// 00819072  89442434             mov dword ptr [esp + 0x34], eax
// 00819076  8b426c               mov eax, dword ptr [edx + 0x6c]
// 00819079  8bcb                 mov ecx, ebx
// 0081907b  83c55c               add ebp, 0x5c
// 0081907e  ffd0                 call eax
// 00819080  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00819084  8b5500               mov edx, dword ptr [ebp]
// 00819087  40                   inc eax
// 00819088  50                   push eax
// 00819089  ffd2                 call edx
// 0081908b  8bd8                 mov ebx, eax
// 0081908d  85db                 test ebx, ebx
// 0081908f  743d                 je 0x8190ce
// 00819091  8b03                 mov eax, dword ptr [ebx]
// 00819093  8b90b0000000         mov edx, dword ptr [eax + 0xb0]
// 00819099  8bcb                 mov ecx, ebx
// 0081909b  ffd2                 call edx
// 0081909d  8bc8                 mov ecx, eax
// 0081909f  0faf8e58020000       imul ecx, dword ptr [esi + 0x258]
// 008190a6  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008190aa  3bc1                 cmp eax, ecx
// 008190ac  7c13                 jl 0x8190c1
// 008190ae  8b13                 mov edx, dword ptr [ebx]
// 008190b0  8b82b0000000         mov eax, dword ptr [edx + 0xb0]
// 008190b6  8bcb                 mov ecx, ebx
// 008190b8  ffd0                 call eax
// 008190ba  0faf8658020000       imul eax, dword ptr [esi + 0x258]
// 008190c1  8b8c249c000000       mov ecx, dword ptr [esp + 0x9c]
// 008190c8  03c1                 add eax, ecx
// 008190ca  89442438             mov dword ptr [esp + 0x38], eax
// 008190ce  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 008190d2  8b16                 mov edx, dword ptr [esi]
// 008190d4  8b5278               mov edx, dword ptr [edx + 0x78]
// 008190d7  83ec10               sub esp, 0x10
// 008190da  8bc4                 mov eax, esp
// 008190dc  8908                 mov dword ptr [eax], ecx
// 008190de  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 008190e2  894804               mov dword ptr [eax + 4], ecx
// 008190e5  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 008190e9  894808               mov dword ptr [eax + 8], ecx
// 008190ec  89780c               mov dword ptr [eax + 0xc], edi
// 008190ef  8b8424a4000000       mov eax, dword ptr [esp + 0xa4]
// 008190f6  6a00                 push 0
// 008190f8  50                   push eax
// 008190f9  8bce                 mov ecx, esi
// 008190fb  ffd2                 call edx
// 008190fd  8d4c2458             lea ecx, [esp + 0x58]
// 00819101  c784248c000000ffffffff mov dword ptr [esp + 0x8c], 0xffffffff
// 0081910c  e88f0f0000           call 0x81a0a0
// 00819111  8b8c2484000000       mov ecx, dword ptr [esp + 0x84]
// 00819118  64890d00000000       mov dword ptr fs:[0], ecx
// 0081911f  59                   pop ecx
// 00819120  5f                   pop edi
// 00819121  5e                   pop esi
// 00819122  5d                   pop ebp
// 00819123  5b                   pop ebx
// 00819124  83c47c               add esp, 0x7c
// 00819127  c21c00               ret 0x1c
// 0081912a  83f802               cmp eax, 2
// 0081912d  0f85a3fdffff         jne 0x818ed6
// 00819133  83bfb800000000       cmp dword ptr [edi + 0xb8], 0
// 0081913a  e995fdffff           jmp 0x818ed4
// copied from an identical function in another client (function ?PrintRow@CXTPReportView@@MAEXPAVCDC@@PAVCXTPReportRow@@VCRect@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\ReportControl\XTPReportView.cpp