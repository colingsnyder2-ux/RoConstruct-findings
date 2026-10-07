// roc 2007-08 005c6820  unit: lua_exception  size: 1128 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c6820
//
// 005c6820  83ec20               sub esp, 0x20
// 005c6823  8b442424             mov eax, dword ptr [esp + 0x24]
// 005c6827  8b482c               mov ecx, dword ptr [eax + 0x2c]
// 005c682a  53                   push ebx
// 005c682b  8a584b               mov bl, byte ptr [eax + 0x4b]
// 005c682e  80fbfa               cmp bl, 0xfa
// 005c6831  8d51ff               lea edx, [ecx - 1]
// 005c6834  894c241c             mov dword ptr [esp + 0x1c], ecx
// 005c6838  89542418             mov dword ptr [esp + 0x18], edx
// 005c683c  885c2407             mov byte ptr [esp + 7], bl
// 005c6840  772b                 ja 0x5c686d
// 005c6842  0fb65048             movzx edx, byte ptr [eax + 0x48]
// 005c6846  395024               cmp dword ptr [eax + 0x24], edx
// 005c6849  89542420             mov dword ptr [esp + 0x20], edx
// 005c684d  7f1e                 jg 0x5c686d
// 005c684f  8b5030               mov edx, dword ptr [eax + 0x30]
// 005c6852  3bd1                 cmp edx, ecx
// 005c6854  7404                 je 0x5c685a
// 005c6856  85d2                 test edx, edx
// 005c6858  7513                 jne 0x5c686d
// 005c685a  8b400c               mov eax, dword ptr [eax + 0xc]
// 005c685d  8b4c88fc             mov ecx, dword ptr [eax + ecx*4 - 4]
// 005c6861  83e13f               and ecx, 0x3f
// 005c6864  80f91e               cmp cl, 0x1e
// 005c6867  89442410             mov dword ptr [esp + 0x10], eax
// 005c686b  7407                 je 0x5c6874
// 005c686d  33c0                 xor eax, eax
// 005c686f  5b                   pop ebx
// 005c6870  83c420               add esp, 0x20
// 005c6873  c3                   ret 
// 005c6874  837c242c00           cmp dword ptr [esp + 0x2c], 0
// 005c6879  55                   push ebp
// 005c687a  56                   push esi
// 005c687b  57                   push edi
// 005c687c  c744242000000000     mov dword ptr [esp + 0x20], 0
// 005c6884  7f1e                 jg 0x5c68a4
// 005c6886  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005c688a  8b0488               mov eax, dword ptr [eax + ecx*4]
// 005c688d  5f                   pop edi
// 005c688e  5e                   pop esi
// 005c688f  5d                   pop ebp
// 005c6890  5b                   pop ebx
// 005c6891  83c420               add esp, 0x20
// 005c6894  c3                   ret 
// 005c6895  eb09                 jmp 0x5c68a0
// 005c6897  8da42400000000       lea esp, [esp]
// 005c689e  8bff                 mov edi, edi
// 005c68a0  8a5c2413             mov bl, byte ptr [esp + 0x13]
// 005c68a4  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 005c68a8  8b442420             mov eax, dword ptr [esp + 0x20]
// 005c68ac  8b0482               mov eax, dword ptr [edx + eax*4]
// 005c68af  8bf8                 mov edi, eax
// 005c68b1  8be8                 mov ebp, eax
// 005c68b3  c1ef06               shr edi, 6
// 005c68b6  83e53f               and ebp, 0x3f
// 005c68b9  33f6                 xor esi, esi
// 005c68bb  81e7ff000000         and edi, 0xff
// 005c68c1  83fd26               cmp ebp, 0x26
// 005c68c4  89742414             mov dword ptr [esp + 0x14], esi
// 005c68c8  0f8d86000000         jge 0x5c6954
// 005c68ce  0fb6cb               movzx ecx, bl
// 005c68d1  3bf9                 cmp edi, ecx
// 005c68d3  894c2418             mov dword ptr [esp + 0x18], ecx
// 005c68d7  7d7b                 jge 0x5c6954
// 005c68d9  8a95f4377c00         mov dl, byte ptr [ebp + 0x7c37f4]
// 005c68df  0fb6da               movzx ebx, dl
// 005c68e2  8bcb                 mov ecx, ebx
// 005c68e4  83e103               and ecx, 3
// 005c68e7  2bce                 sub ecx, esi
// 005c68e9  7473                 je 0x5c695e
// 005c68eb  83e901               sub ecx, 1
// 005c68ee  744e                 je 0x5c693e
// 005c68f0  83e901               sub ecx, 1
// 005c68f3  0f85a6000000         jne 0x5c699f
// 005c68f9  c1e80e               shr eax, 0xe
// 005c68fc  2dffff0100           sub eax, 0x1ffff
// 005c6901  80e230               and dl, 0x30
// 005c6904  80fa20               cmp dl, 0x20
// 005c6907  8bf0                 mov esi, eax
// 005c6909  0f8590000000         jne 0x5c699f
// 005c690f  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005c6913  8d440e01             lea eax, [esi + ecx + 1]
// 005c6917  85c0                 test eax, eax
// 005c6919  7c39                 jl 0x5c6954
// 005c691b  3b442428             cmp eax, dword ptr [esp + 0x28]
// 005c691f  7d33                 jge 0x5c6954
// 005c6921  85c0                 test eax, eax
// 005c6923  7e7a                 jle 0x5c699f
// 005c6925  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 005c6929  8b4482fc             mov eax, dword ptr [edx + eax*4 - 4]
// 005c692d  8bc8                 mov ecx, eax
// 005c692f  83e13f               and ecx, 0x3f
// 005c6932  80f922               cmp cl, 0x22
// 005c6935  7568                 jne 0x5c699f
// 005c6937  a900c07f00           test eax, 0x7fc000
// 005c693c  eb5f                 jmp 0x5c699d
// 005c693e  c1e80e               shr eax, 0xe
// 005c6941  80e230               and dl, 0x30
// 005c6944  80fa30               cmp dl, 0x30
// 005c6947  8bf0                 mov esi, eax
// 005c6949  7554                 jne 0x5c699f
// 005c694b  8b542434             mov edx, dword ptr [esp + 0x34]
// 005c694f  3b7228               cmp esi, dword ptr [edx + 0x28]
// 005c6952  7c4b                 jl 0x5c699f
// 005c6954  5f                   pop edi
// 005c6955  5e                   pop esi
// 005c6956  5d                   pop ebp
// 005c6957  33c0                 xor eax, eax
// 005c6959  5b                   pop ebx
// 005c695a  83c420               add esp, 0x20
// 005c695d  c3                   ret 
// 005c695e  8b542434             mov edx, dword ptr [esp + 0x34]
// 005c6962  8bf0                 mov esi, eax
// 005c6964  c1e80e               shr eax, 0xe
// 005c6967  25ff010000           and eax, 0x1ff
// 005c696c  89442414             mov dword ptr [esp + 0x14], eax
// 005c6970  8bc3                 mov eax, ebx
// 005c6972  c1e804               shr eax, 4
// 005c6975  c1ee17               shr esi, 0x17
// 005c6978  83e003               and eax, 3
// 005c697b  8bce                 mov ecx, esi
// 005c697d  e84efeffff           call 0x5c67d0
// 005c6982  85c0                 test eax, eax
// 005c6984  74ce                 je 0x5c6954
// 005c6986  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005c698a  8b542434             mov edx, dword ptr [esp + 0x34]
// 005c698e  8bc3                 mov eax, ebx
// 005c6990  c1e802               shr eax, 2
// 005c6993  83e003               and eax, 3
// 005c6996  e835feffff           call 0x5c67d0
// 005c699b  85c0                 test eax, eax
// 005c699d  74b5                 je 0x5c6954
// 005c699f  8a85f4377c00         mov al, byte ptr [ebp + 0x7c37f4]
// 005c69a5  a840                 test al, 0x40
// 005c69a7  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 005c69ab  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 005c69af  7408                 je 0x5c69b9
// 005c69b1  3bf9                 cmp edi, ecx
// 005c69b3  7504                 jne 0x5c69b9
// 005c69b5  895c2424             mov dword ptr [esp + 0x24], ebx
// 005c69b9  84c0                 test al, al
// 005c69bb  8b542428             mov edx, dword ptr [esp + 0x28]
// 005c69bf  791a                 jns 0x5c69db
// 005c69c1  8d4302               lea eax, [ebx + 2]
// 005c69c4  3bc2                 cmp eax, edx
// 005c69c6  7d8c                 jge 0x5c6954
// 005c69c8  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005c69cc  8b449804             mov eax, dword ptr [eax + ebx*4 + 4]
// 005c69d0  83e03f               and eax, 0x3f
// 005c69d3  3c16                 cmp al, 0x16
// 005c69d5  0f8579ffffff         jne 0x5c6954
// 005c69db  83c5fe               add ebp, -2
// 005c69de  83fd23               cmp ebp, 0x23
// 005c69e1  0f871d020000         ja 0x5c6c04
// 005c69e7  0fb685646c5c00       movzx eax, byte ptr [ebp + 0x5c6c64]
// 005c69ee  ff2485286c5c00       jmp dword ptr [eax*4 + 0x5c6c28]
// 005c69f5  837c241400           cmp dword ptr [esp + 0x14], 0
// 005c69fa  0f8404020000         je 0x5c6c04
// 005c6a00  8d4b02               lea ecx, [ebx + 2]
// 005c6a03  3bca                 cmp ecx, edx
// 005c6a05  e9f4010000           jmp 0x5c6bfe
// 005c6a0a  3bf9                 cmp edi, ecx
// 005c6a0c  0f8ff2010000         jg 0x5c6c04
// 005c6a12  3bce                 cmp ecx, esi
// 005c6a14  0f8fea010000         jg 0x5c6c04
// 005c6a1a  895c2424             mov dword ptr [esp + 0x24], ebx
// 005c6a1e  e9e1010000           jmp 0x5c6c04
// 005c6a23  3b74242c             cmp esi, dword ptr [esp + 0x2c]
// 005c6a27  e9d2010000           jmp 0x5c6bfe
// 005c6a2c  8b542434             mov edx, dword ptr [esp + 0x34]
// 005c6a30  8b4208               mov eax, dword ptr [edx + 8]
// 005c6a33  c1e604               shl esi, 4
// 005c6a36  837c060804           cmp dword ptr [esi + eax + 8], 4
// 005c6a3b  0f8513ffffff         jne 0x5c6954
// 005c6a41  e9be010000           jmp 0x5c6c04
// 005c6a46  83c701               add edi, 1
// 005c6a49  3b7c2418             cmp edi, dword ptr [esp + 0x18]
// 005c6a4d  0f8d01ffffff         jge 0x5c6954
// 005c6a53  3bcf                 cmp ecx, edi
// 005c6a55  0f85a9010000         jne 0x5c6c04
// 005c6a5b  895c2424             mov dword ptr [esp + 0x24], ebx
// 005c6a5f  e9a0010000           jmp 0x5c6c04
// 005c6a64  3b742414             cmp esi, dword ptr [esp + 0x14]
// 005c6a68  e991010000           jmp 0x5c6bfe
// 005c6a6d  8b442414             mov eax, dword ptr [esp + 0x14]
// 005c6a71  83f801               cmp eax, 1
// 005c6a74  0f8cdafeffff         jl 0x5c6954
// 005c6a7a  8d543802             lea edx, [eax + edi + 2]
// 005c6a7e  3b542418             cmp edx, dword ptr [esp + 0x18]
// 005c6a82  0f8dccfeffff         jge 0x5c6954
// 005c6a88  83c702               add edi, 2
// 005c6a8b  3bcf                 cmp ecx, edi
// 005c6a8d  0f8c71010000         jl 0x5c6c04
// 005c6a93  895c2424             mov dword ptr [esp + 0x24], ebx
// 005c6a97  e968010000           jmp 0x5c6c04
// 005c6a9c  83c703               add edi, 3
// 005c6a9f  3b7c2418             cmp edi, dword ptr [esp + 0x18]
// 005c6aa3  0f8dabfeffff         jge 0x5c6954
// 005c6aa9  81f9ff000000         cmp ecx, 0xff
// 005c6aaf  8d441e01             lea eax, [esi + ebx + 1]
// 005c6ab3  0f844b010000         je 0x5c6c04
// 005c6ab9  3bd8                 cmp ebx, eax
// 005c6abb  0f8d43010000         jge 0x5c6c04
// 005c6ac1  3b442438             cmp eax, dword ptr [esp + 0x38]
// 005c6ac5  0f8f39010000         jg 0x5c6c04
// 005c6acb  03de                 add ebx, esi
// 005c6acd  e932010000           jmp 0x5c6c04
// 005c6ad2  85f6                 test esi, esi
// 005c6ad4  740e                 je 0x5c6ae4
// 005c6ad6  8d443eff             lea eax, [esi + edi - 1]
// 005c6ada  3b442418             cmp eax, dword ptr [esp + 0x18]
// 005c6ade  0f8d70feffff         jge 0x5c6954
// 005c6ae4  8b442414             mov eax, dword ptr [esp + 0x14]
// 005c6ae8  83e801               sub eax, 1
// 005c6aeb  83f8ff               cmp eax, -1
// 005c6aee  751f                 jne 0x5c6b0f
// 005c6af0  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005c6af4  8b549904             mov edx, dword ptr [ecx + ebx*4 + 4]
// 005c6af8  52                   push edx
// 005c6af9  e8a2fcffff           call 0x5c67a0
// 005c6afe  83c404               add esp, 4
// 005c6b01  85c0                 test eax, eax
// 005c6b03  0f844bfeffff         je 0x5c6954
// 005c6b09  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 005c6b0d  eb12                 jmp 0x5c6b21
// 005c6b0f  85c0                 test eax, eax
// 005c6b11  740e                 je 0x5c6b21
// 005c6b13  8d4438ff             lea eax, [eax + edi - 1]
// 005c6b17  3b442418             cmp eax, dword ptr [esp + 0x18]
// 005c6b1b  0f8d33feffff         jge 0x5c6954
// 005c6b21  3bcf                 cmp ecx, edi
// 005c6b23  0f8cdb000000         jl 0x5c6c04
// 005c6b29  895c2424             mov dword ptr [esp + 0x24], ebx
// 005c6b2d  e9d2000000           jmp 0x5c6c04
// 005c6b32  83ee01               sub esi, 1
// 005c6b35  85f6                 test esi, esi
// 005c6b37  0f8ec7000000         jle 0x5c6c04
// 005c6b3d  8d4c3eff             lea ecx, [esi + edi - 1]
// 005c6b41  3b4c2418             cmp ecx, dword ptr [esp + 0x18]
// 005c6b45  e9b4000000           jmp 0x5c6bfe
// 005c6b4a  85f6                 test esi, esi
// 005c6b4c  7e0c                 jle 0x5c6b5a
// 005c6b4e  03f7                 add esi, edi
// 005c6b50  3b742418             cmp esi, dword ptr [esp + 0x18]
// 005c6b54  0f8dfafdffff         jge 0x5c6954
// 005c6b5a  837c241400           cmp dword ptr [esp + 0x14], 0
// 005c6b5f  0f859f000000         jne 0x5c6c04
// 005c6b65  83c301               add ebx, 1
// 005c6b68  e997000000           jmp 0x5c6c04
// 005c6b6d  8b442434             mov eax, dword ptr [esp + 0x34]
// 005c6b71  3b7034               cmp esi, dword ptr [eax + 0x34]
// 005c6b74  0f8ddafdffff         jge 0x5c6954
// 005c6b7a  8b4010               mov eax, dword ptr [eax + 0x10]
// 005c6b7d  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 005c6b80  0fb64948             movzx ecx, byte ptr [ecx + 0x48]
// 005c6b84  8d0419               lea eax, [ecx + ebx]
// 005c6b87  3bc2                 cmp eax, edx
// 005c6b89  0f8dc5fdffff         jge 0x5c6954
// 005c6b8f  85c9                 test ecx, ecx
// 005c6b91  7e71                 jle 0x5c6c04
// 005c6b93  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 005c6b97  8d3482               lea esi, [edx + eax*4]
// 005c6b9a  8d9b00000000         lea ebx, [ebx]
// 005c6ba0  8b06                 mov eax, dword ptr [esi]
// 005c6ba2  83e03f               and eax, 0x3f
// 005c6ba5  83f804               cmp eax, 4
// 005c6ba8  7408                 je 0x5c6bb2
// 005c6baa  85c0                 test eax, eax
// 005c6bac  0f85a2fdffff         jne 0x5c6954
// 005c6bb2  83e901               sub ecx, 1
// 005c6bb5  83ee04               sub esi, 4
// 005c6bb8  85c9                 test ecx, ecx
// 005c6bba  7fe4                 jg 0x5c6ba0
// 005c6bbc  eb46                 jmp 0x5c6c04
// 005c6bbe  8b442434             mov eax, dword ptr [esp + 0x34]
// 005c6bc2  8a404a               mov al, byte ptr [eax + 0x4a]
// 005c6bc5  a802                 test al, 2
// 005c6bc7  0f8487fdffff         je 0x5c6954
// 005c6bcd  a804                 test al, 4
// 005c6bcf  0f857ffdffff         jne 0x5c6954
// 005c6bd5  83ee01               sub esi, 1
// 005c6bd8  83feff               cmp esi, -1
// 005c6bdb  7519                 jne 0x5c6bf6
// 005c6bdd  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005c6be1  8b549904             mov edx, dword ptr [ecx + ebx*4 + 4]
// 005c6be5  52                   push edx
// 005c6be6  e8b5fbffff           call 0x5c67a0
// 005c6beb  83c404               add esp, 4
// 005c6bee  85c0                 test eax, eax
// 005c6bf0  0f845efdffff         je 0x5c6954
// 005c6bf6  8d443eff             lea eax, [esi + edi - 1]
// 005c6bfa  3b442418             cmp eax, dword ptr [esp + 0x18]
// 005c6bfe  0f8d50fdffff         jge 0x5c6954
// 005c6c04  83c301               add ebx, 1
// 005c6c07  3b5c2438             cmp ebx, dword ptr [esp + 0x38]
// 005c6c0b  895c2420             mov dword ptr [esp + 0x20], ebx
// 005c6c0f  0f8c8bfcffff         jl 0x5c68a0
// 005c6c15  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005c6c19  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005c6c1d  8b0488               mov eax, dword ptr [eax + ecx*4]
// 005c6c20  5f                   pop edi
// 005c6c21  5e                   pop esi
// 005c6c22  5d                   pop ebp
// 005c6c23  5b                   pop ebx
// 005c6c24  83c420               add esp, 0x20
// 005c6c27  c3                   ret 
// 005c6c28  f5                   cmc 
// 005c6c29  695c000a6a5c0023     imul ebx, dword ptr [eax + eax + 0xa], 0x23005c6a
// 005c6c31  6a5c                 push 0x5c
// 005c6c33  002c6a               add byte ptr [edx + ebp*2], ch
// 005c6c36  5c                   pop esp
// 005c6c37  00466a               add byte ptr [esi + 0x6a], al
// 005c6c3a  5c                   pop esp
// 005c6c3b  00646a5c             add byte ptr [edx + ebp*2 + 0x5c], ah
// 005c6c3f  00a96a5c00d2         add byte ptr [ecx - 0x2dffa396], ch
// 005c6c45  6a5c                 push 0x5c
// 005c6c47  0032                 add byte ptr [edx], dh
// 005c6c49  6b5c009c6a           imul ebx, dword ptr [eax + eax - 0x64], 0x6a
// 005c6c4e  5c                   pop esp
// 005c6c4f  006d6a               add byte ptr [ebp + 0x6a], ch
// 005c6c52  5c                   pop esp
// 005c6c53  004a6b               add byte ptr [edx + 0x6b], cl
// 005c6c56  5c                   pop esp
// 005c6c57  006d6b               add byte ptr [ebp + 0x6b], ch
// 005c6c5a  5c                   pop esp
// 005c6c5b  00be6b5c0004         add byte ptr [esi + 0x4005c6b], bh
// 005c6c61  6c                   insb byte ptr es:[edi], dx
// 005c6c62  5c                   pop esp
// 005c6c63  0000                 add byte ptr [eax], al
// 005c6c65  0102                 add dword ptr [edx], eax
// 005c6c67  030e                 add ecx, dword ptr [esi]
// 005c6c69  0302                 add eax, dword ptr [edx]
// 005c6c6b  0e                   push cs
// 005c6c6c  0e                   push cs
// 005c6c6d  040e                 add al, 0xe
// 005c6c6f  0e                   push cs
// 005c6c70  0e                   push cs
// 005c6c71  0e                   push cs
// 005c6c72  0e                   push cs
// 005c6c73  0e                   push cs
// 005c6c74  0e                   push cs
// 005c6c75  0e                   push cs
// 005c6c76  0e                   push cs
// 005c6c77  05060e0e0e           add eax, 0xe0e0e06
// 005c6c7c  0e                   push cs
// 005c6c7d  0e                   push cs
// 005c6c7e  07                   pop es
// 005c6c7f  07                   pop es
// 005c6c80  0809                 or byte ptr [ecx], cl
// 005c6c82  090a                 or dword ptr [edx], ecx
// 005c6c84  0b0e                 or ecx, dword ptr [esi]
// 005c6c86  0c0d                 or al, 0xd
// library lua-5.1.1/ldebug.c (function _symbexec)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.1 ldebug.c
