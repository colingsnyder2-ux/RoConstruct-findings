// roc 2008-06 0072f9b0  unit: CXTPControlGalleryPaintManager  size: 302 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0072f9b0
//
// 0072f9b0  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0072f9b4  8b442410             mov eax, dword ptr [esp + 0x10]
// 0072f9b8  83ec08               sub esp, 8
// 0072f9bb  53                   push ebx
// 0072f9bc  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 0072f9c0  56                   push esi
// 0072f9c1  57                   push edi
// 0072f9c2  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0072f9c6  2bc3                 sub eax, ebx
// 0072f9c8  2bcf                 sub ecx, edi
// 0072f9ca  3bc1                 cmp eax, ecx
// 0072f9cc  8bf0                 mov esi, eax
// 0072f9ce  7c02                 jl 0x72f9d2
// 0072f9d0  8bf1                 mov esi, ecx
// 0072f9d2  83fe06               cmp esi, 6
// 0072f9d5  0f8cfc000000         jl 0x72fad7
// 0072f9db  2bc6                 sub eax, esi
// 0072f9dd  99                   cdq 
// 0072f9de  2bc2                 sub eax, edx
// 0072f9e0  d1f8                 sar eax, 1
// 0072f9e2  55                   push ebp
// 0072f9e3  8d6c1802             lea ebp, [eax + ebx + 2]
// 0072f9e7  8bc1                 mov eax, ecx
// 0072f9e9  2bc6                 sub eax, esi
// 0072f9eb  99                   cdq 
// 0072f9ec  2bc2                 sub eax, edx
// 0072f9ee  d1f8                 sar eax, 1
// 0072f9f0  8d443802             lea eax, [eax + edi + 2]
// 0072f9f4  83ee04               sub esi, 4
// 0072f9f7  837c243800           cmp dword ptr [esp + 0x38], 0
// 0072f9fc  89442410             mov dword ptr [esp + 0x10], eax
// 0072fa00  7404                 je 0x72fa06
// 0072fa02  33ff                 xor edi, edi
// 0072fa04  eb0a                 jmp 0x72fa10
// 0072fa06  6a10                 push 0x10
// 0072fa08  ff15582b8000         call dword ptr [0x802b58]
// 0072fa0e  8bf8                 mov edi, eax
// 0072fa10  68f0268600           push 0x8626f0
// 0072fa15  6a00                 push 0
// 0072fa17  6a00                 push 0
// 0072fa19  6a00                 push 0
// 0072fa1b  6a00                 push 0
// 0072fa1d  6a02                 push 2
// 0072fa1f  6a00                 push 0
// 0072fa21  6a00                 push 0
// 0072fa23  6a00                 push 0
// 0072fa25  6890010000           push 0x190
// 0072fa2a  6a00                 push 0
// 0072fa2c  6a00                 push 0
// 0072fa2e  6a00                 push 0
// 0072fa30  56                   push esi
// 0072fa31  ff1520218000         call dword ptr [0x802120]
// 0072fa37  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0072fa3b  8bd8                 mov ebx, eax
// 0072fa3d  85f6                 test esi, esi
// 0072fa3f  7504                 jne 0x72fa45
// 0072fa41  33c0                 xor eax, eax
// 0072fa43  eb03                 jmp 0x72fa48
// 0072fa45  8b4604               mov eax, dword ptr [esi + 4]
// 0072fa48  53                   push ebx
// 0072fa49  50                   push eax
// 0072fa4a  ff15b0208000         call dword ptr [0x8020b0]
// 0072fa50  89442414             mov dword ptr [esp + 0x14], eax
// 0072fa54  85f6                 test esi, esi
// 0072fa56  7504                 jne 0x72fa5c
// 0072fa58  33c0                 xor eax, eax
// 0072fa5a  eb03                 jmp 0x72fa5f
// 0072fa5c  8b4604               mov eax, dword ptr [esi + 4]
// 0072fa5f  57                   push edi
// 0072fa60  50                   push eax
// 0072fa61  ff1598208000         call dword ptr [0x802098]
// 0072fa67  6a01                 push 1
// 0072fa69  8bce                 mov ecx, esi
// 0072fa6b  e8b2c50800           call 0x7bc022
// 0072fa70  837c243000           cmp dword ptr [esp + 0x30], 0
// 0072fa75  7415                 je 0x72fa8c
// 0072fa77  837c243400           cmp dword ptr [esp + 0x34], 0
// 0072fa7c  7407                 je 0x72fa85
// 0072fa7e  b99cf88500           mov ecx, 0x85f89c
// 0072fa83  eb18                 jmp 0x72fa9d
// 0072fa85  b9105f8100           mov ecx, 0x815f10
// 0072fa8a  eb11                 jmp 0x72fa9d
// 0072fa8c  837c243400           cmp dword ptr [esp + 0x34], 0
// 0072fa91  b9a0f88500           mov ecx, 0x85f8a0
// 0072fa96  7505                 jne 0x72fa9d
// 0072fa98  b9a4f88500           mov ecx, 0x85f8a4
// 0072fa9d  85f6                 test esi, esi
// 0072fa9f  7504                 jne 0x72faa5
// 0072faa1  33c0                 xor eax, eax
// 0072faa3  eb03                 jmp 0x72faa8
// 0072faa5  8b4604               mov eax, dword ptr [esi + 4]
// 0072faa8  6a01                 push 1
// 0072faaa  51                   push ecx
// 0072faab  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0072faaf  51                   push ecx
// 0072fab0  55                   push ebp
// 0072fab1  50                   push eax
// 0072fab2  ff1584208000         call dword ptr [0x802084]
// 0072fab8  5d                   pop ebp
// 0072fab9  85f6                 test esi, esi
// 0072fabb  7504                 jne 0x72fac1
// 0072fabd  33f6                 xor esi, esi
// 0072fabf  eb03                 jmp 0x72fac4
// 0072fac1  8b7604               mov esi, dword ptr [esi + 4]
// 0072fac4  8b542410             mov edx, dword ptr [esp + 0x10]
// 0072fac8  52                   push edx
// 0072fac9  56                   push esi
// 0072faca  ff15b0208000         call dword ptr [0x8020b0]
// 0072fad0  53                   push ebx
// 0072fad1  ff1550218000         call dword ptr [0x802150]
// 0072fad7  5f                   pop edi
// 0072fad8  5e                   pop esi
// 0072fad9  5b                   pop ebx
// 0072fada  83c408               add esp, 8
// 0072fadd  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControlGallery.cpp (function ?DrawArrowGlyph@@YAXPAVCDC@@VCRect@@HHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlGallery.cpp
