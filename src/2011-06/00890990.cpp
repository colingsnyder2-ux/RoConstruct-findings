// roc 2011-06 00890990  unit: CXTPOffice2007Theme  size: 773 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00890990
//
// 00890990  6aff                 push -1
// 00890992  68a896a000           push 0xa096a8
// 00890997  64a100000000         mov eax, dword ptr fs:[0]
// 0089099d  50                   push eax
// 0089099e  83ec2c               sub esp, 0x2c
// 008909a1  53                   push ebx
// 008909a2  55                   push ebp
// 008909a3  56                   push esi
// 008909a4  57                   push edi
// 008909a5  a12058c900           mov eax, dword ptr [0xc95820]
// 008909aa  33c4                 xor eax, esp
// 008909ac  50                   push eax
// 008909ad  8d442440             lea eax, [esp + 0x40]
// 008909b1  64a300000000         mov dword ptr fs:[0], eax
// 008909b7  8bf9                 mov edi, ecx
// 008909b9  897c242c             mov dword ptr [esp + 0x2c], edi
// 008909bd  33db                 xor ebx, ebx
// 008909bf  8d4c2414             lea ecx, [esp + 0x14]
// 008909c3  895c2418             mov dword ptr [esp + 0x18], ebx
// 008909c7  ff15b42da400         call dword ptr [0xa42db4]
// 008909cd  8b6c2464             mov ebp, dword ptr [esp + 0x64]
// 008909d1  8d442414             lea eax, [esp + 0x14]
// 008909d5  50                   push eax
// 008909d6  8bcd                 mov ecx, ebp
// 008909d8  895c244c             mov dword ptr [esp + 0x4c], ebx
// 008909dc  e8659cf7ff           call 0x80a646
// 008909e1  8b742450             mov esi, dword ptr [esp + 0x50]
// 008909e5  6a01                 push 1
// 008909e7  8bce                 mov ecx, esi
// 008909e9  e800bc1300           call 0x9cc5ee
// 008909ee  8d8fb4050000         lea ecx, [edi + 0x5b4]
// 008909f4  51                   push ecx
// 008909f5  56                   push esi
// 008909f6  8d4c2438             lea ecx, [esp + 0x38]
// 008909fa  e821c7fcff           call 0x85d120
// 008909ff  c644244801           mov byte ptr [esp + 0x48], 1
// 00890a04  395c2468             cmp dword ptr [esp + 0x68], ebx
// 00890a08  7508                 jne 0x890a12
// 00890a0a  8bbff0050000         mov edi, dword ptr [edi + 0x5f0]
// 00890a10  eb06                 jmp 0x890a18
// 00890a12  8bbfec050000         mov edi, dword ptr [edi + 0x5ec]
// 00890a18  8b16                 mov edx, dword ptr [esi]
// 00890a1a  8b4238               mov eax, dword ptr [edx + 0x38]
// 00890a1d  57                   push edi
// 00890a1e  8bce                 mov ecx, esi
// 00890a20  ffd0                 call eax
// 00890a22  8bcd                 mov ecx, ebp
// 00890a24  e8efbb1300           call 0x9cc618
// 00890a29  a900400000           test eax, 0x4000
// 00890a2e  0f840a020000         je 0x890c3e
// 00890a34  8b5500               mov edx, dword ptr [ebp]
// 00890a37  8b8230010000         mov eax, dword ptr [edx + 0x130]
// 00890a3d  8bcd                 mov ecx, ebp
// 00890a3f  ffd0                 call eax
// 00890a41  f7d8                 neg eax
// 00890a43  1bc0                 sbb eax, eax
// 00890a45  23c5                 and eax, ebp
// 00890a47  7418                 je 0x890a61
// 00890a49  8d4c2420             lea ecx, [esp + 0x20]
// 00890a4d  51                   push ecx
// 00890a4e  8bc8                 mov ecx, eax
// 00890a50  e8fbe9ffff           call 0x88f450
// 00890a55  c644244802           mov byte ptr [esp + 0x48], 2
// 00890a5a  bb01000000           mov ebx, 1
// 00890a5f  eb1c                 jmp 0x890a7d
// 00890a61  68cabea500           push 0xa5beca
// 00890a66  8d4c2420             lea ecx, [esp + 0x20]
// 00890a6a  ff15002ea400         call dword ptr [0xa42e00]
// 00890a70  c744244803000000     mov dword ptr [esp + 0x48], 3
// 00890a78  bb02000000           mov ebx, 2
// 00890a7d  50                   push eax
// 00890a7e  8d4c2454             lea ecx, [esp + 0x54]
// 00890a82  895c241c             mov dword ptr [esp + 0x1c], ebx
// 00890a86  ff15e42da400         call dword ptr [0xa42de4]
// 00890a8c  c744244804000000     mov dword ptr [esp + 0x48], 4
// 00890a94  f6c302               test bl, 2
// 00890a97  740d                 je 0x890aa6
// 00890a99  8d4c241c             lea ecx, [esp + 0x1c]
// 00890a9d  83e3fd               and ebx, 0xfffffffd
// 00890aa0  ff15082ea400         call dword ptr [0xa42e08]
// 00890aa6  c644244806           mov byte ptr [esp + 0x48], 6
// 00890aab  f6c301               test bl, 1
// 00890aae  740d                 je 0x890abd
// 00890ab0  8d4c2420             lea ecx, [esp + 0x20]
// 00890ab4  83e3fe               and ebx, 0xfffffffe
// 00890ab7  ff15082ea400         call dword ptr [0xa42e08]
// 00890abd  8d4c2450             lea ecx, [esp + 0x50]
// 00890ac1  ff15b026a400         call dword ptr [0xa426b0]
// 00890ac7  84c0                 test al, al
// 00890ac9  755f                 jne 0x890b2a
// 00890acb  8d4c2450             lea ecx, [esp + 0x50]
// 00890acf  ff15a826a400         call dword ptr [0xa426a8]
// 00890ad5  50                   push eax
// 00890ad6  8d542428             lea edx, [esp + 0x28]
// 00890ada  52                   push edx
// 00890adb  8d4c241c             lea ecx, [esp + 0x1c]
// 00890adf  ff154829a400         call dword ptr [0xa42948]
// 00890ae5  8bf8                 mov edi, eax
// 00890ae7  83cb04               or ebx, 4
// 00890aea  8d4c2450             lea ecx, [esp + 0x50]
// 00890aee  c644244807           mov byte ptr [esp + 0x48], 7
// 00890af3  895c2418             mov dword ptr [esp + 0x18], ebx
// 00890af7  ff15c82da400         call dword ptr [0xa42dc8]
// 00890afd  50                   push eax
// 00890afe  8bcf                 mov ecx, edi
// 00890b00  ff15cc2da400         call dword ptr [0xa42dcc]
// 00890b06  85c0                 test eax, eax
// 00890b08  8bcd                 mov ecx, ebp
// 00890b0a  0f94442464           sete byte ptr [esp + 0x64]
// 00890b0f  e80abb1300           call 0x9cc61e
// 00890b14  0fb64c2464           movzx ecx, byte ptr [esp + 0x64]
// 00890b19  c1e816               shr eax, 0x16
// 00890b1c  f7d0                 not eax
// 00890b1e  83e101               and ecx, 1
// 00890b21  c644246401           mov byte ptr [esp + 0x64], 1
// 00890b26  84c1                 test cl, al
// 00890b28  7505                 jne 0x890b2f
// 00890b2a  c644246400           mov byte ptr [esp + 0x64], 0
// 00890b2f  c744244806000000     mov dword ptr [esp + 0x48], 6
// 00890b37  f6c304               test bl, 4
// 00890b3a  740a                 je 0x890b46
// 00890b3c  8d4c2424             lea ecx, [esp + 0x24]
// 00890b40  ff15082ea400         call dword ptr [0xa42e08]
// 00890b46  807c246400           cmp byte ptr [esp + 0x64], 0
// 00890b4b  0f84b8000000         je 0x890c09
// 00890b51  8d4c2450             lea ecx, [esp + 0x50]
// 00890b55  ff15a826a400         call dword ptr [0xa426a8]
// 00890b5b  50                   push eax
// 00890b5c  8d4c2454             lea ecx, [esp + 0x54]
// 00890b60  ff15a826a400         call dword ptr [0xa426a8]
// 00890b66  8d4c2418             lea ecx, [esp + 0x18]
// 00890b6a  8bf8                 mov edi, eax
// 00890b6c  ff15a826a400         call dword ptr [0xa426a8]
// 00890b72  2bc7                 sub eax, edi
// 00890b74  50                   push eax
// 00890b75  8d4c241c             lea ecx, [esp + 0x1c]
// 00890b79  ff15c829a400         call dword ptr [0xa429c8]
// 00890b7f  8b3e                 mov edi, dword ptr [esi]
// 00890b81  6824880000           push 0x8824
// 00890b86  8d542458             lea edx, [esp + 0x58]
// 00890b8a  52                   push edx
// 00890b8b  8d4c241c             lea ecx, [esp + 0x1c]
// 00890b8f  ff15a826a400         call dword ptr [0xa426a8]
// 00890b95  50                   push eax
// 00890b96  8d4c2420             lea ecx, [esp + 0x20]
// 00890b9a  ff15c82da400         call dword ptr [0xa42dc8]
// 00890ba0  50                   push eax
// 00890ba1  8b4770               mov eax, dword ptr [edi + 0x70]
// 00890ba4  8bce                 mov ecx, esi
// 00890ba6  ffd0                 call eax
// 00890ba8  8d4c2414             lea ecx, [esp + 0x14]
// 00890bac  51                   push ecx
// 00890bad  8d542428             lea edx, [esp + 0x28]
// 00890bb1  52                   push edx
// 00890bb2  8bce                 mov ecx, esi
// 00890bb4  e807acbfff           call 0x48b7c0
// 00890bb9  8b00                 mov eax, dword ptr [eax]
// 00890bbb  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 00890bbf  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 00890bc3  8d440102             lea eax, [ecx + eax + 2]
// 00890bc7  83c2fb               add edx, -5
// 00890bca  3bc2                 cmp eax, edx
// 00890bcc  89442454             mov dword ptr [esp + 0x54], eax
// 00890bd0  7d60                 jge 0x890c32
// 00890bd2  837c246800           cmp dword ptr [esp + 0x68], 0
// 00890bd7  7414                 je 0x890bed
// 00890bd9  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00890bdd  8b91f4050000         mov edx, dword ptr [ecx + 0x5f4]
// 00890be3  8b06                 mov eax, dword ptr [esi]
// 00890be5  8b4038               mov eax, dword ptr [eax + 0x38]
// 00890be8  52                   push edx
// 00890be9  8bce                 mov ecx, esi
// 00890beb  ffd0                 call eax
// 00890bed  8b3e                 mov edi, dword ptr [esi]
// 00890bef  6824880000           push 0x8824
// 00890bf4  8d4c2458             lea ecx, [esp + 0x58]
// 00890bf8  51                   push ecx
// 00890bf9  8d4c2458             lea ecx, [esp + 0x58]
// 00890bfd  ff15a826a400         call dword ptr [0xa426a8]
// 00890c03  8d4c2458             lea ecx, [esp + 0x58]
// 00890c07  eb1a                 jmp 0x890c23
// 00890c09  8b3e                 mov edi, dword ptr [esi]
// 00890c0b  6824880000           push 0x8824
// 00890c10  8d442458             lea eax, [esp + 0x58]
// 00890c14  50                   push eax
// 00890c15  8d4c241c             lea ecx, [esp + 0x1c]
// 00890c19  ff15a826a400         call dword ptr [0xa426a8]
// 00890c1f  8d4c241c             lea ecx, [esp + 0x1c]
// 00890c23  50                   push eax
// 00890c24  ff15c82da400         call dword ptr [0xa42dc8]
// 00890c2a  8b5770               mov edx, dword ptr [edi + 0x70]
// 00890c2d  50                   push eax
// 00890c2e  8bce                 mov ecx, esi
// 00890c30  ffd2                 call edx
// 00890c32  8d4c2450             lea ecx, [esp + 0x50]
// 00890c36  ff15082ea400         call dword ptr [0xa42e08]
// 00890c3c  eb29                 jmp 0x890c67
// 00890c3e  8b3e                 mov edi, dword ptr [esi]
// 00890c40  6824880000           push 0x8824
// 00890c45  8d442458             lea eax, [esp + 0x58]
// 00890c49  50                   push eax
// 00890c4a  8d4c241c             lea ecx, [esp + 0x1c]
// 00890c4e  ff15a826a400         call dword ptr [0xa426a8]
// 00890c54  50                   push eax
// 00890c55  8d4c2420             lea ecx, [esp + 0x20]
// 00890c59  ff15c82da400         call dword ptr [0xa42dc8]
// 00890c5f  8b5770               mov edx, dword ptr [edi + 0x70]
// 00890c62  50                   push eax
// 00890c63  8bce                 mov ecx, esi
// 00890c65  ffd2                 call edx
// 00890c67  8d4c2430             lea ecx, [esp + 0x30]
// 00890c6b  c644244800           mov byte ptr [esp + 0x48], 0
// 00890c70  e82bc5fcff           call 0x85d1a0
// 00890c75  8d4c2414             lea ecx, [esp + 0x14]
// 00890c79  ff15082ea400         call dword ptr [0xa42e08]
// 00890c7f  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00890c83  64890d00000000       mov dword ptr fs:[0], ecx
// 00890c8a  59                   pop ecx
// 00890c8b  5f                   pop edi
// 00890c8c  5e                   pop esi
// 00890c8d  5d                   pop ebp
// 00890c8e  5b                   pop ebx
// 00890c8f  83c438               add esp, 0x38
// 00890c92  c21c00               ret 0x1c
// copied from an identical function in another client (function ?DrawCaptionText@CXTPOffice2007Theme@@MAEXPAVCDC@@VCRect@@PAVCWnd@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPOffice2007Theme.cpp