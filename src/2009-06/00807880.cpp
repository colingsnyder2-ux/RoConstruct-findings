// roc 2009-06 00807880  unit: CXTPPropertyGridItemColor::?8??OnInplaceButtonDown::CPropertyGridItemColorColorPopup  size: 520 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00807880
//
// 00807880  6aff                 push -1
// 00807882  68a21b8800           push 0x881ba2
// 00807887  64a100000000         mov eax, dword ptr fs:[0]
// 0080788d  50                   push eax
// 0080788e  83ec14               sub esp, 0x14
// 00807891  53                   push ebx
// 00807892  55                   push ebp
// 00807893  56                   push esi
// 00807894  57                   push edi
// 00807895  a1304fa200           mov eax, dword ptr [0xa24f30]
// 0080789a  33c4                 xor eax, esp
// 0080789c  50                   push eax
// 0080789d  8d442428             lea eax, [esp + 0x28]
// 008078a1  64a300000000         mov dword ptr fs:[0], eax
// 008078a7  8bf1                 mov esi, ecx
// 008078a9  8d4c2414             lea ecx, [esp + 0x14]
// 008078ad  e8cec5f8ff           call 0x793e80
// 008078b2  8d8628010000         lea eax, [esi + 0x128]
// 008078b8  50                   push eax
// 008078b9  8d4c2418             lea ecx, [esp + 0x18]
// 008078bd  c744243400000000     mov dword ptr [esp + 0x34], 0
// 008078c5  e8c609fcff           call 0x7c8290
// 008078ca  8b8648010000         mov eax, dword ptr [esi + 0x148]
// 008078d0  8bbeb0000000         mov edi, dword ptr [esi + 0xb0]
// 008078d6  8b9ea4000000         mov ebx, dword ptr [esi + 0xa4]
// 008078dc  8d48ff               lea ecx, [eax - 1]
// 008078df  8b442438             mov eax, dword ptr [esp + 0x38]
// 008078e3  3bc1                 cmp eax, ecx
// 008078e5  0f85dd000000         jne 0x8079c8
// 008078eb  f6c304               test bl, 4
// 008078ee  0f84d4000000         je 0x8079c8
// 008078f4  682c010000           push 0x12c
// 008078f9  e83a11f1ff           call 0x718a38
// 008078fe  8be8                 mov ebp, eax
// 00807900  83c404               add esp, 4
// 00807903  896c2438             mov dword ptr [esp + 0x38], ebp
// 00807907  c644243001           mov byte ptr [esp + 0x30], 1
// 0080790c  85ed                 test ebp, ebp
// 0080790e  7420                 je 0x807930
// 00807910  8b5620               mov edx, dword ptr [esi + 0x20]
// 00807913  52                   push edx
// 00807914  ff1598ee8900         call dword ptr [0x89ee98]
// 0080791a  50                   push eax
// 0080791b  e8e213f1ff           call 0x718d02
// 00807920  50                   push eax
// 00807921  83e360               and ebx, 0x60
// 00807924  53                   push ebx
// 00807925  57                   push edi
// 00807926  57                   push edi
// 00807927  8bcd                 mov ecx, ebp
// 00807929  e8a2c7f7ff           call 0x7840d0
// 0080792e  eb02                 jmp 0x807932
// 00807930  33c0                 xor eax, eax
// 00807932  898658010000         mov dword ptr [esi + 0x158], eax
// 00807938  8b10                 mov edx, dword ptr [eax]
// 0080793a  8bc8                 mov ecx, eax
// 0080793c  8b8248010000         mov eax, dword ptr [edx + 0x148]
// 00807942  c644243000           mov byte ptr [esp + 0x30], 0
// 00807947  ffd0                 call eax
// 00807949  83f801               cmp eax, 1
// 0080794c  7556                 jne 0x8079a4
// 0080794e  8b8e58010000         mov ecx, dword ptr [esi + 0x158]
// 00807954  8b8124010000         mov eax, dword ptr [ecx + 0x124]
// 0080795a  3bf8                 cmp edi, eax
// 0080795c  7507                 jne 0x807965
// 0080795e  bd29270000           mov ebp, 0x2729
// 00807963  eb07                 jmp 0x80796c
// 00807965  bd2c270000           mov ebp, 0x272c
// 0080796a  8bf8                 mov edi, eax
// 0080796c  8b15242ba500         mov edx, dword ptr [0xa52b24]
// 00807972  3b566c               cmp edx, dword ptr [esi + 0x6c]
// 00807975  7c0e                 jl 0x807985
// 00807977  6a01                 push 1
// 00807979  6a00                 push 0
// 0080797b  b91c2ba500           mov ecx, 0xa52b1c
// 00807980  e8ff4e0400           call 0x84c884
// 00807985  57                   push edi
// 00807986  8bce                 mov ecx, esi
// 00807988  e8a3faffff           call 0x807430
// 0080798d  85c0                 test eax, eax
// 0080798f  7518                 jne 0x8079a9
// 00807991  a1242ba500           mov eax, dword ptr [0xa52b24]
// 00807996  57                   push edi
// 00807997  50                   push eax
// 00807998  b91c2ba500           mov ecx, 0xa52b1c
// 0080799d  e808470400           call 0x84c0aa
// 008079a2  eb05                 jmp 0x8079a9
// 008079a4  bd2d270000           mov ebp, 0x272d
// 008079a9  8b8e58010000         mov ecx, dword ptr [esi + 0x158]
// 008079af  85c9                 test ecx, ecx
// 008079b1  746d                 je 0x807a20
// 008079b3  8b11                 mov edx, dword ptr [ecx]
// 008079b5  8b4204               mov eax, dword ptr [edx + 4]
// 008079b8  6a01                 push 1
// 008079ba  ffd0                 call eax
// 008079bc  c7865801000000000000 mov dword ptr [esi + 0x158], 0
// 008079c6  eb58                 jmp 0x807a20
// 008079c8  85c0                 test eax, eax
// 008079ca  7524                 jne 0x8079f0
// 008079cc  f6c301               test bl, 1
// 008079cf  740a                 je 0x8079db
// 008079d1  bd2e270000           mov ebp, 0x272e
// 008079d6  83cfff               or edi, 0xffffffff
// 008079d9  eb45                 jmp 0x807a20
// 008079db  8bb6b4000000         mov esi, dword ptr [esi + 0xb4]
// 008079e1  3bfe                 cmp edi, esi
// 008079e3  7507                 jne 0x8079ec
// 008079e5  bd29270000           mov ebp, 0x2729
// 008079ea  eb34                 jmp 0x807a20
// 008079ec  8bfe                 mov edi, esi
// 008079ee  eb2b                 jmp 0x807a1b
// 008079f0  83f8ff               cmp eax, -1
// 008079f3  7507                 jne 0x8079fc
// 008079f5  bd2d270000           mov ebp, 0x272d
// 008079fa  eb24                 jmp 0x807a20
// 008079fc  50                   push eax
// 008079fd  8bce                 mov ecx, esi
// 008079ff  e8acf5ffff           call 0x806fb0
// 00807a04  85c0                 test eax, eax
// 00807a06  7454                 je 0x807a5c
// 00807a08  8b8020010000         mov eax, dword ptr [eax + 0x120]
// 00807a0e  3bf8                 cmp edi, eax
// 00807a10  7507                 jne 0x807a19
// 00807a12  bd29270000           mov ebp, 0x2729
// 00807a17  eb07                 jmp 0x807a20
// 00807a19  8bf8                 mov edi, eax
// 00807a1b  bd2c270000           mov ebp, 0x272c
// 00807a20  33f6                 xor esi, esi
// 00807a22  3974241c             cmp dword ptr [esp + 0x1c], esi
// 00807a26  7e34                 jle 0x807a5c
// 00807a28  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00807a2c  85f6                 test esi, esi
// 00807a2e  7c53                 jl 0x807a83
// 00807a30  3b74241c             cmp esi, dword ptr [esp + 0x1c]
// 00807a34  7d4d                 jge 0x807a83
// 00807a36  8b0cb3               mov ecx, dword ptr [ebx + esi*4]
// 00807a39  51                   push ecx
// 00807a3a  ff15e0ed8900         call dword ptr [0x89ede0]
// 00807a40  85c0                 test eax, eax
// 00807a42  7411                 je 0x807a55
// 00807a44  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 00807a48  8b04b3               mov eax, dword ptr [ebx + esi*4]
// 00807a4b  52                   push edx
// 00807a4c  57                   push edi
// 00807a4d  55                   push ebp
// 00807a4e  50                   push eax
// 00807a4f  ff1590ee8900         call dword ptr [0x89ee90]
// 00807a55  46                   inc esi
// 00807a56  3b74241c             cmp esi, dword ptr [esp + 0x1c]
// 00807a5a  7cd0                 jl 0x807a2c
// 00807a5c  8d4c2414             lea ecx, [esp + 0x14]
// 00807a60  c7442430ffffffff     mov dword ptr [esp + 0x30], 0xffffffff
// 00807a68  e833c4f8ff           call 0x793ea0
// 00807a6d  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00807a71  64890d00000000       mov dword ptr fs:[0], ecx
// 00807a78  59                   pop ecx
// 00807a79  5f                   pop edi
// 00807a7a  5e                   pop esi
// 00807a7b  5d                   pop ebp
// 00807a7c  5b                   pop ebx
// 00807a7d  83c420               add esp, 0x20
// 00807a80  c20800               ret 8
// 00807a83  e85c12f1ff           call 0x718ce4
// copied from an identical function in another client (function ?OnEndSelection@CXTColorSelectorCtrl@@MAEXHJ@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Controls\XTColorSelectorCtrl.cpp