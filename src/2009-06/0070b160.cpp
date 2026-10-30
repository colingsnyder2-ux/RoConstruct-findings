// roc 2009-06 0070b160  unit: RBX::VCEvent::?$sp_counted_impl_p  size: 765 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0070b160
//
// 0070b160  64a100000000         mov eax, dword ptr fs:[0]
// 0070b166  6aff                 push -1
// 0070b168  68b2db8500           push 0x85dbb2
// 0070b16d  50                   push eax
// 0070b16e  64892500000000       mov dword ptr fs:[0], esp
// 0070b175  8b442418             mov eax, dword ptr [esp + 0x18]
// 0070b179  83ec48               sub esp, 0x48
// 0070b17c  80781500             cmp byte ptr [eax + 0x15], 0
// 0070b180  55                   push ebp
// 0070b181  8be9                 mov ebp, ecx
// 0070b183  7459                 je 0x70b1de
// 0070b185  68a4c98a00           push 0x8ac9a4
// 0070b18a  8d4c240c             lea ecx, [esp + 0xc]
// 0070b18e  ff15b4e48900         call dword ptr [0x89e4b4]
// 0070b194  8d4c2424             lea ecx, [esp + 0x24]
// 0070b198  c744245400000000     mov dword ptr [esp + 0x54], 0
// 0070b1a0  ff15b8e98900         call dword ptr [0x89e9b8]
// 0070b1a6  8d442408             lea eax, [esp + 8]
// 0070b1aa  50                   push eax
// 0070b1ab  8d4c2434             lea ecx, [esp + 0x34]
// 0070b1af  c644245801           mov byte ptr [esp + 0x58], 1
// 0070b1b4  c744242844c98a00     mov dword ptr [esp + 0x28], 0x8ac944
// 0070b1bc  ff15b8e48900         call dword ptr [0x89e4b8]
// 0070b1c2  68dc919700           push 0x9791dc
// 0070b1c7  8d4c2428             lea ecx, [esp + 0x28]
// 0070b1cb  51                   push ecx
// 0070b1cc  c644245c00           mov byte ptr [esp + 0x5c], 0
// 0070b1d1  c744242c5cc98a00     mov dword ptr [esp + 0x2c], 0x8ac95c
// 0070b1d9  e86ce80000           call 0x719a4a
// 0070b1de  53                   push ebx
// 0070b1df  56                   push esi
// 0070b1e0  8bd8                 mov ebx, eax
// 0070b1e2  57                   push edi
// 0070b1e3  8d4c246c             lea ecx, [esp + 0x6c]
// 0070b1e7  895c2410             mov dword ptr [esp + 0x10], ebx
// 0070b1eb  e880dfedff           call 0x5e9170
// 0070b1f0  8b0b                 mov ecx, dword ptr [ebx]
// 0070b1f2  80791500             cmp byte ptr [ecx + 0x15], 0
// 0070b1f6  7405                 je 0x70b1fd
// 0070b1f8  8b7b08               mov edi, dword ptr [ebx + 8]
// 0070b1fb  eb1b                 jmp 0x70b218
// 0070b1fd  8b5308               mov edx, dword ptr [ebx + 8]
// 0070b200  807a1500             cmp byte ptr [edx + 0x15], 0
// 0070b204  7404                 je 0x70b20a
// 0070b206  8bf9                 mov edi, ecx
// 0070b208  eb0e                 jmp 0x70b218
// 0070b20a  8b442470             mov eax, dword ptr [esp + 0x70]
// 0070b20e  8b7808               mov edi, dword ptr [eax + 8]
// 0070b211  8d5008               lea edx, [eax + 8]
// 0070b214  3bc3                 cmp eax, ebx
// 0070b216  756b                 jne 0x70b283
// 0070b218  807f1500             cmp byte ptr [edi + 0x15], 0
// 0070b21c  8b7304               mov esi, dword ptr [ebx + 4]
// 0070b21f  7503                 jne 0x70b224
// 0070b221  897704               mov dword ptr [edi + 4], esi
// 0070b224  8b4518               mov eax, dword ptr [ebp + 0x18]
// 0070b227  395804               cmp dword ptr [eax + 4], ebx
// 0070b22a  7505                 jne 0x70b231
// 0070b22c  897804               mov dword ptr [eax + 4], edi
// 0070b22f  eb0b                 jmp 0x70b23c
// 0070b231  391e                 cmp dword ptr [esi], ebx
// 0070b233  7504                 jne 0x70b239
// 0070b235  893e                 mov dword ptr [esi], edi
// 0070b237  eb03                 jmp 0x70b23c
// 0070b239  897e08               mov dword ptr [esi + 8], edi
// 0070b23c  8b5d18               mov ebx, dword ptr [ebp + 0x18]
// 0070b23f  8b03                 mov eax, dword ptr [ebx]
// 0070b241  3b442410             cmp eax, dword ptr [esp + 0x10]
// 0070b245  7515                 jne 0x70b25c
// 0070b247  807f1500             cmp byte ptr [edi + 0x15], 0
// 0070b24b  7404                 je 0x70b251
// 0070b24d  8bc6                 mov eax, esi
// 0070b24f  eb09                 jmp 0x70b25a
// 0070b251  57                   push edi
// 0070b252  e8e921d4ff           call 0x44d440
// 0070b257  83c404               add esp, 4
// 0070b25a  8903                 mov dword ptr [ebx], eax
// 0070b25c  8b5d18               mov ebx, dword ptr [ebp + 0x18]
// 0070b25f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0070b263  394b08               cmp dword ptr [ebx + 8], ecx
// 0070b266  7577                 jne 0x70b2df
// 0070b268  807f1500             cmp byte ptr [edi + 0x15], 0
// 0070b26c  7407                 je 0x70b275
// 0070b26e  8bc6                 mov eax, esi
// 0070b270  894308               mov dword ptr [ebx + 8], eax
// 0070b273  eb6a                 jmp 0x70b2df
// 0070b275  57                   push edi
// 0070b276  e87542dcff           call 0x4cf4f0
// 0070b27b  83c404               add esp, 4
// 0070b27e  894308               mov dword ptr [ebx + 8], eax
// 0070b281  eb5c                 jmp 0x70b2df
// 0070b283  894104               mov dword ptr [ecx + 4], eax
// 0070b286  8b0b                 mov ecx, dword ptr [ebx]
// 0070b288  8908                 mov dword ptr [eax], ecx
// 0070b28a  3b4308               cmp eax, dword ptr [ebx + 8]
// 0070b28d  7504                 jne 0x70b293
// 0070b28f  8bf0                 mov esi, eax
// 0070b291  eb19                 jmp 0x70b2ac
// 0070b293  807f1500             cmp byte ptr [edi + 0x15], 0
// 0070b297  8b7004               mov esi, dword ptr [eax + 4]
// 0070b29a  7503                 jne 0x70b29f
// 0070b29c  897704               mov dword ptr [edi + 4], esi
// 0070b29f  893e                 mov dword ptr [esi], edi
// 0070b2a1  8b4b08               mov ecx, dword ptr [ebx + 8]
// 0070b2a4  890a                 mov dword ptr [edx], ecx
// 0070b2a6  8b5308               mov edx, dword ptr [ebx + 8]
// 0070b2a9  894204               mov dword ptr [edx + 4], eax
// 0070b2ac  8b4d18               mov ecx, dword ptr [ebp + 0x18]
// 0070b2af  395904               cmp dword ptr [ecx + 4], ebx
// 0070b2b2  7505                 jne 0x70b2b9
// 0070b2b4  894104               mov dword ptr [ecx + 4], eax
// 0070b2b7  eb0e                 jmp 0x70b2c7
// 0070b2b9  8b4b04               mov ecx, dword ptr [ebx + 4]
// 0070b2bc  3919                 cmp dword ptr [ecx], ebx
// 0070b2be  7504                 jne 0x70b2c4
// 0070b2c0  8901                 mov dword ptr [ecx], eax
// 0070b2c2  eb03                 jmp 0x70b2c7
// 0070b2c4  894108               mov dword ptr [ecx + 8], eax
// 0070b2c7  8b4b04               mov ecx, dword ptr [ebx + 4]
// 0070b2ca  894804               mov dword ptr [eax + 4], ecx
// 0070b2cd  8d4b14               lea ecx, [ebx + 0x14]
// 0070b2d0  83c014               add eax, 0x14
// 0070b2d3  3bc1                 cmp eax, ecx
// 0070b2d5  7408                 je 0x70b2df
// 0070b2d7  8a19                 mov bl, byte ptr [ecx]
// 0070b2d9  8a10                 mov dl, byte ptr [eax]
// 0070b2db  8818                 mov byte ptr [eax], bl
// 0070b2dd  8811                 mov byte ptr [ecx], dl
// 0070b2df  8b542410             mov edx, dword ptr [esp + 0x10]
// 0070b2e3  b301                 mov bl, 1
// 0070b2e5  385a14               cmp byte ptr [edx + 0x14], bl
// 0070b2e8  0f85fd000000         jne 0x70b3eb
// 0070b2ee  8b4518               mov eax, dword ptr [ebp + 0x18]
// 0070b2f1  3b7804               cmp edi, dword ptr [eax + 4]
// 0070b2f4  0f84ee000000         je 0x70b3e8
// 0070b2fa  8d9b00000000         lea ebx, [ebx]
// 0070b300  385f14               cmp byte ptr [edi + 0x14], bl
// 0070b303  0f85df000000         jne 0x70b3e8
// 0070b309  8b06                 mov eax, dword ptr [esi]
// 0070b30b  3bf8                 cmp edi, eax
// 0070b30d  7565                 jne 0x70b374
// 0070b30f  8b4608               mov eax, dword ptr [esi + 8]
// 0070b312  80781400             cmp byte ptr [eax + 0x14], 0
// 0070b316  7512                 jne 0x70b32a
// 0070b318  885814               mov byte ptr [eax + 0x14], bl
// 0070b31b  56                   push esi
// 0070b31c  8bcd                 mov ecx, ebp
// 0070b31e  c6461400             mov byte ptr [esi + 0x14], 0
// 0070b322  e86915ffff           call 0x6fc890
// 0070b327  8b4608               mov eax, dword ptr [esi + 8]
// 0070b32a  80781500             cmp byte ptr [eax + 0x15], 0
// 0070b32e  7574                 jne 0x70b3a4
// 0070b330  8b08                 mov ecx, dword ptr [eax]
// 0070b332  385914               cmp byte ptr [ecx + 0x14], bl
// 0070b335  7508                 jne 0x70b33f
// 0070b337  8b5008               mov edx, dword ptr [eax + 8]
// 0070b33a  385a14               cmp byte ptr [edx + 0x14], bl
// 0070b33d  7461                 je 0x70b3a0
// 0070b33f  8b4808               mov ecx, dword ptr [eax + 8]
// 0070b342  385914               cmp byte ptr [ecx + 0x14], bl
// 0070b345  7514                 jne 0x70b35b
// 0070b347  8b10                 mov edx, dword ptr [eax]
// 0070b349  885a14               mov byte ptr [edx + 0x14], bl
// 0070b34c  50                   push eax
// 0070b34d  8bcd                 mov ecx, ebp
// 0070b34f  c6401400             mov byte ptr [eax + 0x14], 0
// 0070b353  e8b8ddedff           call 0x5e9110
// 0070b358  8b4608               mov eax, dword ptr [esi + 8]
// 0070b35b  8a4e14               mov cl, byte ptr [esi + 0x14]
// 0070b35e  884814               mov byte ptr [eax + 0x14], cl
// 0070b361  885e14               mov byte ptr [esi + 0x14], bl
// 0070b364  8b5008               mov edx, dword ptr [eax + 8]
// 0070b367  56                   push esi
// 0070b368  8bcd                 mov ecx, ebp
// 0070b36a  885a14               mov byte ptr [edx + 0x14], bl
// 0070b36d  e81e15ffff           call 0x6fc890
// 0070b372  eb74                 jmp 0x70b3e8
// 0070b374  80781400             cmp byte ptr [eax + 0x14], 0
// 0070b378  7511                 jne 0x70b38b
// 0070b37a  885814               mov byte ptr [eax + 0x14], bl
// 0070b37d  56                   push esi
// 0070b37e  8bcd                 mov ecx, ebp
// 0070b380  c6461400             mov byte ptr [esi + 0x14], 0
// 0070b384  e887ddedff           call 0x5e9110
// 0070b389  8b06                 mov eax, dword ptr [esi]
// 0070b38b  80781500             cmp byte ptr [eax + 0x15], 0
// 0070b38f  7513                 jne 0x70b3a4
// 0070b391  8b4808               mov ecx, dword ptr [eax + 8]
// 0070b394  385914               cmp byte ptr [ecx + 0x14], bl
// 0070b397  751e                 jne 0x70b3b7
// 0070b399  8b10                 mov edx, dword ptr [eax]
// 0070b39b  385a14               cmp byte ptr [edx + 0x14], bl
// 0070b39e  7517                 jne 0x70b3b7
// 0070b3a0  c6401400             mov byte ptr [eax + 0x14], 0
// 0070b3a4  8b4518               mov eax, dword ptr [ebp + 0x18]
// 0070b3a7  8bfe                 mov edi, esi
// 0070b3a9  8b7604               mov esi, dword ptr [esi + 4]
// 0070b3ac  3b7804               cmp edi, dword ptr [eax + 4]
// 0070b3af  0f854bffffff         jne 0x70b300
// 0070b3b5  eb31                 jmp 0x70b3e8
// 0070b3b7  8b08                 mov ecx, dword ptr [eax]
// 0070b3b9  385914               cmp byte ptr [ecx + 0x14], bl
// 0070b3bc  7514                 jne 0x70b3d2
// 0070b3be  8b5008               mov edx, dword ptr [eax + 8]
// 0070b3c1  885a14               mov byte ptr [edx + 0x14], bl
// 0070b3c4  50                   push eax
// 0070b3c5  8bcd                 mov ecx, ebp
// 0070b3c7  c6401400             mov byte ptr [eax + 0x14], 0
// 0070b3cb  e8c014ffff           call 0x6fc890
// 0070b3d0  8b06                 mov eax, dword ptr [esi]
// 0070b3d2  8a4e14               mov cl, byte ptr [esi + 0x14]
// 0070b3d5  884814               mov byte ptr [eax + 0x14], cl
// 0070b3d8  885e14               mov byte ptr [esi + 0x14], bl
// 0070b3db  8b10                 mov edx, dword ptr [eax]
// 0070b3dd  56                   push esi
// 0070b3de  8bcd                 mov ecx, ebp
// 0070b3e0  885a14               mov byte ptr [edx + 0x14], bl
// 0070b3e3  e828ddedff           call 0x5e9110
// 0070b3e8  885f14               mov byte ptr [edi + 0x14], bl
// 0070b3eb  8b442410             mov eax, dword ptr [esp + 0x10]
// 0070b3ef  8b7010               mov esi, dword ptr [eax + 0x10]
// 0070b3f2  85f6                 test esi, esi
// 0070b3f4  742a                 je 0x70b420
// 0070b3f6  8d4e04               lea ecx, [esi + 4]
// 0070b3f9  83caff               or edx, 0xffffffff
// 0070b3fc  f00fc111             lock xadd dword ptr [ecx], edx
// 0070b400  751e                 jne 0x70b420
// 0070b402  8b06                 mov eax, dword ptr [esi]
// 0070b404  8b5004               mov edx, dword ptr [eax + 4]
// 0070b407  8bce                 mov ecx, esi
// 0070b409  ffd2                 call edx
// 0070b40b  8d4608               lea eax, [esi + 8]
// 0070b40e  83c9ff               or ecx, 0xffffffff
// 0070b411  f00fc108             lock xadd dword ptr [eax], ecx
// 0070b415  7509                 jne 0x70b420
// 0070b417  8b16                 mov edx, dword ptr [esi]
// 0070b419  8b4208               mov eax, dword ptr [edx + 8]
// 0070b41c  8bce                 mov ecx, esi
// 0070b41e  ffd0                 call eax
// 0070b420  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0070b424  51                   push ecx
// 0070b425  e808d60000           call 0x718a32
// 0070b42a  8b451c               mov eax, dword ptr [ebp + 0x1c]
// 0070b42d  83c404               add esp, 4
// 0070b430  5f                   pop edi
// 0070b431  5e                   pop esi
// 0070b432  5b                   pop ebx
// 0070b433  85c0                 test eax, eax
// 0070b435  7604                 jbe 0x70b43b
// 0070b437  48                   dec eax
// 0070b438  89451c               mov dword ptr [ebp + 0x1c], eax
// 0070b43b  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 0070b43f  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 0070b443  8b5500               mov edx, dword ptr [ebp]
// 0070b446  894804               mov dword ptr [eax + 4], ecx
// 0070b449  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0070b44d  8910                 mov dword ptr [eax], edx
// 0070b44f  5d                   pop ebp
// 0070b450  64890d00000000       mov dword ptr fs:[0], ecx
// 0070b457  83c454               add esp, 0x54
// 0070b45a  c20c00               ret 0xc
// copied from an identical function in another client (function ?erase@?$_Tree@V?$_Tset_traits@V?$shared_ptr@UT@@@boost@@U?$less@V?$shared_ptr@UT@@@boost@@@std@@V?$allocator@V?$shared_ptr@UT@@@boost@@@4@$0A@@std@@@std@@QAE?AViterator@12@Vconst_iterator@12@@Z)

// roc-cl: 30729
// roc-lang: cpp
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1-dll set_sp.cpp