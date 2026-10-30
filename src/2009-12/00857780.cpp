// roc 2009-12 00857780  unit: CXTPTabClientWnd  size: 1349 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00857780
//
// 00857780  6aff                 push -1
// 00857782  68d0e09500           push 0x95e0d0
// 00857787  64a100000000         mov eax, dword ptr fs:[0]
// 0085778d  50                   push eax
// 0085778e  81ec80000000         sub esp, 0x80
// 00857794  53                   push ebx
// 00857795  55                   push ebp
// 00857796  56                   push esi
// 00857797  57                   push edi
// 00857798  a10052b600           mov eax, dword ptr [0xb65200]
// 0085779d  33c4                 xor eax, esp
// 0085779f  50                   push eax
// 008577a0  8d842494000000       lea eax, [esp + 0x94]
// 008577a7  64a300000000         mov dword ptr fs:[0], eax
// 008577ad  8bd9                 mov ebx, ecx
// 008577af  e89ceeffff           call 0x856650
// 008577b4  85c0                 test eax, eax
// 008577b6  0f84d8040000         je 0x857c94
// 008577bc  83bbc000000000       cmp dword ptr [ebx + 0xc0], 0
// 008577c3  0f84cb040000         je 0x857c94
// 008577c9  83bb8000000000       cmp dword ptr [ebx + 0x80], 0
// 008577d0  0f85be040000         jne 0x857c94
// 008577d6  83bbb400000000       cmp dword ptr [ebx + 0xb4], 0
// 008577dd  0f85aa010000         jne 0x85798d
// 008577e3  6a00                 push 0
// 008577e5  e856fdffff           call 0x857540
// 008577ea  85c0                 test eax, eax
// 008577ec  7405                 je 0x8577f3
// 008577ee  8d70a8               lea esi, [eax - 0x58]
// 008577f1  eb02                 jmp 0x8577f5
// 008577f3  33f6                 xor esi, esi
// 008577f5  6a02                 push 2
// 008577f7  ff1574cb9800         call dword ptr [0x98cb74]
// 008577fd  8be8                 mov ebp, eax
// 008577ff  8b4620               mov eax, dword ptr [esi + 0x20]
// 00857802  50                   push eax
// 00857803  ff1584cc9800         call dword ptr [0x98cc84]
// 00857809  8bbc24a4000000       mov edi, dword ptr [esp + 0xa4]
// 00857810  85c0                 test eax, eax
// 00857812  0f843c010000         je 0x857954
// 00857818  8bce                 mov ecx, esi
// 0085781a  e853ec0c00           call 0x926472
// 0085781f  a900000010           test eax, 0x10000000
// 00857824  0f842a010000         je 0x857954
// 0085782a  8b4704               mov eax, dword ptr [edi + 4]
// 0085782d  8b570c               mov edx, dword ptr [edi + 0xc]
// 00857830  8b0f                 mov ecx, dword ptr [edi]
// 00857832  6a04                 push 4
// 00857834  2bd0                 sub edx, eax
// 00857836  52                   push edx
// 00857837  8b5708               mov edx, dword ptr [edi + 8]
// 0085783a  2bd1                 sub edx, ecx
// 0085783c  52                   push edx
// 0085783d  50                   push eax
// 0085783e  8b4620               mov eax, dword ptr [esi + 0x20]
// 00857841  51                   push ecx
// 00857842  6a00                 push 0
// 00857844  50                   push eax
// 00857845  55                   push ebp
// 00857846  ff1570cb9800         call dword ptr [0x98cb70]
// 0085784c  56                   push esi
// 0085784d  8d4c2470             lea ecx, [esp + 0x70]
// 00857851  8944241c             mov dword ptr [esp + 0x1c], eax
// 00857855  e87ccef9ff           call 0x7f46d6
// 0085785a  57                   push edi
// 0085785b  8d4c2450             lea ecx, [esp + 0x50]
// 0085785f  51                   push ecx
// 00857860  c78424a400000000000000 mov dword ptr [esp + 0xa4], 0
// 0085786b  ff1564cc9800         call dword ptr [0x98cc64]
// 00857871  8b442450             mov eax, dword ptr [esp + 0x50]
// 00857875  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00857879  f7d8                 neg eax
// 0085787b  50                   push eax
// 0085787c  f7d9                 neg ecx
// 0085787e  51                   push ecx
// 0085787f  8d542454             lea edx, [esp + 0x54]
// 00857883  52                   push edx
// 00857884  ff156ccc9800         call dword ptr [0x98cc6c]
// 0085788a  8bcb                 mov ecx, ebx
// 0085788c  8d6e58               lea ebp, [esi + 0x58]
// 0085788f  e82cd9ffff           call 0x8551c0
// 00857894  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00857898  83ec10               sub esp, 0x10
// 0085789b  8bd4                 mov edx, esp
// 0085789d  890a                 mov dword ptr [edx], ecx
// 0085789f  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 008578a3  894a04               mov dword ptr [edx + 4], ecx
// 008578a6  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 008578aa  894a08               mov dword ptr [edx + 8], ecx
// 008578ad  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 008578b1  894a0c               mov dword ptr [edx + 0xc], ecx
// 008578b4  8944242c             mov dword ptr [esp + 0x2c], eax
// 008578b8  8b00                 mov eax, dword ptr [eax]
// 008578ba  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 008578be  8b4060               mov eax, dword ptr [eax + 0x60]
// 008578c1  8d54247c             lea edx, [esp + 0x7c]
// 008578c5  52                   push edx
// 008578c6  55                   push ebp
// 008578c7  ffd0                 call eax
// 008578c9  57                   push edi
// 008578ca  8d4c2440             lea ecx, [esp + 0x40]
// 008578ce  51                   push ecx
// 008578cf  ff1564cc9800         call dword ptr [0x98cc64]
// 008578d5  8bcb                 mov ecx, ebx
// 008578d7  e8e4d8ffff           call 0x8551c0
// 008578dc  8b10                 mov edx, dword ptr [eax]
// 008578de  8b525c               mov edx, dword ptr [edx + 0x5c]
// 008578e1  8d4c243c             lea ecx, [esp + 0x3c]
// 008578e5  51                   push ecx
// 008578e6  55                   push ebp
// 008578e7  8bc8                 mov ecx, eax
// 008578e9  ffd2                 call edx
// 008578eb  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 008578ef  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 008578f3  8b542444             mov edx, dword ptr [esp + 0x44]
// 008578f7  8907                 mov dword ptr [edi], eax
// 008578f9  8b442448             mov eax, dword ptr [esp + 0x48]
// 008578fd  894f04               mov dword ptr [edi + 4], ecx
// 00857900  895708               mov dword ptr [edi + 8], edx
// 00857903  6a00                 push 0
// 00857905  89470c               mov dword ptr [edi + 0xc], eax
// 00857908  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0085790b  6a00                 push 0
// 0085790d  51                   push ecx
// 0085790e  ff15e8cb9800         call dword ptr [0x98cbe8]
// 00857914  8d4c246c             lea ecx, [esp + 0x6c]
// 00857918  c784249c000000ffffffff mov dword ptr [esp + 0x9c], 0xffffffff
// 00857923  e8a8cdf9ff           call 0x7f46d0
// 00857928  8b570c               mov edx, dword ptr [edi + 0xc]
// 0085792b  3b5704               cmp edx, dword ptr [edi + 4]
// 0085792e  7c07                 jl 0x857937
// 00857930  8b4708               mov eax, dword ptr [edi + 8]
// 00857933  3b07                 cmp eax, dword ptr [edi]
// 00857935  7d0d                 jge 0x857944
// 00857937  33c0                 xor eax, eax
// 00857939  8907                 mov dword ptr [edi], eax
// 0085793b  894704               mov dword ptr [edi + 4], eax
// 0085793e  894708               mov dword ptr [edi + 8], eax
// 00857941  89470c               mov dword ptr [edi + 0xc], eax
// 00857944  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00857947  6a08                 push 8
// 00857949  51                   push ecx
// 0085794a  ff1598ca9800         call dword ptr [0x98ca98]
// 00857950  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 00857954  8b4704               mov eax, dword ptr [edi + 4]
// 00857957  8b570c               mov edx, dword ptr [edi + 0xc]
// 0085795a  8b0f                 mov ecx, dword ptr [edi]
// 0085795c  6a04                 push 4
// 0085795e  2bd0                 sub edx, eax
// 00857960  52                   push edx
// 00857961  8b5708               mov edx, dword ptr [edi + 8]
// 00857964  2bd1                 sub edx, ecx
// 00857966  52                   push edx
// 00857967  50                   push eax
// 00857968  8b4320               mov eax, dword ptr [ebx + 0x20]
// 0085796b  51                   push ecx
// 0085796c  6a00                 push 0
// 0085796e  50                   push eax
// 0085796f  55                   push ebp
// 00857970  ff1570cb9800         call dword ptr [0x98cb70]
// 00857976  50                   push eax
// 00857977  ff156ccb9800         call dword ptr [0x98cb6c]
// 0085797d  8b8c24a8000000       mov ecx, dword ptr [esp + 0xa8]
// 00857984  51                   push ecx
// 00857985  57                   push edi
// 00857986  8bcb                 mov ecx, ebx
// 00857988  e917030000           jmp 0x857ca4
// 0085798d  53                   push ebx
// 0085798e  8d8c2484000000       lea ecx, [esp + 0x84]
// 00857995  e83ccdf9ff           call 0x7f46d6
// 0085799a  8b8b8c000000         mov ecx, dword ptr [ebx + 0x8c]
// 008579a0  b802000000           mov eax, 2
// 008579a5  8944245c             mov dword ptr [esp + 0x5c], eax
// 008579a9  89442460             mov dword ptr [esp + 0x60], eax
// 008579ad  b8feffffff           mov eax, 0xfffffffe
// 008579b2  89442464             mov dword ptr [esp + 0x64], eax
// 008579b6  89442468             mov dword ptr [esp + 0x68], eax
// 008579ba  8b89e0000000         mov ecx, dword ptr [ecx + 0xe0]
// 008579c0  8b11                 mov edx, dword ptr [ecx]
// 008579c2  8b5238               mov edx, dword ptr [edx + 0x38]
// 008579c5  6a01                 push 1
// 008579c7  8d442460             lea eax, [esp + 0x60]
// 008579cb  50                   push eax
// 008579cc  6a00                 push 0
// 008579ce  c78424a800000001000000 mov dword ptr [esp + 0xa8], 1
// 008579d9  ffd2                 call edx
// 008579db  d9ee                 fldz 
// 008579dd  8bbc24a4000000       mov edi, dword ptr [esp + 0xa4]
// 008579e4  dd54242c             fst qword ptr [esp + 0x2c]
// 008579e8  8b6f0c               mov ebp, dword ptr [edi + 0xc]
// 008579eb  8b7708               mov esi, dword ptr [edi + 8]
// 008579ee  2b6f04               sub ebp, dword ptr [edi + 4]
// 008579f1  2b37                 sub esi, dword ptr [edi]
// 008579f3  2b6c2460             sub ebp, dword ptr [esp + 0x60]
// 008579f7  2b74245c             sub esi, dword ptr [esp + 0x5c]
// 008579fb  036c2468             add ebp, dword ptr [esp + 0x68]
// 008579ff  03742464             add esi, dword ptr [esp + 0x64]
// 00857a03  33d2                 xor edx, edx
// 00857a05  8bcb                 mov ecx, ebx
// 00857a07  896c2420             mov dword ptr [esp + 0x20], ebp
// 00857a0b  8974241c             mov dword ptr [esp + 0x1c], esi
// 00857a0f  8954244c             mov dword ptr [esp + 0x4c], edx
// 00857a13  89542450             mov dword ptr [esp + 0x50], edx
// 00857a17  e834ecffff           call 0x856650
// 00857a1c  3bc2                 cmp eax, edx
// 00857a1e  89442418             mov dword ptr [esp + 0x18], eax
// 00857a22  89542414             mov dword ptr [esp + 0x14], edx
// 00857a26  7e31                 jle 0x857a59
// 00857a28  8b442414             mov eax, dword ptr [esp + 0x14]
// 00857a2c  ddd8                 fstp st(0)
// 00857a2e  50                   push eax
// 00857a2f  8bcb                 mov ecx, ebx
// 00857a31  e80afbffff           call 0x857540
// 00857a36  dd8098000000         fld qword ptr [eax + 0x98]
// 00857a3c  8b442414             mov eax, dword ptr [esp + 0x14]
// 00857a40  dc44242c             fadd qword ptr [esp + 0x2c]
// 00857a44  40                   inc eax
// 00857a45  3b442418             cmp eax, dword ptr [esp + 0x18]
// 00857a49  dd54242c             fst qword ptr [esp + 0x2c]
// 00857a4d  89442414             mov dword ptr [esp + 0x14], eax
// 00857a51  7cd5                 jl 0x857a28
// 00857a53  8b442418             mov eax, dword ptr [esp + 0x18]
// 00857a57  33d2                 xor edx, edx
// 00857a59  8bcd                 mov ecx, ebp
// 00857a5b  39939c000000         cmp dword ptr [ebx + 0x9c], edx
// 00857a61  7502                 jne 0x857a65
// 00857a63  8bce                 mov ecx, esi
// 00857a65  8b93d0000000         mov edx, dword ptr [ebx + 0xd0]
// 00857a6b  d9ee                 fldz 
// 00857a6d  48                   dec eax
// 00857a6e  dd5c2434             fstp qword ptr [esp + 0x34]
// 00857a72  0fafd0               imul edx, eax
// 00857a75  2bca                 sub ecx, edx
// 00857a77  894c2424             mov dword ptr [esp + 0x24], ecx
// 00857a7b  e870d2f9ff           call 0x7f4cf0
// 00857a80  85c0                 test eax, eax
// 00857a82  7506                 jne 0x857a8a
// 00857a84  d9e8                 fld1 
// 00857a86  dd5c242c             fstp qword ptr [esp + 0x2c]
// 00857a8a  837c241800           cmp dword ptr [esp + 0x18], 0
// 00857a8f  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 00857a93  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 00857a97  8944246c             mov dword ptr [esp + 0x6c], eax
// 00857a9b  894c2470             mov dword ptr [esp + 0x70], ecx
// 00857a9f  89742474             mov dword ptr [esp + 0x74], esi
// 00857aa3  896c2478             mov dword ptr [esp + 0x78], ebp
// 00857aa7  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00857aaf  7f39                 jg 0x857aea
// 00857ab1  8b4320               mov eax, dword ptr [ebx + 0x20]
// 00857ab4  6a00                 push 0
// 00857ab6  6a00                 push 0
// 00857ab8  50                   push eax
// 00857ab9  ff15e8cb9800         call dword ptr [0x98cbe8]
// 00857abf  8d8c2480000000       lea ecx, [esp + 0x80]
// 00857ac6  c784249c000000ffffffff mov dword ptr [esp + 0x9c], 0xffffffff
// 00857ad1  e8facbf9ff           call 0x7f46d0
// 00857ad6  8b8c24a8000000       mov ecx, dword ptr [esp + 0xa8]
// 00857add  51                   push ecx
// 00857ade  57                   push edi
// 00857adf  8bcb                 mov ecx, ebx
// 00857ae1  e9be010000           jmp 0x857ca4
// 00857ae6  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 00857aea  8b542414             mov edx, dword ptr [esp + 0x14]
// 00857aee  52                   push edx
// 00857aef  8bcb                 mov ecx, ebx
// 00857af1  e84afaffff           call 0x857540
// 00857af6  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 00857afa  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00857afe  8bf0                 mov esi, eax
// 00857b00  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 00857b04  8944243c             mov dword ptr [esp + 0x3c], eax
// 00857b08  8b442418             mov eax, dword ptr [esp + 0x18]
// 00857b0c  48                   dec eax
// 00857b0d  894c2440             mov dword ptr [esp + 0x40], ecx
// 00857b11  89542444             mov dword ptr [esp + 0x44], edx
// 00857b15  896c2448             mov dword ptr [esp + 0x48], ebp
// 00857b19  39442414             cmp dword ptr [esp + 0x14], eax
// 00857b1d  0f84a2000000         je 0x857bc5
// 00857b23  dd8698000000         fld qword ptr [esi + 0x98]
// 00857b29  dc442434             fadd qword ptr [esp + 0x34]
// 00857b2d  dd542434             fst qword ptr [esp + 0x34]
// 00857b31  da4c2424             fimul dword ptr [esp + 0x24]
// 00857b35  dc74242c             fdiv qword ptr [esp + 0x2c]
// 00857b39  e8b2d1f9ff           call 0x7f4cf0
// 00857b3e  8b8bd0000000         mov ecx, dword ptr [ebx + 0xd0]
// 00857b44  8bd1                 mov edx, ecx
// 00857b46  0faf542414           imul edx, dword ptr [esp + 0x14]
// 00857b4b  03c2                 add eax, edx
// 00857b4d  83bb9c00000000       cmp dword ptr [ebx + 0x9c], 0
// 00857b54  7436                 je 0x857b8c
// 00857b56  8b542470             mov edx, dword ptr [esp + 0x70]
// 00857b5a  03ca                 add ecx, edx
// 00857b5c  03c8                 add ecx, eax
// 00857b5e  51                   push ecx
// 00857b5f  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 00857b63  8d2c02               lea ebp, [edx + eax]
// 00857b66  8b442420             mov eax, dword ptr [esp + 0x20]
// 00857b6a  50                   push eax
// 00857b6b  55                   push ebp
// 00857b6c  51                   push ecx
// 00857b6d  8d96a0000000         lea edx, [esi + 0xa0]
// 00857b73  52                   push edx
// 00857b74  ff1538ca9800         call dword ptr [0x98ca38]
// 00857b7a  8b83d0000000         mov eax, dword ptr [ebx + 0xd0]
// 00857b80  03c5                 add eax, ebp
// 00857b82  896c2448             mov dword ptr [esp + 0x48], ebp
// 00857b86  89442450             mov dword ptr [esp + 0x50], eax
// 00857b8a  eb46                 jmp 0x857bd2
// 00857b8c  8b54246c             mov edx, dword ptr [esp + 0x6c]
// 00857b90  03ca                 add ecx, edx
// 00857b92  55                   push ebp
// 00857b93  03c8                 add ecx, eax
// 00857b95  51                   push ecx
// 00857b96  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 00857b9a  03c2                 add eax, edx
// 00857b9c  51                   push ecx
// 00857b9d  50                   push eax
// 00857b9e  8d96a0000000         lea edx, [esi + 0xa0]
// 00857ba4  52                   push edx
// 00857ba5  8944243c             mov dword ptr [esp + 0x3c], eax
// 00857ba9  ff1538ca9800         call dword ptr [0x98ca38]
// 00857baf  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00857bb3  8b83d0000000         mov eax, dword ptr [ebx + 0xd0]
// 00857bb9  03c1                 add eax, ecx
// 00857bbb  894c2444             mov dword ptr [esp + 0x44], ecx
// 00857bbf  8944244c             mov dword ptr [esp + 0x4c], eax
// 00857bc3  eb0d                 jmp 0x857bd2
// 00857bc5  8d86a0000000         lea eax, [esi + 0xa0]
// 00857bcb  50                   push eax
// 00857bcc  ff159cca9800         call dword ptr [0x98ca9c]
// 00857bd2  8bcb                 mov ecx, ebx
// 00857bd4  e8e7d5ffff           call 0x8551c0
// 00857bd9  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00857bdd  8b28                 mov ebp, dword ptr [eax]
// 00857bdf  83ec10               sub esp, 0x10
// 00857be2  8bd4                 mov edx, esp
// 00857be4  890a                 mov dword ptr [edx], ecx
// 00857be6  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 00857bea  894a04               mov dword ptr [edx + 4], ecx
// 00857bed  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 00857bf1  894a08               mov dword ptr [edx + 8], ecx
// 00857bf4  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 00857bf8  894a0c               mov dword ptr [edx + 0xc], ecx
// 00857bfb  8d942490000000       lea edx, [esp + 0x90]
// 00857c02  52                   push edx
// 00857c03  8bc8                 mov ecx, eax
// 00857c05  8b4560               mov eax, dword ptr [ebp + 0x60]
// 00857c08  56                   push esi
// 00857c09  ffd0                 call eax
// 00857c0b  8b464c               mov eax, dword ptr [esi + 0x4c]
// 00857c0e  8b4e44               mov ecx, dword ptr [esi + 0x44]
// 00857c11  8b5648               mov edx, dword ptr [esi + 0x48]
// 00857c14  89442444             mov dword ptr [esp + 0x44], eax
// 00857c18  8b465c               mov eax, dword ptr [esi + 0x5c]
// 00857c1b  894c243c             mov dword ptr [esp + 0x3c], ecx
// 00857c1f  8b4e50               mov ecx, dword ptr [esi + 0x50]
// 00857c22  33ed                 xor ebp, ebp
// 00857c24  89542440             mov dword ptr [esp + 0x40], edx
// 00857c28  894c2448             mov dword ptr [esp + 0x48], ecx
// 00857c2c  85c0                 test eax, eax
// 00857c2e  7e47                 jle 0x857c77
// 00857c30  85ed                 test ebp, ebp
// 00857c32  7c13                 jl 0x857c47
// 00857c34  3be8                 cmp ebp, eax
// 00857c36  7d0f                 jge 0x857c47
// 00857c38  3b6e5c               cmp ebp, dword ptr [esi + 0x5c]
// 00857c3b  7d52                 jge 0x857c8f
// 00857c3d  8b5658               mov edx, dword ptr [esi + 0x58]
// 00857c40  8d04aa               lea eax, [edx + ebp*4]
// 00857c43  8b00                 mov eax, dword ptr [eax]
// 00857c45  eb02                 jmp 0x857c49
// 00857c47  33c0                 xor eax, eax
// 00857c49  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00857c4d  2b4c2440             sub ecx, dword ptr [esp + 0x40]
// 00857c51  8b542444             mov edx, dword ptr [esp + 0x44]
// 00857c55  8b4038               mov eax, dword ptr [eax + 0x38]
// 00857c58  6a01                 push 1
// 00857c5a  51                   push ecx
// 00857c5b  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00857c5f  2bd1                 sub edx, ecx
// 00857c61  52                   push edx
// 00857c62  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 00857c66  52                   push edx
// 00857c67  51                   push ecx
// 00857c68  50                   push eax
// 00857c69  ff1518ca9800         call dword ptr [0x98ca18]
// 00857c6f  8b465c               mov eax, dword ptr [esi + 0x5c]
// 00857c72  45                   inc ebp
// 00857c73  3be8                 cmp ebp, eax
// 00857c75  7cb9                 jl 0x857c30
// 00857c77  8b442414             mov eax, dword ptr [esp + 0x14]
// 00857c7b  40                   inc eax
// 00857c7c  3b442418             cmp eax, dword ptr [esp + 0x18]
// 00857c80  89442414             mov dword ptr [esp + 0x14], eax
// 00857c84  0f8c5cfeffff         jl 0x857ae6
// 00857c8a  e922feffff           jmp 0x857ab1
// 00857c8f  e878bef9ff           call 0x7f3b0c
// 00857c94  8b9424a8000000       mov edx, dword ptr [esp + 0xa8]
// 00857c9b  8b8424a4000000       mov eax, dword ptr [esp + 0xa4]
// 00857ca2  52                   push edx
// 00857ca3  50                   push eax
// 00857ca4  e841bcf9ff           call 0x7f38ea
// 00857ca9  8b8c2494000000       mov ecx, dword ptr [esp + 0x94]
// 00857cb0  64890d00000000       mov dword ptr fs:[0], ecx
// 00857cb7  59                   pop ecx
// 00857cb8  5f                   pop edi
// 00857cb9  5e                   pop esi
// 00857cba  5d                   pop ebp
// 00857cbb  5b                   pop ebx
// 00857cbc  81c48c000000         add esp, 0x8c
// 00857cc2  c20800               ret 8
// copied from an identical function in another client (function ?CalcWindowRect@CXTPTabClientWnd@@MAEXPAUtagRECT@@I@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPTabClientWnd.cpp