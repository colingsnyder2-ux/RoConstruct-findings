// roc 2009-06 007a54d0  unit: CXTPOffice2007Theme  size: 773 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007a54d0
//
// 007a54d0  6aff                 push -1
// 007a54d2  6898c58700           push 0x87c598
// 007a54d7  64a100000000         mov eax, dword ptr fs:[0]
// 007a54dd  50                   push eax
// 007a54de  83ec2c               sub esp, 0x2c
// 007a54e1  53                   push ebx
// 007a54e2  55                   push ebp
// 007a54e3  56                   push esi
// 007a54e4  57                   push edi
// 007a54e5  a1304fa200           mov eax, dword ptr [0xa24f30]
// 007a54ea  33c4                 xor eax, esp
// 007a54ec  50                   push eax
// 007a54ed  8d442440             lea eax, [esp + 0x40]
// 007a54f1  64a300000000         mov dword ptr fs:[0], eax
// 007a54f7  8bf9                 mov edi, ecx
// 007a54f9  897c242c             mov dword ptr [esp + 0x2c], edi
// 007a54fd  33db                 xor ebx, ebx
// 007a54ff  8d4c2414             lea ecx, [esp + 0x14]
// 007a5503  895c2418             mov dword ptr [esp + 0x18], ebx
// 007a5507  ff15bcfc8900         call dword ptr [0x89fcbc]
// 007a550d  8b6c2464             mov ebp, dword ptr [esp + 0x64]
// 007a5511  8d442414             lea eax, [esp + 0x14]
// 007a5515  50                   push eax
// 007a5516  8bcd                 mov ecx, ebp
// 007a5518  895c244c             mov dword ptr [esp + 0x4c], ebx
// 007a551c  e8ff3af7ff           call 0x719020
// 007a5521  8b742450             mov esi, dword ptr [esp + 0x50]
// 007a5525  6a01                 push 1
// 007a5527  8bce                 mov ecx, esi
// 007a5529  e8d8690a00           call 0x84bf06
// 007a552e  8d8fb4050000         lea ecx, [edi + 0x5b4]
// 007a5534  51                   push ecx
// 007a5535  56                   push esi
// 007a5536  8d4c2438             lea ecx, [esp + 0x38]
// 007a553a  e821b3fcff           call 0x770860
// 007a553f  c644244801           mov byte ptr [esp + 0x48], 1
// 007a5544  395c2468             cmp dword ptr [esp + 0x68], ebx
// 007a5548  7508                 jne 0x7a5552
// 007a554a  8bbff0050000         mov edi, dword ptr [edi + 0x5f0]
// 007a5550  eb06                 jmp 0x7a5558
// 007a5552  8bbfec050000         mov edi, dword ptr [edi + 0x5ec]
// 007a5558  8b16                 mov edx, dword ptr [esi]
// 007a555a  8b4238               mov eax, dword ptr [edx + 0x38]
// 007a555d  57                   push edi
// 007a555e  8bce                 mov ecx, esi
// 007a5560  ffd0                 call eax
// 007a5562  8bcd                 mov ecx, ebp
// 007a5564  e873690a00           call 0x84bedc
// 007a5569  a900400000           test eax, 0x4000
// 007a556e  0f840a020000         je 0x7a577e
// 007a5574  8b5500               mov edx, dword ptr [ebp]
// 007a5577  8b8230010000         mov eax, dword ptr [edx + 0x130]
// 007a557d  8bcd                 mov ecx, ebp
// 007a557f  ffd0                 call eax
// 007a5581  f7d8                 neg eax
// 007a5583  1bc0                 sbb eax, eax
// 007a5585  23c5                 and eax, ebp
// 007a5587  7418                 je 0x7a55a1
// 007a5589  8d4c2420             lea ecx, [esp + 0x20]
// 007a558d  51                   push ecx
// 007a558e  8bc8                 mov ecx, eax
// 007a5590  e8ebe9ffff           call 0x7a3f80
// 007a5595  c644244802           mov byte ptr [esp + 0x48], 2
// 007a559a  bb01000000           mov ebx, 1
// 007a559f  eb1c                 jmp 0x7a55bd
// 007a55a1  6816d28a00           push 0x8ad216
// 007a55a6  8d4c2420             lea ecx, [esp + 0x20]
// 007a55aa  ff1508fd8900         call dword ptr [0x89fd08]
// 007a55b0  c744244803000000     mov dword ptr [esp + 0x48], 3
// 007a55b8  bb02000000           mov ebx, 2
// 007a55bd  50                   push eax
// 007a55be  8d4c2454             lea ecx, [esp + 0x54]
// 007a55c2  895c241c             mov dword ptr [esp + 0x1c], ebx
// 007a55c6  ff15e4fc8900         call dword ptr [0x89fce4]
// 007a55cc  c744244804000000     mov dword ptr [esp + 0x48], 4
// 007a55d4  f6c302               test bl, 2
// 007a55d7  740d                 je 0x7a55e6
// 007a55d9  8d4c241c             lea ecx, [esp + 0x1c]
// 007a55dd  83e3fd               and ebx, 0xfffffffd
// 007a55e0  ff1510fd8900         call dword ptr [0x89fd10]
// 007a55e6  c644244806           mov byte ptr [esp + 0x48], 6
// 007a55eb  f6c301               test bl, 1
// 007a55ee  740d                 je 0x7a55fd
// 007a55f0  8d4c2420             lea ecx, [esp + 0x20]
// 007a55f4  83e3fe               and ebx, 0xfffffffe
// 007a55f7  ff1510fd8900         call dword ptr [0x89fd10]
// 007a55fd  8d4c2450             lea ecx, [esp + 0x50]
// 007a5601  ff155cfb8900         call dword ptr [0x89fb5c]
// 007a5607  84c0                 test al, al
// 007a5609  755f                 jne 0x7a566a
// 007a560b  8d4c2450             lea ecx, [esp + 0x50]
// 007a560f  ff1554fb8900         call dword ptr [0x89fb54]
// 007a5615  50                   push eax
// 007a5616  8d542428             lea edx, [esp + 0x28]
// 007a561a  52                   push edx
// 007a561b  8d4c241c             lea ecx, [esp + 0x1c]
// 007a561f  ff1518fe8900         call dword ptr [0x89fe18]
// 007a5625  8bf8                 mov edi, eax
// 007a5627  83cb04               or ebx, 4
// 007a562a  8d4c2450             lea ecx, [esp + 0x50]
// 007a562e  c644244807           mov byte ptr [esp + 0x48], 7
// 007a5633  895c2418             mov dword ptr [esp + 0x18], ebx
// 007a5637  ff15d0fc8900         call dword ptr [0x89fcd0]
// 007a563d  50                   push eax
// 007a563e  8bcf                 mov ecx, edi
// 007a5640  ff15d4fc8900         call dword ptr [0x89fcd4]
// 007a5646  85c0                 test eax, eax
// 007a5648  8bcd                 mov ecx, ebp
// 007a564a  0f94442464           sete byte ptr [esp + 0x64]
// 007a564f  e88e680a00           call 0x84bee2
// 007a5654  0fb64c2464           movzx ecx, byte ptr [esp + 0x64]
// 007a5659  c1e816               shr eax, 0x16
// 007a565c  f7d0                 not eax
// 007a565e  83e101               and ecx, 1
// 007a5661  c644246401           mov byte ptr [esp + 0x64], 1
// 007a5666  84c1                 test cl, al
// 007a5668  7505                 jne 0x7a566f
// 007a566a  c644246400           mov byte ptr [esp + 0x64], 0
// 007a566f  c744244806000000     mov dword ptr [esp + 0x48], 6
// 007a5677  f6c304               test bl, 4
// 007a567a  740a                 je 0x7a5686
// 007a567c  8d4c2424             lea ecx, [esp + 0x24]
// 007a5680  ff1510fd8900         call dword ptr [0x89fd10]
// 007a5686  807c246400           cmp byte ptr [esp + 0x64], 0
// 007a568b  0f84b8000000         je 0x7a5749
// 007a5691  8d4c2450             lea ecx, [esp + 0x50]
// 007a5695  ff1554fb8900         call dword ptr [0x89fb54]
// 007a569b  50                   push eax
// 007a569c  8d4c2454             lea ecx, [esp + 0x54]
// 007a56a0  ff1554fb8900         call dword ptr [0x89fb54]
// 007a56a6  8d4c2418             lea ecx, [esp + 0x18]
// 007a56aa  8bf8                 mov edi, eax
// 007a56ac  ff1554fb8900         call dword ptr [0x89fb54]
// 007a56b2  2bc7                 sub eax, edi
// 007a56b4  50                   push eax
// 007a56b5  8d4c241c             lea ecx, [esp + 0x1c]
// 007a56b9  ff15b0f98900         call dword ptr [0x89f9b0]
// 007a56bf  8b3e                 mov edi, dword ptr [esi]
// 007a56c1  6824880000           push 0x8824
// 007a56c6  8d542458             lea edx, [esp + 0x58]
// 007a56ca  52                   push edx
// 007a56cb  8d4c241c             lea ecx, [esp + 0x1c]
// 007a56cf  ff1554fb8900         call dword ptr [0x89fb54]
// 007a56d5  50                   push eax
// 007a56d6  8d4c2420             lea ecx, [esp + 0x20]
// 007a56da  ff15d0fc8900         call dword ptr [0x89fcd0]
// 007a56e0  50                   push eax
// 007a56e1  8b4770               mov eax, dword ptr [edi + 0x70]
// 007a56e4  8bce                 mov ecx, esi
// 007a56e6  ffd0                 call eax
// 007a56e8  8d4c2414             lea ecx, [esp + 0x14]
// 007a56ec  51                   push ecx
// 007a56ed  8d542428             lea edx, [esp + 0x28]
// 007a56f1  52                   push edx
// 007a56f2  8bce                 mov ecx, esi
// 007a56f4  e807d1cbff           call 0x462800
// 007a56f9  8b00                 mov eax, dword ptr [eax]
// 007a56fb  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 007a56ff  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 007a5703  8d440102             lea eax, [ecx + eax + 2]
// 007a5707  83c2fb               add edx, -5
// 007a570a  3bc2                 cmp eax, edx
// 007a570c  89442454             mov dword ptr [esp + 0x54], eax
// 007a5710  7d60                 jge 0x7a5772
// 007a5712  837c246800           cmp dword ptr [esp + 0x68], 0
// 007a5717  7414                 je 0x7a572d
// 007a5719  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 007a571d  8b91f4050000         mov edx, dword ptr [ecx + 0x5f4]
// 007a5723  8b06                 mov eax, dword ptr [esi]
// 007a5725  8b4038               mov eax, dword ptr [eax + 0x38]
// 007a5728  52                   push edx
// 007a5729  8bce                 mov ecx, esi
// 007a572b  ffd0                 call eax
// 007a572d  8b3e                 mov edi, dword ptr [esi]
// 007a572f  6824880000           push 0x8824
// 007a5734  8d4c2458             lea ecx, [esp + 0x58]
// 007a5738  51                   push ecx
// 007a5739  8d4c2458             lea ecx, [esp + 0x58]
// 007a573d  ff1554fb8900         call dword ptr [0x89fb54]
// 007a5743  8d4c2458             lea ecx, [esp + 0x58]
// 007a5747  eb1a                 jmp 0x7a5763
// 007a5749  8b3e                 mov edi, dword ptr [esi]
// 007a574b  6824880000           push 0x8824
// 007a5750  8d442458             lea eax, [esp + 0x58]
// 007a5754  50                   push eax
// 007a5755  8d4c241c             lea ecx, [esp + 0x1c]
// 007a5759  ff1554fb8900         call dword ptr [0x89fb54]
// 007a575f  8d4c241c             lea ecx, [esp + 0x1c]
// 007a5763  50                   push eax
// 007a5764  ff15d0fc8900         call dword ptr [0x89fcd0]
// 007a576a  8b5770               mov edx, dword ptr [edi + 0x70]
// 007a576d  50                   push eax
// 007a576e  8bce                 mov ecx, esi
// 007a5770  ffd2                 call edx
// 007a5772  8d4c2450             lea ecx, [esp + 0x50]
// 007a5776  ff1510fd8900         call dword ptr [0x89fd10]
// 007a577c  eb29                 jmp 0x7a57a7
// 007a577e  8b3e                 mov edi, dword ptr [esi]
// 007a5780  6824880000           push 0x8824
// 007a5785  8d442458             lea eax, [esp + 0x58]
// 007a5789  50                   push eax
// 007a578a  8d4c241c             lea ecx, [esp + 0x1c]
// 007a578e  ff1554fb8900         call dword ptr [0x89fb54]
// 007a5794  50                   push eax
// 007a5795  8d4c2420             lea ecx, [esp + 0x20]
// 007a5799  ff15d0fc8900         call dword ptr [0x89fcd0]
// 007a579f  8b5770               mov edx, dword ptr [edi + 0x70]
// 007a57a2  50                   push eax
// 007a57a3  8bce                 mov ecx, esi
// 007a57a5  ffd2                 call edx
// 007a57a7  8d4c2430             lea ecx, [esp + 0x30]
// 007a57ab  c644244800           mov byte ptr [esp + 0x48], 0
// 007a57b0  e82bb1fcff           call 0x7708e0
// 007a57b5  8d4c2414             lea ecx, [esp + 0x14]
// 007a57b9  ff1510fd8900         call dword ptr [0x89fd10]
// 007a57bf  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 007a57c3  64890d00000000       mov dword ptr fs:[0], ecx
// 007a57ca  59                   pop ecx
// 007a57cb  5f                   pop edi
// 007a57cc  5e                   pop esi
// 007a57cd  5d                   pop ebp
// 007a57ce  5b                   pop ebx
// 007a57cf  83c438               add esp, 0x38
// 007a57d2  c21c00               ret 0x1c
// copied from an identical function in another client (function ?DrawCaptionText@CXTPOffice2007Theme@@MAEXPAVCDC@@VCRect@@PAVCWnd@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPOffice2007Theme.cpp