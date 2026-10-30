// roc 2012-06 009ce1e0  unit: CXTPPopupBar  size: 444 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009ce1e0
//
// 009ce1e0  83ec08               sub esp, 8
// 009ce1e3  53                   push ebx
// 009ce1e4  56                   push esi
// 009ce1e5  57                   push edi
// 009ce1e6  8bf1                 mov esi, ecx
// 009ce1e8  e81359fcff           call 0x993b00
// 009ce1ed  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 009ce1f1  8d8b77ecffff         lea ecx, [ebx - 0x1389]
// 009ce1f7  83f903               cmp ecx, 3
// 009ce1fa  0f877a010000         ja 0x9ce37a
// 009ce200  ff248d8ce39c00       jmp dword ptr [ecx*4 + 0x9ce38c]
// 009ce207  8b8e20020000         mov ecx, dword ptr [esi + 0x220]
// 009ce20d  3bc8                 cmp ecx, eax
// 009ce20f  7514                 jne 0x9ce225
// 009ce211  8d8e24020000         lea ecx, [esi + 0x224]
// 009ce217  e804dbffff           call 0x9cbd20
// 009ce21c  5f                   pop edi
// 009ce21d  5e                   pop esi
// 009ce21e  5b                   pop ebx
// 009ce21f  83c408               add esp, 8
// 009ce222  c20400               ret 4
// 009ce225  6a01                 push 1
// 009ce227  41                   inc ecx
// 009ce228  6a01                 push 1
// 009ce22a  898e20020000         mov dword ptr [esi + 0x220], ecx
// 009ce230  6a00                 push 0
// 009ce232  8bce                 mov ecx, esi
// 009ce234  e857e7ffff           call 0x9cc990
// 009ce239  53                   push ebx
// 009ce23a  8bce                 mov ecx, esi
// 009ce23c  e8ff58fcff           call 0x993b40
// 009ce241  5f                   pop edi
// 009ce242  5e                   pop esi
// 009ce243  5b                   pop ebx
// 009ce244  83c408               add esp, 8
// 009ce247  c20400               ret 4
// 009ce24a  8b861c020000         mov eax, dword ptr [esi + 0x21c]
// 009ce250  85c0                 test eax, eax
// 009ce252  7514                 jne 0x9ce268
// 009ce254  8d8e40020000         lea ecx, [esi + 0x240]
// 009ce25a  e8c1daffff           call 0x9cbd20
// 009ce25f  5f                   pop edi
// 009ce260  5e                   pop esi
// 009ce261  5b                   pop ebx
// 009ce262  83c408               add esp, 8
// 009ce265  c20400               ret 4
// 009ce268  6a01                 push 1
// 009ce26a  6a00                 push 0
// 009ce26c  48                   dec eax
// 009ce26d  6a00                 push 0
// 009ce26f  8bce                 mov ecx, esi
// 009ce271  89861c020000         mov dword ptr [esi + 0x21c], eax
// 009ce277  e814e7ffff           call 0x9cc990
// 009ce27c  53                   push ebx
// 009ce27d  8bce                 mov ecx, esi
// 009ce27f  e8bc58fcff           call 0x993b40
// 009ce284  5f                   pop edi
// 009ce285  5e                   pop esi
// 009ce286  5b                   pop ebx
// 009ce287  83c408               add esp, 8
// 009ce28a  c20400               ret 4
// 009ce28d  8d44240c             lea eax, [esp + 0xc]
// 009ce291  50                   push eax
// 009ce292  ff158c3ab200         call dword ptr [0xb23a8c]
// 009ce298  8b5620               mov edx, dword ptr [esi + 0x20]
// 009ce29b  8d4c240c             lea ecx, [esp + 0xc]
// 009ce29f  51                   push ecx
// 009ce2a0  52                   push edx
// 009ce2a1  ff15883ab200         call dword ptr [0xb23a88]
// 009ce2a7  83bed801000000       cmp dword ptr [esi + 0x1d8], 0
// 009ce2ae  8b3d483bb200         mov edi, dword ptr [0xb23b48]
// 009ce2b4  753e                 jne 0x9ce2f4
// 009ce2b6  8b442410             mov eax, dword ptr [esp + 0x10]
// 009ce2ba  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 009ce2be  50                   push eax
// 009ce2bf  51                   push ecx
// 009ce2c0  8d96b4010000         lea edx, [esi + 0x1b4]
// 009ce2c6  52                   push edx
// 009ce2c7  ffd7                 call edi
// 009ce2c9  85c0                 test eax, eax
// 009ce2cb  741a                 je 0x9ce2e7
// 009ce2cd  8b06                 mov eax, dword ptr [esi]
// 009ce2cf  8b90ac010000         mov edx, dword ptr [eax + 0x1ac]
// 009ce2d5  6a01                 push 1
// 009ce2d7  6a00                 push 0
// 009ce2d9  8bce                 mov ecx, esi
// 009ce2db  c786d801000001000000 mov dword ptr [esi + 0x1d8], 1
// 009ce2e5  ffd2                 call edx
// 009ce2e7  83bed801000000       cmp dword ptr [esi + 0x1d8], 0
// 009ce2ee  0f8486000000         je 0x9ce37a
// 009ce2f4  8b442410             mov eax, dword ptr [esp + 0x10]
// 009ce2f8  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 009ce2fc  50                   push eax
// 009ce2fd  51                   push ecx
// 009ce2fe  8d96b4010000         lea edx, [esi + 0x1b4]
// 009ce304  52                   push edx
// 009ce305  ffd7                 call edi
// 009ce307  85c0                 test eax, eax
// 009ce309  756f                 jne 0x9ce37a
// 009ce30b  3986e0010000         cmp dword ptr [esi + 0x1e0], eax
// 009ce311  7567                 jne 0x9ce37a
// 009ce313  8986d8010000         mov dword ptr [esi + 0x1d8], eax
// 009ce319  8b06                 mov eax, dword ptr [esi]
// 009ce31b  8b90ac010000         mov edx, dword ptr [eax + 0x1ac]
// 009ce321  6a01                 push 1
// 009ce323  6a00                 push 0
// 009ce325  8bce                 mov ecx, esi
// 009ce327  ffd2                 call edx
// 009ce329  8b86dc010000         mov eax, dword ptr [esi + 0x1dc]
// 009ce32f  50                   push eax
// 009ce330  eb3e                 jmp 0x9ce370
// 009ce332  8b86cc000000         mov eax, dword ptr [esi + 0xcc]
// 009ce338  83f8ff               cmp eax, -1
// 009ce33b  742e                 je 0x9ce36b
// 009ce33d  50                   push eax
// 009ce33e  8bce                 mov ecx, esi
// 009ce340  e8cb57fcff           call 0x993b10
// 009ce345  81b884000000be230000 cmp dword ptr [eax + 0x84], 0x23be
// 009ce34f  751a                 jne 0x9ce36b
// 009ce351  8b96cc000000         mov edx, dword ptr [esi + 0xcc]
// 009ce357  52                   push edx
// 009ce358  8bce                 mov ecx, esi
// 009ce35a  e8b157fcff           call 0x993b10
// 009ce35f  8b10                 mov edx, dword ptr [eax]
// 009ce361  8bc8                 mov ecx, eax
// 009ce363  8b8298000000         mov eax, dword ptr [edx + 0x98]
// 009ce369  ffd0                 call eax
// 009ce36b  688c130000           push 0x138c
// 009ce370  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 009ce373  51                   push ecx
// 009ce374  ff15083cb200         call dword ptr [0xb23c08]
// 009ce37a  53                   push ebx
// 009ce37b  8bce                 mov ecx, esi
// 009ce37d  e8be57fcff           call 0x993b40
// 009ce382  5f                   pop edi
// 009ce383  5e                   pop esi
// 009ce384  5b                   pop ebx
// 009ce385  83c408               add esp, 8
// 009ce388  c20400               ret 4
// 009ce38b  90                   nop 
// 009ce38c  07                   pop es
// 009ce38d  e29c                 loop 0x9ce32b
// 009ce38f  004ae2               add byte ptr [edx - 0x1e], cl
// 009ce392  9c                   pushfd 
// 009ce393  008de29c0032         add byte ptr [ebp + 0x32009ce2], cl
// 009ce399  e39c                 jecxz 0x9ce337
// copied from an identical function in another client (function ?OnTimer@CXTPPopupBar@@IAEXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPPopupBar.cpp