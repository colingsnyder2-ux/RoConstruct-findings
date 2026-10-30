// roc 2012-06 009bfc00  unit: CRobloxTreeCtrl  size: 790 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009bfc00
//
// 009bfc00  6aff                 push -1
// 009bfc02  685df2ad00           push 0xadf25d
// 009bfc07  64a100000000         mov eax, dword ptr fs:[0]
// 009bfc0d  50                   push eax
// 009bfc0e  83ec18               sub esp, 0x18
// 009bfc11  53                   push ebx
// 009bfc12  55                   push ebp
// 009bfc13  56                   push esi
// 009bfc14  57                   push edi
// 009bfc15  a1d027e000           mov eax, dword ptr [0xe027d0]
// 009bfc1a  33c4                 xor eax, esp
// 009bfc1c  50                   push eax
// 009bfc1d  8d44242c             lea eax, [esp + 0x2c]
// 009bfc21  64a300000000         mov dword ptr fs:[0], eax
// 009bfc27  8bd9                 mov ebx, ecx
// 009bfc29  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 009bfc2d  50                   push eax
// 009bfc2e  8d4c241c             lea ecx, [esp + 0x1c]
// 009bfc32  ff15c847b200         call dword ptr [0xb247c8]
// 009bfc38  8d4c2418             lea ecx, [esp + 0x18]
// 009bfc3c  c744243400000000     mov dword ptr [esp + 0x34], 0
// 009bfc44  ff155846b200         call dword ptr [0xb24658]
// 009bfc4a  8944241c             mov dword ptr [esp + 0x1c], eax
// 009bfc4e  85c0                 test eax, eax
// 009bfc50  0f8484000000         je 0x9bfcda
// 009bfc56  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 009bfc5a  85c0                 test eax, eax
// 009bfc5c  7408                 je 0x9bfc66
// 009bfc5e  8bf0                 mov esi, eax
// 009bfc60  8974244c             mov dword ptr [esp + 0x4c], esi
// 009bfc64  eb1c                 jmp 0x9bfc82
// 009bfc66  8b4334               mov eax, dword ptr [ebx + 0x34]
// 009bfc69  8b4820               mov ecx, dword ptr [eax + 0x20]
// 009bfc6c  6a00                 push 0
// 009bfc6e  6a09                 push 9
// 009bfc70  680a110000           push 0x110a
// 009bfc75  51                   push ecx
// 009bfc76  ff15043cb200         call dword ptr [0xb23c04]
// 009bfc7c  8944244c             mov dword ptr [esp + 0x4c], eax
// 009bfc80  8bf0                 mov esi, eax
// 009bfc82  85f6                 test esi, esi
// 009bfc84  751a                 jne 0x9bfca0
// 009bfc86  8b4334               mov eax, dword ptr [ebx + 0x34]
// 009bfc89  8b5020               mov edx, dword ptr [eax + 0x20]
// 009bfc8c  56                   push esi
// 009bfc8d  56                   push esi
// 009bfc8e  680a110000           push 0x110a
// 009bfc93  52                   push edx
// 009bfc94  ff15043cb200         call dword ptr [0xb23c04]
// 009bfc9a  8944244c             mov dword ptr [esp + 0x4c], eax
// 009bfc9e  8bf0                 mov esi, eax
// 009bfca0  8d442418             lea eax, [esp + 0x18]
// 009bfca4  50                   push eax
// 009bfca5  8d4c2418             lea ecx, [esp + 0x18]
// 009bfca9  8bee                 mov ebp, esi
// 009bfcab  ff158047b200         call dword ptr [0xb24780]
// 009bfcb1  837c244000           cmp dword ptr [esp + 0x40], 0
// 009bfcb6  c644243401           mov byte ptr [esp + 0x34], 1
// 009bfcbb  750a                 jne 0x9bfcc7
// 009bfcbd  8d4c2414             lea ecx, [esp + 0x14]
// 009bfcc1  ff158849b200         call dword ptr [0xb24988]
// 009bfcc7  b801000000           mov eax, 1
// 009bfccc  85f6                 test esi, esi
// 009bfcce  7538                 jne 0x9bfd08
// 009bfcd0  8d4c2414             lea ecx, [esp + 0x14]
// 009bfcd4  ff15d047b200         call dword ptr [0xb247d0]
// 009bfcda  8d4c2418             lea ecx, [esp + 0x18]
// 009bfcde  ff15d047b200         call dword ptr [0xb247d0]
// 009bfce4  33c0                 xor eax, eax
// 009bfce6  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 009bfcea  64890d00000000       mov dword ptr fs:[0], ecx
// 009bfcf1  59                   pop ecx
// 009bfcf2  5f                   pop edi
// 009bfcf3  5e                   pop esi
// 009bfcf4  5d                   pop ebp
// 009bfcf5  5b                   pop ebx
// 009bfcf6  83c424               add esp, 0x24
// 009bfcf9  c21400               ret 0x14
// 009bfcfc  8d642400             lea esp, [esp]
// 009bfd00  8b442420             mov eax, dword ptr [esp + 0x20]
// 009bfd04  8b74244c             mov esi, dword ptr [esp + 0x4c]
// 009bfd08  3bee                 cmp ebp, esi
// 009bfd0a  7504                 jne 0x9bfd10
// 009bfd0c  85c0                 test eax, eax
// 009bfd0e  74c0                 je 0x9bfcd0
// 009bfd10  55                   push ebp
// 009bfd11  8d4c2440             lea ecx, [esp + 0x40]
// 009bfd15  51                   push ecx
// 009bfd16  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 009bfd19  c744242800000000     mov dword ptr [esp + 0x28], 0
// 009bfd21  e8109b0d00           call 0xa99836
// 009bfd26  837c244000           cmp dword ptr [esp + 0x40], 0
// 009bfd2b  c644243402           mov byte ptr [esp + 0x34], 2
// 009bfd30  750a                 jne 0x9bfd3c
// 009bfd32  8d4c243c             lea ecx, [esp + 0x3c]
// 009bfd36  ff158849b200         call dword ptr [0xb24988]
// 009bfd3c  6a00                 push 0
// 009bfd3e  8d4c2418             lea ecx, [esp + 0x18]
// 009bfd42  ff159847b200         call dword ptr [0xb24798]
// 009bfd48  50                   push eax
// 009bfd49  8d4c2444             lea ecx, [esp + 0x44]
// 009bfd4d  ff154c49b200         call dword ptr [0xb2494c]
// 009bfd53  8bf8                 mov edi, eax
// 009bfd55  83ffff               cmp edi, -1
// 009bfd58  0f8435010000         je 0x9bfe93
// 009bfd5e  837c244800           cmp dword ptr [esp + 0x48], 0
// 009bfd63  0f841c010000         je 0x9bfe85
// 009bfd69  85ff                 test edi, edi
// 009bfd6b  7467                 je 0x9bfdd4
// 009bfd6d  8d77ff               lea esi, [edi - 1]
// 009bfd70  56                   push esi
// 009bfd71  8d4c2440             lea ecx, [esp + 0x40]
// 009bfd75  ff15e844b200         call dword ptr [0xb244e8]
// 009bfd7b  0fbed0               movsx edx, al
// 009bfd7e  52                   push edx
// 009bfd7f  ff15682ab200         call dword ptr [0xb22a68]
// 009bfd85  83c404               add esp, 4
// 009bfd88  85c0                 test eax, eax
// 009bfd8a  750f                 jne 0x9bfd9b
// 009bfd8c  56                   push esi
// 009bfd8d  8d4c2440             lea ecx, [esp + 0x40]
// 009bfd91  ff15e844b200         call dword ptr [0xb244e8]
// 009bfd97  3c5f                 cmp al, 0x5f
// 009bfd99  7539                 jne 0x9bfdd4
// 009bfd9b  8d4c243c             lea ecx, [esp + 0x3c]
// 009bfd9f  ff155846b200         call dword ptr [0xb24658]
// 009bfda5  2bc7                 sub eax, edi
// 009bfda7  2b44241c             sub eax, dword ptr [esp + 0x1c]
// 009bfdab  8d4c243c             lea ecx, [esp + 0x3c]
// 009bfdaf  50                   push eax
// 009bfdb0  8d442428             lea eax, [esp + 0x28]
// 009bfdb4  50                   push eax
// 009bfdb5  ff15ec49b200         call dword ptr [0xb249ec]
// 009bfdbb  50                   push eax
// 009bfdbc  8d4c2440             lea ecx, [esp + 0x40]
// 009bfdc0  c644243803           mov byte ptr [esp + 0x38], 3
// 009bfdc5  ff152045b200         call dword ptr [0xb24520]
// 009bfdcb  8d4c2424             lea ecx, [esp + 0x24]
// 009bfdcf  e982000000           jmp 0x9bfe56
// 009bfdd4  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 009bfdd8  8d340f               lea esi, [edi + ecx]
// 009bfddb  8d4c243c             lea ecx, [esp + 0x3c]
// 009bfddf  ff155846b200         call dword ptr [0xb24658]
// 009bfde5  3bc6                 cmp eax, esi
// 009bfde7  0f8e98000000         jle 0x9bfe85
// 009bfded  56                   push esi
// 009bfdee  8d4c2440             lea ecx, [esp + 0x40]
// 009bfdf2  ff15e844b200         call dword ptr [0xb244e8]
// 009bfdf8  0fbed0               movsx edx, al
// 009bfdfb  52                   push edx
// 009bfdfc  ff15682ab200         call dword ptr [0xb22a68]
// 009bfe02  83c404               add esp, 4
// 009bfe05  85c0                 test eax, eax
// 009bfe07  750f                 jne 0x9bfe18
// 009bfe09  56                   push esi
// 009bfe0a  8d4c2440             lea ecx, [esp + 0x40]
// 009bfe0e  ff15e844b200         call dword ptr [0xb244e8]
// 009bfe14  3c5f                 cmp al, 0x5f
// 009bfe16  756d                 jne 0x9bfe85
// 009bfe18  8d4c243c             lea ecx, [esp + 0x3c]
// 009bfe1c  ff155846b200         call dword ptr [0xb24658]
// 009bfe22  8bf0                 mov esi, eax
// 009bfe24  8d4c2414             lea ecx, [esp + 0x14]
// 009bfe28  2bf7                 sub esi, edi
// 009bfe2a  ff155846b200         call dword ptr [0xb24658]
// 009bfe30  2bf0                 sub esi, eax
// 009bfe32  56                   push esi
// 009bfe33  8d44242c             lea eax, [esp + 0x2c]
// 009bfe37  50                   push eax
// 009bfe38  8d4c2444             lea ecx, [esp + 0x44]
// 009bfe3c  ff15ec49b200         call dword ptr [0xb249ec]
// 009bfe42  50                   push eax
// 009bfe43  8d4c2440             lea ecx, [esp + 0x40]
// 009bfe47  c644243804           mov byte ptr [esp + 0x38], 4
// 009bfe4c  ff152045b200         call dword ptr [0xb24520]
// 009bfe52  8d4c2428             lea ecx, [esp + 0x28]
// 009bfe56  c644243402           mov byte ptr [esp + 0x34], 2
// 009bfe5b  ff15d047b200         call dword ptr [0xb247d0]
// 009bfe61  6a00                 push 0
// 009bfe63  8d4c2418             lea ecx, [esp + 0x18]
// 009bfe67  ff159847b200         call dword ptr [0xb24798]
// 009bfe6d  50                   push eax
// 009bfe6e  8d4c2444             lea ecx, [esp + 0x44]
// 009bfe72  ff154c49b200         call dword ptr [0xb2494c]
// 009bfe78  8bf8                 mov edi, eax
// 009bfe7a  83ffff               cmp edi, -1
// 009bfe7d  0f85dbfeffff         jne 0x9bfd5e
// 009bfe83  eb0e                 jmp 0x9bfe93
// 009bfe85  8b13                 mov edx, dword ptr [ebx]
// 009bfe87  8b4268               mov eax, dword ptr [edx + 0x68]
// 009bfe8a  55                   push ebp
// 009bfe8b  8bcb                 mov ecx, ebx
// 009bfe8d  ffd0                 call eax
// 009bfe8f  85c0                 test eax, eax
// 009bfe91  755e                 jne 0x9bfef1
// 009bfe93  8b742444             mov esi, dword ptr [esp + 0x44]
// 009bfe97  8b13                 mov edx, dword ptr [ebx]
// 009bfe99  55                   push ebp
// 009bfe9a  8bcb                 mov ecx, ebx
// 009bfe9c  85f6                 test esi, esi
// 009bfe9e  7405                 je 0x9bfea5
// 009bfea0  8b4208               mov eax, dword ptr [edx + 8]
// 009bfea3  eb03                 jmp 0x9bfea8
// 009bfea5  8b420c               mov eax, dword ptr [edx + 0xc]
// 009bfea8  ffd0                 call eax
// 009bfeaa  8be8                 mov ebp, eax
// 009bfeac  85ed                 test ebp, ebp
// 009bfeae  7525                 jne 0x9bfed5
// 009bfeb0  50                   push eax
// 009bfeb1  85f6                 test esi, esi
// 009bfeb3  7415                 je 0x9bfeca
// 009bfeb5  8b4334               mov eax, dword ptr [ebx + 0x34]
// 009bfeb8  8b4820               mov ecx, dword ptr [eax + 0x20]
// 009bfebb  55                   push ebp
// 009bfebc  680a110000           push 0x110a
// 009bfec1  51                   push ecx
// 009bfec2  ff15043cb200         call dword ptr [0xb23c04]
// 009bfec8  eb09                 jmp 0x9bfed3
// 009bfeca  8b13                 mov edx, dword ptr [ebx]
// 009bfecc  8b4210               mov eax, dword ptr [edx + 0x10]
// 009bfecf  8bcb                 mov ecx, ebx
// 009bfed1  ffd0                 call eax
// 009bfed3  8be8                 mov ebp, eax
// 009bfed5  8d4c243c             lea ecx, [esp + 0x3c]
// 009bfed9  c644243401           mov byte ptr [esp + 0x34], 1
// 009bfede  ff15d047b200         call dword ptr [0xb247d0]
// 009bfee4  85ed                 test ebp, ebp
// 009bfee6  0f8514feffff         jne 0x9bfd00
// 009bfeec  e9dffdffff           jmp 0x9bfcd0
// 009bfef1  8d4c243c             lea ecx, [esp + 0x3c]
// 009bfef5  ff15d047b200         call dword ptr [0xb247d0]
// 009bfefb  8d4c2414             lea ecx, [esp + 0x14]
// 009bfeff  ff15d047b200         call dword ptr [0xb247d0]
// 009bff05  8d4c2418             lea ecx, [esp + 0x18]
// 009bff09  ff15d047b200         call dword ptr [0xb247d0]
// 009bff0f  8bc5                 mov eax, ebp
// 009bff11  e9d0fdffff           jmp 0x9bfce6
// copied from an identical function in another client (function ?FindItem@CXTTreeBase@@UAEPAU_TREEITEM@@PBDHHHPAU2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTTreeBase.cpp