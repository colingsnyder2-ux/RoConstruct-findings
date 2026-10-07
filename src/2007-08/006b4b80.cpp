// roc 2007-08 006b4b80  unit: CXTPControlGalleryPaintManager  size: 298 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006b4b80
//
// 006b4b80  51                   push ecx
// 006b4b81  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 006b4b85  8b442414             mov eax, dword ptr [esp + 0x14]
// 006b4b89  53                   push ebx
// 006b4b8a  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 006b4b8e  56                   push esi
// 006b4b8f  57                   push edi
// 006b4b90  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 006b4b94  2bc3                 sub eax, ebx
// 006b4b96  2bcf                 sub ecx, edi
// 006b4b98  3bc1                 cmp eax, ecx
// 006b4b9a  8bf0                 mov esi, eax
// 006b4b9c  7c02                 jl 0x6b4ba0
// 006b4b9e  8bf1                 mov esi, ecx
// 006b4ba0  83fe06               cmp esi, 6
// 006b4ba3  0f8cfc000000         jl 0x6b4ca5
// 006b4ba9  2bc6                 sub eax, esi
// 006b4bab  99                   cdq 
// 006b4bac  2bc2                 sub eax, edx
// 006b4bae  d1f8                 sar eax, 1
// 006b4bb0  55                   push ebp
// 006b4bb1  8d6c1802             lea ebp, [eax + ebx + 2]
// 006b4bb5  8bc1                 mov eax, ecx
// 006b4bb7  2bc6                 sub eax, esi
// 006b4bb9  99                   cdq 
// 006b4bba  2bc2                 sub eax, edx
// 006b4bbc  d1f8                 sar eax, 1
// 006b4bbe  8d443802             lea eax, [eax + edi + 2]
// 006b4bc2  83ee04               sub esi, 4
// 006b4bc5  837c243400           cmp dword ptr [esp + 0x34], 0
// 006b4bca  8944241c             mov dword ptr [esp + 0x1c], eax
// 006b4bce  7404                 je 0x6b4bd4
// 006b4bd0  33ff                 xor edi, edi
// 006b4bd2  eb0a                 jmp 0x6b4bde
// 006b4bd4  6a10                 push 0x10
// 006b4bd6  ff1558ee7700         call dword ptr [0x77ee58]
// 006b4bdc  8bf8                 mov edi, eax
// 006b4bde  6828637d00           push 0x7d6328
// 006b4be3  6a00                 push 0
// 006b4be5  6a00                 push 0
// 006b4be7  6a00                 push 0
// 006b4be9  6a00                 push 0
// 006b4beb  6a02                 push 2
// 006b4bed  6a00                 push 0
// 006b4bef  6a00                 push 0
// 006b4bf1  6a00                 push 0
// 006b4bf3  6890010000           push 0x190
// 006b4bf8  6a00                 push 0
// 006b4bfa  6a00                 push 0
// 006b4bfc  6a00                 push 0
// 006b4bfe  56                   push esi
// 006b4bff  ff1598d07700         call dword ptr [0x77d098]
// 006b4c05  8b742418             mov esi, dword ptr [esp + 0x18]
// 006b4c09  85f6                 test esi, esi
// 006b4c0b  8bd8                 mov ebx, eax
// 006b4c0d  7504                 jne 0x6b4c13
// 006b4c0f  33c0                 xor eax, eax
// 006b4c11  eb03                 jmp 0x6b4c16
// 006b4c13  8b4604               mov eax, dword ptr [esi + 4]
// 006b4c16  53                   push ebx
// 006b4c17  50                   push eax
// 006b4c18  ff1528d17700         call dword ptr [0x77d128]
// 006b4c1e  85f6                 test esi, esi
// 006b4c20  89442410             mov dword ptr [esp + 0x10], eax
// 006b4c24  7504                 jne 0x6b4c2a
// 006b4c26  33c0                 xor eax, eax
// 006b4c28  eb03                 jmp 0x6b4c2d
// 006b4c2a  8b4604               mov eax, dword ptr [esi + 4]
// 006b4c2d  57                   push edi
// 006b4c2e  50                   push eax
// 006b4c2f  ff1510d17700         call dword ptr [0x77d110]
// 006b4c35  6a01                 push 1
// 006b4c37  8bce                 mov ecx, esi
// 006b4c39  e8aa370800           call 0x7383e8
// 006b4c3e  837c242c00           cmp dword ptr [esp + 0x2c], 0
// 006b4c43  7415                 je 0x6b4c5a
// 006b4c45  837c243000           cmp dword ptr [esp + 0x30], 0
// 006b4c4a  7407                 je 0x6b4c53
// 006b4c4c  b9b8397d00           mov ecx, 0x7d39b8
// 006b4c51  eb18                 jmp 0x6b4c6b
// 006b4c53  b95cfd7800           mov ecx, 0x78fd5c
// 006b4c58  eb11                 jmp 0x6b4c6b
// 006b4c5a  837c243000           cmp dword ptr [esp + 0x30], 0
// 006b4c5f  b9bc397d00           mov ecx, 0x7d39bc
// 006b4c64  7505                 jne 0x6b4c6b
// 006b4c66  b9c0397d00           mov ecx, 0x7d39c0
// 006b4c6b  85f6                 test esi, esi
// 006b4c6d  7504                 jne 0x6b4c73
// 006b4c6f  33c0                 xor eax, eax
// 006b4c71  eb03                 jmp 0x6b4c76
// 006b4c73  8b4604               mov eax, dword ptr [esi + 4]
// 006b4c76  6a01                 push 1
// 006b4c78  51                   push ecx
// 006b4c79  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 006b4c7d  51                   push ecx
// 006b4c7e  55                   push ebp
// 006b4c7f  50                   push eax
// 006b4c80  ff1574d07700         call dword ptr [0x77d074]
// 006b4c86  85f6                 test esi, esi
// 006b4c88  5d                   pop ebp
// 006b4c89  7504                 jne 0x6b4c8f
// 006b4c8b  33f6                 xor esi, esi
// 006b4c8d  eb03                 jmp 0x6b4c92
// 006b4c8f  8b7604               mov esi, dword ptr [esi + 4]
// 006b4c92  8b54240c             mov edx, dword ptr [esp + 0xc]
// 006b4c96  52                   push edx
// 006b4c97  56                   push esi
// 006b4c98  ff1528d17700         call dword ptr [0x77d128]
// 006b4c9e  53                   push ebx
// 006b4c9f  ff15c8d07700         call dword ptr [0x77d0c8]
// 006b4ca5  5f                   pop edi
// 006b4ca6  5e                   pop esi
// 006b4ca7  5b                   pop ebx
// 006b4ca8  59                   pop ecx
// 006b4ca9  c3                   ret 
// library xtp-11.2.2-vc8/Source\CommandBars\XTPControlGallery.cpp (function ?DrawArrowGlyph@@YAXPAVCDC@@VCRect@@HHH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPControlGallery.cpp
