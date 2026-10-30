// roc 2009-12 008e8a50  unit: CXTPTabPaintManager::CColorSetWinXP  size: 608 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008e8a50
//
// 008e8a50  6aff                 push -1
// 008e8a52  68b8639600           push 0x9663b8
// 008e8a57  64a100000000         mov eax, dword ptr fs:[0]
// 008e8a5d  50                   push eax
// 008e8a5e  83ec60               sub esp, 0x60
// 008e8a61  53                   push ebx
// 008e8a62  55                   push ebp
// 008e8a63  56                   push esi
// 008e8a64  57                   push edi
// 008e8a65  a10052b600           mov eax, dword ptr [0xb65200]
// 008e8a6a  33c4                 xor eax, esp
// 008e8a6c  50                   push eax
// 008e8a6d  8d442474             lea eax, [esp + 0x74]
// 008e8a71  64a300000000         mov dword ptr fs:[0], eax
// 008e8a77  894c2420             mov dword ptr [esp + 0x20], ecx
// 008e8a7b  8bb42490000000       mov esi, dword ptr [esp + 0x90]
// 008e8a82  8bbc2494000000       mov edi, dword ptr [esp + 0x94]
// 008e8a89  2bb42488000000       sub esi, dword ptr [esp + 0x88]
// 008e8a90  2bbc248c000000       sub edi, dword ptr [esp + 0x8c]
// 008e8a97  6a2c                 push 0x2c
// 008e8a99  33db                 xor ebx, ebx
// 008e8a9b  8d44244c             lea eax, [esp + 0x4c]
// 008e8a9f  53                   push ebx
// 008e8aa0  50                   push eax
// 008e8aa1  e8febff0ff           call 0x7f4aa4
// 008e8aa6  83c40c               add esp, 0xc
// 008e8aa9  c744244828000000     mov dword ptr [esp + 0x48], 0x28
// 008e8ab1  399c249c000000       cmp dword ptr [esp + 0x9c], ebx
// 008e8ab8  740a                 je 0x8e8ac4
// 008e8aba  897c244c             mov dword ptr [esp + 0x4c], edi
// 008e8abe  89742450             mov dword ptr [esp + 0x50], esi
// 008e8ac2  eb08                 jmp 0x8e8acc
// 008e8ac4  8974244c             mov dword ptr [esp + 0x4c], esi
// 008e8ac8  897c2450             mov dword ptr [esp + 0x50], edi
// 008e8acc  8b2d60b19800         mov ebp, dword ptr [0x98b160]
// 008e8ad2  53                   push ebx
// 008e8ad3  53                   push ebx
// 008e8ad4  8d442420             lea eax, [esp + 0x20]
// 008e8ad8  50                   push eax
// 008e8ad9  b901000000           mov ecx, 1
// 008e8ade  66894c2460           mov word ptr [esp + 0x60], cx
// 008e8ae3  53                   push ebx
// 008e8ae4  8d4c2458             lea ecx, [esp + 0x58]
// 008e8ae8  51                   push ecx
// 008e8ae9  ba20000000           mov edx, 0x20
// 008e8aee  53                   push ebx
// 008e8aef  668954246e           mov word ptr [esp + 0x6e], dx
// 008e8af4  895c2470             mov dword ptr [esp + 0x70], ebx
// 008e8af8  895c2430             mov dword ptr [esp + 0x30], ebx
// 008e8afc  ffd5                 call ebp
// 008e8afe  8944241c             mov dword ptr [esp + 0x1c], eax
// 008e8b02  395c2418             cmp dword ptr [esp + 0x18], ebx
// 008e8b06  0f848e010000         je 0x8e8c9a
// 008e8b0c  53                   push ebx
// 008e8b0d  53                   push ebx
// 008e8b0e  8d54241c             lea edx, [esp + 0x1c]
// 008e8b12  52                   push edx
// 008e8b13  53                   push ebx
// 008e8b14  8d442458             lea eax, [esp + 0x58]
// 008e8b18  50                   push eax
// 008e8b19  53                   push ebx
// 008e8b1a  89742464             mov dword ptr [esp + 0x64], esi
// 008e8b1e  897c2468             mov dword ptr [esp + 0x68], edi
// 008e8b22  895c242c             mov dword ptr [esp + 0x2c], ebx
// 008e8b26  ffd5                 call ebp
// 008e8b28  8be8                 mov ebp, eax
// 008e8b2a  395c2414             cmp dword ptr [esp + 0x14], ebx
// 008e8b2e  0f8466010000         je 0x8e8c9a
// 008e8b34  8d4c2428             lea ecx, [esp + 0x28]
// 008e8b38  e871d90300           call 0x9264ae
// 008e8b3d  53                   push ebx
// 008e8b3e  899c2480000000       mov dword ptr [esp + 0x80], ebx
// 008e8b45  ff1554b19800         call dword ptr [0x98b154]
// 008e8b4b  50                   push eax
// 008e8b4c  8d4c242c             lea ecx, [esp + 0x2c]
// 008e8b50  e847d90300           call 0x92649c
// 008e8b55  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008e8b59  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 008e8b5d  51                   push ecx
// 008e8b5e  52                   push edx
// 008e8b5f  ff154cb19800         call dword ptr [0x98b14c]
// 008e8b65  89442424             mov dword ptr [esp + 0x24], eax
// 008e8b69  399c249c000000       cmp dword ptr [esp + 0x9c], ebx
// 008e8b70  7406                 je 0x8e8b78
// 008e8b72  8bce                 mov ecx, esi
// 008e8b74  8bc7                 mov eax, edi
// 008e8b76  eb04                 jmp 0x8e8b7c
// 008e8b78  8bcf                 mov ecx, edi
// 008e8b7a  8bc6                 mov eax, esi
// 008e8b7c  895c2438             mov dword ptr [esp + 0x38], ebx
// 008e8b80  895c243c             mov dword ptr [esp + 0x3c], ebx
// 008e8b84  89442440             mov dword ptr [esp + 0x40], eax
// 008e8b88  894c2444             mov dword ptr [esp + 0x44], ecx
// 008e8b8c  e83f6ef4ff           call 0x82f9d0
// 008e8b91  6a0f                 push 0xf
// 008e8b93  8bc8                 mov ecx, eax
// 008e8b95  e86665f4ff           call 0x82f100
// 008e8b9a  50                   push eax
// 008e8b9b  8d44243c             lea eax, [esp + 0x3c]
// 008e8b9f  50                   push eax
// 008e8ba0  8d4c2430             lea ecx, [esp + 0x30]
// 008e8ba4  e855baf0ff           call 0x7f45fe
// 008e8ba9  8b842498000000       mov eax, dword ptr [esp + 0x98]
// 008e8bb0  8b4860               mov ecx, dword ptr [eax + 0x60]
// 008e8bb3  8b5104               mov edx, dword ptr [ecx + 4]
// 008e8bb6  8994249c000000       mov dword ptr [esp + 0x9c], edx
// 008e8bbd  3bd0                 cmp edx, eax
// 008e8bbf  7507                 jne 0x8e8bc8
// 008e8bc1  ba03000000           mov edx, 3
// 008e8bc6  eb09                 jmp 0x8e8bd1
// 008e8bc8  33d2                 xor edx, edx
// 008e8bca  394108               cmp dword ptr [ecx + 8], eax
// 008e8bcd  0f94c2               sete dl
// 008e8bd0  42                   inc edx
// 008e8bd1  8b582c               mov ebx, dword ptr [eax + 0x2c]
// 008e8bd4  85db                 test ebx, ebx
// 008e8bd6  7505                 jne 0x8e8bdd
// 008e8bd8  8d4306               lea eax, [ebx + 6]
// 008e8bdb  eb1b                 jmp 0x8e8bf8
// 008e8bdd  8b495c               mov ecx, dword ptr [ecx + 0x5c]
// 008e8be0  49                   dec ecx
// 008e8be1  3bd9                 cmp ebx, ecx
// 008e8be3  750e                 jne 0x8e8bf3
// 008e8be5  3984249c000000       cmp dword ptr [esp + 0x9c], eax
// 008e8bec  b807000000           mov eax, 7
// 008e8bf1  7505                 jne 0x8e8bf8
// 008e8bf3  b805000000           mov eax, 5
// 008e8bf8  6a00                 push 0
// 008e8bfa  8d4c243c             lea ecx, [esp + 0x3c]
// 008e8bfe  51                   push ecx
// 008e8bff  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008e8c03  52                   push edx
// 008e8c04  8b542438             mov edx, dword ptr [esp + 0x38]
// 008e8c08  50                   push eax
// 008e8c09  52                   push edx
// 008e8c0a  81c108020000         add ecx, 0x208
// 008e8c10  e82b2cf8ff           call 0x86b840
// 008e8c15  8b442414             mov eax, dword ptr [esp + 0x14]
// 008e8c19  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008e8c1d  50                   push eax
// 008e8c1e  51                   push ecx
// 008e8c1f  57                   push edi
// 008e8c20  56                   push esi
// 008e8c21  ff9424b0000000       call dword ptr [esp + 0xb0]
// 008e8c28  8b94249c000000       mov edx, dword ptr [esp + 0x9c]
// 008e8c2f  8b8424a4000000       mov eax, dword ptr [esp + 0xa4]
// 008e8c36  8bb42498000000       mov esi, dword ptr [esp + 0x98]
// 008e8c3d  8b8c24a0000000       mov ecx, dword ptr [esp + 0xa0]
// 008e8c44  8bbc2494000000       mov edi, dword ptr [esp + 0x94]
// 008e8c4b  8b7f04               mov edi, dword ptr [edi + 4]
// 008e8c4e  83c410               add esp, 0x10
// 008e8c51  6a04                 push 4
// 008e8c53  2bc2                 sub eax, edx
// 008e8c55  50                   push eax
// 008e8c56  2bce                 sub ecx, esi
// 008e8c58  51                   push ecx
// 008e8c59  52                   push edx
// 008e8c5a  56                   push esi
// 008e8c5b  6a00                 push 0
// 008e8c5d  55                   push ebp
// 008e8c5e  6a00                 push 0
// 008e8c60  6a00                 push 0
// 008e8c62  57                   push edi
// 008e8c63  ff15f8ca9800         call dword ptr [0x98caf8]
// 008e8c69  8b542424             mov edx, dword ptr [esp + 0x24]
// 008e8c6d  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 008e8c71  52                   push edx
// 008e8c72  50                   push eax
// 008e8c73  ff154cb19800         call dword ptr [0x98b14c]
// 008e8c79  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008e8c7d  8b353cb19800         mov esi, dword ptr [0x98b13c]
// 008e8c83  51                   push ecx
// 008e8c84  ffd6                 call esi
// 008e8c86  55                   push ebp
// 008e8c87  ffd6                 call esi
// 008e8c89  8d4c2428             lea ecx, [esp + 0x28]
// 008e8c8d  c744247cffffffff     mov dword ptr [esp + 0x7c], 0xffffffff
// 008e8c95  e80ed80300           call 0x9264a8
// 008e8c9a  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 008e8c9e  64890d00000000       mov dword ptr fs:[0], ecx
// 008e8ca5  59                   pop ecx
// 008e8ca6  5f                   pop edi
// 008e8ca7  5e                   pop esi
// 008e8ca8  5d                   pop ebp
// 008e8ca9  5b                   pop ebx
// 008e8caa  83c46c               add esp, 0x6c
// 008e8cad  c22000               ret 0x20
// copied from an identical function in another client (function ?DrawRotatedButton@CColorSetWinXP@CXTPTabPaintManager@@QAEXPAVCDC@@VCRect@@PAVCXTPTabManagerItem@@HP6AXHHPAI3@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/TabManager/XTPTabPaintManagerColors.cpp