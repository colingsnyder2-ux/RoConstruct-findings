// roc 2010-06 0041ef80  unit: CSelectionTreeCtrl  size: 765 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0041ef80
//
// 0041ef80  64a100000000         mov eax, dword ptr fs:[0]
// 0041ef86  6aff                 push -1
// 0041ef88  68e22f9a00           push 0x9a2fe2
// 0041ef8d  50                   push eax
// 0041ef8e  64892500000000       mov dword ptr fs:[0], esp
// 0041ef95  8b442418             mov eax, dword ptr [esp + 0x18]
// 0041ef99  83ec48               sub esp, 0x48
// 0041ef9c  80781500             cmp byte ptr [eax + 0x15], 0
// 0041efa0  55                   push ebp
// 0041efa1  8be9                 mov ebp, ecx
// 0041efa3  7459                 je 0x41effe
// 0041efa5  688c00a000           push 0xa0008c
// 0041efaa  8d4c240c             lea ecx, [esp + 0xc]
// 0041efae  ff1510a49e00         call dword ptr [0x9ea410]
// 0041efb4  8d4c2424             lea ecx, [esp + 0x24]
// 0041efb8  c744245400000000     mov dword ptr [esp + 0x54], 0
// 0041efc0  ff1518a99e00         call dword ptr [0x9ea918]
// 0041efc6  8d442408             lea eax, [esp + 8]
// 0041efca  50                   push eax
// 0041efcb  8d4c2434             lea ecx, [esp + 0x34]
// 0041efcf  c644245801           mov byte ptr [esp + 0x58], 1
// 0041efd4  c74424282c00a000     mov dword ptr [esp + 0x28], 0xa0002c
// 0041efdc  ff150ca49e00         call dword ptr [0x9ea40c]
// 0041efe2  68081bb000           push 0xb01b08
// 0041efe7  8d4c2428             lea ecx, [esp + 0x28]
// 0041efeb  51                   push ecx
// 0041efec  c644245c00           mov byte ptr [esp + 0x5c], 0
// 0041eff1  c744242c4400a000     mov dword ptr [esp + 0x2c], 0xa00044
// 0041eff9  e8b4993800           call 0x7a89b2
// 0041effe  53                   push ebx
// 0041efff  56                   push esi
// 0041f000  8bd8                 mov ebx, eax
// 0041f002  57                   push edi
// 0041f003  8d4c246c             lea ecx, [esp + 0x6c]
// 0041f007  895c2410             mov dword ptr [esp + 0x10], ebx
// 0041f00b  e8d0892c00           call 0x6e79e0
// 0041f010  8b0b                 mov ecx, dword ptr [ebx]
// 0041f012  80791500             cmp byte ptr [ecx + 0x15], 0
// 0041f016  7405                 je 0x41f01d
// 0041f018  8b7b08               mov edi, dword ptr [ebx + 8]
// 0041f01b  eb1b                 jmp 0x41f038
// 0041f01d  8b5308               mov edx, dword ptr [ebx + 8]
// 0041f020  807a1500             cmp byte ptr [edx + 0x15], 0
// 0041f024  7404                 je 0x41f02a
// 0041f026  8bf9                 mov edi, ecx
// 0041f028  eb0e                 jmp 0x41f038
// 0041f02a  8b442470             mov eax, dword ptr [esp + 0x70]
// 0041f02e  8b7808               mov edi, dword ptr [eax + 8]
// 0041f031  8d5008               lea edx, [eax + 8]
// 0041f034  3bc3                 cmp eax, ebx
// 0041f036  756b                 jne 0x41f0a3
// 0041f038  807f1500             cmp byte ptr [edi + 0x15], 0
// 0041f03c  8b7304               mov esi, dword ptr [ebx + 4]
// 0041f03f  7503                 jne 0x41f044
// 0041f041  897704               mov dword ptr [edi + 4], esi
// 0041f044  8b4518               mov eax, dword ptr [ebp + 0x18]
// 0041f047  395804               cmp dword ptr [eax + 4], ebx
// 0041f04a  7505                 jne 0x41f051
// 0041f04c  897804               mov dword ptr [eax + 4], edi
// 0041f04f  eb0b                 jmp 0x41f05c
// 0041f051  391e                 cmp dword ptr [esi], ebx
// 0041f053  7504                 jne 0x41f059
// 0041f055  893e                 mov dword ptr [esi], edi
// 0041f057  eb03                 jmp 0x41f05c
// 0041f059  897e08               mov dword ptr [esi + 8], edi
// 0041f05c  8b5d18               mov ebx, dword ptr [ebp + 0x18]
// 0041f05f  8b03                 mov eax, dword ptr [ebx]
// 0041f061  3b442410             cmp eax, dword ptr [esp + 0x10]
// 0041f065  7515                 jne 0x41f07c
// 0041f067  807f1500             cmp byte ptr [edi + 0x15], 0
// 0041f06b  7404                 je 0x41f071
// 0041f06d  8bc6                 mov eax, esi
// 0041f06f  eb09                 jmp 0x41f07a
// 0041f071  57                   push edi
// 0041f072  e8c9180c00           call 0x4e0940
// 0041f077  83c404               add esp, 4
// 0041f07a  8903                 mov dword ptr [ebx], eax
// 0041f07c  8b5d18               mov ebx, dword ptr [ebp + 0x18]
// 0041f07f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0041f083  394b08               cmp dword ptr [ebx + 8], ecx
// 0041f086  7577                 jne 0x41f0ff
// 0041f088  807f1500             cmp byte ptr [edi + 0x15], 0
// 0041f08c  7407                 je 0x41f095
// 0041f08e  8bc6                 mov eax, esi
// 0041f090  894308               mov dword ptr [ebx + 8], eax
// 0041f093  eb6a                 jmp 0x41f0ff
// 0041f095  57                   push edi
// 0041f096  e825b81800           call 0x5aa8c0
// 0041f09b  83c404               add esp, 4
// 0041f09e  894308               mov dword ptr [ebx + 8], eax
// 0041f0a1  eb5c                 jmp 0x41f0ff
// 0041f0a3  894104               mov dword ptr [ecx + 4], eax
// 0041f0a6  8b0b                 mov ecx, dword ptr [ebx]
// 0041f0a8  8908                 mov dword ptr [eax], ecx
// 0041f0aa  3b4308               cmp eax, dword ptr [ebx + 8]
// 0041f0ad  7504                 jne 0x41f0b3
// 0041f0af  8bf0                 mov esi, eax
// 0041f0b1  eb19                 jmp 0x41f0cc
// 0041f0b3  807f1500             cmp byte ptr [edi + 0x15], 0
// 0041f0b7  8b7004               mov esi, dword ptr [eax + 4]
// 0041f0ba  7503                 jne 0x41f0bf
// 0041f0bc  897704               mov dword ptr [edi + 4], esi
// 0041f0bf  893e                 mov dword ptr [esi], edi
// 0041f0c1  8b4b08               mov ecx, dword ptr [ebx + 8]
// 0041f0c4  890a                 mov dword ptr [edx], ecx
// 0041f0c6  8b5308               mov edx, dword ptr [ebx + 8]
// 0041f0c9  894204               mov dword ptr [edx + 4], eax
// 0041f0cc  8b4d18               mov ecx, dword ptr [ebp + 0x18]
// 0041f0cf  395904               cmp dword ptr [ecx + 4], ebx
// 0041f0d2  7505                 jne 0x41f0d9
// 0041f0d4  894104               mov dword ptr [ecx + 4], eax
// 0041f0d7  eb0e                 jmp 0x41f0e7
// 0041f0d9  8b4b04               mov ecx, dword ptr [ebx + 4]
// 0041f0dc  3919                 cmp dword ptr [ecx], ebx
// 0041f0de  7504                 jne 0x41f0e4
// 0041f0e0  8901                 mov dword ptr [ecx], eax
// 0041f0e2  eb03                 jmp 0x41f0e7
// 0041f0e4  894108               mov dword ptr [ecx + 8], eax
// 0041f0e7  8b4b04               mov ecx, dword ptr [ebx + 4]
// 0041f0ea  894804               mov dword ptr [eax + 4], ecx
// 0041f0ed  8d4b14               lea ecx, [ebx + 0x14]
// 0041f0f0  83c014               add eax, 0x14
// 0041f0f3  3bc1                 cmp eax, ecx
// 0041f0f5  7408                 je 0x41f0ff
// 0041f0f7  8a19                 mov bl, byte ptr [ecx]
// 0041f0f9  8a10                 mov dl, byte ptr [eax]
// 0041f0fb  8818                 mov byte ptr [eax], bl
// 0041f0fd  8811                 mov byte ptr [ecx], dl
// 0041f0ff  8b542410             mov edx, dword ptr [esp + 0x10]
// 0041f103  b301                 mov bl, 1
// 0041f105  385a14               cmp byte ptr [edx + 0x14], bl
// 0041f108  0f85fd000000         jne 0x41f20b
// 0041f10e  8b4518               mov eax, dword ptr [ebp + 0x18]
// 0041f111  3b7804               cmp edi, dword ptr [eax + 4]
// 0041f114  0f84ee000000         je 0x41f208
// 0041f11a  8d9b00000000         lea ebx, [ebx]
// 0041f120  385f14               cmp byte ptr [edi + 0x14], bl
// 0041f123  0f85df000000         jne 0x41f208
// 0041f129  8b06                 mov eax, dword ptr [esi]
// 0041f12b  3bf8                 cmp edi, eax
// 0041f12d  7565                 jne 0x41f194
// 0041f12f  8b4608               mov eax, dword ptr [esi + 8]
// 0041f132  80781400             cmp byte ptr [eax + 0x14], 0
// 0041f136  7512                 jne 0x41f14a
// 0041f138  885814               mov byte ptr [eax + 0x14], bl
// 0041f13b  56                   push esi
// 0041f13c  8bcd                 mov ecx, ebp
// 0041f13e  c6461400             mov byte ptr [esi + 0x14], 0
// 0041f142  e8d9d11800           call 0x5ac320
// 0041f147  8b4608               mov eax, dword ptr [esi + 8]
// 0041f14a  80781500             cmp byte ptr [eax + 0x15], 0
// 0041f14e  7574                 jne 0x41f1c4
// 0041f150  8b08                 mov ecx, dword ptr [eax]
// 0041f152  385914               cmp byte ptr [ecx + 0x14], bl
// 0041f155  7508                 jne 0x41f15f
// 0041f157  8b5008               mov edx, dword ptr [eax + 8]
// 0041f15a  385a14               cmp byte ptr [edx + 0x14], bl
// 0041f15d  7461                 je 0x41f1c0
// 0041f15f  8b4808               mov ecx, dword ptr [eax + 8]
// 0041f162  385914               cmp byte ptr [ecx + 0x14], bl
// 0041f165  7514                 jne 0x41f17b
// 0041f167  8b10                 mov edx, dword ptr [eax]
// 0041f169  885a14               mov byte ptr [edx + 0x14], bl
// 0041f16c  50                   push eax
// 0041f16d  8bcd                 mov ecx, ebp
// 0041f16f  c6401400             mov byte ptr [eax + 0x14], 0
// 0041f173  e8889a1a00           call 0x5c8c00
// 0041f178  8b4608               mov eax, dword ptr [esi + 8]
// 0041f17b  8a4e14               mov cl, byte ptr [esi + 0x14]
// 0041f17e  884814               mov byte ptr [eax + 0x14], cl
// 0041f181  885e14               mov byte ptr [esi + 0x14], bl
// 0041f184  8b5008               mov edx, dword ptr [eax + 8]
// 0041f187  56                   push esi
// 0041f188  8bcd                 mov ecx, ebp
// 0041f18a  885a14               mov byte ptr [edx + 0x14], bl
// 0041f18d  e88ed11800           call 0x5ac320
// 0041f192  eb74                 jmp 0x41f208
// 0041f194  80781400             cmp byte ptr [eax + 0x14], 0
// 0041f198  7511                 jne 0x41f1ab
// 0041f19a  885814               mov byte ptr [eax + 0x14], bl
// 0041f19d  56                   push esi
// 0041f19e  8bcd                 mov ecx, ebp
// 0041f1a0  c6461400             mov byte ptr [esi + 0x14], 0
// 0041f1a4  e8579a1a00           call 0x5c8c00
// 0041f1a9  8b06                 mov eax, dword ptr [esi]
// 0041f1ab  80781500             cmp byte ptr [eax + 0x15], 0
// 0041f1af  7513                 jne 0x41f1c4
// 0041f1b1  8b4808               mov ecx, dword ptr [eax + 8]
// 0041f1b4  385914               cmp byte ptr [ecx + 0x14], bl
// 0041f1b7  751e                 jne 0x41f1d7
// 0041f1b9  8b10                 mov edx, dword ptr [eax]
// 0041f1bb  385a14               cmp byte ptr [edx + 0x14], bl
// 0041f1be  7517                 jne 0x41f1d7
// 0041f1c0  c6401400             mov byte ptr [eax + 0x14], 0
// 0041f1c4  8b4518               mov eax, dword ptr [ebp + 0x18]
// 0041f1c7  8bfe                 mov edi, esi
// 0041f1c9  8b7604               mov esi, dword ptr [esi + 4]
// 0041f1cc  3b7804               cmp edi, dword ptr [eax + 4]
// 0041f1cf  0f854bffffff         jne 0x41f120
// 0041f1d5  eb31                 jmp 0x41f208
// 0041f1d7  8b08                 mov ecx, dword ptr [eax]
// 0041f1d9  385914               cmp byte ptr [ecx + 0x14], bl
// 0041f1dc  7514                 jne 0x41f1f2
// 0041f1de  8b5008               mov edx, dword ptr [eax + 8]
// 0041f1e1  885a14               mov byte ptr [edx + 0x14], bl
// 0041f1e4  50                   push eax
// 0041f1e5  8bcd                 mov ecx, ebp
// 0041f1e7  c6401400             mov byte ptr [eax + 0x14], 0
// 0041f1eb  e830d11800           call 0x5ac320
// 0041f1f0  8b06                 mov eax, dword ptr [esi]
// 0041f1f2  8a4e14               mov cl, byte ptr [esi + 0x14]
// 0041f1f5  884814               mov byte ptr [eax + 0x14], cl
// 0041f1f8  885e14               mov byte ptr [esi + 0x14], bl
// 0041f1fb  8b10                 mov edx, dword ptr [eax]
// 0041f1fd  56                   push esi
// 0041f1fe  8bcd                 mov ecx, ebp
// 0041f200  885a14               mov byte ptr [edx + 0x14], bl
// 0041f203  e8f8991a00           call 0x5c8c00
// 0041f208  885f14               mov byte ptr [edi + 0x14], bl
// 0041f20b  8b442410             mov eax, dword ptr [esp + 0x10]
// 0041f20f  8b7010               mov esi, dword ptr [eax + 0x10]
// 0041f212  85f6                 test esi, esi
// 0041f214  742a                 je 0x41f240
// 0041f216  8d4e04               lea ecx, [esi + 4]
// 0041f219  83caff               or edx, 0xffffffff
// 0041f21c  f00fc111             lock xadd dword ptr [ecx], edx
// 0041f220  751e                 jne 0x41f240
// 0041f222  8b06                 mov eax, dword ptr [esi]
// 0041f224  8b5004               mov edx, dword ptr [eax + 4]
// 0041f227  8bce                 mov ecx, esi
// 0041f229  ffd2                 call edx
// 0041f22b  8d4608               lea eax, [esi + 8]
// 0041f22e  83c9ff               or ecx, 0xffffffff
// 0041f231  f00fc108             lock xadd dword ptr [eax], ecx
// 0041f235  7509                 jne 0x41f240
// 0041f237  8b16                 mov edx, dword ptr [esi]
// 0041f239  8b4208               mov eax, dword ptr [edx + 8]
// 0041f23c  8bce                 mov ecx, esi
// 0041f23e  ffd0                 call eax
// 0041f240  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0041f244  51                   push ecx
// 0041f245  e850873800           call 0x7a799a
// 0041f24a  8b451c               mov eax, dword ptr [ebp + 0x1c]
// 0041f24d  83c404               add esp, 4
// 0041f250  5f                   pop edi
// 0041f251  5e                   pop esi
// 0041f252  5b                   pop ebx
// 0041f253  85c0                 test eax, eax
// 0041f255  7604                 jbe 0x41f25b
// 0041f257  48                   dec eax
// 0041f258  89451c               mov dword ptr [ebp + 0x1c], eax
// 0041f25b  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 0041f25f  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 0041f263  8b5500               mov edx, dword ptr [ebp]
// 0041f266  894804               mov dword ptr [eax + 4], ecx
// 0041f269  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0041f26d  8910                 mov dword ptr [eax], edx
// 0041f26f  5d                   pop ebp
// 0041f270  64890d00000000       mov dword ptr fs:[0], ecx
// 0041f277  83c454               add esp, 0x54
// 0041f27a  c20c00               ret 0xc
// copied from an identical function in another client (function ?erase@?$_Tree@V?$_Tset_traits@V?$shared_ptr@UT@@@boost@@U?$less@V?$shared_ptr@UT@@@boost@@@std@@V?$allocator@V?$shared_ptr@UT@@@boost@@@4@$0A@@std@@@std@@QAE?AViterator@12@Vconst_iterator@12@@Z)

// roc-cl: 30729
// roc-lang: cpp
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1-dll set_sp.cpp