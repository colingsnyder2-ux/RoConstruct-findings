// roc 2012-06 00a08f70  unit: CXTPOffice2007Theme  size: 773 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a08f70
//
// 00a08f70  6aff                 push -1
// 00a08f72  68c832ae00           push 0xae32c8
// 00a08f77  64a100000000         mov eax, dword ptr fs:[0]
// 00a08f7d  50                   push eax
// 00a08f7e  83ec2c               sub esp, 0x2c
// 00a08f81  53                   push ebx
// 00a08f82  55                   push ebp
// 00a08f83  56                   push esi
// 00a08f84  57                   push edi
// 00a08f85  a1d027e000           mov eax, dword ptr [0xe027d0]
// 00a08f8a  33c4                 xor eax, esp
// 00a08f8c  50                   push eax
// 00a08f8d  8d442440             lea eax, [esp + 0x40]
// 00a08f91  64a300000000         mov dword ptr fs:[0], eax
// 00a08f97  8bf9                 mov edi, ecx
// 00a08f99  897c242c             mov dword ptr [esp + 0x2c], edi
// 00a08f9d  33db                 xor ebx, ebx
// 00a08f9f  8d4c2414             lea ecx, [esp + 0x14]
// 00a08fa3  895c2418             mov dword ptr [esp + 0x18], ebx
// 00a08fa7  ff158447b200         call dword ptr [0xb24784]
// 00a08fad  8b6c2464             mov ebp, dword ptr [esp + 0x64]
// 00a08fb1  8d442414             lea eax, [esp + 0x14]
// 00a08fb5  50                   push eax
// 00a08fb6  8bcd                 mov ecx, ebp
// 00a08fb8  895c244c             mov dword ptr [esp + 0x4c], ebx
// 00a08fbc  e83597f7ff           call 0x9826f6
// 00a08fc1  8b742450             mov esi, dword ptr [esp + 0x50]
// 00a08fc5  6a01                 push 1
// 00a08fc7  8bce                 mov ecx, esi
// 00a08fc9  e8da050900           call 0xa995a8
// 00a08fce  8d8fb4050000         lea ecx, [edi + 0x5b4]
// 00a08fd4  51                   push ecx
// 00a08fd5  56                   push esi
// 00a08fd6  8d4c2438             lea ecx, [esp + 0x38]
// 00a08fda  e851c5fcff           call 0x9d5530
// 00a08fdf  c644244801           mov byte ptr [esp + 0x48], 1
// 00a08fe4  395c2468             cmp dword ptr [esp + 0x68], ebx
// 00a08fe8  7508                 jne 0xa08ff2
// 00a08fea  8bbff0050000         mov edi, dword ptr [edi + 0x5f0]
// 00a08ff0  eb06                 jmp 0xa08ff8
// 00a08ff2  8bbfec050000         mov edi, dword ptr [edi + 0x5ec]
// 00a08ff8  8b16                 mov edx, dword ptr [esi]
// 00a08ffa  8b4238               mov eax, dword ptr [edx + 0x38]
// 00a08ffd  57                   push edi
// 00a08ffe  8bce                 mov ecx, esi
// 00a09000  ffd0                 call eax
// 00a09002  8bcd                 mov ecx, ebp
// 00a09004  e8c9050900           call 0xa995d2
// 00a09009  a900400000           test eax, 0x4000
// 00a0900e  0f840a020000         je 0xa0921e
// 00a09014  8b5500               mov edx, dword ptr [ebp]
// 00a09017  8b8230010000         mov eax, dword ptr [edx + 0x130]
// 00a0901d  8bcd                 mov ecx, ebp
// 00a0901f  ffd0                 call eax
// 00a09021  f7d8                 neg eax
// 00a09023  1bc0                 sbb eax, eax
// 00a09025  23c5                 and eax, ebp
// 00a09027  7418                 je 0xa09041
// 00a09029  8d4c2420             lea ecx, [esp + 0x20]
// 00a0902d  51                   push ecx
// 00a0902e  8bc8                 mov ecx, eax
// 00a09030  e8fbe9ffff           call 0xa07a30
// 00a09035  c644244802           mov byte ptr [esp + 0x48], 2
// 00a0903a  bb01000000           mov ebx, 1
// 00a0903f  eb1c                 jmp 0xa0905d
// 00a09041  68e83bb400           push 0xb43be8
// 00a09046  8d4c2420             lea ecx, [esp + 0x20]
// 00a0904a  ff15c847b200         call dword ptr [0xb247c8]
// 00a09050  c744244803000000     mov dword ptr [esp + 0x48], 3
// 00a09058  bb02000000           mov ebx, 2
// 00a0905d  50                   push eax
// 00a0905e  8d4c2454             lea ecx, [esp + 0x54]
// 00a09062  895c241c             mov dword ptr [esp + 0x1c], ebx
// 00a09066  ff158047b200         call dword ptr [0xb24780]
// 00a0906c  c744244804000000     mov dword ptr [esp + 0x48], 4
// 00a09074  f6c302               test bl, 2
// 00a09077  740d                 je 0xa09086
// 00a09079  8d4c241c             lea ecx, [esp + 0x1c]
// 00a0907d  83e3fd               and ebx, 0xfffffffd
// 00a09080  ff15d047b200         call dword ptr [0xb247d0]
// 00a09086  c644244806           mov byte ptr [esp + 0x48], 6
// 00a0908b  f6c301               test bl, 1
// 00a0908e  740d                 je 0xa0909d
// 00a09090  8d4c2420             lea ecx, [esp + 0x20]
// 00a09094  83e3fe               and ebx, 0xfffffffe
// 00a09097  ff15d047b200         call dword ptr [0xb247d0]
// 00a0909d  8d4c2450             lea ecx, [esp + 0x50]
// 00a090a1  ff156046b200         call dword ptr [0xb24660]
// 00a090a7  84c0                 test al, al
// 00a090a9  755f                 jne 0xa0910a
// 00a090ab  8d4c2450             lea ecx, [esp + 0x50]
// 00a090af  ff155846b200         call dword ptr [0xb24658]
// 00a090b5  50                   push eax
// 00a090b6  8d542428             lea edx, [esp + 0x28]
// 00a090ba  52                   push edx
// 00a090bb  8d4c241c             lea ecx, [esp + 0x1c]
// 00a090bf  ff15ec49b200         call dword ptr [0xb249ec]
// 00a090c5  8bf8                 mov edi, eax
// 00a090c7  83cb04               or ebx, 4
// 00a090ca  8d4c2450             lea ecx, [esp + 0x50]
// 00a090ce  c644244807           mov byte ptr [esp + 0x48], 7
// 00a090d3  895c2418             mov dword ptr [esp + 0x18], ebx
// 00a090d7  ff159847b200         call dword ptr [0xb24798]
// 00a090dd  50                   push eax
// 00a090de  8bcf                 mov ecx, edi
// 00a090e0  ff159c47b200         call dword ptr [0xb2479c]
// 00a090e6  85c0                 test eax, eax
// 00a090e8  8bcd                 mov ecx, ebp
// 00a090ea  0f94442464           sete byte ptr [esp + 0x64]
// 00a090ef  e8e4040900           call 0xa995d8
// 00a090f4  0fb64c2464           movzx ecx, byte ptr [esp + 0x64]
// 00a090f9  c1e816               shr eax, 0x16
// 00a090fc  f7d0                 not eax
// 00a090fe  83e101               and ecx, 1
// 00a09101  c644246401           mov byte ptr [esp + 0x64], 1
// 00a09106  84c1                 test cl, al
// 00a09108  7505                 jne 0xa0910f
// 00a0910a  c644246400           mov byte ptr [esp + 0x64], 0
// 00a0910f  c744244806000000     mov dword ptr [esp + 0x48], 6
// 00a09117  f6c304               test bl, 4
// 00a0911a  740a                 je 0xa09126
// 00a0911c  8d4c2424             lea ecx, [esp + 0x24]
// 00a09120  ff15d047b200         call dword ptr [0xb247d0]
// 00a09126  807c246400           cmp byte ptr [esp + 0x64], 0
// 00a0912b  0f84b8000000         je 0xa091e9
// 00a09131  8d4c2450             lea ecx, [esp + 0x50]
// 00a09135  ff155846b200         call dword ptr [0xb24658]
// 00a0913b  50                   push eax
// 00a0913c  8d4c2454             lea ecx, [esp + 0x54]
// 00a09140  ff155846b200         call dword ptr [0xb24658]
// 00a09146  8d4c2418             lea ecx, [esp + 0x18]
// 00a0914a  8bf8                 mov edi, eax
// 00a0914c  ff155846b200         call dword ptr [0xb24658]
// 00a09152  2bc7                 sub eax, edi
// 00a09154  50                   push eax
// 00a09155  8d4c241c             lea ecx, [esp + 0x1c]
// 00a09159  ff15644ab200         call dword ptr [0xb24a64]
// 00a0915f  8b3e                 mov edi, dword ptr [esi]
// 00a09161  6824880000           push 0x8824
// 00a09166  8d542458             lea edx, [esp + 0x58]
// 00a0916a  52                   push edx
// 00a0916b  8d4c241c             lea ecx, [esp + 0x1c]
// 00a0916f  ff155846b200         call dword ptr [0xb24658]
// 00a09175  50                   push eax
// 00a09176  8d4c2420             lea ecx, [esp + 0x20]
// 00a0917a  ff159847b200         call dword ptr [0xb24798]
// 00a09180  50                   push eax
// 00a09181  8b4770               mov eax, dword ptr [edi + 0x70]
// 00a09184  8bce                 mov ecx, esi
// 00a09186  ffd0                 call eax
// 00a09188  8d4c2414             lea ecx, [esp + 0x14]
// 00a0918c  51                   push ecx
// 00a0918d  8d542428             lea edx, [esp + 0x28]
// 00a09191  52                   push edx
// 00a09192  8bce                 mov ecx, esi
// 00a09194  e84753a9ff           call 0x49e4e0
// 00a09199  8b00                 mov eax, dword ptr [eax]
// 00a0919b  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 00a0919f  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 00a091a3  8d440102             lea eax, [ecx + eax + 2]
// 00a091a7  83c2fb               add edx, -5
// 00a091aa  3bc2                 cmp eax, edx
// 00a091ac  89442454             mov dword ptr [esp + 0x54], eax
// 00a091b0  7d60                 jge 0xa09212
// 00a091b2  837c246800           cmp dword ptr [esp + 0x68], 0
// 00a091b7  7414                 je 0xa091cd
// 00a091b9  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00a091bd  8b91f4050000         mov edx, dword ptr [ecx + 0x5f4]
// 00a091c3  8b06                 mov eax, dword ptr [esi]
// 00a091c5  8b4038               mov eax, dword ptr [eax + 0x38]
// 00a091c8  52                   push edx
// 00a091c9  8bce                 mov ecx, esi
// 00a091cb  ffd0                 call eax
// 00a091cd  8b3e                 mov edi, dword ptr [esi]
// 00a091cf  6824880000           push 0x8824
// 00a091d4  8d4c2458             lea ecx, [esp + 0x58]
// 00a091d8  51                   push ecx
// 00a091d9  8d4c2458             lea ecx, [esp + 0x58]
// 00a091dd  ff155846b200         call dword ptr [0xb24658]
// 00a091e3  8d4c2458             lea ecx, [esp + 0x58]
// 00a091e7  eb1a                 jmp 0xa09203
// 00a091e9  8b3e                 mov edi, dword ptr [esi]
// 00a091eb  6824880000           push 0x8824
// 00a091f0  8d442458             lea eax, [esp + 0x58]
// 00a091f4  50                   push eax
// 00a091f5  8d4c241c             lea ecx, [esp + 0x1c]
// 00a091f9  ff155846b200         call dword ptr [0xb24658]
// 00a091ff  8d4c241c             lea ecx, [esp + 0x1c]
// 00a09203  50                   push eax
// 00a09204  ff159847b200         call dword ptr [0xb24798]
// 00a0920a  8b5770               mov edx, dword ptr [edi + 0x70]
// 00a0920d  50                   push eax
// 00a0920e  8bce                 mov ecx, esi
// 00a09210  ffd2                 call edx
// 00a09212  8d4c2450             lea ecx, [esp + 0x50]
// 00a09216  ff15d047b200         call dword ptr [0xb247d0]
// 00a0921c  eb29                 jmp 0xa09247
// 00a0921e  8b3e                 mov edi, dword ptr [esi]
// 00a09220  6824880000           push 0x8824
// 00a09225  8d442458             lea eax, [esp + 0x58]
// 00a09229  50                   push eax
// 00a0922a  8d4c241c             lea ecx, [esp + 0x1c]
// 00a0922e  ff155846b200         call dword ptr [0xb24658]
// 00a09234  50                   push eax
// 00a09235  8d4c2420             lea ecx, [esp + 0x20]
// 00a09239  ff159847b200         call dword ptr [0xb24798]
// 00a0923f  8b5770               mov edx, dword ptr [edi + 0x70]
// 00a09242  50                   push eax
// 00a09243  8bce                 mov ecx, esi
// 00a09245  ffd2                 call edx
// 00a09247  8d4c2430             lea ecx, [esp + 0x30]
// 00a0924b  c644244800           mov byte ptr [esp + 0x48], 0
// 00a09250  e85bc3fcff           call 0x9d55b0
// 00a09255  8d4c2414             lea ecx, [esp + 0x14]
// 00a09259  ff15d047b200         call dword ptr [0xb247d0]
// 00a0925f  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00a09263  64890d00000000       mov dword ptr fs:[0], ecx
// 00a0926a  59                   pop ecx
// 00a0926b  5f                   pop edi
// 00a0926c  5e                   pop esi
// 00a0926d  5d                   pop ebp
// 00a0926e  5b                   pop ebx
// 00a0926f  83c438               add esp, 0x38
// 00a09272  c21c00               ret 0x1c
// copied from an identical function in another client (function ?DrawCaptionText@CXTPOffice2007Theme@@MAEXPAVCDC@@VCRect@@PAVCWnd@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPOffice2007Theme.cpp