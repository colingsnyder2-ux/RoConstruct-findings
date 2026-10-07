// roc 2012-06 009fb880  unit: CXTPControlGalleryPaintManager  size: 302 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009fb880
//
// 009fb880  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 009fb884  8b442410             mov eax, dword ptr [esp + 0x10]
// 009fb888  83ec08               sub esp, 8
// 009fb88b  53                   push ebx
// 009fb88c  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 009fb890  56                   push esi
// 009fb891  57                   push edi
// 009fb892  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 009fb896  2bc3                 sub eax, ebx
// 009fb898  2bcf                 sub ecx, edi
// 009fb89a  3bc1                 cmp eax, ecx
// 009fb89c  8bf0                 mov esi, eax
// 009fb89e  7c02                 jl 0x9fb8a2
// 009fb8a0  8bf1                 mov esi, ecx
// 009fb8a2  83fe06               cmp esi, 6
// 009fb8a5  0f8cfc000000         jl 0x9fb9a7
// 009fb8ab  2bc6                 sub eax, esi
// 009fb8ad  99                   cdq 
// 009fb8ae  2bc2                 sub eax, edx
// 009fb8b0  d1f8                 sar eax, 1
// 009fb8b2  55                   push ebp
// 009fb8b3  8d6c1802             lea ebp, [eax + ebx + 2]
// 009fb8b7  8bc1                 mov eax, ecx
// 009fb8b9  2bc6                 sub eax, esi
// 009fb8bb  99                   cdq 
// 009fb8bc  2bc2                 sub eax, edx
// 009fb8be  d1f8                 sar eax, 1
// 009fb8c0  8d443802             lea eax, [eax + edi + 2]
// 009fb8c4  83ee04               sub esi, 4
// 009fb8c7  837c243800           cmp dword ptr [esp + 0x38], 0
// 009fb8cc  89442410             mov dword ptr [esp + 0x10], eax
// 009fb8d0  7404                 je 0x9fb8d6
// 009fb8d2  33ff                 xor edi, edi
// 009fb8d4  eb0a                 jmp 0x9fb8e0
// 009fb8d6  6a10                 push 0x10
// 009fb8d8  ff15d83cb200         call dword ptr [0xb23cd8]
// 009fb8de  8bf8                 mov edi, eax
// 009fb8e0  68a0b6c100           push 0xc1b6a0
// 009fb8e5  6a00                 push 0
// 009fb8e7  6a00                 push 0
// 009fb8e9  6a00                 push 0
// 009fb8eb  6a00                 push 0
// 009fb8ed  6a02                 push 2
// 009fb8ef  6a00                 push 0
// 009fb8f1  6a00                 push 0
// 009fb8f3  6a00                 push 0
// 009fb8f5  6890010000           push 0x190
// 009fb8fa  6a00                 push 0
// 009fb8fc  6a00                 push 0
// 009fb8fe  6a00                 push 0
// 009fb900  56                   push esi
// 009fb901  ff153421b200         call dword ptr [0xb22134]
// 009fb907  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 009fb90b  8bd8                 mov ebx, eax
// 009fb90d  85f6                 test esi, esi
// 009fb90f  7504                 jne 0x9fb915
// 009fb911  33c0                 xor eax, eax
// 009fb913  eb03                 jmp 0x9fb918
// 009fb915  8b4604               mov eax, dword ptr [esi + 4]
// 009fb918  53                   push ebx
// 009fb919  50                   push eax
// 009fb91a  ff156021b200         call dword ptr [0xb22160]
// 009fb920  89442414             mov dword ptr [esp + 0x14], eax
// 009fb924  85f6                 test esi, esi
// 009fb926  7504                 jne 0x9fb92c
// 009fb928  33c0                 xor eax, eax
// 009fb92a  eb03                 jmp 0x9fb92f
// 009fb92c  8b4604               mov eax, dword ptr [esi + 4]
// 009fb92f  57                   push edi
// 009fb930  50                   push eax
// 009fb931  ff15d020b200         call dword ptr [0xb220d0]
// 009fb937  6a01                 push 1
// 009fb939  8bce                 mov ecx, esi
// 009fb93b  e868dc0900           call 0xa995a8
// 009fb940  837c243000           cmp dword ptr [esp + 0x30], 0
// 009fb945  7415                 je 0x9fb95c
// 009fb947  837c243400           cmp dword ptr [esp + 0x34], 0
// 009fb94c  7407                 je 0x9fb955
// 009fb94e  b97ce8be00           mov ecx, 0xbee87c
// 009fb953  eb18                 jmp 0x9fb96d
// 009fb955  b9d082b500           mov ecx, 0xb582d0
// 009fb95a  eb11                 jmp 0x9fb96d
// 009fb95c  837c243400           cmp dword ptr [esp + 0x34], 0
// 009fb961  b978e8be00           mov ecx, 0xbee878
// 009fb966  7505                 jne 0x9fb96d
// 009fb968  b974e8be00           mov ecx, 0xbee874
// 009fb96d  85f6                 test esi, esi
// 009fb96f  7504                 jne 0x9fb975
// 009fb971  33c0                 xor eax, eax
// 009fb973  eb03                 jmp 0x9fb978
// 009fb975  8b4604               mov eax, dword ptr [esi + 4]
// 009fb978  6a01                 push 1
// 009fb97a  51                   push ecx
// 009fb97b  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 009fb97f  51                   push ecx
// 009fb980  55                   push ebp
// 009fb981  50                   push eax
// 009fb982  ff15e420b200         call dword ptr [0xb220e4]
// 009fb988  5d                   pop ebp
// 009fb989  85f6                 test esi, esi
// 009fb98b  7504                 jne 0x9fb991
// 009fb98d  33f6                 xor esi, esi
// 009fb98f  eb03                 jmp 0x9fb994
// 009fb991  8b7604               mov esi, dword ptr [esi + 4]
// 009fb994  8b542410             mov edx, dword ptr [esp + 0x10]
// 009fb998  52                   push edx
// 009fb999  56                   push esi
// 009fb99a  ff156021b200         call dword ptr [0xb22160]
// 009fb9a0  53                   push ebx
// 009fb9a1  ff157021b200         call dword ptr [0xb22170]
// 009fb9a7  5f                   pop edi
// 009fb9a8  5e                   pop esi
// 009fb9a9  5b                   pop ebx
// 009fb9aa  83c408               add esp, 8
// 009fb9ad  c3                   ret 
// library xtp-15.2.1/Source\Controls\Scroll\XTPScrollBar.cpp (function ?DrawArrowGlyph@@YAXPAVCDC@@VCRect@@HHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Scroll/XTPScrollBar.cpp
