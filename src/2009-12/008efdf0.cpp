// roc 2009-12 008efdf0  unit: CXTPRibbonScrollableBar::CControlGroupsScroll  size: 427 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008efdf0
//
// 008efdf0  83ec1c               sub esp, 0x1c
// 008efdf3  55                   push ebp
// 008efdf4  56                   push esi
// 008efdf5  bd01000000           mov ebp, 1
// 008efdfa  55                   push ebp
// 008efdfb  8bf1                 mov esi, ecx
// 008efdfd  ff1530cc9800         call dword ptr [0x98cc30]
// 008efe03  6685c0               test ax, ax
// 008efe06  0f8d87010000         jge 0x8eff93
// 008efe0c  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 008efe12  57                   push edi
// 008efe13  50                   push eax
// 008efe14  89aea8000000         mov dword ptr [esi + 0xa8], ebp
// 008efe1a  e891faffff           call 0x8ef8b0
// 008efe1f  8bf8                 mov edi, eax
// 008efe21  8b17                 mov edx, dword ptr [edi]
// 008efe23  8b8674010000         mov eax, dword ptr [esi + 0x174]
// 008efe29  8b12                 mov edx, dword ptr [edx]
// 008efe2b  83c404               add esp, 4
// 008efe2e  50                   push eax
// 008efe2f  8bcf                 mov ecx, edi
// 008efe31  ffd2                 call edx
// 008efe33  ff158cca9800         call dword ptr [0x98ca8c]
// 008efe39  8bc8                 mov ecx, eax
// 008efe3b  03c9                 add ecx, ecx
// 008efe3d  03c9                 add ecx, ecx
// 008efe3f  b8cdcccccc           mov eax, 0xcccccccd
// 008efe44  f7e1                 mul ecx
// 008efe46  6a00                 push 0
// 008efe48  c1ea02               shr edx, 2
// 008efe4b  52                   push edx
// 008efe4c  8b9600010000         mov edx, dword ptr [esi + 0x100]
// 008efe52  8b4220               mov eax, dword ptr [edx + 0x20]
// 008efe55  689d450000           push 0x459d
// 008efe5a  50                   push eax
// 008efe5b  ff1558cc9800         call dword ptr [0x98cc58]
// 008efe61  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 008efe67  8b4820               mov ecx, dword ptr [eax + 0x20]
// 008efe6a  51                   push ecx
// 008efe6b  ff152ccc9800         call dword ptr [0x98cc2c]
// 008efe71  50                   push eax
// 008efe72  e8b33cf0ff           call 0x7f3b2a
// 008efe77  53                   push ebx
// 008efe78  eb06                 jmp 0x8efe80
// 008efe7a  8d9b00000000         lea ebx, [ebx]
// 008efe80  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 008efe86  85c0                 test eax, eax
// 008efe88  7504                 jne 0x8efe8e
// 008efe8a  33db                 xor ebx, ebx
// 008efe8c  eb03                 jmp 0x8efe91
// 008efe8e  8b5820               mov ebx, dword ptr [eax + 0x20]
// 008efe91  ff1528cc9800         call dword ptr [0x98cc28]
// 008efe97  3bc3                 cmp eax, ebx
// 008efe99  0f85b0000000         jne 0x8eff4f
// 008efe9f  8b16                 mov edx, dword ptr [esi]
// 008efea1  8b8280000000         mov eax, dword ptr [edx + 0x80]
// 008efea7  6a00                 push 0
// 008efea9  8bce                 mov ecx, esi
// 008efeab  ffd0                 call eax
// 008efead  85c0                 test eax, eax
// 008efeaf  0f849a000000         je 0x8eff4f
// 008efeb5  6a00                 push 0
// 008efeb7  6a00                 push 0
// 008efeb9  6a00                 push 0
// 008efebb  8d4c241c             lea ecx, [esp + 0x1c]
// 008efebf  51                   push ecx
// 008efec0  ff15b0ca9800         call dword ptr [0x98cab0]
// 008efec6  85c0                 test eax, eax
// 008efec8  747b                 je 0x8eff45
// 008efeca  8b442414             mov eax, dword ptr [esp + 0x14]
// 008efece  3d13010000           cmp eax, 0x113
// 008efed3  754e                 jne 0x8eff23
// 008efed5  817c24189d450000     cmp dword ptr [esp + 0x18], 0x459d
// 008efedd  754b                 jne 0x8eff2a
// 008efedf  8b17                 mov edx, dword ptr [edi]
// 008efee1  8b8674010000         mov eax, dword ptr [esi + 0x174]
// 008efee7  8b12                 mov edx, dword ptr [edx]
// 008efee9  50                   push eax
// 008efeea  8bcf                 mov ecx, edi
// 008efeec  ffd2                 call edx
// 008efeee  85ed                 test ebp, ebp
// 008efef0  742a                 je 0x8eff1c
// 008efef2  ff158cca9800         call dword ptr [0x98ca8c]
// 008efef8  8bc8                 mov ecx, eax
// 008efefa  b8cdcccccc           mov eax, 0xcccccccd
// 008efeff  f7e1                 mul ecx
// 008eff01  6a00                 push 0
// 008eff03  c1ea03               shr edx, 3
// 008eff06  52                   push edx
// 008eff07  8b9600010000         mov edx, dword ptr [esi + 0x100]
// 008eff0d  8b4220               mov eax, dword ptr [edx + 0x20]
// 008eff10  689d450000           push 0x459d
// 008eff15  50                   push eax
// 008eff16  ff1558cc9800         call dword ptr [0x98cc58]
// 008eff1c  33ed                 xor ebp, ebp
// 008eff1e  e95dffffff           jmp 0x8efe80
// 008eff23  3d02020000           cmp eax, 0x202
// 008eff28  7425                 je 0x8eff4f
// 008eff2a  8d4c2410             lea ecx, [esp + 0x10]
// 008eff2e  51                   push ecx
// 008eff2f  ff15d0c99800         call dword ptr [0x98c9d0]
// 008eff35  8d542410             lea edx, [esp + 0x10]
// 008eff39  52                   push edx
// 008eff3a  ff1594ca9800         call dword ptr [0x98ca94]
// 008eff40  e93bffffff           jmp 0x8efe80
// 008eff45  8b442418             mov eax, dword ptr [esp + 0x18]
// 008eff49  50                   push eax
// 008eff4a  e8ab47f0ff           call 0x7f46fa
// 008eff4f  ff1520cc9800         call dword ptr [0x98cc20]
// 008eff55  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 008eff5b  8b5120               mov edx, dword ptr [ecx + 0x20]
// 008eff5e  689d450000           push 0x459d
// 008eff63  52                   push edx
// 008eff64  ff15d0cb9800         call dword ptr [0x98cbd0]
// 008eff6a  8b06                 mov eax, dword ptr [esi]
// 008eff6c  8b9080000000         mov edx, dword ptr [eax + 0x80]
// 008eff72  33ff                 xor edi, edi
// 008eff74  57                   push edi
// 008eff75  8bce                 mov ecx, esi
// 008eff77  89bea8000000         mov dword ptr [esi + 0xa8], edi
// 008eff7d  ffd2                 call edx
// 008eff7f  5b                   pop ebx
// 008eff80  85c0                 test eax, eax
// 008eff82  7506                 jne 0x8eff8a
// 008eff84  89bea4000000         mov dword ptr [esi + 0xa4], edi
// 008eff8a  57                   push edi
// 008eff8b  8bce                 mov ecx, esi
// 008eff8d  e82e67f0ff           call 0x7f66c0
// 008eff92  5f                   pop edi
// 008eff93  5e                   pop esi
// 008eff94  5d                   pop ebp
// 008eff95  83c41c               add esp, 0x1c
// 008eff98  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnClick@CControlGroupsScroll@CXTPRibbonScrollableBar@@UAEXHVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonPopups.cpp