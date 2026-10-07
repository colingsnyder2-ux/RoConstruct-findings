// roc 2009-06 006c8020  unit: seg_006c0000  size: 1192 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006c8020
//
// 006c8020  83ec18               sub esp, 0x18
// 006c8023  56                   push esi
// 006c8024  8b742420             mov esi, dword ptr [esp + 0x20]
// 006c8028  8b462c               mov eax, dword ptr [esi + 0x2c]
// 006c802b  89442410             mov dword ptr [esp + 0x10], eax
// 006c802f  48                   dec eax
// 006c8030  8944240c             mov dword ptr [esp + 0xc], eax
// 006c8034  8bc6                 mov eax, esi
// 006c8036  e805ffffff           call 0x6c7f40
// 006c803b  85c0                 test eax, eax
// 006c803d  7505                 jne 0x6c8044
// 006c803f  5e                   pop esi
// 006c8040  83c418               add esp, 0x18
// 006c8043  c3                   ret 
// 006c8044  837c242400           cmp dword ptr [esp + 0x24], 0
// 006c8049  53                   push ebx
// 006c804a  55                   push ebp
// 006c804b  57                   push edi
// 006c804c  c744241000000000     mov dword ptr [esp + 0x10], 0
// 006c8054  0f8ef9030000         jle 0x6c8453
// 006c805a  8b460c               mov eax, dword ptr [esi + 0xc]
// 006c805d  89442420             mov dword ptr [esp + 0x20], eax
// 006c8061  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 006c8065  8b542410             mov edx, dword ptr [esp + 0x10]
// 006c8069  8b0491               mov eax, dword ptr [ecx + edx*4]
// 006c806c  8be8                 mov ebp, eax
// 006c806e  8bd8                 mov ebx, eax
// 006c8070  c1ed06               shr ebp, 6
// 006c8073  83e33f               and ebx, 0x3f
// 006c8076  33f6                 xor esi, esi
// 006c8078  81e5ff000000         and ebp, 0xff
// 006c807e  83fb26               cmp ebx, 0x26
// 006c8081  895c2424             mov dword ptr [esp + 0x24], ebx
// 006c8085  89742414             mov dword ptr [esp + 0x14], esi
// 006c8089  0f8dd3000000         jge 0x6c8162
// 006c808f  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 006c8093  0fb6494b             movzx ecx, byte ptr [ecx + 0x4b]
// 006c8097  3be9                 cmp ebp, ecx
// 006c8099  0f8dc3000000         jge 0x6c8162
// 006c809f  8a9374e48e00         mov dl, byte ptr [ebx + 0x8ee474]
// 006c80a5  0fb6fa               movzx edi, dl
// 006c80a8  8bcf                 mov ecx, edi
// 006c80aa  83e103               and ecx, 3
// 006c80ad  2bce                 sub ecx, esi
// 006c80af  0f84cf000000         je 0x6c8184
// 006c80b5  83e901               sub ecx, 1
// 006c80b8  0f84ae000000         je 0x6c816c
// 006c80be  83e901               sub ecx, 1
// 006c80c1  7563                 jne 0x6c8126
// 006c80c3  c1e80e               shr eax, 0xe
// 006c80c6  2dffff0100           sub eax, 0x1ffff
// 006c80cb  80e230               and dl, 0x30
// 006c80ce  8bf0                 mov esi, eax
// 006c80d0  80fa20               cmp dl, 0x20
// 006c80d3  7551                 jne 0x6c8126
// 006c80d5  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 006c80d9  8d443e01             lea eax, [esi + edi + 1]
// 006c80dd  85c0                 test eax, eax
// 006c80df  0f8c7d000000         jl 0x6c8162
// 006c80e5  3b44241c             cmp eax, dword ptr [esp + 0x1c]
// 006c80e9  7d77                 jge 0x6c8162
// 006c80eb  85c0                 test eax, eax
// 006c80ed  0f8ed7000000         jle 0x6c81ca
// 006c80f3  33d2                 xor edx, edx
// 006c80f5  85c0                 test eax, eax
// 006c80f7  7e28                 jle 0x6c8121
// 006c80f9  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 006c80fd  8d7c81fc             lea edi, [ecx + eax*4 - 4]
// 006c8101  8b0f                 mov ecx, dword ptr [edi]
// 006c8103  8bd9                 mov ebx, ecx
// 006c8105  83e33f               and ebx, 0x3f
// 006c8108  80fb22               cmp bl, 0x22
// 006c810b  7510                 jne 0x6c811d
// 006c810d  f7c100c07f00         test ecx, 0x7fc000
// 006c8113  7508                 jne 0x6c811d
// 006c8115  42                   inc edx
// 006c8116  83ef04               sub edi, 4
// 006c8119  3bd0                 cmp edx, eax
// 006c811b  7ce4                 jl 0x6c8101
// 006c811d  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 006c8121  f6c201               test dl, 1
// 006c8124  753c                 jne 0x6c8162
// 006c8126  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 006c812a  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 006c812e  8a8374e48e00         mov al, byte ptr [ebx + 0x8ee474]
// 006c8134  a840                 test al, 0x40
// 006c8136  740a                 je 0x6c8142
// 006c8138  3b6c2434             cmp ebp, dword ptr [esp + 0x34]
// 006c813c  7504                 jne 0x6c8142
// 006c813e  897c2418             mov dword ptr [esp + 0x18], edi
// 006c8142  84c0                 test al, al
// 006c8144  0f8989000000         jns 0x6c81d3
// 006c814a  8d4702               lea eax, [edi + 2]
// 006c814d  3b44241c             cmp eax, dword ptr [esp + 0x1c]
// 006c8151  7d0f                 jge 0x6c8162
// 006c8153  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 006c8157  8b44b904             mov eax, dword ptr [ecx + edi*4 + 4]
// 006c815b  83e03f               and eax, 0x3f
// 006c815e  3c16                 cmp al, 0x16
// 006c8160  7475                 je 0x6c81d7
// 006c8162  5f                   pop edi
// 006c8163  5d                   pop ebp
// 006c8164  5b                   pop ebx
// 006c8165  33c0                 xor eax, eax
// 006c8167  5e                   pop esi
// 006c8168  83c418               add esp, 0x18
// 006c816b  c3                   ret 
// 006c816c  c1e80e               shr eax, 0xe
// 006c816f  80e230               and dl, 0x30
// 006c8172  8bf0                 mov esi, eax
// 006c8174  80fa30               cmp dl, 0x30
// 006c8177  75ad                 jne 0x6c8126
// 006c8179  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 006c817d  3b7228               cmp esi, dword ptr [edx + 0x28]
// 006c8180  7de0                 jge 0x6c8162
// 006c8182  eba6                 jmp 0x6c812a
// 006c8184  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 006c8188  8bf0                 mov esi, eax
// 006c818a  c1e80e               shr eax, 0xe
// 006c818d  25ff010000           and eax, 0x1ff
// 006c8192  89442414             mov dword ptr [esp + 0x14], eax
// 006c8196  8bc7                 mov eax, edi
// 006c8198  c1e804               shr eax, 4
// 006c819b  c1ee17               shr esi, 0x17
// 006c819e  83e003               and eax, 3
// 006c81a1  8bce                 mov ecx, esi
// 006c81a3  e828feffff           call 0x6c7fd0
// 006c81a8  85c0                 test eax, eax
// 006c81aa  74b6                 je 0x6c8162
// 006c81ac  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006c81b0  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 006c81b4  8bc7                 mov eax, edi
// 006c81b6  c1e802               shr eax, 2
// 006c81b9  83e003               and eax, 3
// 006c81bc  e80ffeffff           call 0x6c7fd0
// 006c81c1  85c0                 test eax, eax
// 006c81c3  749d                 je 0x6c8162
// 006c81c5  e95cffffff           jmp 0x6c8126
// 006c81ca  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 006c81ce  e95bffffff           jmp 0x6c812e
// 006c81d3  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 006c81d7  83c3fe               add ebx, -2
// 006c81da  83fb23               cmp ebx, 0x23
// 006c81dd  0f8759020000         ja 0x6c843c
// 006c81e3  0fb683a4846c00       movzx eax, byte ptr [ebx + 0x6c84a4]
// 006c81ea  ff248568846c00       jmp dword ptr [eax*4 + 0x6c8468]
// 006c81f1  837c241401           cmp dword ptr [esp + 0x14], 1
// 006c81f6  0f8540020000         jne 0x6c843c
// 006c81fc  8d5702               lea edx, [edi + 2]
// 006c81ff  3b54241c             cmp edx, dword ptr [esp + 0x1c]
// 006c8203  0f8d59ffffff         jge 0x6c8162
// 006c8209  8b44b904             mov eax, dword ptr [ecx + edi*4 + 4]
// 006c820d  8bc8                 mov ecx, eax
// 006c820f  83e13f               and ecx, 0x3f
// 006c8212  80f922               cmp cl, 0x22
// 006c8215  0f8521020000         jne 0x6c843c
// 006c821b  a900c07f00           test eax, 0x7fc000
// 006c8220  0f843cffffff         je 0x6c8162
// 006c8226  e911020000           jmp 0x6c843c
// 006c822b  8b442434             mov eax, dword ptr [esp + 0x34]
// 006c822f  3be8                 cmp ebp, eax
// 006c8231  0f8f05020000         jg 0x6c843c
// 006c8237  3bc6                 cmp eax, esi
// 006c8239  0f8ffd010000         jg 0x6c843c
// 006c823f  897c2418             mov dword ptr [esp + 0x18], edi
// 006c8243  e9f4010000           jmp 0x6c843c
// 006c8248  0fb65248             movzx edx, byte ptr [edx + 0x48]
// 006c824c  3bf2                 cmp esi, edx
// 006c824e  e9e3010000           jmp 0x6c8436
// 006c8253  8b4208               mov eax, dword ptr [edx + 8]
// 006c8256  c1e604               shl esi, 4
// 006c8259  837c060804           cmp dword ptr [esi + eax + 8], 4
// 006c825e  0f85fefeffff         jne 0x6c8162
// 006c8264  e9d3010000           jmp 0x6c843c
// 006c8269  0fb6424b             movzx eax, byte ptr [edx + 0x4b]
// 006c826d  45                   inc ebp
// 006c826e  3be8                 cmp ebp, eax
// 006c8270  0f8decfeffff         jge 0x6c8162
// 006c8276  396c2434             cmp dword ptr [esp + 0x34], ebp
// 006c827a  0f85bc010000         jne 0x6c843c
// 006c8280  897c2418             mov dword ptr [esp + 0x18], edi
// 006c8284  e9b3010000           jmp 0x6c843c
// 006c8289  3b742414             cmp esi, dword ptr [esp + 0x14]
// 006c828d  e9a4010000           jmp 0x6c8436
// 006c8292  8b442414             mov eax, dword ptr [esp + 0x14]
// 006c8296  83f801               cmp eax, 1
// 006c8299  0f8cc3feffff         jl 0x6c8162
// 006c829f  8d4c2802             lea ecx, [eax + ebp + 2]
// 006c82a3  0fb6424b             movzx eax, byte ptr [edx + 0x4b]
// 006c82a7  3bc8                 cmp ecx, eax
// 006c82a9  0f8db3feffff         jge 0x6c8162
// 006c82af  83c502               add ebp, 2
// 006c82b2  396c2434             cmp dword ptr [esp + 0x34], ebp
// 006c82b6  0f8c80010000         jl 0x6c843c
// 006c82bc  897c2418             mov dword ptr [esp + 0x18], edi
// 006c82c0  e977010000           jmp 0x6c843c
// 006c82c5  0fb6424b             movzx eax, byte ptr [edx + 0x4b]
// 006c82c9  83c503               add ebp, 3
// 006c82cc  3be8                 cmp ebp, eax
// 006c82ce  0f8d8efeffff         jge 0x6c8162
// 006c82d4  817c2434ff000000     cmp dword ptr [esp + 0x34], 0xff
// 006c82dc  8d443e01             lea eax, [esi + edi + 1]
// 006c82e0  0f8456010000         je 0x6c843c
// 006c82e6  3bf8                 cmp edi, eax
// 006c82e8  0f8d4e010000         jge 0x6c843c
// 006c82ee  3b442430             cmp eax, dword ptr [esp + 0x30]
// 006c82f2  0f8f44010000         jg 0x6c843c
// 006c82f8  03f7                 add esi, edi
// 006c82fa  89742410             mov dword ptr [esp + 0x10], esi
// 006c82fe  e939010000           jmp 0x6c843c
// 006c8303  85f6                 test esi, esi
// 006c8305  7410                 je 0x6c8317
// 006c8307  0fb6424b             movzx eax, byte ptr [edx + 0x4b]
// 006c830b  8d742eff             lea esi, [esi + ebp - 1]
// 006c830f  3bf0                 cmp esi, eax
// 006c8311  0f8d4bfeffff         jge 0x6c8162
// 006c8317  8b442414             mov eax, dword ptr [esp + 0x14]
// 006c831b  48                   dec eax
// 006c831c  83f8ff               cmp eax, -1
// 006c831f  7517                 jne 0x6c8338
// 006c8321  8b54b904             mov edx, dword ptr [ecx + edi*4 + 4]
// 006c8325  52                   push edx
// 006c8326  e875fcffff           call 0x6c7fa0
// 006c832b  83c404               add esp, 4
// 006c832e  85c0                 test eax, eax
// 006c8330  0f842cfeffff         je 0x6c8162
// 006c8336  eb14                 jmp 0x6c834c
// 006c8338  85c0                 test eax, eax
// 006c833a  7410                 je 0x6c834c
// 006c833c  8d4c28ff             lea ecx, [eax + ebp - 1]
// 006c8340  0fb6424b             movzx eax, byte ptr [edx + 0x4b]
// 006c8344  3bc8                 cmp ecx, eax
// 006c8346  0f8d16feffff         jge 0x6c8162
// 006c834c  396c2434             cmp dword ptr [esp + 0x34], ebp
// 006c8350  0f8ce6000000         jl 0x6c843c
// 006c8356  897c2418             mov dword ptr [esp + 0x18], edi
// 006c835a  e9dd000000           jmp 0x6c843c
// 006c835f  4e                   dec esi
// 006c8360  85f6                 test esi, esi
// 006c8362  0f8ed4000000         jle 0x6c843c
// 006c8368  e9bf000000           jmp 0x6c842c
// 006c836d  85f6                 test esi, esi
// 006c836f  7e0e                 jle 0x6c837f
// 006c8371  0fb6424b             movzx eax, byte ptr [edx + 0x4b]
// 006c8375  03f5                 add esi, ebp
// 006c8377  3bf0                 cmp esi, eax
// 006c8379  0f8de3fdffff         jge 0x6c8162
// 006c837f  837c241400           cmp dword ptr [esp + 0x14], 0
// 006c8384  0f85b2000000         jne 0x6c843c
// 006c838a  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 006c838e  47                   inc edi
// 006c838f  48                   dec eax
// 006c8390  897c2410             mov dword ptr [esp + 0x10], edi
// 006c8394  3bf8                 cmp edi, eax
// 006c8396  e99b000000           jmp 0x6c8436
// 006c839b  3b7234               cmp esi, dword ptr [edx + 0x34]
// 006c839e  0f8dbefdffff         jge 0x6c8162
// 006c83a4  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 006c83a8  8b4210               mov eax, dword ptr [edx + 0x10]
// 006c83ab  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 006c83ae  0fb65148             movzx edx, byte ptr [ecx + 0x48]
// 006c83b2  8b442410             mov eax, dword ptr [esp + 0x10]
// 006c83b6  8d3c02               lea edi, [edx + eax]
// 006c83b9  3b7c241c             cmp edi, dword ptr [esp + 0x1c]
// 006c83bd  0f8d9ffdffff         jge 0x6c8162
// 006c83c3  be01000000           mov esi, 1
// 006c83c8  3bd6                 cmp edx, esi
// 006c83ca  7c22                 jl 0x6c83ee
// 006c83cc  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 006c83d0  8d4c8104             lea ecx, [ecx + eax*4 + 4]
// 006c83d4  8b01                 mov eax, dword ptr [ecx]
// 006c83d6  83e03f               and eax, 0x3f
// 006c83d9  83f804               cmp eax, 4
// 006c83dc  7408                 je 0x6c83e6
// 006c83de  85c0                 test eax, eax
// 006c83e0  0f857cfdffff         jne 0x6c8162
// 006c83e6  46                   inc esi
// 006c83e7  83c104               add ecx, 4
// 006c83ea  3bf2                 cmp esi, edx
// 006c83ec  7ee6                 jle 0x6c83d4
// 006c83ee  817c2434ff000000     cmp dword ptr [esp + 0x34], 0xff
// 006c83f6  7444                 je 0x6c843c
// 006c83f8  897c2410             mov dword ptr [esp + 0x10], edi
// 006c83fc  eb3e                 jmp 0x6c843c
// 006c83fe  8a424a               mov al, byte ptr [edx + 0x4a]
// 006c8401  a802                 test al, 2
// 006c8403  0f8459fdffff         je 0x6c8162
// 006c8409  a804                 test al, 4
// 006c840b  0f8551fdffff         jne 0x6c8162
// 006c8411  4e                   dec esi
// 006c8412  83feff               cmp esi, -1
// 006c8415  7515                 jne 0x6c842c
// 006c8417  8b44b904             mov eax, dword ptr [ecx + edi*4 + 4]
// 006c841b  50                   push eax
// 006c841c  e87ffbffff           call 0x6c7fa0
// 006c8421  83c404               add esp, 4
// 006c8424  85c0                 test eax, eax
// 006c8426  0f8436fdffff         je 0x6c8162
// 006c842c  0fb6424b             movzx eax, byte ptr [edx + 0x4b]
// 006c8430  8d4c2eff             lea ecx, [esi + ebp - 1]
// 006c8434  3bc8                 cmp ecx, eax
// 006c8436  0f8d26fdffff         jge 0x6c8162
// 006c843c  8b442410             mov eax, dword ptr [esp + 0x10]
// 006c8440  40                   inc eax
// 006c8441  3b442430             cmp eax, dword ptr [esp + 0x30]
// 006c8445  89442410             mov dword ptr [esp + 0x10], eax
// 006c8449  0f8c12fcffff         jl 0x6c8061
// 006c844f  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 006c8453  8b560c               mov edx, dword ptr [esi + 0xc]
// 006c8456  8b442418             mov eax, dword ptr [esp + 0x18]
// 006c845a  8b0482               mov eax, dword ptr [edx + eax*4]
// 006c845d  5f                   pop edi
// 006c845e  5d                   pop ebp
// 006c845f  5b                   pop ebx
// 006c8460  5e                   pop esi
// 006c8461  83c418               add esp, 0x18
// 006c8464  c3                   ret 
// 006c8465  8d4900               lea ecx, [ecx]
// 006c8468  f1                   int1 
// 006c8469  816c002b826c0048     sub dword ptr [eax + eax + 0x2b], 0x48006c82
// 006c8471  826c005382           sub byte ptr [eax + eax + 0x53], 0x82
// 006c8476  6c                   insb byte ptr es:[edi], dx
// 006c8477  006982               add byte ptr [ecx - 0x7e], ch
// 006c847a  6c                   insb byte ptr es:[edi], dx
// 006c847b  0089826c00d4         add byte ptr [ecx - 0x2bff937e], cl
// 006c8481  826c000383           sub byte ptr [eax + eax + 3], 0x83
// 006c8486  6c                   insb byte ptr es:[edi], dx
// 006c8487  005f83               add byte ptr [edi - 0x7d], bl
// 006c848a  6c                   insb byte ptr es:[edi], dx
// 006c848b  00c5                 add ch, al
// 006c848d  826c009282           sub byte ptr [eax + eax - 0x6e], 0x82
// 006c8492  6c                   insb byte ptr es:[edi], dx
// 006c8493  006d83               add byte ptr [ebp - 0x7d], ch
// 006c8496  6c                   insb byte ptr es:[edi], dx
// 006c8497  009b836c00fe         add byte ptr [ebx - 0x1ff937d], bl
// 006c849d  836c003c84           sub dword ptr [eax + eax + 0x3c], -0x7c
// 006c84a2  6c                   insb byte ptr es:[edi], dx
// 006c84a3  0000                 add byte ptr [eax], al
// 006c84a5  0102                 add dword ptr [edx], eax
// 006c84a7  030e                 add ecx, dword ptr [esi]
// 006c84a9  0302                 add eax, dword ptr [edx]
// 006c84ab  0e                   push cs
// 006c84ac  0e                   push cs
// 006c84ad  040e                 add al, 0xe
// 006c84af  0e                   push cs
// 006c84b0  0e                   push cs
// 006c84b1  0e                   push cs
// 006c84b2  0e                   push cs
// 006c84b3  0e                   push cs
// 006c84b4  0e                   push cs
// 006c84b5  0e                   push cs
// 006c84b6  0e                   push cs
// 006c84b7  05060e0e0e           add eax, 0xe0e0e06
// 006c84bc  0e                   push cs
// 006c84bd  0e                   push cs
// 006c84be  07                   pop es
// 006c84bf  07                   pop es
// 006c84c0  0809                 or byte ptr [ecx], cl
// 006c84c2  090a                 or dword ptr [edx], ecx
// 006c84c4  0b0e                 or ecx, dword ptr [esi]
// 006c84c6  0c0d                 or al, 0xd
// library lua-5.1.4/ldebug.c (function _symbexec)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldebug.c
