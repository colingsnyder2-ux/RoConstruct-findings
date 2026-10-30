// roc 2009-12 00876a50  unit: CXTPRibbonTheme  size: 352 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00876a50
//
// 00876a50  6aff                 push -1
// 00876a52  68e8009600           push 0x9600e8
// 00876a57  64a100000000         mov eax, dword ptr fs:[0]
// 00876a5d  50                   push eax
// 00876a5e  83ec48               sub esp, 0x48
// 00876a61  53                   push ebx
// 00876a62  55                   push ebp
// 00876a63  56                   push esi
// 00876a64  57                   push edi
// 00876a65  a10052b600           mov eax, dword ptr [0xb65200]
// 00876a6a  33c4                 xor eax, esp
// 00876a6c  50                   push eax
// 00876a6d  8d44245c             lea eax, [esp + 0x5c]
// 00876a71  64a300000000         mov dword ptr fs:[0], eax
// 00876a77  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 00876a7b  50                   push eax
// 00876a7c  8d4c2420             lea ecx, [esp + 0x20]
// 00876a80  e8eb47fdff           call 0x84b270
// 00876a85  8b442420             mov eax, dword ptr [esp + 0x20]
// 00876a89  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00876a8d  f7d8                 neg eax
// 00876a8f  f7d9                 neg ecx
// 00876a91  50                   push eax
// 00876a92  51                   push ecx
// 00876a93  8d4c2424             lea ecx, [esp + 0x24]
// 00876a97  51                   push ecx
// 00876a98  ff156ccc9800         call dword ptr [0x98cc6c]
// 00876a9e  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00876aa2  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 00876aa6  2b7c241c             sub edi, dword ptr [esp + 0x1c]
// 00876aaa  2b5c2420             sub ebx, dword ptr [esp + 0x20]
// 00876aae  ba01000000           mov edx, 1
// 00876ab3  8d47ff               lea eax, [edi - 1]
// 00876ab6  8d4bff               lea ecx, [ebx - 1]
// 00876ab9  33ed                 xor ebp, ebp
// 00876abb  6a50                 push 0x50
// 00876abd  89542430             mov dword ptr [esp + 0x30], edx
// 00876ac1  896c2434             mov dword ptr [esp + 0x34], ebp
// 00876ac5  89442438             mov dword ptr [esp + 0x38], eax
// 00876ac9  8954243c             mov dword ptr [esp + 0x3c], edx
// 00876acd  896c2440             mov dword ptr [esp + 0x40], ebp
// 00876ad1  89542444             mov dword ptr [esp + 0x44], edx
// 00876ad5  897c2448             mov dword ptr [esp + 0x48], edi
// 00876ad9  894c244c             mov dword ptr [esp + 0x4c], ecx
// 00876add  89542450             mov dword ptr [esp + 0x50], edx
// 00876ae1  894c2454             mov dword ptr [esp + 0x54], ecx
// 00876ae5  89442458             mov dword ptr [esp + 0x58], eax
// 00876ae9  895c245c             mov dword ptr [esp + 0x5c], ebx
// 00876aed  ff1578b79800         call dword ptr [0x98b778]
// 00876af3  8bf0                 mov esi, eax
// 00876af5  83c404               add esp, 4
// 00876af8  3bf5                 cmp esi, ebp
// 00876afa  0f849a000000         je 0x876b9a
// 00876b00  6a30                 push 0x30
// 00876b02  8d542430             lea edx, [esp + 0x30]
// 00876b06  52                   push edx
// 00876b07  8d4620               lea eax, [esi + 0x20]
// 00876b0a  6a30                 push 0x30
// 00876b0c  50                   push eax
// 00876b0d  ff157cb79800         call dword ptr [0x98b77c]
// 00876b13  33c0                 xor eax, eax
// 00876b15  894610               mov dword ptr [esi + 0x10], eax
// 00876b18  33c9                 xor ecx, ecx
// 00876b1a  894e14               mov dword ptr [esi + 0x14], ecx
// 00876b1d  897e18               mov dword ptr [esi + 0x18], edi
// 00876b20  c70620000000         mov dword ptr [esi], 0x20
// 00876b26  c7460401000000       mov dword ptr [esi + 4], 1
// 00876b2d  c7460803000000       mov dword ptr [esi + 8], 3
// 00876b34  896e0c               mov dword ptr [esi + 0xc], ebp
// 00876b37  895e1c               mov dword ptr [esi + 0x1c], ebx
// 00876b3a  bff82a9f00           mov edi, 0x9f2af8
// 00876b3f  83c410               add esp, 0x10
// 00876b42  896c2418             mov dword ptr [esp + 0x18], ebp
// 00876b46  897c2414             mov dword ptr [esp + 0x14], edi
// 00876b4a  56                   push esi
// 00876b4b  6a50                 push 0x50
// 00876b4d  55                   push ebp
// 00876b4e  896c2470             mov dword ptr [esp + 0x70], ebp
// 00876b52  ff15b8b09800         call dword ptr [0x98b0b8]
// 00876b58  50                   push eax
// 00876b59  8d4c2418             lea ecx, [esp + 0x18]
// 00876b5d  e8c8d2f7ff           call 0x7f3e2a
// 00876b62  56                   push esi
// 00876b63  ff1540b79800         call dword ptr [0x98b740]
// 00876b69  83c404               add esp, 4
// 00876b6c  8d4c2414             lea ecx, [esp + 0x14]
// 00876b70  e8f9f90a00           call 0x92656e
// 00876b75  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 00876b79  8b5120               mov edx, dword ptr [ecx + 0x20]
// 00876b7c  55                   push ebp
// 00876b7d  50                   push eax
// 00876b7e  52                   push edx
// 00876b7f  ff1554cb9800         call dword ptr [0x98cb54]
// 00876b85  8d4c2414             lea ecx, [esp + 0x14]
// 00876b89  c7442464ffffffff     mov dword ptr [esp + 0x64], 0xffffffff
// 00876b91  897c2414             mov dword ptr [esp + 0x14], edi
// 00876b95  e89686b9ff           call 0x40f230
// 00876b9a  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 00876b9e  64890d00000000       mov dword ptr fs:[0], ecx
// 00876ba5  59                   pop ecx
// 00876ba6  5f                   pop edi
// 00876ba7  5e                   pop esi
// 00876ba8  5d                   pop ebp
// 00876ba9  5b                   pop ebx
// 00876baa  83c454               add esp, 0x54
// 00876bad  c20400               ret 4
// copied from an identical function in another client (function ?SetRoundRectRegion@CXTPRibbonTheme@@IAEXPAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/Ribbon/XTPRibbonTheme.cpp