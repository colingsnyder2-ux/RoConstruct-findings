// roc 2007-08 00733f10  unit: G3D::Sky  size: 2578 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00733f10
//
// 00733f10  6aff                 push -1
// 00733f12  6897c27600           push 0x76c297
// 00733f17  64a100000000         mov eax, dword ptr fs:[0]
// 00733f1d  50                   push eax
// 00733f1e  81ec60010000         sub esp, 0x160
// 00733f24  a188518b00           mov eax, dword ptr [0x8b5188]
// 00733f29  33c4                 xor eax, esp
// 00733f2b  8984245c010000       mov dword ptr [esp + 0x15c], eax
// 00733f32  53                   push ebx
// 00733f33  55                   push ebp
// 00733f34  56                   push esi
// 00733f35  57                   push edi
// 00733f36  a188518b00           mov eax, dword ptr [0x8b5188]
// 00733f3b  33c4                 xor eax, esp
// 00733f3d  50                   push eax
// 00733f3e  8d842474010000       lea eax, [esp + 0x174]
// 00733f45  64a300000000         mov dword ptr fs:[0], eax
// 00733f4b  8bac2488010000       mov ebp, dword ptr [esp + 0x188]
// 00733f52  8b84248c010000       mov eax, dword ptr [esp + 0x18c]
// 00733f59  8bf1                 mov esi, ecx
// 00733f5b  33db                 xor ebx, ebx
// 00733f5d  c70684797900         mov dword ptr [esi], 0x797984
// 00733f63  895e04               mov dword ptr [esi + 4], ebx
// 00733f66  89742450             mov dword ptr [esp + 0x50], esi
// 00733f6a  896c2414             mov dword ptr [esp + 0x14], ebp
// 00733f6e  89442420             mov dword ptr [esp + 0x20], eax
// 00733f72  895e08               mov dword ptr [esi + 8], ebx
// 00733f75  68f0374600           push 0x4637f0
// 00733f7a  6840ff4c00           push 0x4cff40
// 00733f7f  6a06                 push 6
// 00733f81  6a04                 push 4
// 00733f83  8d7e0c               lea edi, [esi + 0xc]
// 00733f86  57                   push edi
// 00733f87  899c2490010000       mov dword ptr [esp + 0x190], ebx
// 00733f8e  c706548b7e00         mov dword ptr [esi], 0x7e8b54
// 00733f94  e843ccefff           call 0x630bdc
// 00733f99  8d4e24               lea ecx, [esi + 0x24]
// 00733f9c  8919                 mov dword ptr [ecx], ebx
// 00733f9e  895e28               mov dword ptr [esi + 0x28], ebx
// 00733fa1  895e2c               mov dword ptr [esi + 0x2c], ebx
// 00733fa4  895e30               mov dword ptr [esi + 0x30], ebx
// 00733fa7  895e34               mov dword ptr [esi + 0x34], ebx
// 00733faa  895e3c               mov dword ptr [esi + 0x3c], ebx
// 00733fad  895e40               mov dword ptr [esi + 0x40], ebx
// 00733fb0  895e38               mov dword ptr [esi + 0x38], ebx
// 00733fb3  895e48               mov dword ptr [esi + 0x48], ebx
// 00733fb6  895e4c               mov dword ptr [esi + 0x4c], ebx
// 00733fb9  895e44               mov dword ptr [esi + 0x44], ebx
// 00733fbc  389c2490010000       cmp byte ptr [esp + 0x190], bl
// 00733fc3  8a942494010000       mov dl, byte ptr [esp + 0x194]
// 00733fca  8b842484010000       mov eax, dword ptr [esp + 0x184]
// 00733fd1  c684247c01000008     mov byte ptr [esp + 0x17c], 8
// 00733fd9  885650               mov byte ptr [esi + 0x50], dl
// 00733fdc  894654               mov dword ptr [esi + 0x54], eax
// 00733fdf  740b                 je 0x733fec
// 00733fe1  8b5500               mov edx, dword ptr [ebp]
// 00733fe4  52                   push edx
// 00733fe5  e8860fd4ff           call 0x474f70
// 00733fea  eb61                 jmp 0x73404d
// 00733fec  895c2418             mov dword ptr [esp + 0x18], ebx
// 00733ff0  8b442414             mov eax, dword ptr [esp + 0x14]
// 00733ff4  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00733ff8  8b2c88               mov ebp, dword ptr [eax + ecx*4]
// 00733ffb  8b07                 mov eax, dword ptr [edi]
// 00733ffd  3be8                 cmp ebp, eax
// 00733fff  7439                 je 0x73403a
// 00734001  3bc3                 cmp eax, ebx
// 00734003  7425                 je 0x73402a
// 00734005  83c004               add eax, 4
// 00734008  50                   push eax
// 00734009  ff15e8d27700         call dword ptr [0x77d2e8]
// 0073400f  85c0                 test eax, eax
// 00734011  7515                 jne 0x734028
// 00734013  8b0f                 mov ecx, dword ptr [edi]
// 00734015  e8b63dd2ff           call 0x457dd0
// 0073401a  8b0f                 mov ecx, dword ptr [edi]
// 0073401c  3bcb                 cmp ecx, ebx
// 0073401e  7408                 je 0x734028
// 00734020  8b11                 mov edx, dword ptr [ecx]
// 00734022  8b02                 mov eax, dword ptr [edx]
// 00734024  6a01                 push 1
// 00734026  ffd0                 call eax
// 00734028  891f                 mov dword ptr [edi], ebx
// 0073402a  3beb                 cmp ebp, ebx
// 0073402c  740c                 je 0x73403a
// 0073402e  892f                 mov dword ptr [edi], ebp
// 00734030  83c504               add ebp, 4
// 00734033  55                   push ebp
// 00734034  ff15ecd27700         call dword ptr [0x77d2ec]
// 0073403a  8b442418             mov eax, dword ptr [esp + 0x18]
// 0073403e  83c001               add eax, 1
// 00734041  83c704               add edi, 4
// 00734044  83f806               cmp eax, 6
// 00734047  89442418             mov dword ptr [esp + 0x18], eax
// 0073404b  7ca3                 jl 0x733ff0
// 0073404d  dd05b08c7e00         fld qword ptr [0x7e8cb0]
// 00734053  dd842498010000       fld qword ptr [esp + 0x198]
// 0073405a  d8d1                 fcom st(1)
// 0073405c  dfe0                 fnstsw ax
// 0073405e  ddd9                 fstp st(1)
// 00734060  f6c441               test ah, 0x41
// 00734063  7518                 jne 0x73407d
// 00734065  8b0d9cdb8b00         mov ecx, dword ptr [0x8bdb9c]
// 0073406b  ddd8                 fstp st(0)
// 0073406d  8b1594db8b00         mov edx, dword ptr [0x8bdb94]
// 00734073  894c2418             mov dword ptr [esp + 0x18], ecx
// 00734077  89542414             mov dword ptr [esp + 0x14], edx
// 0073407b  eb2b                 jmp 0x7340a8
// 0073407d  dc1da88c7e00         fcomp qword ptr [0x7e8ca8]
// 00734083  dfe0                 fnstsw ax
// 00734085  f6c441               test ah, 0x41
// 00734088  7511                 jne 0x73409b
// 0073408a  8b0d64db8b00         mov ecx, dword ptr [0x8bdb64]
// 00734090  a144db8b00           mov eax, dword ptr [0x8bdb44]
// 00734095  894c2414             mov dword ptr [esp + 0x14], ecx
// 00734099  eb09                 jmp 0x7340a4
// 0073409b  a1a8db8b00           mov eax, dword ptr [0x8bdba8]
// 007340a0  89442414             mov dword ptr [esp + 0x14], eax
// 007340a4  89442418             mov dword ptr [esp + 0x18], eax
// 007340a8  807e5000             cmp byte ptr [esi + 0x50], 0
// 007340ac  0f8444080000         je 0x7348f6
// 007340b2  8b542420             mov edx, dword ptr [esp + 0x20]
// 007340b6  8b2d44e67700         mov ebp, dword ptr [0x77e644]
// 007340bc  68988c7e00           push 0x7e8c98
// 007340c1  52                   push edx
// 007340c2  8d8424d8000000       lea eax, [esp + 0xd8]
// 007340c9  50                   push eax
// 007340ca  ffd5                 call ebp
// 007340cc  8bf8                 mov edi, eax
// 007340ce  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 007340d2  688c8c7e00           push 0x7e8c8c
// 007340d7  51                   push ecx
// 007340d8  8d542448             lea edx, [esp + 0x48]
// 007340dc  52                   push edx
// 007340dd  c684249401000009     mov byte ptr [esp + 0x194], 9
// 007340e5  ffd5                 call ebp
// 007340e7  d9e8                 fld1 
// 007340e9  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 007340ed  d95c2414             fstp dword ptr [esp + 0x14]
// 007340f1  83c414               add esp, 0x14
// 007340f4  53                   push ebx
// 007340f5  6a02                 push 2
// 007340f7  6a02                 push 2
// 007340f9  6a02                 push 2
// 007340fb  51                   push ecx
// 007340fc  57                   push edi
// 007340fd  50                   push eax
// 007340fe  8d542444             lea edx, [esp + 0x44]
// 00734102  52                   push edx
// 00734103  c68424a00100000a     mov byte ptr [esp + 0x1a0], 0xa
// 0073410b  e860e0d3ff           call 0x472170
// 00734110  83c424               add esp, 0x24
// 00734113  8b38                 mov edi, dword ptr [eax]
// 00734115  8b462c               mov eax, dword ptr [esi + 0x2c]
// 00734118  3bf8                 cmp edi, eax
// 0073411a  c684247c0100000b     mov byte ptr [esp + 0x17c], 0xb
// 00734122  743d                 je 0x734161
// 00734124  3bc3                 cmp eax, ebx
// 00734126  7428                 je 0x734150
// 00734128  83c004               add eax, 4
// 0073412b  50                   push eax
// 0073412c  ff15e8d27700         call dword ptr [0x77d2e8]
// 00734132  85c0                 test eax, eax
// 00734134  7517                 jne 0x73414d
// 00734136  8b4e2c               mov ecx, dword ptr [esi + 0x2c]
// 00734139  e8923cd2ff           call 0x457dd0
// 0073413e  8b4e2c               mov ecx, dword ptr [esi + 0x2c]
// 00734141  3bcb                 cmp ecx, ebx
// 00734143  7408                 je 0x73414d
// 00734145  8b01                 mov eax, dword ptr [ecx]
// 00734147  8b10                 mov edx, dword ptr [eax]
// 00734149  6a01                 push 1
// 0073414b  ffd2                 call edx
// 0073414d  895e2c               mov dword ptr [esi + 0x2c], ebx
// 00734150  3bfb                 cmp edi, ebx
// 00734152  740d                 je 0x734161
// 00734154  897e2c               mov dword ptr [esi + 0x2c], edi
// 00734157  83c704               add edi, 4
// 0073415a  57                   push edi
// 0073415b  ff15ecd27700         call dword ptr [0x77d2ec]
// 00734161  8b442424             mov eax, dword ptr [esp + 0x24]
// 00734165  3bc3                 cmp eax, ebx
// 00734167  c684247c0100000a     mov byte ptr [esp + 0x17c], 0xa
// 0073416f  742b                 je 0x73419c
// 00734171  83c004               add eax, 4
// 00734174  50                   push eax
// 00734175  ff15e8d27700         call dword ptr [0x77d2e8]
// 0073417b  85c0                 test eax, eax
// 0073417d  7519                 jne 0x734198
// 0073417f  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00734183  e8483cd2ff           call 0x457dd0
// 00734188  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0073418c  3bcb                 cmp ecx, ebx
// 0073418e  7408                 je 0x734198
// 00734190  8b01                 mov eax, dword ptr [ecx]
// 00734192  8b10                 mov edx, dword ptr [eax]
// 00734194  6a01                 push 1
// 00734196  ffd2                 call edx
// 00734198  895c2424             mov dword ptr [esp + 0x24], ebx
// 0073419c  8d4c2434             lea ecx, [esp + 0x34]
// 007341a0  c684247c01000009     mov byte ptr [esp + 0x17c], 9
// 007341a8  ff15ace67700         call dword ptr [0x77e6ac]
// 007341ae  8d8c24d0000000       lea ecx, [esp + 0xd0]
// 007341b5  c684247c01000008     mov byte ptr [esp + 0x17c], 8
// 007341bd  ff15ace67700         call dword ptr [0x77e6ac]
// 007341c3  8b442420             mov eax, dword ptr [esp + 0x20]
// 007341c7  68848c7e00           push 0x7e8c84
// 007341cc  50                   push eax
// 007341cd  8d8c24a0000000       lea ecx, [esp + 0xa0]
// 007341d4  51                   push ecx
// 007341d5  ffd5                 call ebp
// 007341d7  d9e8                 fld1 
// 007341d9  8b542424             mov edx, dword ptr [esp + 0x24]
// 007341dd  d9542408             fst dword ptr [esp + 8]
// 007341e1  83c404               add esp, 4
// 007341e4  d91c24               fstp dword ptr [esp]
// 007341e7  d9e8                 fld1 
// 007341e9  53                   push ebx
// 007341ea  83ec08               sub esp, 8
// 007341ed  dd1c24               fstp qword ptr [esp]
// 007341f0  c68424900100000c     mov byte ptr [esp + 0x190], 0xc
// 007341f8  6a02                 push 2
// 007341fa  6a02                 push 2
// 007341fc  6a02                 push 2
// 007341fe  52                   push edx
// 007341ff  50                   push eax
// 00734200  8d442444             lea eax, [esp + 0x44]
// 00734204  50                   push eax
// 00734205  e8e6ddd3ff           call 0x471ff0
// 0073420a  83c42c               add esp, 0x2c
// 0073420d  8b38                 mov edi, dword ptr [eax]
// 0073420f  8b4628               mov eax, dword ptr [esi + 0x28]
// 00734212  3bf8                 cmp edi, eax
// 00734214  c684247c0100000d     mov byte ptr [esp + 0x17c], 0xd
// 0073421c  743d                 je 0x73425b
// 0073421e  3bc3                 cmp eax, ebx
// 00734220  7428                 je 0x73424a
// 00734222  83c004               add eax, 4
// 00734225  50                   push eax
// 00734226  ff15e8d27700         call dword ptr [0x77d2e8]
// 0073422c  85c0                 test eax, eax
// 0073422e  7517                 jne 0x734247
// 00734230  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 00734233  e8983bd2ff           call 0x457dd0
// 00734238  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 0073423b  3bcb                 cmp ecx, ebx
// 0073423d  7408                 je 0x734247
// 0073423f  8b11                 mov edx, dword ptr [ecx]
// 00734241  8b02                 mov eax, dword ptr [edx]
// 00734243  6a01                 push 1
// 00734245  ffd0                 call eax
// 00734247  895e28               mov dword ptr [esi + 0x28], ebx
// 0073424a  3bfb                 cmp edi, ebx
// 0073424c  740d                 je 0x73425b
// 0073424e  897e28               mov dword ptr [esi + 0x28], edi
// 00734251  83c704               add edi, 4
// 00734254  57                   push edi
// 00734255  ff15ecd27700         call dword ptr [0x77d2ec]
// 0073425b  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0073425f  3bc3                 cmp eax, ebx
// 00734261  c684247c0100000c     mov byte ptr [esp + 0x17c], 0xc
// 00734269  742b                 je 0x734296
// 0073426b  83c004               add eax, 4
// 0073426e  50                   push eax
// 0073426f  ff15e8d27700         call dword ptr [0x77d2e8]
// 00734275  85c0                 test eax, eax
// 00734277  7519                 jne 0x734292
// 00734279  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0073427d  e84e3bd2ff           call 0x457dd0
// 00734282  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00734286  3bcb                 cmp ecx, ebx
// 00734288  7408                 je 0x734292
// 0073428a  8b11                 mov edx, dword ptr [ecx]
// 0073428c  8b02                 mov eax, dword ptr [edx]
// 0073428e  6a01                 push 1
// 00734290  ffd0                 call eax
// 00734292  895c241c             mov dword ptr [esp + 0x1c], ebx
// 00734296  8d8c2498000000       lea ecx, [esp + 0x98]
// 0073429d  c684247c01000008     mov byte ptr [esp + 0x17c], 8
// 007342a5  ff15ace67700         call dword ptr [0x77e6ac]
// 007342ab  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 007342af  68748c7e00           push 0x7e8c74
// 007342b4  51                   push ecx
// 007342b5  8d9424f4000000       lea edx, [esp + 0xf4]
// 007342bc  52                   push edx
// 007342bd  ffd5                 call ebp
// 007342bf  d9e8                 fld1 
// 007342c1  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 007342c5  d9542408             fst dword ptr [esp + 8]
// 007342c9  83c404               add esp, 4
// 007342cc  d91c24               fstp dword ptr [esp]
// 007342cf  d9e8                 fld1 
// 007342d1  53                   push ebx
// 007342d2  83ec08               sub esp, 8
// 007342d5  dd1c24               fstp qword ptr [esp]
// 007342d8  8d54243c             lea edx, [esp + 0x3c]
// 007342dc  6a02                 push 2
// 007342de  6a02                 push 2
// 007342e0  6a02                 push 2
// 007342e2  51                   push ecx
// 007342e3  50                   push eax
// 007342e4  52                   push edx
// 007342e5  c68424a80100000e     mov byte ptr [esp + 0x1a8], 0xe
// 007342ed  e8fedcd3ff           call 0x471ff0
// 007342f2  83c42c               add esp, 0x2c
// 007342f5  8b38                 mov edi, dword ptr [eax]
// 007342f7  8b4630               mov eax, dword ptr [esi + 0x30]
// 007342fa  3bf8                 cmp edi, eax
// 007342fc  c684247c0100000f     mov byte ptr [esp + 0x17c], 0xf
// 00734304  743d                 je 0x734343
// 00734306  3bc3                 cmp eax, ebx
// 00734308  7428                 je 0x734332
// 0073430a  83c004               add eax, 4
// 0073430d  50                   push eax
// 0073430e  ff15e8d27700         call dword ptr [0x77d2e8]
// 00734314  85c0                 test eax, eax
// 00734316  7517                 jne 0x73432f
// 00734318  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 0073431b  e8b03ad2ff           call 0x457dd0
// 00734320  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 00734323  3bcb                 cmp ecx, ebx
// 00734325  7408                 je 0x73432f
// 00734327  8b01                 mov eax, dword ptr [ecx]
// 00734329  8b10                 mov edx, dword ptr [eax]
// 0073432b  6a01                 push 1
// 0073432d  ffd2                 call edx
// 0073432f  895e30               mov dword ptr [esi + 0x30], ebx
// 00734332  3bfb                 cmp edi, ebx
// 00734334  740d                 je 0x734343
// 00734336  897e30               mov dword ptr [esi + 0x30], edi
// 00734339  83c704               add edi, 4
// 0073433c  57                   push edi
// 0073433d  ff15ecd27700         call dword ptr [0x77d2ec]
// 00734343  8b442428             mov eax, dword ptr [esp + 0x28]
// 00734347  3bc3                 cmp eax, ebx
// 00734349  c684247c0100000e     mov byte ptr [esp + 0x17c], 0xe
// 00734351  742b                 je 0x73437e
// 00734353  83c004               add eax, 4
// 00734356  50                   push eax
// 00734357  ff15e8d27700         call dword ptr [0x77d2e8]
// 0073435d  85c0                 test eax, eax
// 0073435f  7519                 jne 0x73437a
// 00734361  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00734365  e8663ad2ff           call 0x457dd0
// 0073436a  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0073436e  3bcb                 cmp ecx, ebx
// 00734370  7408                 je 0x73437a
// 00734372  8b01                 mov eax, dword ptr [ecx]
// 00734374  8b10                 mov edx, dword ptr [eax]
// 00734376  6a01                 push 1
// 00734378  ffd2                 call edx
// 0073437a  895c2428             mov dword ptr [esp + 0x28], ebx
// 0073437e  8d8c24ec000000       lea ecx, [esp + 0xec]
// 00734385  c684247c01000008     mov byte ptr [esp + 0x17c], 8
// 0073438d  ff15ace67700         call dword ptr [0x77e6ac]
// 00734393  8b442420             mov eax, dword ptr [esp + 0x20]
// 00734397  68648c7e00           push 0x7e8c64
// 0073439c  50                   push eax
// 0073439d  8d4c2468             lea ecx, [esp + 0x68]
// 007343a1  51                   push ecx
// 007343a2  ffd5                 call ebp
// 007343a4  d9e8                 fld1 
// 007343a6  8b542424             mov edx, dword ptr [esp + 0x24]
// 007343aa  d9542408             fst dword ptr [esp + 8]
// 007343ae  83c404               add esp, 4
// 007343b1  d91c24               fstp dword ptr [esp]
// 007343b4  d9e8                 fld1 
// 007343b6  53                   push ebx
// 007343b7  83ec08               sub esp, 8
// 007343ba  dd1c24               fstp qword ptr [esp]
// 007343bd  c684249001000010     mov byte ptr [esp + 0x190], 0x10
// 007343c5  6a02                 push 2
// 007343c7  6a02                 push 2
// 007343c9  6a02                 push 2
// 007343cb  52                   push edx
// 007343cc  50                   push eax
// 007343cd  8d442454             lea eax, [esp + 0x54]
// 007343d1  50                   push eax
// 007343d2  e819dcd3ff           call 0x471ff0
// 007343d7  83c42c               add esp, 0x2c
// 007343da  8b38                 mov edi, dword ptr [eax]
// 007343dc  8b4634               mov eax, dword ptr [esi + 0x34]
// 007343df  3bf8                 cmp edi, eax
// 007343e1  c684247c01000011     mov byte ptr [esp + 0x17c], 0x11
// 007343e9  743d                 je 0x734428
// 007343eb  3bc3                 cmp eax, ebx
// 007343ed  7428                 je 0x734417
// 007343ef  83c004               add eax, 4
// 007343f2  50                   push eax
// 007343f3  ff15e8d27700         call dword ptr [0x77d2e8]
// 007343f9  85c0                 test eax, eax
// 007343fb  7517                 jne 0x734414
// 007343fd  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00734400  e8cb39d2ff           call 0x457dd0
// 00734405  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00734408  3bcb                 cmp ecx, ebx
// 0073440a  7408                 je 0x734414
// 0073440c  8b11                 mov edx, dword ptr [ecx]
// 0073440e  8b02                 mov eax, dword ptr [edx]
// 00734410  6a01                 push 1
// 00734412  ffd0                 call eax
// 00734414  895e34               mov dword ptr [esi + 0x34], ebx
// 00734417  3bfb                 cmp edi, ebx
// 00734419  740d                 je 0x734428
// 0073441b  897e34               mov dword ptr [esi + 0x34], edi
// 0073441e  83c704               add edi, 4
// 00734421  57                   push edi
// 00734422  ff15ecd27700         call dword ptr [0x77d2ec]
// 00734428  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0073442c  3bc3                 cmp eax, ebx
// 0073442e  c684247c01000010     mov byte ptr [esp + 0x17c], 0x10
// 00734436  742b                 je 0x734463
// 00734438  83c004               add eax, 4
// 0073443b  50                   push eax
// 0073443c  ff15e8d27700         call dword ptr [0x77d2e8]
// 00734442  85c0                 test eax, eax
// 00734444  7519                 jne 0x73445f
// 00734446  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0073444a  e88139d2ff           call 0x457dd0
// 0073444f  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00734453  3bcb                 cmp ecx, ebx
// 00734455  7408                 je 0x73445f
// 00734457  8b11                 mov edx, dword ptr [ecx]
// 00734459  8b02                 mov eax, dword ptr [edx]
// 0073445b  6a01                 push 1
// 0073445d  ffd0                 call eax
// 0073445f  895c242c             mov dword ptr [esp + 0x2c], ebx
// 00734463  8d4c2460             lea ecx, [esp + 0x60]
// 00734467  c684247c01000008     mov byte ptr [esp + 0x17c], 8
// 0073446f  ff15ace67700         call dword ptr [0x77e6ac]
// 00734475  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00734479  68588c7e00           push 0x7e8c58
// 0073447e  8d8c2480000000       lea ecx, [esp + 0x80]
// 00734485  57                   push edi
// 00734486  51                   push ecx
// 00734487  ffd5                 call ebp
// 00734489  50                   push eax
// 0073448a  c684248c01000012     mov byte ptr [esp + 0x18c], 0x12
// 00734492  e8d970ddff           call 0x50b570
// 00734497  83c410               add esp, 0x10
// 0073449a  8d4c247c             lea ecx, [esp + 0x7c]
// 0073449e  8844241c             mov byte ptr [esp + 0x1c], al
// 007344a2  c684247c01000008     mov byte ptr [esp + 0x17c], 8
// 007344aa  ff15ace67700         call dword ptr [0x77e6ac]
// 007344b0  807c241c00           cmp byte ptr [esp + 0x1c], 0
// 007344b5  0f8470030000         je 0x73482b
// 007344bb  68588c7e00           push 0x7e8c58
// 007344c0  8d9424b8000000       lea edx, [esp + 0xb8]
// 007344c7  57                   push edi
// 007344c8  52                   push edx
// 007344c9  ffd5                 call ebp
// 007344cb  83c40c               add esp, 0xc
// 007344ce  6a01                 push 1
// 007344d0  6a01                 push 1
// 007344d2  50                   push eax
// 007344d3  8d8c2414010000       lea ecx, [esp + 0x114]
// 007344da  c684248801000013     mov byte ptr [esp + 0x188], 0x13
// 007344e2  e8a97cddff           call 0x50c190
// 007344e7  8d8c24b4000000       lea ecx, [esp + 0xb4]
// 007344ee  c684247c01000015     mov byte ptr [esp + 0x17c], 0x15
// 007344f6  ff15ace67700         call dword ptr [0x77e6ac]
// 007344fc  6a05                 push 5
// 007344fe  8d842458010000       lea eax, [esp + 0x158]
// 00734505  50                   push eax
// 00734506  8d8c2410010000       lea ecx, [esp + 0x110]
// 0073450d  e80e7bddff           call 0x50c020
// 00734512  8b84244c010000       mov eax, dword ptr [esp + 0x14c]
// 00734519  8d4802               lea ecx, [eax + 2]
// 0073451c  3b8c2444010000       cmp ecx, dword ptr [esp + 0x144]
// 00734523  c684247c01000016     mov byte ptr [esp + 0x17c], 0x16
// 0073452b  7e1f                 jle 0x73454c
// 0073452d  8b94243c010000       mov edx, dword ptr [esp + 0x13c]
// 00734534  6a02                 push 2
// 00734536  03d0                 add edx, eax
// 00734538  52                   push edx
// 00734539  8d8c2410010000       lea ecx, [esp + 0x110]
// 00734540  e87b77ddff           call 0x50bcc0
// 00734545  8b84244c010000       mov eax, dword ptr [esp + 0x14c]
// 0073454c  83c002               add eax, 2
// 0073454f  80bc242c01000000     cmp byte ptr [esp + 0x12c], 0
// 00734557  8984244c010000       mov dword ptr [esp + 0x14c], eax
// 0073455e  741e                 je 0x73457e
// 00734560  8bbc2448010000       mov edi, dword ptr [esp + 0x148]
// 00734567  8a4c07ff             mov cl, byte ptr [edi + eax - 1]
// 0073456b  8a5407fe             mov dl, byte ptr [edi + eax - 2]
// 0073456f  884c241c             mov byte ptr [esp + 0x1c], cl
// 00734573  8854241d             mov byte ptr [esp + 0x1d], dl
// 00734577  0fb744241c           movzx eax, word ptr [esp + 0x1c]
// 0073457c  eb0c                 jmp 0x73458a
// 0073457e  8b8c2448010000       mov ecx, dword ptr [esp + 0x148]
// 00734585  0fb74401fe           movzx eax, word ptr [ecx + eax - 2]
// 0073458a  0fbfe8               movsx ebp, ax
// 0073458d  6a01                 push 1
// 0073458f  55                   push ebp
// 00734590  8d4e38               lea ecx, [esi + 0x38]
// 00734593  e8f82bddff           call 0x507190
// 00734598  6a01                 push 1
// 0073459a  55                   push ebp
// 0073459b  8d4e44               lea ecx, [esi + 0x44]
// 0073459e  e82d82d4ff           call 0x47c7d0
// 007345a3  33ff                 xor edi, edi
// 007345a5  3beb                 cmp ebp, ebx
// 007345a7  0f8e50020000         jle 0x7347fd
// 007345ad  8d4900               lea ecx, [ecx]
// 007345b0  8b84244c010000       mov eax, dword ptr [esp + 0x14c]
// 007345b7  8d5002               lea edx, [eax + 2]
// 007345ba  3b942444010000       cmp edx, dword ptr [esp + 0x144]
// 007345c1  7e1f                 jle 0x7345e2
// 007345c3  8b8c243c010000       mov ecx, dword ptr [esp + 0x13c]
// 007345ca  03c8                 add ecx, eax
// 007345cc  6a02                 push 2
// 007345ce  51                   push ecx
// 007345cf  8d8c2410010000       lea ecx, [esp + 0x110]
// 007345d6  e8e576ddff           call 0x50bcc0
// 007345db  8b84244c010000       mov eax, dword ptr [esp + 0x14c]
// 007345e2  8b8c2448010000       mov ecx, dword ptr [esp + 0x148]
// 007345e9  83c002               add eax, 2
// 007345ec  80bc242c01000000     cmp byte ptr [esp + 0x12c], 0
// 007345f4  8984244c010000       mov dword ptr [esp + 0x14c], eax
// 007345fb  7419                 je 0x734616
// 007345fd  0fb65401ff           movzx edx, byte ptr [ecx + eax - 1]
// 00734602  8854241c             mov byte ptr [esp + 0x1c], dl
// 00734606  0fb65401fe           movzx edx, byte ptr [ecx + eax - 2]
// 0073460b  8854241d             mov byte ptr [esp + 0x1d], dl
// 0073460f  0fb754241c           movzx edx, word ptr [esp + 0x1c]
// 00734614  eb05                 jmp 0x73461b
// 00734616  0fb75401fe           movzx edx, word ptr [ecx + eax - 2]
// 0073461b  0fbfd2               movsx edx, dx
// 0073461e  89542414             mov dword ptr [esp + 0x14], edx
// 00734622  8d5002               lea edx, [eax + 2]
// 00734625  3b942444010000       cmp edx, dword ptr [esp + 0x144]
// 0073462c  db442414             fild dword ptr [esp + 0x14]
// 00734630  dcc0                 fadd st(0), st(0)
// 00734632  dc0598317900         fadd qword ptr [0x793198]
// 00734638  dc0d508c7e00         fmul qword ptr [0x7e8c50]
// 0073463e  d95c242c             fstp dword ptr [esp + 0x2c]
// 00734642  7e26                 jle 0x73466a
// 00734644  8b8c243c010000       mov ecx, dword ptr [esp + 0x13c]
// 0073464b  03c8                 add ecx, eax
// 0073464d  6a02                 push 2
// 0073464f  51                   push ecx
// 00734650  8d8c2410010000       lea ecx, [esp + 0x110]
// 00734657  e86476ddff           call 0x50bcc0
// 0073465c  8b84244c010000       mov eax, dword ptr [esp + 0x14c]
// 00734663  8b8c2448010000       mov ecx, dword ptr [esp + 0x148]
// 0073466a  83c002               add eax, 2
// 0073466d  80bc242c01000000     cmp byte ptr [esp + 0x12c], 0
// 00734675  8984244c010000       mov dword ptr [esp + 0x14c], eax
// 0073467c  7419                 je 0x734697
// 0073467e  0fb65401ff           movzx edx, byte ptr [ecx + eax - 1]
// 00734683  88542424             mov byte ptr [esp + 0x24], dl
// 00734687  0fb65401fe           movzx edx, byte ptr [ecx + eax - 2]
// 0073468c  88542425             mov byte ptr [esp + 0x25], dl
// 00734690  0fb7542424           movzx edx, word ptr [esp + 0x24]
// 00734695  eb05                 jmp 0x73469c
// 00734697  0fb75401fe           movzx edx, word ptr [ecx + eax - 2]
// 0073469c  0fbfd2               movsx edx, dx
// 0073469f  89542414             mov dword ptr [esp + 0x14], edx
// 007346a3  8d5002               lea edx, [eax + 2]
// 007346a6  3b942444010000       cmp edx, dword ptr [esp + 0x144]
// 007346ad  db442414             fild dword ptr [esp + 0x14]
// 007346b1  dcc0                 fadd st(0), st(0)
// 007346b3  dc0598317900         fadd qword ptr [0x793198]
// 007346b9  dc0d508c7e00         fmul qword ptr [0x7e8c50]
// 007346bf  d95c2428             fstp dword ptr [esp + 0x28]
// 007346c3  7e26                 jle 0x7346eb
// 007346c5  8b8c243c010000       mov ecx, dword ptr [esp + 0x13c]
// 007346cc  03c8                 add ecx, eax
// 007346ce  6a02                 push 2
// 007346d0  51                   push ecx
// 007346d1  8d8c2410010000       lea ecx, [esp + 0x110]
// 007346d8  e8e375ddff           call 0x50bcc0
// 007346dd  8b84244c010000       mov eax, dword ptr [esp + 0x14c]
// 007346e4  8b8c2448010000       mov ecx, dword ptr [esp + 0x148]
// 007346eb  83c002               add eax, 2
// 007346ee  80bc242c01000000     cmp byte ptr [esp + 0x12c], 0
// 007346f6  8984244c010000       mov dword ptr [esp + 0x14c], eax
// 007346fd  7417                 je 0x734716
// 007346ff  8a5401ff             mov dl, byte ptr [ecx + eax - 1]
// 00734703  8a4401fe             mov al, byte ptr [ecx + eax - 2]
// 00734707  88542418             mov byte ptr [esp + 0x18], dl
// 0073470b  88442419             mov byte ptr [esp + 0x19], al
// 0073470f  0fb7442418           movzx eax, word ptr [esp + 0x18]
// 00734714  eb05                 jmp 0x73471b
// 00734716  0fb74401fe           movzx eax, word ptr [ecx + eax - 2]
// 0073471b  0fbfc8               movsx ecx, ax
// 0073471e  8b4638               mov eax, dword ptr [esi + 0x38]
// 00734721  894c2414             mov dword ptr [esp + 0x14], ecx
// 00734725  03c3                 add eax, ebx
// 00734727  db442414             fild dword ptr [esp + 0x14]
// 0073472b  dcc0                 fadd st(0), st(0)
// 0073472d  dc0598317900         fadd qword ptr [0x793198]
// 00734733  dc0d508c7e00         fmul qword ptr [0x7e8c50]
// 00734739  d95c2414             fstp dword ptr [esp + 0x14]
// 0073473d  d944242c             fld dword ptr [esp + 0x2c]
// 00734741  d918                 fstp dword ptr [eax]
// 00734743  d9442428             fld dword ptr [esp + 0x28]
// 00734747  d95804               fstp dword ptr [eax + 4]
// 0073474a  d9442414             fld dword ptr [esp + 0x14]
// 0073474e  d95808               fstp dword ptr [eax + 8]
// 00734751  d9ee                 fldz 
// 00734753  d9580c               fstp dword ptr [eax + 0xc]
// 00734756  8b84244c010000       mov eax, dword ptr [esp + 0x14c]
// 0073475d  8d5002               lea edx, [eax + 2]
// 00734760  3b942444010000       cmp edx, dword ptr [esp + 0x144]
// 00734767  7e1f                 jle 0x734788
// 00734769  8b8c243c010000       mov ecx, dword ptr [esp + 0x13c]
// 00734770  03c8                 add ecx, eax
// 00734772  6a02                 push 2
// 00734774  51                   push ecx
// 00734775  8d8c2410010000       lea ecx, [esp + 0x110]
// 0073477c  e83f75ddff           call 0x50bcc0
// 00734781  8b84244c010000       mov eax, dword ptr [esp + 0x14c]
// 00734788  8b8c2448010000       mov ecx, dword ptr [esp + 0x148]
// 0073478f  83c002               add eax, 2
// 00734792  80bc242c01000000     cmp byte ptr [esp + 0x12c], 0
// 0073479a  8984244c010000       mov dword ptr [esp + 0x14c], eax
// 007347a1  7417                 je 0x7347ba
// 007347a3  8a5401ff             mov dl, byte ptr [ecx + eax - 1]
// 007347a7  8a4401fe             mov al, byte ptr [ecx + eax - 2]
// 007347ab  88542420             mov byte ptr [esp + 0x20], dl
// 007347af  88442421             mov byte ptr [esp + 0x21], al
// 007347b3  0fb7442420           movzx eax, word ptr [esp + 0x20]
// 007347b8  eb05                 jmp 0x7347bf
// 007347ba  0fb74401fe           movzx eax, word ptr [ecx + eax - 2]
// 007347bf  0fbfd0               movsx edx, ax
// 007347c2  8b4644               mov eax, dword ptr [esi + 0x44]
// 007347c5  89542414             mov dword ptr [esp + 0x14], edx
// 007347c9  83c701               add edi, 1
// 007347cc  83c310               add ebx, 0x10
// 007347cf  3bfd                 cmp edi, ebp
// 007347d1  db442414             fild dword ptr [esp + 0x14]
// 007347d5  dcc0                 fadd st(0), st(0)
// 007347d7  dc0598317900         fadd qword ptr [0x793198]
// 007347dd  dc0d508c7e00         fmul qword ptr [0x7e8c50]
// 007347e3  dcc8                 fmul st(0), st(0)
// 007347e5  dc0500f47900         fadd qword ptr [0x79f400]
// 007347eb  d95c2414             fstp dword ptr [esp + 0x14]
// 007347ef  d9442414             fld dword ptr [esp + 0x14]
// 007347f3  d95cb8fc             fstp dword ptr [eax + edi*4 - 4]
// 007347f7  0f8cb3fdffff         jl 0x7345b0
// 007347fd  8d8c2454010000       lea ecx, [esp + 0x154]
// 00734804  c684247c01000015     mov byte ptr [esp + 0x17c], 0x15
// 0073480c  ff15ace67700         call dword ptr [0x77e6ac]
// 00734812  8d8c2408010000       lea ecx, [esp + 0x108]
// 00734819  c684247c01000008     mov byte ptr [esp + 0x17c], 8
// 00734821  e8ba76ddff           call 0x50bee0
// 00734826  e9cb000000           jmp 0x7348f6
// 0073482b  6a01                 push 1
// 0073482d  68b80b0000           push 0xbb8
// 00734832  8d4e38               lea ecx, [esi + 0x38]
// 00734835  e85629ddff           call 0x507190
// 0073483a  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 0073483d  6a01                 push 1
// 0073483f  51                   push ecx
// 00734840  8d4e44               lea ecx, [esi + 0x44]
// 00734843  e8887fd4ff           call 0x47c7d0
// 00734848  8b7e3c               mov edi, dword ptr [esi + 0x3c]
// 0073484b  83ef01               sub edi, 1
// 0073484e  0f88a2000000         js 0x7348f6
// 00734854  d9e8                 fld1 
// 00734856  8b1df4e87700         mov ebx, dword ptr [0x77e8f4]
// 0073485c  dc25e0fe7800         fsub qword ptr [0x78fee0]
// 00734862  8bef                 mov ebp, edi
// 00734864  c1e504               shl ebp, 4
// 00734867  dd5c242c             fstp qword ptr [esp + 0x2c]
// 0073486b  eb03                 jmp 0x734870
// 0073486d  8d4900               lea ecx, [ecx]
// 00734870  8d542454             lea edx, [esp + 0x54]
// 00734874  52                   push edx
// 00734875  e8e6acddff           call 0x50f560
// 0073487a  d900                 fld dword ptr [eax]
// 0073487c  d95c2438             fstp dword ptr [esp + 0x38]
// 00734880  83c404               add esp, 4
// 00734883  d94004               fld dword ptr [eax + 4]
// 00734886  d95c2438             fstp dword ptr [esp + 0x38]
// 0073488a  d94008               fld dword ptr [eax + 8]
// 0073488d  8b4638               mov eax, dword ptr [esi + 0x38]
// 00734890  d95c243c             fstp dword ptr [esp + 0x3c]
// 00734894  03c5                 add eax, ebp
// 00734896  d9442434             fld dword ptr [esp + 0x34]
// 0073489a  d918                 fstp dword ptr [eax]
// 0073489c  d9442438             fld dword ptr [esp + 0x38]
// 007348a0  d95804               fstp dword ptr [eax + 4]
// 007348a3  d944243c             fld dword ptr [esp + 0x3c]
// 007348a7  d95808               fstp dword ptr [eax + 8]
// 007348aa  d9ee                 fldz 
// 007348ac  d9580c               fstp dword ptr [eax + 0xc]
// 007348af  ffd3                 call ebx
// 007348b1  89442414             mov dword ptr [esp + 0x14], eax
// 007348b5  db442414             fild dword ptr [esp + 0x14]
// 007348b9  8b4644               mov eax, dword ptr [esi + 0x44]
// 007348bc  83ef01               sub edi, 1
// 007348bf  83ed10               sub ebp, 0x10
// 007348c2  85ff                 test edi, edi
// 007348c4  dc4c242c             fmul qword ptr [esp + 0x2c]
// 007348c8  dc35c8f27900         fdiv qword ptr [0x79f2c8]
// 007348ce  dc05e0fe7800         fadd qword ptr [0x78fee0]
// 007348d4  d95c2414             fstp dword ptr [esp + 0x14]
// 007348d8  d9442414             fld dword ptr [esp + 0x14]
// 007348dc  dcc8                 fmul st(0), st(0)
// 007348de  dc0500f47900         fadd qword ptr [0x79f400]
// 007348e4  d95c2414             fstp dword ptr [esp + 0x14]
// 007348e8  d9442414             fld dword ptr [esp + 0x14]
// 007348ec  d95cb804             fstp dword ptr [eax + edi*4 + 4]
// 007348f0  0f8d7affffff         jge 0x734870
// 007348f6  8bc6                 mov eax, esi
// 007348f8  8b8c2474010000       mov ecx, dword ptr [esp + 0x174]
// 007348ff  64890d00000000       mov dword ptr fs:[0], ecx
// 00734906  59                   pop ecx
// 00734907  5f                   pop edi
// 00734908  5e                   pop esi
// 00734909  5d                   pop ebp
// 0073490a  5b                   pop ebx
// 0073490b  8b8c245c010000       mov ecx, dword ptr [esp + 0x15c]
// 00734912  33cc                 xor ecx, esp
// 00734914  e805c1efff           call 0x630a1e
// 00734919  81c46c010000         add esp, 0x16c
// 0073491f  c21c00               ret 0x1c
// library g3d-6.09/GLG3Dcpp\Sky.cpp (function ??0Sky@G3D@@AAE@PAVRenderDevice@1@QAV?$ReferenceCountedPointer@VTexture@G3D@@@1@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N3N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Sky.cpp
