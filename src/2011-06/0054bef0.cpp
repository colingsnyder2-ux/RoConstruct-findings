// roc 2011-06 0054bef0  unit: G3D::_internal::DialogTemplate  size: 240 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0054bef0
//
// 0054bef0  6aff                 push -1
// 0054bef2  68cc54a100           push 0xa154cc
// 0054bef7  64a100000000         mov eax, dword ptr fs:[0]
// 0054befd  50                   push eax
// 0054befe  64892500000000       mov dword ptr fs:[0], esp
// 0054bf05  83ec3c               sub esp, 0x3c
// 0054bf08  53                   push ebx
// 0054bf09  55                   push ebp
// 0054bf0a  56                   push esi
// 0054bf0b  33ed                 xor ebp, ebp
// 0054bf0d  57                   push edi
// 0054bf0e  8d4c2414             lea ecx, [esp + 0x14]
// 0054bf12  896c2410             mov dword ptr [esp + 0x10], ebp
// 0054bf16  ff15bc04a400         call dword ptr [0xa404bc]
// 0054bf1c  8b742460             mov esi, dword ptr [esp + 0x60]
// 0054bf20  8b4604               mov eax, dword ptr [esi + 4]
// 0054bf23  48                   dec eax
// 0054bf24  bb01000000           mov ebx, 1
// 0054bf29  33ff                 xor edi, edi
// 0054bf2b  895c2454             mov dword ptr [esp + 0x54], ebx
// 0054bf2f  85c0                 test eax, eax
// 0054bf31  7e48                 jle 0x54bf7b
// 0054bf33  8b5c2464             mov ebx, dword ptr [esp + 0x64]
// 0054bf37  8b06                 mov eax, dword ptr [esi]
// 0054bf39  03c5                 add eax, ebp
// 0054bf3b  53                   push ebx
// 0054bf3c  50                   push eax
// 0054bf3d  8d442438             lea eax, [esp + 0x38]
// 0054bf41  50                   push eax
// 0054bf42  ff158405a400         call dword ptr [0xa40584]
// 0054bf48  83c40c               add esp, 0xc
// 0054bf4b  50                   push eax
// 0054bf4c  8d4c2418             lea ecx, [esp + 0x18]
// 0054bf50  c644245802           mov byte ptr [esp + 0x58], 2
// 0054bf55  ff15b804a400         call dword ptr [0xa404b8]
// 0054bf5b  8d4c2430             lea ecx, [esp + 0x30]
// 0054bf5f  c644245401           mov byte ptr [esp + 0x54], 1
// 0054bf64  ff15d004a400         call dword ptr [0xa404d0]
// 0054bf6a  8b4604               mov eax, dword ptr [esi + 4]
// 0054bf6d  47                   inc edi
// 0054bf6e  48                   dec eax
// 0054bf6f  83c51c               add ebp, 0x1c
// 0054bf72  3bf8                 cmp edi, eax
// 0054bf74  7cc1                 jl 0x54bf37
// 0054bf76  bb01000000           mov ebx, 1
// 0054bf7b  8b4604               mov eax, dword ptr [esi + 4]
// 0054bf7e  85c0                 test eax, eax
// 0054bf80  7e25                 jle 0x54bfa7
// 0054bf82  8b16                 mov edx, dword ptr [esi]
// 0054bf84  8b74245c             mov esi, dword ptr [esp + 0x5c]
// 0054bf88  8d0cc500000000       lea ecx, [eax*8]
// 0054bf8f  2bc8                 sub ecx, eax
// 0054bf91  8d448ae4             lea eax, [edx + ecx*4 - 0x1c]
// 0054bf95  50                   push eax
// 0054bf96  8d442418             lea eax, [esp + 0x18]
// 0054bf9a  50                   push eax
// 0054bf9b  56                   push esi
// 0054bf9c  ff155404a400         call dword ptr [0xa40454]
// 0054bfa2  83c40c               add esp, 0xc
// 0054bfa5  eb11                 jmp 0x54bfb8
// 0054bfa7  8b74245c             mov esi, dword ptr [esp + 0x5c]
// 0054bfab  8d4c2414             lea ecx, [esp + 0x14]
// 0054bfaf  51                   push ecx
// 0054bfb0  8bce                 mov ecx, esi
// 0054bfb2  ff15c804a400         call dword ptr [0xa404c8]
// 0054bfb8  8d4c2414             lea ecx, [esp + 0x14]
// 0054bfbc  895c2410             mov dword ptr [esp + 0x10], ebx
// 0054bfc0  c644245400           mov byte ptr [esp + 0x54], 0
// 0054bfc5  ff15d004a400         call dword ptr [0xa404d0]
// 0054bfcb  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0054bfcf  5f                   pop edi
// 0054bfd0  8bc6                 mov eax, esi
// 0054bfd2  5e                   pop esi
// 0054bfd3  5d                   pop ebp
// 0054bfd4  5b                   pop ebx
// 0054bfd5  64890d00000000       mov dword ptr fs:[0], ecx
// 0054bfdc  83c448               add esp, 0x48
// 0054bfdf  c3                   ret 
// library g3d-6.09/G3Dcpp\stringutils.cpp (function ?stringJoin@G3D@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@ABV?$Array@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@1@D@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/stringutils.cpp
