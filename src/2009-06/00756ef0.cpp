// roc 2009-06 00756ef0  unit: CRobloxTreeCtrl  size: 790 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00756ef0
//
// 00756ef0  6aff                 push -1
// 00756ef2  68cd7b8700           push 0x877bcd
// 00756ef7  64a100000000         mov eax, dword ptr fs:[0]
// 00756efd  50                   push eax
// 00756efe  83ec18               sub esp, 0x18
// 00756f01  53                   push ebx
// 00756f02  55                   push ebp
// 00756f03  56                   push esi
// 00756f04  57                   push edi
// 00756f05  a1304fa200           mov eax, dword ptr [0xa24f30]
// 00756f0a  33c4                 xor eax, esp
// 00756f0c  50                   push eax
// 00756f0d  8d44242c             lea eax, [esp + 0x2c]
// 00756f11  64a300000000         mov dword ptr fs:[0], eax
// 00756f17  8bd9                 mov ebx, ecx
// 00756f19  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00756f1d  50                   push eax
// 00756f1e  8d4c241c             lea ecx, [esp + 0x1c]
// 00756f22  ff1508fd8900         call dword ptr [0x89fd08]
// 00756f28  8d4c2418             lea ecx, [esp + 0x18]
// 00756f2c  c744243400000000     mov dword ptr [esp + 0x34], 0
// 00756f34  ff1554fb8900         call dword ptr [0x89fb54]
// 00756f3a  8944241c             mov dword ptr [esp + 0x1c], eax
// 00756f3e  85c0                 test eax, eax
// 00756f40  0f8484000000         je 0x756fca
// 00756f46  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 00756f4a  85c0                 test eax, eax
// 00756f4c  7408                 je 0x756f56
// 00756f4e  8bf0                 mov esi, eax
// 00756f50  8974244c             mov dword ptr [esp + 0x4c], esi
// 00756f54  eb1c                 jmp 0x756f72
// 00756f56  8b4334               mov eax, dword ptr [ebx + 0x34]
// 00756f59  8b4820               mov ecx, dword ptr [eax + 0x20]
// 00756f5c  6a00                 push 0
// 00756f5e  6a09                 push 9
// 00756f60  680a110000           push 0x110a
// 00756f65  51                   push ecx
// 00756f66  ff1590ee8900         call dword ptr [0x89ee90]
// 00756f6c  8944244c             mov dword ptr [esp + 0x4c], eax
// 00756f70  8bf0                 mov esi, eax
// 00756f72  85f6                 test esi, esi
// 00756f74  751a                 jne 0x756f90
// 00756f76  8b4334               mov eax, dword ptr [ebx + 0x34]
// 00756f79  8b5020               mov edx, dword ptr [eax + 0x20]
// 00756f7c  56                   push esi
// 00756f7d  56                   push esi
// 00756f7e  680a110000           push 0x110a
// 00756f83  52                   push edx
// 00756f84  ff1590ee8900         call dword ptr [0x89ee90]
// 00756f8a  8944244c             mov dword ptr [esp + 0x4c], eax
// 00756f8e  8bf0                 mov esi, eax
// 00756f90  8d442418             lea eax, [esp + 0x18]
// 00756f94  50                   push eax
// 00756f95  8d4c2418             lea ecx, [esp + 0x18]
// 00756f99  8bee                 mov ebp, esi
// 00756f9b  ff15e4fc8900         call dword ptr [0x89fce4]
// 00756fa1  837c244000           cmp dword ptr [esp + 0x40], 0
// 00756fa6  c644243401           mov byte ptr [esp + 0x34], 1
// 00756fab  750a                 jne 0x756fb7
// 00756fad  8d4c2414             lea ecx, [esp + 0x14]
// 00756fb1  ff1578fe8900         call dword ptr [0x89fe78]
// 00756fb7  b801000000           mov eax, 1
// 00756fbc  85f6                 test esi, esi
// 00756fbe  7538                 jne 0x756ff8
// 00756fc0  8d4c2414             lea ecx, [esp + 0x14]
// 00756fc4  ff1510fd8900         call dword ptr [0x89fd10]
// 00756fca  8d4c2418             lea ecx, [esp + 0x18]
// 00756fce  ff1510fd8900         call dword ptr [0x89fd10]
// 00756fd4  33c0                 xor eax, eax
// 00756fd6  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00756fda  64890d00000000       mov dword ptr fs:[0], ecx
// 00756fe1  59                   pop ecx
// 00756fe2  5f                   pop edi
// 00756fe3  5e                   pop esi
// 00756fe4  5d                   pop ebp
// 00756fe5  5b                   pop ebx
// 00756fe6  83c424               add esp, 0x24
// 00756fe9  c21400               ret 0x14
// 00756fec  8d642400             lea esp, [esp]
// 00756ff0  8b442420             mov eax, dword ptr [esp + 0x20]
// 00756ff4  8b74244c             mov esi, dword ptr [esp + 0x4c]
// 00756ff8  3bee                 cmp ebp, esi
// 00756ffa  7504                 jne 0x757000
// 00756ffc  85c0                 test eax, eax
// 00756ffe  74c0                 je 0x756fc0
// 00757000  55                   push ebp
// 00757001  8d4c2440             lea ecx, [esp + 0x40]
// 00757005  51                   push ecx
// 00757006  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 00757009  c744242800000000     mov dword ptr [esp + 0x28], 0
// 00757011  e8a8510f00           call 0x84c1be
// 00757016  837c244000           cmp dword ptr [esp + 0x40], 0
// 0075701b  c644243402           mov byte ptr [esp + 0x34], 2
// 00757020  750a                 jne 0x75702c
// 00757022  8d4c243c             lea ecx, [esp + 0x3c]
// 00757026  ff1578fe8900         call dword ptr [0x89fe78]
// 0075702c  6a00                 push 0
// 0075702e  8d4c2418             lea ecx, [esp + 0x18]
// 00757032  ff15d0fc8900         call dword ptr [0x89fcd0]
// 00757038  50                   push eax
// 00757039  8d4c2444             lea ecx, [esp + 0x44]
// 0075703d  ff15bcfe8900         call dword ptr [0x89febc]
// 00757043  8bf8                 mov edi, eax
// 00757045  83ffff               cmp edi, -1
// 00757048  0f8435010000         je 0x757183
// 0075704e  837c244800           cmp dword ptr [esp + 0x48], 0
// 00757053  0f841c010000         je 0x757175
// 00757059  85ff                 test edi, edi
// 0075705b  7467                 je 0x7570c4
// 0075705d  8d77ff               lea esi, [edi - 1]
// 00757060  56                   push esi
// 00757061  8d4c2440             lea ecx, [esp + 0x40]
// 00757065  ff15e0f98900         call dword ptr [0x89f9e0]
// 0075706b  0fbed0               movsx edx, al
// 0075706e  52                   push edx
// 0075706f  ff15dce68900         call dword ptr [0x89e6dc]
// 00757075  83c404               add esp, 4
// 00757078  85c0                 test eax, eax
// 0075707a  750f                 jne 0x75708b
// 0075707c  56                   push esi
// 0075707d  8d4c2440             lea ecx, [esp + 0x40]
// 00757081  ff15e0f98900         call dword ptr [0x89f9e0]
// 00757087  3c5f                 cmp al, 0x5f
// 00757089  7539                 jne 0x7570c4
// 0075708b  8d4c243c             lea ecx, [esp + 0x3c]
// 0075708f  ff1554fb8900         call dword ptr [0x89fb54]
// 00757095  2bc7                 sub eax, edi
// 00757097  2b44241c             sub eax, dword ptr [esp + 0x1c]
// 0075709b  8d4c243c             lea ecx, [esp + 0x3c]
// 0075709f  50                   push eax
// 007570a0  8d442428             lea eax, [esp + 0x28]
// 007570a4  50                   push eax
// 007570a5  ff1518fe8900         call dword ptr [0x89fe18]
// 007570ab  50                   push eax
// 007570ac  8d4c2440             lea ecx, [esp + 0x40]
// 007570b0  c644243803           mov byte ptr [esp + 0x38], 3
// 007570b5  ff1508fa8900         call dword ptr [0x89fa08]
// 007570bb  8d4c2424             lea ecx, [esp + 0x24]
// 007570bf  e982000000           jmp 0x757146
// 007570c4  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 007570c8  8d340f               lea esi, [edi + ecx]
// 007570cb  8d4c243c             lea ecx, [esp + 0x3c]
// 007570cf  ff1554fb8900         call dword ptr [0x89fb54]
// 007570d5  3bc6                 cmp eax, esi
// 007570d7  0f8e98000000         jle 0x757175
// 007570dd  56                   push esi
// 007570de  8d4c2440             lea ecx, [esp + 0x40]
// 007570e2  ff15e0f98900         call dword ptr [0x89f9e0]
// 007570e8  0fbed0               movsx edx, al
// 007570eb  52                   push edx
// 007570ec  ff15dce68900         call dword ptr [0x89e6dc]
// 007570f2  83c404               add esp, 4
// 007570f5  85c0                 test eax, eax
// 007570f7  750f                 jne 0x757108
// 007570f9  56                   push esi
// 007570fa  8d4c2440             lea ecx, [esp + 0x40]
// 007570fe  ff15e0f98900         call dword ptr [0x89f9e0]
// 00757104  3c5f                 cmp al, 0x5f
// 00757106  756d                 jne 0x757175
// 00757108  8d4c243c             lea ecx, [esp + 0x3c]
// 0075710c  ff1554fb8900         call dword ptr [0x89fb54]
// 00757112  8bf0                 mov esi, eax
// 00757114  8d4c2414             lea ecx, [esp + 0x14]
// 00757118  2bf7                 sub esi, edi
// 0075711a  ff1554fb8900         call dword ptr [0x89fb54]
// 00757120  2bf0                 sub esi, eax
// 00757122  56                   push esi
// 00757123  8d44242c             lea eax, [esp + 0x2c]
// 00757127  50                   push eax
// 00757128  8d4c2444             lea ecx, [esp + 0x44]
// 0075712c  ff1518fe8900         call dword ptr [0x89fe18]
// 00757132  50                   push eax
// 00757133  8d4c2440             lea ecx, [esp + 0x40]
// 00757137  c644243804           mov byte ptr [esp + 0x38], 4
// 0075713c  ff1508fa8900         call dword ptr [0x89fa08]
// 00757142  8d4c2428             lea ecx, [esp + 0x28]
// 00757146  c644243402           mov byte ptr [esp + 0x34], 2
// 0075714b  ff1510fd8900         call dword ptr [0x89fd10]
// 00757151  6a00                 push 0
// 00757153  8d4c2418             lea ecx, [esp + 0x18]
// 00757157  ff15d0fc8900         call dword ptr [0x89fcd0]
// 0075715d  50                   push eax
// 0075715e  8d4c2444             lea ecx, [esp + 0x44]
// 00757162  ff15bcfe8900         call dword ptr [0x89febc]
// 00757168  8bf8                 mov edi, eax
// 0075716a  83ffff               cmp edi, -1
// 0075716d  0f85dbfeffff         jne 0x75704e
// 00757173  eb0e                 jmp 0x757183
// 00757175  8b13                 mov edx, dword ptr [ebx]
// 00757177  8b4268               mov eax, dword ptr [edx + 0x68]
// 0075717a  55                   push ebp
// 0075717b  8bcb                 mov ecx, ebx
// 0075717d  ffd0                 call eax
// 0075717f  85c0                 test eax, eax
// 00757181  755e                 jne 0x7571e1
// 00757183  8b742444             mov esi, dword ptr [esp + 0x44]
// 00757187  8b13                 mov edx, dword ptr [ebx]
// 00757189  55                   push ebp
// 0075718a  8bcb                 mov ecx, ebx
// 0075718c  85f6                 test esi, esi
// 0075718e  7405                 je 0x757195
// 00757190  8b4208               mov eax, dword ptr [edx + 8]
// 00757193  eb03                 jmp 0x757198
// 00757195  8b420c               mov eax, dword ptr [edx + 0xc]
// 00757198  ffd0                 call eax
// 0075719a  8be8                 mov ebp, eax
// 0075719c  85ed                 test ebp, ebp
// 0075719e  7525                 jne 0x7571c5
// 007571a0  50                   push eax
// 007571a1  85f6                 test esi, esi
// 007571a3  7415                 je 0x7571ba
// 007571a5  8b4334               mov eax, dword ptr [ebx + 0x34]
// 007571a8  8b4820               mov ecx, dword ptr [eax + 0x20]
// 007571ab  55                   push ebp
// 007571ac  680a110000           push 0x110a
// 007571b1  51                   push ecx
// 007571b2  ff1590ee8900         call dword ptr [0x89ee90]
// 007571b8  eb09                 jmp 0x7571c3
// 007571ba  8b13                 mov edx, dword ptr [ebx]
// 007571bc  8b4210               mov eax, dword ptr [edx + 0x10]
// 007571bf  8bcb                 mov ecx, ebx
// 007571c1  ffd0                 call eax
// 007571c3  8be8                 mov ebp, eax
// 007571c5  8d4c243c             lea ecx, [esp + 0x3c]
// 007571c9  c644243401           mov byte ptr [esp + 0x34], 1
// 007571ce  ff1510fd8900         call dword ptr [0x89fd10]
// 007571d4  85ed                 test ebp, ebp
// 007571d6  0f8514feffff         jne 0x756ff0
// 007571dc  e9dffdffff           jmp 0x756fc0
// 007571e1  8d4c243c             lea ecx, [esp + 0x3c]
// 007571e5  ff1510fd8900         call dword ptr [0x89fd10]
// 007571eb  8d4c2414             lea ecx, [esp + 0x14]
// 007571ef  ff1510fd8900         call dword ptr [0x89fd10]
// 007571f5  8d4c2418             lea ecx, [esp + 0x18]
// 007571f9  ff1510fd8900         call dword ptr [0x89fd10]
// 007571ff  8bc5                 mov eax, ebp
// 00757201  e9d0fdffff           jmp 0x756fd6
// copied from an identical function in another client (function ?FindItem@CXTTreeBase@@UAEPAU_TREEITEM@@PBDHHHPAU2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTTreeBase.cpp