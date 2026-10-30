// roc 2009-12 00884a70  unit: XTPPaintThemes::CXTPOffice2003Theme  size: 1390 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00884a70
//
// 00884a70  6aff                 push -1
// 00884a72  68780a9600           push 0x960a78
// 00884a77  64a100000000         mov eax, dword ptr fs:[0]
// 00884a7d  50                   push eax
// 00884a7e  83ec34               sub esp, 0x34
// 00884a81  53                   push ebx
// 00884a82  55                   push ebp
// 00884a83  56                   push esi
// 00884a84  57                   push edi
// 00884a85  a10052b600           mov eax, dword ptr [0xb65200]
// 00884a8a  33c4                 xor eax, esp
// 00884a8c  50                   push eax
// 00884a8d  8d442448             lea eax, [esp + 0x48]
// 00884a91  64a300000000         mov dword ptr fs:[0], eax
// 00884a97  8bf9                 mov edi, ecx
// 00884a99  8b442460             mov eax, dword ptr [esp + 0x60]
// 00884a9d  85c0                 test eax, eax
// 00884a9f  0f859c030000         jne 0x884e41
// 00884aa5  3944246c             cmp dword ptr [esp + 0x6c], eax
// 00884aa9  756f                 jne 0x884b1a
// 00884aab  8b442470             mov eax, dword ptr [esp + 0x70]
// 00884aaf  8b30                 mov esi, dword ptr [eax]
// 00884ab1  8b5004               mov edx, dword ptr [eax + 4]
// 00884ab4  8b442468             mov eax, dword ptr [esp + 0x68]
// 00884ab8  8b8000010000         mov eax, dword ptr [eax + 0x100]
// 00884abe  83f802               cmp eax, 2
// 00884ac1  7432                 je 0x884af5
// 00884ac3  83f803               cmp eax, 3
// 00884ac6  742d                 je 0x884af5
// 00884ac8  83f805               cmp eax, 5
// 00884acb  7428                 je 0x884af5
// 00884acd  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 00884ad1  8b29                 mov ebp, dword ptr [ecx]
// 00884ad3  83ec10               sub esp, 0x10
// 00884ad6  8bc4                 mov eax, esp
// 00884ad8  8d7ef4               lea edi, [esi - 0xc]
// 00884adb  8938                 mov dword ptr [eax], edi
// 00884add  bb01000000           mov ebx, 1
// 00884ae2  895804               mov dword ptr [eax + 4], ebx
// 00884ae5  897008               mov dword ptr [eax + 8], esi
// 00884ae8  89500c               mov dword ptr [eax + 0xc], edx
// 00884aeb  8b557c               mov edx, dword ptr [ebp + 0x7c]
// 00884aee  ffd2                 call edx
// 00884af0  e936030000           jmp 0x884e2b
// 00884af5  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 00884af9  8b29                 mov ebp, dword ptr [ecx]
// 00884afb  83ec10               sub esp, 0x10
// 00884afe  8bc4                 mov eax, esp
// 00884b00  33ff                 xor edi, edi
// 00884b02  8938                 mov dword ptr [eax], edi
// 00884b04  8d5af4               lea ebx, [edx - 0xc]
// 00884b07  895804               mov dword ptr [eax + 4], ebx
// 00884b0a  897008               mov dword ptr [eax + 8], esi
// 00884b0d  89500c               mov dword ptr [eax + 0xc], edx
// 00884b10  8b457c               mov eax, dword ptr [ebp + 0x7c]
// 00884b13  ffd0                 call eax
// 00884b15  e911030000           jmp 0x884e2b
// 00884b1a  8b742464             mov esi, dword ptr [esp + 0x64]
// 00884b1e  8b6c2468             mov ebp, dword ptr [esp + 0x68]
// 00884b22  8b86c0000000         mov eax, dword ptr [esi + 0xc0]
// 00884b28  8b8ec4000000         mov ecx, dword ptr [esi + 0xc4]
// 00884b2e  8b96c8000000         mov edx, dword ptr [esi + 0xc8]
// 00884b34  8b9d00010000         mov ebx, dword ptr [ebp + 0x100]
// 00884b3a  8bb6cc000000         mov esi, dword ptr [esi + 0xcc]
// 00884b40  89442424             mov dword ptr [esp + 0x24], eax
// 00884b44  894c2428             mov dword ptr [esp + 0x28], ecx
// 00884b48  8954242c             mov dword ptr [esp + 0x2c], edx
// 00884b4c  89742430             mov dword ptr [esp + 0x30], esi
// 00884b50  83fb02               cmp ebx, 2
// 00884b53  7448                 je 0x884b9d
// 00884b55  83fb03               cmp ebx, 3
// 00884b58  7443                 je 0x884b9d
// 00884b5a  83fb05               cmp ebx, 5
// 00884b5d  743e                 je 0x884b9d
// 00884b5f  8b74245c             mov esi, dword ptr [esp + 0x5c]
// 00884b63  8d4101               lea eax, [ecx + 1]
// 00884b66  50                   push eax
// 00884b67  52                   push edx
// 00884b68  51                   push ecx
// 00884b69  4a                   dec edx
// 00884b6a  52                   push edx
// 00884b6b  8bce                 mov ecx, esi
// 00884b6d  e8e01d0a00           call 0x926952
// 00884b72  8b442430             mov eax, dword ptr [esp + 0x30]
// 00884b76  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00884b7a  50                   push eax
// 00884b7b  51                   push ecx
// 00884b7c  48                   dec eax
// 00884b7d  49                   dec ecx
// 00884b7e  50                   push eax
// 00884b7f  51                   push ecx
// 00884b80  8bce                 mov ecx, esi
// 00884b82  e8cb1d0a00           call 0x926952
// 00884b87  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00884b8b  8b442424             mov eax, dword ptr [esp + 0x24]
// 00884b8f  49                   dec ecx
// 00884b90  51                   push ecx
// 00884b91  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00884b95  8d5001               lea edx, [eax + 1]
// 00884b98  52                   push edx
// 00884b99  41                   inc ecx
// 00884b9a  51                   push ecx
// 00884b9b  eb3c                 jmp 0x884bd9
// 00884b9d  56                   push esi
// 00884b9e  8d5001               lea edx, [eax + 1]
// 00884ba1  52                   push edx
// 00884ba2  4e                   dec esi
// 00884ba3  56                   push esi
// 00884ba4  8b742468             mov esi, dword ptr [esp + 0x68]
// 00884ba8  50                   push eax
// 00884ba9  8bce                 mov ecx, esi
// 00884bab  e8a21d0a00           call 0x926952
// 00884bb0  8b442430             mov eax, dword ptr [esp + 0x30]
// 00884bb4  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00884bb8  50                   push eax
// 00884bb9  51                   push ecx
// 00884bba  48                   dec eax
// 00884bbb  49                   dec ecx
// 00884bbc  50                   push eax
// 00884bbd  51                   push ecx
// 00884bbe  8bce                 mov ecx, esi
// 00884bc0  e88d1d0a00           call 0x926952
// 00884bc5  8b442428             mov eax, dword ptr [esp + 0x28]
// 00884bc9  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00884bcd  8d4801               lea ecx, [eax + 1]
// 00884bd0  51                   push ecx
// 00884bd1  4a                   dec edx
// 00884bd2  52                   push edx
// 00884bd3  50                   push eax
// 00884bd4  8b442430             mov eax, dword ptr [esp + 0x30]
// 00884bd8  40                   inc eax
// 00884bd9  50                   push eax
// 00884bda  8bce                 mov ecx, esi
// 00884bdc  e8711d0a00           call 0x926952
// 00884be1  8b5c2464             mov ebx, dword ptr [esp + 0x64]
// 00884be5  8b13                 mov edx, dword ptr [ebx]
// 00884be7  8b82b4000000         mov eax, dword ptr [edx + 0xb4]
// 00884bed  8bcb                 mov ecx, ebx
// 00884bef  ffd0                 call eax
// 00884bf1  85c0                 test eax, eax
// 00884bf3  7474                 je 0x884c69
// 00884bf5  83bf4005000000       cmp dword ptr [edi + 0x540], 0
// 00884bfc  7450                 je 0x884c4e
// 00884bfe  8b8788050000         mov eax, dword ptr [edi + 0x588]
// 00884c04  8b8d00010000         mov ecx, dword ptr [ebp + 0x100]
// 00884c0a  83f8ff               cmp eax, -1
// 00884c0d  7508                 jne 0x884c17
// 00884c0f  8b9f84050000         mov ebx, dword ptr [edi + 0x584]
// 00884c15  eb02                 jmp 0x884c19
// 00884c17  8bd8                 mov ebx, eax
// 00884c19  8baf7c050000         mov ebp, dword ptr [edi + 0x57c]
// 00884c1f  83fdff               cmp ebp, -1
// 00884c22  7506                 jne 0x884c2a
// 00884c24  8baf78050000         mov ebp, dword ptr [edi + 0x578]
// 00884c2a  6a00                 push 0
// 00884c2c  51                   push ecx
// 00884c2d  e8ce31baff           call 0x427e00
// 00884c32  83c404               add esp, 4
// 00884c35  50                   push eax
// 00884c36  53                   push ebx
// 00884c37  55                   push ebp
// 00884c38  8d4c2434             lea ecx, [esp + 0x34]
// 00884c3c  51                   push ecx
// 00884c3d  56                   push esi
// 00884c3e  8bcf                 mov ecx, edi
// 00884c40  e82b93f7ff           call 0x7fdf70
// 00884c45  8b5c2464             mov ebx, dword ptr [esp + 0x64]
// 00884c49  e9c1000000           jmp 0x884d0f
// 00884c4e  6a24                 push 0x24
// 00884c50  8bcf                 mov ecx, edi
// 00884c52  e8e989f7ff           call 0x7fd640
// 00884c57  50                   push eax
// 00884c58  8d542428             lea edx, [esp + 0x28]
// 00884c5c  52                   push edx
// 00884c5d  8bce                 mov ecx, esi
// 00884c5f  e89af9f6ff           call 0x7f45fe
// 00884c64  e9a6000000           jmp 0x884d0f
// 00884c69  8b03                 mov eax, dword ptr [ebx]
// 00884c6b  8b506c               mov edx, dword ptr [eax + 0x6c]
// 00884c6e  8bcb                 mov ecx, ebx
// 00884c70  ffd2                 call edx
// 00884c72  85c0                 test eax, eax
// 00884c74  746e                 je 0x884ce4
// 00884c76  83bf4005000000       cmp dword ptr [edi + 0x540], 0
// 00884c7d  744d                 je 0x884ccc
// 00884c7f  8b87a8050000         mov eax, dword ptr [edi + 0x5a8]
// 00884c85  8b8d00010000         mov ecx, dword ptr [ebp + 0x100]
// 00884c8b  83f8ff               cmp eax, -1
// 00884c8e  7508                 jne 0x884c98
// 00884c90  8b9fa4050000         mov ebx, dword ptr [edi + 0x5a4]
// 00884c96  eb02                 jmp 0x884c9a
// 00884c98  8bd8                 mov ebx, eax
// 00884c9a  8baf9c050000         mov ebp, dword ptr [edi + 0x59c]
// 00884ca0  83fdff               cmp ebp, -1
// 00884ca3  7506                 jne 0x884cab
// 00884ca5  8baf98050000         mov ebp, dword ptr [edi + 0x598]
// 00884cab  6a00                 push 0
// 00884cad  51                   push ecx
// 00884cae  e84d31baff           call 0x427e00
// 00884cb3  83c404               add esp, 4
// 00884cb6  50                   push eax
// 00884cb7  53                   push ebx
// 00884cb8  55                   push ebp
// 00884cb9  8d442434             lea eax, [esp + 0x34]
// 00884cbd  50                   push eax
// 00884cbe  56                   push esi
// 00884cbf  8bcf                 mov ecx, edi
// 00884cc1  e8aa92f7ff           call 0x7fdf70
// 00884cc6  8b5c2464             mov ebx, dword ptr [esp + 0x64]
// 00884cca  eb43                 jmp 0x884d0f
// 00884ccc  6a1f                 push 0x1f
// 00884cce  8bcf                 mov ecx, edi
// 00884cd0  e86b89f7ff           call 0x7fd640
// 00884cd5  50                   push eax
// 00884cd6  8d4c2428             lea ecx, [esp + 0x28]
// 00884cda  51                   push ecx
// 00884cdb  8bce                 mov ecx, esi
// 00884cdd  e81cf9f6ff           call 0x7f45fe
// 00884ce2  eb2b                 jmp 0x884d0f
// 00884ce4  8bad00010000         mov ebp, dword ptr [ebp + 0x100]
// 00884cea  6a00                 push 0
// 00884cec  55                   push ebp
// 00884ced  e80e31baff           call 0x427e00
// 00884cf2  83c404               add esp, 4
// 00884cf5  50                   push eax
// 00884cf6  8d979c040000         lea edx, [edi + 0x49c]
// 00884cfc  52                   push edx
// 00884cfd  8d442430             lea eax, [esp + 0x30]
// 00884d01  50                   push eax
// 00884d02  56                   push esi
// 00884d03  e89885fcff           call 0x84d2a0
// 00884d08  8bc8                 mov ecx, eax
// 00884d0a  e8b188fcff           call 0x84d5c0
// 00884d0f  8b13                 mov edx, dword ptr [ebx]
// 00884d11  8b82b4000000         mov eax, dword ptr [edx + 0xb4]
// 00884d17  8bcb                 mov ecx, ebx
// 00884d19  ffd0                 call eax
// 00884d1b  85c0                 test eax, eax
// 00884d1d  7407                 je 0x884d26
// 00884d1f  b82e000000           mov eax, 0x2e
// 00884d24  eb10                 jmp 0x884d36
// 00884d26  8b13                 mov edx, dword ptr [ebx]
// 00884d28  8b426c               mov eax, dword ptr [edx + 0x6c]
// 00884d2b  8bcb                 mov ecx, ebx
// 00884d2d  ffd0                 call eax
// 00884d2f  f7d8                 neg eax
// 00884d31  1bc0                 sbb eax, eax
// 00884d33  83c02e               add eax, 0x2e
// 00884d36  50                   push eax
// 00884d37  8bcf                 mov ecx, edi
// 00884d39  e80289f7ff           call 0x7fd640
// 00884d3e  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 00884d42  8b11                 mov edx, dword ptr [ecx]
// 00884d44  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 00884d48  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00884d4c  8944246c             mov dword ptr [esp + 0x6c], eax
// 00884d50  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00884d54  8954245c             mov dword ptr [esp + 0x5c], edx
// 00884d58  8b542424             mov edx, dword ptr [esp + 0x24]
// 00884d5c  2bc2                 sub eax, edx
// 00884d5e  8d5a01               lea ebx, [edx + 1]
// 00884d61  8b542468             mov edx, dword ptr [esp + 0x68]
// 00884d65  03c3                 add eax, ebx
// 00884d67  2bcd                 sub ecx, ebp
// 00884d69  45                   inc ebp
// 00884d6a  8944241c             mov dword ptr [esp + 0x1c], eax
// 00884d6e  8b8200010000         mov eax, dword ptr [edx + 0x100]
// 00884d74  03cd                 add ecx, ebp
// 00884d76  894c2420             mov dword ptr [esp + 0x20], ecx
// 00884d7a  83f802               cmp eax, 2
// 00884d7d  7412                 je 0x884d91
// 00884d7f  83f803               cmp eax, 3
// 00884d82  740d                 je 0x884d91
// 00884d84  c744246400000000     mov dword ptr [esp + 0x64], 0
// 00884d8c  83f805               cmp eax, 5
// 00884d8f  7508                 jne 0x884d99
// 00884d91  c744246401000000     mov dword ptr [esp + 0x64], 1
// 00884d99  6a14                 push 0x14
// 00884d9b  8bcf                 mov ecx, edi
// 00884d9d  e89e88f7ff           call 0x7fd640
// 00884da2  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00884da6  8b542420             mov edx, dword ptr [esp + 0x20]
// 00884daa  50                   push eax
// 00884dab  8b442460             mov eax, dword ptr [esp + 0x60]
// 00884daf  50                   push eax
// 00884db0  83ec10               sub esp, 0x10
// 00884db3  8bc4                 mov eax, esp
// 00884db5  8918                 mov dword ptr [eax], ebx
// 00884db7  896804               mov dword ptr [eax + 4], ebp
// 00884dba  894808               mov dword ptr [eax + 8], ecx
// 00884dbd  89500c               mov dword ptr [eax + 0xc], edx
// 00884dc0  8b44247c             mov eax, dword ptr [esp + 0x7c]
// 00884dc4  50                   push eax
// 00884dc5  56                   push esi
// 00884dc6  8bcf                 mov ecx, edi
// 00884dc8  e8b3faffff           call 0x884880
// 00884dcd  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 00884dd1  8b8100010000         mov eax, dword ptr [ecx + 0x100]
// 00884dd7  83f802               cmp eax, 2
// 00884dda  740e                 je 0x884dea
// 00884ddc  83f803               cmp eax, 3
// 00884ddf  7409                 je 0x884dea
// 00884de1  83f805               cmp eax, 5
// 00884de4  7404                 je 0x884dea
// 00884de6  33c9                 xor ecx, ecx
// 00884de8  eb05                 jmp 0x884def
// 00884dea  b901000000           mov ecx, 1
// 00884def  8b54246c             mov edx, dword ptr [esp + 0x6c]
// 00884df3  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 00884df7  52                   push edx
// 00884df8  8b542428             mov edx, dword ptr [esp + 0x28]
// 00884dfc  50                   push eax
// 00884dfd  83ec10               sub esp, 0x10
// 00884e00  8bc4                 mov eax, esp
// 00884e02  8910                 mov dword ptr [eax], edx
// 00884e04  8b542440             mov edx, dword ptr [esp + 0x40]
// 00884e08  895004               mov dword ptr [eax + 4], edx
// 00884e0b  8b542444             mov edx, dword ptr [esp + 0x44]
// 00884e0f  895008               mov dword ptr [eax + 8], edx
// 00884e12  8b542448             mov edx, dword ptr [esp + 0x48]
// 00884e16  51                   push ecx
// 00884e17  56                   push esi
// 00884e18  8bcf                 mov ecx, edi
// 00884e1a  89500c               mov dword ptr [eax + 0xc], edx
// 00884e1d  e85efaffff           call 0x884880
// 00884e22  6a00                 push 0
// 00884e24  8bce                 mov ecx, esi
// 00884e26  e839180a00           call 0x926664
// 00884e2b  8b442458             mov eax, dword ptr [esp + 0x58]
// 00884e2f  c70000000000         mov dword ptr [eax], 0
// 00884e35  c7400400000000       mov dword ptr [eax + 4], 0
// 00884e3c  e987010000           jmp 0x884fc8
// 00884e41  83f801               cmp eax, 1
// 00884e44  0f8556010000         jne 0x884fa0
// 00884e4a  837c246c00           cmp dword ptr [esp + 0x6c], 0
// 00884e4f  0f8438010000         je 0x884f8d
// 00884e55  8b5c2464             mov ebx, dword ptr [esp + 0x64]
// 00884e59  8b74245c             mov esi, dword ptr [esp + 0x5c]
// 00884e5d  53                   push ebx
// 00884e5e  56                   push esi
// 00884e5f  e80c8cf7ff           call 0x7fda70
// 00884e64  8b8bc8000000         mov ecx, dword ptr [ebx + 0xc8]
// 00884e6a  8b83c0000000         mov eax, dword ptr [ebx + 0xc0]
// 00884e70  8b93cc000000         mov edx, dword ptr [ebx + 0xcc]
// 00884e76  8babc4000000         mov ebp, dword ptr [ebx + 0xc4]
// 00884e7c  03c1                 add eax, ecx
// 00884e7e  89542430             mov dword ptr [esp + 0x30], edx
// 00884e82  99                   cdq 
// 00884e83  2bc2                 sub eax, edx
// 00884e85  8bd8                 mov ebx, eax
// 00884e87  6a00                 push 0
// 00884e89  8d4501               lea eax, [ebp + 1]
// 00884e8c  50                   push eax
// 00884e8d  d1fb                 sar ebx, 1
// 00884e8f  8d4bf9               lea ecx, [ebx - 7]
// 00884e92  51                   push ecx
// 00884e93  6a00                 push 0
// 00884e95  56                   push esi
// 00884e96  8d8f48050000         lea ecx, [edi + 0x548]
// 00884e9c  e88f2ff9ff           call 0x817e30
// 00884ea1  8d7d05               lea edi, [ebp + 5]
// 00884ea4  85f6                 test esi, esi
// 00884ea6  7504                 jne 0x884eac
// 00884ea8  33c0                 xor eax, eax
// 00884eaa  eb03                 jmp 0x884eaf
// 00884eac  8b4604               mov eax, dword ptr [esi + 4]
// 00884eaf  6a00                 push 0
// 00884eb1  50                   push eax
// 00884eb2  8d4c243c             lea ecx, [esp + 0x3c]
// 00884eb6  e84568fcff           call 0x84b700
// 00884ebb  57                   push edi
// 00884ebc  8d6bfe               lea ebp, [ebx - 2]
// 00884ebf  55                   push ebp
// 00884ec0  8d44241c             lea eax, [esp + 0x1c]
// 00884ec4  50                   push eax
// 00884ec5  8bce                 mov ecx, esi
// 00884ec7  c744245c00000000     mov dword ptr [esp + 0x5c], 0
// 00884ecf  e86ef8f6ff           call 0x7f4742
// 00884ed4  8d4f02               lea ecx, [edi + 2]
// 00884ed7  51                   push ecx
// 00884ed8  53                   push ebx
// 00884ed9  8bce                 mov ecx, esi
// 00884edb  e85cf8f6ff           call 0x7f473c
// 00884ee0  8d57ff               lea edx, [edi - 1]
// 00884ee3  8d4303               lea eax, [ebx + 3]
// 00884ee6  52                   push edx
// 00884ee7  50                   push eax
// 00884ee8  8bce                 mov ecx, esi
// 00884eea  8944246c             mov dword ptr [esp + 0x6c], eax
// 00884eee  e849f8f6ff           call 0x7f473c
// 00884ef3  8d4701               lea eax, [edi + 1]
// 00884ef6  50                   push eax
// 00884ef7  55                   push ebp
// 00884ef8  8d4c241c             lea ecx, [esp + 0x1c]
// 00884efc  51                   push ecx
// 00884efd  8bce                 mov ecx, esi
// 00884eff  e83ef8f6ff           call 0x7f4742
// 00884f04  8d4703               lea eax, [edi + 3]
// 00884f07  50                   push eax
// 00884f08  53                   push ebx
// 00884f09  8bce                 mov ecx, esi
// 00884f0b  e82cf8f6ff           call 0x7f473c
// 00884f10  8b542464             mov edx, dword ptr [esp + 0x64]
// 00884f14  57                   push edi
// 00884f15  52                   push edx
// 00884f16  8bce                 mov ecx, esi
// 00884f18  e81ff8f6ff           call 0x7f473c
// 00884f1d  8d4704               lea eax, [edi + 4]
// 00884f20  50                   push eax
// 00884f21  8944246c             mov dword ptr [esp + 0x6c], eax
// 00884f25  55                   push ebp
// 00884f26  8d44241c             lea eax, [esp + 0x1c]
// 00884f2a  50                   push eax
// 00884f2b  8bce                 mov ecx, esi
// 00884f2d  e810f8f6ff           call 0x7f4742
// 00884f32  8d4f06               lea ecx, [edi + 6]
// 00884f35  51                   push ecx
// 00884f36  53                   push ebx
// 00884f37  8bce                 mov ecx, esi
// 00884f39  e8fef7f6ff           call 0x7f473c
// 00884f3e  8b542464             mov edx, dword ptr [esp + 0x64]
// 00884f42  8d4703               lea eax, [edi + 3]
// 00884f45  50                   push eax
// 00884f46  52                   push edx
// 00884f47  8bce                 mov ecx, esi
// 00884f49  e8eef7f6ff           call 0x7f473c
// 00884f4e  8d4705               lea eax, [edi + 5]
// 00884f51  50                   push eax
// 00884f52  55                   push ebp
// 00884f53  8d4c241c             lea ecx, [esp + 0x1c]
// 00884f57  51                   push ecx
// 00884f58  8bce                 mov ecx, esi
// 00884f5a  e8e3f7f6ff           call 0x7f4742
// 00884f5f  83c707               add edi, 7
// 00884f62  57                   push edi
// 00884f63  53                   push ebx
// 00884f64  8bce                 mov ecx, esi
// 00884f66  e8d1f7f6ff           call 0x7f473c
// 00884f6b  8b542468             mov edx, dword ptr [esp + 0x68]
// 00884f6f  8b442464             mov eax, dword ptr [esp + 0x64]
// 00884f73  52                   push edx
// 00884f74  50                   push eax
// 00884f75  8bce                 mov ecx, esi
// 00884f77  e8c0f7f6ff           call 0x7f473c
// 00884f7c  c7442450ffffffff     mov dword ptr [esp + 0x50], 0xffffffff
// 00884f84  8d4c2434             lea ecx, [esp + 0x34]
// 00884f88  e80368fcff           call 0x84b790
// 00884f8d  8b442458             mov eax, dword ptr [esp + 0x58]
// 00884f91  c70000000000         mov dword ptr [eax], 0
// 00884f97  c7400412000000       mov dword ptr [eax + 4], 0x12
// 00884f9e  eb28                 jmp 0x884fc8
// 00884fa0  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 00884fa4  8b54246c             mov edx, dword ptr [esp + 0x6c]
// 00884fa8  8b742458             mov esi, dword ptr [esp + 0x58]
// 00884fac  51                   push ecx
// 00884fad  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 00884fb1  52                   push edx
// 00884fb2  8b54246c             mov edx, dword ptr [esp + 0x6c]
// 00884fb6  51                   push ecx
// 00884fb7  52                   push edx
// 00884fb8  50                   push eax
// 00884fb9  8b442470             mov eax, dword ptr [esp + 0x70]
// 00884fbd  50                   push eax
// 00884fbe  56                   push esi
// 00884fbf  8bcf                 mov ecx, edi
// 00884fc1  e86ab9f7ff           call 0x800930
// 00884fc6  8bc6                 mov eax, esi
// 00884fc8  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00884fcc  64890d00000000       mov dword ptr fs:[0], ecx
// 00884fd3  59                   pop ecx
// 00884fd4  5f                   pop edi
// 00884fd5  5e                   pop esi
// 00884fd6  5d                   pop ebp
// 00884fd7  5b                   pop ebx
// 00884fd8  83c440               add esp, 0x40
// 00884fdb  c21c00               ret 0x1c
// copied from an identical function in another client (function ?DrawSpecialControl@CXTPOffice2003Theme@XTPPaintThemes@@MAE?AVCSize@@PAVCDC@@W4XTPSpecialControl@@PAVCXTPControl@@PAVCXTPCommandBar@@HPAX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPOffice2003Theme.cpp