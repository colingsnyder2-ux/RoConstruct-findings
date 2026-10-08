// roc 2010-06 00541390  unit: RBX::AggregatingSceneManager  size: 724 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00541390
//
// 00541390  64a100000000         mov eax, dword ptr fs:[0]
// 00541396  6aff                 push -1
// 00541398  68e22f9a00           push 0x9a2fe2
// 0054139d  50                   push eax
// 0054139e  64892500000000       mov dword ptr fs:[0], esp
// 005413a5  8b442418             mov eax, dword ptr [esp + 0x18]
// 005413a9  83ec48               sub esp, 0x48
// 005413ac  80781d00             cmp byte ptr [eax + 0x1d], 0
// 005413b0  55                   push ebp
// 005413b1  8be9                 mov ebp, ecx
// 005413b3  7459                 je 0x54140e
// 005413b5  688c00a000           push 0xa0008c
// 005413ba  8d4c240c             lea ecx, [esp + 0xc]
// 005413be  ff1510a49e00         call dword ptr [0x9ea410]
// 005413c4  8d4c2424             lea ecx, [esp + 0x24]
// 005413c8  c744245400000000     mov dword ptr [esp + 0x54], 0
// 005413d0  ff1518a99e00         call dword ptr [0x9ea918]
// 005413d6  8d442408             lea eax, [esp + 8]
// 005413da  50                   push eax
// 005413db  8d4c2434             lea ecx, [esp + 0x34]
// 005413df  c644245801           mov byte ptr [esp + 0x58], 1
// 005413e4  c74424282c00a000     mov dword ptr [esp + 0x28], 0xa0002c
// 005413ec  ff150ca49e00         call dword ptr [0x9ea40c]
// 005413f2  68081bb000           push 0xb01b08
// 005413f7  8d4c2428             lea ecx, [esp + 0x28]
// 005413fb  51                   push ecx
// 005413fc  c644245c00           mov byte ptr [esp + 0x5c], 0
// 00541401  c744242c4400a000     mov dword ptr [esp + 0x2c], 0xa00044
// 00541409  e8a4752600           call 0x7a89b2
// 0054140e  53                   push ebx
// 0054140f  56                   push esi
// 00541410  8bd8                 mov ebx, eax
// 00541412  57                   push edi
// 00541413  8d4c246c             lea ecx, [esp + 0x6c]
// 00541417  895c2410             mov dword ptr [esp + 0x10], ebx
// 0054141b  e8b0ce0400           call 0x58e2d0
// 00541420  8b0b                 mov ecx, dword ptr [ebx]
// 00541422  80791d00             cmp byte ptr [ecx + 0x1d], 0
// 00541426  7405                 je 0x54142d
// 00541428  8b7b08               mov edi, dword ptr [ebx + 8]
// 0054142b  eb1b                 jmp 0x541448
// 0054142d  8b5308               mov edx, dword ptr [ebx + 8]
// 00541430  807a1d00             cmp byte ptr [edx + 0x1d], 0
// 00541434  7404                 je 0x54143a
// 00541436  8bf9                 mov edi, ecx
// 00541438  eb0e                 jmp 0x541448
// 0054143a  8b442470             mov eax, dword ptr [esp + 0x70]
// 0054143e  8b7808               mov edi, dword ptr [eax + 8]
// 00541441  8d5008               lea edx, [eax + 8]
// 00541444  3bc3                 cmp eax, ebx
// 00541446  756b                 jne 0x5414b3
// 00541448  807f1d00             cmp byte ptr [edi + 0x1d], 0
// 0054144c  8b7304               mov esi, dword ptr [ebx + 4]
// 0054144f  7503                 jne 0x541454
// 00541451  897704               mov dword ptr [edi + 4], esi
// 00541454  8b4518               mov eax, dword ptr [ebp + 0x18]
// 00541457  395804               cmp dword ptr [eax + 4], ebx
// 0054145a  7505                 jne 0x541461
// 0054145c  897804               mov dword ptr [eax + 4], edi
// 0054145f  eb0b                 jmp 0x54146c
// 00541461  391e                 cmp dword ptr [esi], ebx
// 00541463  7504                 jne 0x541469
// 00541465  893e                 mov dword ptr [esi], edi
// 00541467  eb03                 jmp 0x54146c
// 00541469  897e08               mov dword ptr [esi + 8], edi
// 0054146c  8b5d18               mov ebx, dword ptr [ebp + 0x18]
// 0054146f  8b03                 mov eax, dword ptr [ebx]
// 00541471  3b442410             cmp eax, dword ptr [esp + 0x10]
// 00541475  7515                 jne 0x54148c
// 00541477  807f1d00             cmp byte ptr [edi + 0x1d], 0
// 0054147b  7404                 je 0x541481
// 0054147d  8bc6                 mov eax, esi
// 0054147f  eb09                 jmp 0x54148a
// 00541481  57                   push edi
// 00541482  e829ce0400           call 0x58e2b0
// 00541487  83c404               add esp, 4
// 0054148a  8903                 mov dword ptr [ebx], eax
// 0054148c  8b5d18               mov ebx, dword ptr [ebp + 0x18]
// 0054148f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00541493  394b08               cmp dword ptr [ebx + 8], ecx
// 00541496  7577                 jne 0x54150f
// 00541498  807f1d00             cmp byte ptr [edi + 0x1d], 0
// 0054149c  7407                 je 0x5414a5
// 0054149e  8bc6                 mov eax, esi
// 005414a0  894308               mov dword ptr [ebx + 8], eax
// 005414a3  eb6a                 jmp 0x54150f
// 005414a5  57                   push edi
// 005414a6  e895952100           call 0x75aa40
// 005414ab  83c404               add esp, 4
// 005414ae  894308               mov dword ptr [ebx + 8], eax
// 005414b1  eb5c                 jmp 0x54150f
// 005414b3  894104               mov dword ptr [ecx + 4], eax
// 005414b6  8b0b                 mov ecx, dword ptr [ebx]
// 005414b8  8908                 mov dword ptr [eax], ecx
// 005414ba  3b4308               cmp eax, dword ptr [ebx + 8]
// 005414bd  7504                 jne 0x5414c3
// 005414bf  8bf0                 mov esi, eax
// 005414c1  eb19                 jmp 0x5414dc
// 005414c3  807f1d00             cmp byte ptr [edi + 0x1d], 0
// 005414c7  8b7004               mov esi, dword ptr [eax + 4]
// 005414ca  7503                 jne 0x5414cf
// 005414cc  897704               mov dword ptr [edi + 4], esi
// 005414cf  893e                 mov dword ptr [esi], edi
// 005414d1  8b4b08               mov ecx, dword ptr [ebx + 8]
// 005414d4  890a                 mov dword ptr [edx], ecx
// 005414d6  8b5308               mov edx, dword ptr [ebx + 8]
// 005414d9  894204               mov dword ptr [edx + 4], eax
// 005414dc  8b4d18               mov ecx, dword ptr [ebp + 0x18]
// 005414df  395904               cmp dword ptr [ecx + 4], ebx
// 005414e2  7505                 jne 0x5414e9
// 005414e4  894104               mov dword ptr [ecx + 4], eax
// 005414e7  eb0e                 jmp 0x5414f7
// 005414e9  8b4b04               mov ecx, dword ptr [ebx + 4]
// 005414ec  3919                 cmp dword ptr [ecx], ebx
// 005414ee  7504                 jne 0x5414f4
// 005414f0  8901                 mov dword ptr [ecx], eax
// 005414f2  eb03                 jmp 0x5414f7
// 005414f4  894108               mov dword ptr [ecx + 8], eax
// 005414f7  8b4b04               mov ecx, dword ptr [ebx + 4]
// 005414fa  894804               mov dword ptr [eax + 4], ecx
// 005414fd  8d4b1c               lea ecx, [ebx + 0x1c]
// 00541500  83c01c               add eax, 0x1c
// 00541503  3bc1                 cmp eax, ecx
// 00541505  7408                 je 0x54150f
// 00541507  8a19                 mov bl, byte ptr [ecx]
// 00541509  8a10                 mov dl, byte ptr [eax]
// 0054150b  8818                 mov byte ptr [eax], bl
// 0054150d  8811                 mov byte ptr [ecx], dl
// 0054150f  8b542410             mov edx, dword ptr [esp + 0x10]
// 00541513  b301                 mov bl, 1
// 00541515  385a1c               cmp byte ptr [edx + 0x1c], bl
// 00541518  0f85fd000000         jne 0x54161b
// 0054151e  8b4518               mov eax, dword ptr [ebp + 0x18]
// 00541521  3b7804               cmp edi, dword ptr [eax + 4]
// 00541524  0f84ee000000         je 0x541618
// 0054152a  8d9b00000000         lea ebx, [ebx]
// 00541530  385f1c               cmp byte ptr [edi + 0x1c], bl
// 00541533  0f85df000000         jne 0x541618
// 00541539  8b06                 mov eax, dword ptr [esi]
// 0054153b  3bf8                 cmp edi, eax
// 0054153d  7565                 jne 0x5415a4
// 0054153f  8b4608               mov eax, dword ptr [esi + 8]
// 00541542  80781c00             cmp byte ptr [eax + 0x1c], 0
// 00541546  7512                 jne 0x54155a
// 00541548  88581c               mov byte ptr [eax + 0x1c], bl
// 0054154b  56                   push esi
// 0054154c  8bcd                 mov ecx, ebp
// 0054154e  c6461c00             mov byte ptr [esi + 0x1c], 0
// 00541552  e8b99f2100           call 0x75b510
// 00541557  8b4608               mov eax, dword ptr [esi + 8]
// 0054155a  80781d00             cmp byte ptr [eax + 0x1d], 0
// 0054155e  7574                 jne 0x5415d4
// 00541560  8b08                 mov ecx, dword ptr [eax]
// 00541562  38591c               cmp byte ptr [ecx + 0x1c], bl
// 00541565  7508                 jne 0x54156f
// 00541567  8b5008               mov edx, dword ptr [eax + 8]
// 0054156a  385a1c               cmp byte ptr [edx + 0x1c], bl
// 0054156d  7461                 je 0x5415d0
// 0054156f  8b4808               mov ecx, dword ptr [eax + 8]
// 00541572  38591c               cmp byte ptr [ecx + 0x1c], bl
// 00541575  7514                 jne 0x54158b
// 00541577  8b10                 mov edx, dword ptr [eax]
// 00541579  885a1c               mov byte ptr [edx + 0x1c], bl
// 0054157c  50                   push eax
// 0054157d  8bcd                 mov ecx, ebp
// 0054157f  c6401c00             mov byte ptr [eax + 0x1c], 0
// 00541583  e888412100           call 0x755710
// 00541588  8b4608               mov eax, dword ptr [esi + 8]
// 0054158b  8a4e1c               mov cl, byte ptr [esi + 0x1c]
// 0054158e  88481c               mov byte ptr [eax + 0x1c], cl
// 00541591  885e1c               mov byte ptr [esi + 0x1c], bl
// 00541594  8b5008               mov edx, dword ptr [eax + 8]
// 00541597  56                   push esi
// 00541598  8bcd                 mov ecx, ebp
// 0054159a  885a1c               mov byte ptr [edx + 0x1c], bl
// 0054159d  e86e9f2100           call 0x75b510
// 005415a2  eb74                 jmp 0x541618
// 005415a4  80781c00             cmp byte ptr [eax + 0x1c], 0
// 005415a8  7511                 jne 0x5415bb
// 005415aa  88581c               mov byte ptr [eax + 0x1c], bl
// 005415ad  56                   push esi
// 005415ae  8bcd                 mov ecx, ebp
// 005415b0  c6461c00             mov byte ptr [esi + 0x1c], 0
// 005415b4  e857412100           call 0x755710
// 005415b9  8b06                 mov eax, dword ptr [esi]
// 005415bb  80781d00             cmp byte ptr [eax + 0x1d], 0
// 005415bf  7513                 jne 0x5415d4
// 005415c1  8b4808               mov ecx, dword ptr [eax + 8]
// 005415c4  38591c               cmp byte ptr [ecx + 0x1c], bl
// 005415c7  751e                 jne 0x5415e7
// 005415c9  8b10                 mov edx, dword ptr [eax]
// 005415cb  385a1c               cmp byte ptr [edx + 0x1c], bl
// 005415ce  7517                 jne 0x5415e7
// 005415d0  c6401c00             mov byte ptr [eax + 0x1c], 0
// 005415d4  8b4518               mov eax, dword ptr [ebp + 0x18]
// 005415d7  8bfe                 mov edi, esi
// 005415d9  8b7604               mov esi, dword ptr [esi + 4]
// 005415dc  3b7804               cmp edi, dword ptr [eax + 4]
// 005415df  0f854bffffff         jne 0x541530
// 005415e5  eb31                 jmp 0x541618
// 005415e7  8b08                 mov ecx, dword ptr [eax]
// 005415e9  38591c               cmp byte ptr [ecx + 0x1c], bl
// 005415ec  7514                 jne 0x541602
// 005415ee  8b5008               mov edx, dword ptr [eax + 8]
// 005415f1  885a1c               mov byte ptr [edx + 0x1c], bl
// 005415f4  50                   push eax
// 005415f5  8bcd                 mov ecx, ebp
// 005415f7  c6401c00             mov byte ptr [eax + 0x1c], 0
// 005415fb  e8109f2100           call 0x75b510
// 00541600  8b06                 mov eax, dword ptr [esi]
// 00541602  8a4e1c               mov cl, byte ptr [esi + 0x1c]
// 00541605  88481c               mov byte ptr [eax + 0x1c], cl
// 00541608  885e1c               mov byte ptr [esi + 0x1c], bl
// 0054160b  8b10                 mov edx, dword ptr [eax]
// 0054160d  56                   push esi
// 0054160e  8bcd                 mov ecx, ebp
// 00541610  885a1c               mov byte ptr [edx + 0x1c], bl
// 00541613  e8f8402100           call 0x755710
// 00541618  885f1c               mov byte ptr [edi + 0x1c], bl
// 0054161b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0054161f  83c10c               add ecx, 0xc
// 00541622  e869e6ffff           call 0x53fc90
// 00541627  8b442410             mov eax, dword ptr [esp + 0x10]
// 0054162b  50                   push eax
// 0054162c  e869632600           call 0x7a799a
// 00541631  8b451c               mov eax, dword ptr [ebp + 0x1c]
// 00541634  83c404               add esp, 4
// 00541637  5f                   pop edi
// 00541638  5e                   pop esi
// 00541639  5b                   pop ebx
// 0054163a  85c0                 test eax, eax
// 0054163c  7604                 jbe 0x541642
// 0054163e  48                   dec eax
// 0054163f  89451c               mov dword ptr [ebp + 0x1c], eax
// 00541642  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 00541646  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 0054164a  8b5500               mov edx, dword ptr [ebp]
// 0054164d  894804               mov dword ptr [eax + 4], ecx
// 00541650  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00541654  8910                 mov dword ptr [eax], edx
// 00541656  5d                   pop ebp
// 00541657  64890d00000000       mov dword ptr fs:[0], ecx
// 0054165e  83c454               add esp, 0x54
// 00541661  c20c00               ret 0xc
// library rbxgs-render/AggregatingSceneManager.cpp (function ?erase@?$_Tree@V?$_Tmap_traits@UBucketKey@AggregatingSceneManager@Render@RBX@@V?$ReferenceCountedPointer@VBucket@AggregatingSceneManager@Render@RBX@@@G3D@@U?$less@UBucketKey@AggregatingSceneManager@Render@RBX@@@std@@V?$allocator@U?$pair@$$CBUBucketKey@AggregatingSceneManager@Render@RBX@@V?$ReferenceCountedPointer@VBucket@AggregatingSceneManager@Render@RBX@@@G3D@@@std@@@8@$0A@@std@@@std@@QAE?AViterator@12@Vconst_iterator@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render AggregatingSceneManager.cpp
