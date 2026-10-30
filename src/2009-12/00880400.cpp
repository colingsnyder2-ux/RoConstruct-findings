// roc 2009-12 00880400  unit: CXTPOffice2007Theme  size: 773 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00880400
//
// 00880400  6aff                 push -1
// 00880402  6888089600           push 0x960888
// 00880407  64a100000000         mov eax, dword ptr fs:[0]
// 0088040d  50                   push eax
// 0088040e  83ec2c               sub esp, 0x2c
// 00880411  53                   push ebx
// 00880412  55                   push ebp
// 00880413  56                   push esi
// 00880414  57                   push edi
// 00880415  a10052b600           mov eax, dword ptr [0xb65200]
// 0088041a  33c4                 xor eax, esp
// 0088041c  50                   push eax
// 0088041d  8d442440             lea eax, [esp + 0x40]
// 00880421  64a300000000         mov dword ptr fs:[0], eax
// 00880427  8bf9                 mov edi, ecx
// 00880429  897c242c             mov dword ptr [esp + 0x2c], edi
// 0088042d  33db                 xor ebx, ebx
// 0088042f  8d4c2414             lea ecx, [esp + 0x14]
// 00880433  895c2418             mov dword ptr [esp + 0x18], ebx
// 00880437  ff1574de9800         call dword ptr [0x98de74]
// 0088043d  8b6c2464             mov ebp, dword ptr [esp + 0x64]
// 00880441  8d442414             lea eax, [esp + 0x14]
// 00880445  50                   push eax
// 00880446  8bcd                 mov ecx, ebp
// 00880448  895c244c             mov dword ptr [esp + 0x4c], ebx
// 0088044c  e8f739f7ff           call 0x7f3e48
// 00880451  8b742450             mov esi, dword ptr [esp + 0x50]
// 00880455  6a01                 push 1
// 00880457  8bce                 mov ecx, esi
// 00880459  e832600a00           call 0x926490
// 0088045e  8d8fb4050000         lea ecx, [edi + 0x5b4]
// 00880464  51                   push ecx
// 00880465  56                   push esi
// 00880466  8d4c2438             lea ecx, [esp + 0x38]
// 0088046a  e8f1b1fcff           call 0x84b660
// 0088046f  c644244801           mov byte ptr [esp + 0x48], 1
// 00880474  395c2468             cmp dword ptr [esp + 0x68], ebx
// 00880478  7508                 jne 0x880482
// 0088047a  8bbff0050000         mov edi, dword ptr [edi + 0x5f0]
// 00880480  eb06                 jmp 0x880488
// 00880482  8bbfec050000         mov edi, dword ptr [edi + 0x5ec]
// 00880488  8b16                 mov edx, dword ptr [esi]
// 0088048a  8b4238               mov eax, dword ptr [edx + 0x38]
// 0088048d  57                   push edi
// 0088048e  8bce                 mov ecx, esi
// 00880490  ffd0                 call eax
// 00880492  8bcd                 mov ecx, ebp
// 00880494  e8d95f0a00           call 0x926472
// 00880499  a900400000           test eax, 0x4000
// 0088049e  0f840a020000         je 0x8806ae
// 008804a4  8b5500               mov edx, dword ptr [ebp]
// 008804a7  8b8230010000         mov eax, dword ptr [edx + 0x130]
// 008804ad  8bcd                 mov ecx, ebp
// 008804af  ffd0                 call eax
// 008804b1  f7d8                 neg eax
// 008804b3  1bc0                 sbb eax, eax
// 008804b5  23c5                 and eax, ebp
// 008804b7  7418                 je 0x8804d1
// 008804b9  8d4c2420             lea ecx, [esp + 0x20]
// 008804bd  51                   push ecx
// 008804be  8bc8                 mov ecx, eax
// 008804c0  e8fbe9ffff           call 0x87eec0
// 008804c5  c644244802           mov byte ptr [esp + 0x48], 2
// 008804ca  bb01000000           mov ebx, 1
// 008804cf  eb1c                 jmp 0x8804ed
// 008804d1  6856fd9900           push 0x99fd56
// 008804d6  8d4c2420             lea ecx, [esp + 0x20]
// 008804da  ff15b8de9800         call dword ptr [0x98deb8]
// 008804e0  c744244803000000     mov dword ptr [esp + 0x48], 3
// 008804e8  bb02000000           mov ebx, 2
// 008804ed  50                   push eax
// 008804ee  8d4c2454             lea ecx, [esp + 0x54]
// 008804f2  895c241c             mov dword ptr [esp + 0x1c], ebx
// 008804f6  ff1594de9800         call dword ptr [0x98de94]
// 008804fc  c744244804000000     mov dword ptr [esp + 0x48], 4
// 00880504  f6c302               test bl, 2
// 00880507  740d                 je 0x880516
// 00880509  8d4c241c             lea ecx, [esp + 0x1c]
// 0088050d  83e3fd               and ebx, 0xfffffffd
// 00880510  ff15c0de9800         call dword ptr [0x98dec0]
// 00880516  c644244806           mov byte ptr [esp + 0x48], 6
// 0088051b  f6c301               test bl, 1
// 0088051e  740d                 je 0x88052d
// 00880520  8d4c2420             lea ecx, [esp + 0x20]
// 00880524  83e3fe               and ebx, 0xfffffffe
// 00880527  ff15c0de9800         call dword ptr [0x98dec0]
// 0088052d  8d4c2450             lea ecx, [esp + 0x50]
// 00880531  ff15bcdd9800         call dword ptr [0x98ddbc]
// 00880537  84c0                 test al, al
// 00880539  755f                 jne 0x88059a
// 0088053b  8d4c2450             lea ecx, [esp + 0x50]
// 0088053f  ff15b4dd9800         call dword ptr [0x98ddb4]
// 00880545  50                   push eax
// 00880546  8d542428             lea edx, [esp + 0x28]
// 0088054a  52                   push edx
// 0088054b  8d4c241c             lea ecx, [esp + 0x1c]
// 0088054f  ff15a4d89800         call dword ptr [0x98d8a4]
// 00880555  8bf8                 mov edi, eax
// 00880557  83cb04               or ebx, 4
// 0088055a  8d4c2450             lea ecx, [esp + 0x50]
// 0088055e  c644244807           mov byte ptr [esp + 0x48], 7
// 00880563  895c2418             mov dword ptr [esp + 0x18], ebx
// 00880567  ff1580de9800         call dword ptr [0x98de80]
// 0088056d  50                   push eax
// 0088056e  8bcf                 mov ecx, edi
// 00880570  ff1584de9800         call dword ptr [0x98de84]
// 00880576  85c0                 test eax, eax
// 00880578  8bcd                 mov ecx, ebp
// 0088057a  0f94442464           sete byte ptr [esp + 0x64]
// 0088057f  e8f45e0a00           call 0x926478
// 00880584  0fb64c2464           movzx ecx, byte ptr [esp + 0x64]
// 00880589  c1e816               shr eax, 0x16
// 0088058c  f7d0                 not eax
// 0088058e  83e101               and ecx, 1
// 00880591  c644246401           mov byte ptr [esp + 0x64], 1
// 00880596  84c1                 test cl, al
// 00880598  7505                 jne 0x88059f
// 0088059a  c644246400           mov byte ptr [esp + 0x64], 0
// 0088059f  c744244806000000     mov dword ptr [esp + 0x48], 6
// 008805a7  f6c304               test bl, 4
// 008805aa  740a                 je 0x8805b6
// 008805ac  8d4c2424             lea ecx, [esp + 0x24]
// 008805b0  ff15c0de9800         call dword ptr [0x98dec0]
// 008805b6  807c246400           cmp byte ptr [esp + 0x64], 0
// 008805bb  0f84b8000000         je 0x880679
// 008805c1  8d4c2450             lea ecx, [esp + 0x50]
// 008805c5  ff15b4dd9800         call dword ptr [0x98ddb4]
// 008805cb  50                   push eax
// 008805cc  8d4c2454             lea ecx, [esp + 0x54]
// 008805d0  ff15b4dd9800         call dword ptr [0x98ddb4]
// 008805d6  8d4c2418             lea ecx, [esp + 0x18]
// 008805da  8bf8                 mov edi, eax
// 008805dc  ff15b4dd9800         call dword ptr [0x98ddb4]
// 008805e2  2bc7                 sub eax, edi
// 008805e4  50                   push eax
// 008805e5  8d4c241c             lea ecx, [esp + 0x1c]
// 008805e9  ff151cda9800         call dword ptr [0x98da1c]
// 008805ef  8b3e                 mov edi, dword ptr [esi]
// 008805f1  6824880000           push 0x8824
// 008805f6  8d542458             lea edx, [esp + 0x58]
// 008805fa  52                   push edx
// 008805fb  8d4c241c             lea ecx, [esp + 0x1c]
// 008805ff  ff15b4dd9800         call dword ptr [0x98ddb4]
// 00880605  50                   push eax
// 00880606  8d4c2420             lea ecx, [esp + 0x20]
// 0088060a  ff1580de9800         call dword ptr [0x98de80]
// 00880610  50                   push eax
// 00880611  8b4770               mov eax, dword ptr [edi + 0x70]
// 00880614  8bce                 mov ecx, esi
// 00880616  ffd0                 call eax
// 00880618  8d4c2414             lea ecx, [esp + 0x14]
// 0088061c  51                   push ecx
// 0088061d  8d542428             lea edx, [esp + 0x28]
// 00880621  52                   push edx
// 00880622  8bce                 mov ecx, esi
// 00880624  e887adbeff           call 0x46b3b0
// 00880629  8b00                 mov eax, dword ptr [eax]
// 0088062b  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 0088062f  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 00880633  8d440102             lea eax, [ecx + eax + 2]
// 00880637  83c2fb               add edx, -5
// 0088063a  3bc2                 cmp eax, edx
// 0088063c  89442454             mov dword ptr [esp + 0x54], eax
// 00880640  7d60                 jge 0x8806a2
// 00880642  837c246800           cmp dword ptr [esp + 0x68], 0
// 00880647  7414                 je 0x88065d
// 00880649  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0088064d  8b91f4050000         mov edx, dword ptr [ecx + 0x5f4]
// 00880653  8b06                 mov eax, dword ptr [esi]
// 00880655  8b4038               mov eax, dword ptr [eax + 0x38]
// 00880658  52                   push edx
// 00880659  8bce                 mov ecx, esi
// 0088065b  ffd0                 call eax
// 0088065d  8b3e                 mov edi, dword ptr [esi]
// 0088065f  6824880000           push 0x8824
// 00880664  8d4c2458             lea ecx, [esp + 0x58]
// 00880668  51                   push ecx
// 00880669  8d4c2458             lea ecx, [esp + 0x58]
// 0088066d  ff15b4dd9800         call dword ptr [0x98ddb4]
// 00880673  8d4c2458             lea ecx, [esp + 0x58]
// 00880677  eb1a                 jmp 0x880693
// 00880679  8b3e                 mov edi, dword ptr [esi]
// 0088067b  6824880000           push 0x8824
// 00880680  8d442458             lea eax, [esp + 0x58]
// 00880684  50                   push eax
// 00880685  8d4c241c             lea ecx, [esp + 0x1c]
// 00880689  ff15b4dd9800         call dword ptr [0x98ddb4]
// 0088068f  8d4c241c             lea ecx, [esp + 0x1c]
// 00880693  50                   push eax
// 00880694  ff1580de9800         call dword ptr [0x98de80]
// 0088069a  8b5770               mov edx, dword ptr [edi + 0x70]
// 0088069d  50                   push eax
// 0088069e  8bce                 mov ecx, esi
// 008806a0  ffd2                 call edx
// 008806a2  8d4c2450             lea ecx, [esp + 0x50]
// 008806a6  ff15c0de9800         call dword ptr [0x98dec0]
// 008806ac  eb29                 jmp 0x8806d7
// 008806ae  8b3e                 mov edi, dword ptr [esi]
// 008806b0  6824880000           push 0x8824
// 008806b5  8d442458             lea eax, [esp + 0x58]
// 008806b9  50                   push eax
// 008806ba  8d4c241c             lea ecx, [esp + 0x1c]
// 008806be  ff15b4dd9800         call dword ptr [0x98ddb4]
// 008806c4  50                   push eax
// 008806c5  8d4c2420             lea ecx, [esp + 0x20]
// 008806c9  ff1580de9800         call dword ptr [0x98de80]
// 008806cf  8b5770               mov edx, dword ptr [edi + 0x70]
// 008806d2  50                   push eax
// 008806d3  8bce                 mov ecx, esi
// 008806d5  ffd2                 call edx
// 008806d7  8d4c2430             lea ecx, [esp + 0x30]
// 008806db  c644244800           mov byte ptr [esp + 0x48], 0
// 008806e0  e8fbaffcff           call 0x84b6e0
// 008806e5  8d4c2414             lea ecx, [esp + 0x14]
// 008806e9  ff15c0de9800         call dword ptr [0x98dec0]
// 008806ef  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 008806f3  64890d00000000       mov dword ptr fs:[0], ecx
// 008806fa  59                   pop ecx
// 008806fb  5f                   pop edi
// 008806fc  5e                   pop esi
// 008806fd  5d                   pop ebp
// 008806fe  5b                   pop ebx
// 008806ff  83c438               add esp, 0x38
// 00880702  c21c00               ret 0x1c
// copied from an identical function in another client (function ?DrawCaptionText@CXTPOffice2007Theme@@MAEXPAVCDC@@VCRect@@PAVCWnd@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPOffice2007Theme.cpp