// roc 2010-06 00896610  unit: CXTPPropertyGridItemColor::?8??OnInplaceButtonDown::CPropertyGridItemColorColorPopup  size: 520 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00896610
//
// 00896610  6aff                 push -1
// 00896612  68d2bc9b00           push 0x9bbcd2
// 00896617  64a100000000         mov eax, dword ptr fs:[0]
// 0089661d  50                   push eax
// 0089661e  83ec14               sub esp, 0x14
// 00896621  53                   push ebx
// 00896622  55                   push ebp
// 00896623  56                   push esi
// 00896624  57                   push edi
// 00896625  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 0089662a  33c4                 xor eax, esp
// 0089662c  50                   push eax
// 0089662d  8d442428             lea eax, [esp + 0x28]
// 00896631  64a300000000         mov dword ptr fs:[0], eax
// 00896637  8bf1                 mov esi, ecx
// 00896639  8d4c2414             lea ecx, [esp + 0x14]
// 0089663d  e8aec9f8ff           call 0x822ff0
// 00896642  8d8628010000         lea eax, [esi + 0x128]
// 00896648  50                   push eax
// 00896649  8d4c2418             lea ecx, [esp + 0x18]
// 0089664d  c744243400000000     mov dword ptr [esp + 0x34], 0
// 00896655  e8e6fbffff           call 0x896240
// 0089665a  8b8648010000         mov eax, dword ptr [esi + 0x148]
// 00896660  8bbeb0000000         mov edi, dword ptr [esi + 0xb0]
// 00896666  8b9ea4000000         mov ebx, dword ptr [esi + 0xa4]
// 0089666c  8d48ff               lea ecx, [eax - 1]
// 0089666f  8b442438             mov eax, dword ptr [esp + 0x38]
// 00896673  3bc1                 cmp eax, ecx
// 00896675  0f85dd000000         jne 0x896758
// 0089667b  f6c304               test bl, 4
// 0089667e  0f84d4000000         je 0x896758
// 00896684  682c010000           push 0x12c
// 00896689  e81213f1ff           call 0x7a79a0
// 0089668e  8be8                 mov ebp, eax
// 00896690  83c404               add esp, 4
// 00896693  896c2438             mov dword ptr [esp + 0x38], ebp
// 00896697  c644243001           mov byte ptr [esp + 0x30], 1
// 0089669c  85ed                 test ebp, ebp
// 0089669e  7420                 je 0x8966c0
// 008966a0  8b5620               mov edx, dword ptr [esi + 0x20]
// 008966a3  52                   push edx
// 008966a4  ff154cba9e00         call dword ptr [0x9eba4c]
// 008966aa  50                   push eax
// 008966ab  e8ba15f1ff           call 0x7a7c6a
// 008966b0  50                   push eax
// 008966b1  83e360               and ebx, 0x60
// 008966b4  53                   push ebx
// 008966b5  57                   push edi
// 008966b6  57                   push edi
// 008966b7  8bcd                 mov ecx, ebp
// 008966b9  e812caf7ff           call 0x8130d0
// 008966be  eb02                 jmp 0x8966c2
// 008966c0  33c0                 xor eax, eax
// 008966c2  898658010000         mov dword ptr [esi + 0x158], eax
// 008966c8  8b10                 mov edx, dword ptr [eax]
// 008966ca  8bc8                 mov ecx, eax
// 008966cc  8b8248010000         mov eax, dword ptr [edx + 0x148]
// 008966d2  c644243000           mov byte ptr [esp + 0x30], 0
// 008966d7  ffd0                 call eax
// 008966d9  83f801               cmp eax, 1
// 008966dc  7556                 jne 0x896734
// 008966de  8b8e58010000         mov ecx, dword ptr [esi + 0x158]
// 008966e4  8b8124010000         mov eax, dword ptr [ecx + 0x124]
// 008966ea  3bf8                 cmp edi, eax
// 008966ec  7507                 jne 0x8966f5
// 008966ee  bd29270000           mov ebp, 0x2729
// 008966f3  eb07                 jmp 0x8966fc
// 008966f5  bd2c270000           mov ebp, 0x272c
// 008966fa  8bf8                 mov edi, eax
// 008966fc  8b15ac66c200         mov edx, dword ptr [0xc266ac]
// 00896702  3b566c               cmp edx, dword ptr [esi + 0x6c]
// 00896705  7c0e                 jl 0x896715
// 00896707  6a01                 push 1
// 00896709  6a00                 push 0
// 0089670b  b9a466c200           mov ecx, 0xc266a4
// 00896710  e81d700e00           call 0x97d732
// 00896715  57                   push edi
// 00896716  8bce                 mov ecx, esi
// 00896718  e863faffff           call 0x896180
// 0089671d  85c0                 test eax, eax
// 0089671f  7518                 jne 0x896739
// 00896721  a1ac66c200           mov eax, dword ptr [0xc266ac]
// 00896726  57                   push edi
// 00896727  50                   push eax
// 00896728  b9a466c200           mov ecx, 0xc266a4
// 0089672d  e820680e00           call 0x97cf52
// 00896732  eb05                 jmp 0x896739
// 00896734  bd2d270000           mov ebp, 0x272d
// 00896739  8b8e58010000         mov ecx, dword ptr [esi + 0x158]
// 0089673f  85c9                 test ecx, ecx
// 00896741  746d                 je 0x8967b0
// 00896743  8b11                 mov edx, dword ptr [ecx]
// 00896745  8b4204               mov eax, dword ptr [edx + 4]
// 00896748  6a01                 push 1
// 0089674a  ffd0                 call eax
// 0089674c  c7865801000000000000 mov dword ptr [esi + 0x158], 0
// 00896756  eb58                 jmp 0x8967b0
// 00896758  85c0                 test eax, eax
// 0089675a  7524                 jne 0x896780
// 0089675c  f6c301               test bl, 1
// 0089675f  740a                 je 0x89676b
// 00896761  bd2e270000           mov ebp, 0x272e
// 00896766  83cfff               or edi, 0xffffffff
// 00896769  eb45                 jmp 0x8967b0
// 0089676b  8bb6b4000000         mov esi, dword ptr [esi + 0xb4]
// 00896771  3bfe                 cmp edi, esi
// 00896773  7507                 jne 0x89677c
// 00896775  bd29270000           mov ebp, 0x2729
// 0089677a  eb34                 jmp 0x8967b0
// 0089677c  8bfe                 mov edi, esi
// 0089677e  eb2b                 jmp 0x8967ab
// 00896780  83f8ff               cmp eax, -1
// 00896783  7507                 jne 0x89678c
// 00896785  bd2d270000           mov ebp, 0x272d
// 0089678a  eb24                 jmp 0x8967b0
// 0089678c  50                   push eax
// 0089678d  8bce                 mov ecx, esi
// 0089678f  e86cf5ffff           call 0x895d00
// 00896794  85c0                 test eax, eax
// 00896796  7454                 je 0x8967ec
// 00896798  8b8020010000         mov eax, dword ptr [eax + 0x120]
// 0089679e  3bf8                 cmp edi, eax
// 008967a0  7507                 jne 0x8967a9
// 008967a2  bd29270000           mov ebp, 0x2729
// 008967a7  eb07                 jmp 0x8967b0
// 008967a9  8bf8                 mov edi, eax
// 008967ab  bd2c270000           mov ebp, 0x272c
// 008967b0  33f6                 xor esi, esi
// 008967b2  3974241c             cmp dword ptr [esp + 0x1c], esi
// 008967b6  7e34                 jle 0x8967ec
// 008967b8  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 008967bc  85f6                 test esi, esi
// 008967be  7c53                 jl 0x896813
// 008967c0  3b74241c             cmp esi, dword ptr [esp + 0x1c]
// 008967c4  7d4d                 jge 0x896813
// 008967c6  8b0cb3               mov ecx, dword ptr [ebx + esi*4]
// 008967c9  51                   push ecx
// 008967ca  ff1528bc9e00         call dword ptr [0x9ebc28]
// 008967d0  85c0                 test eax, eax
// 008967d2  7411                 je 0x8967e5
// 008967d4  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 008967d8  8b04b3               mov eax, dword ptr [ebx + esi*4]
// 008967db  52                   push edx
// 008967dc  57                   push edi
// 008967dd  55                   push ebp
// 008967de  50                   push eax
// 008967df  ff1554ba9e00         call dword ptr [0x9eba54]
// 008967e5  46                   inc esi
// 008967e6  3b74241c             cmp esi, dword ptr [esp + 0x1c]
// 008967ea  7cd0                 jl 0x8967bc
// 008967ec  8d4c2414             lea ecx, [esp + 0x14]
// 008967f0  c7442430ffffffff     mov dword ptr [esp + 0x30], 0xffffffff
// 008967f8  e813c8f8ff           call 0x823010
// 008967fd  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00896801  64890d00000000       mov dword ptr fs:[0], ecx
// 00896808  59                   pop ecx
// 00896809  5f                   pop edi
// 0089680a  5e                   pop esi
// 0089680b  5d                   pop ebp
// 0089680c  5b                   pop ebx
// 0089680d  83c420               add esp, 0x20
// 00896810  c20800               ret 8
// 00896813  e83414f1ff           call 0x7a7c4c
// copied from an identical function in another client (function ?OnEndSelection@CXTColorSelectorCtrl@@MAEXHJ@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Controls\XTColorSelectorCtrl.cpp