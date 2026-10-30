// roc 2010-06 00833900  unit: CXTPOffice2007Theme  size: 773 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00833900
//
// 00833900  6aff                 push -1
// 00833902  68d8659b00           push 0x9b65d8
// 00833907  64a100000000         mov eax, dword ptr fs:[0]
// 0083390d  50                   push eax
// 0083390e  83ec2c               sub esp, 0x2c
// 00833911  53                   push ebx
// 00833912  55                   push ebp
// 00833913  56                   push esi
// 00833914  57                   push edi
// 00833915  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 0083391a  33c4                 xor eax, esp
// 0083391c  50                   push eax
// 0083391d  8d442440             lea eax, [esp + 0x40]
// 00833921  64a300000000         mov dword ptr fs:[0], eax
// 00833927  8bf9                 mov edi, ecx
// 00833929  897c242c             mov dword ptr [esp + 0x2c], edi
// 0083392d  33db                 xor ebx, ebx
// 0083392f  8d4c2414             lea ecx, [esp + 0x14]
// 00833933  895c2418             mov dword ptr [esp + 0x18], ebx
// 00833937  ff15a4ce9e00         call dword ptr [0x9ecea4]
// 0083393d  8b6c2464             mov ebp, dword ptr [esp + 0x64]
// 00833941  8d442414             lea eax, [esp + 0x14]
// 00833945  50                   push eax
// 00833946  8bcd                 mov ecx, ebp
// 00833948  895c244c             mov dword ptr [esp + 0x4c], ebx
// 0083394c  e83746f7ff           call 0x7a7f88
// 00833951  8b742450             mov esi, dword ptr [esp + 0x50]
// 00833955  6a01                 push 1
// 00833957  8bce                 mov ecx, esi
// 00833959  e856941400           call 0x97cdb4
// 0083395e  8d8fb4050000         lea ecx, [edi + 0x5b4]
// 00833964  51                   push ecx
// 00833965  56                   push esi
// 00833966  8d4c2438             lea ecx, [esp + 0x38]
// 0083396a  e831bdfcff           call 0x7ff6a0
// 0083396f  c644244801           mov byte ptr [esp + 0x48], 1
// 00833974  395c2468             cmp dword ptr [esp + 0x68], ebx
// 00833978  7508                 jne 0x833982
// 0083397a  8bbff0050000         mov edi, dword ptr [edi + 0x5f0]
// 00833980  eb06                 jmp 0x833988
// 00833982  8bbfec050000         mov edi, dword ptr [edi + 0x5ec]
// 00833988  8b16                 mov edx, dword ptr [esi]
// 0083398a  8b4238               mov eax, dword ptr [edx + 0x38]
// 0083398d  57                   push edi
// 0083398e  8bce                 mov ecx, esi
// 00833990  ffd0                 call eax
// 00833992  8bcd                 mov ecx, ebp
// 00833994  e845941400           call 0x97cdde
// 00833999  a900400000           test eax, 0x4000
// 0083399e  0f840a020000         je 0x833bae
// 008339a4  8b5500               mov edx, dword ptr [ebp]
// 008339a7  8b8230010000         mov eax, dword ptr [edx + 0x130]
// 008339ad  8bcd                 mov ecx, ebp
// 008339af  ffd0                 call eax
// 008339b1  f7d8                 neg eax
// 008339b3  1bc0                 sbb eax, eax
// 008339b5  23c5                 and eax, ebp
// 008339b7  7418                 je 0x8339d1
// 008339b9  8d4c2420             lea ecx, [esp + 0x20]
// 008339bd  51                   push ecx
// 008339be  8bc8                 mov ecx, eax
// 008339c0  e8fbe9ffff           call 0x8323c0
// 008339c5  c644244802           mov byte ptr [esp + 0x48], 2
// 008339ca  bb01000000           mov ebx, 1
// 008339cf  eb1c                 jmp 0x8339ed
// 008339d1  68fe08a000           push 0xa008fe
// 008339d6  8d4c2420             lea ecx, [esp + 0x20]
// 008339da  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 008339e0  c744244803000000     mov dword ptr [esp + 0x48], 3
// 008339e8  bb02000000           mov ebx, 2
// 008339ed  50                   push eax
// 008339ee  8d4c2454             lea ecx, [esp + 0x54]
// 008339f2  895c241c             mov dword ptr [esp + 0x1c], ebx
// 008339f6  ff15c4ce9e00         call dword ptr [0x9ecec4]
// 008339fc  c744244804000000     mov dword ptr [esp + 0x48], 4
// 00833a04  f6c302               test bl, 2
// 00833a07  740d                 je 0x833a16
// 00833a09  8d4c241c             lea ecx, [esp + 0x1c]
// 00833a0d  83e3fd               and ebx, 0xfffffffd
// 00833a10  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 00833a16  c644244806           mov byte ptr [esp + 0x48], 6
// 00833a1b  f6c301               test bl, 1
// 00833a1e  740d                 je 0x833a2d
// 00833a20  8d4c2420             lea ecx, [esp + 0x20]
// 00833a24  83e3fe               and ebx, 0xfffffffe
// 00833a27  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 00833a2d  8d4c2450             lea ecx, [esp + 0x50]
// 00833a31  ff15eccd9e00         call dword ptr [0x9ecdec]
// 00833a37  84c0                 test al, al
// 00833a39  755f                 jne 0x833a9a
// 00833a3b  8d4c2450             lea ecx, [esp + 0x50]
// 00833a3f  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 00833a45  50                   push eax
// 00833a46  8d542428             lea edx, [esp + 0x28]
// 00833a4a  52                   push edx
// 00833a4b  8d4c241c             lea ecx, [esp + 0x1c]
// 00833a4f  ff15a0c89e00         call dword ptr [0x9ec8a0]
// 00833a55  8bf8                 mov edi, eax
// 00833a57  83cb04               or ebx, 4
// 00833a5a  8d4c2450             lea ecx, [esp + 0x50]
// 00833a5e  c644244807           mov byte ptr [esp + 0x48], 7
// 00833a63  895c2418             mov dword ptr [esp + 0x18], ebx
// 00833a67  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 00833a6d  50                   push eax
// 00833a6e  8bcf                 mov ecx, edi
// 00833a70  ff15b4ce9e00         call dword ptr [0x9eceb4]
// 00833a76  85c0                 test eax, eax
// 00833a78  8bcd                 mov ecx, ebp
// 00833a7a  0f94442464           sete byte ptr [esp + 0x64]
// 00833a7f  e860931400           call 0x97cde4
// 00833a84  0fb64c2464           movzx ecx, byte ptr [esp + 0x64]
// 00833a89  c1e816               shr eax, 0x16
// 00833a8c  f7d0                 not eax
// 00833a8e  83e101               and ecx, 1
// 00833a91  c644246401           mov byte ptr [esp + 0x64], 1
// 00833a96  84c1                 test cl, al
// 00833a98  7505                 jne 0x833a9f
// 00833a9a  c644246400           mov byte ptr [esp + 0x64], 0
// 00833a9f  c744244806000000     mov dword ptr [esp + 0x48], 6
// 00833aa7  f6c304               test bl, 4
// 00833aaa  740a                 je 0x833ab6
// 00833aac  8d4c2424             lea ecx, [esp + 0x24]
// 00833ab0  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 00833ab6  807c246400           cmp byte ptr [esp + 0x64], 0
// 00833abb  0f84b8000000         je 0x833b79
// 00833ac1  8d4c2450             lea ecx, [esp + 0x50]
// 00833ac5  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 00833acb  50                   push eax
// 00833acc  8d4c2454             lea ecx, [esp + 0x54]
// 00833ad0  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 00833ad6  8d4c2418             lea ecx, [esp + 0x18]
// 00833ada  8bf8                 mov edi, eax
// 00833adc  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 00833ae2  2bc7                 sub eax, edi
// 00833ae4  50                   push eax
// 00833ae5  8d4c241c             lea ecx, [esp + 0x1c]
// 00833ae9  ff151cca9e00         call dword ptr [0x9eca1c]
// 00833aef  8b3e                 mov edi, dword ptr [esi]
// 00833af1  6824880000           push 0x8824
// 00833af6  8d542458             lea edx, [esp + 0x58]
// 00833afa  52                   push edx
// 00833afb  8d4c241c             lea ecx, [esp + 0x1c]
// 00833aff  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 00833b05  50                   push eax
// 00833b06  8d4c2420             lea ecx, [esp + 0x20]
// 00833b0a  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 00833b10  50                   push eax
// 00833b11  8b4770               mov eax, dword ptr [edi + 0x70]
// 00833b14  8bce                 mov ecx, esi
// 00833b16  ffd0                 call eax
// 00833b18  8d4c2414             lea ecx, [esp + 0x14]
// 00833b1c  51                   push ecx
// 00833b1d  8d542428             lea edx, [esp + 0x28]
// 00833b21  52                   push edx
// 00833b22  8bce                 mov ecx, esi
// 00833b24  e887b3c3ff           call 0x46eeb0
// 00833b29  8b00                 mov eax, dword ptr [eax]
// 00833b2b  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 00833b2f  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 00833b33  8d440102             lea eax, [ecx + eax + 2]
// 00833b37  83c2fb               add edx, -5
// 00833b3a  3bc2                 cmp eax, edx
// 00833b3c  89442454             mov dword ptr [esp + 0x54], eax
// 00833b40  7d60                 jge 0x833ba2
// 00833b42  837c246800           cmp dword ptr [esp + 0x68], 0
// 00833b47  7414                 je 0x833b5d
// 00833b49  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00833b4d  8b91f4050000         mov edx, dword ptr [ecx + 0x5f4]
// 00833b53  8b06                 mov eax, dword ptr [esi]
// 00833b55  8b4038               mov eax, dword ptr [eax + 0x38]
// 00833b58  52                   push edx
// 00833b59  8bce                 mov ecx, esi
// 00833b5b  ffd0                 call eax
// 00833b5d  8b3e                 mov edi, dword ptr [esi]
// 00833b5f  6824880000           push 0x8824
// 00833b64  8d4c2458             lea ecx, [esp + 0x58]
// 00833b68  51                   push ecx
// 00833b69  8d4c2458             lea ecx, [esp + 0x58]
// 00833b6d  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 00833b73  8d4c2458             lea ecx, [esp + 0x58]
// 00833b77  eb1a                 jmp 0x833b93
// 00833b79  8b3e                 mov edi, dword ptr [esi]
// 00833b7b  6824880000           push 0x8824
// 00833b80  8d442458             lea eax, [esp + 0x58]
// 00833b84  50                   push eax
// 00833b85  8d4c241c             lea ecx, [esp + 0x1c]
// 00833b89  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 00833b8f  8d4c241c             lea ecx, [esp + 0x1c]
// 00833b93  50                   push eax
// 00833b94  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 00833b9a  8b5770               mov edx, dword ptr [edi + 0x70]
// 00833b9d  50                   push eax
// 00833b9e  8bce                 mov ecx, esi
// 00833ba0  ffd2                 call edx
// 00833ba2  8d4c2450             lea ecx, [esp + 0x50]
// 00833ba6  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 00833bac  eb29                 jmp 0x833bd7
// 00833bae  8b3e                 mov edi, dword ptr [esi]
// 00833bb0  6824880000           push 0x8824
// 00833bb5  8d442458             lea eax, [esp + 0x58]
// 00833bb9  50                   push eax
// 00833bba  8d4c241c             lea ecx, [esp + 0x1c]
// 00833bbe  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 00833bc4  50                   push eax
// 00833bc5  8d4c2420             lea ecx, [esp + 0x20]
// 00833bc9  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 00833bcf  8b5770               mov edx, dword ptr [edi + 0x70]
// 00833bd2  50                   push eax
// 00833bd3  8bce                 mov ecx, esi
// 00833bd5  ffd2                 call edx
// 00833bd7  8d4c2430             lea ecx, [esp + 0x30]
// 00833bdb  c644244800           mov byte ptr [esp + 0x48], 0
// 00833be0  e83bbbfcff           call 0x7ff720
// 00833be5  8d4c2414             lea ecx, [esp + 0x14]
// 00833be9  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 00833bef  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00833bf3  64890d00000000       mov dword ptr fs:[0], ecx
// 00833bfa  59                   pop ecx
// 00833bfb  5f                   pop edi
// 00833bfc  5e                   pop esi
// 00833bfd  5d                   pop ebp
// 00833bfe  5b                   pop ebx
// 00833bff  83c438               add esp, 0x38
// 00833c02  c21c00               ret 0x1c
// copied from an identical function in another client (function ?DrawCaptionText@CXTPOffice2007Theme@@MAEXPAVCDC@@VCRect@@PAVCWnd@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPOffice2007Theme.cpp