// roc 2008-06 004af530  unit: RBX::Network::Replicator::MarkerItem  size: 765 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004af530
//
// 004af530  64a100000000         mov eax, dword ptr fs:[0]
// 004af536  6aff                 push -1
// 004af538  6842e87d00           push 0x7de842
// 004af53d  50                   push eax
// 004af53e  64892500000000       mov dword ptr fs:[0], esp
// 004af545  8b442418             mov eax, dword ptr [esp + 0x18]
// 004af549  83ec48               sub esp, 0x48
// 004af54c  80781900             cmp byte ptr [eax + 0x19], 0
// 004af550  55                   push ebp
// 004af551  8be9                 mov ebp, ecx
// 004af553  7459                 je 0x4af5ae
// 004af555  6870b28000           push 0x80b270
// 004af55a  8d4c240c             lea ecx, [esp + 0xc]
// 004af55e  ff1558248000         call dword ptr [0x802458]
// 004af564  8d4c2424             lea ecx, [esp + 0x24]
// 004af568  c744245400000000     mov dword ptr [esp + 0x54], 0
// 004af570  ff1598288000         call dword ptr [0x802898]
// 004af576  8d442408             lea eax, [esp + 8]
// 004af57a  50                   push eax
// 004af57b  8d4c2434             lea ecx, [esp + 0x34]
// 004af57f  c644245801           mov byte ptr [esp + 0x58], 1
// 004af584  c744242810b18000     mov dword ptr [esp + 0x28], 0x80b110
// 004af58c  ff155c248000         call dword ptr [0x80245c]
// 004af592  683c0c8d00           push 0x8d0c3c
// 004af597  8d4c2428             lea ecx, [esp + 0x28]
// 004af59b  51                   push ecx
// 004af59c  c644245c00           mov byte ptr [esp + 0x5c], 0
// 004af5a1  c744242c28b18000     mov dword ptr [esp + 0x2c], 0x80b128
// 004af5a9  e8de1f1f00           call 0x6a158c
// 004af5ae  53                   push ebx
// 004af5af  56                   push esi
// 004af5b0  8bd8                 mov ebx, eax
// 004af5b2  57                   push edi
// 004af5b3  8d4c246c             lea ecx, [esp + 0x6c]
// 004af5b7  895c2410             mov dword ptr [esp + 0x10], ebx
// 004af5bb  e8907c1000           call 0x5b7250
// 004af5c0  8b0b                 mov ecx, dword ptr [ebx]
// 004af5c2  80791900             cmp byte ptr [ecx + 0x19], 0
// 004af5c6  7405                 je 0x4af5cd
// 004af5c8  8b7b08               mov edi, dword ptr [ebx + 8]
// 004af5cb  eb1b                 jmp 0x4af5e8
// 004af5cd  8b5308               mov edx, dword ptr [ebx + 8]
// 004af5d0  807a1900             cmp byte ptr [edx + 0x19], 0
// 004af5d4  7404                 je 0x4af5da
// 004af5d6  8bf9                 mov edi, ecx
// 004af5d8  eb0e                 jmp 0x4af5e8
// 004af5da  8b442470             mov eax, dword ptr [esp + 0x70]
// 004af5de  8b7808               mov edi, dword ptr [eax + 8]
// 004af5e1  8d5008               lea edx, [eax + 8]
// 004af5e4  3bc3                 cmp eax, ebx
// 004af5e6  756b                 jne 0x4af653
// 004af5e8  807f1900             cmp byte ptr [edi + 0x19], 0
// 004af5ec  8b7304               mov esi, dword ptr [ebx + 4]
// 004af5ef  7503                 jne 0x4af5f4
// 004af5f1  897704               mov dword ptr [edi + 4], esi
// 004af5f4  8b4518               mov eax, dword ptr [ebp + 0x18]
// 004af5f7  395804               cmp dword ptr [eax + 4], ebx
// 004af5fa  7505                 jne 0x4af601
// 004af5fc  897804               mov dword ptr [eax + 4], edi
// 004af5ff  eb0b                 jmp 0x4af60c
// 004af601  391e                 cmp dword ptr [esi], ebx
// 004af603  7504                 jne 0x4af609
// 004af605  893e                 mov dword ptr [esi], edi
// 004af607  eb03                 jmp 0x4af60c
// 004af609  897e08               mov dword ptr [esi + 8], edi
// 004af60c  8b5d18               mov ebx, dword ptr [ebp + 0x18]
// 004af60f  8b03                 mov eax, dword ptr [ebx]
// 004af611  3b442410             cmp eax, dword ptr [esp + 0x10]
// 004af615  7515                 jne 0x4af62c
// 004af617  807f1900             cmp byte ptr [edi + 0x19], 0
// 004af61b  7404                 je 0x4af621
// 004af61d  8bc6                 mov eax, esi
// 004af61f  eb09                 jmp 0x4af62a
// 004af621  57                   push edi
// 004af622  e8f9751000           call 0x5b6c20
// 004af627  83c404               add esp, 4
// 004af62a  8903                 mov dword ptr [ebx], eax
// 004af62c  8b5d18               mov ebx, dword ptr [ebp + 0x18]
// 004af62f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004af633  394b08               cmp dword ptr [ebx + 8], ecx
// 004af636  7577                 jne 0x4af6af
// 004af638  807f1900             cmp byte ptr [edi + 0x19], 0
// 004af63c  7407                 je 0x4af645
// 004af63e  8bc6                 mov eax, esi
// 004af640  894308               mov dword ptr [ebx + 8], eax
// 004af643  eb6a                 jmp 0x4af6af
// 004af645  57                   push edi
// 004af646  e825baffff           call 0x4ab070
// 004af64b  83c404               add esp, 4
// 004af64e  894308               mov dword ptr [ebx + 8], eax
// 004af651  eb5c                 jmp 0x4af6af
// 004af653  894104               mov dword ptr [ecx + 4], eax
// 004af656  8b0b                 mov ecx, dword ptr [ebx]
// 004af658  8908                 mov dword ptr [eax], ecx
// 004af65a  3b4308               cmp eax, dword ptr [ebx + 8]
// 004af65d  7504                 jne 0x4af663
// 004af65f  8bf0                 mov esi, eax
// 004af661  eb19                 jmp 0x4af67c
// 004af663  807f1900             cmp byte ptr [edi + 0x19], 0
// 004af667  8b7004               mov esi, dword ptr [eax + 4]
// 004af66a  7503                 jne 0x4af66f
// 004af66c  897704               mov dword ptr [edi + 4], esi
// 004af66f  893e                 mov dword ptr [esi], edi
// 004af671  8b4b08               mov ecx, dword ptr [ebx + 8]
// 004af674  890a                 mov dword ptr [edx], ecx
// 004af676  8b5308               mov edx, dword ptr [ebx + 8]
// 004af679  894204               mov dword ptr [edx + 4], eax
// 004af67c  8b4d18               mov ecx, dword ptr [ebp + 0x18]
// 004af67f  395904               cmp dword ptr [ecx + 4], ebx
// 004af682  7505                 jne 0x4af689
// 004af684  894104               mov dword ptr [ecx + 4], eax
// 004af687  eb0e                 jmp 0x4af697
// 004af689  8b4b04               mov ecx, dword ptr [ebx + 4]
// 004af68c  3919                 cmp dword ptr [ecx], ebx
// 004af68e  7504                 jne 0x4af694
// 004af690  8901                 mov dword ptr [ecx], eax
// 004af692  eb03                 jmp 0x4af697
// 004af694  894108               mov dword ptr [ecx + 8], eax
// 004af697  8b4b04               mov ecx, dword ptr [ebx + 4]
// 004af69a  894804               mov dword ptr [eax + 4], ecx
// 004af69d  8d4b18               lea ecx, [ebx + 0x18]
// 004af6a0  83c018               add eax, 0x18
// 004af6a3  3bc1                 cmp eax, ecx
// 004af6a5  7408                 je 0x4af6af
// 004af6a7  8a19                 mov bl, byte ptr [ecx]
// 004af6a9  8a10                 mov dl, byte ptr [eax]
// 004af6ab  8818                 mov byte ptr [eax], bl
// 004af6ad  8811                 mov byte ptr [ecx], dl
// 004af6af  8b542410             mov edx, dword ptr [esp + 0x10]
// 004af6b3  b301                 mov bl, 1
// 004af6b5  385a18               cmp byte ptr [edx + 0x18], bl
// 004af6b8  0f85fd000000         jne 0x4af7bb
// 004af6be  8b4518               mov eax, dword ptr [ebp + 0x18]
// 004af6c1  3b7804               cmp edi, dword ptr [eax + 4]
// 004af6c4  0f84ee000000         je 0x4af7b8
// 004af6ca  8d9b00000000         lea ebx, [ebx]
// 004af6d0  385f18               cmp byte ptr [edi + 0x18], bl
// 004af6d3  0f85df000000         jne 0x4af7b8
// 004af6d9  8b06                 mov eax, dword ptr [esi]
// 004af6db  3bf8                 cmp edi, eax
// 004af6dd  7565                 jne 0x4af744
// 004af6df  8b4608               mov eax, dword ptr [esi + 8]
// 004af6e2  80781800             cmp byte ptr [eax + 0x18], 0
// 004af6e6  7512                 jne 0x4af6fa
// 004af6e8  885818               mov byte ptr [eax + 0x18], bl
// 004af6eb  56                   push esi
// 004af6ec  8bcd                 mov ecx, ebp
// 004af6ee  c6461800             mov byte ptr [esi + 0x18], 0
// 004af6f2  e8f9c6ffff           call 0x4abdf0
// 004af6f7  8b4608               mov eax, dword ptr [esi + 8]
// 004af6fa  80781900             cmp byte ptr [eax + 0x19], 0
// 004af6fe  7574                 jne 0x4af774
// 004af700  8b08                 mov ecx, dword ptr [eax]
// 004af702  385918               cmp byte ptr [ecx + 0x18], bl
// 004af705  7508                 jne 0x4af70f
// 004af707  8b5008               mov edx, dword ptr [eax + 8]
// 004af70a  385a18               cmp byte ptr [edx + 0x18], bl
// 004af70d  7461                 je 0x4af770
// 004af70f  8b4808               mov ecx, dword ptr [eax + 8]
// 004af712  385918               cmp byte ptr [ecx + 0x18], bl
// 004af715  7514                 jne 0x4af72b
// 004af717  8b10                 mov edx, dword ptr [eax]
// 004af719  885a18               mov byte ptr [edx + 0x18], bl
// 004af71c  50                   push eax
// 004af71d  8bcd                 mov ecx, ebp
// 004af71f  c6401800             mov byte ptr [eax + 0x18], 0
// 004af723  e8387c0d00           call 0x587360
// 004af728  8b4608               mov eax, dword ptr [esi + 8]
// 004af72b  8a4e18               mov cl, byte ptr [esi + 0x18]
// 004af72e  884818               mov byte ptr [eax + 0x18], cl
// 004af731  885e18               mov byte ptr [esi + 0x18], bl
// 004af734  8b5008               mov edx, dword ptr [eax + 8]
// 004af737  56                   push esi
// 004af738  8bcd                 mov ecx, ebp
// 004af73a  885a18               mov byte ptr [edx + 0x18], bl
// 004af73d  e8aec6ffff           call 0x4abdf0
// 004af742  eb74                 jmp 0x4af7b8
// 004af744  80781800             cmp byte ptr [eax + 0x18], 0
// 004af748  7511                 jne 0x4af75b
// 004af74a  885818               mov byte ptr [eax + 0x18], bl
// 004af74d  56                   push esi
// 004af74e  8bcd                 mov ecx, ebp
// 004af750  c6461800             mov byte ptr [esi + 0x18], 0
// 004af754  e8077c0d00           call 0x587360
// 004af759  8b06                 mov eax, dword ptr [esi]
// 004af75b  80781900             cmp byte ptr [eax + 0x19], 0
// 004af75f  7513                 jne 0x4af774
// 004af761  8b4808               mov ecx, dword ptr [eax + 8]
// 004af764  385918               cmp byte ptr [ecx + 0x18], bl
// 004af767  751e                 jne 0x4af787
// 004af769  8b10                 mov edx, dword ptr [eax]
// 004af76b  385a18               cmp byte ptr [edx + 0x18], bl
// 004af76e  7517                 jne 0x4af787
// 004af770  c6401800             mov byte ptr [eax + 0x18], 0
// 004af774  8b4518               mov eax, dword ptr [ebp + 0x18]
// 004af777  8bfe                 mov edi, esi
// 004af779  8b7604               mov esi, dword ptr [esi + 4]
// 004af77c  3b7804               cmp edi, dword ptr [eax + 4]
// 004af77f  0f854bffffff         jne 0x4af6d0
// 004af785  eb31                 jmp 0x4af7b8
// 004af787  8b08                 mov ecx, dword ptr [eax]
// 004af789  385918               cmp byte ptr [ecx + 0x18], bl
// 004af78c  7514                 jne 0x4af7a2
// 004af78e  8b5008               mov edx, dword ptr [eax + 8]
// 004af791  885a18               mov byte ptr [edx + 0x18], bl
// 004af794  50                   push eax
// 004af795  8bcd                 mov ecx, ebp
// 004af797  c6401800             mov byte ptr [eax + 0x18], 0
// 004af79b  e850c6ffff           call 0x4abdf0
// 004af7a0  8b06                 mov eax, dword ptr [esi]
// 004af7a2  8a4e18               mov cl, byte ptr [esi + 0x18]
// 004af7a5  884818               mov byte ptr [eax + 0x18], cl
// 004af7a8  885e18               mov byte ptr [esi + 0x18], bl
// 004af7ab  8b10                 mov edx, dword ptr [eax]
// 004af7ad  56                   push esi
// 004af7ae  8bcd                 mov ecx, ebp
// 004af7b0  885a18               mov byte ptr [edx + 0x18], bl
// 004af7b3  e8a87b0d00           call 0x587360
// 004af7b8  885f18               mov byte ptr [edi + 0x18], bl
// 004af7bb  8b442410             mov eax, dword ptr [esp + 0x10]
// 004af7bf  8b7014               mov esi, dword ptr [eax + 0x14]
// 004af7c2  85f6                 test esi, esi
// 004af7c4  742a                 je 0x4af7f0
// 004af7c6  8d4e04               lea ecx, [esi + 4]
// 004af7c9  83caff               or edx, 0xffffffff
// 004af7cc  f00fc111             lock xadd dword ptr [ecx], edx
// 004af7d0  751e                 jne 0x4af7f0
// 004af7d2  8b06                 mov eax, dword ptr [esi]
// 004af7d4  8b5004               mov edx, dword ptr [eax + 4]
// 004af7d7  8bce                 mov ecx, esi
// 004af7d9  ffd2                 call edx
// 004af7db  8d4608               lea eax, [esi + 8]
// 004af7de  83c9ff               or ecx, 0xffffffff
// 004af7e1  f00fc108             lock xadd dword ptr [eax], ecx
// 004af7e5  7509                 jne 0x4af7f0
// 004af7e7  8b16                 mov edx, dword ptr [esi]
// 004af7e9  8b4208               mov eax, dword ptr [edx + 8]
// 004af7ec  8bce                 mov ecx, esi
// 004af7ee  ffd0                 call eax
// 004af7f0  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004af7f4  51                   push ecx
// 004af7f5  e8800e1f00           call 0x6a067a
// 004af7fa  8b451c               mov eax, dword ptr [ebp + 0x1c]
// 004af7fd  83c404               add esp, 4
// 004af800  5f                   pop edi
// 004af801  5e                   pop esi
// 004af802  5b                   pop ebx
// 004af803  85c0                 test eax, eax
// 004af805  7604                 jbe 0x4af80b
// 004af807  48                   dec eax
// 004af808  89451c               mov dword ptr [ebp + 0x1c], eax
// 004af80b  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 004af80f  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 004af813  8b5500               mov edx, dword ptr [ebp]
// 004af816  894804               mov dword ptr [eax + 4], ecx
// 004af819  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 004af81d  8910                 mov dword ptr [eax], edx
// 004af81f  5d                   pop ebp
// 004af820  64890d00000000       mov dword ptr fs:[0], ecx
// 004af827  83c454               add esp, 0x54
// 004af82a  c20c00               ret 0xc
// library openrbx-client/App\reflection\signal.cpp (function ?erase@?$_Tree@V?$_Tmap_traits@PBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@U?$less@PBVSignalDescriptor@Reflection@RBX@@@std@@V?$allocator@U?$pair@QBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@@std@@@7@$0A@@std@@@std@@QAE?AViterator@12@Vconst_iterator@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/reflection/signal.cpp
