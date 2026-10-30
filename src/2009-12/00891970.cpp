// roc 2009-12 00891970  unit: CXTPDockBar  size: 1944 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00891970
//
// 00891970  6aff                 push -1
// 00891972  6808139600           push 0x961308
// 00891977  64a100000000         mov eax, dword ptr fs:[0]
// 0089197d  50                   push eax
// 0089197e  83ec68               sub esp, 0x68
// 00891981  53                   push ebx
// 00891982  55                   push ebp
// 00891983  56                   push esi
// 00891984  57                   push edi
// 00891985  a10052b600           mov eax, dword ptr [0xb65200]
// 0089198a  33c4                 xor eax, esp
// 0089198c  50                   push eax
// 0089198d  8d44247c             lea eax, [esp + 0x7c]
// 00891991  64a300000000         mov dword ptr fs:[0], eax
// 00891997  894c2414             mov dword ptr [esp + 0x14], ecx
// 0089199b  8d4c2438             lea ecx, [esp + 0x38]
// 0089199f  e8bcf7ffff           call 0x891160
// 008919a4  c7442438e43ba000     mov dword ptr [esp + 0x38], 0xa03be4
// 008919ac  8bac248c000000       mov ebp, dword ptr [esp + 0x8c]
// 008919b3  8b4508               mov eax, dword ptr [ebp + 8]
// 008919b6  33f6                 xor esi, esi
// 008919b8  3bc6                 cmp eax, esi
// 008919ba  89b42484000000       mov dword ptr [esp + 0x84], esi
// 008919c1  0f8ee7000000         jle 0x891aae
// 008919c7  85f6                 test esi, esi
// 008919c9  0f8c7f020000         jl 0x891c4e
// 008919cf  3bf0                 cmp esi, eax
// 008919d1  0f8d77020000         jge 0x891c4e
// 008919d7  8b4504               mov eax, dword ptr [ebp + 4]
// 008919da  8b3cb0               mov edi, dword ptr [eax + esi*4]
// 008919dd  8b8c249c000000       mov ecx, dword ptr [esp + 0x9c]
// 008919e4  8b1f                 mov ebx, dword ptr [edi]
// 008919e6  8d04b0               lea eax, [eax + esi*4]
// 008919e9  6a00                 push 0
// 008919eb  57                   push edi
// 008919ec  51                   push ecx
// 008919ed  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008919f1  e83af4ffff           call 0x890e30
// 008919f6  8b94249c000000       mov edx, dword ptr [esp + 0x9c]
// 008919fd  50                   push eax
// 008919fe  52                   push edx
// 008919ff  8b9304020000         mov edx, dword ptr [ebx + 0x204]
// 00891a05  8d44243c             lea eax, [esp + 0x3c]
// 00891a09  50                   push eax
// 00891a0a  8bcf                 mov ecx, edi
// 00891a0c  ffd2                 call edx
// 00891a0e  83bc249c00000000     cmp dword ptr [esp + 0x9c], 0
// 00891a16  8b8784010000         mov eax, dword ptr [edi + 0x184]
// 00891a1c  7418                 je 0x891a36
// 00891a1e  8b4818               mov ecx, dword ptr [eax + 0x18]
// 00891a21  8b942494000000       mov edx, dword ptr [esp + 0x94]
// 00891a28  894c2418             mov dword ptr [esp + 0x18], ecx
// 00891a2c  8954241c             mov dword ptr [esp + 0x1c], edx
// 00891a30  8d4c2418             lea ecx, [esp + 0x18]
// 00891a34  eb16                 jmp 0x891a4c
// 00891a36  8b8c2490000000       mov ecx, dword ptr [esp + 0x90]
// 00891a3d  8b401c               mov eax, dword ptr [eax + 0x1c]
// 00891a40  894c2420             mov dword ptr [esp + 0x20], ecx
// 00891a44  89442424             mov dword ptr [esp + 0x24], eax
// 00891a48  8d4c2420             lea ecx, [esp + 0x20]
// 00891a4c  8b01                 mov eax, dword ptr [ecx]
// 00891a4e  8b542430             mov edx, dword ptr [esp + 0x30]
// 00891a52  8b4904               mov ecx, dword ptr [ecx + 4]
// 00891a55  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 00891a59  03d0                 add edx, eax
// 00891a5b  89442450             mov dword ptr [esp + 0x50], eax
// 00891a5f  89442460             mov dword ptr [esp + 0x60], eax
// 00891a63  33c0                 xor eax, eax
// 00891a65  03d9                 add ebx, ecx
// 00891a67  89442474             mov dword ptr [esp + 0x74], eax
// 00891a6b  89442478             mov dword ptr [esp + 0x78], eax
// 00891a6f  894c2454             mov dword ptr [esp + 0x54], ecx
// 00891a73  894c2464             mov dword ptr [esp + 0x64], ecx
// 00891a77  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00891a7b  8d44244c             lea eax, [esp + 0x4c]
// 00891a7f  50                   push eax
// 00891a80  51                   push ecx
// 00891a81  8d4c2440             lea ecx, [esp + 0x40]
// 00891a85  897c2454             mov dword ptr [esp + 0x54], edi
// 00891a89  89542460             mov dword ptr [esp + 0x60], edx
// 00891a8d  895c2464             mov dword ptr [esp + 0x64], ebx
// 00891a91  89542470             mov dword ptr [esp + 0x70], edx
// 00891a95  895c2474             mov dword ptr [esp + 0x74], ebx
// 00891a99  89742478             mov dword ptr [esp + 0x78], esi
// 00891a9d  e8aef9ffff           call 0x891450
// 00891aa2  8b4508               mov eax, dword ptr [ebp + 8]
// 00891aa5  46                   inc esi
// 00891aa6  3bf0                 cmp esi, eax
// 00891aa8  0f8c19ffffff         jl 0x8919c7
// 00891aae  83bc249c00000000     cmp dword ptr [esp + 0x9c], 0
// 00891ab6  7509                 jne 0x891ac1
// 00891ab8  8d4c2438             lea ecx, [esp + 0x38]
// 00891abc  e81ff6ffff           call 0x8910e0
// 00891ac1  8b5c2440             mov ebx, dword ptr [esp + 0x40]
// 00891ac5  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 00891ac9  68100e8900           push 0x890e10
// 00891ace  6a30                 push 0x30
// 00891ad0  53                   push ebx
// 00891ad1  52                   push edx
// 00891ad2  ff1584b99800         call dword ptr [0x98b984]
// 00891ad8  83c9ff               or ecx, 0xffffffff
// 00891adb  83c410               add esp, 0x10
// 00891ade  33c0                 xor eax, eax
// 00891ae0  33ff                 xor edi, edi
// 00891ae2  8d6902               lea ebp, [ecx + 2]
// 00891ae5  85db                 test ebx, ebx
// 00891ae7  7e4d                 jle 0x891b36
// 00891ae9  8b74243c             mov esi, dword ptr [esp + 0x3c]
// 00891aed  83c604               add esi, 4
// 00891af0  85ff                 test edi, edi
// 00891af2  0f8c56010000         jl 0x891c4e
// 00891af8  3bfb                 cmp edi, ebx
// 00891afa  0f8d4e010000         jge 0x891c4e
// 00891b00  8b16                 mov edx, dword ptr [esi]
// 00891b02  3bd0                 cmp edx, eax
// 00891b04  0f8d49010000         jge 0x891c53
// 00891b0a  3b4e20               cmp ecx, dword ptr [esi + 0x20]
// 00891b0d  7c08                 jl 0x891b17
// 00891b0f  85ed                 test ebp, ebp
// 00891b11  0f843c010000         je 0x891c53
// 00891b17  6a00                 push 0
// 00891b19  2bc2                 sub eax, edx
// 00891b1b  50                   push eax
// 00891b1c  56                   push esi
// 00891b1d  bd01000000           mov ebp, 1
// 00891b22  ff156ccc9800         call dword ptr [0x98cc6c]
// 00891b28  8b4608               mov eax, dword ptr [esi + 8]
// 00891b2b  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00891b2e  47                   inc edi
// 00891b2f  83c630               add esi, 0x30
// 00891b32  3bfb                 cmp edi, ebx
// 00891b34  7cba                 jl 0x891af0
// 00891b36  8b842498000000       mov eax, dword ptr [esp + 0x98]
// 00891b3d  8d7bff               lea edi, [ebx - 1]
// 00891b40  83c9ff               or ecx, 0xffffffff
// 00891b43  c784248c00000001000000 mov dword ptr [esp + 0x8c], 1
// 00891b4e  85ff                 test edi, edi
// 00891b50  7c64                 jl 0x891bb6
// 00891b52  8b74243c             mov esi, dword ptr [esp + 0x3c]
// 00891b56  8d147f               lea edx, [edi + edi*2]
// 00891b59  c1e204               shl edx, 4
// 00891b5c  8d743204             lea esi, [edx + esi + 4]
// 00891b60  85ff                 test edi, edi
// 00891b62  0f8ce6000000         jl 0x891c4e
// 00891b68  3bfb                 cmp edi, ebx
// 00891b6a  0f8dde000000         jge 0x891c4e
// 00891b70  8b5608               mov edx, dword ptr [esi + 8]
// 00891b73  8bea                 mov ebp, edx
// 00891b75  2be8                 sub ebp, eax
// 00891b77  85ed                 test ebp, ebp
// 00891b79  0f8edb000000         jle 0x891c5a
// 00891b7f  3b4e20               cmp ecx, dword ptr [esi + 0x20]
// 00891b82  7c0e                 jl 0x891b92
// 00891b84  83bc248c00000000     cmp dword ptr [esp + 0x8c], 0
// 00891b8c  0f84c8000000         je 0x891c5a
// 00891b92  6a00                 push 0
// 00891b94  2bc2                 sub eax, edx
// 00891b96  50                   push eax
// 00891b97  56                   push esi
// 00891b98  c784249800000001000000 mov dword ptr [esp + 0x98], 1
// 00891ba3  ff156ccc9800         call dword ptr [0x98cc6c]
// 00891ba9  8b06                 mov eax, dword ptr [esi]
// 00891bab  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00891bae  4f                   dec edi
// 00891baf  83ee30               sub esi, 0x30
// 00891bb2  85ff                 test edi, edi
// 00891bb4  7db2                 jge 0x891b68
// 00891bb6  33c0                 xor eax, eax
// 00891bb8  33ff                 xor edi, edi
// 00891bba  85db                 test ebx, ebx
// 00891bbc  7e33                 jle 0x891bf1
// 00891bbe  8b74243c             mov esi, dword ptr [esp + 0x3c]
// 00891bc2  8b2d6ccc9800         mov ebp, dword ptr [0x98cc6c]
// 00891bc8  83c604               add esi, 4
// 00891bcb  eb03                 jmp 0x891bd0
// 00891bcd  8d4900               lea ecx, [ecx]
// 00891bd0  85ff                 test edi, edi
// 00891bd2  7c7a                 jl 0x891c4e
// 00891bd4  3bfb                 cmp edi, ebx
// 00891bd6  7d76                 jge 0x891c4e
// 00891bd8  8b0e                 mov ecx, dword ptr [esi]
// 00891bda  3bc8                 cmp ecx, eax
// 00891bdc  7d08                 jge 0x891be6
// 00891bde  6a00                 push 0
// 00891be0  2bc1                 sub eax, ecx
// 00891be2  50                   push eax
// 00891be3  56                   push esi
// 00891be4  ffd5                 call ebp
// 00891be6  8b4608               mov eax, dword ptr [esi + 8]
// 00891be9  47                   inc edi
// 00891bea  83c630               add esi, 0x30
// 00891bed  3bfb                 cmp edi, ebx
// 00891bef  7cdf                 jl 0x891bd0
// 00891bf1  3b842498000000       cmp eax, dword ptr [esp + 0x98]
// 00891bf8  0f8e69010000         jle 0x891d67
// 00891bfe  33db                 xor ebx, ebx
// 00891c00  33ed                 xor ebp, ebp
// 00891c02  395c2440             cmp dword ptr [esp + 0x40], ebx
// 00891c06  899c248c000000       mov dword ptr [esp + 0x8c], ebx
// 00891c0d  0f8eb4000000         jle 0x891cc7
// 00891c13  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 00891c17  83c728               add edi, 0x28
// 00891c1a  8d9b00000000         lea ebx, [ebx]
// 00891c20  85db                 test ebx, ebx
// 00891c22  7c2a                 jl 0x891c4e
// 00891c24  3b5c2440             cmp ebx, dword ptr [esp + 0x40]
// 00891c28  7d24                 jge 0x891c4e
// 00891c2a  8b77d8               mov esi, dword ptr [edi - 0x28]
// 00891c2d  8b84249c000000       mov eax, dword ptr [esp + 0x9c]
// 00891c34  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00891c38  56                   push esi
// 00891c39  50                   push eax
// 00891c3a  e8f1f1ffff           call 0x890e30
// 00891c3f  84c0                 test al, al
// 00891c41  7827                 js 0x891c6a
// 00891c43  8b8c2498000000       mov ecx, dword ptr [esp + 0x98]
// 00891c4a  890f                 mov dword ptr [edi], ecx
// 00891c4c  eb5f                 jmp 0x891cad
// 00891c4e  e8b91ef6ff           call 0x7f3b0c
// 00891c53  33ed                 xor ebp, ebp
// 00891c55  e9cefeffff           jmp 0x891b28
// 00891c5a  c784248c00000000000000 mov dword ptr [esp + 0x8c], 0
// 00891c65  e93fffffff           jmp 0x891ba9
// 00891c6a  8b94249c000000       mov edx, dword ptr [esp + 0x9c]
// 00891c71  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00891c75  8b1e                 mov ebx, dword ptr [esi]
// 00891c77  6a00                 push 0
// 00891c79  56                   push esi
// 00891c7a  52                   push edx
// 00891c7b  e8b0f1ffff           call 0x890e30
// 00891c80  8b9304020000         mov edx, dword ptr [ebx + 0x204]
// 00891c86  50                   push eax
// 00891c87  6a01                 push 1
// 00891c89  8d44243c             lea eax, [esp + 0x3c]
// 00891c8d  50                   push eax
// 00891c8e  8bce                 mov ecx, esi
// 00891c90  ffd2                 call edx
// 00891c92  83bc249c00000000     cmp dword ptr [esp + 0x9c], 0
// 00891c9a  8b442430             mov eax, dword ptr [esp + 0x30]
// 00891c9e  7504                 jne 0x891ca4
// 00891ca0  8b442434             mov eax, dword ptr [esp + 0x34]
// 00891ca4  8b9c248c000000       mov ebx, dword ptr [esp + 0x8c]
// 00891cab  8907                 mov dword ptr [edi], eax
// 00891cad  896f04               mov dword ptr [edi + 4], ebp
// 00891cb0  032f                 add ebp, dword ptr [edi]
// 00891cb2  43                   inc ebx
// 00891cb3  83c730               add edi, 0x30
// 00891cb6  3b5c2440             cmp ebx, dword ptr [esp + 0x40]
// 00891cba  899c248c000000       mov dword ptr [esp + 0x8c], ebx
// 00891cc1  0f8c59ffffff         jl 0x891c20
// 00891cc7  8b7c2440             mov edi, dword ptr [esp + 0x40]
// 00891ccb  8bb42498000000       mov esi, dword ptr [esp + 0x98]
// 00891cd2  4f                   dec edi
// 00891cd3  85ff                 test edi, edi
// 00891cd5  0f8c8c000000         jl 0x891d67
// 00891cdb  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00891cdf  8d047f               lea eax, [edi + edi*2]
// 00891ce2  c1e004               shl eax, 4
// 00891ce5  8d4c0804             lea ecx, [eax + ecx + 4]
// 00891ce9  85ff                 test edi, edi
// 00891ceb  0f8c5dffffff         jl 0x891c4e
// 00891cf1  3b7c2440             cmp edi, dword ptr [esp + 0x40]
// 00891cf5  0f8d53ffffff         jge 0x891c4e
// 00891cfb  83bc249c00000000     cmp dword ptr [esp + 0x9c], 0
// 00891d03  7405                 je 0x891d0a
// 00891d05  8b4110               mov eax, dword ptr [ecx + 0x10]
// 00891d08  eb03                 jmp 0x891d0d
// 00891d0a  8b4114               mov eax, dword ptr [ecx + 0x14]
// 00891d0d  8b11                 mov edx, dword ptr [ecx]
// 00891d0f  3bc2                 cmp eax, edx
// 00891d11  7e02                 jle 0x891d15
// 00891d13  8bc2                 mov eax, edx
// 00891d15  2b5108               sub edx, dword ptr [ecx + 8]
// 00891d18  03d6                 add edx, esi
// 00891d1a  3bc2                 cmp eax, edx
// 00891d1c  7d02                 jge 0x891d20
// 00891d1e  8bc2                 mov eax, edx
// 00891d20  8b5928               mov ebx, dword ptr [ecx + 0x28]
// 00891d23  3bc3                 cmp eax, ebx
// 00891d25  7d02                 jge 0x891d29
// 00891d27  8bc3                 mov eax, ebx
// 00891d29  8b5124               mov edx, dword ptr [ecx + 0x24]
// 00891d2c  8bee                 mov ebp, esi
// 00891d2e  2be8                 sub ebp, eax
// 00891d30  3bea                 cmp ebp, edx
// 00891d32  7d04                 jge 0x891d38
// 00891d34  8bc6                 mov eax, esi
// 00891d36  2bc2                 sub eax, edx
// 00891d38  8bee                 mov ebp, esi
// 00891d3a  2be8                 sub ebp, eax
// 00891d3c  3bea                 cmp ebp, edx
// 00891d3e  7c04                 jl 0x891d44
// 00891d40  3bc3                 cmp eax, ebx
// 00891d42  7d09                 jge 0x891d4d
// 00891d44  8b542440             mov edx, dword ptr [esp + 0x40]
// 00891d48  83fa01               cmp edx, 1
// 00891d4b  757b                 jne 0x891dc8
// 00891d4d  33d2                 xor edx, edx
// 00891d4f  85c0                 test eax, eax
// 00891d51  0f9cc2               setl dl
// 00891d54  897108               mov dword ptr [ecx + 8], esi
// 00891d57  4f                   dec edi
// 00891d58  83e930               sub ecx, 0x30
// 00891d5b  4a                   dec edx
// 00891d5c  23c2                 and eax, edx
// 00891d5e  894130               mov dword ptr [ecx + 0x30], eax
// 00891d61  8bf0                 mov esi, eax
// 00891d63  85ff                 test edi, edi
// 00891d65  7d8a                 jge 0x891cf1
// 00891d67  83bc249c00000000     cmp dword ptr [esp + 0x9c], 0
// 00891d6f  7509                 jne 0x891d7a
// 00891d71  8d4c2438             lea ecx, [esp + 0x38]
// 00891d75  e866f3ffff           call 0x8910e0
// 00891d7a  33c9                 xor ecx, ecx
// 00891d7c  33f6                 xor esi, esi
// 00891d7e  394c2440             cmp dword ptr [esp + 0x40], ecx
// 00891d82  89b424a4000000       mov dword ptr [esp + 0xa4], esi
// 00891d89  898c248c000000       mov dword ptr [esp + 0x8c], ecx
// 00891d90  0f8ef1000000         jle 0x891e87
// 00891d96  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00891d9a  83c010               add eax, 0x10
// 00891d9d  89442418             mov dword ptr [esp + 0x18], eax
// 00891da1  85c9                 test ecx, ecx
// 00891da3  0f8ca5feffff         jl 0x891c4e
// 00891da9  3b4c2440             cmp ecx, dword ptr [esp + 0x40]
// 00891dad  0f8d9bfeffff         jge 0x891c4e
// 00891db3  83bc249c00000000     cmp dword ptr [esp + 0x9c], 0
// 00891dbb  8b70f0               mov esi, dword ptr [eax - 0x10]
// 00891dbe  744d                 je 0x891e0d
// 00891dc0  8b78fc               mov edi, dword ptr [eax - 4]
// 00891dc3  2b78f4               sub edi, dword ptr [eax - 0xc]
// 00891dc6  eb4a                 jmp 0x891e12
// 00891dc8  8d42ff               lea eax, [edx - 1]
// 00891dcb  85c0                 test eax, eax
// 00891dcd  0f8c7bfeffff         jl 0x891c4e
// 00891dd3  3bc2                 cmp eax, edx
// 00891dd5  0f8d73feffff         jge 0x891c4e
// 00891ddb  8b8c24a4000000       mov ecx, dword ptr [esp + 0xa4]
// 00891de2  8d0440               lea eax, [eax + eax*2]
// 00891de5  c1e004               shl eax, 4
// 00891de8  0344243c             add eax, dword ptr [esp + 0x3c]
// 00891dec  c7842484000000ffffffff mov dword ptr [esp + 0x84], 0xffffffff
// 00891df7  8b4024               mov eax, dword ptr [eax + 0x24]
// 00891dfa  8901                 mov dword ptr [ecx], eax
// 00891dfc  8d4c2438             lea ecx, [esp + 0x38]
// 00891e00  e87bf3ffff           call 0x891180
// 00891e05  83c8ff               or eax, 0xffffffff
// 00891e08  e9e5020000           jmp 0x8920f2
// 00891e0d  8b38                 mov edi, dword ptr [eax]
// 00891e0f  2b78f8               sub edi, dword ptr [eax - 8]
// 00891e12  8bac249c000000       mov ebp, dword ptr [esp + 0x9c]
// 00891e19  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00891e1d  8b1e                 mov ebx, dword ptr [esi]
// 00891e1f  6a00                 push 0
// 00891e21  56                   push esi
// 00891e22  55                   push ebp
// 00891e23  e808f0ffff           call 0x890e30
// 00891e28  50                   push eax
// 00891e29  8b8304020000         mov eax, dword ptr [ebx + 0x204]
// 00891e2f  57                   push edi
// 00891e30  8d54243c             lea edx, [esp + 0x3c]
// 00891e34  52                   push edx
// 00891e35  8bce                 mov ecx, esi
// 00891e37  ffd0                 call eax
// 00891e39  8b542434             mov edx, dword ptr [esp + 0x34]
// 00891e3d  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00891e41  8bc2                 mov eax, edx
// 00891e43  85ed                 test ebp, ebp
// 00891e45  7502                 jne 0x891e49
// 00891e47  8bc1                 mov eax, ecx
// 00891e49  8bb424a4000000       mov esi, dword ptr [esp + 0xa4]
// 00891e50  3bf0                 cmp esi, eax
// 00891e52  7f0f                 jg 0x891e63
// 00891e54  8bf2                 mov esi, edx
// 00891e56  85ed                 test ebp, ebp
// 00891e58  7502                 jne 0x891e5c
// 00891e5a  8bf1                 mov esi, ecx
// 00891e5c  89b424a4000000       mov dword ptr [esp + 0xa4], esi
// 00891e63  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 00891e6a  8b442418             mov eax, dword ptr [esp + 0x18]
// 00891e6e  41                   inc ecx
// 00891e6f  83c030               add eax, 0x30
// 00891e72  3b4c2440             cmp ecx, dword ptr [esp + 0x40]
// 00891e76  898c248c000000       mov dword ptr [esp + 0x8c], ecx
// 00891e7d  89442418             mov dword ptr [esp + 0x18], eax
// 00891e81  0f8c1affffff         jl 0x891da1
// 00891e87  8b8c24a0000000       mov ecx, dword ptr [esp + 0xa0]
// 00891e8e  833900               cmp dword ptr [ecx], 0
// 00891e91  0f8445020000         je 0x8920dc
// 00891e97  33ed                 xor ebp, ebp
// 00891e99  396c2440             cmp dword ptr [esp + 0x40], ebp
// 00891e9d  0f8e39020000         jle 0x8920dc
// 00891ea3  85ed                 test ebp, ebp
// 00891ea5  0f8ca3fdffff         jl 0x891c4e
// 00891eab  3b6c2440             cmp ebp, dword ptr [esp + 0x40]
// 00891eaf  0f8d99fdffff         jge 0x891c4e
// 00891eb5  8b5c243c             mov ebx, dword ptr [esp + 0x3c]
// 00891eb9  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00891ebd  8d546d00             lea edx, [ebp + ebp*2]
// 00891ec1  c1e204               shl edx, 4
// 00891ec4  8b3c1a               mov edi, dword ptr [edx + ebx]
// 00891ec7  8d041a               lea eax, [edx + ebx]
// 00891eca  8d7004               lea esi, [eax + 4]
// 00891ecd  8b84249c000000       mov eax, dword ptr [esp + 0x9c]
// 00891ed4  57                   push edi
// 00891ed5  50                   push eax
// 00891ed6  e855efffff           call 0x890e30
// 00891edb  83c840               or eax, 0x40
// 00891ede  f787ec00000000001000 test dword ptr [edi + 0xec], 0x100000
// 00891ee8  8984248c000000       mov dword ptr [esp + 0x8c], eax
// 00891eef  0f8424010000         je 0x892019
// 00891ef5  83bc249c00000000     cmp dword ptr [esp + 0x9c], 0
// 00891efd  8b542440             mov edx, dword ptr [esp + 0x40]
// 00891f01  8d42ff               lea eax, [edx - 1]
// 00891f04  0f848a000000         je 0x891f94
// 00891f0a  3be8                 cmp ebp, eax
// 00891f0c  7509                 jne 0x891f17
// 00891f0e  8b8c2498000000       mov ecx, dword ptr [esp + 0x98]
// 00891f15  eb1e                 jmp 0x891f35
// 00891f17  8d4d01               lea ecx, [ebp + 1]
// 00891f1a  85c9                 test ecx, ecx
// 00891f1c  0f8c2cfdffff         jl 0x891c4e
// 00891f22  3bca                 cmp ecx, edx
// 00891f24  0f8d24fdffff         jge 0x891c4e
// 00891f2a  8d0c49               lea ecx, [ecx + ecx*2]
// 00891f2d  c1e104               shl ecx, 4
// 00891f30  03cb                 add ecx, ebx
// 00891f32  8b4904               mov ecx, dword ptr [ecx + 4]
// 00891f35  894e08               mov dword ptr [esi + 8], ecx
// 00891f38  85ed                 test ebp, ebp
// 00891f3a  7509                 jne 0x891f45
// 00891f3c  33c9                 xor ecx, ecx
// 00891f3e  890e                 mov dword ptr [esi], ecx
// 00891f40  e9cc000000           jmp 0x892011
// 00891f45  8d4dff               lea ecx, [ebp - 1]
// 00891f48  85c9                 test ecx, ecx
// 00891f4a  0f8cfefcffff         jl 0x891c4e
// 00891f50  3bca                 cmp ecx, edx
// 00891f52  0f8df6fcffff         jge 0x891c4e
// 00891f58  8b06                 mov eax, dword ptr [esi]
// 00891f5a  8d1449               lea edx, [ecx + ecx*2]
// 00891f5d  c1e204               shl edx, 4
// 00891f60  03d3                 add edx, ebx
// 00891f62  39420c               cmp dword ptr [edx + 0xc], eax
// 00891f65  7d24                 jge 0x891f8b
// 00891f67  85c9                 test ecx, ecx
// 00891f69  0f8cdffcffff         jl 0x891c4e
// 00891f6f  3b4c2440             cmp ecx, dword ptr [esp + 0x40]
// 00891f73  0f8dd5fcffff         jge 0x891c4e
// 00891f79  8d0c49               lea ecx, [ecx + ecx*2]
// 00891f7c  c1e104               shl ecx, 4
// 00891f7f  03cb                 add ecx, ebx
// 00891f81  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 00891f84  890e                 mov dword ptr [esi], ecx
// 00891f86  e986000000           jmp 0x892011
// 00891f8b  8bc8                 mov ecx, eax
// 00891f8d  890e                 mov dword ptr [esi], ecx
// 00891f8f  e97d000000           jmp 0x892011
// 00891f94  3be8                 cmp ebp, eax
// 00891f96  7509                 jne 0x891fa1
// 00891f98  8b8c2498000000       mov ecx, dword ptr [esp + 0x98]
// 00891f9f  eb1e                 jmp 0x891fbf
// 00891fa1  8d4d01               lea ecx, [ebp + 1]
// 00891fa4  85c9                 test ecx, ecx
// 00891fa6  0f8ca2fcffff         jl 0x891c4e
// 00891fac  3bca                 cmp ecx, edx
// 00891fae  0f8d9afcffff         jge 0x891c4e
// 00891fb4  8d0c49               lea ecx, [ecx + ecx*2]
// 00891fb7  c1e104               shl ecx, 4
// 00891fba  03cb                 add ecx, ebx
// 00891fbc  8b4908               mov ecx, dword ptr [ecx + 8]
// 00891fbf  894e0c               mov dword ptr [esi + 0xc], ecx
// 00891fc2  85ed                 test ebp, ebp
// 00891fc4  7504                 jne 0x891fca
// 00891fc6  33c9                 xor ecx, ecx
// 00891fc8  eb44                 jmp 0x89200e
// 00891fca  8d4dff               lea ecx, [ebp - 1]
// 00891fcd  85c9                 test ecx, ecx
// 00891fcf  0f8c79fcffff         jl 0x891c4e
// 00891fd5  3bca                 cmp ecx, edx
// 00891fd7  0f8d71fcffff         jge 0x891c4e
// 00891fdd  8b4604               mov eax, dword ptr [esi + 4]
// 00891fe0  8d1449               lea edx, [ecx + ecx*2]
// 00891fe3  c1e204               shl edx, 4
// 00891fe6  03d3                 add edx, ebx
// 00891fe8  394210               cmp dword ptr [edx + 0x10], eax
// 00891feb  7d1f                 jge 0x89200c
// 00891fed  85c9                 test ecx, ecx
// 00891fef  0f8c59fcffff         jl 0x891c4e
// 00891ff5  3b4c2440             cmp ecx, dword ptr [esp + 0x40]
// 00891ff9  0f8d4ffcffff         jge 0x891c4e
// 00891fff  8d0c49               lea ecx, [ecx + ecx*2]
// 00892002  c1e104               shl ecx, 4
// 00892005  03cb                 add ecx, ebx
// 00892007  8b4910               mov ecx, dword ptr [ecx + 0x10]
// 0089200a  eb02                 jmp 0x89200e
// 0089200c  8bc8                 mov ecx, eax
// 0089200e  894e04               mov dword ptr [esi + 4], ecx
// 00892011  838c248c00000001     or dword ptr [esp + 0x8c], 1
// 00892019  83bc249c00000000     cmp dword ptr [esp + 0x9c], 0
// 00892021  7407                 je 0x89202a
// 00892023  8b4e08               mov ecx, dword ptr [esi + 8]
// 00892026  2b0e                 sub ecx, dword ptr [esi]
// 00892028  eb06                 jmp 0x892030
// 0089202a  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0089202d  2b4e04               sub ecx, dword ptr [esi + 4]
// 00892030  8b8424a4000000       mov eax, dword ptr [esp + 0xa4]
// 00892037  8b17                 mov edx, dword ptr [edi]
// 00892039  8b9204020000         mov edx, dword ptr [edx + 0x204]
// 0089203f  50                   push eax
// 00892040  8b842490000000       mov eax, dword ptr [esp + 0x90]
// 00892047  50                   push eax
// 00892048  51                   push ecx
// 00892049  8d4c243c             lea ecx, [esp + 0x3c]
// 0089204d  51                   push ecx
// 0089204e  8bcf                 mov ecx, edi
// 00892050  ffd2                 call edx
// 00892052  8b06                 mov eax, dword ptr [esi]
// 00892054  8b4e04               mov ecx, dword ptr [esi + 4]
// 00892057  8b542430             mov edx, dword ptr [esp + 0x30]
// 0089205b  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 0089205f  8906                 mov dword ptr [esi], eax
// 00892061  894e04               mov dword ptr [esi + 4], ecx
// 00892064  03d0                 add edx, eax
// 00892066  03d9                 add ebx, ecx
// 00892068  895608               mov dword ptr [esi + 8], edx
// 0089206b  895e0c               mov dword ptr [esi + 0xc], ebx
// 0089206e  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 00892072  8bcb                 mov ecx, ebx
// 00892074  e8d7eeffff           call 0x890f50
// 00892079  8b8f84010000         mov ecx, dword ptr [edi + 0x184]
// 0089207f  894114               mov dword ptr [ecx + 0x14], eax
// 00892082  57                   push edi
// 00892083  8d4c2424             lea ecx, [esp + 0x24]
// 00892087  e8e491fbff           call 0x84b270
// 0089208c  8d542420             lea edx, [esp + 0x20]
// 00892090  52                   push edx
// 00892091  8bcb                 mov ecx, ebx
// 00892093  e84027f6ff           call 0x7f47d8
// 00892098  56                   push esi
// 00892099  8d442424             lea eax, [esp + 0x24]
// 0089209d  50                   push eax
// 0089209e  ff15bcca9800         call dword ptr [0x98cabc]
// 008920a4  85c0                 test eax, eax
// 008920a6  7522                 jne 0x8920ca
// 008920a8  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 008920ab  8b9424a0000000       mov edx, dword ptr [esp + 0xa0]
// 008920b2  56                   push esi
// 008920b3  51                   push ecx
// 008920b4  52                   push edx
// 008920b5  e808450900           call 0x9265c2
// 008920ba  8b07                 mov eax, dword ptr [edi]
// 008920bc  8b90ac010000         mov edx, dword ptr [eax + 0x1ac]
// 008920c2  6a01                 push 1
// 008920c4  6a00                 push 0
// 008920c6  8bcf                 mov ecx, edi
// 008920c8  ffd2                 call edx
// 008920ca  45                   inc ebp
// 008920cb  3b6c2440             cmp ebp, dword ptr [esp + 0x40]
// 008920cf  0f8ccefdffff         jl 0x891ea3
// 008920d5  8bb424a4000000       mov esi, dword ptr [esp + 0xa4]
// 008920dc  8d4c2438             lea ecx, [esp + 0x38]
// 008920e0  c7842484000000ffffffff mov dword ptr [esp + 0x84], 0xffffffff
// 008920eb  e890f0ffff           call 0x891180
// 008920f0  8bc6                 mov eax, esi
// 008920f2  8b4c247c             mov ecx, dword ptr [esp + 0x7c]
// 008920f6  64890d00000000       mov dword ptr fs:[0], ecx
// 008920fd  59                   pop ecx
// 008920fe  5f                   pop edi
// 008920ff  5e                   pop esi
// 00892100  5d                   pop ebp
// 00892101  5b                   pop ebx
// 00892102  83c474               add esp, 0x74
// 00892105  c21c00               ret 0x1c
// copied from an identical function in another client (function ?_AdjustRow@CXTPDockBar@@IAEHAAV?$CArray@PAVCXTPToolBar@@PAV1@@@VCPoint@@HHPAUAFX_SIZEPARENTPARAMS@@AAH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\CommandBars\XTPDockBar.cpp