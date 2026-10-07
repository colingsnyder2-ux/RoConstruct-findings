// roc 2009-06 0057bb80  unit: G3D::TextInput::WrongSymbol  size: 538 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0057bb80
//
// 0057bb80  6aff                 push -1
// 0057bb82  68ed0a8600           push 0x860aed
// 0057bb87  64a100000000         mov eax, dword ptr fs:[0]
// 0057bb8d  50                   push eax
// 0057bb8e  64892500000000       mov dword ptr fs:[0], esp
// 0057bb95  83ec74               sub esp, 0x74
// 0057bb98  53                   push ebx
// 0057bb99  55                   push ebp
// 0057bb9a  56                   push esi
// 0057bb9b  57                   push edi
// 0057bb9c  8bf1                 mov esi, ecx
// 0057bb9e  6a04                 push 4
// 0057bba0  89742414             mov dword ptr [esp + 0x14], esi
// 0057bba4  e88fce1900           call 0x718a38
// 0057bba9  33ed                 xor ebp, ebp
// 0057bbab  83c404               add esp, 4
// 0057bbae  3bc5                 cmp eax, ebp
// 0057bbb0  7404                 je 0x57bbb6
// 0057bbb2  8930                 mov dword ptr [eax], esi
// 0057bbb4  eb02                 jmp 0x57bbb8
// 0057bbb6  33c0                 xor eax, eax
// 0057bbb8  8906                 mov dword ptr [esi], eax
// 0057bbba  896e10               mov dword ptr [esi + 0x10], ebp
// 0057bbbd  896e14               mov dword ptr [esi + 0x14], ebp
// 0057bbc0  896e18               mov dword ptr [esi + 0x18], ebp
// 0057bbc3  896e1c               mov dword ptr [esi + 0x1c], ebp
// 0057bbc6  8d5e20               lea ebx, [esi + 0x20]
// 0057bbc9  89ac248c000000       mov dword ptr [esp + 0x8c], ebp
// 0057bbd0  896b04               mov dword ptr [ebx + 4], ebp
// 0057bbd3  896b08               mov dword ptr [ebx + 8], ebp
// 0057bbd6  892b                 mov dword ptr [ebx], ebp
// 0057bbd8  8b84249c000000       mov eax, dword ptr [esp + 0x9c]
// 0057bbdf  50                   push eax
// 0057bbe0  8d4e38               lea ecx, [esi + 0x38]
// 0057bbe3  c684249000000001     mov byte ptr [esp + 0x90], 1
// 0057bbeb  e8d0e9ffff           call 0x57a5c0
// 0057bbf0  8b4e5c               mov ecx, dword ptr [esi + 0x5c]
// 0057bbf3  8bbc2498000000       mov edi, dword ptr [esp + 0x98]
// 0057bbfa  41                   inc ecx
// 0057bbfb  c684248c00000002     mov byte ptr [esp + 0x8c], 2
// 0057bc03  896e2c               mov dword ptr [esi + 0x2c], ebp
// 0057bc06  c7463401000000       mov dword ptr [esi + 0x34], 1
// 0057bc0d  894e30               mov dword ptr [esi + 0x30], ecx
// 0057bc10  396e54               cmp dword ptr [esi + 0x54], ebp
// 0057bc13  0f8539010000         jne 0x57bd52
// 0057bc19  837f140e             cmp dword ptr [edi + 0x14], 0xe
// 0057bc1d  737f                 jae 0x57bc9e
// 0057bc1f  68f0d98b00           push 0x8bd9f0
// 0057bc24  8d4c2450             lea ecx, [esp + 0x50]
// 0057bc28  ff15b4e48900         call dword ptr [0x89e4b4]
// 0057bc2e  57                   push edi
// 0057bc2f  50                   push eax
// 0057bc30  8d542438             lea edx, [esp + 0x38]
// 0057bc34  52                   push edx
// 0057bc35  c684249800000003     mov byte ptr [esp + 0x98], 3
// 0057bc3d  ff150ce58900         call dword ptr [0x89e50c]
// 0057bc43  68f0d98b00           push 0x8bd9f0
// 0057bc48  50                   push eax
// 0057bc49  8d442428             lea eax, [esp + 0x28]
// 0057bc4d  50                   push eax
// 0057bc4e  c68424a400000004     mov byte ptr [esp + 0xa4], 4
// 0057bc56  ff1548e48900         call dword ptr [0x89e448]
// 0057bc5c  83c418               add esp, 0x18
// 0057bc5f  50                   push eax
// 0057bc60  8d4e40               lea ecx, [esi + 0x40]
// 0057bc63  c684249000000005     mov byte ptr [esp + 0x90], 5
// 0057bc6b  ff1564e48900         call dword ptr [0x89e464]
// 0057bc71  8d4c2414             lea ecx, [esp + 0x14]
// 0057bc75  c684248c00000004     mov byte ptr [esp + 0x8c], 4
// 0057bc7d  ff15c4e48900         call dword ptr [0x89e4c4]
// 0057bc83  8d4c2430             lea ecx, [esp + 0x30]
// 0057bc87  c684248c00000003     mov byte ptr [esp + 0x8c], 3
// 0057bc8f  ff15c4e48900         call dword ptr [0x89e4c4]
// 0057bc95  8d4c244c             lea ecx, [esp + 0x4c]
// 0057bc99  e9a6000000           jmp 0x57bd44
// 0057bc9e  6a0a                 push 0xa
// 0057bca0  55                   push ebp
// 0057bca1  8d4c2470             lea ecx, [esp + 0x70]
// 0057bca5  51                   push ecx
// 0057bca6  8bcf                 mov ecx, edi
// 0057bca8  ff1570e48900         call dword ptr [0x89e470]
// 0057bcae  8be8                 mov ebp, eax
// 0057bcb0  68f0d98b00           push 0x8bd9f0
// 0057bcb5  8d4c2418             lea ecx, [esp + 0x18]
// 0057bcb9  c684249000000006     mov byte ptr [esp + 0x90], 6
// 0057bcc1  ff15b4e48900         call dword ptr [0x89e4b4]
// 0057bcc7  55                   push ebp
// 0057bcc8  50                   push eax
// 0057bcc9  8d542438             lea edx, [esp + 0x38]
// 0057bccd  52                   push edx
// 0057bcce  c684249800000007     mov byte ptr [esp + 0x98], 7
// 0057bcd6  ff150ce58900         call dword ptr [0x89e50c]
// 0057bcdc  6828c08c00           push 0x8cc028
// 0057bce1  50                   push eax
// 0057bce2  8d442460             lea eax, [esp + 0x60]
// 0057bce6  50                   push eax
// 0057bce7  c68424a400000008     mov byte ptr [esp + 0xa4], 8
// 0057bcef  ff1548e48900         call dword ptr [0x89e448]
// 0057bcf5  83c418               add esp, 0x18
// 0057bcf8  50                   push eax
// 0057bcf9  8d4e40               lea ecx, [esi + 0x40]
// 0057bcfc  c684249000000009     mov byte ptr [esp + 0x90], 9
// 0057bd04  ff1564e48900         call dword ptr [0x89e464]
// 0057bd0a  8d4c244c             lea ecx, [esp + 0x4c]
// 0057bd0e  c684248c00000008     mov byte ptr [esp + 0x8c], 8
// 0057bd16  ff15c4e48900         call dword ptr [0x89e4c4]
// 0057bd1c  8d4c2430             lea ecx, [esp + 0x30]
// 0057bd20  c684248c00000007     mov byte ptr [esp + 0x8c], 7
// 0057bd28  ff15c4e48900         call dword ptr [0x89e4c4]
// 0057bd2e  8d4c2414             lea ecx, [esp + 0x14]
// 0057bd32  c684248c00000006     mov byte ptr [esp + 0x8c], 6
// 0057bd3a  ff15c4e48900         call dword ptr [0x89e4c4]
// 0057bd40  8d4c2468             lea ecx, [esp + 0x68]
// 0057bd44  c684248c00000002     mov byte ptr [esp + 0x8c], 2
// 0057bd4c  ff15c4e48900         call dword ptr [0x89e4c4]
// 0057bd52  8b4f14               mov ecx, dword ptr [edi + 0x14]
// 0057bd55  6a01                 push 1
// 0057bd57  51                   push ecx
// 0057bd58  8bcb                 mov ecx, ebx
// 0057bd5a  e8d1dbffff           call 0x579930
// 0057bd5f  837f1810             cmp dword ptr [edi + 0x18], 0x10
// 0057bd63  8b4624               mov eax, dword ptr [esi + 0x24]
// 0057bd66  7205                 jb 0x57bd6d
// 0057bd68  8b7f04               mov edi, dword ptr [edi + 4]
// 0057bd6b  eb03                 jmp 0x57bd70
// 0057bd6d  83c704               add edi, 4
// 0057bd70  8b13                 mov edx, dword ptr [ebx]
// 0057bd72  50                   push eax
// 0057bd73  57                   push edi
// 0057bd74  52                   push edx
// 0057bd75  e8c600ffff           call 0x56be40
// 0057bd7a  8b8c2490000000       mov ecx, dword ptr [esp + 0x90]
// 0057bd81  83c40c               add esp, 0xc
// 0057bd84  5f                   pop edi
// 0057bd85  8bc6                 mov eax, esi
// 0057bd87  5e                   pop esi
// 0057bd88  5d                   pop ebp
// 0057bd89  5b                   pop ebx
// 0057bd8a  64890d00000000       mov dword ptr fs:[0], ecx
// 0057bd91  81c480000000         add esp, 0x80
// 0057bd97  c20c00               ret 0xc
// library g3d-6.09/G3Dcpp\TextInput.cpp (function ??0TextInput@G3D@@QAE@W4FS@01@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@ABVSettings@01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextInput.cpp
