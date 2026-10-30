// roc 2012-06 00a67550  unit: CXTPPropertyGridItemColor::?8??OnInplaceButtonDown::CPropertyGridItemColorColorPopup  size: 520 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a67550
//
// 00a67550  6aff                 push -1
// 00a67552  685284ae00           push 0xae8452
// 00a67557  64a100000000         mov eax, dword ptr fs:[0]
// 00a6755d  50                   push eax
// 00a6755e  83ec14               sub esp, 0x14
// 00a67561  53                   push ebx
// 00a67562  55                   push ebp
// 00a67563  56                   push esi
// 00a67564  57                   push edi
// 00a67565  a1d027e000           mov eax, dword ptr [0xe027d0]
// 00a6756a  33c4                 xor eax, esp
// 00a6756c  50                   push eax
// 00a6756d  8d442428             lea eax, [esp + 0x28]
// 00a67571  64a300000000         mov dword ptr fs:[0], eax
// 00a67577  8bf1                 mov esi, ecx
// 00a67579  8d4c2414             lea ecx, [esp + 0x14]
// 00a6757d  e8ae16f9ff           call 0x9f8c30
// 00a67582  8d8628010000         lea eax, [esi + 0x128]
// 00a67588  50                   push eax
// 00a67589  8d4c2418             lea ecx, [esp + 0x18]
// 00a6758d  c744243400000000     mov dword ptr [esp + 0x34], 0
// 00a67595  e80694fcff           call 0xa309a0
// 00a6759a  8b8648010000         mov eax, dword ptr [esi + 0x148]
// 00a675a0  8bbeb0000000         mov edi, dword ptr [esi + 0xb0]
// 00a675a6  8b9ea4000000         mov ebx, dword ptr [esi + 0xa4]
// 00a675ac  8d48ff               lea ecx, [eax - 1]
// 00a675af  8b442438             mov eax, dword ptr [esp + 0x38]
// 00a675b3  3bc1                 cmp eax, ecx
// 00a675b5  0f85dd000000         jne 0xa67698
// 00a675bb  f6c304               test bl, 4
// 00a675be  0f84d4000000         je 0xa67698
// 00a675c4  682c010000           push 0x12c
// 00a675c9  e84cabf1ff           call 0x98211a
// 00a675ce  8be8                 mov ebp, eax
// 00a675d0  83c404               add esp, 4
// 00a675d3  896c2438             mov dword ptr [esp + 0x38], ebp
// 00a675d7  c644243001           mov byte ptr [esp + 0x30], 1
// 00a675dc  85ed                 test ebp, ebp
// 00a675de  7420                 je 0xa67600
// 00a675e0  8b5620               mov edx, dword ptr [esi + 0x20]
// 00a675e3  52                   push edx
// 00a675e4  ff15503ab200         call dword ptr [0xb23a50]
// 00a675ea  50                   push eax
// 00a675eb  e876b0f1ff           call 0x982666
// 00a675f0  50                   push eax
// 00a675f1  83e360               and ebx, 0x60
// 00a675f4  53                   push ebx
// 00a675f5  57                   push edi
// 00a675f6  57                   push edi
// 00a675f7  8bcd                 mov ecx, ebp
// 00a675f9  e8a218f8ff           call 0x9e8ea0
// 00a675fe  eb02                 jmp 0xa67602
// 00a67600  33c0                 xor eax, eax
// 00a67602  898658010000         mov dword ptr [esi + 0x158], eax
// 00a67608  8b10                 mov edx, dword ptr [eax]
// 00a6760a  8bc8                 mov ecx, eax
// 00a6760c  8b8248010000         mov eax, dword ptr [edx + 0x148]
// 00a67612  c644243000           mov byte ptr [esp + 0x30], 0
// 00a67617  ffd0                 call eax
// 00a67619  83f801               cmp eax, 1
// 00a6761c  7556                 jne 0xa67674
// 00a6761e  8b8e58010000         mov ecx, dword ptr [esi + 0x158]
// 00a67624  8b8124010000         mov eax, dword ptr [ecx + 0x124]
// 00a6762a  3bf8                 cmp edi, eax
// 00a6762c  7507                 jne 0xa67635
// 00a6762e  bd29270000           mov ebp, 0x2729
// 00a67633  eb07                 jmp 0xa6763c
// 00a67635  bd2c270000           mov ebp, 0x272c
// 00a6763a  8bf8                 mov edi, eax
// 00a6763c  8b1504a4e500         mov edx, dword ptr [0xe5a404]
// 00a67642  3b566c               cmp edx, dword ptr [esi + 0x6c]
// 00a67645  7c0e                 jl 0xa67655
// 00a67647  6a01                 push 1
// 00a67649  6a00                 push 0
// 00a6764b  b9fca3e500           mov ecx, 0xe5a3fc
// 00a67650  e8b1270300           call 0xa99e06
// 00a67655  57                   push edi
// 00a67656  8bce                 mov ecx, esi
// 00a67658  e8c3faffff           call 0xa67120
// 00a6765d  85c0                 test eax, eax
// 00a6765f  7518                 jne 0xa67679
// 00a67661  a104a4e500           mov eax, dword ptr [0xe5a404]
// 00a67666  57                   push edi
// 00a67667  50                   push eax
// 00a67668  b9fca3e500           mov ecx, 0xe5a3fc
// 00a6766d  e8b6200300           call 0xa99728
// 00a67672  eb05                 jmp 0xa67679
// 00a67674  bd2d270000           mov ebp, 0x272d
// 00a67679  8b8e58010000         mov ecx, dword ptr [esi + 0x158]
// 00a6767f  85c9                 test ecx, ecx
// 00a67681  746d                 je 0xa676f0
// 00a67683  8b11                 mov edx, dword ptr [ecx]
// 00a67685  8b4204               mov eax, dword ptr [edx + 4]
// 00a67688  6a01                 push 1
// 00a6768a  ffd0                 call eax
// 00a6768c  c7865801000000000000 mov dword ptr [esi + 0x158], 0
// 00a67696  eb58                 jmp 0xa676f0
// 00a67698  85c0                 test eax, eax
// 00a6769a  7524                 jne 0xa676c0
// 00a6769c  f6c301               test bl, 1
// 00a6769f  740a                 je 0xa676ab
// 00a676a1  bd2e270000           mov ebp, 0x272e
// 00a676a6  83cfff               or edi, 0xffffffff
// 00a676a9  eb45                 jmp 0xa676f0
// 00a676ab  8bb6b4000000         mov esi, dword ptr [esi + 0xb4]
// 00a676b1  3bfe                 cmp edi, esi
// 00a676b3  7507                 jne 0xa676bc
// 00a676b5  bd29270000           mov ebp, 0x2729
// 00a676ba  eb34                 jmp 0xa676f0
// 00a676bc  8bfe                 mov edi, esi
// 00a676be  eb2b                 jmp 0xa676eb
// 00a676c0  83f8ff               cmp eax, -1
// 00a676c3  7507                 jne 0xa676cc
// 00a676c5  bd2d270000           mov ebp, 0x272d
// 00a676ca  eb24                 jmp 0xa676f0
// 00a676cc  50                   push eax
// 00a676cd  8bce                 mov ecx, esi
// 00a676cf  e8ccf5ffff           call 0xa66ca0
// 00a676d4  85c0                 test eax, eax
// 00a676d6  7454                 je 0xa6772c
// 00a676d8  8b8020010000         mov eax, dword ptr [eax + 0x120]
// 00a676de  3bf8                 cmp edi, eax
// 00a676e0  7507                 jne 0xa676e9
// 00a676e2  bd29270000           mov ebp, 0x2729
// 00a676e7  eb07                 jmp 0xa676f0
// 00a676e9  8bf8                 mov edi, eax
// 00a676eb  bd2c270000           mov ebp, 0x272c
// 00a676f0  33f6                 xor esi, esi
// 00a676f2  3974241c             cmp dword ptr [esp + 0x1c], esi
// 00a676f6  7e34                 jle 0xa6772c
// 00a676f8  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00a676fc  85f6                 test esi, esi
// 00a676fe  7c53                 jl 0xa67753
// 00a67700  3b74241c             cmp esi, dword ptr [esp + 0x1c]
// 00a67704  7d4d                 jge 0xa67753
// 00a67706  8b0cb3               mov ecx, dword ptr [ebx + esi*4]
// 00a67709  51                   push ecx
// 00a6770a  ff15143bb200         call dword ptr [0xb23b14]
// 00a67710  85c0                 test eax, eax
// 00a67712  7411                 je 0xa67725
// 00a67714  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 00a67718  8b04b3               mov eax, dword ptr [ebx + esi*4]
// 00a6771b  52                   push edx
// 00a6771c  57                   push edi
// 00a6771d  55                   push ebp
// 00a6771e  50                   push eax
// 00a6771f  ff15043cb200         call dword ptr [0xb23c04]
// 00a67725  46                   inc esi
// 00a67726  3b74241c             cmp esi, dword ptr [esp + 0x1c]
// 00a6772a  7cd0                 jl 0xa676fc
// 00a6772c  8d4c2414             lea ecx, [esp + 0x14]
// 00a67730  c7442430ffffffff     mov dword ptr [esp + 0x30], 0xffffffff
// 00a67738  e81315f9ff           call 0x9f8c50
// 00a6773d  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00a67741  64890d00000000       mov dword ptr fs:[0], ecx
// 00a67748  59                   pop ecx
// 00a67749  5f                   pop edi
// 00a6774a  5e                   pop esi
// 00a6774b  5d                   pop ebp
// 00a6774c  5b                   pop ebx
// 00a6774d  83c420               add esp, 0x20
// 00a67750  c20800               ret 8
// 00a67753  e868acf1ff           call 0x9823c0
// copied from an identical function in another client (function ?OnEndSelection@CXTColorSelectorCtrl@@MAEXHJ@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Controls\XTColorSelectorCtrl.cpp