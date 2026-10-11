// roc 2009-06 004e7430  unit: RBX::Network::DirectPhysicsReceiver  size: 765 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004e7430
//
// 004e7430  64a100000000         mov eax, dword ptr fs:[0]
// 004e7436  6aff                 push -1
// 004e7438  68b2db8500           push 0x85dbb2
// 004e743d  50                   push eax
// 004e743e  64892500000000       mov dword ptr fs:[0], esp
// 004e7445  8b442418             mov eax, dword ptr [esp + 0x18]
// 004e7449  83ec48               sub esp, 0x48
// 004e744c  80781900             cmp byte ptr [eax + 0x19], 0
// 004e7450  55                   push ebp
// 004e7451  8be9                 mov ebp, ecx
// 004e7453  7459                 je 0x4e74ae
// 004e7455  68a4c98a00           push 0x8ac9a4
// 004e745a  8d4c240c             lea ecx, [esp + 0xc]
// 004e745e  ff15b4e48900         call dword ptr [0x89e4b4]
// 004e7464  8d4c2424             lea ecx, [esp + 0x24]
// 004e7468  c744245400000000     mov dword ptr [esp + 0x54], 0
// 004e7470  ff15b8e98900         call dword ptr [0x89e9b8]
// 004e7476  8d442408             lea eax, [esp + 8]
// 004e747a  50                   push eax
// 004e747b  8d4c2434             lea ecx, [esp + 0x34]
// 004e747f  c644245801           mov byte ptr [esp + 0x58], 1
// 004e7484  c744242844c98a00     mov dword ptr [esp + 0x28], 0x8ac944
// 004e748c  ff15b8e48900         call dword ptr [0x89e4b8]
// 004e7492  68dc919700           push 0x9791dc
// 004e7497  8d4c2428             lea ecx, [esp + 0x28]
// 004e749b  51                   push ecx
// 004e749c  c644245c00           mov byte ptr [esp + 0x5c], 0
// 004e74a1  c744242c5cc98a00     mov dword ptr [esp + 0x2c], 0x8ac95c
// 004e74a9  e89c252300           call 0x719a4a
// 004e74ae  53                   push ebx
// 004e74af  56                   push esi
// 004e74b0  8bd8                 mov ebx, eax
// 004e74b2  57                   push edi
// 004e74b3  8d4c246c             lea ecx, [esp + 0x6c]
// 004e74b7  895c2410             mov dword ptr [esp + 0x10], ebx
// 004e74bb  e800ae1300           call 0x6222c0
// 004e74c0  8b0b                 mov ecx, dword ptr [ebx]
// 004e74c2  80791900             cmp byte ptr [ecx + 0x19], 0
// 004e74c6  7405                 je 0x4e74cd
// 004e74c8  8b7b08               mov edi, dword ptr [ebx + 8]
// 004e74cb  eb1b                 jmp 0x4e74e8
// 004e74cd  8b5308               mov edx, dword ptr [ebx + 8]
// 004e74d0  807a1900             cmp byte ptr [edx + 0x19], 0
// 004e74d4  7404                 je 0x4e74da
// 004e74d6  8bf9                 mov edi, ecx
// 004e74d8  eb0e                 jmp 0x4e74e8
// 004e74da  8b442470             mov eax, dword ptr [esp + 0x70]
// 004e74de  8b7808               mov edi, dword ptr [eax + 8]
// 004e74e1  8d5008               lea edx, [eax + 8]
// 004e74e4  3bc3                 cmp eax, ebx
// 004e74e6  756b                 jne 0x4e7553
// 004e74e8  807f1900             cmp byte ptr [edi + 0x19], 0
// 004e74ec  8b7304               mov esi, dword ptr [ebx + 4]
// 004e74ef  7503                 jne 0x4e74f4
// 004e74f1  897704               mov dword ptr [edi + 4], esi
// 004e74f4  8b4518               mov eax, dword ptr [ebp + 0x18]
// 004e74f7  395804               cmp dword ptr [eax + 4], ebx
// 004e74fa  7505                 jne 0x4e7501
// 004e74fc  897804               mov dword ptr [eax + 4], edi
// 004e74ff  eb0b                 jmp 0x4e750c
// 004e7501  391e                 cmp dword ptr [esi], ebx
// 004e7503  7504                 jne 0x4e7509
// 004e7505  893e                 mov dword ptr [esi], edi
// 004e7507  eb03                 jmp 0x4e750c
// 004e7509  897e08               mov dword ptr [esi + 8], edi
// 004e750c  8b5d18               mov ebx, dword ptr [ebp + 0x18]
// 004e750f  8b03                 mov eax, dword ptr [ebx]
// 004e7511  3b442410             cmp eax, dword ptr [esp + 0x10]
// 004e7515  7515                 jne 0x4e752c
// 004e7517  807f1900             cmp byte ptr [edi + 0x19], 0
// 004e751b  7404                 je 0x4e7521
// 004e751d  8bc6                 mov eax, esi
// 004e751f  eb09                 jmp 0x4e752a
// 004e7521  57                   push edi
// 004e7522  e8a9bf1500           call 0x6434d0
// 004e7527  83c404               add esp, 4
// 004e752a  8903                 mov dword ptr [ebx], eax
// 004e752c  8b5d18               mov ebx, dword ptr [ebp + 0x18]
// 004e752f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004e7533  394b08               cmp dword ptr [ebx + 8], ecx
// 004e7536  7577                 jne 0x4e75af
// 004e7538  807f1900             cmp byte ptr [edi + 0x19], 0
// 004e753c  7407                 je 0x4e7545
// 004e753e  8bc6                 mov eax, esi
// 004e7540  894308               mov dword ptr [ebx + 8], eax
// 004e7543  eb6a                 jmp 0x4e75af
// 004e7545  57                   push edi
// 004e7546  e885bdffff           call 0x4e32d0
// 004e754b  83c404               add esp, 4
// 004e754e  894308               mov dword ptr [ebx + 8], eax
// 004e7551  eb5c                 jmp 0x4e75af
// 004e7553  894104               mov dword ptr [ecx + 4], eax
// 004e7556  8b0b                 mov ecx, dword ptr [ebx]
// 004e7558  8908                 mov dword ptr [eax], ecx
// 004e755a  3b4308               cmp eax, dword ptr [ebx + 8]
// 004e755d  7504                 jne 0x4e7563
// 004e755f  8bf0                 mov esi, eax
// 004e7561  eb19                 jmp 0x4e757c
// 004e7563  807f1900             cmp byte ptr [edi + 0x19], 0
// 004e7567  8b7004               mov esi, dword ptr [eax + 4]
// 004e756a  7503                 jne 0x4e756f
// 004e756c  897704               mov dword ptr [edi + 4], esi
// 004e756f  893e                 mov dword ptr [esi], edi
// 004e7571  8b4b08               mov ecx, dword ptr [ebx + 8]
// 004e7574  890a                 mov dword ptr [edx], ecx
// 004e7576  8b5308               mov edx, dword ptr [ebx + 8]
// 004e7579  894204               mov dword ptr [edx + 4], eax
// 004e757c  8b4d18               mov ecx, dword ptr [ebp + 0x18]
// 004e757f  395904               cmp dword ptr [ecx + 4], ebx
// 004e7582  7505                 jne 0x4e7589
// 004e7584  894104               mov dword ptr [ecx + 4], eax
// 004e7587  eb0e                 jmp 0x4e7597
// 004e7589  8b4b04               mov ecx, dword ptr [ebx + 4]
// 004e758c  3919                 cmp dword ptr [ecx], ebx
// 004e758e  7504                 jne 0x4e7594
// 004e7590  8901                 mov dword ptr [ecx], eax
// 004e7592  eb03                 jmp 0x4e7597
// 004e7594  894108               mov dword ptr [ecx + 8], eax
// 004e7597  8b4b04               mov ecx, dword ptr [ebx + 4]
// 004e759a  894804               mov dword ptr [eax + 4], ecx
// 004e759d  8d4b18               lea ecx, [ebx + 0x18]
// 004e75a0  83c018               add eax, 0x18
// 004e75a3  3bc1                 cmp eax, ecx
// 004e75a5  7408                 je 0x4e75af
// 004e75a7  8a19                 mov bl, byte ptr [ecx]
// 004e75a9  8a10                 mov dl, byte ptr [eax]
// 004e75ab  8818                 mov byte ptr [eax], bl
// 004e75ad  8811                 mov byte ptr [ecx], dl
// 004e75af  8b542410             mov edx, dword ptr [esp + 0x10]
// 004e75b3  b301                 mov bl, 1
// 004e75b5  385a18               cmp byte ptr [edx + 0x18], bl
// 004e75b8  0f85fd000000         jne 0x4e76bb
// 004e75be  8b4518               mov eax, dword ptr [ebp + 0x18]
// 004e75c1  3b7804               cmp edi, dword ptr [eax + 4]
// 004e75c4  0f84ee000000         je 0x4e76b8
// 004e75ca  8d9b00000000         lea ebx, [ebx]
// 004e75d0  385f18               cmp byte ptr [edi + 0x18], bl
// 004e75d3  0f85df000000         jne 0x4e76b8
// 004e75d9  8b06                 mov eax, dword ptr [esi]
// 004e75db  3bf8                 cmp edi, eax
// 004e75dd  7565                 jne 0x4e7644
// 004e75df  8b4608               mov eax, dword ptr [esi + 8]
// 004e75e2  80781800             cmp byte ptr [eax + 0x18], 0
// 004e75e6  7512                 jne 0x4e75fa
// 004e75e8  885818               mov byte ptr [eax + 0x18], bl
// 004e75eb  56                   push esi
// 004e75ec  8bcd                 mov ecx, ebp
// 004e75ee  c6461800             mov byte ptr [esi + 0x18], 0
// 004e75f2  e849101300           call 0x618640
// 004e75f7  8b4608               mov eax, dword ptr [esi + 8]
// 004e75fa  80781900             cmp byte ptr [eax + 0x19], 0
// 004e75fe  7574                 jne 0x4e7674
// 004e7600  8b08                 mov ecx, dword ptr [eax]
// 004e7602  385918               cmp byte ptr [ecx + 0x18], bl
// 004e7605  7508                 jne 0x4e760f
// 004e7607  8b5008               mov edx, dword ptr [eax + 8]
// 004e760a  385a18               cmp byte ptr [edx + 0x18], bl
// 004e760d  7461                 je 0x4e7670
// 004e760f  8b4808               mov ecx, dword ptr [eax + 8]
// 004e7612  385918               cmp byte ptr [ecx + 0x18], bl
// 004e7615  7514                 jne 0x4e762b
// 004e7617  8b10                 mov edx, dword ptr [eax]
// 004e7619  885a18               mov byte ptr [edx + 0x18], bl
// 004e761c  50                   push eax
// 004e761d  8bcd                 mov ecx, ebp
// 004e761f  c6401800             mov byte ptr [eax + 0x18], 0
// 004e7623  e898c41500           call 0x643ac0
// 004e7628  8b4608               mov eax, dword ptr [esi + 8]
// 004e762b  8a4e18               mov cl, byte ptr [esi + 0x18]
// 004e762e  884818               mov byte ptr [eax + 0x18], cl
// 004e7631  885e18               mov byte ptr [esi + 0x18], bl
// 004e7634  8b5008               mov edx, dword ptr [eax + 8]
// 004e7637  56                   push esi
// 004e7638  8bcd                 mov ecx, ebp
// 004e763a  885a18               mov byte ptr [edx + 0x18], bl
// 004e763d  e8fe0f1300           call 0x618640
// 004e7642  eb74                 jmp 0x4e76b8
// 004e7644  80781800             cmp byte ptr [eax + 0x18], 0
// 004e7648  7511                 jne 0x4e765b
// 004e764a  885818               mov byte ptr [eax + 0x18], bl
// 004e764d  56                   push esi
// 004e764e  8bcd                 mov ecx, ebp
// 004e7650  c6461800             mov byte ptr [esi + 0x18], 0
// 004e7654  e867c41500           call 0x643ac0
// 004e7659  8b06                 mov eax, dword ptr [esi]
// 004e765b  80781900             cmp byte ptr [eax + 0x19], 0
// 004e765f  7513                 jne 0x4e7674
// 004e7661  8b4808               mov ecx, dword ptr [eax + 8]
// 004e7664  385918               cmp byte ptr [ecx + 0x18], bl
// 004e7667  751e                 jne 0x4e7687
// 004e7669  8b10                 mov edx, dword ptr [eax]
// 004e766b  385a18               cmp byte ptr [edx + 0x18], bl
// 004e766e  7517                 jne 0x4e7687
// 004e7670  c6401800             mov byte ptr [eax + 0x18], 0
// 004e7674  8b4518               mov eax, dword ptr [ebp + 0x18]
// 004e7677  8bfe                 mov edi, esi
// 004e7679  8b7604               mov esi, dword ptr [esi + 4]
// 004e767c  3b7804               cmp edi, dword ptr [eax + 4]
// 004e767f  0f854bffffff         jne 0x4e75d0
// 004e7685  eb31                 jmp 0x4e76b8
// 004e7687  8b08                 mov ecx, dword ptr [eax]
// 004e7689  385918               cmp byte ptr [ecx + 0x18], bl
// 004e768c  7514                 jne 0x4e76a2
// 004e768e  8b5008               mov edx, dword ptr [eax + 8]
// 004e7691  885a18               mov byte ptr [edx + 0x18], bl
// 004e7694  50                   push eax
// 004e7695  8bcd                 mov ecx, ebp
// 004e7697  c6401800             mov byte ptr [eax + 0x18], 0
// 004e769b  e8a00f1300           call 0x618640
// 004e76a0  8b06                 mov eax, dword ptr [esi]
// 004e76a2  8a4e18               mov cl, byte ptr [esi + 0x18]
// 004e76a5  884818               mov byte ptr [eax + 0x18], cl
// 004e76a8  885e18               mov byte ptr [esi + 0x18], bl
// 004e76ab  8b10                 mov edx, dword ptr [eax]
// 004e76ad  56                   push esi
// 004e76ae  8bcd                 mov ecx, ebp
// 004e76b0  885a18               mov byte ptr [edx + 0x18], bl
// 004e76b3  e808c41500           call 0x643ac0
// 004e76b8  885f18               mov byte ptr [edi + 0x18], bl
// 004e76bb  8b442410             mov eax, dword ptr [esp + 0x10]
// 004e76bf  8b7014               mov esi, dword ptr [eax + 0x14]
// 004e76c2  85f6                 test esi, esi
// 004e76c4  742a                 je 0x4e76f0
// 004e76c6  8d4e04               lea ecx, [esi + 4]
// 004e76c9  83caff               or edx, 0xffffffff
// 004e76cc  f00fc111             lock xadd dword ptr [ecx], edx
// 004e76d0  751e                 jne 0x4e76f0
// 004e76d2  8b06                 mov eax, dword ptr [esi]
// 004e76d4  8b5004               mov edx, dword ptr [eax + 4]
// 004e76d7  8bce                 mov ecx, esi
// 004e76d9  ffd2                 call edx
// 004e76db  8d4608               lea eax, [esi + 8]
// 004e76de  83c9ff               or ecx, 0xffffffff
// 004e76e1  f00fc108             lock xadd dword ptr [eax], ecx
// 004e76e5  7509                 jne 0x4e76f0
// 004e76e7  8b16                 mov edx, dword ptr [esi]
// 004e76e9  8b4208               mov eax, dword ptr [edx + 8]
// 004e76ec  8bce                 mov ecx, esi
// 004e76ee  ffd0                 call eax
// 004e76f0  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004e76f4  51                   push ecx
// 004e76f5  e838132300           call 0x718a32
// 004e76fa  8b451c               mov eax, dword ptr [ebp + 0x1c]
// 004e76fd  83c404               add esp, 4
// 004e7700  5f                   pop edi
// 004e7701  5e                   pop esi
// 004e7702  5b                   pop ebx
// 004e7703  85c0                 test eax, eax
// 004e7705  7604                 jbe 0x4e770b
// 004e7707  48                   dec eax
// 004e7708  89451c               mov dword ptr [ebp + 0x1c], eax
// 004e770b  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 004e770f  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 004e7713  8b5500               mov edx, dword ptr [ebp]
// 004e7716  894804               mov dword ptr [eax + 4], ecx
// 004e7719  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 004e771d  8910                 mov dword ptr [eax], edx
// 004e771f  5d                   pop ebp
// 004e7720  64890d00000000       mov dword ptr fs:[0], ecx
// 004e7727  83c454               add esp, 0x54
// 004e772a  c20c00               ret 0xc
// library openrbx-client/App\reflection\signal.cpp (function ?erase@?$_Tree@V?$_Tmap_traits@PBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@U?$less@PBVSignalDescriptor@Reflection@RBX@@@std@@V?$allocator@U?$pair@QBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@@std@@@7@$0A@@std@@@std@@QAE?AViterator@12@Vconst_iterator@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/reflection/signal.cpp
