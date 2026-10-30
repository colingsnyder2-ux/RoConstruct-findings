// roc 2011-06 008ef390  unit: CXTColorSelectorCtrl  size: 607 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008ef390
//
// 008ef390  6aff                 push -1
// 008ef392  6849e8a000           push 0xa0e849
// 008ef397  64a100000000         mov eax, dword ptr fs:[0]
// 008ef39d  50                   push eax
// 008ef39e  53                   push ebx
// 008ef39f  55                   push ebp
// 008ef3a0  56                   push esi
// 008ef3a1  57                   push edi
// 008ef3a2  a12058c900           mov eax, dword ptr [0xc95820]
// 008ef3a7  33c4                 xor eax, esp
// 008ef3a9  50                   push eax
// 008ef3aa  8d442414             lea eax, [esp + 0x14]
// 008ef3ae  64a300000000         mov dword ptr fs:[0], eax
// 008ef3b4  8bf1                 mov esi, ecx
// 008ef3b6  8b442434             mov eax, dword ptr [esp + 0x34]
// 008ef3ba  894678               mov dword ptr [esi + 0x78], eax
// 008ef3bd  85c0                 test eax, eax
// 008ef3bf  0f8470010000         je 0x8ef535
// 008ef3c5  8b4020               mov eax, dword ptr [eax + 0x20]
// 008ef3c8  50                   push eax
// 008ef3c9  e872d0f8ff           call 0x87c440
// 008ef3ce  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 008ef3d2  8b542440             mov edx, dword ptr [esp + 0x40]
// 008ef3d6  8b6c2438             mov ebp, dword ptr [esp + 0x38]
// 008ef3da  8d442424             lea eax, [esp + 0x24]
// 008ef3de  50                   push eax
// 008ef3df  8dbe84000000         lea edi, [esi + 0x84]
// 008ef3e5  57                   push edi
// 008ef3e6  89aea4000000         mov dword ptr [esi + 0xa4], ebp
// 008ef3ec  898eb0000000         mov dword ptr [esi + 0xb0], ecx
// 008ef3f2  8996b4000000         mov dword ptr [esi + 0xb4], edx
// 008ef3f8  ff15681ca400         call dword ptr [0xa41c68]
// 008ef3fe  8b5e6c               mov ebx, dword ptr [esi + 0x6c]
// 008ef401  8b4e7c               mov ecx, dword ptr [esi + 0x7c]
// 008ef404  8b8690000000         mov eax, dword ptr [esi + 0x90]
// 008ef40a  0fafcb               imul ecx, ebx
// 008ef40d  038e9c000000         add ecx, dword ptr [esi + 0x9c]
// 008ef413  8b96a0000000         mov edx, dword ptr [esi + 0xa0]
// 008ef419  038e94000000         add ecx, dword ptr [esi + 0x94]
// 008ef41f  039698000000         add edx, dword ptr [esi + 0x98]
// 008ef425  030f                 add ecx, dword ptr [edi]
// 008ef427  898688000000         mov dword ptr [esi + 0x88], eax
// 008ef42d  898e8c000000         mov dword ptr [esi + 0x8c], ecx
// 008ef433  8d0c02               lea ecx, [edx + eax]
// 008ef436  8b86a4000000         mov eax, dword ptr [esi + 0xa4]
// 008ef43c  898e90000000         mov dword ptr [esi + 0x90], ecx
// 008ef442  a810                 test al, 0x10
// 008ef444  7509                 jne 0x8ef44f
// 008ef446  83c11b               add ecx, 0x1b
// 008ef449  898e90000000         mov dword ptr [esi + 0x90], ecx
// 008ef44f  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 008ef455  85c9                 test ecx, ecx
// 008ef457  7409                 je 0x8ef462
// 008ef459  83c802               or eax, 2
// 008ef45c  8986a4000000         mov dword ptr [esi + 0xa4], eax
// 008ef462  f686a400000002       test byte ptr [esi + 0xa4], 2
// 008ef469  7425                 je 0x8ef490
// 008ef46b  b828000000           mov eax, 0x28
// 008ef470  85c9                 test ecx, ecx
// 008ef472  7406                 je 0x8ef47a
// 008ef474  8b8660010000         mov eax, dword ptr [esi + 0x160]
// 008ef47a  8d4403ff             lea eax, [ebx + eax - 1]
// 008ef47e  99                   cdq 
// 008ef47f  f7fb                 idiv ebx
// 008ef481  0faf8680000000       imul eax, dword ptr [esi + 0x80]
// 008ef488  018690000000         add dword ptr [esi + 0x90], eax
// 008ef48e  eb10                 jmp 0x8ef4a0
// 008ef490  8b8680000000         mov eax, dword ptr [esi + 0x80]
// 008ef496  8d4c0016             lea ecx, [eax + eax + 0x16]
// 008ef49a  018e90000000         add dword ptr [esi + 0x90], ecx
// 008ef4a0  e877aef1ff           call 0x80a31c
// 008ef4a5  68007f0000           push 0x7f00
// 008ef4aa  6a00                 push 0
// 008ef4ac  ff15081aa400         call dword ptr [0xa41a08]
// 008ef4b2  6a00                 push 0
// 008ef4b4  6a00                 push 0
// 008ef4b6  50                   push eax
// 008ef4b7  6a00                 push 0
// 008ef4b9  e86cb5f1ff           call 0x80aa2a
// 008ef4be  50                   push eax
// 008ef4bf  8d4c2438             lea ecx, [esp + 0x38]
// 008ef4c3  ff15002ea400         call dword ptr [0xa42e00]
// 008ef4c9  f686a400000004       test byte ptr [esi + 0xa4], 4
// 008ef4d0  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 008ef4d8  7426                 je 0x8ef500
// 008ef4da  8386900000001b       add dword ptr [esi + 0x90], 0x1b
// 008ef4e1  833d9492d10000       cmp dword ptr [0xd19294], 0
// 008ef4e8  8b8690000000         mov eax, dword ptr [esi + 0x90]
// 008ef4ee  7e10                 jle 0x8ef500
// 008ef4f0  8b9680000000         mov edx, dword ptr [esi + 0x80]
// 008ef4f6  8d440204             lea eax, [edx + eax + 4]
// 008ef4fa  898690000000         mov dword ptr [esi + 0x90], eax
// 008ef500  8b4e78               mov ecx, dword ptr [esi + 0x78]
// 008ef503  6a00                 push 0
// 008ef505  6a00                 push 0
// 008ef507  51                   push ecx
// 008ef508  57                   push edi
// 008ef509  6800000040           push 0x40000000
// 008ef50e  68cabea500           push 0xa5beca
// 008ef513  8d4c244c             lea ecx, [esp + 0x4c]
// 008ef517  ff15c82da400         call dword ptr [0xa42dc8]
// 008ef51d  50                   push eax
// 008ef51e  6a00                 push 0
// 008ef520  8bce                 mov ecx, esi
// 008ef522  e8a9abf1ff           call 0x80a0d0
// 008ef527  85c0                 test eax, eax
// 008ef529  7511                 jne 0x8ef53c
// 008ef52b  8d4c2434             lea ecx, [esp + 0x34]
// 008ef52f  ff15082ea400         call dword ptr [0xa42e08]
// 008ef535  33c0                 xor eax, eax
// 008ef537  e99d000000           jmp 0x8ef5d9
// 008ef53c  8bce                 mov ecx, esi
// 008ef53e  85ed                 test ebp, ebp
// 008ef540  7963                 jns 0x8ef5a5
// 008ef542  e8b9aef1ff           call 0x80a400
// 008ef547  8b5620               mov edx, dword ptr [esi + 0x20]
// 008ef54a  8b1d001aa400         mov ebx, dword ptr [0xa41a00]
// 008ef550  6a00                 push 0
// 008ef552  6af8                 push -8
// 008ef554  52                   push edx
// 008ef555  ffd3                 call ebx
// 008ef557  6a00                 push 0
// 008ef559  6800000080           push 0x80000000
// 008ef55e  6800000040           push 0x40000000
// 008ef563  8bce                 mov ecx, esi
// 008ef565  e86eb2f1ff           call 0x80a7d8
// 008ef56a  8b4678               mov eax, dword ptr [esi + 0x78]
// 008ef56d  8b4820               mov ecx, dword ptr [eax + 0x20]
// 008ef570  8b5620               mov edx, dword ptr [esi + 0x20]
// 008ef573  51                   push ecx
// 008ef574  6af8                 push -8
// 008ef576  52                   push edx
// 008ef577  ffd3                 call ebx
// 008ef579  8b470c               mov eax, dword ptr [edi + 0xc]
// 008ef57c  2b4704               sub eax, dword ptr [edi + 4]
// 008ef57f  8b4f08               mov ecx, dword ptr [edi + 8]
// 008ef582  2b0f                 sub ecx, dword ptr [edi]
// 008ef584  8b9688000000         mov edx, dword ptr [esi + 0x88]
// 008ef58a  6850020000           push 0x250
// 008ef58f  50                   push eax
// 008ef590  8b07                 mov eax, dword ptr [edi]
// 008ef592  51                   push ecx
// 008ef593  8b0df821a400         mov ecx, dword ptr [0xa421f8]
// 008ef599  52                   push edx
// 008ef59a  50                   push eax
// 008ef59b  51                   push ecx
// 008ef59c  8bce                 mov ecx, esi
// 008ef59e  e887aef1ff           call 0x80a42a
// 008ef5a3  eb07                 jmp 0x8ef5ac
// 008ef5a5  6a08                 push 8
// 008ef5a7  e89aadf1ff           call 0x80a346
// 008ef5ac  e83f67f8ff           call 0x875cf0
// 008ef5b1  05dc000000           add eax, 0xdc
// 008ef5b6  7403                 je 0x8ef5bb
// 008ef5b8  8b4004               mov eax, dword ptr [eax + 4]
// 008ef5bb  8b5620               mov edx, dword ptr [esi + 0x20]
// 008ef5be  6a01                 push 1
// 008ef5c0  50                   push eax
// 008ef5c1  6a30                 push 0x30
// 008ef5c3  52                   push edx
// 008ef5c4  ff15c019a400         call dword ptr [0xa419c0]
// 008ef5ca  8d4c2434             lea ecx, [esp + 0x34]
// 008ef5ce  ff15082ea400         call dword ptr [0xa42e08]
// 008ef5d4  b801000000           mov eax, 1
// 008ef5d9  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008ef5dd  64890d00000000       mov dword ptr fs:[0], ecx
// 008ef5e4  59                   pop ecx
// 008ef5e5  5f                   pop edi
// 008ef5e6  5e                   pop esi
// 008ef5e7  5d                   pop ebp
// 008ef5e8  5b                   pop ebx
// 008ef5e9  83c40c               add esp, 0xc
// 008ef5ec  c22000               ret 0x20
// copied from an identical function in another client (function ?Create@CXTColorSelectorCtrl@@QAEHVCRect@@PAVCWnd@@KKK@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTColorSelectorCtrl.cpp