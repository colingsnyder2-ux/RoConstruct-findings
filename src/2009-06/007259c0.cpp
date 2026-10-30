// roc 2009-06 007259c0  unit: CXTPPaintManager  size: 1809 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007259c0
//
// 007259c0  6aff                 push -1
// 007259c2  6810508700           push 0x875010
// 007259c7  64a100000000         mov eax, dword ptr fs:[0]
// 007259cd  50                   push eax
// 007259ce  83ec4c               sub esp, 0x4c
// 007259d1  53                   push ebx
// 007259d2  55                   push ebp
// 007259d3  56                   push esi
// 007259d4  57                   push edi
// 007259d5  a1304fa200           mov eax, dword ptr [0xa24f30]
// 007259da  33c4                 xor eax, esp
// 007259dc  50                   push eax
// 007259dd  8d442460             lea eax, [esp + 0x60]
// 007259e1  64a300000000         mov dword ptr fs:[0], eax
// 007259e7  8bf9                 mov edi, ecx
// 007259e9  8b442478             mov eax, dword ptr [esp + 0x78]
// 007259ed  85c0                 test eax, eax
// 007259ef  0f85a8030000         jne 0x725d9d
// 007259f5  39842484000000       cmp dword ptr [esp + 0x84], eax
// 007259fc  0f8588000000         jne 0x725a8a
// 00725a02  8b942480000000       mov edx, dword ptr [esp + 0x80]
// 00725a09  8b8c2488000000       mov ecx, dword ptr [esp + 0x88]
// 00725a10  8b9200010000         mov edx, dword ptr [edx + 0x100]
// 00725a16  8b01                 mov eax, dword ptr [ecx]
// 00725a18  8b4904               mov ecx, dword ptr [ecx + 4]
// 00725a1b  83fa02               cmp edx, 2
// 00725a1e  743a                 je 0x725a5a
// 00725a20  83fa03               cmp edx, 3
// 00725a23  7435                 je 0x725a5a
// 00725a25  83fa05               cmp edx, 5
// 00725a28  7430                 je 0x725a5a
// 00725a2a  8b5c247c             mov ebx, dword ptr [esp + 0x7c]
// 00725a2e  8b2b                 mov ebp, dword ptr [ebx]
// 00725a30  8d50f3               lea edx, [eax - 0xd]
// 00725a33  8d78fe               lea edi, [eax - 2]
// 00725a36  83ec10               sub esp, 0x10
// 00725a39  8bc4                 mov eax, esp
// 00725a3b  8910                 mov dword ptr [eax], edx
// 00725a3d  be02000000           mov esi, 2
// 00725a42  897004               mov dword ptr [eax + 4], esi
// 00725a45  83c1fe               add ecx, -2
// 00725a48  897808               mov dword ptr [eax + 8], edi
// 00725a4b  89480c               mov dword ptr [eax + 0xc], ecx
// 00725a4e  8b457c               mov eax, dword ptr [ebp + 0x7c]
// 00725a51  8bcb                 mov ecx, ebx
// 00725a53  ffd0                 call eax
// 00725a55  e9e3010000           jmp 0x725c3d
// 00725a5a  8b5c247c             mov ebx, dword ptr [esp + 0x7c]
// 00725a5e  8b2b                 mov ebp, dword ptr [ebx]
// 00725a60  8d78fe               lea edi, [eax - 2]
// 00725a63  83ec10               sub esp, 0x10
// 00725a66  8bc4                 mov eax, esp
// 00725a68  8d71f3               lea esi, [ecx - 0xd]
// 00725a6b  ba02000000           mov edx, 2
// 00725a70  8910                 mov dword ptr [eax], edx
// 00725a72  8b557c               mov edx, dword ptr [ebp + 0x7c]
// 00725a75  83c1fe               add ecx, -2
// 00725a78  897004               mov dword ptr [eax + 4], esi
// 00725a7b  897808               mov dword ptr [eax + 8], edi
// 00725a7e  89480c               mov dword ptr [eax + 0xc], ecx
// 00725a81  8bcb                 mov ecx, ebx
// 00725a83  ffd2                 call edx
// 00725a85  e9b3010000           jmp 0x725c3d
// 00725a8a  8b6c247c             mov ebp, dword ptr [esp + 0x7c]
// 00725a8e  8b07                 mov eax, dword ptr [edi]
// 00725a90  8b742474             mov esi, dword ptr [esp + 0x74]
// 00725a94  8b5078               mov edx, dword ptr [eax + 0x78]
// 00725a97  55                   push ebp
// 00725a98  56                   push esi
// 00725a99  ffd2                 call edx
// 00725a9b  8b07                 mov eax, dword ptr [edi]
// 00725a9d  8b507c               mov edx, dword ptr [eax + 0x7c]
// 00725aa0  55                   push ebp
// 00725aa1  8bcf                 mov ecx, edi
// 00725aa3  ffd2                 call edx
// 00725aa5  8bbdc0000000         mov edi, dword ptr [ebp + 0xc0]
// 00725aab  8b9dc4000000         mov ebx, dword ptr [ebp + 0xc4]
// 00725ab1  8bc8                 mov ecx, eax
// 00725ab3  8b842488000000       mov eax, dword ptr [esp + 0x88]
// 00725aba  8b10                 mov edx, dword ptr [eax]
// 00725abc  8b85c8000000         mov eax, dword ptr [ebp + 0xc8]
// 00725ac2  8badcc000000         mov ebp, dword ptr [ebp + 0xcc]
// 00725ac8  8954247c             mov dword ptr [esp + 0x7c], edx
// 00725acc  8b942480000000       mov edx, dword ptr [esp + 0x80]
// 00725ad3  8b9200010000         mov edx, dword ptr [edx + 0x100]
// 00725ad9  894c2474             mov dword ptr [esp + 0x74], ecx
// 00725add  8944242c             mov dword ptr [esp + 0x2c], eax
// 00725ae1  83fa02               cmp edx, 2
// 00725ae4  0f847a010000         je 0x725c64
// 00725aea  83fa03               cmp edx, 3
// 00725aed  0f8471010000         je 0x725c64
// 00725af3  83fa05               cmp edx, 5
// 00725af6  0f8468010000         je 0x725c64
// 00725afc  2bc7                 sub eax, edi
// 00725afe  99                   cdq 
// 00725aff  2bc2                 sub eax, edx
// 00725b01  51                   push ecx
// 00725b02  8d55fb               lea edx, [ebp - 5]
// 00725b05  d1f8                 sar eax, 1
// 00725b07  03c7                 add eax, edi
// 00725b09  8994248c000000       mov dword ptr [esp + 0x8c], edx
// 00725b10  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 00725b17  51                   push ecx
// 00725b18  8d55f9               lea edx, [ebp - 7]
// 00725b1b  50                   push eax
// 00725b1c  8d6802               lea ebp, [eax + 2]
// 00725b1f  52                   push edx
// 00725b20  896c2424             mov dword ptr [esp + 0x24], ebp
// 00725b24  8d68fe               lea ebp, [eax - 2]
// 00725b27  8b442424             mov eax, dword ptr [esp + 0x24]
// 00725b2b  50                   push eax
// 00725b2c  52                   push edx
// 00725b2d  55                   push ebp
// 00725b2e  56                   push esi
// 00725b2f  e87cb80400           call 0x7713b0
// 00725b34  83c420               add esp, 0x20
// 00725b37  837c247c00           cmp dword ptr [esp + 0x7c], 0
// 00725b3c  0f84fb000000         je 0x725c3d
// 00725b42  85f6                 test esi, esi
// 00725b44  7504                 jne 0x725b4a
// 00725b46  33c0                 xor eax, eax
// 00725b48  eb03                 jmp 0x725b4d
// 00725b4a  8b4604               mov eax, dword ptr [esi + 4]
// 00725b4d  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 00725b51  51                   push ecx
// 00725b52  50                   push eax
// 00725b53  8d4c242c             lea ecx, [esp + 0x2c]
// 00725b57  e8a4ad0400           call 0x770900
// 00725b5c  8d6b04               lea ebp, [ebx + 4]
// 00725b5f  55                   push ebp
// 00725b60  8d4702               lea eax, [edi + 2]
// 00725b63  50                   push eax
// 00725b64  8d54241c             lea edx, [esp + 0x1c]
// 00725b68  52                   push edx
// 00725b69  8bce                 mov ecx, esi
// 00725b6b  c744247400000000     mov dword ptr [esp + 0x74], 0
// 00725b73  e8963dffff           call 0x71990e
// 00725b78  8d4306               lea eax, [ebx + 6]
// 00725b7b  50                   push eax
// 00725b7c  89842480000000       mov dword ptr [esp + 0x80], eax
// 00725b83  8d4704               lea eax, [edi + 4]
// 00725b86  50                   push eax
// 00725b87  8bce                 mov ecx, esi
// 00725b89  e87a3dffff           call 0x719908
// 00725b8e  83c309               add ebx, 9
// 00725b91  53                   push ebx
// 00725b92  8d4f01               lea ecx, [edi + 1]
// 00725b95  51                   push ecx
// 00725b96  8bce                 mov ecx, esi
// 00725b98  e86b3dffff           call 0x719908
// 00725b9d  55                   push ebp
// 00725b9e  8d5703               lea edx, [edi + 3]
// 00725ba1  52                   push edx
// 00725ba2  8d44241c             lea eax, [esp + 0x1c]
// 00725ba6  50                   push eax
// 00725ba7  8bce                 mov ecx, esi
// 00725ba9  e8603dffff           call 0x71990e
// 00725bae  8b4c247c             mov ecx, dword ptr [esp + 0x7c]
// 00725bb2  51                   push ecx
// 00725bb3  8d4705               lea eax, [edi + 5]
// 00725bb6  50                   push eax
// 00725bb7  8bce                 mov ecx, esi
// 00725bb9  e84a3dffff           call 0x719908
// 00725bbe  53                   push ebx
// 00725bbf  8d4702               lea eax, [edi + 2]
// 00725bc2  50                   push eax
// 00725bc3  8bce                 mov ecx, esi
// 00725bc5  e83e3dffff           call 0x719908
// 00725bca  8d4706               lea eax, [edi + 6]
// 00725bcd  55                   push ebp
// 00725bce  50                   push eax
// 00725bcf  8d54241c             lea edx, [esp + 0x1c]
// 00725bd3  52                   push edx
// 00725bd4  8bce                 mov ecx, esi
// 00725bd6  89842480000000       mov dword ptr [esp + 0x80], eax
// 00725bdd  e82c3dffff           call 0x71990e
// 00725be2  8b44247c             mov eax, dword ptr [esp + 0x7c]
// 00725be6  50                   push eax
// 00725be7  8d4f08               lea ecx, [edi + 8]
// 00725bea  51                   push ecx
// 00725beb  8bce                 mov ecx, esi
// 00725bed  e8163dffff           call 0x719908
// 00725bf2  53                   push ebx
// 00725bf3  8d4705               lea eax, [edi + 5]
// 00725bf6  50                   push eax
// 00725bf7  8bce                 mov ecx, esi
// 00725bf9  e80a3dffff           call 0x719908
// 00725bfe  55                   push ebp
// 00725bff  8d5707               lea edx, [edi + 7]
// 00725c02  52                   push edx
// 00725c03  8d44241c             lea eax, [esp + 0x1c]
// 00725c07  50                   push eax
// 00725c08  8bce                 mov ecx, esi
// 00725c0a  e8ff3cffff           call 0x71990e
// 00725c0f  8b4c247c             mov ecx, dword ptr [esp + 0x7c]
// 00725c13  51                   push ecx
// 00725c14  83c709               add edi, 9
// 00725c17  57                   push edi
// 00725c18  8bce                 mov ecx, esi
// 00725c1a  e8e93cffff           call 0x719908
// 00725c1f  8b542474             mov edx, dword ptr [esp + 0x74]
// 00725c23  53                   push ebx
// 00725c24  52                   push edx
// 00725c25  8bce                 mov ecx, esi
// 00725c27  e8dc3cffff           call 0x719908
// 00725c2c  c7442468ffffffff     mov dword ptr [esp + 0x68], 0xffffffff
// 00725c34  8d4c2424             lea ecx, [esp + 0x24]
// 00725c38  e853ad0400           call 0x770990
// 00725c3d  8b442470             mov eax, dword ptr [esp + 0x70]
// 00725c41  c7400400000000       mov dword ptr [eax + 4], 0
// 00725c48  c70000000000         mov dword ptr [eax], 0
// 00725c4e  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 00725c52  64890d00000000       mov dword ptr fs:[0], ecx
// 00725c59  59                   pop ecx
// 00725c5a  5f                   pop edi
// 00725c5b  5e                   pop esi
// 00725c5c  5d                   pop ebp
// 00725c5d  5b                   pop ebx
// 00725c5e  83c458               add esp, 0x58
// 00725c61  c21c00               ret 0x1c
// 00725c64  51                   push ecx
// 00725c65  8d6b05               lea ebp, [ebx + 5]
// 00725c68  55                   push ebp
// 00725c69  83c704               add edi, 4
// 00725c6c  57                   push edi
// 00725c6d  8d4d02               lea ecx, [ebp + 2]
// 00725c70  51                   push ecx
// 00725c71  8d4702               lea eax, [edi + 2]
// 00725c74  50                   push eax
// 00725c75  8d55fe               lea edx, [ebp - 2]
// 00725c78  52                   push edx
// 00725c79  50                   push eax
// 00725c7a  56                   push esi
// 00725c7b  e830b70400           call 0x7713b0
// 00725c80  83c420               add esp, 0x20
// 00725c83  837c247c00           cmp dword ptr [esp + 0x7c], 0
// 00725c88  74b3                 je 0x725c3d
// 00725c8a  85f6                 test esi, esi
// 00725c8c  7504                 jne 0x725c92
// 00725c8e  33c0                 xor eax, eax
// 00725c90  eb03                 jmp 0x725c95
// 00725c92  8b4604               mov eax, dword ptr [esi + 4]
// 00725c95  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 00725c99  51                   push ecx
// 00725c9a  50                   push eax
// 00725c9b  8d4c2440             lea ecx, [esp + 0x40]
// 00725c9f  e85cac0400           call 0x770900
// 00725ca4  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 00725ca8  8d4302               lea eax, [ebx + 2]
// 00725cab  50                   push eax
// 00725cac  83c7f8               add edi, -8
// 00725caf  57                   push edi
// 00725cb0  8d54241c             lea edx, [esp + 0x1c]
// 00725cb4  52                   push edx
// 00725cb5  8bce                 mov ecx, esi
// 00725cb7  c744247401000000     mov dword ptr [esp + 0x74], 1
// 00725cbf  e84a3cffff           call 0x71990e
// 00725cc4  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00725cc8  8d4b04               lea ecx, [ebx + 4]
// 00725ccb  83c0fa               add eax, -6
// 00725cce  51                   push ecx
// 00725ccf  50                   push eax
// 00725cd0  8bce                 mov ecx, esi
// 00725cd2  8944247c             mov dword ptr [esp + 0x7c], eax
// 00725cd6  e82d3cffff           call 0x719908
// 00725cdb  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00725cdf  8d5301               lea edx, [ebx + 1]
// 00725ce2  83c0fd               add eax, -3
// 00725ce5  52                   push edx
// 00725ce6  50                   push eax
// 00725ce7  8bce                 mov ecx, esi
// 00725ce9  89842490000000       mov dword ptr [esp + 0x90], eax
// 00725cf0  e8133cffff           call 0x719908
// 00725cf5  8d4303               lea eax, [ebx + 3]
// 00725cf8  50                   push eax
// 00725cf9  57                   push edi
// 00725cfa  8d4c241c             lea ecx, [esp + 0x1c]
// 00725cfe  51                   push ecx
// 00725cff  8bce                 mov ecx, esi
// 00725d01  e8083cffff           call 0x71990e
// 00725d06  8b542474             mov edx, dword ptr [esp + 0x74]
// 00725d0a  55                   push ebp
// 00725d0b  52                   push edx
// 00725d0c  8bce                 mov ecx, esi
// 00725d0e  e8f53bffff           call 0x719908
// 00725d13  8d4302               lea eax, [ebx + 2]
// 00725d16  50                   push eax
// 00725d17  8b84248c000000       mov eax, dword ptr [esp + 0x8c]
// 00725d1e  50                   push eax
// 00725d1f  8bce                 mov ecx, esi
// 00725d21  e8e23bffff           call 0x719908
// 00725d26  8d4306               lea eax, [ebx + 6]
// 00725d29  50                   push eax
// 00725d2a  57                   push edi
// 00725d2b  8d4c241c             lea ecx, [esp + 0x1c]
// 00725d2f  51                   push ecx
// 00725d30  8bce                 mov ecx, esi
// 00725d32  89842488000000       mov dword ptr [esp + 0x88], eax
// 00725d39  e8d03bffff           call 0x71990e
// 00725d3e  8b442474             mov eax, dword ptr [esp + 0x74]
// 00725d42  8d5308               lea edx, [ebx + 8]
// 00725d45  52                   push edx
// 00725d46  50                   push eax
// 00725d47  8bce                 mov ecx, esi
// 00725d49  e8ba3bffff           call 0x719908
// 00725d4e  55                   push ebp
// 00725d4f  8bac248c000000       mov ebp, dword ptr [esp + 0x8c]
// 00725d56  55                   push ebp
// 00725d57  8bce                 mov ecx, esi
// 00725d59  e8aa3bffff           call 0x719908
// 00725d5e  8d4b07               lea ecx, [ebx + 7]
// 00725d61  51                   push ecx
// 00725d62  57                   push edi
// 00725d63  8d54241c             lea edx, [esp + 0x1c]
// 00725d67  52                   push edx
// 00725d68  8bce                 mov ecx, esi
// 00725d6a  e89f3bffff           call 0x71990e
// 00725d6f  8b442474             mov eax, dword ptr [esp + 0x74]
// 00725d73  83c309               add ebx, 9
// 00725d76  53                   push ebx
// 00725d77  50                   push eax
// 00725d78  8bce                 mov ecx, esi
// 00725d7a  e8893bffff           call 0x719908
// 00725d7f  8b4c247c             mov ecx, dword ptr [esp + 0x7c]
// 00725d83  51                   push ecx
// 00725d84  55                   push ebp
// 00725d85  8bce                 mov ecx, esi
// 00725d87  e87c3bffff           call 0x719908
// 00725d8c  c7442468ffffffff     mov dword ptr [esp + 0x68], 0xffffffff
// 00725d94  8d4c2438             lea ecx, [esp + 0x38]
// 00725d98  e99bfeffff           jmp 0x725c38
// 00725d9d  83f803               cmp eax, 3
// 00725da0  0f85b6000000         jne 0x725e5c
// 00725da6  8b74247c             mov esi, dword ptr [esp + 0x7c]
// 00725daa  8b17                 mov edx, dword ptr [edi]
// 00725dac  8b442474             mov eax, dword ptr [esp + 0x74]
// 00725db0  8b5278               mov edx, dword ptr [edx + 0x78]
// 00725db3  56                   push esi
// 00725db4  50                   push eax
// 00725db5  ffd2                 call edx
// 00725db7  8b86c8000000         mov eax, dword ptr [esi + 0xc8]
// 00725dbd  8b8ecc000000         mov ecx, dword ptr [esi + 0xcc]
// 00725dc3  8b17                 mov edx, dword ptr [edi]
// 00725dc5  8b9ec0000000         mov ebx, dword ptr [esi + 0xc0]
// 00725dcb  8baec4000000         mov ebp, dword ptr [esi + 0xc4]
// 00725dd1  8944242c             mov dword ptr [esp + 0x2c], eax
// 00725dd5  8b427c               mov eax, dword ptr [edx + 0x7c]
// 00725dd8  894c2430             mov dword ptr [esp + 0x30], ecx
// 00725ddc  56                   push esi
// 00725ddd  8bcf                 mov ecx, edi
// 00725ddf  ffd0                 call eax
// 00725de1  8b16                 mov edx, dword ptr [esi]
// 00725de3  8944247c             mov dword ptr [esp + 0x7c], eax
// 00725de7  8b426c               mov eax, dword ptr [edx + 0x6c]
// 00725dea  8bce                 mov ecx, esi
// 00725dec  ffd0                 call eax
// 00725dee  85c0                 test eax, eax
// 00725df0  7525                 jne 0x725e17
// 00725df2  8b16                 mov edx, dword ptr [esi]
// 00725df4  8b82b4000000         mov eax, dword ptr [edx + 0xb4]
// 00725dfa  8bce                 mov ecx, esi
// 00725dfc  ffd0                 call eax
// 00725dfe  85c0                 test eax, eax
// 00725e00  7515                 jne 0x725e17
// 00725e02  8b475c               mov eax, dword ptr [edi + 0x5c]
// 00725e05  83f8ff               cmp eax, -1
// 00725e08  7509                 jne 0x725e13
// 00725e0a  8b4f58               mov ecx, dword ptr [edi + 0x58]
// 00725e0d  894c247c             mov dword ptr [esp + 0x7c], ecx
// 00725e11  eb04                 jmp 0x725e17
// 00725e13  8944247c             mov dword ptr [esp + 0x7c], eax
// 00725e17  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00725e1b  2bc3                 sub eax, ebx
// 00725e1d  99                   cdq 
// 00725e1e  2bc2                 sub eax, edx
// 00725e20  8bc8                 mov ecx, eax
// 00725e22  8b442430             mov eax, dword ptr [esp + 0x30]
// 00725e26  2bc5                 sub eax, ebp
// 00725e28  99                   cdq 
// 00725e29  2bc2                 sub eax, edx
// 00725e2b  d1f9                 sar ecx, 1
// 00725e2d  03cb                 add ecx, ebx
// 00725e2f  8b5c247c             mov ebx, dword ptr [esp + 0x7c]
// 00725e33  d1f8                 sar eax, 1
// 00725e35  53                   push ebx
// 00725e36  03c5                 add eax, ebp
// 00725e38  8d5001               lea edx, [eax + 1]
// 00725e3b  52                   push edx
// 00725e3c  8b54247c             mov edx, dword ptr [esp + 0x7c]
// 00725e40  51                   push ecx
// 00725e41  83c0fe               add eax, -2
// 00725e44  50                   push eax
// 00725e45  8d7103               lea esi, [ecx + 3]
// 00725e48  56                   push esi
// 00725e49  50                   push eax
// 00725e4a  8d79fd               lea edi, [ecx - 3]
// 00725e4d  57                   push edi
// 00725e4e  52                   push edx
// 00725e4f  e85cb50400           call 0x7713b0
// 00725e54  83c420               add esp, 0x20
// 00725e57  e9e1fdffff           jmp 0x725c3d
// 00725e5c  83f802               cmp eax, 2
// 00725e5f  0f851f010000         jne 0x725f84
// 00725e65  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00725e6d  c7442414e8bb8b00     mov dword ptr [esp + 0x14], 0x8bbbe8
// 00725e75  8b742474             mov esi, dword ptr [esp + 0x74]
// 00725e79  89442468             mov dword ptr [esp + 0x68], eax
// 00725e7d  8b4608               mov eax, dword ptr [esi + 8]
// 00725e80  6a58                 push 0x58
// 00725e82  50                   push eax
// 00725e83  ff1558e18900         call dword ptr [0x89e158]
// 00725e89  6a00                 push 0
// 00725e8b  68cc258f00           push 0x8f25cc
// 00725e90  50                   push eax
// 00725e91  6a60                 push 0x60
// 00725e93  6a50                 push 0x50
// 00725e95  ff1574e28900         call dword ptr [0x89e274]
// 00725e9b  50                   push eax
// 00725e9c  8d4c2420             lea ecx, [esp + 0x20]
// 00725ea0  e897601200           call 0x84bf3c
// 00725ea5  8b16                 mov edx, dword ptr [esi]
// 00725ea7  8b5230               mov edx, dword ptr [edx + 0x30]
// 00725eaa  8d442414             lea eax, [esp + 0x14]
// 00725eae  50                   push eax
// 00725eaf  8bce                 mov ecx, esi
// 00725eb1  ffd2                 call edx
// 00725eb3  8b5c247c             mov ebx, dword ptr [esp + 0x7c]
// 00725eb7  89442474             mov dword ptr [esp + 0x74], eax
// 00725ebb  8b07                 mov eax, dword ptr [edi]
// 00725ebd  8b5078               mov edx, dword ptr [eax + 0x78]
// 00725ec0  53                   push ebx
// 00725ec1  56                   push esi
// 00725ec2  8bcf                 mov ecx, edi
// 00725ec4  ffd2                 call edx
// 00725ec6  8b03                 mov eax, dword ptr [ebx]
// 00725ec8  8b5078               mov edx, dword ptr [eax + 0x78]
// 00725ecb  8bcb                 mov ecx, ebx
// 00725ecd  ffd2                 call edx
// 00725ecf  85c0                 test eax, eax
// 00725ed1  7532                 jne 0x725f05
// 00725ed3  8b03                 mov eax, dword ptr [ebx]
// 00725ed5  8b506c               mov edx, dword ptr [eax + 0x6c]
// 00725ed8  8bcb                 mov ecx, ebx
// 00725eda  ffd2                 call edx
// 00725edc  85c0                 test eax, eax
// 00725ede  7525                 jne 0x725f05
// 00725ee0  8b475c               mov eax, dword ptr [edi + 0x5c]
// 00725ee3  83f8ff               cmp eax, -1
// 00725ee6  750f                 jne 0x725ef7
// 00725ee8  8b7f58               mov edi, dword ptr [edi + 0x58]
// 00725eeb  8b06                 mov eax, dword ptr [esi]
// 00725eed  8b5038               mov edx, dword ptr [eax + 0x38]
// 00725ef0  57                   push edi
// 00725ef1  8bce                 mov ecx, esi
// 00725ef3  ffd2                 call edx
// 00725ef5  eb22                 jmp 0x725f19
// 00725ef7  8bf8                 mov edi, eax
// 00725ef9  8b06                 mov eax, dword ptr [esi]
// 00725efb  8b5038               mov edx, dword ptr [eax + 0x38]
// 00725efe  57                   push edi
// 00725eff  8bce                 mov ecx, esi
// 00725f01  ffd2                 call edx
// 00725f03  eb14                 jmp 0x725f19
// 00725f05  8b07                 mov eax, dword ptr [edi]
// 00725f07  8b507c               mov edx, dword ptr [eax + 0x7c]
// 00725f0a  8b2e                 mov ebp, dword ptr [esi]
// 00725f0c  53                   push ebx
// 00725f0d  8bcf                 mov ecx, edi
// 00725f0f  ffd2                 call edx
// 00725f11  50                   push eax
// 00725f12  8b4538               mov eax, dword ptr [ebp + 0x38]
// 00725f15  8bce                 mov ecx, esi
// 00725f17  ffd0                 call eax
// 00725f19  8b83c8000000         mov eax, dword ptr [ebx + 0xc8]
// 00725f1f  8b8bc0000000         mov ecx, dword ptr [ebx + 0xc0]
// 00725f25  8b93c4000000         mov edx, dword ptr [ebx + 0xc4]
// 00725f2b  6a25                 push 0x25
// 00725f2d  89442430             mov dword ptr [esp + 0x30], eax
// 00725f31  8d442428             lea eax, [esp + 0x28]
// 00725f35  894c2428             mov dword ptr [esp + 0x28], ecx
// 00725f39  8b8bcc000000         mov ecx, dword ptr [ebx + 0xcc]
// 00725f3f  50                   push eax
// 00725f40  89542430             mov dword ptr [esp + 0x30], edx
// 00725f44  8b16                 mov edx, dword ptr [esi]
// 00725f46  8b5270               mov edx, dword ptr [edx + 0x70]
// 00725f49  6a01                 push 1
// 00725f4b  894c243c             mov dword ptr [esp + 0x3c], ecx
// 00725f4f  6830af8e00           push 0x8eaf30
// 00725f54  8bce                 mov ecx, esi
// 00725f56  ffd2                 call edx
// 00725f58  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 00725f5c  8b06                 mov eax, dword ptr [esi]
// 00725f5e  8b5030               mov edx, dword ptr [eax + 0x30]
// 00725f61  51                   push ecx
// 00725f62  8bce                 mov ecx, esi
// 00725f64  ffd2                 call edx
// 00725f66  8d4c2414             lea ecx, [esp + 0x14]
// 00725f6a  c7442468ffffffff     mov dword ptr [esp + 0x68], 0xffffffff
// 00725f72  c7442414e8bb8b00     mov dword ptr [esp + 0x14], 0x8bbbe8
// 00725f7a  e85195ceff           call 0x40f4d0
// 00725f7f  e9b9fcffff           jmp 0x725c3d
// 00725f84  83f801               cmp eax, 1
// 00725f87  0f85b0fcffff         jne 0x725c3d
// 00725f8d  83bc248400000000     cmp dword ptr [esp + 0x84], 0
// 00725f95  0f8426010000         je 0x7260c1
// 00725f9b  8b5c247c             mov ebx, dword ptr [esp + 0x7c]
// 00725f9f  8b07                 mov eax, dword ptr [edi]
// 00725fa1  8b742474             mov esi, dword ptr [esp + 0x74]
// 00725fa5  8b5078               mov edx, dword ptr [eax + 0x78]
// 00725fa8  53                   push ebx
// 00725fa9  56                   push esi
// 00725faa  ffd2                 call edx
// 00725fac  8d442424             lea eax, [esp + 0x24]
// 00725fb0  50                   push eax
// 00725fb1  8bcb                 mov ecx, ebx
// 00725fb3  e8584cffff           call 0x71ac10
// 00725fb8  8d4c2414             lea ecx, [esp + 0x14]
// 00725fbc  51                   push ecx
// 00725fbd  8d4c2428             lea ecx, [esp + 0x28]
// 00725fc1  e8ca63cfff           call 0x41c390
// 00725fc6  8b18                 mov ebx, dword ptr [eax]
// 00725fc8  85f6                 test esi, esi
// 00725fca  7504                 jne 0x725fd0
// 00725fcc  33c0                 xor eax, eax
// 00725fce  eb03                 jmp 0x725fd3
// 00725fd0  8b4604               mov eax, dword ptr [esi + 4]
// 00725fd3  6a00                 push 0
// 00725fd5  50                   push eax
// 00725fd6  8d4c2454             lea ecx, [esp + 0x54]
// 00725fda  e821a90400           call 0x770900
// 00725fdf  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 00725fe3  8d4702               lea eax, [edi + 2]
// 00725fe6  50                   push eax
// 00725fe7  8d6bfe               lea ebp, [ebx - 2]
// 00725fea  55                   push ebp
// 00725feb  8d54241c             lea edx, [esp + 0x1c]
// 00725fef  52                   push edx
// 00725ff0  8bce                 mov ecx, esi
// 00725ff2  c744247403000000     mov dword ptr [esp + 0x74], 3
// 00725ffa  e80f39ffff           call 0x71990e
// 00725fff  8d4704               lea eax, [edi + 4]
// 00726002  50                   push eax
// 00726003  53                   push ebx
// 00726004  8bce                 mov ecx, esi
// 00726006  e8fd38ffff           call 0x719908
// 0072600b  8d4f01               lea ecx, [edi + 1]
// 0072600e  8d4303               lea eax, [ebx + 3]
// 00726011  51                   push ecx
// 00726012  50                   push eax
// 00726013  8bce                 mov ecx, esi
// 00726015  89842484000000       mov dword ptr [esp + 0x84], eax
// 0072601c  e8e738ffff           call 0x719908
// 00726021  8d5703               lea edx, [edi + 3]
// 00726024  52                   push edx
// 00726025  55                   push ebp
// 00726026  8d44241c             lea eax, [esp + 0x1c]
// 0072602a  50                   push eax
// 0072602b  8bce                 mov ecx, esi
// 0072602d  e8dc38ffff           call 0x71990e
// 00726032  8d4705               lea eax, [edi + 5]
// 00726035  50                   push eax
// 00726036  53                   push ebx
// 00726037  8bce                 mov ecx, esi
// 00726039  e8ca38ffff           call 0x719908
// 0072603e  8b4c247c             mov ecx, dword ptr [esp + 0x7c]
// 00726042  8d4702               lea eax, [edi + 2]
// 00726045  50                   push eax
// 00726046  51                   push ecx
// 00726047  8bce                 mov ecx, esi
// 00726049  e8ba38ffff           call 0x719908
// 0072604e  8d4706               lea eax, [edi + 6]
// 00726051  50                   push eax
// 00726052  55                   push ebp
// 00726053  8d54241c             lea edx, [esp + 0x1c]
// 00726057  52                   push edx
// 00726058  8bce                 mov ecx, esi
// 0072605a  89842480000000       mov dword ptr [esp + 0x80], eax
// 00726061  e8a838ffff           call 0x71990e
// 00726066  8d4708               lea eax, [edi + 8]
// 00726069  50                   push eax
// 0072606a  53                   push ebx
// 0072606b  8bce                 mov ecx, esi
// 0072606d  e89638ffff           call 0x719908
// 00726072  8b4c247c             mov ecx, dword ptr [esp + 0x7c]
// 00726076  8d4705               lea eax, [edi + 5]
// 00726079  50                   push eax
// 0072607a  51                   push ecx
// 0072607b  8bce                 mov ecx, esi
// 0072607d  e88638ffff           call 0x719908
// 00726082  8d5707               lea edx, [edi + 7]
// 00726085  52                   push edx
// 00726086  55                   push ebp
// 00726087  8d442424             lea eax, [esp + 0x24]
// 0072608b  50                   push eax
// 0072608c  8bce                 mov ecx, esi
// 0072608e  e87b38ffff           call 0x71990e
// 00726093  83c709               add edi, 9
// 00726096  57                   push edi
// 00726097  53                   push ebx
// 00726098  8bce                 mov ecx, esi
// 0072609a  e86938ffff           call 0x719908
// 0072609f  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 007260a3  8b54247c             mov edx, dword ptr [esp + 0x7c]
// 007260a7  51                   push ecx
// 007260a8  52                   push edx
// 007260a9  8bce                 mov ecx, esi
// 007260ab  e85838ffff           call 0x719908
// 007260b0  8d4c244c             lea ecx, [esp + 0x4c]
// 007260b4  c7442468ffffffff     mov dword ptr [esp + 0x68], 0xffffffff
// 007260bc  e8cfa80400           call 0x770990
// 007260c1  8b442470             mov eax, dword ptr [esp + 0x70]
// 007260c5  c740040c000000       mov dword ptr [eax + 4], 0xc
// 007260cc  e977fbffff           jmp 0x725c48
// copied from an identical function in another client (function ?DrawSpecialControl@CXTPPaintManager@@UAE?AVCSize@@PAVCDC@@W4XTPSpecialControl@@PAVCXTPControl@@PAVCXTPCommandBar@@HPAX@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPPaintManager.cpp