// roc 2009-12 0041f160  unit: CSelectionTreeCtrl  size: 765 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0041f160
//
// 0041f160  64a100000000         mov eax, dword ptr fs:[0]
// 0041f166  6aff                 push -1
// 0041f168  6812699500           push 0x956912
// 0041f16d  50                   push eax
// 0041f16e  64892500000000       mov dword ptr fs:[0], esp
// 0041f175  8b442418             mov eax, dword ptr [esp + 0x18]
// 0041f179  83ec48               sub esp, 0x48
// 0041f17c  80781500             cmp byte ptr [eax + 0x15], 0
// 0041f180  55                   push ebp
// 0041f181  8be9                 mov ebp, ecx
// 0041f183  7459                 je 0x41f1de
// 0041f185  68e4f49900           push 0x99f4e4
// 0041f18a  8d4c240c             lea ecx, [esp + 0xc]
// 0041f18e  ff15f4b69800         call dword ptr [0x98b6f4]
// 0041f194  8d4c2424             lea ecx, [esp + 0x24]
// 0041f198  c744245400000000     mov dword ptr [esp + 0x54], 0
// 0041f1a0  ff1554b79800         call dword ptr [0x98b754]
// 0041f1a6  8d442408             lea eax, [esp + 8]
// 0041f1aa  50                   push eax
// 0041f1ab  8d4c2434             lea ecx, [esp + 0x34]
// 0041f1af  c644245801           mov byte ptr [esp + 0x58], 1
// 0041f1b4  c744242884f49900     mov dword ptr [esp + 0x28], 0x99f484
// 0041f1bc  ff15f0b69800         call dword ptr [0x98b6f0]
// 0041f1c2  688cefa800           push 0xa8ef8c
// 0041f1c7  8d4c2428             lea ecx, [esp + 0x28]
// 0041f1cb  51                   push ecx
// 0041f1cc  c644245c00           mov byte ptr [esp + 0x5c], 0
// 0041f1d1  c744242c9cf49900     mov dword ptr [esp + 0x2c], 0x99f49c
// 0041f1d9  e89a563d00           call 0x7f4878
// 0041f1de  53                   push ebx
// 0041f1df  56                   push esi
// 0041f1e0  8bd8                 mov ebx, eax
// 0041f1e2  57                   push edi
// 0041f1e3  8d4c246c             lea ecx, [esp + 0x6c]
// 0041f1e7  895c2410             mov dword ptr [esp + 0x10], ebx
// 0041f1eb  e800df2800           call 0x6ad0f0
// 0041f1f0  8b0b                 mov ecx, dword ptr [ebx]
// 0041f1f2  80791500             cmp byte ptr [ecx + 0x15], 0
// 0041f1f6  7405                 je 0x41f1fd
// 0041f1f8  8b7b08               mov edi, dword ptr [ebx + 8]
// 0041f1fb  eb1b                 jmp 0x41f218
// 0041f1fd  8b5308               mov edx, dword ptr [ebx + 8]
// 0041f200  807a1500             cmp byte ptr [edx + 0x15], 0
// 0041f204  7404                 je 0x41f20a
// 0041f206  8bf9                 mov edi, ecx
// 0041f208  eb0e                 jmp 0x41f218
// 0041f20a  8b442470             mov eax, dword ptr [esp + 0x70]
// 0041f20e  8b7808               mov edi, dword ptr [eax + 8]
// 0041f211  8d5008               lea edx, [eax + 8]
// 0041f214  3bc3                 cmp eax, ebx
// 0041f216  756b                 jne 0x41f283
// 0041f218  807f1500             cmp byte ptr [edi + 0x15], 0
// 0041f21c  8b7304               mov esi, dword ptr [ebx + 4]
// 0041f21f  7503                 jne 0x41f224
// 0041f221  897704               mov dword ptr [edi + 4], esi
// 0041f224  8b4518               mov eax, dword ptr [ebp + 0x18]
// 0041f227  395804               cmp dword ptr [eax + 4], ebx
// 0041f22a  7505                 jne 0x41f231
// 0041f22c  897804               mov dword ptr [eax + 4], edi
// 0041f22f  eb0b                 jmp 0x41f23c
// 0041f231  391e                 cmp dword ptr [esi], ebx
// 0041f233  7504                 jne 0x41f239
// 0041f235  893e                 mov dword ptr [esi], edi
// 0041f237  eb03                 jmp 0x41f23c
// 0041f239  897e08               mov dword ptr [esi + 8], edi
// 0041f23c  8b5d18               mov ebx, dword ptr [ebp + 0x18]
// 0041f23f  8b03                 mov eax, dword ptr [ebx]
// 0041f241  3b442410             cmp eax, dword ptr [esp + 0x10]
// 0041f245  7515                 jne 0x41f25c
// 0041f247  807f1500             cmp byte ptr [edi + 0x15], 0
// 0041f24b  7404                 je 0x41f251
// 0041f24d  8bc6                 mov eax, esi
// 0041f24f  eb09                 jmp 0x41f25a
// 0041f251  57                   push edi
// 0041f252  e8a98e2200           call 0x648100
// 0041f257  83c404               add esp, 4
// 0041f25a  8903                 mov dword ptr [ebx], eax
// 0041f25c  8b5d18               mov ebx, dword ptr [ebp + 0x18]
// 0041f25f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0041f263  394b08               cmp dword ptr [ebx + 8], ecx
// 0041f266  7577                 jne 0x41f2df
// 0041f268  807f1500             cmp byte ptr [edi + 0x15], 0
// 0041f26c  7407                 je 0x41f275
// 0041f26e  8bc6                 mov eax, esi
// 0041f270  894308               mov dword ptr [ebx + 8], eax
// 0041f273  eb6a                 jmp 0x41f2df
// 0041f275  57                   push edi
// 0041f276  e825331100           call 0x5325a0
// 0041f27b  83c404               add esp, 4
// 0041f27e  894308               mov dword ptr [ebx + 8], eax
// 0041f281  eb5c                 jmp 0x41f2df
// 0041f283  894104               mov dword ptr [ecx + 4], eax
// 0041f286  8b0b                 mov ecx, dword ptr [ebx]
// 0041f288  8908                 mov dword ptr [eax], ecx
// 0041f28a  3b4308               cmp eax, dword ptr [ebx + 8]
// 0041f28d  7504                 jne 0x41f293
// 0041f28f  8bf0                 mov esi, eax
// 0041f291  eb19                 jmp 0x41f2ac
// 0041f293  807f1500             cmp byte ptr [edi + 0x15], 0
// 0041f297  8b7004               mov esi, dword ptr [eax + 4]
// 0041f29a  7503                 jne 0x41f29f
// 0041f29c  897704               mov dword ptr [edi + 4], esi
// 0041f29f  893e                 mov dword ptr [esi], edi
// 0041f2a1  8b4b08               mov ecx, dword ptr [ebx + 8]
// 0041f2a4  890a                 mov dword ptr [edx], ecx
// 0041f2a6  8b5308               mov edx, dword ptr [ebx + 8]
// 0041f2a9  894204               mov dword ptr [edx + 4], eax
// 0041f2ac  8b4d18               mov ecx, dword ptr [ebp + 0x18]
// 0041f2af  395904               cmp dword ptr [ecx + 4], ebx
// 0041f2b2  7505                 jne 0x41f2b9
// 0041f2b4  894104               mov dword ptr [ecx + 4], eax
// 0041f2b7  eb0e                 jmp 0x41f2c7
// 0041f2b9  8b4b04               mov ecx, dword ptr [ebx + 4]
// 0041f2bc  3919                 cmp dword ptr [ecx], ebx
// 0041f2be  7504                 jne 0x41f2c4
// 0041f2c0  8901                 mov dword ptr [ecx], eax
// 0041f2c2  eb03                 jmp 0x41f2c7
// 0041f2c4  894108               mov dword ptr [ecx + 8], eax
// 0041f2c7  8b4b04               mov ecx, dword ptr [ebx + 4]
// 0041f2ca  894804               mov dword ptr [eax + 4], ecx
// 0041f2cd  8d4b14               lea ecx, [ebx + 0x14]
// 0041f2d0  83c014               add eax, 0x14
// 0041f2d3  3bc1                 cmp eax, ecx
// 0041f2d5  7408                 je 0x41f2df
// 0041f2d7  8a19                 mov bl, byte ptr [ecx]
// 0041f2d9  8a10                 mov dl, byte ptr [eax]
// 0041f2db  8818                 mov byte ptr [eax], bl
// 0041f2dd  8811                 mov byte ptr [ecx], dl
// 0041f2df  8b542410             mov edx, dword ptr [esp + 0x10]
// 0041f2e3  b301                 mov bl, 1
// 0041f2e5  385a14               cmp byte ptr [edx + 0x14], bl
// 0041f2e8  0f85fd000000         jne 0x41f3eb
// 0041f2ee  8b4518               mov eax, dword ptr [ebp + 0x18]
// 0041f2f1  3b7804               cmp edi, dword ptr [eax + 4]
// 0041f2f4  0f84ee000000         je 0x41f3e8
// 0041f2fa  8d9b00000000         lea ebx, [ebx]
// 0041f300  385f14               cmp byte ptr [edi + 0x14], bl
// 0041f303  0f85df000000         jne 0x41f3e8
// 0041f309  8b06                 mov eax, dword ptr [esi]
// 0041f30b  3bf8                 cmp edi, eax
// 0041f30d  7565                 jne 0x41f374
// 0041f30f  8b4608               mov eax, dword ptr [esi + 8]
// 0041f312  80781400             cmp byte ptr [eax + 0x14], 0
// 0041f316  7512                 jne 0x41f32a
// 0041f318  885814               mov byte ptr [eax + 0x14], bl
// 0041f31b  56                   push esi
// 0041f31c  8bcd                 mov ecx, ebp
// 0041f31e  c6461400             mov byte ptr [esi + 0x14], 0
// 0041f322  e8a96e3c00           call 0x7e61d0
// 0041f327  8b4608               mov eax, dword ptr [esi + 8]
// 0041f32a  80781500             cmp byte ptr [eax + 0x15], 0
// 0041f32e  7574                 jne 0x41f3a4
// 0041f330  8b08                 mov ecx, dword ptr [eax]
// 0041f332  385914               cmp byte ptr [ecx + 0x14], bl
// 0041f335  7508                 jne 0x41f33f
// 0041f337  8b5008               mov edx, dword ptr [eax + 8]
// 0041f33a  385a14               cmp byte ptr [edx + 0x14], bl
// 0041f33d  7461                 je 0x41f3a0
// 0041f33f  8b4808               mov ecx, dword ptr [eax + 8]
// 0041f342  385914               cmp byte ptr [ecx + 0x14], bl
// 0041f345  7514                 jne 0x41f35b
// 0041f347  8b10                 mov edx, dword ptr [eax]
// 0041f349  885a14               mov byte ptr [edx + 0x14], bl
// 0041f34c  50                   push eax
// 0041f34d  8bcd                 mov ecx, ebp
// 0041f34f  c6401400             mov byte ptr [eax + 0x14], 0
// 0041f353  e8185a0300           call 0x454d70
// 0041f358  8b4608               mov eax, dword ptr [esi + 8]
// 0041f35b  8a4e14               mov cl, byte ptr [esi + 0x14]
// 0041f35e  884814               mov byte ptr [eax + 0x14], cl
// 0041f361  885e14               mov byte ptr [esi + 0x14], bl
// 0041f364  8b5008               mov edx, dword ptr [eax + 8]
// 0041f367  56                   push esi
// 0041f368  8bcd                 mov ecx, ebp
// 0041f36a  885a14               mov byte ptr [edx + 0x14], bl
// 0041f36d  e85e6e3c00           call 0x7e61d0
// 0041f372  eb74                 jmp 0x41f3e8
// 0041f374  80781400             cmp byte ptr [eax + 0x14], 0
// 0041f378  7511                 jne 0x41f38b
// 0041f37a  885814               mov byte ptr [eax + 0x14], bl
// 0041f37d  56                   push esi
// 0041f37e  8bcd                 mov ecx, ebp
// 0041f380  c6461400             mov byte ptr [esi + 0x14], 0
// 0041f384  e8e7590300           call 0x454d70
// 0041f389  8b06                 mov eax, dword ptr [esi]
// 0041f38b  80781500             cmp byte ptr [eax + 0x15], 0
// 0041f38f  7513                 jne 0x41f3a4
// 0041f391  8b4808               mov ecx, dword ptr [eax + 8]
// 0041f394  385914               cmp byte ptr [ecx + 0x14], bl
// 0041f397  751e                 jne 0x41f3b7
// 0041f399  8b10                 mov edx, dword ptr [eax]
// 0041f39b  385a14               cmp byte ptr [edx + 0x14], bl
// 0041f39e  7517                 jne 0x41f3b7
// 0041f3a0  c6401400             mov byte ptr [eax + 0x14], 0
// 0041f3a4  8b4518               mov eax, dword ptr [ebp + 0x18]
// 0041f3a7  8bfe                 mov edi, esi
// 0041f3a9  8b7604               mov esi, dword ptr [esi + 4]
// 0041f3ac  3b7804               cmp edi, dword ptr [eax + 4]
// 0041f3af  0f854bffffff         jne 0x41f300
// 0041f3b5  eb31                 jmp 0x41f3e8
// 0041f3b7  8b08                 mov ecx, dword ptr [eax]
// 0041f3b9  385914               cmp byte ptr [ecx + 0x14], bl
// 0041f3bc  7514                 jne 0x41f3d2
// 0041f3be  8b5008               mov edx, dword ptr [eax + 8]
// 0041f3c1  885a14               mov byte ptr [edx + 0x14], bl
// 0041f3c4  50                   push eax
// 0041f3c5  8bcd                 mov ecx, ebp
// 0041f3c7  c6401400             mov byte ptr [eax + 0x14], 0
// 0041f3cb  e8006e3c00           call 0x7e61d0
// 0041f3d0  8b06                 mov eax, dword ptr [esi]
// 0041f3d2  8a4e14               mov cl, byte ptr [esi + 0x14]
// 0041f3d5  884814               mov byte ptr [eax + 0x14], cl
// 0041f3d8  885e14               mov byte ptr [esi + 0x14], bl
// 0041f3db  8b10                 mov edx, dword ptr [eax]
// 0041f3dd  56                   push esi
// 0041f3de  8bcd                 mov ecx, ebp
// 0041f3e0  885a14               mov byte ptr [edx + 0x14], bl
// 0041f3e3  e888590300           call 0x454d70
// 0041f3e8  885f14               mov byte ptr [edi + 0x14], bl
// 0041f3eb  8b442410             mov eax, dword ptr [esp + 0x10]
// 0041f3ef  8b7010               mov esi, dword ptr [eax + 0x10]
// 0041f3f2  85f6                 test esi, esi
// 0041f3f4  742a                 je 0x41f420
// 0041f3f6  8d4e04               lea ecx, [esi + 4]
// 0041f3f9  83caff               or edx, 0xffffffff
// 0041f3fc  f00fc111             lock xadd dword ptr [ecx], edx
// 0041f400  751e                 jne 0x41f420
// 0041f402  8b06                 mov eax, dword ptr [esi]
// 0041f404  8b5004               mov edx, dword ptr [eax + 4]
// 0041f407  8bce                 mov ecx, esi
// 0041f409  ffd2                 call edx
// 0041f40b  8d4608               lea eax, [esi + 8]
// 0041f40e  83c9ff               or ecx, 0xffffffff
// 0041f411  f00fc108             lock xadd dword ptr [eax], ecx
// 0041f415  7509                 jne 0x41f420
// 0041f417  8b16                 mov edx, dword ptr [esi]
// 0041f419  8b4208               mov eax, dword ptr [edx + 8]
// 0041f41c  8bce                 mov ecx, esi
// 0041f41e  ffd0                 call eax
// 0041f420  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0041f424  51                   push ecx
// 0041f425  e830443d00           call 0x7f385a
// 0041f42a  8b451c               mov eax, dword ptr [ebp + 0x1c]
// 0041f42d  83c404               add esp, 4
// 0041f430  5f                   pop edi
// 0041f431  5e                   pop esi
// 0041f432  5b                   pop ebx
// 0041f433  85c0                 test eax, eax
// 0041f435  7604                 jbe 0x41f43b
// 0041f437  48                   dec eax
// 0041f438  89451c               mov dword ptr [ebp + 0x1c], eax
// 0041f43b  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 0041f43f  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 0041f443  8b5500               mov edx, dword ptr [ebp]
// 0041f446  894804               mov dword ptr [eax + 4], ecx
// 0041f449  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0041f44d  8910                 mov dword ptr [eax], edx
// 0041f44f  5d                   pop ebp
// 0041f450  64890d00000000       mov dword ptr fs:[0], ecx
// 0041f457  83c454               add esp, 0x54
// 0041f45a  c20c00               ret 0xc
// copied from an identical function in another client (function ?erase@?$_Tree@V?$_Tset_traits@V?$shared_ptr@UT@@@boost@@U?$less@V?$shared_ptr@UT@@@boost@@@std@@V?$allocator@V?$shared_ptr@UT@@@boost@@@4@$0A@@std@@@std@@QAE?AViterator@12@Vconst_iterator@12@@Z)

// roc-cl: 30729
// roc-lang: cpp
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1-dll set_sp.cpp