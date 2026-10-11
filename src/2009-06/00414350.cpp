// roc 2009-06 00414350  unit: CopyVerb  size: 765 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00414350
//
// 00414350  64a100000000         mov eax, dword ptr fs:[0]
// 00414356  6aff                 push -1
// 00414358  68b2db8500           push 0x85dbb2
// 0041435d  50                   push eax
// 0041435e  64892500000000       mov dword ptr fs:[0], esp
// 00414365  8b442418             mov eax, dword ptr [esp + 0x18]
// 00414369  83ec48               sub esp, 0x48
// 0041436c  80781900             cmp byte ptr [eax + 0x19], 0
// 00414370  55                   push ebp
// 00414371  8be9                 mov ebp, ecx
// 00414373  7459                 je 0x4143ce
// 00414375  68a4c98a00           push 0x8ac9a4
// 0041437a  8d4c240c             lea ecx, [esp + 0xc]
// 0041437e  ff15b4e48900         call dword ptr [0x89e4b4]
// 00414384  8d4c2424             lea ecx, [esp + 0x24]
// 00414388  c744245400000000     mov dword ptr [esp + 0x54], 0
// 00414390  ff15b8e98900         call dword ptr [0x89e9b8]
// 00414396  8d442408             lea eax, [esp + 8]
// 0041439a  50                   push eax
// 0041439b  8d4c2434             lea ecx, [esp + 0x34]
// 0041439f  c644245801           mov byte ptr [esp + 0x58], 1
// 004143a4  c744242844c98a00     mov dword ptr [esp + 0x28], 0x8ac944
// 004143ac  ff15b8e48900         call dword ptr [0x89e4b8]
// 004143b2  68dc919700           push 0x9791dc
// 004143b7  8d4c2428             lea ecx, [esp + 0x28]
// 004143bb  51                   push ecx
// 004143bc  c644245c00           mov byte ptr [esp + 0x5c], 0
// 004143c1  c744242c5cc98a00     mov dword ptr [esp + 0x2c], 0x8ac95c
// 004143c9  e87c563000           call 0x719a4a
// 004143ce  53                   push ebx
// 004143cf  56                   push esi
// 004143d0  8bd8                 mov ebx, eax
// 004143d2  57                   push edi
// 004143d3  8d4c246c             lea ecx, [esp + 0x6c]
// 004143d7  895c2410             mov dword ptr [esp + 0x10], ebx
// 004143db  e8e0de2000           call 0x6222c0
// 004143e0  8b0b                 mov ecx, dword ptr [ebx]
// 004143e2  80791900             cmp byte ptr [ecx + 0x19], 0
// 004143e6  7405                 je 0x4143ed
// 004143e8  8b7b08               mov edi, dword ptr [ebx + 8]
// 004143eb  eb1b                 jmp 0x414408
// 004143ed  8b5308               mov edx, dword ptr [ebx + 8]
// 004143f0  807a1900             cmp byte ptr [edx + 0x19], 0
// 004143f4  7404                 je 0x4143fa
// 004143f6  8bf9                 mov edi, ecx
// 004143f8  eb0e                 jmp 0x414408
// 004143fa  8b442470             mov eax, dword ptr [esp + 0x70]
// 004143fe  8b7808               mov edi, dword ptr [eax + 8]
// 00414401  8d5008               lea edx, [eax + 8]
// 00414404  3bc3                 cmp eax, ebx
// 00414406  756b                 jne 0x414473
// 00414408  807f1900             cmp byte ptr [edi + 0x19], 0
// 0041440c  8b7304               mov esi, dword ptr [ebx + 4]
// 0041440f  7503                 jne 0x414414
// 00414411  897704               mov dword ptr [edi + 4], esi
// 00414414  8b4518               mov eax, dword ptr [ebp + 0x18]
// 00414417  395804               cmp dword ptr [eax + 4], ebx
// 0041441a  7505                 jne 0x414421
// 0041441c  897804               mov dword ptr [eax + 4], edi
// 0041441f  eb0b                 jmp 0x41442c
// 00414421  391e                 cmp dword ptr [esi], ebx
// 00414423  7504                 jne 0x414429
// 00414425  893e                 mov dword ptr [esi], edi
// 00414427  eb03                 jmp 0x41442c
// 00414429  897e08               mov dword ptr [esi + 8], edi
// 0041442c  8b5d18               mov ebx, dword ptr [ebp + 0x18]
// 0041442f  8b03                 mov eax, dword ptr [ebx]
// 00414431  3b442410             cmp eax, dword ptr [esp + 0x10]
// 00414435  7515                 jne 0x41444c
// 00414437  807f1900             cmp byte ptr [edi + 0x19], 0
// 0041443b  7404                 je 0x414441
// 0041443d  8bc6                 mov eax, esi
// 0041443f  eb09                 jmp 0x41444a
// 00414441  57                   push edi
// 00414442  e889f02200           call 0x6434d0
// 00414447  83c404               add esp, 4
// 0041444a  8903                 mov dword ptr [ebx], eax
// 0041444c  8b5d18               mov ebx, dword ptr [ebp + 0x18]
// 0041444f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00414453  394b08               cmp dword ptr [ebx + 8], ecx
// 00414456  7577                 jne 0x4144cf
// 00414458  807f1900             cmp byte ptr [edi + 0x19], 0
// 0041445c  7407                 je 0x414465
// 0041445e  8bc6                 mov eax, esi
// 00414460  894308               mov dword ptr [ebx + 8], eax
// 00414463  eb6a                 jmp 0x4144cf
// 00414465  57                   push edi
// 00414466  e865ee0c00           call 0x4e32d0
// 0041446b  83c404               add esp, 4
// 0041446e  894308               mov dword ptr [ebx + 8], eax
// 00414471  eb5c                 jmp 0x4144cf
// 00414473  894104               mov dword ptr [ecx + 4], eax
// 00414476  8b0b                 mov ecx, dword ptr [ebx]
// 00414478  8908                 mov dword ptr [eax], ecx
// 0041447a  3b4308               cmp eax, dword ptr [ebx + 8]
// 0041447d  7504                 jne 0x414483
// 0041447f  8bf0                 mov esi, eax
// 00414481  eb19                 jmp 0x41449c
// 00414483  807f1900             cmp byte ptr [edi + 0x19], 0
// 00414487  8b7004               mov esi, dword ptr [eax + 4]
// 0041448a  7503                 jne 0x41448f
// 0041448c  897704               mov dword ptr [edi + 4], esi
// 0041448f  893e                 mov dword ptr [esi], edi
// 00414491  8b4b08               mov ecx, dword ptr [ebx + 8]
// 00414494  890a                 mov dword ptr [edx], ecx
// 00414496  8b5308               mov edx, dword ptr [ebx + 8]
// 00414499  894204               mov dword ptr [edx + 4], eax
// 0041449c  8b4d18               mov ecx, dword ptr [ebp + 0x18]
// 0041449f  395904               cmp dword ptr [ecx + 4], ebx
// 004144a2  7505                 jne 0x4144a9
// 004144a4  894104               mov dword ptr [ecx + 4], eax
// 004144a7  eb0e                 jmp 0x4144b7
// 004144a9  8b4b04               mov ecx, dword ptr [ebx + 4]
// 004144ac  3919                 cmp dword ptr [ecx], ebx
// 004144ae  7504                 jne 0x4144b4
// 004144b0  8901                 mov dword ptr [ecx], eax
// 004144b2  eb03                 jmp 0x4144b7
// 004144b4  894108               mov dword ptr [ecx + 8], eax
// 004144b7  8b4b04               mov ecx, dword ptr [ebx + 4]
// 004144ba  894804               mov dword ptr [eax + 4], ecx
// 004144bd  8d4b18               lea ecx, [ebx + 0x18]
// 004144c0  83c018               add eax, 0x18
// 004144c3  3bc1                 cmp eax, ecx
// 004144c5  7408                 je 0x4144cf
// 004144c7  8a19                 mov bl, byte ptr [ecx]
// 004144c9  8a10                 mov dl, byte ptr [eax]
// 004144cb  8818                 mov byte ptr [eax], bl
// 004144cd  8811                 mov byte ptr [ecx], dl
// 004144cf  8b542410             mov edx, dword ptr [esp + 0x10]
// 004144d3  b301                 mov bl, 1
// 004144d5  385a18               cmp byte ptr [edx + 0x18], bl
// 004144d8  0f85fd000000         jne 0x4145db
// 004144de  8b4518               mov eax, dword ptr [ebp + 0x18]
// 004144e1  3b7804               cmp edi, dword ptr [eax + 4]
// 004144e4  0f84ee000000         je 0x4145d8
// 004144ea  8d9b00000000         lea ebx, [ebx]
// 004144f0  385f18               cmp byte ptr [edi + 0x18], bl
// 004144f3  0f85df000000         jne 0x4145d8
// 004144f9  8b06                 mov eax, dword ptr [esi]
// 004144fb  3bf8                 cmp edi, eax
// 004144fd  7565                 jne 0x414564
// 004144ff  8b4608               mov eax, dword ptr [esi + 8]
// 00414502  80781800             cmp byte ptr [eax + 0x18], 0
// 00414506  7512                 jne 0x41451a
// 00414508  885818               mov byte ptr [eax + 0x18], bl
// 0041450b  56                   push esi
// 0041450c  8bcd                 mov ecx, ebp
// 0041450e  c6461800             mov byte ptr [esi + 0x18], 0
// 00414512  e829412000           call 0x618640
// 00414517  8b4608               mov eax, dword ptr [esi + 8]
// 0041451a  80781900             cmp byte ptr [eax + 0x19], 0
// 0041451e  7574                 jne 0x414594
// 00414520  8b08                 mov ecx, dword ptr [eax]
// 00414522  385918               cmp byte ptr [ecx + 0x18], bl
// 00414525  7508                 jne 0x41452f
// 00414527  8b5008               mov edx, dword ptr [eax + 8]
// 0041452a  385a18               cmp byte ptr [edx + 0x18], bl
// 0041452d  7461                 je 0x414590
// 0041452f  8b4808               mov ecx, dword ptr [eax + 8]
// 00414532  385918               cmp byte ptr [ecx + 0x18], bl
// 00414535  7514                 jne 0x41454b
// 00414537  8b10                 mov edx, dword ptr [eax]
// 00414539  885a18               mov byte ptr [edx + 0x18], bl
// 0041453c  50                   push eax
// 0041453d  8bcd                 mov ecx, ebp
// 0041453f  c6401800             mov byte ptr [eax + 0x18], 0
// 00414543  e878f52200           call 0x643ac0
// 00414548  8b4608               mov eax, dword ptr [esi + 8]
// 0041454b  8a4e18               mov cl, byte ptr [esi + 0x18]
// 0041454e  884818               mov byte ptr [eax + 0x18], cl
// 00414551  885e18               mov byte ptr [esi + 0x18], bl
// 00414554  8b5008               mov edx, dword ptr [eax + 8]
// 00414557  56                   push esi
// 00414558  8bcd                 mov ecx, ebp
// 0041455a  885a18               mov byte ptr [edx + 0x18], bl
// 0041455d  e8de402000           call 0x618640
// 00414562  eb74                 jmp 0x4145d8
// 00414564  80781800             cmp byte ptr [eax + 0x18], 0
// 00414568  7511                 jne 0x41457b
// 0041456a  885818               mov byte ptr [eax + 0x18], bl
// 0041456d  56                   push esi
// 0041456e  8bcd                 mov ecx, ebp
// 00414570  c6461800             mov byte ptr [esi + 0x18], 0
// 00414574  e847f52200           call 0x643ac0
// 00414579  8b06                 mov eax, dword ptr [esi]
// 0041457b  80781900             cmp byte ptr [eax + 0x19], 0
// 0041457f  7513                 jne 0x414594
// 00414581  8b4808               mov ecx, dword ptr [eax + 8]
// 00414584  385918               cmp byte ptr [ecx + 0x18], bl
// 00414587  751e                 jne 0x4145a7
// 00414589  8b10                 mov edx, dword ptr [eax]
// 0041458b  385a18               cmp byte ptr [edx + 0x18], bl
// 0041458e  7517                 jne 0x4145a7
// 00414590  c6401800             mov byte ptr [eax + 0x18], 0
// 00414594  8b4518               mov eax, dword ptr [ebp + 0x18]
// 00414597  8bfe                 mov edi, esi
// 00414599  8b7604               mov esi, dword ptr [esi + 4]
// 0041459c  3b7804               cmp edi, dword ptr [eax + 4]
// 0041459f  0f854bffffff         jne 0x4144f0
// 004145a5  eb31                 jmp 0x4145d8
// 004145a7  8b08                 mov ecx, dword ptr [eax]
// 004145a9  385918               cmp byte ptr [ecx + 0x18], bl
// 004145ac  7514                 jne 0x4145c2
// 004145ae  8b5008               mov edx, dword ptr [eax + 8]
// 004145b1  885a18               mov byte ptr [edx + 0x18], bl
// 004145b4  50                   push eax
// 004145b5  8bcd                 mov ecx, ebp
// 004145b7  c6401800             mov byte ptr [eax + 0x18], 0
// 004145bb  e880402000           call 0x618640
// 004145c0  8b06                 mov eax, dword ptr [esi]
// 004145c2  8a4e18               mov cl, byte ptr [esi + 0x18]
// 004145c5  884818               mov byte ptr [eax + 0x18], cl
// 004145c8  885e18               mov byte ptr [esi + 0x18], bl
// 004145cb  8b10                 mov edx, dword ptr [eax]
// 004145cd  56                   push esi
// 004145ce  8bcd                 mov ecx, ebp
// 004145d0  885a18               mov byte ptr [edx + 0x18], bl
// 004145d3  e8e8f42200           call 0x643ac0
// 004145d8  885f18               mov byte ptr [edi + 0x18], bl
// 004145db  8b442410             mov eax, dword ptr [esp + 0x10]
// 004145df  8b7010               mov esi, dword ptr [eax + 0x10]
// 004145e2  85f6                 test esi, esi
// 004145e4  742a                 je 0x414610
// 004145e6  8d4e04               lea ecx, [esi + 4]
// 004145e9  83caff               or edx, 0xffffffff
// 004145ec  f00fc111             lock xadd dword ptr [ecx], edx
// 004145f0  751e                 jne 0x414610
// 004145f2  8b06                 mov eax, dword ptr [esi]
// 004145f4  8b5004               mov edx, dword ptr [eax + 4]
// 004145f7  8bce                 mov ecx, esi
// 004145f9  ffd2                 call edx
// 004145fb  8d4608               lea eax, [esi + 8]
// 004145fe  83c9ff               or ecx, 0xffffffff
// 00414601  f00fc108             lock xadd dword ptr [eax], ecx
// 00414605  7509                 jne 0x414610
// 00414607  8b16                 mov edx, dword ptr [esi]
// 00414609  8b4208               mov eax, dword ptr [edx + 8]
// 0041460c  8bce                 mov ecx, esi
// 0041460e  ffd0                 call eax
// 00414610  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00414614  51                   push ecx
// 00414615  e818443000           call 0x718a32
// 0041461a  8b451c               mov eax, dword ptr [ebp + 0x1c]
// 0041461d  83c404               add esp, 4
// 00414620  5f                   pop edi
// 00414621  5e                   pop esi
// 00414622  5b                   pop ebx
// 00414623  85c0                 test eax, eax
// 00414625  7604                 jbe 0x41462b
// 00414627  48                   dec eax
// 00414628  89451c               mov dword ptr [ebp + 0x1c], eax
// 0041462b  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 0041462f  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 00414633  8b5500               mov edx, dword ptr [ebp]
// 00414636  894804               mov dword ptr [eax + 4], ecx
// 00414639  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0041463d  8910                 mov dword ptr [eax], edx
// 0041463f  5d                   pop ebp
// 00414640  64890d00000000       mov dword ptr fs:[0], ecx
// 00414647  83c454               add esp, 0x54
// 0041464a  c20c00               ret 0xc
// library openrbx-client/App\v8xml\XmlSerializer.cpp (function ?erase@?$_Tree@V?$_Tmap_traits@VInstanceHandle@RBX@@HU?$less@VInstanceHandle@RBX@@@std@@V?$allocator@U?$pair@$$CBVInstanceHandle@RBX@@H@std@@@4@$0A@@std@@@std@@QAE?AViterator@12@Vconst_iterator@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8xml/XmlSerializer.cpp
