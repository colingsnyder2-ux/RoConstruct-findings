// roc 2010-06 00887760  unit: CXTPTabPaintManager  size: 1724 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00887760
//
// 00887760  83ec28               sub esp, 0x28
// 00887763  53                   push ebx
// 00887764  55                   push ebp
// 00887765  56                   push esi
// 00887766  8b742438             mov esi, dword ptr [esp + 0x38]
// 0088776a  8b06                 mov eax, dword ptr [esi]
// 0088776c  8b5040               mov edx, dword ptr [eax + 0x40]
// 0088776f  8be9                 mov ebp, ecx
// 00887771  57                   push edi
// 00887772  8bce                 mov ecx, esi
// 00887774  896c2414             mov dword ptr [esp + 0x14], ebp
// 00887778  ffd2                 call edx
// 0088777a  85c0                 test eax, eax
// 0088777c  7437                 je 0x8877b5
// 0088777e  8b06                 mov eax, dword ptr [esi]
// 00887780  8b5048               mov edx, dword ptr [eax + 0x48]
// 00887783  bf02000000           mov edi, 2
// 00887788  8bce                 mov ecx, esi
// 0088778a  8d5fff               lea ebx, [edi - 1]
// 0088778d  8bef                 mov ebp, edi
// 0088778f  ffd2                 call edx
// 00887791  50                   push eax
// 00887792  83ec10               sub esp, 0x10
// 00887795  8bc4                 mov eax, esp
// 00887797  8938                 mov dword ptr [eax], edi
// 00887799  895804               mov dword ptr [eax + 4], ebx
// 0088779c  896808               mov dword ptr [eax + 8], ebp
// 0088779f  8bcf                 mov ecx, edi
// 008877a1  89480c               mov dword ptr [eax + 0xc], ecx
// 008877a4  8d442458             lea eax, [esp + 0x58]
// 008877a8  50                   push eax
// 008877a9  e882110000           call 0x888930
// 008877ae  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 008877b2  83c418               add esp, 0x18
// 008877b5  8b16                 mov edx, dword ptr [esi]
// 008877b7  8b4248               mov eax, dword ptr [edx + 0x48]
// 008877ba  8bce                 mov ecx, esi
// 008877bc  ffd0                 call eax
// 008877be  8b4d50               mov ecx, dword ptr [ebp + 0x50]
// 008877c1  8b5554               mov edx, dword ptr [ebp + 0x54]
// 008877c4  50                   push eax
// 008877c5  83ec10               sub esp, 0x10
// 008877c8  8bc4                 mov eax, esp
// 008877ca  8908                 mov dword ptr [eax], ecx
// 008877cc  8b4d58               mov ecx, dword ptr [ebp + 0x58]
// 008877cf  895004               mov dword ptr [eax + 4], edx
// 008877d2  8b555c               mov edx, dword ptr [ebp + 0x5c]
// 008877d5  894808               mov dword ptr [eax + 8], ecx
// 008877d8  89500c               mov dword ptr [eax + 0xc], edx
// 008877db  8d442458             lea eax, [esp + 0x58]
// 008877df  50                   push eax
// 008877e0  e84b110000           call 0x888930
// 008877e5  83c418               add esp, 0x18
// 008877e8  8bce                 mov ecx, esi
// 008877ea  e851adffff           call 0x882540
// 008877ef  83f804               cmp eax, 4
// 008877f2  7537                 jne 0x88782b
// 008877f4  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 008877f8  8b542448             mov edx, dword ptr [esp + 0x48]
// 008877fc  83ec10               sub esp, 0x10
// 008877ff  8bc4                 mov eax, esp
// 00887801  8908                 mov dword ptr [eax], ecx
// 00887803  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 00887807  895004               mov dword ptr [eax + 4], edx
// 0088780a  8b542460             mov edx, dword ptr [esp + 0x60]
// 0088780e  894808               mov dword ptr [eax + 8], ecx
// 00887811  89500c               mov dword ptr [eax + 0xc], edx
// 00887814  8b442450             mov eax, dword ptr [esp + 0x50]
// 00887818  50                   push eax
// 00887819  56                   push esi
// 0088781a  8bcd                 mov ecx, ebp
// 0088781c  e8fff5ffff           call 0x886e20
// 00887821  5f                   pop edi
// 00887822  5e                   pop esi
// 00887823  5d                   pop ebp
// 00887824  5b                   pop ebx
// 00887825  83c428               add esp, 0x28
// 00887828  c21800               ret 0x18
// 0088782b  33db                 xor ebx, ebx
// 0088782d  395e5c               cmp dword ptr [esi + 0x5c], ebx
// 00887830  7e55                 jle 0x887887
// 00887832  85db                 test ebx, ebx
// 00887834  7c0d                 jl 0x887843
// 00887836  3b5e5c               cmp ebx, dword ptr [esi + 0x5c]
// 00887839  7d08                 jge 0x887843
// 0088783b  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 0088783e  8b3c99               mov edi, dword ptr [ecx + ebx*4]
// 00887841  eb02                 jmp 0x887845
// 00887843  33ff                 xor edi, edi
// 00887845  8bcf                 mov ecx, edi
// 00887847  e8a4a9ffff           call 0x8821f0
// 0088784c  85c0                 test eax, eax
// 0088784e  7415                 je 0x887865
// 00887850  8b8de0000000         mov ecx, dword ptr [ebp + 0xe0]
// 00887856  8b11                 mov edx, dword ptr [ecx]
// 00887858  8b442440             mov eax, dword ptr [esp + 0x40]
// 0088785c  8b5218               mov edx, dword ptr [edx + 0x18]
// 0088785f  57                   push edi
// 00887860  50                   push eax
// 00887861  ffd2                 call edx
// 00887863  eb02                 jmp 0x887867
// 00887865  33c0                 xor eax, eax
// 00887867  8bcf                 mov ecx, edi
// 00887869  894724               mov dword ptr [edi + 0x24], eax
// 0088786c  894720               mov dword ptr [edi + 0x20], eax
// 0088786f  e87ca9ffff           call 0x8821f0
// 00887874  85c0                 test eax, eax
// 00887876  7409                 je 0x887881
// 00887878  8b85b4000000         mov eax, dword ptr [ebp + 0xb4]
// 0088787e  014720               add dword ptr [edi + 0x20], eax
// 00887881  43                   inc ebx
// 00887882  3b5e5c               cmp ebx, dword ptr [esi + 0x5c]
// 00887885  7cab                 jl 0x887832
// 00887887  8b7c2444             mov edi, dword ptr [esp + 0x44]
// 0088788b  8b8de0000000         mov ecx, dword ptr [ebp + 0xe0]
// 00887891  8b11                 mov edx, dword ptr [ecx]
// 00887893  8b5208               mov edx, dword ptr [edx + 8]
// 00887896  56                   push esi
// 00887897  83ec10               sub esp, 0x10
// 0088789a  8bc4                 mov eax, esp
// 0088789c  8938                 mov dword ptr [eax], edi
// 0088789e  8b7c245c             mov edi, dword ptr [esp + 0x5c]
// 008878a2  897804               mov dword ptr [eax + 4], edi
// 008878a5  8b7c2460             mov edi, dword ptr [esp + 0x60]
// 008878a9  897808               mov dword ptr [eax + 8], edi
// 008878ac  8b7c2464             mov edi, dword ptr [esp + 0x64]
// 008878b0  89780c               mov dword ptr [eax + 0xc], edi
// 008878b3  8d44243c             lea eax, [esp + 0x3c]
// 008878b7  50                   push eax
// 008878b8  ffd2                 call edx
// 008878ba  837e5c00             cmp dword ptr [esi + 0x5c], 0
// 008878be  8b08                 mov ecx, dword ptr [eax]
// 008878c0  894e24               mov dword ptr [esi + 0x24], ecx
// 008878c3  8b5004               mov edx, dword ptr [eax + 4]
// 008878c6  895628               mov dword ptr [esi + 0x28], edx
// 008878c9  8b4808               mov ecx, dword ptr [eax + 8]
// 008878cc  894e2c               mov dword ptr [esi + 0x2c], ecx
// 008878cf  8b500c               mov edx, dword ptr [eax + 0xc]
// 008878d2  895630               mov dword ptr [esi + 0x30], edx
// 008878d5  7537                 jne 0x88790e
// 008878d7  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 008878db  8b542448             mov edx, dword ptr [esp + 0x48]
// 008878df  83ec10               sub esp, 0x10
// 008878e2  8bc4                 mov eax, esp
// 008878e4  8908                 mov dword ptr [eax], ecx
// 008878e6  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 008878ea  895004               mov dword ptr [eax + 4], edx
// 008878ed  8b542460             mov edx, dword ptr [esp + 0x60]
// 008878f1  894808               mov dword ptr [eax + 8], ecx
// 008878f4  89500c               mov dword ptr [eax + 0xc], edx
// 008878f7  56                   push esi
// 008878f8  8d44243c             lea eax, [esp + 0x3c]
// 008878fc  50                   push eax
// 008878fd  8bcd                 mov ecx, ebp
// 008878ff  e89cf1ffff           call 0x886aa0
// 00887904  5f                   pop edi
// 00887905  5e                   pop esi
// 00887906  5d                   pop ebp
// 00887907  5b                   pop ebx
// 00887908  83c428               add esp, 0x28
// 0088790b  c21800               ret 0x18
// 0088790e  8b8de0000000         mov ecx, dword ptr [ebp + 0xe0]
// 00887914  8b11                 mov edx, dword ptr [ecx]
// 00887916  8b5210               mov edx, dword ptr [edx + 0x10]
// 00887919  8d442418             lea eax, [esp + 0x18]
// 0088791d  50                   push eax
// 0088791e  ffd2                 call edx
// 00887920  8b8de0000000         mov ecx, dword ptr [ebp + 0xe0]
// 00887926  8b01                 mov eax, dword ptr [ecx]
// 00887928  8b501c               mov edx, dword ptr [eax + 0x1c]
// 0088792b  56                   push esi
// 0088792c  ffd2                 call edx
// 0088792e  8bd8                 mov ebx, eax
// 00887930  8b06                 mov eax, dword ptr [esi]
// 00887932  8b5048               mov edx, dword ptr [eax + 0x48]
// 00887935  8bce                 mov ecx, esi
// 00887937  895c2414             mov dword ptr [esp + 0x14], ebx
// 0088793b  ffd2                 call edx
// 0088793d  83f802               cmp eax, 2
// 00887940  7411                 je 0x887953
// 00887942  8b06                 mov eax, dword ptr [esi]
// 00887944  8b5048               mov edx, dword ptr [eax + 0x48]
// 00887947  8bce                 mov ecx, esi
// 00887949  ffd2                 call edx
// 0088794b  85c0                 test eax, eax
// 0088794d  0f8568020000         jne 0x887bbb
// 00887953  8b442448             mov eax, dword ptr [esp + 0x48]
// 00887957  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0088795b  8b16                 mov edx, dword ptr [esi]
// 0088795d  8d3c01               lea edi, [ecx + eax]
// 00887960  8b4248               mov eax, dword ptr [edx + 0x48]
// 00887963  8bce                 mov ecx, esi
// 00887965  897c243c             mov dword ptr [esp + 0x3c], edi
// 00887969  ffd0                 call eax
// 0088796b  83f802               cmp eax, 2
// 0088796e  750e                 jne 0x88797e
// 00887970  8b7c2450             mov edi, dword ptr [esp + 0x50]
// 00887974  2b7c241c             sub edi, dword ptr [esp + 0x1c]
// 00887978  2bfb                 sub edi, ebx
// 0088797a  897c243c             mov dword ptr [esp + 0x3c], edi
// 0088797e  03fb                 add edi, ebx
// 00887980  8bce                 mov ecx, esi
// 00887982  897c2410             mov dword ptr [esp + 0x10], edi
// 00887986  e8b5abffff           call 0x882540
// 0088798b  83f801               cmp eax, 1
// 0088798e  7551                 jne 0x8879e1
// 00887990  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 00887994  2b442444             sub eax, dword ptr [esp + 0x44]
// 00887998  8b7e70               mov edi, dword ptr [esi + 0x70]
// 0088799b  2b442418             sub eax, dword ptr [esp + 0x18]
// 0088799f  2b442420             sub eax, dword ptr [esp + 0x20]
// 008879a3  83ef01               sub edi, 1
// 008879a6  89442440             mov dword ptr [esp + 0x40], eax
// 008879aa  782c                 js 0x8879d8
// 008879ac  8d642400             lea esp, [esp]
// 008879b0  85ff                 test edi, edi
// 008879b2  7c0d                 jl 0x8879c1
// 008879b4  3b7e70               cmp edi, dword ptr [esi + 0x70]
// 008879b7  7d08                 jge 0x8879c1
// 008879b9  8b4e6c               mov ecx, dword ptr [esi + 0x6c]
// 008879bc  8b0cb9               mov ecx, dword ptr [ecx + edi*4]
// 008879bf  eb02                 jmp 0x8879c3
// 008879c1  33c9                 xor ecx, ecx
// 008879c3  8b11                 mov edx, dword ptr [ecx]
// 008879c5  8b5204               mov edx, dword ptr [edx + 4]
// 008879c8  8d442440             lea eax, [esp + 0x40]
// 008879cc  50                   push eax
// 008879cd  ffd2                 call edx
// 008879cf  83ef01               sub edi, 1
// 008879d2  79dc                 jns 0x8879b0
// 008879d4  8b442440             mov eax, dword ptr [esp + 0x40]
// 008879d8  50                   push eax
// 008879d9  56                   push esi
// 008879da  8bcd                 mov ecx, ebp
// 008879dc  e8aff9ffff           call 0x887390
// 008879e1  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 008879e5  8b542448             mov edx, dword ptr [esp + 0x48]
// 008879e9  83ec10               sub esp, 0x10
// 008879ec  8bc4                 mov eax, esp
// 008879ee  8908                 mov dword ptr [eax], ecx
// 008879f0  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 008879f4  895004               mov dword ptr [eax + 4], edx
// 008879f7  8b542460             mov edx, dword ptr [esp + 0x60]
// 008879fb  894808               mov dword ptr [eax + 8], ecx
// 008879fe  89500c               mov dword ptr [eax + 0xc], edx
// 00887a01  56                   push esi
// 00887a02  8d44243c             lea eax, [esp + 0x3c]
// 00887a06  50                   push eax
// 00887a07  8bcd                 mov ecx, ebp
// 00887a09  e892f0ffff           call 0x886aa0
// 00887a0e  837e1400             cmp dword ptr [esi + 0x14], 0
// 00887a12  8b08                 mov ecx, dword ptr [eax]
// 00887a14  894e24               mov dword ptr [esi + 0x24], ecx
// 00887a17  8b5004               mov edx, dword ptr [eax + 4]
// 00887a1a  895628               mov dword ptr [esi + 0x28], edx
// 00887a1d  8b4808               mov ecx, dword ptr [eax + 8]
// 00887a20  894e2c               mov dword ptr [esi + 0x2c], ecx
// 00887a23  8b500c               mov edx, dword ptr [eax + 0xc]
// 00887a26  895630               mov dword ptr [esi + 0x30], edx
// 00887a29  7d71                 jge 0x887a9c
// 00887a2b  8bce                 mov ecx, esi
// 00887a2d  e8bebbffff           call 0x8835f0
// 00887a32  8b4e2c               mov ecx, dword ptr [esi + 0x2c]
// 00887a35  2b4e24               sub ecx, dword ptr [esi + 0x24]
// 00887a38  8b5614               mov edx, dword ptr [esi + 0x14]
// 00887a3b  2b4c2418             sub ecx, dword ptr [esp + 0x18]
// 00887a3f  03d0                 add edx, eax
// 00887a41  2b4c2420             sub ecx, dword ptr [esp + 0x20]
// 00887a45  3bd1                 cmp edx, ecx
// 00887a47  7d53                 jge 0x887a9c
// 00887a49  8b542448             mov edx, dword ptr [esp + 0x48]
// 00887a4d  2bc8                 sub ecx, eax
// 00887a4f  33c0                 xor eax, eax
// 00887a51  85c9                 test ecx, ecx
// 00887a53  0f9fc0               setg al
// 00887a56  83ec10               sub esp, 0x10
// 00887a59  48                   dec eax
// 00887a5a  23c1                 and eax, ecx
// 00887a5c  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 00887a60  894614               mov dword ptr [esi + 0x14], eax
// 00887a63  8bc4                 mov eax, esp
// 00887a65  8908                 mov dword ptr [eax], ecx
// 00887a67  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 00887a6b  895004               mov dword ptr [eax + 4], edx
// 00887a6e  8b542460             mov edx, dword ptr [esp + 0x60]
// 00887a72  894808               mov dword ptr [eax + 8], ecx
// 00887a75  89500c               mov dword ptr [eax + 0xc], edx
// 00887a78  56                   push esi
// 00887a79  8d44243c             lea eax, [esp + 0x3c]
// 00887a7d  50                   push eax
// 00887a7e  8bcd                 mov ecx, ebp
// 00887a80  e81bf0ffff           call 0x886aa0
// 00887a85  8b08                 mov ecx, dword ptr [eax]
// 00887a87  894e24               mov dword ptr [esi + 0x24], ecx
// 00887a8a  8b5004               mov edx, dword ptr [eax + 4]
// 00887a8d  895628               mov dword ptr [esi + 0x28], edx
// 00887a90  8b4808               mov ecx, dword ptr [eax + 8]
// 00887a93  894e2c               mov dword ptr [esi + 0x2c], ecx
// 00887a96  8b500c               mov edx, dword ptr [eax + 0xc]
// 00887a99  895630               mov dword ptr [esi + 0x30], edx
// 00887a9c  8b7e24               mov edi, dword ptr [esi + 0x24]
// 00887a9f  037e14               add edi, dword ptr [esi + 0x14]
// 00887aa2  8bce                 mov ecx, esi
// 00887aa4  037c2418             add edi, dword ptr [esp + 0x18]
// 00887aa8  e893aaffff           call 0x882540
// 00887aad  83f805               cmp eax, 5
// 00887ab0  0f85b0000000         jne 0x887b66
// 00887ab6  8b06                 mov eax, dword ptr [esi]
// 00887ab8  8b5048               mov edx, dword ptr [eax + 0x48]
// 00887abb  8bce                 mov ecx, esi
// 00887abd  ffd2                 call edx
// 00887abf  85c0                 test eax, eax
// 00887ac1  750d                 jne 0x887ad0
// 00887ac3  8b4630               mov eax, dword ptr [esi + 0x30]
// 00887ac6  2b442424             sub eax, dword ptr [esp + 0x24]
// 00887aca  89442410             mov dword ptr [esp + 0x10], eax
// 00887ace  eb0b                 jmp 0x887adb
// 00887ad0  8b4628               mov eax, dword ptr [esi + 0x28]
// 00887ad3  03442424             add eax, dword ptr [esp + 0x24]
// 00887ad7  8944243c             mov dword ptr [esp + 0x3c], eax
// 00887adb  33ed                 xor ebp, ebp
// 00887add  396e5c               cmp dword ptr [esi + 0x5c], ebp
// 00887ae0  0f8e2c030000         jle 0x887e12
// 00887ae6  8d041f               lea eax, [edi + ebx]
// 00887ae9  89442440             mov dword ptr [esp + 0x40], eax
// 00887aed  8d4900               lea ecx, [ecx]
// 00887af0  85ed                 test ebp, ebp
// 00887af2  7c0d                 jl 0x887b01
// 00887af4  3b6e5c               cmp ebp, dword ptr [esi + 0x5c]
// 00887af7  7d08                 jge 0x887b01
// 00887af9  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 00887afc  8b1ca9               mov ebx, dword ptr [ecx + ebp*4]
// 00887aff  eb02                 jmp 0x887b03
// 00887b01  33db                 xor ebx, ebx
// 00887b03  8b16                 mov edx, dword ptr [esi]
// 00887b05  8b4248               mov eax, dword ptr [edx + 0x48]
// 00887b08  8bce                 mov ecx, esi
// 00887b0a  ffd0                 call eax
// 00887b0c  83ec10               sub esp, 0x10
// 00887b0f  85c0                 test eax, eax
// 00887b11  8bc4                 mov eax, esp
// 00887b13  8938                 mov dword ptr [eax], edi
// 00887b15  7518                 jne 0x887b2f
// 00887b17  8b542420             mov edx, dword ptr [esp + 0x20]
// 00887b1b  8bca                 mov ecx, edx
// 00887b1d  2b4b20               sub ecx, dword ptr [ebx + 0x20]
// 00887b20  894804               mov dword ptr [eax + 4], ecx
// 00887b23  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 00887b27  894808               mov dword ptr [eax + 8], ecx
// 00887b2a  89500c               mov dword ptr [eax + 0xc], edx
// 00887b2d  eb16                 jmp 0x887b45
// 00887b2f  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 00887b33  8b4b20               mov ecx, dword ptr [ebx + 0x20]
// 00887b36  895004               mov dword ptr [eax + 4], edx
// 00887b39  03ca                 add ecx, edx
// 00887b3b  8b542450             mov edx, dword ptr [esp + 0x50]
// 00887b3f  895008               mov dword ptr [eax + 8], edx
// 00887b42  89480c               mov dword ptr [eax + 0xc], ecx
// 00887b45  8bcb                 mov ecx, ebx
// 00887b47  e894aeffff           call 0x8829e0
// 00887b4c  8b442414             mov eax, dword ptr [esp + 0x14]
// 00887b50  01442440             add dword ptr [esp + 0x40], eax
// 00887b54  45                   inc ebp
// 00887b55  03f8                 add edi, eax
// 00887b57  3b6e5c               cmp ebp, dword ptr [esi + 0x5c]
// 00887b5a  7c94                 jl 0x887af0
// 00887b5c  5f                   pop edi
// 00887b5d  5e                   pop esi
// 00887b5e  5d                   pop ebp
// 00887b5f  5b                   pop ebx
// 00887b60  83c428               add esp, 0x28
// 00887b63  c21800               ret 0x18
// 00887b66  33ed                 xor ebp, ebp
// 00887b68  396e5c               cmp dword ptr [esi + 0x5c], ebp
// 00887b6b  0f8ea1020000         jle 0x887e12
// 00887b71  85ed                 test ebp, ebp
// 00887b73  7c0d                 jl 0x887b82
// 00887b75  3b6e5c               cmp ebp, dword ptr [esi + 0x5c]
// 00887b78  7d08                 jge 0x887b82
// 00887b7a  8b4658               mov eax, dword ptr [esi + 0x58]
// 00887b7d  8b1ca8               mov ebx, dword ptr [eax + ebp*4]
// 00887b80  eb02                 jmp 0x887b84
// 00887b82  33db                 xor ebx, ebx
// 00887b84  8b4b20               mov ecx, dword ptr [ebx + 0x20]
// 00887b87  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 00887b8b  83ec10               sub esp, 0x10
// 00887b8e  8bc4                 mov eax, esp
// 00887b90  03cf                 add ecx, edi
// 00887b92  8938                 mov dword ptr [eax], edi
// 00887b94  895004               mov dword ptr [eax + 4], edx
// 00887b97  894808               mov dword ptr [eax + 8], ecx
// 00887b9a  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00887b9e  89480c               mov dword ptr [eax + 0xc], ecx
// 00887ba1  8bcb                 mov ecx, ebx
// 00887ba3  e838aeffff           call 0x8829e0
// 00887ba8  037b20               add edi, dword ptr [ebx + 0x20]
// 00887bab  45                   inc ebp
// 00887bac  3b6e5c               cmp ebp, dword ptr [esi + 0x5c]
// 00887baf  7cc0                 jl 0x887b71
// 00887bb1  5f                   pop edi
// 00887bb2  5e                   pop esi
// 00887bb3  5d                   pop ebp
// 00887bb4  5b                   pop ebx
// 00887bb5  83c428               add esp, 0x28
// 00887bb8  c21800               ret 0x18
// 00887bbb  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00887bbf  8b442444             mov eax, dword ptr [esp + 0x44]
// 00887bc3  8d3c10               lea edi, [eax + edx]
// 00887bc6  8b16                 mov edx, dword ptr [esi]
// 00887bc8  8b4248               mov eax, dword ptr [edx + 0x48]
// 00887bcb  8bce                 mov ecx, esi
// 00887bcd  897c243c             mov dword ptr [esp + 0x3c], edi
// 00887bd1  ffd0                 call eax
// 00887bd3  83f803               cmp eax, 3
// 00887bd6  750e                 jne 0x887be6
// 00887bd8  8b7c244c             mov edi, dword ptr [esp + 0x4c]
// 00887bdc  2b7c241c             sub edi, dword ptr [esp + 0x1c]
// 00887be0  2bfb                 sub edi, ebx
// 00887be2  897c243c             mov dword ptr [esp + 0x3c], edi
// 00887be6  03fb                 add edi, ebx
// 00887be8  8bce                 mov ecx, esi
// 00887bea  897c2410             mov dword ptr [esp + 0x10], edi
// 00887bee  e84da9ffff           call 0x882540
// 00887bf3  83f801               cmp eax, 1
// 00887bf6  754d                 jne 0x887c45
// 00887bf8  8b442450             mov eax, dword ptr [esp + 0x50]
// 00887bfc  2b442418             sub eax, dword ptr [esp + 0x18]
// 00887c00  8b7e70               mov edi, dword ptr [esi + 0x70]
// 00887c03  2b442420             sub eax, dword ptr [esp + 0x20]
// 00887c07  2b442448             sub eax, dword ptr [esp + 0x48]
// 00887c0b  83ef01               sub edi, 1
// 00887c0e  89442440             mov dword ptr [esp + 0x40], eax
// 00887c12  7828                 js 0x887c3c
// 00887c14  85ff                 test edi, edi
// 00887c16  7c0d                 jl 0x887c25
// 00887c18  3b7e70               cmp edi, dword ptr [esi + 0x70]
// 00887c1b  7d08                 jge 0x887c25
// 00887c1d  8b4e6c               mov ecx, dword ptr [esi + 0x6c]
// 00887c20  8b0cb9               mov ecx, dword ptr [ecx + edi*4]
// 00887c23  eb02                 jmp 0x887c27
// 00887c25  33c9                 xor ecx, ecx
// 00887c27  8b11                 mov edx, dword ptr [ecx]
// 00887c29  8b5204               mov edx, dword ptr [edx + 4]
// 00887c2c  8d442440             lea eax, [esp + 0x40]
// 00887c30  50                   push eax
// 00887c31  ffd2                 call edx
// 00887c33  83ef01               sub edi, 1
// 00887c36  79dc                 jns 0x887c14
// 00887c38  8b442440             mov eax, dword ptr [esp + 0x40]
// 00887c3c  50                   push eax
// 00887c3d  56                   push esi
// 00887c3e  8bcd                 mov ecx, ebp
// 00887c40  e84bf7ffff           call 0x887390
// 00887c45  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00887c49  8b542448             mov edx, dword ptr [esp + 0x48]
// 00887c4d  83ec10               sub esp, 0x10
// 00887c50  8bc4                 mov eax, esp
// 00887c52  8908                 mov dword ptr [eax], ecx
// 00887c54  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 00887c58  895004               mov dword ptr [eax + 4], edx
// 00887c5b  8b542460             mov edx, dword ptr [esp + 0x60]
// 00887c5f  894808               mov dword ptr [eax + 8], ecx
// 00887c62  89500c               mov dword ptr [eax + 0xc], edx
// 00887c65  56                   push esi
// 00887c66  8d44243c             lea eax, [esp + 0x3c]
// 00887c6a  50                   push eax
// 00887c6b  8bcd                 mov ecx, ebp
// 00887c6d  e82eeeffff           call 0x886aa0
// 00887c72  837e1400             cmp dword ptr [esi + 0x14], 0
// 00887c76  8b08                 mov ecx, dword ptr [eax]
// 00887c78  894e24               mov dword ptr [esi + 0x24], ecx
// 00887c7b  8b5004               mov edx, dword ptr [eax + 4]
// 00887c7e  895628               mov dword ptr [esi + 0x28], edx
// 00887c81  8b4808               mov ecx, dword ptr [eax + 8]
// 00887c84  894e2c               mov dword ptr [esi + 0x2c], ecx
// 00887c87  8b500c               mov edx, dword ptr [eax + 0xc]
// 00887c8a  895630               mov dword ptr [esi + 0x30], edx
// 00887c8d  7d71                 jge 0x887d00
// 00887c8f  8bce                 mov ecx, esi
// 00887c91  e85ab9ffff           call 0x8835f0
// 00887c96  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 00887c99  2b4e28               sub ecx, dword ptr [esi + 0x28]
// 00887c9c  8b5614               mov edx, dword ptr [esi + 0x14]
// 00887c9f  2b4c2418             sub ecx, dword ptr [esp + 0x18]
// 00887ca3  03d0                 add edx, eax
// 00887ca5  2b4c2420             sub ecx, dword ptr [esp + 0x20]
// 00887ca9  3bd1                 cmp edx, ecx
// 00887cab  7d53                 jge 0x887d00
// 00887cad  8b542448             mov edx, dword ptr [esp + 0x48]
// 00887cb1  2bc8                 sub ecx, eax
// 00887cb3  33c0                 xor eax, eax
// 00887cb5  85c9                 test ecx, ecx
// 00887cb7  0f9fc0               setg al
// 00887cba  83ec10               sub esp, 0x10
// 00887cbd  48                   dec eax
// 00887cbe  23c1                 and eax, ecx
// 00887cc0  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 00887cc4  894614               mov dword ptr [esi + 0x14], eax
// 00887cc7  8bc4                 mov eax, esp
// 00887cc9  8908                 mov dword ptr [eax], ecx
// 00887ccb  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 00887ccf  895004               mov dword ptr [eax + 4], edx
// 00887cd2  8b542460             mov edx, dword ptr [esp + 0x60]
// 00887cd6  894808               mov dword ptr [eax + 8], ecx
// 00887cd9  89500c               mov dword ptr [eax + 0xc], edx
// 00887cdc  56                   push esi
// 00887cdd  8d44243c             lea eax, [esp + 0x3c]
// 00887ce1  50                   push eax
// 00887ce2  8bcd                 mov ecx, ebp
// 00887ce4  e8b7edffff           call 0x886aa0
// 00887ce9  8b08                 mov ecx, dword ptr [eax]
// 00887ceb  894e24               mov dword ptr [esi + 0x24], ecx
// 00887cee  8b5004               mov edx, dword ptr [eax + 4]
// 00887cf1  895628               mov dword ptr [esi + 0x28], edx
// 00887cf4  8b4808               mov ecx, dword ptr [eax + 8]
// 00887cf7  894e2c               mov dword ptr [esi + 0x2c], ecx
// 00887cfa  8b500c               mov edx, dword ptr [eax + 0xc]
// 00887cfd  895630               mov dword ptr [esi + 0x30], edx
// 00887d00  8b7e28               mov edi, dword ptr [esi + 0x28]
// 00887d03  037e14               add edi, dword ptr [esi + 0x14]
// 00887d06  8bce                 mov ecx, esi
// 00887d08  037c2418             add edi, dword ptr [esp + 0x18]
// 00887d0c  e82fa8ffff           call 0x882540
// 00887d11  83f805               cmp eax, 5
// 00887d14  0f85b1000000         jne 0x887dcb
// 00887d1a  8b06                 mov eax, dword ptr [esi]
// 00887d1c  8b5048               mov edx, dword ptr [eax + 0x48]
// 00887d1f  8bce                 mov ecx, esi
// 00887d21  ffd2                 call edx
// 00887d23  83f801               cmp eax, 1
// 00887d26  750d                 jne 0x887d35
// 00887d28  8b462c               mov eax, dword ptr [esi + 0x2c]
// 00887d2b  2b442424             sub eax, dword ptr [esp + 0x24]
// 00887d2f  89442410             mov dword ptr [esp + 0x10], eax
// 00887d33  eb0b                 jmp 0x887d40
// 00887d35  8b4624               mov eax, dword ptr [esi + 0x24]
// 00887d38  03442424             add eax, dword ptr [esp + 0x24]
// 00887d3c  8944243c             mov dword ptr [esp + 0x3c], eax
// 00887d40  33ed                 xor ebp, ebp
// 00887d42  396e5c               cmp dword ptr [esi + 0x5c], ebp
// 00887d45  0f8ec7000000         jle 0x887e12
// 00887d4b  8d041f               lea eax, [edi + ebx]
// 00887d4e  89442440             mov dword ptr [esp + 0x40], eax
// 00887d52  85ed                 test ebp, ebp
// 00887d54  7c0d                 jl 0x887d63
// 00887d56  3b6e5c               cmp ebp, dword ptr [esi + 0x5c]
// 00887d59  7d08                 jge 0x887d63
// 00887d5b  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 00887d5e  8b1ca9               mov ebx, dword ptr [ecx + ebp*4]
// 00887d61  eb02                 jmp 0x887d65
// 00887d63  33db                 xor ebx, ebx
// 00887d65  8b16                 mov edx, dword ptr [esi]
// 00887d67  8b4248               mov eax, dword ptr [edx + 0x48]
// 00887d6a  8bce                 mov ecx, esi
// 00887d6c  ffd0                 call eax
// 00887d6e  83ec10               sub esp, 0x10
// 00887d71  83f801               cmp eax, 1
// 00887d74  8bc4                 mov eax, esp
// 00887d76  751a                 jne 0x887d92
// 00887d78  8b542420             mov edx, dword ptr [esp + 0x20]
// 00887d7c  8bca                 mov ecx, edx
// 00887d7e  2b4b20               sub ecx, dword ptr [ebx + 0x20]
// 00887d81  8908                 mov dword ptr [eax], ecx
// 00887d83  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 00887d87  897804               mov dword ptr [eax + 4], edi
// 00887d8a  895008               mov dword ptr [eax + 8], edx
// 00887d8d  89480c               mov dword ptr [eax + 0xc], ecx
// 00887d90  eb18                 jmp 0x887daa
// 00887d92  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 00887d96  8b4b20               mov ecx, dword ptr [ebx + 0x20]
// 00887d99  8910                 mov dword ptr [eax], edx
// 00887d9b  03ca                 add ecx, edx
// 00887d9d  8b542450             mov edx, dword ptr [esp + 0x50]
// 00887da1  897804               mov dword ptr [eax + 4], edi
// 00887da4  894808               mov dword ptr [eax + 8], ecx
// 00887da7  89500c               mov dword ptr [eax + 0xc], edx
// 00887daa  8bcb                 mov ecx, ebx
// 00887dac  e82facffff           call 0x8829e0
// 00887db1  8b442414             mov eax, dword ptr [esp + 0x14]
// 00887db5  01442440             add dword ptr [esp + 0x40], eax
// 00887db9  45                   inc ebp
// 00887dba  03f8                 add edi, eax
// 00887dbc  3b6e5c               cmp ebp, dword ptr [esi + 0x5c]
// 00887dbf  7c91                 jl 0x887d52
// 00887dc1  5f                   pop edi
// 00887dc2  5e                   pop esi
// 00887dc3  5d                   pop ebp
// 00887dc4  5b                   pop ebx
// 00887dc5  83c428               add esp, 0x28
// 00887dc8  c21800               ret 0x18
// 00887dcb  33ed                 xor ebp, ebp
// 00887dcd  396e5c               cmp dword ptr [esi + 0x5c], ebp
// 00887dd0  7e40                 jle 0x887e12
// 00887dd2  85ed                 test ebp, ebp
// 00887dd4  7c0d                 jl 0x887de3
// 00887dd6  3b6e5c               cmp ebp, dword ptr [esi + 0x5c]
// 00887dd9  7d08                 jge 0x887de3
// 00887ddb  8b4658               mov eax, dword ptr [esi + 0x58]
// 00887dde  8b1ca8               mov ebx, dword ptr [eax + ebp*4]
// 00887de1  eb02                 jmp 0x887de5
// 00887de3  33db                 xor ebx, ebx
// 00887de5  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 00887de9  8b4b20               mov ecx, dword ptr [ebx + 0x20]
// 00887dec  83ec10               sub esp, 0x10
// 00887def  8bc4                 mov eax, esp
// 00887df1  8910                 mov dword ptr [eax], edx
// 00887df3  8b542420             mov edx, dword ptr [esp + 0x20]
// 00887df7  03cf                 add ecx, edi
// 00887df9  897804               mov dword ptr [eax + 4], edi
// 00887dfc  895008               mov dword ptr [eax + 8], edx
// 00887dff  89480c               mov dword ptr [eax + 0xc], ecx
// 00887e02  8bcb                 mov ecx, ebx
// 00887e04  e8d7abffff           call 0x8829e0
// 00887e09  037b20               add edi, dword ptr [ebx + 0x20]
// 00887e0c  45                   inc ebp
// 00887e0d  3b6e5c               cmp ebp, dword ptr [esi + 0x5c]
// 00887e10  7cc0                 jl 0x887dd2
// 00887e12  5f                   pop edi
// 00887e13  5e                   pop esi
// 00887e14  5d                   pop ebp
// 00887e15  5b                   pop ebx
// 00887e16  83c428               add esp, 0x28
// 00887e19  c21800               ret 0x18
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManager.cpp (function ?RepositionTabControlEx@CXTPTabPaintManager@@IAEXPAVCXTPTabManager@@PAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManager.cpp
