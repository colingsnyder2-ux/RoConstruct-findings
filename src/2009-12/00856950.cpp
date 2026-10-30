// roc 2009-12 00856950  unit: CXTPTabClientWnd  size: 218 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00856950
//
// 00856950  83ec1c               sub esp, 0x1c
// 00856953  53                   push ebx
// 00856954  56                   push esi
// 00856955  57                   push edi
// 00856956  8b3d24cc9800         mov edi, dword ptr [0x98cc24]
// 0085695c  6a00                 push 0
// 0085695e  6a0f                 push 0xf
// 00856960  6a0f                 push 0xf
// 00856962  6a00                 push 0
// 00856964  8d44241c             lea eax, [esp + 0x1c]
// 00856968  50                   push eax
// 00856969  8bf1                 mov esi, ecx
// 0085696b  ffd7                 call edi
// 0085696d  85c0                 test eax, eax
// 0085696f  7439                 je 0x8569aa
// 00856971  8b1d94ca9800         mov ebx, dword ptr [0x98ca94]
// 00856977  6a0f                 push 0xf
// 00856979  6a0f                 push 0xf
// 0085697b  6a00                 push 0
// 0085697d  8d4c2418             lea ecx, [esp + 0x18]
// 00856981  51                   push ecx
// 00856982  ff15b0ca9800         call dword ptr [0x98cab0]
// 00856988  85c0                 test eax, eax
// 0085698a  0f8493000000         je 0x856a23
// 00856990  8d54240c             lea edx, [esp + 0xc]
// 00856994  52                   push edx
// 00856995  ffd3                 call ebx
// 00856997  6a00                 push 0
// 00856999  6a0f                 push 0xf
// 0085699b  6a0f                 push 0xf
// 0085699d  6a00                 push 0
// 0085699f  8d44241c             lea eax, [esp + 0x1c]
// 008569a3  50                   push eax
// 008569a4  ffd7                 call edi
// 008569a6  85c0                 test eax, eax
// 008569a8  75cd                 jne 0x856977
// 008569aa  8b3d9cca9800         mov edi, dword ptr [0x98ca9c]
// 008569b0  8d8ef8000000         lea ecx, [esi + 0xf8]
// 008569b6  51                   push ecx
// 008569b7  ffd7                 call edi
// 008569b9  8d96dc000000         lea edx, [esi + 0xdc]
// 008569bf  52                   push edx
// 008569c0  c7860c01000000000000 mov dword ptr [esi + 0x10c], 0
// 008569ca  c7860801000000000000 mov dword ptr [esi + 0x108], 0
// 008569d4  ffd7                 call edi
// 008569d6  c786f000000000000000 mov dword ptr [esi + 0xf0], 0
// 008569e0  ff15e4cb9800         call dword ptr [0x98cbe4]
// 008569e6  50                   push eax
// 008569e7  e83ed1f9ff           call 0x7f3b2a
// 008569ec  8bf8                 mov edi, eax
// 008569ee  8b4720               mov eax, dword ptr [edi + 0x20]
// 008569f1  50                   push eax
// 008569f2  ff15acca9800         call dword ptr [0x98caac]
// 008569f8  85c0                 test eax, eax
// 008569fa  740d                 je 0x856a09
// 008569fc  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 008569ff  6803040000           push 0x403
// 00856a04  6a00                 push 0
// 00856a06  51                   push ecx
// 00856a07  eb08                 jmp 0x856a11
// 00856a09  8b5720               mov edx, dword ptr [edi + 0x20]
// 00856a0c  6a03                 push 3
// 00856a0e  6a00                 push 0
// 00856a10  52                   push edx
// 00856a11  ff15a8ca9800         call dword ptr [0x98caa8]
// 00856a17  50                   push eax
// 00856a18  e813fa0c00           call 0x926430
// 00856a1d  898610010000         mov dword ptr [esi + 0x110], eax
// 00856a23  5f                   pop edi
// 00856a24  5e                   pop esi
// 00856a25  5b                   pop ebx
// 00856a26  83c41c               add esp, 0x1c
// 00856a29  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?InitLoop@CXTPTabClientWnd@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
