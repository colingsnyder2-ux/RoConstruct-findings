// roc 2010-06 0080a880  unit: CXTPTabClientWnd  size: 218 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0080a880
//
// 0080a880  83ec1c               sub esp, 0x1c
// 0080a883  53                   push ebx
// 0080a884  56                   push esi
// 0080a885  57                   push edi
// 0080a886  8b3d88bc9e00         mov edi, dword ptr [0x9ebc88]
// 0080a88c  6a00                 push 0
// 0080a88e  6a0f                 push 0xf
// 0080a890  6a0f                 push 0xf
// 0080a892  6a00                 push 0
// 0080a894  8d44241c             lea eax, [esp + 0x1c]
// 0080a898  50                   push eax
// 0080a899  8bf1                 mov esi, ecx
// 0080a89b  ffd7                 call edi
// 0080a89d  85c0                 test eax, eax
// 0080a89f  7439                 je 0x80a8da
// 0080a8a1  8b1d08bc9e00         mov ebx, dword ptr [0x9ebc08]
// 0080a8a7  6a0f                 push 0xf
// 0080a8a9  6a0f                 push 0xf
// 0080a8ab  6a00                 push 0
// 0080a8ad  8d4c2418             lea ecx, [esp + 0x18]
// 0080a8b1  51                   push ecx
// 0080a8b2  ff15f0bb9e00         call dword ptr [0x9ebbf0]
// 0080a8b8  85c0                 test eax, eax
// 0080a8ba  0f8493000000         je 0x80a953
// 0080a8c0  8d54240c             lea edx, [esp + 0xc]
// 0080a8c4  52                   push edx
// 0080a8c5  ffd3                 call ebx
// 0080a8c7  6a00                 push 0
// 0080a8c9  6a0f                 push 0xf
// 0080a8cb  6a0f                 push 0xf
// 0080a8cd  6a00                 push 0
// 0080a8cf  8d44241c             lea eax, [esp + 0x1c]
// 0080a8d3  50                   push eax
// 0080a8d4  ffd7                 call edi
// 0080a8d6  85c0                 test eax, eax
// 0080a8d8  75cd                 jne 0x80a8a7
// 0080a8da  8b3de4ba9e00         mov edi, dword ptr [0x9ebae4]
// 0080a8e0  8d8ef8000000         lea ecx, [esi + 0xf8]
// 0080a8e6  51                   push ecx
// 0080a8e7  ffd7                 call edi
// 0080a8e9  8d96dc000000         lea edx, [esi + 0xdc]
// 0080a8ef  52                   push edx
// 0080a8f0  c7860c01000000000000 mov dword ptr [esi + 0x10c], 0
// 0080a8fa  c7860801000000000000 mov dword ptr [esi + 0x108], 0
// 0080a904  ffd7                 call edi
// 0080a906  c786f000000000000000 mov dword ptr [esi + 0xf0], 0
// 0080a910  ff1574ba9e00         call dword ptr [0x9eba74]
// 0080a916  50                   push eax
// 0080a917  e84ed3f9ff           call 0x7a7c6a
// 0080a91c  8bf8                 mov edi, eax
// 0080a91e  8b4720               mov eax, dword ptr [edi + 0x20]
// 0080a921  50                   push eax
// 0080a922  ff15d0ba9e00         call dword ptr [0x9ebad0]
// 0080a928  85c0                 test eax, eax
// 0080a92a  740d                 je 0x80a939
// 0080a92c  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 0080a92f  6803040000           push 0x403
// 0080a934  6a00                 push 0
// 0080a936  51                   push ecx
// 0080a937  eb08                 jmp 0x80a941
// 0080a939  8b5720               mov edx, dword ptr [edi + 0x20]
// 0080a93c  6a03                 push 3
// 0080a93e  6a00                 push 0
// 0080a940  52                   push edx
// 0080a941  ff15d4ba9e00         call dword ptr [0x9ebad4]
// 0080a947  50                   push eax
// 0080a948  e81f241700           call 0x97cd6c
// 0080a94d  898610010000         mov dword ptr [esi + 0x110], eax
// 0080a953  5f                   pop edi
// 0080a954  5e                   pop esi
// 0080a955  5b                   pop ebx
// 0080a956  83c41c               add esp, 0x1c
// 0080a959  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?InitLoop@CXTPTabClientWnd@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
