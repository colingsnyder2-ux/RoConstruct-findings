// roc 2009-12 00612bf0  unit: seg_00610000  size: 5392 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00612bf0
//
// 00612bf0  8b542404             mov edx, dword ptr [esp + 4]
// 00612bf4  83ec2c               sub esp, 0x2c
// 00612bf7  57                   push edi
// 00612bf8  85d2                 test edx, edx
// 00612bfa  0f8472140000         je 0x614072
// 00612c00  8b7a1c               mov edi, dword ptr [edx + 0x1c]
// 00612c03  85ff                 test edi, edi
// 00612c05  0f8467140000         je 0x614072
// 00612c0b  837a0c00             cmp dword ptr [edx + 0xc], 0
// 00612c0f  0f845d140000         je 0x614072
// 00612c15  833a00               cmp dword ptr [edx], 0
// 00612c18  750a                 jne 0x612c24
// 00612c1a  837a0400             cmp dword ptr [edx + 4], 0
// 00612c1e  0f854e140000         jne 0x614072
// 00612c24  833f0b               cmp dword ptr [edi], 0xb
// 00612c27  7506                 jne 0x612c2f
// 00612c29  c7070c000000         mov dword ptr [edi], 0xc
// 00612c2f  8b4a10               mov ecx, dword ptr [edx + 0x10]
// 00612c32  8b420c               mov eax, dword ptr [edx + 0xc]
// 00612c35  53                   push ebx
// 00612c36  8b5f38               mov ebx, dword ptr [edi + 0x38]
// 00612c39  55                   push ebp
// 00612c3a  8b2a                 mov ebp, dword ptr [edx]
// 00612c3c  894c2414             mov dword ptr [esp + 0x14], ecx
// 00612c40  894c2424             mov dword ptr [esp + 0x24], ecx
// 00612c44  8b0f                 mov ecx, dword ptr [edi]
// 00612c46  89442420             mov dword ptr [esp + 0x20], eax
// 00612c4a  8b4204               mov eax, dword ptr [edx + 4]
// 00612c4d  56                   push esi
// 00612c4e  8b773c               mov esi, dword ptr [edi + 0x3c]
// 00612c51  89442410             mov dword ptr [esp + 0x10], eax
// 00612c55  89442438             mov dword ptr [esp + 0x38], eax
// 00612c59  c744243000000000     mov dword ptr [esp + 0x30], 0
// 00612c61  83f91c               cmp ecx, 0x1c
// 00612c64  7611                 jbe 0x612c77
// 00612c66  b8feffffff           mov eax, 0xfffffffe
// 00612c6b  5e                   pop esi
// 00612c6c  5d                   pop ebp
// 00612c6d  5b                   pop ebx
// 00612c6e  5f                   pop edi
// 00612c6f  83c42c               add esp, 0x2c
// 00612c72  c3                   ret 
// 00612c73  8b542440             mov edx, dword ptr [esp + 0x40]
// 00612c77  ff248d7c406100       jmp dword ptr [ecx*4 + 0x61407c]
// 00612c7e  837f0800             cmp dword ptr [edi + 8], 0
// 00612c82  750b                 jne 0x612c8f
// 00612c84  c7070c000000         mov dword ptr [edi], 0xc
// 00612c8a  e98a120000           jmp 0x613f19
// 00612c8f  83fe10               cmp esi, 0x10
// 00612c92  7320                 jae 0x612cb4
// 00612c94  85c0                 test eax, eax
// 00612c96  0f84d7120000         je 0x613f73
// 00612c9c  0fb65500             movzx edx, byte ptr [ebp]
// 00612ca0  8bce                 mov ecx, esi
// 00612ca2  d3e2                 shl edx, cl
// 00612ca4  48                   dec eax
// 00612ca5  83c608               add esi, 8
// 00612ca8  45                   inc ebp
// 00612ca9  03da                 add ebx, edx
// 00612cab  89442410             mov dword ptr [esp + 0x10], eax
// 00612caf  83fe10               cmp esi, 0x10
// 00612cb2  72e0                 jb 0x612c94
// 00612cb4  f6470802             test byte ptr [edi + 8], 2
// 00612cb8  7449                 je 0x612d03
// 00612cba  81fb1f8b0000         cmp ebx, 0x8b1f
// 00612cc0  7541                 jne 0x612d03
// 00612cc2  6a00                 push 0
// 00612cc4  6a00                 push 0
// 00612cc6  6a00                 push 0
// 00612cc8  e8d3fcffff           call 0x6129a0
// 00612ccd  894718               mov dword ptr [edi + 0x18], eax
// 00612cd0  6a02                 push 2
// 00612cd2  8d44242c             lea eax, [esp + 0x2c]
// 00612cd6  c644242c1f           mov byte ptr [esp + 0x2c], 0x1f
// 00612cdb  c644242d8b           mov byte ptr [esp + 0x2d], 0x8b
// 00612ce0  8b4f18               mov ecx, dword ptr [edi + 0x18]
// 00612ce3  50                   push eax
// 00612ce4  51                   push ecx
// 00612ce5  e8b6fcffff           call 0x6129a0
// 00612cea  83c418               add esp, 0x18
// 00612ced  894718               mov dword ptr [edi + 0x18], eax
// 00612cf0  8b442410             mov eax, dword ptr [esp + 0x10]
// 00612cf4  33db                 xor ebx, ebx
// 00612cf6  33f6                 xor esi, esi
// 00612cf8  c70701000000         mov dword ptr [edi], 1
// 00612cfe  e916120000           jmp 0x613f19
// 00612d03  8b4720               mov eax, dword ptr [edi + 0x20]
// 00612d06  c7471000000000       mov dword ptr [edi + 0x10], 0
// 00612d0d  85c0                 test eax, eax
// 00612d0f  7407                 je 0x612d18
// 00612d11  c74030ffffffff       mov dword ptr [eax + 0x30], 0xffffffff
// 00612d18  f6470801             test byte ptr [edi + 8], 1
// 00612d1c  0f849f000000         je 0x612dc1
// 00612d22  0fb6c3               movzx eax, bl
// 00612d25  c1e008               shl eax, 8
// 00612d28  8bd3                 mov edx, ebx
// 00612d2a  c1ea08               shr edx, 8
// 00612d2d  03c2                 add eax, edx
// 00612d2f  33d2                 xor edx, edx
// 00612d31  b91f000000           mov ecx, 0x1f
// 00612d36  f7f1                 div ecx
// 00612d38  85d2                 test edx, edx
// 00612d3a  0f8581000000         jne 0x612dc1
// 00612d40  8bd3                 mov edx, ebx
// 00612d42  80e20f               and dl, 0xf
// 00612d45  80fa08               cmp dl, 8
// 00612d48  7414                 je 0x612d5e
// 00612d4a  8b442440             mov eax, dword ptr [esp + 0x40]
// 00612d4e  c740187c8d9c00       mov dword ptr [eax + 0x18], 0x9c8d7c
// 00612d55  8b442410             mov eax, dword ptr [esp + 0x10]
// 00612d59  e9b5110000           jmp 0x613f13
// 00612d5e  c1eb04               shr ebx, 4
// 00612d61  8bcb                 mov ecx, ebx
// 00612d63  83e10f               and ecx, 0xf
// 00612d66  83c108               add ecx, 8
// 00612d69  83ee04               sub esi, 4
// 00612d6c  3b4f24               cmp ecx, dword ptr [edi + 0x24]
// 00612d6f  7614                 jbe 0x612d85
// 00612d71  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00612d75  8b442410             mov eax, dword ptr [esp + 0x10]
// 00612d79  c74118688d9c00       mov dword ptr [ecx + 0x18], 0x9c8d68
// 00612d80  e98e110000           jmp 0x613f13
// 00612d85  ba01000000           mov edx, 1
// 00612d8a  d3e2                 shl edx, cl
// 00612d8c  6a00                 push 0
// 00612d8e  6a00                 push 0
// 00612d90  6a00                 push 0
// 00612d92  895714               mov dword ptr [edi + 0x14], edx
// 00612d95  e8b6760000           call 0x61a450
// 00612d9a  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00612d9e  c1eb08               shr ebx, 8
// 00612da1  f7d3                 not ebx
// 00612da3  83e302               and ebx, 2
// 00612da6  83cb09               or ebx, 9
// 00612da9  894718               mov dword ptr [edi + 0x18], eax
// 00612dac  894130               mov dword ptr [ecx + 0x30], eax
// 00612daf  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00612db3  891f                 mov dword ptr [edi], ebx
// 00612db5  83c40c               add esp, 0xc
// 00612db8  33db                 xor ebx, ebx
// 00612dba  33f6                 xor esi, esi
// 00612dbc  e958110000           jmp 0x613f19
// 00612dc1  8b542440             mov edx, dword ptr [esp + 0x40]
// 00612dc5  8b442410             mov eax, dword ptr [esp + 0x10]
// 00612dc9  c74218508d9c00       mov dword ptr [edx + 0x18], 0x9c8d50
// 00612dd0  e93e110000           jmp 0x613f13
// 00612dd5  83fe10               cmp esi, 0x10
// 00612dd8  7326                 jae 0x612e00
// 00612dda  8d9b00000000         lea ebx, [ebx]
// 00612de0  85c0                 test eax, eax
// 00612de2  0f848b110000         je 0x613f73
// 00612de8  0fb65500             movzx edx, byte ptr [ebp]
// 00612dec  8bce                 mov ecx, esi
// 00612dee  d3e2                 shl edx, cl
// 00612df0  48                   dec eax
// 00612df1  83c608               add esi, 8
// 00612df4  45                   inc ebp
// 00612df5  03da                 add ebx, edx
// 00612df7  89442410             mov dword ptr [esp + 0x10], eax
// 00612dfb  83fe10               cmp esi, 0x10
// 00612dfe  72e0                 jb 0x612de0
// 00612e00  895f10               mov dword ptr [edi + 0x10], ebx
// 00612e03  80fb08               cmp bl, 8
// 00612e06  7410                 je 0x612e18
// 00612e08  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00612e0c  c741187c8d9c00       mov dword ptr [ecx + 0x18], 0x9c8d7c
// 00612e13  e9fb100000           jmp 0x613f13
// 00612e18  f7c300e00000         test ebx, 0xe000
// 00612e1e  7410                 je 0x612e30
// 00612e20  8b542440             mov edx, dword ptr [esp + 0x40]
// 00612e24  c74218348d9c00       mov dword ptr [edx + 0x18], 0x9c8d34
// 00612e2b  e9e3100000           jmp 0x613f13
// 00612e30  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 00612e33  85c9                 test ecx, ecx
// 00612e35  740a                 je 0x612e41
// 00612e37  8bd3                 mov edx, ebx
// 00612e39  c1ea08               shr edx, 8
// 00612e3c  83e201               and edx, 1
// 00612e3f  8911                 mov dword ptr [ecx], edx
// 00612e41  f7471000020000       test dword ptr [edi + 0x10], 0x200
// 00612e48  7425                 je 0x612e6f
// 00612e4a  885c241c             mov byte ptr [esp + 0x1c], bl
// 00612e4e  c1eb08               shr ebx, 8
// 00612e51  6a02                 push 2
// 00612e53  8d442420             lea eax, [esp + 0x20]
// 00612e57  885c2421             mov byte ptr [esp + 0x21], bl
// 00612e5b  8b4f18               mov ecx, dword ptr [edi + 0x18]
// 00612e5e  50                   push eax
// 00612e5f  51                   push ecx
// 00612e60  e83bfbffff           call 0x6129a0
// 00612e65  894718               mov dword ptr [edi + 0x18], eax
// 00612e68  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00612e6c  83c40c               add esp, 0xc
// 00612e6f  33db                 xor ebx, ebx
// 00612e71  33f6                 xor esi, esi
// 00612e73  c70702000000         mov dword ptr [edi], 2
// 00612e79  eb05                 jmp 0x612e80
// 00612e7b  83fe20               cmp esi, 0x20
// 00612e7e  7320                 jae 0x612ea0
// 00612e80  85c0                 test eax, eax
// 00612e82  0f84eb100000         je 0x613f73
// 00612e88  0fb65500             movzx edx, byte ptr [ebp]
// 00612e8c  8bce                 mov ecx, esi
// 00612e8e  d3e2                 shl edx, cl
// 00612e90  48                   dec eax
// 00612e91  83c608               add esi, 8
// 00612e94  45                   inc ebp
// 00612e95  03da                 add ebx, edx
// 00612e97  89442410             mov dword ptr [esp + 0x10], eax
// 00612e9b  83fe20               cmp esi, 0x20
// 00612e9e  72e0                 jb 0x612e80
// 00612ea0  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 00612ea3  85c9                 test ecx, ecx
// 00612ea5  7403                 je 0x612eaa
// 00612ea7  895904               mov dword ptr [ecx + 4], ebx
// 00612eaa  f7471000020000       test dword ptr [edi + 0x10], 0x200
// 00612eb1  7437                 je 0x612eea
// 00612eb3  885c241c             mov byte ptr [esp + 0x1c], bl
// 00612eb7  8bc3                 mov eax, ebx
// 00612eb9  8bcb                 mov ecx, ebx
// 00612ebb  c1e808               shr eax, 8
// 00612ebe  c1e910               shr ecx, 0x10
// 00612ec1  c1eb18               shr ebx, 0x18
// 00612ec4  6a04                 push 4
// 00612ec6  8d542420             lea edx, [esp + 0x20]
// 00612eca  88442421             mov byte ptr [esp + 0x21], al
// 00612ece  884c2422             mov byte ptr [esp + 0x22], cl
// 00612ed2  885c2423             mov byte ptr [esp + 0x23], bl
// 00612ed6  8b4718               mov eax, dword ptr [edi + 0x18]
// 00612ed9  52                   push edx
// 00612eda  50                   push eax
// 00612edb  e8c0faffff           call 0x6129a0
// 00612ee0  894718               mov dword ptr [edi + 0x18], eax
// 00612ee3  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00612ee7  83c40c               add esp, 0xc
// 00612eea  33db                 xor ebx, ebx
// 00612eec  33f6                 xor esi, esi
// 00612eee  c70703000000         mov dword ptr [edi], 3
// 00612ef4  eb0a                 jmp 0x612f00
// 00612ef6  83fe10               cmp esi, 0x10
// 00612ef9  7325                 jae 0x612f20
// 00612efb  eb03                 jmp 0x612f00
// 00612efd  8d4900               lea ecx, [ecx]
// 00612f00  85c0                 test eax, eax
// 00612f02  0f846b100000         je 0x613f73
// 00612f08  0fb65500             movzx edx, byte ptr [ebp]
// 00612f0c  8bce                 mov ecx, esi
// 00612f0e  d3e2                 shl edx, cl
// 00612f10  48                   dec eax
// 00612f11  83c608               add esi, 8
// 00612f14  45                   inc ebp
// 00612f15  03da                 add ebx, edx
// 00612f17  89442410             mov dword ptr [esp + 0x10], eax
// 00612f1b  83fe10               cmp esi, 0x10
// 00612f1e  72e0                 jb 0x612f00
// 00612f20  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 00612f23  85c9                 test ecx, ecx
// 00612f25  7416                 je 0x612f3d
// 00612f27  8bd3                 mov edx, ebx
// 00612f29  81e2ff000000         and edx, 0xff
// 00612f2f  895108               mov dword ptr [ecx + 8], edx
// 00612f32  8b5720               mov edx, dword ptr [edi + 0x20]
// 00612f35  8bcb                 mov ecx, ebx
// 00612f37  c1e908               shr ecx, 8
// 00612f3a  894a0c               mov dword ptr [edx + 0xc], ecx
// 00612f3d  f7471000020000       test dword ptr [edi + 0x10], 0x200
// 00612f44  7425                 je 0x612f6b
// 00612f46  885c241c             mov byte ptr [esp + 0x1c], bl
// 00612f4a  c1eb08               shr ebx, 8
// 00612f4d  6a02                 push 2
// 00612f4f  8d442420             lea eax, [esp + 0x20]
// 00612f53  885c2421             mov byte ptr [esp + 0x21], bl
// 00612f57  8b4f18               mov ecx, dword ptr [edi + 0x18]
// 00612f5a  50                   push eax
// 00612f5b  51                   push ecx
// 00612f5c  e83ffaffff           call 0x6129a0
// 00612f61  894718               mov dword ptr [edi + 0x18], eax
// 00612f64  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00612f68  83c40c               add esp, 0xc
// 00612f6b  33db                 xor ebx, ebx
// 00612f6d  33f6                 xor esi, esi
// 00612f6f  c70704000000         mov dword ptr [edi], 4
// 00612f75  f7471000040000       test dword ptr [edi + 0x10], 0x400
// 00612f7c  7466                 je 0x612fe4
// 00612f7e  83fe10               cmp esi, 0x10
// 00612f81  7320                 jae 0x612fa3
// 00612f83  85c0                 test eax, eax
// 00612f85  0f84e80f0000         je 0x613f73
// 00612f8b  0fb65500             movzx edx, byte ptr [ebp]
// 00612f8f  8bce                 mov ecx, esi
// 00612f91  d3e2                 shl edx, cl
// 00612f93  48                   dec eax
// 00612f94  83c608               add esi, 8
// 00612f97  45                   inc ebp
// 00612f98  03da                 add ebx, edx
// 00612f9a  89442410             mov dword ptr [esp + 0x10], eax
// 00612f9e  83fe10               cmp esi, 0x10
// 00612fa1  72e0                 jb 0x612f83
// 00612fa3  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 00612fa6  895f40               mov dword ptr [edi + 0x40], ebx
// 00612fa9  85c9                 test ecx, ecx
// 00612fab  7403                 je 0x612fb0
// 00612fad  895914               mov dword ptr [ecx + 0x14], ebx
// 00612fb0  f7471000020000       test dword ptr [edi + 0x10], 0x200
// 00612fb7  7425                 je 0x612fde
// 00612fb9  885c241c             mov byte ptr [esp + 0x1c], bl
// 00612fbd  c1eb08               shr ebx, 8
// 00612fc0  6a02                 push 2
// 00612fc2  8d442420             lea eax, [esp + 0x20]
// 00612fc6  885c2421             mov byte ptr [esp + 0x21], bl
// 00612fca  8b4f18               mov ecx, dword ptr [edi + 0x18]
// 00612fcd  50                   push eax
// 00612fce  51                   push ecx
// 00612fcf  e8ccf9ffff           call 0x6129a0
// 00612fd4  894718               mov dword ptr [edi + 0x18], eax
// 00612fd7  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00612fdb  83c40c               add esp, 0xc
// 00612fde  33db                 xor ebx, ebx
// 00612fe0  33f6                 xor esi, esi
// 00612fe2  eb0e                 jmp 0x612ff2
// 00612fe4  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 00612fe7  85c9                 test ecx, ecx
// 00612fe9  7407                 je 0x612ff2
// 00612feb  c7411000000000       mov dword ptr [ecx + 0x10], 0
// 00612ff2  c70705000000         mov dword ptr [edi], 5
// 00612ff8  f7471000040000       test dword ptr [edi + 0x10], 0x400
// 00612fff  0f84a2000000         je 0x6130a7
// 00613005  8b4f40               mov ecx, dword ptr [edi + 0x40]
// 00613008  894c2414             mov dword ptr [esp + 0x14], ecx
// 0061300c  3bc8                 cmp ecx, eax
// 0061300e  7606                 jbe 0x613016
// 00613010  8bc8                 mov ecx, eax
// 00613012  89442414             mov dword ptr [esp + 0x14], eax
// 00613016  85c9                 test ecx, ecx
// 00613018  0f847f000000         je 0x61309d
// 0061301e  8b5720               mov edx, dword ptr [edi + 0x20]
// 00613021  85d2                 test edx, edx
// 00613023  7447                 je 0x61306c
// 00613025  8b5210               mov edx, dword ptr [edx + 0x10]
// 00613028  89542434             mov dword ptr [esp + 0x34], edx
// 0061302c  85d2                 test edx, edx
// 0061302e  743c                 je 0x61306c
// 00613030  8b4720               mov eax, dword ptr [edi + 0x20]
// 00613033  8b4014               mov eax, dword ptr [eax + 0x14]
// 00613036  2b4740               sub eax, dword ptr [edi + 0x40]
// 00613039  8b5720               mov edx, dword ptr [edi + 0x20]
// 0061303c  8b5218               mov edx, dword ptr [edx + 0x18]
// 0061303f  89442420             mov dword ptr [esp + 0x20], eax
// 00613043  03c1                 add eax, ecx
// 00613045  3bc2                 cmp eax, edx
// 00613047  7606                 jbe 0x61304f
// 00613049  2b542420             sub edx, dword ptr [esp + 0x20]
// 0061304d  8bca                 mov ecx, edx
// 0061304f  8b542420             mov edx, dword ptr [esp + 0x20]
// 00613053  51                   push ecx
// 00613054  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00613058  03ca                 add ecx, edx
// 0061305a  55                   push ebp
// 0061305b  51                   push ecx
// 0061305c  e8851c1e00           call 0x7f4ce6
// 00613061  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00613065  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00613069  83c40c               add esp, 0xc
// 0061306c  f7471000020000       test dword ptr [edi + 0x10], 0x200
// 00613073  741d                 je 0x613092
// 00613075  8b442414             mov eax, dword ptr [esp + 0x14]
// 00613079  8b4f18               mov ecx, dword ptr [edi + 0x18]
// 0061307c  50                   push eax
// 0061307d  55                   push ebp
// 0061307e  51                   push ecx
// 0061307f  e81cf9ffff           call 0x6129a0
// 00613084  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00613088  894718               mov dword ptr [edi + 0x18], eax
// 0061308b  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0061308f  83c40c               add esp, 0xc
// 00613092  2bc1                 sub eax, ecx
// 00613094  03e9                 add ebp, ecx
// 00613096  294f40               sub dword ptr [edi + 0x40], ecx
// 00613099  89442410             mov dword ptr [esp + 0x10], eax
// 0061309d  837f4000             cmp dword ptr [edi + 0x40], 0
// 006130a1  0f85cc0e0000         jne 0x613f73
// 006130a7  c7474000000000       mov dword ptr [edi + 0x40], 0
// 006130ae  c70706000000         mov dword ptr [edi], 6
// 006130b4  f7471000080000       test dword ptr [edi + 0x10], 0x800
// 006130bb  0f8492000000         je 0x613153
// 006130c1  85c0                 test eax, eax
// 006130c3  0f84aa0e0000         je 0x613f73
// 006130c9  33c9                 xor ecx, ecx
// 006130cb  eb03                 jmp 0x6130d0
// 006130cd  8d4900               lea ecx, [ecx]
// 006130d0  0fb61429             movzx edx, byte ptr [ecx + ebp]
// 006130d4  41                   inc ecx
// 006130d5  894c2414             mov dword ptr [esp + 0x14], ecx
// 006130d9  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 006130dc  89542420             mov dword ptr [esp + 0x20], edx
// 006130e0  85c9                 test ecx, ecx
// 006130e2  7425                 je 0x613109
// 006130e4  8b511c               mov edx, dword ptr [ecx + 0x1c]
// 006130e7  89542434             mov dword ptr [esp + 0x34], edx
// 006130eb  85d2                 test edx, edx
// 006130ed  741a                 je 0x613109
// 006130ef  8b5740               mov edx, dword ptr [edi + 0x40]
// 006130f2  3b5120               cmp edx, dword ptr [ecx + 0x20]
// 006130f5  7312                 jae 0x613109
// 006130f7  8b442434             mov eax, dword ptr [esp + 0x34]
// 006130fb  8a4c2420             mov cl, byte ptr [esp + 0x20]
// 006130ff  880c10               mov byte ptr [eax + edx], cl
// 00613102  ff4740               inc dword ptr [edi + 0x40]
// 00613105  8b442410             mov eax, dword ptr [esp + 0x10]
// 00613109  837c242000           cmp dword ptr [esp + 0x20], 0
// 0061310e  7408                 je 0x613118
// 00613110  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00613114  3bc8                 cmp ecx, eax
// 00613116  72b8                 jb 0x6130d0
// 00613118  f7471000020000       test dword ptr [edi + 0x10], 0x200
// 0061311f  7419                 je 0x61313a
// 00613121  8b542414             mov edx, dword ptr [esp + 0x14]
// 00613125  8b4718               mov eax, dword ptr [edi + 0x18]
// 00613128  52                   push edx
// 00613129  55                   push ebp
// 0061312a  50                   push eax
// 0061312b  e870f8ffff           call 0x6129a0
// 00613130  894718               mov dword ptr [edi + 0x18], eax
// 00613133  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00613137  83c40c               add esp, 0xc
// 0061313a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0061313e  2bc1                 sub eax, ecx
// 00613140  03e9                 add ebp, ecx
// 00613142  837c242000           cmp dword ptr [esp + 0x20], 0
// 00613147  89442410             mov dword ptr [esp + 0x10], eax
// 0061314b  0f85220e0000         jne 0x613f73
// 00613151  eb0e                 jmp 0x613161
// 00613153  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 00613156  85c9                 test ecx, ecx
// 00613158  7407                 je 0x613161
// 0061315a  c7411c00000000       mov dword ptr [ecx + 0x1c], 0
// 00613161  c7474000000000       mov dword ptr [edi + 0x40], 0
// 00613168  c70707000000         mov dword ptr [edi], 7
// 0061316e  f7471000100000       test dword ptr [edi + 0x10], 0x1000
// 00613175  0f848d000000         je 0x613208
// 0061317b  85c0                 test eax, eax
// 0061317d  0f84f00d0000         je 0x613f73
// 00613183  33c9                 xor ecx, ecx
// 00613185  0fb61429             movzx edx, byte ptr [ecx + ebp]
// 00613189  41                   inc ecx
// 0061318a  894c2414             mov dword ptr [esp + 0x14], ecx
// 0061318e  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 00613191  89542420             mov dword ptr [esp + 0x20], edx
// 00613195  85c9                 test ecx, ecx
// 00613197  7425                 je 0x6131be
// 00613199  8b5124               mov edx, dword ptr [ecx + 0x24]
// 0061319c  89542434             mov dword ptr [esp + 0x34], edx
// 006131a0  85d2                 test edx, edx
// 006131a2  741a                 je 0x6131be
// 006131a4  8b5740               mov edx, dword ptr [edi + 0x40]
// 006131a7  3b5128               cmp edx, dword ptr [ecx + 0x28]
// 006131aa  7312                 jae 0x6131be
// 006131ac  8b442434             mov eax, dword ptr [esp + 0x34]
// 006131b0  8a4c2420             mov cl, byte ptr [esp + 0x20]
// 006131b4  880c10               mov byte ptr [eax + edx], cl
// 006131b7  ff4740               inc dword ptr [edi + 0x40]
// 006131ba  8b442410             mov eax, dword ptr [esp + 0x10]
// 006131be  837c242000           cmp dword ptr [esp + 0x20], 0
// 006131c3  7408                 je 0x6131cd
// 006131c5  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006131c9  3bc8                 cmp ecx, eax
// 006131cb  72b8                 jb 0x613185
// 006131cd  f7471000020000       test dword ptr [edi + 0x10], 0x200
// 006131d4  7419                 je 0x6131ef
// 006131d6  8b542414             mov edx, dword ptr [esp + 0x14]
// 006131da  8b4718               mov eax, dword ptr [edi + 0x18]
// 006131dd  52                   push edx
// 006131de  55                   push ebp
// 006131df  50                   push eax
// 006131e0  e8bbf7ffff           call 0x6129a0
// 006131e5  894718               mov dword ptr [edi + 0x18], eax
// 006131e8  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 006131ec  83c40c               add esp, 0xc
// 006131ef  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006131f3  2bc1                 sub eax, ecx
// 006131f5  03e9                 add ebp, ecx
// 006131f7  837c242000           cmp dword ptr [esp + 0x20], 0
// 006131fc  89442410             mov dword ptr [esp + 0x10], eax
// 00613200  0f856d0d0000         jne 0x613f73
// 00613206  eb0e                 jmp 0x613216
// 00613208  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 0061320b  85c9                 test ecx, ecx
// 0061320d  7407                 je 0x613216
// 0061320f  c7412400000000       mov dword ptr [ecx + 0x24], 0
// 00613216  c70708000000         mov dword ptr [edi], 8
// 0061321c  f7471000020000       test dword ptr [edi + 0x10], 0x200
// 00613223  7447                 je 0x61326c
// 00613225  83fe10               cmp esi, 0x10
// 00613228  7326                 jae 0x613250
// 0061322a  8d9b00000000         lea ebx, [ebx]
// 00613230  85c0                 test eax, eax
// 00613232  0f843b0d0000         je 0x613f73
// 00613238  0fb65500             movzx edx, byte ptr [ebp]
// 0061323c  8bce                 mov ecx, esi
// 0061323e  d3e2                 shl edx, cl
// 00613240  48                   dec eax
// 00613241  83c608               add esi, 8
// 00613244  45                   inc ebp
// 00613245  03da                 add ebx, edx
// 00613247  89442410             mov dword ptr [esp + 0x10], eax
// 0061324b  83fe10               cmp esi, 0x10
// 0061324e  72e0                 jb 0x613230
// 00613250  0fb74f18             movzx ecx, word ptr [edi + 0x18]
// 00613254  3bd9                 cmp ebx, ecx
// 00613256  7410                 je 0x613268
// 00613258  8b542440             mov edx, dword ptr [esp + 0x40]
// 0061325c  c74218208d9c00       mov dword ptr [edx + 0x18], 0x9c8d20
// 00613263  e9ab0c0000           jmp 0x613f13
// 00613268  33db                 xor ebx, ebx
// 0061326a  33f6                 xor esi, esi
// 0061326c  8b4720               mov eax, dword ptr [edi + 0x20]
// 0061326f  85c0                 test eax, eax
// 00613271  7416                 je 0x613289
// 00613273  8b4f10               mov ecx, dword ptr [edi + 0x10]
// 00613276  c1f909               sar ecx, 9
// 00613279  83e101               and ecx, 1
// 0061327c  89482c               mov dword ptr [eax + 0x2c], ecx
// 0061327f  8b5720               mov edx, dword ptr [edi + 0x20]
// 00613282  c7423001000000       mov dword ptr [edx + 0x30], 1
// 00613289  6a00                 push 0
// 0061328b  6a00                 push 0
// 0061328d  6a00                 push 0
// 0061328f  e80cf7ffff           call 0x6129a0
// 00613294  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00613298  894718               mov dword ptr [edi + 0x18], eax
// 0061329b  894130               mov dword ptr [ecx + 0x30], eax
// 0061329e  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 006132a2  83c40c               add esp, 0xc
// 006132a5  c7070b000000         mov dword ptr [edi], 0xb
// 006132ab  e9690c0000           jmp 0x613f19
// 006132b0  83fe20               cmp esi, 0x20
// 006132b3  7320                 jae 0x6132d5
// 006132b5  85c0                 test eax, eax
// 006132b7  0f84b60c0000         je 0x613f73
// 006132bd  0fb65500             movzx edx, byte ptr [ebp]
// 006132c1  8bce                 mov ecx, esi
// 006132c3  d3e2                 shl edx, cl
// 006132c5  48                   dec eax
// 006132c6  83c608               add esi, 8
// 006132c9  45                   inc ebp
// 006132ca  03da                 add ebx, edx
// 006132cc  89442410             mov dword ptr [esp + 0x10], eax
// 006132d0  83fe20               cmp esi, 0x20
// 006132d3  72e0                 jb 0x6132b5
// 006132d5  8bcb                 mov ecx, ebx
// 006132d7  81e100ff0000         and ecx, 0xff00
// 006132dd  8bd3                 mov edx, ebx
// 006132df  c1e210               shl edx, 0x10
// 006132e2  03ca                 add ecx, edx
// 006132e4  8bd3                 mov edx, ebx
// 006132e6  c1ea08               shr edx, 8
// 006132e9  c1e108               shl ecx, 8
// 006132ec  81e200ff0000         and edx, 0xff00
// 006132f2  03ca                 add ecx, edx
// 006132f4  8b542440             mov edx, dword ptr [esp + 0x40]
// 006132f8  c1eb18               shr ebx, 0x18
// 006132fb  03cb                 add ecx, ebx
// 006132fd  894f18               mov dword ptr [edi + 0x18], ecx
// 00613300  894a30               mov dword ptr [edx + 0x30], ecx
// 00613303  33db                 xor ebx, ebx
// 00613305  33f6                 xor esi, esi
// 00613307  c7070a000000         mov dword ptr [edi], 0xa
// 0061330d  837f0c00             cmp dword ptr [edi + 0xc], 0
// 00613311  0f841a0c0000         je 0x613f31
// 00613317  6a00                 push 0
// 00613319  6a00                 push 0
// 0061331b  6a00                 push 0
// 0061331d  e82e710000           call 0x61a450
// 00613322  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00613326  894718               mov dword ptr [edi + 0x18], eax
// 00613329  894130               mov dword ptr [ecx + 0x30], eax
// 0061332c  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00613330  83c40c               add esp, 0xc
// 00613333  c7070b000000         mov dword ptr [edi], 0xb
// 00613339  837c244405           cmp dword ptr [esp + 0x44], 5
// 0061333e  0f842f0c0000         je 0x613f73
// 00613344  837f0400             cmp dword ptr [edi + 4], 0
// 00613348  7414                 je 0x61335e
// 0061334a  8bce                 mov ecx, esi
// 0061334c  83e107               and ecx, 7
// 0061334f  d3eb                 shr ebx, cl
// 00613351  2bf1                 sub esi, ecx
// 00613353  c70718000000         mov dword ptr [edi], 0x18
// 00613359  e9bb0b0000           jmp 0x613f19
// 0061335e  83fe03               cmp esi, 3
// 00613361  7320                 jae 0x613383
// 00613363  85c0                 test eax, eax
// 00613365  0f84080c0000         je 0x613f73
// 0061336b  0fb65500             movzx edx, byte ptr [ebp]
// 0061336f  8bce                 mov ecx, esi
// 00613371  d3e2                 shl edx, cl
// 00613373  48                   dec eax
// 00613374  83c608               add esi, 8
// 00613377  45                   inc ebp
// 00613378  03da                 add ebx, edx
// 0061337a  89442410             mov dword ptr [esp + 0x10], eax
// 0061337e  83fe03               cmp esi, 3
// 00613381  72e0                 jb 0x613363
// 00613383  8bcb                 mov ecx, ebx
// 00613385  83e101               and ecx, 1
// 00613388  d1eb                 shr ebx, 1
// 0061338a  894f04               mov dword ptr [edi + 4], ecx
// 0061338d  8bcb                 mov ecx, ebx
// 0061338f  83e103               and ecx, 3
// 00613392  4e                   dec esi
// 00613393  83f903               cmp ecx, 3
// 00613396  7767                 ja 0x6133ff
// 00613398  ff248df0406100       jmp dword ptr [ecx*4 + 0x6140f0]
// 0061339f  c1eb02               shr ebx, 2
// 006133a2  c7070d000000         mov dword ptr [edi], 0xd
// 006133a8  83ee02               sub esi, 2
// 006133ab  e9690b0000           jmp 0x613f19
// 006133b0  c1eb02               shr ebx, 2
// 006133b3  c7474c30839c00       mov dword ptr [edi + 0x4c], 0x9c8330
// 006133ba  c7475409000000       mov dword ptr [edi + 0x54], 9
// 006133c1  c74750308b9c00       mov dword ptr [edi + 0x50], 0x9c8b30
// 006133c8  c7475805000000       mov dword ptr [edi + 0x58], 5
// 006133cf  c70712000000         mov dword ptr [edi], 0x12
// 006133d5  83ee02               sub esi, 2
// 006133d8  e93c0b0000           jmp 0x613f19
// 006133dd  c1eb02               shr ebx, 2
// 006133e0  c7070f000000         mov dword ptr [edi], 0xf
// 006133e6  83ee02               sub esi, 2
// 006133e9  e92b0b0000           jmp 0x613f19
// 006133ee  8b542440             mov edx, dword ptr [esp + 0x40]
// 006133f2  c742180c8d9c00       mov dword ptr [edx + 0x18], 0x9c8d0c
// 006133f9  c7071b000000         mov dword ptr [edi], 0x1b
// 006133ff  c1eb02               shr ebx, 2
// 00613402  83ee02               sub esi, 2
// 00613405  e90f0b0000           jmp 0x613f19
// 0061340a  8bce                 mov ecx, esi
// 0061340c  83e107               and ecx, 7
// 0061340f  2bf1                 sub esi, ecx
// 00613411  d3eb                 shr ebx, cl
// 00613413  83fe20               cmp esi, 0x20
// 00613416  7320                 jae 0x613438
// 00613418  85c0                 test eax, eax
// 0061341a  0f84530b0000         je 0x613f73
// 00613420  0fb65500             movzx edx, byte ptr [ebp]
// 00613424  8bce                 mov ecx, esi
// 00613426  d3e2                 shl edx, cl
// 00613428  48                   dec eax
// 00613429  83c608               add esi, 8
// 0061342c  45                   inc ebp
// 0061342d  03da                 add ebx, edx
// 0061342f  89442410             mov dword ptr [esp + 0x10], eax
// 00613433  83fe20               cmp esi, 0x20
// 00613436  72e0                 jb 0x613418
// 00613438  8bd3                 mov edx, ebx
// 0061343a  8bcb                 mov ecx, ebx
// 0061343c  f7d2                 not edx
// 0061343e  81e1ffff0000         and ecx, 0xffff
// 00613444  c1ea10               shr edx, 0x10
// 00613447  3bca                 cmp ecx, edx
// 00613449  7410                 je 0x61345b
// 0061344b  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0061344f  c74118ec8c9c00       mov dword ptr [ecx + 0x18], 0x9c8cec
// 00613456  e9b80a0000           jmp 0x613f13
// 0061345b  33db                 xor ebx, ebx
// 0061345d  894f40               mov dword ptr [edi + 0x40], ecx
// 00613460  33f6                 xor esi, esi
// 00613462  c7070e000000         mov dword ptr [edi], 0xe
// 00613468  8b4f40               mov ecx, dword ptr [edi + 0x40]
// 0061346b  894c2414             mov dword ptr [esp + 0x14], ecx
// 0061346f  85c9                 test ecx, ecx
// 00613471  0f846c060000         je 0x613ae3
// 00613477  3bc8                 cmp ecx, eax
// 00613479  7606                 jbe 0x613481
// 0061347b  8bc8                 mov ecx, eax
// 0061347d  89442414             mov dword ptr [esp + 0x14], eax
// 00613481  8b542418             mov edx, dword ptr [esp + 0x18]
// 00613485  3bca                 cmp ecx, edx
// 00613487  7606                 jbe 0x61348f
// 00613489  8bca                 mov ecx, edx
// 0061348b  894c2414             mov dword ptr [esp + 0x14], ecx
// 0061348f  85c9                 test ecx, ecx
// 00613491  0f84dc0a0000         je 0x613f73
// 00613497  8b542414             mov edx, dword ptr [esp + 0x14]
// 0061349b  8b442424             mov eax, dword ptr [esp + 0x24]
// 0061349f  52                   push edx
// 006134a0  55                   push ebp
// 006134a1  50                   push eax
// 006134a2  e83f181e00           call 0x7f4ce6
// 006134a7  8b442420             mov eax, dword ptr [esp + 0x20]
// 006134ab  2944241c             sub dword ptr [esp + 0x1c], eax
// 006134af  29442424             sub dword ptr [esp + 0x24], eax
// 006134b3  01442430             add dword ptr [esp + 0x30], eax
// 006134b7  03e8                 add ebp, eax
// 006134b9  83c40c               add esp, 0xc
// 006134bc  294740               sub dword ptr [edi + 0x40], eax
// 006134bf  8b442410             mov eax, dword ptr [esp + 0x10]
// 006134c3  e9510a0000           jmp 0x613f19
// 006134c8  83fe0e               cmp esi, 0xe
// 006134cb  7323                 jae 0x6134f0
// 006134cd  8d4900               lea ecx, [ecx]
// 006134d0  85c0                 test eax, eax
// 006134d2  0f849b0a0000         je 0x613f73
// 006134d8  0fb65500             movzx edx, byte ptr [ebp]
// 006134dc  8bce                 mov ecx, esi
// 006134de  d3e2                 shl edx, cl
// 006134e0  48                   dec eax
// 006134e1  83c608               add esi, 8
// 006134e4  45                   inc ebp
// 006134e5  03da                 add ebx, edx
// 006134e7  89442410             mov dword ptr [esp + 0x10], eax
// 006134eb  83fe0e               cmp esi, 0xe
// 006134ee  72e0                 jb 0x6134d0
// 006134f0  8bcb                 mov ecx, ebx
// 006134f2  83e11f               and ecx, 0x1f
// 006134f5  c1eb05               shr ebx, 5
// 006134f8  81c101010000         add ecx, 0x101
// 006134fe  8bd3                 mov edx, ebx
// 00613500  894f60               mov dword ptr [edi + 0x60], ecx
// 00613503  c1eb05               shr ebx, 5
// 00613506  8bcb                 mov ecx, ebx
// 00613508  83e21f               and edx, 0x1f
// 0061350b  83e10f               and ecx, 0xf
// 0061350e  42                   inc edx
// 0061350f  83c104               add ecx, 4
// 00613512  c1eb04               shr ebx, 4
// 00613515  83ee0e               sub esi, 0xe
// 00613518  817f601e010000       cmp dword ptr [edi + 0x60], 0x11e
// 0061351f  895764               mov dword ptr [edi + 0x64], edx
// 00613522  894f5c               mov dword ptr [edi + 0x5c], ecx
// 00613525  0f87eb000000         ja 0x613616
// 0061352b  83fa1e               cmp edx, 0x1e
// 0061352e  0f87e2000000         ja 0x613616
// 00613534  c7476800000000       mov dword ptr [edi + 0x68], 0
// 0061353b  c70710000000         mov dword ptr [edi], 0x10
// 00613541  8b4f68               mov ecx, dword ptr [edi + 0x68]
// 00613544  3b4f5c               cmp ecx, dword ptr [edi + 0x5c]
// 00613547  7352                 jae 0x61359b
// 00613549  8da42400000000       lea esp, [esp]
// 00613550  83fe03               cmp esi, 3
// 00613553  7320                 jae 0x613575
// 00613555  85c0                 test eax, eax
// 00613557  0f84160a0000         je 0x613f73
// 0061355d  0fb65500             movzx edx, byte ptr [ebp]
// 00613561  8bce                 mov ecx, esi
// 00613563  d3e2                 shl edx, cl
// 00613565  48                   dec eax
// 00613566  83c608               add esi, 8
// 00613569  45                   inc ebp
// 0061356a  03da                 add ebx, edx
// 0061356c  89442410             mov dword ptr [esp + 0x10], eax
// 00613570  83fe03               cmp esi, 3
// 00613573  72e0                 jb 0x613555
// 00613575  8b5768               mov edx, dword ptr [edi + 0x68]
// 00613578  0fb71455b08b9c00     movzx edx, word ptr [edx*2 + 0x9c8bb0]
// 00613580  8bcb                 mov ecx, ebx
// 00613582  83e107               and ecx, 7
// 00613585  66894c5770           mov word ptr [edi + edx*2 + 0x70], cx
// 0061358a  ff4768               inc dword ptr [edi + 0x68]
// 0061358d  8b4f68               mov ecx, dword ptr [edi + 0x68]
// 00613590  c1eb03               shr ebx, 3
// 00613593  83ee03               sub esi, 3
// 00613596  3b4f5c               cmp ecx, dword ptr [edi + 0x5c]
// 00613599  72b5                 jb 0x613550
// 0061359b  b813000000           mov eax, 0x13
// 006135a0  394768               cmp dword ptr [edi + 0x68], eax
// 006135a3  7325                 jae 0x6135ca
// 006135a5  eb09                 jmp 0x6135b0
// 006135a7  8da42400000000       lea esp, [esp]
// 006135ae  8bff                 mov edi, edi
// 006135b0  8b5768               mov edx, dword ptr [edi + 0x68]
// 006135b3  0fb70c55b08b9c00     movzx ecx, word ptr [edx*2 + 0x9c8bb0]
// 006135bb  33d2                 xor edx, edx
// 006135bd  6689544f70           mov word ptr [edi + ecx*2 + 0x70], dx
// 006135c2  ff4768               inc dword ptr [edi + 0x68]
// 006135c5  394768               cmp dword ptr [edi + 0x68], eax
// 006135c8  72e6                 jb 0x6135b0
// 006135ca  8d8730050000         lea eax, [edi + 0x530]
// 006135d0  8d4f6c               lea ecx, [edi + 0x6c]
// 006135d3  8901                 mov dword ptr [ecx], eax
// 006135d5  89474c               mov dword ptr [edi + 0x4c], eax
// 006135d8  8d97f0020000         lea edx, [edi + 0x2f0]
// 006135de  52                   push edx
// 006135df  8d4754               lea eax, [edi + 0x54]
// 006135e2  50                   push eax
// 006135e3  51                   push ecx
// 006135e4  c70007000000         mov dword ptr [eax], 7
// 006135ea  6a13                 push 0x13
// 006135ec  8d4770               lea eax, [edi + 0x70]
// 006135ef  50                   push eax
// 006135f0  6a00                 push 0
// 006135f2  e8a98f0000           call 0x61c5a0
// 006135f7  83c418               add esp, 0x18
// 006135fa  89442430             mov dword ptr [esp + 0x30], eax
// 006135fe  85c0                 test eax, eax
// 00613600  8b442410             mov eax, dword ptr [esp + 0x10]
// 00613604  7420                 je 0x613626
// 00613606  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0061360a  c74118d08c9c00       mov dword ptr [ecx + 0x18], 0x9c8cd0
// 00613611  e9fd080000           jmp 0x613f13
// 00613616  8b542440             mov edx, dword ptr [esp + 0x40]
// 0061361a  c74218ac8c9c00       mov dword ptr [edx + 0x18], 0x9c8cac
// 00613621  e9ed080000           jmp 0x613f13
// 00613626  c7476800000000       mov dword ptr [edi + 0x68], 0
// 0061362d  c70711000000         mov dword ptr [edi], 0x11
// 00613633  8b5764               mov edx, dword ptr [edi + 0x64]
// 00613636  035760               add edx, dword ptr [edi + 0x60]
// 00613639  395768               cmp dword ptr [edi + 0x68], edx
// 0061363c  0f8314020000         jae 0x613856
// 00613642  8b4f54               mov ecx, dword ptr [edi + 0x54]
// 00613645  ba01000000           mov edx, 1
// 0061364a  d3e2                 shl edx, cl
// 0061364c  8b4f4c               mov ecx, dword ptr [edi + 0x4c]
// 0061364f  4a                   dec edx
// 00613650  23d3                 and edx, ebx
// 00613652  8b0c91               mov ecx, dword ptr [ecx + edx*4]
// 00613655  8bd1                 mov edx, ecx
// 00613657  c1ea08               shr edx, 8
// 0061365a  0fb6d2               movzx edx, dl
// 0061365d  894c2414             mov dword ptr [esp + 0x14], ecx
// 00613661  3bd6                 cmp edx, esi
// 00613663  763e                 jbe 0x6136a3
// 00613665  85c0                 test eax, eax
// 00613667  0f8406090000         je 0x613f73
// 0061366d  0fb65500             movzx edx, byte ptr [ebp]
// 00613671  8bce                 mov ecx, esi
// 00613673  d3e2                 shl edx, cl
// 00613675  8b4f54               mov ecx, dword ptr [edi + 0x54]
// 00613678  48                   dec eax
// 00613679  83c608               add esi, 8
// 0061367c  03da                 add ebx, edx
// 0061367e  ba01000000           mov edx, 1
// 00613683  d3e2                 shl edx, cl
// 00613685  8b4f4c               mov ecx, dword ptr [edi + 0x4c]
// 00613688  45                   inc ebp
// 00613689  89442410             mov dword ptr [esp + 0x10], eax
// 0061368d  4a                   dec edx
// 0061368e  23d3                 and edx, ebx
// 00613690  8b0c91               mov ecx, dword ptr [ecx + edx*4]
// 00613693  8bd1                 mov edx, ecx
// 00613695  c1ea08               shr edx, 8
// 00613698  0fb6d2               movzx edx, dl
// 0061369b  894c2414             mov dword ptr [esp + 0x14], ecx
// 0061369f  3bd6                 cmp edx, esi
// 006136a1  77c2                 ja 0x613665
// 006136a3  8bd1                 mov edx, ecx
// 006136a5  c1ea10               shr edx, 0x10
// 006136a8  83fa10               cmp edx, 0x10
// 006136ab  7355                 jae 0x613702
// 006136ad  8bd1                 mov edx, ecx
// 006136af  c1ea08               shr edx, 8
// 006136b2  0fb6d2               movzx edx, dl
// 006136b5  3bf2                 cmp esi, edx
// 006136b7  732d                 jae 0x6136e6
// 006136b9  8da42400000000       lea esp, [esp]
// 006136c0  85c0                 test eax, eax
// 006136c2  0f84ab080000         je 0x613f73
// 006136c8  0fb65500             movzx edx, byte ptr [ebp]
// 006136cc  8bce                 mov ecx, esi
// 006136ce  d3e2                 shl edx, cl
// 006136d0  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006136d4  48                   dec eax
// 006136d5  83c608               add esi, 8
// 006136d8  03da                 add ebx, edx
// 006136da  0fb6d5               movzx edx, ch
// 006136dd  45                   inc ebp
// 006136de  89442410             mov dword ptr [esp + 0x10], eax
// 006136e2  3bf2                 cmp esi, edx
// 006136e4  72da                 jb 0x6136c0
// 006136e6  668b542416           mov dx, word ptr [esp + 0x16]
// 006136eb  0fb6cd               movzx ecx, ch
// 006136ee  d3eb                 shr ebx, cl
// 006136f0  2bf1                 sub esi, ecx
// 006136f2  8b4f68               mov ecx, dword ptr [edi + 0x68]
// 006136f5  6689544f70           mov word ptr [edi + ecx*2 + 0x70], dx
// 006136fa  ff4768               inc dword ptr [edi + 0x68]
// 006136fd  e945010000           jmp 0x613847
// 00613702  668b542416           mov dx, word ptr [esp + 0x16]
// 00613707  0fb6cd               movzx ecx, ch
// 0061370a  894c242c             mov dword ptr [esp + 0x2c], ecx
// 0061370e  6683fa10             cmp dx, 0x10
// 00613712  7561                 jne 0x613775
// 00613714  8d5102               lea edx, [ecx + 2]
// 00613717  3bf2                 cmp esi, edx
// 00613719  732b                 jae 0x613746
// 0061371b  eb03                 jmp 0x613720
// 0061371d  8d4900               lea ecx, [ecx]
// 00613720  85c0                 test eax, eax
// 00613722  0f844b080000         je 0x613f73
// 00613728  0fb65500             movzx edx, byte ptr [ebp]
// 0061372c  8bce                 mov ecx, esi
// 0061372e  d3e2                 shl edx, cl
// 00613730  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00613734  48                   dec eax
// 00613735  83c608               add esi, 8
// 00613738  03da                 add ebx, edx
// 0061373a  8d5102               lea edx, [ecx + 2]
// 0061373d  45                   inc ebp
// 0061373e  89442410             mov dword ptr [esp + 0x10], eax
// 00613742  3bf2                 cmp esi, edx
// 00613744  72da                 jb 0x613720
// 00613746  d3eb                 shr ebx, cl
// 00613748  2bf1                 sub esi, ecx
// 0061374a  8b4f68               mov ecx, dword ptr [edi + 0x68]
// 0061374d  85c9                 test ecx, ecx
// 0061374f  0f8458010000         je 0x6138ad
// 00613755  0fb74c4f6e           movzx ecx, word ptr [edi + ecx*2 + 0x6e]
// 0061375a  894c2420             mov dword ptr [esp + 0x20], ecx
// 0061375e  8bcb                 mov ecx, ebx
// 00613760  83e103               and ecx, 3
// 00613763  83c103               add ecx, 3
// 00613766  c1eb02               shr ebx, 2
// 00613769  894c2414             mov dword ptr [esp + 0x14], ecx
// 0061376d  83ee02               sub esi, 2
// 00613770  e99e000000           jmp 0x613813
// 00613775  6683fa11             cmp dx, 0x11
// 00613779  7545                 jne 0x6137c0
// 0061377b  8d5103               lea edx, [ecx + 3]
// 0061377e  3bf2                 cmp esi, edx
// 00613780  7326                 jae 0x6137a8
// 00613782  85c0                 test eax, eax
// 00613784  0f84e9070000         je 0x613f73
// 0061378a  0fb65500             movzx edx, byte ptr [ebp]
// 0061378e  8bce                 mov ecx, esi
// 00613790  d3e2                 shl edx, cl
// 00613792  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00613796  48                   dec eax
// 00613797  83c608               add esi, 8
// 0061379a  03da                 add ebx, edx
// 0061379c  8d5103               lea edx, [ecx + 3]
// 0061379f  45                   inc ebp
// 006137a0  89442410             mov dword ptr [esp + 0x10], eax
// 006137a4  3bf2                 cmp esi, edx
// 006137a6  72da                 jb 0x613782
// 006137a8  d3eb                 shr ebx, cl
// 006137aa  8bd3                 mov edx, ebx
// 006137ac  83e207               and edx, 7
// 006137af  83c203               add edx, 3
// 006137b2  89542414             mov dword ptr [esp + 0x14], edx
// 006137b6  c1eb03               shr ebx, 3
// 006137b9  bafdffffff           mov edx, 0xfffffffd
// 006137be  eb43                 jmp 0x613803
// 006137c0  8d5107               lea edx, [ecx + 7]
// 006137c3  3bf2                 cmp esi, edx
// 006137c5  7326                 jae 0x6137ed
// 006137c7  85c0                 test eax, eax
// 006137c9  0f84a4070000         je 0x613f73
// 006137cf  0fb65500             movzx edx, byte ptr [ebp]
// 006137d3  8bce                 mov ecx, esi
// 006137d5  d3e2                 shl edx, cl
// 006137d7  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 006137db  48                   dec eax
// 006137dc  83c608               add esi, 8
// 006137df  03da                 add ebx, edx
// 006137e1  8d5107               lea edx, [ecx + 7]
// 006137e4  45                   inc ebp
// 006137e5  89442410             mov dword ptr [esp + 0x10], eax
// 006137e9  3bf2                 cmp esi, edx
// 006137eb  72da                 jb 0x6137c7
// 006137ed  d3eb                 shr ebx, cl
// 006137ef  8bd3                 mov edx, ebx
// 006137f1  83e27f               and edx, 0x7f
// 006137f4  83c20b               add edx, 0xb
// 006137f7  89542414             mov dword ptr [esp + 0x14], edx
// 006137fb  c1eb07               shr ebx, 7
// 006137fe  baf9ffffff           mov edx, 0xfffffff9
// 00613803  2bd1                 sub edx, ecx
// 00613805  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00613809  03f2                 add esi, edx
// 0061380b  c744242000000000     mov dword ptr [esp + 0x20], 0
// 00613813  8b5768               mov edx, dword ptr [edi + 0x68]
// 00613816  03d1                 add edx, ecx
// 00613818  8b4f64               mov ecx, dword ptr [edi + 0x64]
// 0061381b  034f60               add ecx, dword ptr [edi + 0x60]
// 0061381e  3bd1                 cmp edx, ecx
// 00613820  0f8797000000         ja 0x6138bd
// 00613826  837c241400           cmp dword ptr [esp + 0x14], 0
// 0061382b  741a                 je 0x613847
// 0061382d  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00613831  8b5768               mov edx, dword ptr [edi + 0x68]
// 00613834  ff4c2414             dec dword ptr [esp + 0x14]
// 00613838  66894c5770           mov word ptr [edi + edx*2 + 0x70], cx
// 0061383d  ff4768               inc dword ptr [edi + 0x68]
// 00613840  837c241400           cmp dword ptr [esp + 0x14], 0
// 00613845  75ea                 jne 0x613831
// 00613847  8b4f64               mov ecx, dword ptr [edi + 0x64]
// 0061384a  034f60               add ecx, dword ptr [edi + 0x60]
// 0061384d  394f68               cmp dword ptr [edi + 0x68], ecx
// 00613850  0f82ecfdffff         jb 0x613642
// 00613856  833f1b               cmp dword ptr [edi], 0x1b
// 00613859  0f84ba060000         je 0x613f19
// 0061385f  8d8730050000         lea eax, [edi + 0x530]
// 00613865  8d4f6c               lea ecx, [edi + 0x6c]
// 00613868  8901                 mov dword ptr [ecx], eax
// 0061386a  89474c               mov dword ptr [edi + 0x4c], eax
// 0061386d  8d97f0020000         lea edx, [edi + 0x2f0]
// 00613873  52                   push edx
// 00613874  8b5760               mov edx, dword ptr [edi + 0x60]
// 00613877  8d4754               lea eax, [edi + 0x54]
// 0061387a  50                   push eax
// 0061387b  51                   push ecx
// 0061387c  c70009000000         mov dword ptr [eax], 9
// 00613882  52                   push edx
// 00613883  8d4770               lea eax, [edi + 0x70]
// 00613886  50                   push eax
// 00613887  6a01                 push 1
// 00613889  e8128d0000           call 0x61c5a0
// 0061388e  83c418               add esp, 0x18
// 00613891  89442430             mov dword ptr [esp + 0x30], eax
// 00613895  85c0                 test eax, eax
// 00613897  7434                 je 0x6138cd
// 00613899  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0061389d  8b442410             mov eax, dword ptr [esp + 0x10]
// 006138a1  c74118908c9c00       mov dword ptr [ecx + 0x18], 0x9c8c90
// 006138a8  e966060000           jmp 0x613f13
// 006138ad  8b542440             mov edx, dword ptr [esp + 0x40]
// 006138b1  c74218748c9c00       mov dword ptr [edx + 0x18], 0x9c8c74
// 006138b8  e956060000           jmp 0x613f13
// 006138bd  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 006138c1  c74118748c9c00       mov dword ptr [ecx + 0x18], 0x9c8c74
// 006138c8  e946060000           jmp 0x613f13
// 006138cd  8b576c               mov edx, dword ptr [edi + 0x6c]
// 006138d0  8d4f6c               lea ecx, [edi + 0x6c]
// 006138d3  895750               mov dword ptr [edi + 0x50], edx
// 006138d6  8d97f0020000         lea edx, [edi + 0x2f0]
// 006138dc  52                   push edx
// 006138dd  8d4758               lea eax, [edi + 0x58]
// 006138e0  50                   push eax
// 006138e1  51                   push ecx
// 006138e2  8b4f60               mov ecx, dword ptr [edi + 0x60]
// 006138e5  c70006000000         mov dword ptr [eax], 6
// 006138eb  8b4764               mov eax, dword ptr [edi + 0x64]
// 006138ee  50                   push eax
// 006138ef  8d544f70             lea edx, [edi + ecx*2 + 0x70]
// 006138f3  52                   push edx
// 006138f4  6a02                 push 2
// 006138f6  e8a58c0000           call 0x61c5a0
// 006138fb  83c418               add esp, 0x18
// 006138fe  89442430             mov dword ptr [esp + 0x30], eax
// 00613902  85c0                 test eax, eax
// 00613904  7414                 je 0x61391a
// 00613906  8b442440             mov eax, dword ptr [esp + 0x40]
// 0061390a  c740185c8c9c00       mov dword ptr [eax + 0x18], 0x9c8c5c
// 00613911  8b442410             mov eax, dword ptr [esp + 0x10]
// 00613915  e9f9050000           jmp 0x613f13
// 0061391a  8b442410             mov eax, dword ptr [esp + 0x10]
// 0061391e  c70712000000         mov dword ptr [edi], 0x12
// 00613924  83f806               cmp eax, 6
// 00613927  725f                 jb 0x613988
// 00613929  817c241802010000     cmp dword ptr [esp + 0x18], 0x102
// 00613931  7255                 jb 0x613988
// 00613933  8b442440             mov eax, dword ptr [esp + 0x40]
// 00613937  8b542418             mov edx, dword ptr [esp + 0x18]
// 0061393b  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0061393f  895010               mov dword ptr [eax + 0x10], edx
// 00613942  8b542428             mov edx, dword ptr [esp + 0x28]
// 00613946  89480c               mov dword ptr [eax + 0xc], ecx
// 00613949  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0061394d  52                   push edx
// 0061394e  8928                 mov dword ptr [eax], ebp
// 00613950  894804               mov dword ptr [eax + 4], ecx
// 00613953  50                   push eax
// 00613954  895f38               mov dword ptr [edi + 0x38], ebx
// 00613957  89773c               mov dword ptr [edi + 0x3c], esi
// 0061395a  e8e1870000           call 0x61c140
// 0061395f  8b442448             mov eax, dword ptr [esp + 0x48]
// 00613963  8b480c               mov ecx, dword ptr [eax + 0xc]
// 00613966  8b5010               mov edx, dword ptr [eax + 0x10]
// 00613969  8b28                 mov ebp, dword ptr [eax]
// 0061396b  8b4004               mov eax, dword ptr [eax + 4]
// 0061396e  8b5f38               mov ebx, dword ptr [edi + 0x38]
// 00613971  8b773c               mov esi, dword ptr [edi + 0x3c]
// 00613974  83c408               add esp, 8
// 00613977  894c2424             mov dword ptr [esp + 0x24], ecx
// 0061397b  89542418             mov dword ptr [esp + 0x18], edx
// 0061397f  89442410             mov dword ptr [esp + 0x10], eax
// 00613983  e991050000           jmp 0x613f19
// 00613988  8b4f54               mov ecx, dword ptr [edi + 0x54]
// 0061398b  ba01000000           mov edx, 1
// 00613990  d3e2                 shl edx, cl
// 00613992  8b4f4c               mov ecx, dword ptr [edi + 0x4c]
// 00613995  4a                   dec edx
// 00613996  23d3                 and edx, ebx
// 00613998  8b1491               mov edx, dword ptr [ecx + edx*4]
// 0061399b  8bca                 mov ecx, edx
// 0061399d  c1e908               shr ecx, 8
// 006139a0  0fb6c9               movzx ecx, cl
// 006139a3  89542414             mov dword ptr [esp + 0x14], edx
// 006139a7  3bce                 cmp ecx, esi
// 006139a9  7643                 jbe 0x6139ee
// 006139ab  eb03                 jmp 0x6139b0
// 006139ad  8d4900               lea ecx, [ecx]
// 006139b0  85c0                 test eax, eax
// 006139b2  0f84bb050000         je 0x613f73
// 006139b8  0fb65500             movzx edx, byte ptr [ebp]
// 006139bc  8bce                 mov ecx, esi
// 006139be  d3e2                 shl edx, cl
// 006139c0  8b4f54               mov ecx, dword ptr [edi + 0x54]
// 006139c3  48                   dec eax
// 006139c4  83c608               add esi, 8
// 006139c7  03da                 add ebx, edx
// 006139c9  ba01000000           mov edx, 1
// 006139ce  d3e2                 shl edx, cl
// 006139d0  8b4f4c               mov ecx, dword ptr [edi + 0x4c]
// 006139d3  45                   inc ebp
// 006139d4  89442410             mov dword ptr [esp + 0x10], eax
// 006139d8  4a                   dec edx
// 006139d9  23d3                 and edx, ebx
// 006139db  8b1491               mov edx, dword ptr [ecx + edx*4]
// 006139de  8bca                 mov ecx, edx
// 006139e0  c1e908               shr ecx, 8
// 006139e3  0fb6c9               movzx ecx, cl
// 006139e6  89542414             mov dword ptr [esp + 0x14], edx
// 006139ea  3bce                 cmp ecx, esi
// 006139ec  77c2                 ja 0x6139b0
// 006139ee  84d2                 test dl, dl
// 006139f0  0f84c1000000         je 0x613ab7
// 006139f6  f6c2f0               test dl, 0xf0
// 006139f9  0f85b8000000         jne 0x613ab7
// 006139ff  8bca                 mov ecx, edx
// 00613a01  c1e908               shr ecx, 8
// 00613a04  894c2434             mov dword ptr [esp + 0x34], ecx
// 00613a08  0fb6c9               movzx ecx, cl
// 00613a0b  894c2420             mov dword ptr [esp + 0x20], ecx
// 00613a0f  0fb6ca               movzx ecx, dl
// 00613a12  034c2420             add ecx, dword ptr [esp + 0x20]
// 00613a16  8954242c             mov dword ptr [esp + 0x2c], edx
// 00613a1a  ba01000000           mov edx, 1
// 00613a1f  d3e2                 shl edx, cl
// 00613a21  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00613a25  4a                   dec edx
// 00613a26  23d3                 and edx, ebx
// 00613a28  d3ea                 shr edx, cl
// 00613a2a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00613a2e  c1e910               shr ecx, 0x10
// 00613a31  03d1                 add edx, ecx
// 00613a33  8b4f4c               mov ecx, dword ptr [edi + 0x4c]
// 00613a36  8b0c91               mov ecx, dword ptr [ecx + edx*4]
// 00613a39  894c2414             mov dword ptr [esp + 0x14], ecx
// 00613a3d  c1e908               shr ecx, 8
// 00613a40  0fb6d1               movzx edx, cl
// 00613a43  0fb64c2434           movzx ecx, byte ptr [esp + 0x34]
// 00613a48  03d1                 add edx, ecx
// 00613a4a  3bd6                 cmp edx, esi
// 00613a4c  765c                 jbe 0x613aaa
// 00613a4e  8bff                 mov edi, edi
// 00613a50  85c0                 test eax, eax
// 00613a52  0f841b050000         je 0x613f73
// 00613a58  0fb65500             movzx edx, byte ptr [ebp]
// 00613a5c  8bce                 mov ecx, esi
// 00613a5e  d3e2                 shl edx, cl
// 00613a60  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00613a64  48                   dec eax
// 00613a65  83c608               add esi, 8
// 00613a68  03da                 add ebx, edx
// 00613a6a  0fb6d5               movzx edx, ch
// 00613a6d  0fb6c9               movzx ecx, cl
// 00613a70  03ca                 add ecx, edx
// 00613a72  89542420             mov dword ptr [esp + 0x20], edx
// 00613a76  ba01000000           mov edx, 1
// 00613a7b  d3e2                 shl edx, cl
// 00613a7d  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00613a81  45                   inc ebp
// 00613a82  89442410             mov dword ptr [esp + 0x10], eax
// 00613a86  4a                   dec edx
// 00613a87  23d3                 and edx, ebx
// 00613a89  d3ea                 shr edx, cl
// 00613a8b  0fb74c242e           movzx ecx, word ptr [esp + 0x2e]
// 00613a90  03d1                 add edx, ecx
// 00613a92  8b4f4c               mov ecx, dword ptr [edi + 0x4c]
// 00613a95  8b0c91               mov ecx, dword ptr [ecx + edx*4]
// 00613a98  894c2414             mov dword ptr [esp + 0x14], ecx
// 00613a9c  c1e908               shr ecx, 8
// 00613a9f  0fb6d1               movzx edx, cl
// 00613aa2  03542420             add edx, dword ptr [esp + 0x20]
// 00613aa6  3bd6                 cmp edx, esi
// 00613aa8  77a6                 ja 0x613a50
// 00613aaa  0fb64c242d           movzx ecx, byte ptr [esp + 0x2d]
// 00613aaf  8b542414             mov edx, dword ptr [esp + 0x14]
// 00613ab3  d3eb                 shr ebx, cl
// 00613ab5  2bf1                 sub esi, ecx
// 00613ab7  8bca                 mov ecx, edx
// 00613ab9  c1e908               shr ecx, 8
// 00613abc  0fb6c9               movzx ecx, cl
// 00613abf  d3eb                 shr ebx, cl
// 00613ac1  2bf1                 sub esi, ecx
// 00613ac3  894c2420             mov dword ptr [esp + 0x20], ecx
// 00613ac7  8bca                 mov ecx, edx
// 00613ac9  c1e910               shr ecx, 0x10
// 00613acc  894f40               mov dword ptr [edi + 0x40], ecx
// 00613acf  84d2                 test dl, dl
// 00613ad1  750b                 jne 0x613ade
// 00613ad3  c70717000000         mov dword ptr [edi], 0x17
// 00613ad9  e93b040000           jmp 0x613f19
// 00613ade  f6c220               test dl, 0x20
// 00613ae1  740b                 je 0x613aee
// 00613ae3  c7070b000000         mov dword ptr [edi], 0xb
// 00613ae9  e92b040000           jmp 0x613f19
// 00613aee  f6c240               test dl, 0x40
// 00613af1  7410                 je 0x613b03
// 00613af3  8b542440             mov edx, dword ptr [esp + 0x40]
// 00613af7  c74218408c9c00       mov dword ptr [edx + 0x18], 0x9c8c40
// 00613afe  e910040000           jmp 0x613f13
// 00613b03  0fb6ca               movzx ecx, dl
// 00613b06  83e10f               and ecx, 0xf
// 00613b09  894f48               mov dword ptr [edi + 0x48], ecx
// 00613b0c  c70713000000         mov dword ptr [edi], 0x13
// 00613b12  8b4f48               mov ecx, dword ptr [edi + 0x48]
// 00613b15  85c9                 test ecx, ecx
// 00613b17  743b                 je 0x613b54
// 00613b19  3bf1                 cmp esi, ecx
// 00613b1b  7323                 jae 0x613b40
// 00613b1d  8d4900               lea ecx, [ecx]
// 00613b20  85c0                 test eax, eax
// 00613b22  0f844b040000         je 0x613f73
// 00613b28  0fb65500             movzx edx, byte ptr [ebp]
// 00613b2c  8bce                 mov ecx, esi
// 00613b2e  d3e2                 shl edx, cl
// 00613b30  48                   dec eax
// 00613b31  83c608               add esi, 8
// 00613b34  45                   inc ebp
// 00613b35  03da                 add ebx, edx
// 00613b37  89442410             mov dword ptr [esp + 0x10], eax
// 00613b3b  3b7748               cmp esi, dword ptr [edi + 0x48]
// 00613b3e  72e0                 jb 0x613b20
// 00613b40  8b4f48               mov ecx, dword ptr [edi + 0x48]
// 00613b43  ba01000000           mov edx, 1
// 00613b48  d3e2                 shl edx, cl
// 00613b4a  4a                   dec edx
// 00613b4b  23d3                 and edx, ebx
// 00613b4d  015740               add dword ptr [edi + 0x40], edx
// 00613b50  d3eb                 shr ebx, cl
// 00613b52  2bf1                 sub esi, ecx
// 00613b54  c70714000000         mov dword ptr [edi], 0x14
// 00613b5a  8b4f58               mov ecx, dword ptr [edi + 0x58]
// 00613b5d  ba01000000           mov edx, 1
// 00613b62  d3e2                 shl edx, cl
// 00613b64  8b4f50               mov ecx, dword ptr [edi + 0x50]
// 00613b67  4a                   dec edx
// 00613b68  23d3                 and edx, ebx
// 00613b6a  8b1491               mov edx, dword ptr [ecx + edx*4]
// 00613b6d  8bca                 mov ecx, edx
// 00613b6f  c1e908               shr ecx, 8
// 00613b72  0fb6c9               movzx ecx, cl
// 00613b75  89542414             mov dword ptr [esp + 0x14], edx
// 00613b79  3bce                 cmp ecx, esi
// 00613b7b  7641                 jbe 0x613bbe
// 00613b7d  8d4900               lea ecx, [ecx]
// 00613b80  85c0                 test eax, eax
// 00613b82  0f84eb030000         je 0x613f73
// 00613b88  0fb65500             movzx edx, byte ptr [ebp]
// 00613b8c  8bce                 mov ecx, esi
// 00613b8e  d3e2                 shl edx, cl
// 00613b90  8b4f58               mov ecx, dword ptr [edi + 0x58]
// 00613b93  48                   dec eax
// 00613b94  83c608               add esi, 8
// 00613b97  03da                 add ebx, edx
// 00613b99  ba01000000           mov edx, 1
// 00613b9e  d3e2                 shl edx, cl
// 00613ba0  8b4f50               mov ecx, dword ptr [edi + 0x50]
// 00613ba3  45                   inc ebp
// 00613ba4  89442410             mov dword ptr [esp + 0x10], eax
// 00613ba8  4a                   dec edx
// 00613ba9  23d3                 and edx, ebx
// 00613bab  8b1491               mov edx, dword ptr [ecx + edx*4]
// 00613bae  8bca                 mov ecx, edx
// 00613bb0  c1e908               shr ecx, 8
// 00613bb3  0fb6c9               movzx ecx, cl
// 00613bb6  89542414             mov dword ptr [esp + 0x14], edx
// 00613bba  3bce                 cmp ecx, esi
// 00613bbc  77c2                 ja 0x613b80
// 00613bbe  f6c2f0               test dl, 0xf0
// 00613bc1  0f85b6000000         jne 0x613c7d
// 00613bc7  8bca                 mov ecx, edx
// 00613bc9  c1e908               shr ecx, 8
// 00613bcc  894c2434             mov dword ptr [esp + 0x34], ecx
// 00613bd0  0fb6c9               movzx ecx, cl
// 00613bd3  894c2420             mov dword ptr [esp + 0x20], ecx
// 00613bd7  0fb6ca               movzx ecx, dl
// 00613bda  034c2420             add ecx, dword ptr [esp + 0x20]
// 00613bde  8954242c             mov dword ptr [esp + 0x2c], edx
// 00613be2  ba01000000           mov edx, 1
// 00613be7  d3e2                 shl edx, cl
// 00613be9  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00613bed  4a                   dec edx
// 00613bee  23d3                 and edx, ebx
// 00613bf0  d3ea                 shr edx, cl
// 00613bf2  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00613bf6  c1e910               shr ecx, 0x10
// 00613bf9  03d1                 add edx, ecx
// 00613bfb  8b4f50               mov ecx, dword ptr [edi + 0x50]
// 00613bfe  8b0c91               mov ecx, dword ptr [ecx + edx*4]
// 00613c01  894c2414             mov dword ptr [esp + 0x14], ecx
// 00613c05  c1e908               shr ecx, 8
// 00613c08  0fb6d1               movzx edx, cl
// 00613c0b  0fb64c2434           movzx ecx, byte ptr [esp + 0x34]
// 00613c10  03d1                 add edx, ecx
// 00613c12  3bd6                 cmp edx, esi
// 00613c14  765a                 jbe 0x613c70
// 00613c16  85c0                 test eax, eax
// 00613c18  0f8455030000         je 0x613f73
// 00613c1e  0fb65500             movzx edx, byte ptr [ebp]
// 00613c22  8bce                 mov ecx, esi
// 00613c24  d3e2                 shl edx, cl
// 00613c26  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00613c2a  48                   dec eax
// 00613c2b  83c608               add esi, 8
// 00613c2e  03da                 add ebx, edx
// 00613c30  0fb6d5               movzx edx, ch
// 00613c33  0fb6c9               movzx ecx, cl
// 00613c36  03ca                 add ecx, edx
// 00613c38  89542420             mov dword ptr [esp + 0x20], edx
// 00613c3c  ba01000000           mov edx, 1
// 00613c41  d3e2                 shl edx, cl
// 00613c43  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00613c47  45                   inc ebp
// 00613c48  89442410             mov dword ptr [esp + 0x10], eax
// 00613c4c  4a                   dec edx
// 00613c4d  23d3                 and edx, ebx
// 00613c4f  d3ea                 shr edx, cl
// 00613c51  0fb74c242e           movzx ecx, word ptr [esp + 0x2e]
// 00613c56  03d1                 add edx, ecx
// 00613c58  8b4f50               mov ecx, dword ptr [edi + 0x50]
// 00613c5b  8b0c91               mov ecx, dword ptr [ecx + edx*4]
// 00613c5e  894c2414             mov dword ptr [esp + 0x14], ecx
// 00613c62  c1e908               shr ecx, 8
// 00613c65  0fb6d1               movzx edx, cl
// 00613c68  03542420             add edx, dword ptr [esp + 0x20]
// 00613c6c  3bd6                 cmp edx, esi
// 00613c6e  77a6                 ja 0x613c16
// 00613c70  0fb64c242d           movzx ecx, byte ptr [esp + 0x2d]
// 00613c75  8b542414             mov edx, dword ptr [esp + 0x14]
// 00613c79  d3eb                 shr ebx, cl
// 00613c7b  2bf1                 sub esi, ecx
// 00613c7d  8bca                 mov ecx, edx
// 00613c7f  c1e908               shr ecx, 8
// 00613c82  0fb6c9               movzx ecx, cl
// 00613c85  d3eb                 shr ebx, cl
// 00613c87  2bf1                 sub esi, ecx
// 00613c89  894c2420             mov dword ptr [esp + 0x20], ecx
// 00613c8d  f6c240               test dl, 0x40
// 00613c90  7410                 je 0x613ca2
// 00613c92  8b542440             mov edx, dword ptr [esp + 0x40]
// 00613c96  c74218288c9c00       mov dword ptr [edx + 0x18], 0x9c8c28
// 00613c9d  e971020000           jmp 0x613f13
// 00613ca2  8bca                 mov ecx, edx
// 00613ca4  0fb6d2               movzx edx, dl
// 00613ca7  c1e910               shr ecx, 0x10
// 00613caa  83e20f               and edx, 0xf
// 00613cad  894f44               mov dword ptr [edi + 0x44], ecx
// 00613cb0  895748               mov dword ptr [edi + 0x48], edx
// 00613cb3  c70715000000         mov dword ptr [edi], 0x15
// 00613cb9  8b4f48               mov ecx, dword ptr [edi + 0x48]
// 00613cbc  85c9                 test ecx, ecx
// 00613cbe  7438                 je 0x613cf8
// 00613cc0  3bf1                 cmp esi, ecx
// 00613cc2  7320                 jae 0x613ce4
// 00613cc4  85c0                 test eax, eax
// 00613cc6  0f84a7020000         je 0x613f73
// 00613ccc  0fb65500             movzx edx, byte ptr [ebp]
// 00613cd0  8bce                 mov ecx, esi
// 00613cd2  d3e2                 shl edx, cl
// 00613cd4  48                   dec eax
// 00613cd5  83c608               add esi, 8
// 00613cd8  45                   inc ebp
// 00613cd9  03da                 add ebx, edx
// 00613cdb  89442410             mov dword ptr [esp + 0x10], eax
// 00613cdf  3b7748               cmp esi, dword ptr [edi + 0x48]
// 00613ce2  72e0                 jb 0x613cc4
// 00613ce4  8b4f48               mov ecx, dword ptr [edi + 0x48]
// 00613ce7  ba01000000           mov edx, 1
// 00613cec  d3e2                 shl edx, cl
// 00613cee  4a                   dec edx
// 00613cef  23d3                 and edx, ebx
// 00613cf1  015744               add dword ptr [edi + 0x44], edx
// 00613cf4  d3eb                 shr ebx, cl
// 00613cf6  2bf1                 sub esi, ecx
// 00613cf8  8b4f2c               mov ecx, dword ptr [edi + 0x2c]
// 00613cfb  2b4c2418             sub ecx, dword ptr [esp + 0x18]
// 00613cff  034c2428             add ecx, dword ptr [esp + 0x28]
// 00613d03  394f44               cmp dword ptr [edi + 0x44], ecx
// 00613d06  7610                 jbe 0x613d18
// 00613d08  8b542440             mov edx, dword ptr [esp + 0x40]
// 00613d0c  c74218088c9c00       mov dword ptr [edx + 0x18], 0x9c8c08
// 00613d13  e9fb010000           jmp 0x613f13
// 00613d18  c70716000000         mov dword ptr [edi], 0x16
// 00613d1e  837c241800           cmp dword ptr [esp + 0x18], 0
// 00613d23  0f844a020000         je 0x613f73
// 00613d29  8b542428             mov edx, dword ptr [esp + 0x28]
// 00613d2d  2b542418             sub edx, dword ptr [esp + 0x18]
// 00613d31  8b4f44               mov ecx, dword ptr [edi + 0x44]
// 00613d34  3bca                 cmp ecx, edx
// 00613d36  763c                 jbe 0x613d74
// 00613d38  2bca                 sub ecx, edx
// 00613d3a  8b5730               mov edx, dword ptr [edi + 0x30]
// 00613d3d  894c2414             mov dword ptr [esp + 0x14], ecx
// 00613d41  3bca                 cmp ecx, edx
// 00613d43  7610                 jbe 0x613d55
// 00613d45  2bca                 sub ecx, edx
// 00613d47  8b5734               mov edx, dword ptr [edi + 0x34]
// 00613d4a  035728               add edx, dword ptr [edi + 0x28]
// 00613d4d  894c2414             mov dword ptr [esp + 0x14], ecx
// 00613d51  2bd1                 sub edx, ecx
// 00613d53  eb0c                 jmp 0x613d61
// 00613d55  8b5734               mov edx, dword ptr [edi + 0x34]
// 00613d58  2bd1                 sub edx, ecx
// 00613d5a  035730               add edx, dword ptr [edi + 0x30]
// 00613d5d  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00613d61  8954242c             mov dword ptr [esp + 0x2c], edx
// 00613d65  8b5740               mov edx, dword ptr [edi + 0x40]
// 00613d68  89542434             mov dword ptr [esp + 0x34], edx
// 00613d6c  3bca                 cmp ecx, edx
// 00613d6e  7619                 jbe 0x613d89
// 00613d70  8bca                 mov ecx, edx
// 00613d72  eb11                 jmp 0x613d85
// 00613d74  8b542424             mov edx, dword ptr [esp + 0x24]
// 00613d78  2bd1                 sub edx, ecx
// 00613d7a  8b4f40               mov ecx, dword ptr [edi + 0x40]
// 00613d7d  8954242c             mov dword ptr [esp + 0x2c], edx
// 00613d81  894c2434             mov dword ptr [esp + 0x34], ecx
// 00613d85  894c2414             mov dword ptr [esp + 0x14], ecx
// 00613d89  8b542418             mov edx, dword ptr [esp + 0x18]
// 00613d8d  3bca                 cmp ecx, edx
// 00613d8f  7606                 jbe 0x613d97
// 00613d91  8bca                 mov ecx, edx
// 00613d93  894c2414             mov dword ptr [esp + 0x14], ecx
// 00613d97  2bd1                 sub edx, ecx
// 00613d99  89542418             mov dword ptr [esp + 0x18], edx
// 00613d9d  8b542434             mov edx, dword ptr [esp + 0x34]
// 00613da1  2bd1                 sub edx, ecx
// 00613da3  895740               mov dword ptr [edi + 0x40], edx
// 00613da6  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00613daa  8a11                 mov dl, byte ptr [ecx]
// 00613dac  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00613db0  8811                 mov byte ptr [ecx], dl
// 00613db2  ba01000000           mov edx, 1
// 00613db7  0154242c             add dword ptr [esp + 0x2c], edx
// 00613dbb  03ca                 add ecx, edx
// 00613dbd  29542414             sub dword ptr [esp + 0x14], edx
// 00613dc1  894c2424             mov dword ptr [esp + 0x24], ecx
// 00613dc5  75df                 jne 0x613da6
// 00613dc7  837f4000             cmp dword ptr [edi + 0x40], 0
// 00613dcb  0f8548010000         jne 0x613f19
// 00613dd1  c70712000000         mov dword ptr [edi], 0x12
// 00613dd7  e93d010000           jmp 0x613f19
// 00613ddc  837c241800           cmp dword ptr [esp + 0x18], 0
// 00613de1  0f848c010000         je 0x613f73
// 00613de7  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00613deb  8a5740               mov dl, byte ptr [edi + 0x40]
// 00613dee  8811                 mov byte ptr [ecx], dl
// 00613df0  41                   inc ecx
// 00613df1  ff4c2418             dec dword ptr [esp + 0x18]
// 00613df5  894c2424             mov dword ptr [esp + 0x24], ecx
// 00613df9  c70712000000         mov dword ptr [edi], 0x12
// 00613dff  e915010000           jmp 0x613f19
// 00613e04  837f0800             cmp dword ptr [edi + 8], 0
// 00613e08  0f84ba000000         je 0x613ec8
// 00613e0e  83fe20               cmp esi, 0x20
// 00613e11  7320                 jae 0x613e33
// 00613e13  85c0                 test eax, eax
// 00613e15  0f8458010000         je 0x613f73
// 00613e1b  0fb65500             movzx edx, byte ptr [ebp]
// 00613e1f  8bce                 mov ecx, esi
// 00613e21  d3e2                 shl edx, cl
// 00613e23  48                   dec eax
// 00613e24  83c608               add esi, 8
// 00613e27  45                   inc ebp
// 00613e28  03da                 add ebx, edx
// 00613e2a  89442410             mov dword ptr [esp + 0x10], eax
// 00613e2e  83fe20               cmp esi, 0x20
// 00613e31  72e0                 jb 0x613e13
// 00613e33  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00613e37  2b4c2418             sub ecx, dword ptr [esp + 0x18]
// 00613e3b  8b542440             mov edx, dword ptr [esp + 0x40]
// 00613e3f  014a14               add dword ptr [edx + 0x14], ecx
// 00613e42  014f1c               add dword ptr [edi + 0x1c], ecx
// 00613e45  894c2428             mov dword ptr [esp + 0x28], ecx
// 00613e49  85c9                 test ecx, ecx
// 00613e4b  7431                 je 0x613e7e
// 00613e4d  8b5718               mov edx, dword ptr [edi + 0x18]
// 00613e50  8bc1                 mov eax, ecx
// 00613e52  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00613e56  50                   push eax
// 00613e57  2bc8                 sub ecx, eax
// 00613e59  837f1000             cmp dword ptr [edi + 0x10], 0
// 00613e5d  51                   push ecx
// 00613e5e  52                   push edx
// 00613e5f  7407                 je 0x613e68
// 00613e61  e83aebffff           call 0x6129a0
// 00613e66  eb05                 jmp 0x613e6d
// 00613e68  e8e3650000           call 0x61a450
// 00613e6d  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00613e71  894718               mov dword ptr [edi + 0x18], eax
// 00613e74  894130               mov dword ptr [ecx + 0x30], eax
// 00613e77  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00613e7b  83c40c               add esp, 0xc
// 00613e7e  837f1000             cmp dword ptr [edi + 0x10], 0
// 00613e82  8b542418             mov edx, dword ptr [esp + 0x18]
// 00613e86  89542428             mov dword ptr [esp + 0x28], edx
// 00613e8a  8bcb                 mov ecx, ebx
// 00613e8c  7524                 jne 0x613eb2
// 00613e8e  81e100ff0000         and ecx, 0xff00
// 00613e94  8bd3                 mov edx, ebx
// 00613e96  c1e210               shl edx, 0x10
// 00613e99  03ca                 add ecx, edx
// 00613e9b  8bd3                 mov edx, ebx
// 00613e9d  c1ea08               shr edx, 8
// 00613ea0  81e200ff0000         and edx, 0xff00
// 00613ea6  c1e108               shl ecx, 8
// 00613ea9  03ca                 add ecx, edx
// 00613eab  8bd3                 mov edx, ebx
// 00613ead  c1ea18               shr edx, 0x18
// 00613eb0  03ca                 add ecx, edx
// 00613eb2  3b4f18               cmp ecx, dword ptr [edi + 0x18]
// 00613eb5  740d                 je 0x613ec4
// 00613eb7  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00613ebb  c74118f08b9c00       mov dword ptr [ecx + 0x18], 0x9c8bf0
// 00613ec2  eb4f                 jmp 0x613f13
// 00613ec4  33db                 xor ebx, ebx
// 00613ec6  33f6                 xor esi, esi
// 00613ec8  c70719000000         mov dword ptr [edi], 0x19
// 00613ece  837f0800             cmp dword ptr [edi + 8], 0
// 00613ed2  0f8483000000         je 0x613f5b
// 00613ed8  837f1000             cmp dword ptr [edi + 0x10], 0
// 00613edc  747d                 je 0x613f5b
// 00613ede  83fe20               cmp esi, 0x20
// 00613ee1  7320                 jae 0x613f03
// 00613ee3  85c0                 test eax, eax
// 00613ee5  0f8488000000         je 0x613f73
// 00613eeb  0fb65500             movzx edx, byte ptr [ebp]
// 00613eef  8bce                 mov ecx, esi
// 00613ef1  d3e2                 shl edx, cl
// 00613ef3  48                   dec eax
// 00613ef4  83c608               add esi, 8
// 00613ef7  45                   inc ebp
// 00613ef8  03da                 add ebx, edx
// 00613efa  89442410             mov dword ptr [esp + 0x10], eax
// 00613efe  83fe20               cmp esi, 0x20
// 00613f01  72e0                 jb 0x613ee3
// 00613f03  3b5f1c               cmp ebx, dword ptr [edi + 0x1c]
// 00613f06  744f                 je 0x613f57
// 00613f08  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00613f0c  c74118d88b9c00       mov dword ptr [ecx + 0x18], 0x9c8bd8
// 00613f13  c7071b000000         mov dword ptr [edi], 0x1b
// 00613f19  8b0f                 mov ecx, dword ptr [edi]
// 00613f1b  83f91c               cmp ecx, 0x1c
// 00613f1e  0f864fedffff         jbe 0x612c73
// 00613f24  5e                   pop esi
// 00613f25  5d                   pop ebp
// 00613f26  5b                   pop ebx
// 00613f27  b8feffffff           mov eax, 0xfffffffe
// 00613f2c  5f                   pop edi
// 00613f2d  83c42c               add esp, 0x2c
// 00613f30  c3                   ret 
// 00613f31  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00613f35  894a0c               mov dword ptr [edx + 0xc], ecx
// 00613f38  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00613f3c  892a                 mov dword ptr [edx], ebp
// 00613f3e  894204               mov dword ptr [edx + 4], eax
// 00613f41  894a10               mov dword ptr [edx + 0x10], ecx
// 00613f44  89773c               mov dword ptr [edi + 0x3c], esi
// 00613f47  5e                   pop esi
// 00613f48  5d                   pop ebp
// 00613f49  895f38               mov dword ptr [edi + 0x38], ebx
// 00613f4c  5b                   pop ebx
// 00613f4d  b802000000           mov eax, 2
// 00613f52  5f                   pop edi
// 00613f53  83c42c               add esp, 0x2c
// 00613f56  c3                   ret 
// 00613f57  33db                 xor ebx, ebx
// 00613f59  33f6                 xor esi, esi
// 00613f5b  c7071a000000         mov dword ptr [edi], 0x1a
// 00613f61  c744243001000000     mov dword ptr [esp + 0x30], 1
// 00613f69  eb08                 jmp 0x613f73
// 00613f6b  c7442430fdffffff     mov dword ptr [esp + 0x30], 0xfffffffd
// 00613f73  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00613f77  8b542424             mov edx, dword ptr [esp + 0x24]
// 00613f7b  89510c               mov dword ptr [ecx + 0xc], edx
// 00613f7e  8b542418             mov edx, dword ptr [esp + 0x18]
// 00613f82  895110               mov dword ptr [ecx + 0x10], edx
// 00613f85  8929                 mov dword ptr [ecx], ebp
// 00613f87  894104               mov dword ptr [ecx + 4], eax
// 00613f8a  837f2800             cmp dword ptr [edi + 0x28], 0
// 00613f8e  895f38               mov dword ptr [edi + 0x38], ebx
// 00613f91  89773c               mov dword ptr [edi + 0x3c], esi
// 00613f94  750e                 jne 0x613fa4
// 00613f96  833f18               cmp dword ptr [edi], 0x18
// 00613f99  7d2d                 jge 0x613fc8
// 00613f9b  8b442428             mov eax, dword ptr [esp + 0x28]
// 00613f9f  3b4110               cmp eax, dword ptr [ecx + 0x10]
// 00613fa2  7424                 je 0x613fc8
// 00613fa4  8b442428             mov eax, dword ptr [esp + 0x28]
// 00613fa8  8b5c2440             mov ebx, dword ptr [esp + 0x40]
// 00613fac  e85febffff           call 0x612b10
// 00613fb1  85c0                 test eax, eax
// 00613fb3  7413                 je 0x613fc8
// 00613fb5  c7071c000000         mov dword ptr [edi], 0x1c
// 00613fbb  5e                   pop esi
// 00613fbc  5d                   pop ebp
// 00613fbd  5b                   pop ebx
// 00613fbe  b8fcffffff           mov eax, 0xfffffffc
// 00613fc3  5f                   pop edi
// 00613fc4  83c42c               add esp, 0x2c
// 00613fc7  c3                   ret 
// 00613fc8  8b742440             mov esi, dword ptr [esp + 0x40]
// 00613fcc  8b6c2438             mov ebp, dword ptr [esp + 0x38]
// 00613fd0  2b6e04               sub ebp, dword ptr [esi + 4]
// 00613fd3  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 00613fd7  2b5e10               sub ebx, dword ptr [esi + 0x10]
// 00613fda  016e08               add dword ptr [esi + 8], ebp
// 00613fdd  015e14               add dword ptr [esi + 0x14], ebx
// 00613fe0  015f1c               add dword ptr [edi + 0x1c], ebx
// 00613fe3  837f0800             cmp dword ptr [edi + 8], 0
// 00613fe7  7434                 je 0x61401d
// 00613fe9  85db                 test ebx, ebx
// 00613feb  7430                 je 0x61401d
// 00613fed  837f1000             cmp dword ptr [edi + 0x10], 0
// 00613ff1  53                   push ebx
// 00613ff2  7411                 je 0x614005
// 00613ff4  8b560c               mov edx, dword ptr [esi + 0xc]
// 00613ff7  8b4718               mov eax, dword ptr [edi + 0x18]
// 00613ffa  2bd3                 sub edx, ebx
// 00613ffc  52                   push edx
// 00613ffd  50                   push eax
// 00613ffe  e89de9ffff           call 0x6129a0
// 00614003  eb0f                 jmp 0x614014
// 00614005  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00614008  8b5718               mov edx, dword ptr [edi + 0x18]
// 0061400b  2bcb                 sub ecx, ebx
// 0061400d  51                   push ecx
// 0061400e  52                   push edx
// 0061400f  e83c640000           call 0x61a450
// 00614014  894718               mov dword ptr [edi + 0x18], eax
// 00614017  83c40c               add esp, 0xc
// 0061401a  894630               mov dword ptr [esi + 0x30], eax
// 0061401d  8b4704               mov eax, dword ptr [edi + 4]
// 00614020  f7d8                 neg eax
// 00614022  1bc0                 sbb eax, eax
// 00614024  83e040               and eax, 0x40
// 00614027  33c9                 xor ecx, ecx
// 00614029  833f0b               cmp dword ptr [edi], 0xb
// 0061402c  0f95c1               setne cl
// 0061402f  49                   dec ecx
// 00614030  81e180000000         and ecx, 0x80
// 00614036  03c1                 add eax, ecx
// 00614038  03473c               add eax, dword ptr [edi + 0x3c]
// 0061403b  89462c               mov dword ptr [esi + 0x2c], eax
// 0061403e  85ed                 test ebp, ebp
// 00614040  7504                 jne 0x614046
// 00614042  85db                 test ebx, ebx
// 00614044  7407                 je 0x61404d
// 00614046  837c244404           cmp dword ptr [esp + 0x44], 4
// 0061404b  7519                 jne 0x614066
// 0061404d  8b442430             mov eax, dword ptr [esp + 0x30]
// 00614051  85c0                 test eax, eax
// 00614053  0f8512ecffff         jne 0x612c6b
// 00614059  5e                   pop esi
// 0061405a  5d                   pop ebp
// 0061405b  5b                   pop ebx
// 0061405c  b8fbffffff           mov eax, 0xfffffffb
// 00614061  5f                   pop edi
// 00614062  83c42c               add esp, 0x2c
// 00614065  c3                   ret 
// 00614066  8b442430             mov eax, dword ptr [esp + 0x30]
// 0061406a  5e                   pop esi
// 0061406b  5d                   pop ebp
// 0061406c  5b                   pop ebx
// 0061406d  5f                   pop edi
// 0061406e  83c42c               add esp, 0x2c
// 00614071  c3                   ret 
// 00614072  b8feffffff           mov eax, 0xfffffffe
// 00614077  5f                   pop edi
// 00614078  83c42c               add esp, 0x2c
// 0061407b  c3                   ret 
// 0061407c  7e2c                 jle 0x6140aa
// 0061407e  61                   popal 
// 0061407f  00d5                 add ch, dl
// 00614081  2d61007b2e           sub eax, 0x2e7b0061
// 00614086  61                   popal 
// 00614087  00f6                 add dh, dh
// 00614089  2e61                 popal 
// 0061408b  00752f               add byte ptr [ebp + 0x2f], dh
// 0061408e  61                   popal 
// 0061408f  00f8                 add al, bh
// 00614091  2f                   das 
// 00614092  61                   popal 
// 00614093  00b43061006e31       add byte ptr [eax + esi + 0x316e0061], dh
// 0061409a  61                   popal 
// 0061409b  001c32               add byte ptr [edx + esi], bl
// 0061409e  61                   popal 
// 0061409f  00b03261000d         add byte ptr [eax + 0xd006132], dh
// 006140a5  336100               xor esp, dword ptr [ecx]
// 006140a8  3933                 cmp dword ptr [ebx], esi
// 006140aa  61                   popal 
// 006140ab  00443361             add byte ptr [ebx + esi + 0x61], al
// 006140af  000a                 add byte ptr [edx], cl
// 006140b1  3461                 xor al, 0x61
// 006140b3  006834               add byte ptr [eax + 0x34], ch
// 006140b6  61                   popal 
// 006140b7  00c8                 add al, cl
// 006140b9  3461                 xor al, 0x61
// 006140bb  004135               add byte ptr [ecx + 0x35], al
// 006140be  61                   popal 
// 006140bf  0033                 add byte ptr [ebx], dh
// 006140c1  3661                 popal 
// 006140c3  002439               add byte ptr [ecx + edi], ah
// 006140c6  61                   popal 
// 006140c7  0012                 add byte ptr [edx], dl
// 006140c9  3b6100               cmp esp, dword ptr [ecx]
// 006140cc  5a                   pop edx
// 006140cd  3b6100               cmp esp, dword ptr [ecx]
// 006140d0  b93c61001e           mov ecx, 0x1e00613c
// 006140d5  3d6100dc3d           cmp eax, 0x3ddc0061
// 006140da  61                   popal 
// 006140db  00043e               add byte ptr [esi + edi], al
// 006140de  61                   popal 
// 006140df  00ce                 add dh, cl
// 006140e1  3e61                 popal 
// 006140e3  00613f               add byte ptr [ecx + 0x3f], ah
// 006140e6  61                   popal 
// 006140e7  006b3f               add byte ptr [ebx + 0x3f], ch
// 006140ea  61                   popal 
// 006140eb  00bb3f61009f         add byte ptr [ebx - 0x60ff9ec1], bh
// 006140f1  336100               xor esp, dword ptr [ecx]
// 006140f4  b033                 mov al, 0x33
// 006140f6  61                   popal 
// 006140f7  00dd                 add ch, bl
// 006140f9  336100               xor esp, dword ptr [ecx]
// 006140fc  ee                   out dx, al
// 006140fd  336100               xor esp, dword ptr [ecx]
// library zlib-1.2.3/inflate.c (function _inflate)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 inflate.c
