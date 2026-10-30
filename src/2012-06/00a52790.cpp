// roc 2012-06 00a52790  unit: CXTPTabPaintManager::CAppearanceSetPropertyPage  size: 1816 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a52790
//
// 00a52790  83ec2c               sub esp, 0x2c
// 00a52793  53                   push ebx
// 00a52794  55                   push ebp
// 00a52795  8b6c243c             mov ebp, dword ptr [esp + 0x3c]
// 00a52799  8b4544               mov eax, dword ptr [ebp + 0x44]
// 00a5279c  8b554c               mov edx, dword ptr [ebp + 0x4c]
// 00a5279f  8bd9                 mov ebx, ecx
// 00a527a1  8b4d48               mov ecx, dword ptr [ebp + 0x48]
// 00a527a4  89442414             mov dword ptr [esp + 0x14], eax
// 00a527a8  8b4550               mov eax, dword ptr [ebp + 0x50]
// 00a527ab  894c2418             mov dword ptr [esp + 0x18], ecx
// 00a527af  8b4b1c               mov ecx, dword ptr [ebx + 0x1c]
// 00a527b2  8954241c             mov dword ptr [esp + 0x1c], edx
// 00a527b6  89442420             mov dword ptr [esp + 0x20], eax
// 00a527ba  8b81e4000000         mov eax, dword ptr [ecx + 0xe4]
// 00a527c0  8b8834010000         mov ecx, dword ptr [eax + 0x134]
// 00a527c6  56                   push esi
// 00a527c7  57                   push edi
// 00a527c8  895c2418             mov dword ptr [esp + 0x18], ebx
// 00a527cc  83f9ff               cmp ecx, -1
// 00a527cf  750c                 jne 0xa527dd
// 00a527d1  8b9030010000         mov edx, dword ptr [eax + 0x130]
// 00a527d7  89542410             mov dword ptr [esp + 0x10], edx
// 00a527db  eb04                 jmp 0xa527e1
// 00a527dd  894c2410             mov dword ptr [esp + 0x10], ecx
// 00a527e1  8bb828010000         mov edi, dword ptr [eax + 0x128]
// 00a527e7  83ffff               cmp edi, -1
// 00a527ea  7506                 jne 0xa527f2
// 00a527ec  8bb824010000         mov edi, dword ptr [eax + 0x124]
// 00a527f2  8b8840010000         mov ecx, dword ptr [eax + 0x140]
// 00a527f8  83f9ff               cmp ecx, -1
// 00a527fb  750c                 jne 0xa52809
// 00a527fd  8b803c010000         mov eax, dword ptr [eax + 0x13c]
// 00a52803  89442414             mov dword ptr [esp + 0x14], eax
// 00a52807  eb04                 jmp 0xa5280d
// 00a52809  894c2414             mov dword ptr [esp + 0x14], ecx
// 00a5280d  8b4d60               mov ecx, dword ptr [ebp + 0x60]
// 00a52810  8b11                 mov edx, dword ptr [ecx]
// 00a52812  8b4248               mov eax, dword ptr [edx + 0x48]
// 00a52815  ffd0                 call eax
// 00a52817  8b742440             mov esi, dword ptr [esp + 0x40]
// 00a5281b  83f803               cmp eax, 3
// 00a5281e  0f8737060000         ja 0xa52e5b
// 00a52824  ff2485982ea500       jmp dword ptr [eax*4 + 0xa52e98]
// 00a5282b  8b4d60               mov ecx, dword ptr [ebp + 0x60]
// 00a5282e  b802000000           mov eax, 2
// 00a52833  396904               cmp dword ptr [ecx + 4], ebp
// 00a52836  750c                 jne 0xa52844
// 00a52838  2944241c             sub dword ptr [esp + 0x1c], eax
// 00a5283c  29442420             sub dword ptr [esp + 0x20], eax
// 00a52840  01442424             add dword ptr [esp + 0x24], eax
// 00a52844  8b442420             mov eax, dword ptr [esp + 0x20]
// 00a52848  8b531c               mov edx, dword ptr [ebx + 0x1c]
// 00a5284b  8b8ae4000000         mov ecx, dword ptr [edx + 0xe4]
// 00a52851  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00a52855  8b19                 mov ebx, dword ptr [ecx]
// 00a52857  40                   inc eax
// 00a52858  89442430             mov dword ptr [esp + 0x30], eax
// 00a5285c  8b442424             mov eax, dword ptr [esp + 0x24]
// 00a52860  48                   dec eax
// 00a52861  89442434             mov dword ptr [esp + 0x34], eax
// 00a52865  8b442428             mov eax, dword ptr [esp + 0x28]
// 00a52869  48                   dec eax
// 00a5286a  55                   push ebp
// 00a5286b  42                   inc edx
// 00a5286c  8944243c             mov dword ptr [esp + 0x3c], eax
// 00a52870  83ec10               sub esp, 0x10
// 00a52873  8bc4                 mov eax, esp
// 00a52875  8910                 mov dword ptr [eax], edx
// 00a52877  8b542444             mov edx, dword ptr [esp + 0x44]
// 00a5287b  895004               mov dword ptr [eax + 4], edx
// 00a5287e  8b542448             mov edx, dword ptr [esp + 0x48]
// 00a52882  895008               mov dword ptr [eax + 8], edx
// 00a52885  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 00a52889  89500c               mov dword ptr [eax + 0xc], edx
// 00a5288c  8b4318               mov eax, dword ptr [ebx + 0x18]
// 00a5288f  56                   push esi
// 00a52890  ffd0                 call eax
// 00a52892  8b1dc020b200         mov ebx, dword ptr [0xb220c0]
// 00a52898  89442444             mov dword ptr [esp + 0x44], eax
// 00a5289c  83ffff               cmp edi, -1
// 00a5289f  7455                 je 0xa528f6
// 00a528a1  8b442420             mov eax, dword ptr [esp + 0x20]
// 00a528a5  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00a528a9  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00a528ad  2bc8                 sub ecx, eax
// 00a528af  57                   push edi
// 00a528b0  83e902               sub ecx, 2
// 00a528b3  51                   push ecx
// 00a528b4  6a01                 push 1
// 00a528b6  83c002               add eax, 2
// 00a528b9  50                   push eax
// 00a528ba  52                   push edx
// 00a528bb  8bce                 mov ecx, esi
// 00a528bd  e8ce6c0400           call 0xa99590
// 00a528c2  8b442420             mov eax, dword ptr [esp + 0x20]
// 00a528c6  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00a528ca  8b5604               mov edx, dword ptr [esi + 4]
// 00a528cd  57                   push edi
// 00a528ce  40                   inc eax
// 00a528cf  50                   push eax
// 00a528d0  41                   inc ecx
// 00a528d1  51                   push ecx
// 00a528d2  52                   push edx
// 00a528d3  ffd3                 call ebx
// 00a528d5  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00a528d9  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00a528dd  8b542420             mov edx, dword ptr [esp + 0x20]
// 00a528e1  57                   push edi
// 00a528e2  2bc8                 sub ecx, eax
// 00a528e4  6a01                 push 1
// 00a528e6  83e904               sub ecx, 4
// 00a528e9  51                   push ecx
// 00a528ea  52                   push edx
// 00a528eb  83c002               add eax, 2
// 00a528ee  50                   push eax
// 00a528ef  8bce                 mov ecx, esi
// 00a528f1  e89a6c0400           call 0xa99590
// 00a528f6  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00a528fa  83ffff               cmp edi, -1
// 00a528fd  7437                 je 0xa52936
// 00a528ff  8b442420             mov eax, dword ptr [esp + 0x20]
// 00a52903  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00a52907  8b5604               mov edx, dword ptr [esi + 4]
// 00a5290a  57                   push edi
// 00a5290b  40                   inc eax
// 00a5290c  50                   push eax
// 00a5290d  83c1fe               add ecx, -2
// 00a52910  51                   push ecx
// 00a52911  52                   push edx
// 00a52912  ffd3                 call ebx
// 00a52914  8b442420             mov eax, dword ptr [esp + 0x20]
// 00a52918  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00a5291c  8b542424             mov edx, dword ptr [esp + 0x24]
// 00a52920  2bc8                 sub ecx, eax
// 00a52922  57                   push edi
// 00a52923  83e903               sub ecx, 3
// 00a52926  51                   push ecx
// 00a52927  6a01                 push 1
// 00a52929  83c002               add eax, 2
// 00a5292c  50                   push eax
// 00a5292d  4a                   dec edx
// 00a5292e  52                   push edx
// 00a5292f  8bce                 mov ecx, esi
// 00a52931  e85a6c0400           call 0xa99590
// 00a52936  8b442410             mov eax, dword ptr [esp + 0x10]
// 00a5293a  83f8ff               cmp eax, -1
// 00a5293d  7424                 je 0xa52963
// 00a5293f  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00a52943  8b542424             mov edx, dword ptr [esp + 0x24]
// 00a52947  50                   push eax
// 00a52948  8b442424             mov eax, dword ptr [esp + 0x24]
// 00a5294c  2bc8                 sub ecx, eax
// 00a5294e  83e903               sub ecx, 3
// 00a52951  51                   push ecx
// 00a52952  6a01                 push 1
// 00a52954  83c002               add eax, 2
// 00a52957  50                   push eax
// 00a52958  83c2fe               add edx, -2
// 00a5295b  52                   push edx
// 00a5295c  8bce                 mov ecx, esi
// 00a5295e  e82d6c0400           call 0xa99590
// 00a52963  8b4560               mov eax, dword ptr [ebp + 0x60]
// 00a52966  396804               cmp dword ptr [eax + 4], ebp
// 00a52969  0f85ec040000         jne 0xa52e5b
// 00a5296f  837d6400             cmp dword ptr [ebp + 0x64], 0
// 00a52973  0f85e2040000         jne 0xa52e5b
// 00a52979  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00a5297d  8b542424             mov edx, dword ptr [esp + 0x24]
// 00a52981  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00a52985  51                   push ecx
// 00a52986  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00a5298a  2bd0                 sub edx, eax
// 00a5298c  83ea03               sub edx, 3
// 00a5298f  52                   push edx
// 00a52990  49                   dec ecx
// 00a52991  51                   push ecx
// 00a52992  40                   inc eax
// 00a52993  50                   push eax
// 00a52994  56                   push esi
// 00a52995  e8d6e8ffff           call 0xa51270
// 00a5299a  83c414               add esp, 0x14
// 00a5299d  e9b9040000           jmp 0xa52e5b
// 00a529a2  8b5560               mov edx, dword ptr [ebp + 0x60]
// 00a529a5  b802000000           mov eax, 2
// 00a529aa  396a04               cmp dword ptr [edx + 4], ebp
// 00a529ad  750c                 jne 0xa529bb
// 00a529af  2944241c             sub dword ptr [esp + 0x1c], eax
// 00a529b3  29442420             sub dword ptr [esp + 0x20], eax
// 00a529b7  01442428             add dword ptr [esp + 0x28], eax
// 00a529bb  8b431c               mov eax, dword ptr [ebx + 0x1c]
// 00a529be  8b88e4000000         mov ecx, dword ptr [eax + 0xe4]
// 00a529c4  8b442420             mov eax, dword ptr [esp + 0x20]
// 00a529c8  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00a529cc  8b19                 mov ebx, dword ptr [ecx]
// 00a529ce  40                   inc eax
// 00a529cf  89442430             mov dword ptr [esp + 0x30], eax
// 00a529d3  8b442424             mov eax, dword ptr [esp + 0x24]
// 00a529d7  48                   dec eax
// 00a529d8  89442434             mov dword ptr [esp + 0x34], eax
// 00a529dc  8b442428             mov eax, dword ptr [esp + 0x28]
// 00a529e0  48                   dec eax
// 00a529e1  55                   push ebp
// 00a529e2  42                   inc edx
// 00a529e3  8944243c             mov dword ptr [esp + 0x3c], eax
// 00a529e7  83ec10               sub esp, 0x10
// 00a529ea  8bc4                 mov eax, esp
// 00a529ec  8910                 mov dword ptr [eax], edx
// 00a529ee  8b542444             mov edx, dword ptr [esp + 0x44]
// 00a529f2  895004               mov dword ptr [eax + 4], edx
// 00a529f5  8b542448             mov edx, dword ptr [esp + 0x48]
// 00a529f9  895008               mov dword ptr [eax + 8], edx
// 00a529fc  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 00a52a00  89500c               mov dword ptr [eax + 0xc], edx
// 00a52a03  8b4318               mov eax, dword ptr [ebx + 0x18]
// 00a52a06  56                   push esi
// 00a52a07  ffd0                 call eax
// 00a52a09  8b1dc020b200         mov ebx, dword ptr [0xb220c0]
// 00a52a0f  89442444             mov dword ptr [esp + 0x44], eax
// 00a52a13  83ffff               cmp edi, -1
// 00a52a16  7455                 je 0xa52a6d
// 00a52a18  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00a52a1c  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00a52a20  8b542420             mov edx, dword ptr [esp + 0x20]
// 00a52a24  57                   push edi
// 00a52a25  2bc8                 sub ecx, eax
// 00a52a27  6a01                 push 1
// 00a52a29  83e902               sub ecx, 2
// 00a52a2c  51                   push ecx
// 00a52a2d  52                   push edx
// 00a52a2e  83c002               add eax, 2
// 00a52a31  50                   push eax
// 00a52a32  8bce                 mov ecx, esi
// 00a52a34  e8576b0400           call 0xa99590
// 00a52a39  8b442420             mov eax, dword ptr [esp + 0x20]
// 00a52a3d  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00a52a41  8b5604               mov edx, dword ptr [esi + 4]
// 00a52a44  57                   push edi
// 00a52a45  40                   inc eax
// 00a52a46  50                   push eax
// 00a52a47  41                   inc ecx
// 00a52a48  51                   push ecx
// 00a52a49  52                   push edx
// 00a52a4a  ffd3                 call ebx
// 00a52a4c  8b442420             mov eax, dword ptr [esp + 0x20]
// 00a52a50  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00a52a54  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00a52a58  2bc8                 sub ecx, eax
// 00a52a5a  57                   push edi
// 00a52a5b  83e904               sub ecx, 4
// 00a52a5e  51                   push ecx
// 00a52a5f  6a01                 push 1
// 00a52a61  83c002               add eax, 2
// 00a52a64  50                   push eax
// 00a52a65  52                   push edx
// 00a52a66  8bce                 mov ecx, esi
// 00a52a68  e8236b0400           call 0xa99590
// 00a52a6d  8b442410             mov eax, dword ptr [esp + 0x10]
// 00a52a71  83f8ff               cmp eax, -1
// 00a52a74  7422                 je 0xa52a98
// 00a52a76  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00a52a7a  8b542428             mov edx, dword ptr [esp + 0x28]
// 00a52a7e  50                   push eax
// 00a52a7f  8b442420             mov eax, dword ptr [esp + 0x20]
// 00a52a83  2bc8                 sub ecx, eax
// 00a52a85  6a01                 push 1
// 00a52a87  83e902               sub ecx, 2
// 00a52a8a  51                   push ecx
// 00a52a8b  83c2fe               add edx, -2
// 00a52a8e  52                   push edx
// 00a52a8f  40                   inc eax
// 00a52a90  50                   push eax
// 00a52a91  8bce                 mov ecx, esi
// 00a52a93  e8f86a0400           call 0xa99590
// 00a52a98  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00a52a9c  83ffff               cmp edi, -1
// 00a52a9f  7439                 je 0xa52ada
// 00a52aa1  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00a52aa5  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00a52aa9  8b542428             mov edx, dword ptr [esp + 0x28]
// 00a52aad  57                   push edi
// 00a52aae  2bc8                 sub ecx, eax
// 00a52ab0  6a01                 push 1
// 00a52ab2  83e903               sub ecx, 3
// 00a52ab5  51                   push ecx
// 00a52ab6  4a                   dec edx
// 00a52ab7  52                   push edx
// 00a52ab8  83c002               add eax, 2
// 00a52abb  50                   push eax
// 00a52abc  8bce                 mov ecx, esi
// 00a52abe  e8cd6a0400           call 0xa99590
// 00a52ac3  8b442428             mov eax, dword ptr [esp + 0x28]
// 00a52ac7  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00a52acb  8b5604               mov edx, dword ptr [esi + 4]
// 00a52ace  57                   push edi
// 00a52acf  83c0fe               add eax, -2
// 00a52ad2  50                   push eax
// 00a52ad3  83c102               add ecx, 2
// 00a52ad6  51                   push ecx
// 00a52ad7  52                   push edx
// 00a52ad8  ffd3                 call ebx
// 00a52ada  8b442410             mov eax, dword ptr [esp + 0x10]
// 00a52ade  83f8ff               cmp eax, -1
// 00a52ae1  7415                 je 0xa52af8
// 00a52ae3  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00a52ae7  8b5604               mov edx, dword ptr [esi + 4]
// 00a52aea  50                   push eax
// 00a52aeb  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00a52aef  48                   dec eax
// 00a52af0  50                   push eax
// 00a52af1  83c102               add ecx, 2
// 00a52af4  51                   push ecx
// 00a52af5  52                   push edx
// 00a52af6  ffd3                 call ebx
// 00a52af8  8b4560               mov eax, dword ptr [ebp + 0x60]
// 00a52afb  396804               cmp dword ptr [eax + 4], ebp
// 00a52afe  0f8557030000         jne 0xa52e5b
// 00a52b04  837d6400             cmp dword ptr [ebp + 0x64], 0
// 00a52b08  0f854d030000         jne 0xa52e5b
// 00a52b0e  8b442420             mov eax, dword ptr [esp + 0x20]
// 00a52b12  8b542428             mov edx, dword ptr [esp + 0x28]
// 00a52b16  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00a52b1a  2bd0                 sub edx, eax
// 00a52b1c  51                   push ecx
// 00a52b1d  83ea03               sub edx, 3
// 00a52b20  52                   push edx
// 00a52b21  40                   inc eax
// 00a52b22  50                   push eax
// 00a52b23  8b442430             mov eax, dword ptr [esp + 0x30]
// 00a52b27  48                   dec eax
// 00a52b28  50                   push eax
// 00a52b29  56                   push esi
// 00a52b2a  e811e7ffff           call 0xa51240
// 00a52b2f  83c414               add esp, 0x14
// 00a52b32  e924030000           jmp 0xa52e5b
// 00a52b37  8b4d60               mov ecx, dword ptr [ebp + 0x60]
// 00a52b3a  396904               cmp dword ptr [ecx + 4], ebp
// 00a52b3d  750f                 jne 0xa52b4e
// 00a52b3f  6a02                 push 2
// 00a52b41  6a02                 push 2
// 00a52b43  8d542424             lea edx, [esp + 0x24]
// 00a52b47  52                   push edx
// 00a52b48  ff154c3bb200         call dword ptr [0xb23b4c]
// 00a52b4e  8b431c               mov eax, dword ptr [ebx + 0x1c]
// 00a52b51  8b88e4000000         mov ecx, dword ptr [eax + 0xe4]
// 00a52b57  8b442420             mov eax, dword ptr [esp + 0x20]
// 00a52b5b  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00a52b5f  8b19                 mov ebx, dword ptr [ecx]
// 00a52b61  40                   inc eax
// 00a52b62  89442430             mov dword ptr [esp + 0x30], eax
// 00a52b66  8b442424             mov eax, dword ptr [esp + 0x24]
// 00a52b6a  48                   dec eax
// 00a52b6b  89442434             mov dword ptr [esp + 0x34], eax
// 00a52b6f  8b442428             mov eax, dword ptr [esp + 0x28]
// 00a52b73  48                   dec eax
// 00a52b74  55                   push ebp
// 00a52b75  42                   inc edx
// 00a52b76  8944243c             mov dword ptr [esp + 0x3c], eax
// 00a52b7a  83ec10               sub esp, 0x10
// 00a52b7d  8bc4                 mov eax, esp
// 00a52b7f  8910                 mov dword ptr [eax], edx
// 00a52b81  8b542444             mov edx, dword ptr [esp + 0x44]
// 00a52b85  895004               mov dword ptr [eax + 4], edx
// 00a52b88  8b542448             mov edx, dword ptr [esp + 0x48]
// 00a52b8c  895008               mov dword ptr [eax + 8], edx
// 00a52b8f  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 00a52b93  89500c               mov dword ptr [eax + 0xc], edx
// 00a52b96  8b4318               mov eax, dword ptr [ebx + 0x18]
// 00a52b99  56                   push esi
// 00a52b9a  ffd0                 call eax
// 00a52b9c  8b1dc020b200         mov ebx, dword ptr [0xb220c0]
// 00a52ba2  89442444             mov dword ptr [esp + 0x44], eax
// 00a52ba6  83ffff               cmp edi, -1
// 00a52ba9  7432                 je 0xa52bdd
// 00a52bab  8b442420             mov eax, dword ptr [esp + 0x20]
// 00a52baf  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00a52bb3  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00a52bb7  2bc8                 sub ecx, eax
// 00a52bb9  57                   push edi
// 00a52bba  83e902               sub ecx, 2
// 00a52bbd  51                   push ecx
// 00a52bbe  6a01                 push 1
// 00a52bc0  40                   inc eax
// 00a52bc1  50                   push eax
// 00a52bc2  52                   push edx
// 00a52bc3  8bce                 mov ecx, esi
// 00a52bc5  e8c6690400           call 0xa99590
// 00a52bca  8b442428             mov eax, dword ptr [esp + 0x28]
// 00a52bce  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00a52bd2  8b5604               mov edx, dword ptr [esi + 4]
// 00a52bd5  57                   push edi
// 00a52bd6  48                   dec eax
// 00a52bd7  50                   push eax
// 00a52bd8  41                   inc ecx
// 00a52bd9  51                   push ecx
// 00a52bda  52                   push edx
// 00a52bdb  ffd3                 call ebx
// 00a52bdd  8b442410             mov eax, dword ptr [esp + 0x10]
// 00a52be1  83f8ff               cmp eax, -1
// 00a52be4  7422                 je 0xa52c08
// 00a52be6  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00a52bea  8b542428             mov edx, dword ptr [esp + 0x28]
// 00a52bee  50                   push eax
// 00a52bef  8b442420             mov eax, dword ptr [esp + 0x20]
// 00a52bf3  2bc8                 sub ecx, eax
// 00a52bf5  6a01                 push 1
// 00a52bf7  83e904               sub ecx, 4
// 00a52bfa  51                   push ecx
// 00a52bfb  4a                   dec edx
// 00a52bfc  52                   push edx
// 00a52bfd  83c002               add eax, 2
// 00a52c00  50                   push eax
// 00a52c01  8bce                 mov ecx, esi
// 00a52c03  e888690400           call 0xa99590
// 00a52c08  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00a52c0c  83ffff               cmp edi, -1
// 00a52c0f  7453                 je 0xa52c64
// 00a52c11  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00a52c15  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00a52c19  8b542428             mov edx, dword ptr [esp + 0x28]
// 00a52c1d  57                   push edi
// 00a52c1e  2bc8                 sub ecx, eax
// 00a52c20  6a01                 push 1
// 00a52c22  83e904               sub ecx, 4
// 00a52c25  51                   push ecx
// 00a52c26  52                   push edx
// 00a52c27  83c002               add eax, 2
// 00a52c2a  50                   push eax
// 00a52c2b  8bce                 mov ecx, esi
// 00a52c2d  e85e690400           call 0xa99590
// 00a52c32  8b442428             mov eax, dword ptr [esp + 0x28]
// 00a52c36  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00a52c3a  8b5604               mov edx, dword ptr [esi + 4]
// 00a52c3d  57                   push edi
// 00a52c3e  48                   dec eax
// 00a52c3f  50                   push eax
// 00a52c40  83c1fe               add ecx, -2
// 00a52c43  51                   push ecx
// 00a52c44  52                   push edx
// 00a52c45  ffd3                 call ebx
// 00a52c47  8b442420             mov eax, dword ptr [esp + 0x20]
// 00a52c4b  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00a52c4f  8b542424             mov edx, dword ptr [esp + 0x24]
// 00a52c53  57                   push edi
// 00a52c54  2bc8                 sub ecx, eax
// 00a52c56  49                   dec ecx
// 00a52c57  51                   push ecx
// 00a52c58  6a01                 push 1
// 00a52c5a  50                   push eax
// 00a52c5b  4a                   dec edx
// 00a52c5c  52                   push edx
// 00a52c5d  8bce                 mov ecx, esi
// 00a52c5f  e82c690400           call 0xa99590
// 00a52c64  8b442410             mov eax, dword ptr [esp + 0x10]
// 00a52c68  83f8ff               cmp eax, -1
// 00a52c6b  741f                 je 0xa52c8c
// 00a52c6d  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00a52c71  8b542424             mov edx, dword ptr [esp + 0x24]
// 00a52c75  50                   push eax
// 00a52c76  8b442424             mov eax, dword ptr [esp + 0x24]
// 00a52c7a  2bc8                 sub ecx, eax
// 00a52c7c  49                   dec ecx
// 00a52c7d  51                   push ecx
// 00a52c7e  6a01                 push 1
// 00a52c80  50                   push eax
// 00a52c81  83c2fe               add edx, -2
// 00a52c84  52                   push edx
// 00a52c85  8bce                 mov ecx, esi
// 00a52c87  e804690400           call 0xa99590
// 00a52c8c  8b4560               mov eax, dword ptr [ebp + 0x60]
// 00a52c8f  396804               cmp dword ptr [eax + 4], ebp
// 00a52c92  0f85c3010000         jne 0xa52e5b
// 00a52c98  837d6400             cmp dword ptr [ebp + 0x64], 0
// 00a52c9c  0f85b9010000         jne 0xa52e5b
// 00a52ca2  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00a52ca6  8b542424             mov edx, dword ptr [esp + 0x24]
// 00a52caa  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00a52cae  51                   push ecx
// 00a52caf  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00a52cb3  2bd0                 sub edx, eax
// 00a52cb5  4a                   dec edx
// 00a52cb6  52                   push edx
// 00a52cb7  41                   inc ecx
// 00a52cb8  51                   push ecx
// 00a52cb9  40                   inc eax
// 00a52cba  50                   push eax
// 00a52cbb  56                   push esi
// 00a52cbc  e8afe5ffff           call 0xa51270
// 00a52cc1  83c414               add esp, 0x14
// 00a52cc4  8344242802           add dword ptr [esp + 0x28], 2
// 00a52cc9  e98d010000           jmp 0xa52e5b
// 00a52cce  8b5560               mov edx, dword ptr [ebp + 0x60]
// 00a52cd1  396a04               cmp dword ptr [edx + 4], ebp
// 00a52cd4  750f                 jne 0xa52ce5
// 00a52cd6  6a02                 push 2
// 00a52cd8  6a02                 push 2
// 00a52cda  8d442424             lea eax, [esp + 0x24]
// 00a52cde  50                   push eax
// 00a52cdf  ff154c3bb200         call dword ptr [0xb23b4c]
// 00a52ce5  8b442424             mov eax, dword ptr [esp + 0x24]
// 00a52ce9  8b4b1c               mov ecx, dword ptr [ebx + 0x1c]
// 00a52cec  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00a52cf0  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 00a52cf4  8b89e4000000         mov ecx, dword ptr [ecx + 0xe4]
// 00a52cfa  48                   dec eax
// 00a52cfb  89442434             mov dword ptr [esp + 0x34], eax
// 00a52cff  8b442428             mov eax, dword ptr [esp + 0x28]
// 00a52d03  48                   dec eax
// 00a52d04  55                   push ebp
// 00a52d05  8944243c             mov dword ptr [esp + 0x3c], eax
// 00a52d09  83ec10               sub esp, 0x10
// 00a52d0c  8bc4                 mov eax, esp
// 00a52d0e  42                   inc edx
// 00a52d0f  8910                 mov dword ptr [eax], edx
// 00a52d11  8b542448             mov edx, dword ptr [esp + 0x48]
// 00a52d15  43                   inc ebx
// 00a52d16  895804               mov dword ptr [eax + 4], ebx
// 00a52d19  895008               mov dword ptr [eax + 8], edx
// 00a52d1c  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 00a52d20  89500c               mov dword ptr [eax + 0xc], edx
// 00a52d23  8b01                 mov eax, dword ptr [ecx]
// 00a52d25  8b4018               mov eax, dword ptr [eax + 0x18]
// 00a52d28  56                   push esi
// 00a52d29  ffd0                 call eax
// 00a52d2b  8b1dc020b200         mov ebx, dword ptr [0xb220c0]
// 00a52d31  89442440             mov dword ptr [esp + 0x40], eax
// 00a52d35  83ffff               cmp edi, -1
// 00a52d38  7432                 je 0xa52d6c
// 00a52d3a  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00a52d3e  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00a52d42  8b542420             mov edx, dword ptr [esp + 0x20]
// 00a52d46  57                   push edi
// 00a52d47  2bc8                 sub ecx, eax
// 00a52d49  6a01                 push 1
// 00a52d4b  83e902               sub ecx, 2
// 00a52d4e  51                   push ecx
// 00a52d4f  52                   push edx
// 00a52d50  40                   inc eax
// 00a52d51  50                   push eax
// 00a52d52  8bce                 mov ecx, esi
// 00a52d54  e837680400           call 0xa99590
// 00a52d59  8b442420             mov eax, dword ptr [esp + 0x20]
// 00a52d5d  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00a52d61  8b5604               mov edx, dword ptr [esi + 4]
// 00a52d64  57                   push edi
// 00a52d65  40                   inc eax
// 00a52d66  50                   push eax
// 00a52d67  49                   dec ecx
// 00a52d68  51                   push ecx
// 00a52d69  52                   push edx
// 00a52d6a  ffd3                 call ebx
// 00a52d6c  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 00a52d70  83fdff               cmp ebp, -1
// 00a52d73  7422                 je 0xa52d97
// 00a52d75  8b442420             mov eax, dword ptr [esp + 0x20]
// 00a52d79  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00a52d7d  8b542424             mov edx, dword ptr [esp + 0x24]
// 00a52d81  2bc8                 sub ecx, eax
// 00a52d83  55                   push ebp
// 00a52d84  83e904               sub ecx, 4
// 00a52d87  51                   push ecx
// 00a52d88  6a01                 push 1
// 00a52d8a  83c002               add eax, 2
// 00a52d8d  50                   push eax
// 00a52d8e  4a                   dec edx
// 00a52d8f  52                   push edx
// 00a52d90  8bce                 mov ecx, esi
// 00a52d92  e8f9670400           call 0xa99590
// 00a52d97  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00a52d9b  83ffff               cmp edi, -1
// 00a52d9e  7436                 je 0xa52dd6
// 00a52da0  8b442420             mov eax, dword ptr [esp + 0x20]
// 00a52da4  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00a52da8  8b542424             mov edx, dword ptr [esp + 0x24]
// 00a52dac  2bc8                 sub ecx, eax
// 00a52dae  57                   push edi
// 00a52daf  83e904               sub ecx, 4
// 00a52db2  51                   push ecx
// 00a52db3  6a01                 push 1
// 00a52db5  83c002               add eax, 2
// 00a52db8  50                   push eax
// 00a52db9  52                   push edx
// 00a52dba  8bce                 mov ecx, esi
// 00a52dbc  e8cf670400           call 0xa99590
// 00a52dc1  8b442428             mov eax, dword ptr [esp + 0x28]
// 00a52dc5  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00a52dc9  8b5604               mov edx, dword ptr [esi + 4]
// 00a52dcc  57                   push edi
// 00a52dcd  83c0fe               add eax, -2
// 00a52dd0  50                   push eax
// 00a52dd1  49                   dec ecx
// 00a52dd2  51                   push ecx
// 00a52dd3  52                   push edx
// 00a52dd4  ffd3                 call ebx
// 00a52dd6  83fdff               cmp ebp, -1
// 00a52dd9  7422                 je 0xa52dfd
// 00a52ddb  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00a52ddf  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00a52de3  8b542428             mov edx, dword ptr [esp + 0x28]
// 00a52de7  55                   push ebp
// 00a52de8  2bc8                 sub ecx, eax
// 00a52dea  6a01                 push 1
// 00a52dec  83e902               sub ecx, 2
// 00a52def  51                   push ecx
// 00a52df0  83c2fe               add edx, -2
// 00a52df3  52                   push edx
// 00a52df4  40                   inc eax
// 00a52df5  50                   push eax
// 00a52df6  8bce                 mov ecx, esi
// 00a52df8  e893670400           call 0xa99590
// 00a52dfd  83ffff               cmp edi, -1
// 00a52e00  7420                 je 0xa52e22
// 00a52e02  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00a52e06  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00a52e0a  8b542428             mov edx, dword ptr [esp + 0x28]
// 00a52e0e  57                   push edi
// 00a52e0f  2bc8                 sub ecx, eax
// 00a52e11  6a01                 push 1
// 00a52e13  83e902               sub ecx, 2
// 00a52e16  51                   push ecx
// 00a52e17  4a                   dec edx
// 00a52e18  52                   push edx
// 00a52e19  40                   inc eax
// 00a52e1a  50                   push eax
// 00a52e1b  8bce                 mov ecx, esi
// 00a52e1d  e86e670400           call 0xa99590
// 00a52e22  8b6c2444             mov ebp, dword ptr [esp + 0x44]
// 00a52e26  8b4560               mov eax, dword ptr [ebp + 0x60]
// 00a52e29  396804               cmp dword ptr [eax + 4], ebp
// 00a52e2c  752d                 jne 0xa52e5b
// 00a52e2e  837d6400             cmp dword ptr [ebp + 0x64], 0
// 00a52e32  7527                 jne 0xa52e5b
// 00a52e34  8b442420             mov eax, dword ptr [esp + 0x20]
// 00a52e38  8b542428             mov edx, dword ptr [esp + 0x28]
// 00a52e3c  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00a52e40  2bd0                 sub edx, eax
// 00a52e42  51                   push ecx
// 00a52e43  4a                   dec edx
// 00a52e44  52                   push edx
// 00a52e45  40                   inc eax
// 00a52e46  50                   push eax
// 00a52e47  8b442428             mov eax, dword ptr [esp + 0x28]
// 00a52e4b  40                   inc eax
// 00a52e4c  50                   push eax
// 00a52e4d  56                   push esi
// 00a52e4e  e8ede3ffff           call 0xa51240
// 00a52e53  83c414               add esp, 0x14
// 00a52e56  8344242402           add dword ptr [esp + 0x24], 2
// 00a52e5b  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00a52e5f  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00a52e63  8b491c               mov ecx, dword ptr [ecx + 0x1c]
// 00a52e66  8b11                 mov edx, dword ptr [ecx]
// 00a52e68  6a01                 push 1
// 00a52e6a  83ec10               sub esp, 0x10
// 00a52e6d  8bc4                 mov eax, esp
// 00a52e6f  8938                 mov dword ptr [eax], edi
// 00a52e71  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 00a52e75  897804               mov dword ptr [eax + 4], edi
// 00a52e78  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 00a52e7c  897808               mov dword ptr [eax + 8], edi
// 00a52e7f  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 00a52e83  55                   push ebp
// 00a52e84  89780c               mov dword ptr [eax + 0xc], edi
// 00a52e87  8b4268               mov eax, dword ptr [edx + 0x68]
// 00a52e8a  56                   push esi
// 00a52e8b  ffd0                 call eax
// 00a52e8d  5f                   pop edi
// 00a52e8e  5e                   pop esi
// 00a52e8f  5d                   pop ebp
// 00a52e90  5b                   pop ebx
// 00a52e91  83c42c               add esp, 0x2c
// 00a52e94  c20800               ret 8
// 00a52e97  90                   nop 
// 00a52e98  2b28                 sub ebp, dword ptr [eax]
// 00a52e9a  a5                   movsd dword ptr es:[edi], dword ptr [esi]
// 00a52e9b  00a229a50037         add byte ptr [edx + 0x3700a529], ah
// 00a52ea1  2ba500ce2ca5         sub esp, dword ptr [ebp - 0x5ad33200]
// copied from an identical function in another client (function ?DrawSingleButton@CAppearanceSetPropertyPage@CXTPTabPaintManager@@UAEXPAVCDC@@PAVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/TabManager/XTPTabPaintManagerAppearance.cpp