// roc 2010-06 00502bc0  unit: RBX::Network::ClientReplicator  size: 964 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00502bc0
//
// 00502bc0  51                   push ecx
// 00502bc1  55                   push ebp
// 00502bc2  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 00502bc6  8b4504               mov eax, dword ptr [ebp + 4]
// 00502bc9  83f820               cmp eax, 0x20
// 00502bcc  56                   push esi
// 00502bcd  894c2408             mov dword ptr [esp + 8], ecx
// 00502bd1  0f8da2000000         jge 0x502c79
// 00502bd7  8b542418             mov edx, dword ptr [esp + 0x18]
// 00502bdb  3bc2                 cmp eax, edx
// 00502bdd  7e13                 jle 0x502bf2
// 00502bdf  8d4c8508             lea ecx, [ebp + eax*4 + 8]
// 00502be3  2bc2                 sub eax, edx
// 00502be5  8b71fc               mov esi, dword ptr [ecx - 4]
// 00502be8  8931                 mov dword ptr [ecx], esi
// 00502bea  83c1fc               add ecx, -4
// 00502bed  83e801               sub eax, 1
// 00502bf0  75f3                 jne 0x502be5
// 00502bf2  807d0000             cmp byte ptr [ebp], 0
// 00502bf6  741f                 je 0x502c17
// 00502bf8  8b4d04               mov ecx, dword ptr [ebp + 4]
// 00502bfb  3bca                 cmp ecx, edx
// 00502bfd  7e3e                 jle 0x502c3d
// 00502bff  8d848d88000000       lea eax, [ebp + ecx*4 + 0x88]
// 00502c06  2bca                 sub ecx, edx
// 00502c08  8b70fc               mov esi, dword ptr [eax - 4]
// 00502c0b  8930                 mov dword ptr [eax], esi
// 00502c0d  83c0fc               add eax, -4
// 00502c10  83e901               sub ecx, 1
// 00502c13  75f3                 jne 0x502c08
// 00502c15  eb26                 jmp 0x502c3d
// 00502c17  8b4504               mov eax, dword ptr [ebp + 4]
// 00502c1a  40                   inc eax
// 00502c1b  8d7201               lea esi, [edx + 1]
// 00502c1e  3bc6                 cmp eax, esi
// 00502c20  7e1b                 jle 0x502c3d
// 00502c22  8d8c8510010000       lea ecx, [ebp + eax*4 + 0x110]
// 00502c29  2bc6                 sub eax, esi
// 00502c2b  eb03                 jmp 0x502c30
// 00502c2d  8d4900               lea ecx, [ecx]
// 00502c30  8b71fc               mov esi, dword ptr [ecx - 4]
// 00502c33  8931                 mov dword ptr [ecx], esi
// 00502c35  83c1fc               add ecx, -4
// 00502c38  83e801               sub eax, 1
// 00502c3b  75f3                 jne 0x502c30
// 00502c3d  8b442410             mov eax, dword ptr [esp + 0x10]
// 00502c41  89449508             mov dword ptr [ebp + edx*4 + 8], eax
// 00502c45  807d0000             cmp byte ptr [ebp], 0
// 00502c49  7418                 je 0x502c63
// 00502c4b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00502c4f  8b01                 mov eax, dword ptr [ecx]
// 00502c51  89849588000000       mov dword ptr [ebp + edx*4 + 0x88], eax
// 00502c58  ff4504               inc dword ptr [ebp + 4]
// 00502c5b  5e                   pop esi
// 00502c5c  33c0                 xor eax, eax
// 00502c5e  5d                   pop ebp
// 00502c5f  59                   pop ecx
// 00502c60  c21800               ret 0x18
// 00502c63  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00502c67  898c9514010000       mov dword ptr [ebp + edx*4 + 0x114], ecx
// 00502c6e  ff4504               inc dword ptr [ebp + 4]
// 00502c71  5e                   pop esi
// 00502c72  33c0                 xor eax, eax
// 00502c74  5d                   pop ebp
// 00502c75  59                   pop ecx
// 00502c76  c21800               ret 0x18
// 00502c79  53                   push ebx
// 00502c7a  57                   push edi
// 00502c7b  e810fdffff           call 0x502990
// 00502c80  8a5500               mov dl, byte ptr [ebp]
// 00502c83  8bd8                 mov ebx, eax
// 00502c85  8813                 mov byte ptr [ebx], dl
// 00502c87  807d0000             cmp byte ptr [ebp], 0
// 00502c8b  7428                 je 0x502cb5
// 00502c8d  8b8508010000         mov eax, dword ptr [ebp + 0x108]
// 00502c93  898308010000         mov dword ptr [ebx + 0x108], eax
// 00502c99  8b8508010000         mov eax, dword ptr [ebp + 0x108]
// 00502c9f  85c0                 test eax, eax
// 00502ca1  7406                 je 0x502ca9
// 00502ca3  89980c010000         mov dword ptr [eax + 0x10c], ebx
// 00502ca9  89ab0c010000         mov dword ptr [ebx + 0x10c], ebp
// 00502caf  899d08010000         mov dword ptr [ebp + 0x108], ebx
// 00502cb5  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00502cb9  83ff10               cmp edi, 0x10
// 00502cbc  0f8c8d010000         jl 0x502e4f
// 00502cc2  b910000000           mov ecx, 0x10
// 00502cc7  33d2                 xor edx, edx
// 00502cc9  3bf9                 cmp edi, ecx
// 00502ccb  7e2c                 jle 0x502cf9
// 00502ccd  8d4d48               lea ecx, [ebp + 0x48]
// 00502cd0  8d47f0               lea eax, [edi - 0x10]
// 00502cd3  894c2428             mov dword ptr [esp + 0x28], ecx
// 00502cd7  8d7308               lea esi, [ebx + 8]
// 00502cda  8bd0                 mov edx, eax
// 00502cdc  8d4810               lea ecx, [eax + 0x10]
// 00502cdf  90                   nop 
// 00502ce0  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 00502ce4  8b3f                 mov edi, dword ptr [edi]
// 00502ce6  8344242804           add dword ptr [esp + 0x28], 4
// 00502ceb  893e                 mov dword ptr [esi], edi
// 00502ced  83c604               add esi, 4
// 00502cf0  83e801               sub eax, 1
// 00502cf3  75eb                 jne 0x502ce0
// 00502cf5  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00502cf9  8b442418             mov eax, dword ptr [esp + 0x18]
// 00502cfd  89449308             mov dword ptr [ebx + edx*4 + 8], eax
// 00502d01  42                   inc edx
// 00502d02  83f920               cmp ecx, 0x20
// 00502d05  7d1e                 jge 0x502d25
// 00502d07  b820000000           mov eax, 0x20
// 00502d0c  8d749308             lea esi, [ebx + edx*4 + 8]
// 00502d10  8d548d08             lea edx, [ebp + ecx*4 + 8]
// 00502d14  2bc1                 sub eax, ecx
// 00502d16  8b0a                 mov ecx, dword ptr [edx]
// 00502d18  890e                 mov dword ptr [esi], ecx
// 00502d1a  83c204               add edx, 4
// 00502d1d  83c604               add esi, 4
// 00502d20  83e801               sub eax, 1
// 00502d23  75f1                 jne 0x502d16
// 00502d25  33c0                 xor eax, eax
// 00502d27  8d4810               lea ecx, [eax + 0x10]
// 00502d2a  384500               cmp byte ptr [ebp], al
// 00502d2d  0f8481000000         je 0x502db4
// 00502d33  3bf9                 cmp edi, ecx
// 00502d35  7e2c                 jle 0x502d63
// 00502d37  8d47f0               lea eax, [edi - 0x10]
// 00502d3a  8db388000000         lea esi, [ebx + 0x88]
// 00502d40  8d95c8000000         lea edx, [ebp + 0xc8]
// 00502d46  89442428             mov dword ptr [esp + 0x28], eax
// 00502d4a  8d4810               lea ecx, [eax + 0x10]
// 00502d4d  8d4900               lea ecx, [ecx]
// 00502d50  8b3a                 mov edi, dword ptr [edx]
// 00502d52  893e                 mov dword ptr [esi], edi
// 00502d54  83c204               add edx, 4
// 00502d57  83c604               add esi, 4
// 00502d5a  83e801               sub eax, 1
// 00502d5d  75f1                 jne 0x502d50
// 00502d5f  8b442428             mov eax, dword ptr [esp + 0x28]
// 00502d63  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00502d67  8b12                 mov edx, dword ptr [edx]
// 00502d69  89948388000000       mov dword ptr [ebx + eax*4 + 0x88], edx
// 00502d70  40                   inc eax
// 00502d71  83f920               cmp ecx, 0x20
// 00502d74  0f8dc1000000         jge 0x502e3b
// 00502d7a  ba20000000           mov edx, 0x20
// 00502d7f  2bd1                 sub edx, ecx
// 00502d81  8dbc8388000000       lea edi, [ebx + eax*4 + 0x88]
// 00502d88  8db48d88000000       lea esi, [ebp + ecx*4 + 0x88]
// 00502d8f  03c2                 add eax, edx
// 00502d91  8b0e                 mov ecx, dword ptr [esi]
// 00502d93  890f                 mov dword ptr [edi], ecx
// 00502d95  83c604               add esi, 4
// 00502d98  83c704               add edi, 4
// 00502d9b  83ea01               sub edx, 1
// 00502d9e  75f1                 jne 0x502d91
// 00502da0  c7450410000000       mov dword ptr [ebp + 4], 0x10
// 00502da7  5f                   pop edi
// 00502da8  894304               mov dword ptr [ebx + 4], eax
// 00502dab  8bc3                 mov eax, ebx
// 00502dad  5b                   pop ebx
// 00502dae  5e                   pop esi
// 00502daf  5d                   pop ebp
// 00502db0  59                   pop ecx
// 00502db1  c21800               ret 0x18
// 00502db4  3bf9                 cmp edi, ecx
// 00502db6  7e2b                 jle 0x502de3
// 00502db8  8d47f0               lea eax, [edi - 0x10]
// 00502dbb  8db310010000         lea esi, [ebx + 0x110]
// 00502dc1  8d9554010000         lea edx, [ebp + 0x154]
// 00502dc7  89442428             mov dword ptr [esp + 0x28], eax
// 00502dcb  8d4810               lea ecx, [eax + 0x10]
// 00502dce  8bff                 mov edi, edi
// 00502dd0  8b3a                 mov edi, dword ptr [edx]
// 00502dd2  893e                 mov dword ptr [esi], edi
// 00502dd4  83c204               add edx, 4
// 00502dd7  83c604               add esi, 4
// 00502dda  83e801               sub eax, 1
// 00502ddd  75f1                 jne 0x502dd0
// 00502ddf  8b442428             mov eax, dword ptr [esp + 0x28]
// 00502de3  8b542424             mov edx, dword ptr [esp + 0x24]
// 00502de7  89948310010000       mov dword ptr [ebx + eax*4 + 0x110], edx
// 00502dee  8b7504               mov esi, dword ptr [ebp + 4]
// 00502df1  8d5101               lea edx, [ecx + 1]
// 00502df4  46                   inc esi
// 00502df5  40                   inc eax
// 00502df6  3bd6                 cmp edx, esi
// 00502df8  7d22                 jge 0x502e1c
// 00502dfa  8db48310010000       lea esi, [ebx + eax*4 + 0x110]
// 00502e01  8d8c8d14010000       lea ecx, [ebp + ecx*4 + 0x114]
// 00502e08  8b39                 mov edi, dword ptr [ecx]
// 00502e0a  893e                 mov dword ptr [esi], edi
// 00502e0c  8b7d04               mov edi, dword ptr [ebp + 4]
// 00502e0f  42                   inc edx
// 00502e10  47                   inc edi
// 00502e11  83c104               add ecx, 4
// 00502e14  40                   inc eax
// 00502e15  83c604               add esi, 4
// 00502e18  3bd7                 cmp edx, edi
// 00502e1a  7cec                 jl 0x502e08
// 00502e1c  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00502e20  c7410802000000       mov dword ptr [ecx + 8], 2
// 00502e27  8b5308               mov edx, dword ptr [ebx + 8]
// 00502e2a  8d7b08               lea edi, [ebx + 8]
// 00502e2d  8911                 mov dword ptr [ecx], edx
// 00502e2f  8d48ff               lea ecx, [eax - 1]
// 00502e32  85c9                 test ecx, ecx
// 00502e34  7e05                 jle 0x502e3b
// 00502e36  8d730c               lea esi, [ebx + 0xc]
// 00502e39  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 00502e3b  c7450410000000       mov dword ptr [ebp + 4], 0x10
// 00502e42  5f                   pop edi
// 00502e43  894304               mov dword ptr [ebx + 4], eax
// 00502e46  8bc3                 mov eax, ebx
// 00502e48  5b                   pop ebx
// 00502e49  5e                   pop esi
// 00502e4a  5d                   pop ebp
// 00502e4b  59                   pop ecx
// 00502e4c  c21800               ret 0x18
// 00502e4f  8d4308               lea eax, [ebx + 8]
// 00502e52  8d4d44               lea ecx, [ebp + 0x44]
// 00502e55  8bd0                 mov edx, eax
// 00502e57  bf11000000           mov edi, 0x11
// 00502e5c  8d642400             lea esp, [esp]
// 00502e60  8b31                 mov esi, dword ptr [ecx]
// 00502e62  8932                 mov dword ptr [edx], esi
// 00502e64  83c104               add ecx, 4
// 00502e67  83c204               add edx, 4
// 00502e6a  83ef01               sub edi, 1
// 00502e6d  75f1                 jne 0x502e60
// 00502e6f  807d0000             cmp byte ptr [ebp], 0
// 00502e73  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 00502e77  742b                 je 0x502ea4
// 00502e79  ba11000000           mov edx, 0x11
// 00502e7e  8d8b88000000         lea ecx, [ebx + 0x88]
// 00502e84  8d85c4000000         lea eax, [ebp + 0xc4]
// 00502e8a  89542428             mov dword ptr [esp + 0x28], edx
// 00502e8e  8bff                 mov edi, edi
// 00502e90  8b30                 mov esi, dword ptr [eax]
// 00502e92  8931                 mov dword ptr [ecx], esi
// 00502e94  83c004               add eax, 4
// 00502e97  83c104               add ecx, 4
// 00502e9a  83ea01               sub edx, 1
// 00502e9d  75f1                 jne 0x502e90
// 00502e9f  e999000000           jmp 0x502f3d
// 00502ea4  bf11000000           mov edi, 0x11
// 00502ea9  8d9310010000         lea edx, [ebx + 0x110]
// 00502eaf  8d8d50010000         lea ecx, [ebp + 0x150]
// 00502eb5  897c2428             mov dword ptr [esp + 0x28], edi
// 00502eb9  8da42400000000       lea esp, [esp]
// 00502ec0  8b31                 mov esi, dword ptr [ecx]
// 00502ec2  8932                 mov dword ptr [edx], esi
// 00502ec4  83c104               add ecx, 4
// 00502ec7  83c204               add edx, 4
// 00502eca  83ef01               sub edi, 1
// 00502ecd  75f1                 jne 0x502ec0
// 00502ecf  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 00502ed3  c7470802000000       mov dword ptr [edi + 8], 2
// 00502eda  8b08                 mov ecx, dword ptr [eax]
// 00502edc  890f                 mov dword ptr [edi], ecx
// 00502ede  8b530c               mov edx, dword ptr [ebx + 0xc]
// 00502ee1  8b4b10               mov ecx, dword ptr [ebx + 0x10]
// 00502ee4  8910                 mov dword ptr [eax], edx
// 00502ee6  8b5314               mov edx, dword ptr [ebx + 0x14]
// 00502ee9  894804               mov dword ptr [eax + 4], ecx
// 00502eec  8b4b18               mov ecx, dword ptr [ebx + 0x18]
// 00502eef  895008               mov dword ptr [eax + 8], edx
// 00502ef2  8b531c               mov edx, dword ptr [ebx + 0x1c]
// 00502ef5  89480c               mov dword ptr [eax + 0xc], ecx
// 00502ef8  8b4b20               mov ecx, dword ptr [ebx + 0x20]
// 00502efb  895010               mov dword ptr [eax + 0x10], edx
// 00502efe  8b5324               mov edx, dword ptr [ebx + 0x24]
// 00502f01  894814               mov dword ptr [eax + 0x14], ecx
// 00502f04  8b4b28               mov ecx, dword ptr [ebx + 0x28]
// 00502f07  895018               mov dword ptr [eax + 0x18], edx
// 00502f0a  8b532c               mov edx, dword ptr [ebx + 0x2c]
// 00502f0d  89481c               mov dword ptr [eax + 0x1c], ecx
// 00502f10  8b4b30               mov ecx, dword ptr [ebx + 0x30]
// 00502f13  895020               mov dword ptr [eax + 0x20], edx
// 00502f16  8b5334               mov edx, dword ptr [ebx + 0x34]
// 00502f19  894824               mov dword ptr [eax + 0x24], ecx
// 00502f1c  8b4b38               mov ecx, dword ptr [ebx + 0x38]
// 00502f1f  895028               mov dword ptr [eax + 0x28], edx
// 00502f22  8b533c               mov edx, dword ptr [ebx + 0x3c]
// 00502f25  89482c               mov dword ptr [eax + 0x2c], ecx
// 00502f28  8b4b40               mov ecx, dword ptr [ebx + 0x40]
// 00502f2b  895030               mov dword ptr [eax + 0x30], edx
// 00502f2e  8b5344               mov edx, dword ptr [ebx + 0x44]
// 00502f31  894834               mov dword ptr [eax + 0x34], ecx
// 00502f34  8b4b48               mov ecx, dword ptr [ebx + 0x48]
// 00502f37  895038               mov dword ptr [eax + 0x38], edx
// 00502f3a  89483c               mov dword ptr [eax + 0x3c], ecx
// 00502f3d  8b742418             mov esi, dword ptr [esp + 0x18]
// 00502f41  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00502f45  8d542420             lea edx, [esp + 0x20]
// 00502f49  52                   push edx
// 00502f4a  55                   push ebp
// 00502f4b  56                   push esi
// 00502f4c  c745040f000000       mov dword ptr [ebp + 4], 0xf
// 00502f53  e858eeffff           call 0x501db0
// 00502f58  8b442424             mov eax, dword ptr [esp + 0x24]
// 00502f5c  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00502f60  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00502f64  57                   push edi
// 00502f65  55                   push ebp
// 00502f66  50                   push eax
// 00502f67  51                   push ecx
// 00502f68  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00502f6c  52                   push edx
// 00502f6d  56                   push esi
// 00502f6e  e84dfcffff           call 0x502bc0
// 00502f73  8b442428             mov eax, dword ptr [esp + 0x28]
// 00502f77  5f                   pop edi
// 00502f78  894304               mov dword ptr [ebx + 4], eax
// 00502f7b  8bc3                 mov eax, ebx
// 00502f7d  5b                   pop ebx
// 00502f7e  5e                   pop esi
// 00502f7f  5d                   pop ebp
// 00502f80  59                   pop ecx
// 00502f81  c21800               ret 0x18
// library rbxgs-raknet/ReliabilityLayer.cpp (function ?InsertIntoNode@?$BPlusTree@IPAUInternalPacket@@$0CA@@DataStructures@@IAEPAU?$Page@IPAUInternalPacket@@$0CA@@2@IABQAUInternalPacket@@HPAU32@1PAUReturnAction@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet ReliabilityLayer.cpp
