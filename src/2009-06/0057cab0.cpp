// roc 2009-06 0057cab0  unit: G3D::_internal::DialogTemplate  size: 248 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0057cab0
//
// 0057cab0  53                   push ebx
// 0057cab1  55                   push ebp
// 0057cab2  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0057cab6  56                   push esi
// 0057cab7  57                   push edi
// 0057cab8  8b3d58e98900         mov edi, dword ptr [0x89e958]
// 0057cabe  6810c18c00           push 0x8cc110
// 0057cac3  8bd8                 mov ebx, eax
// 0057cac5  ffd7                 call edi
// 0057cac7  8b442418             mov eax, dword ptr [esp + 0x18]
// 0057cacb  50                   push eax
// 0057cacc  68d87f8c00           push 0x8c7fd8
// 0057cad1  ffd7                 call edi
// 0057cad3  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0057cad7  51                   push ecx
// 0057cad8  68400b8b00           push 0x8b0b40
// 0057cadd  ffd7                 call edi
// 0057cadf  83c414               add esp, 0x14
// 0057cae2  83fb0a               cmp ebx, 0xa
// 0057cae5  7e05                 jle 0x57caec
// 0057cae7  bb0a000000           mov ebx, 0xa
// 0057caec  83ceff               or esi, 0xffffffff
// 0057caef  83fb01               cmp ebx, 1
// 0057caf2  7e7f                 jle 0x57cb73
// 0057caf4  683c938b00           push 0x8b933c
// 0057caf9  ffd7                 call edi
// 0057cafb  68f4c08c00           push 0x8cc0f4
// 0057cb00  ffd7                 call edi
// 0057cb02  83c408               add esp, 8
// 0057cb05  85f6                 test esi, esi
// 0057cb07  7c08                 jl 0x57cb11
// 0057cb09  3bf3                 cmp esi, ebx
// 0057cb0b  0f8c86000000         jl 0x57cb97
// 0057cb11  683c938b00           push 0x8b933c
// 0057cb16  ffd7                 call edi
// 0057cb18  83c404               add esp, 4
// 0057cb1b  33f6                 xor esi, esi
// 0057cb1d  85db                 test ebx, ebx
// 0057cb1f  7e27                 jle 0x57cb48
// 0057cb21  83fb03               cmp ebx, 3
// 0057cb24  7f0d                 jg 0x57cb33
// 0057cb26  8b54b500             mov edx, dword ptr [ebp + esi*4]
// 0057cb2a  52                   push edx
// 0057cb2b  56                   push esi
// 0057cb2c  68e8c08c00           push 0x8cc0e8
// 0057cb31  eb0b                 jmp 0x57cb3e
// 0057cb33  8b44b500             mov eax, dword ptr [ebp + esi*4]
// 0057cb37  50                   push eax
// 0057cb38  56                   push esi
// 0057cb39  68dcc08c00           push 0x8cc0dc
// 0057cb3e  ffd7                 call edi
// 0057cb40  46                   inc esi
// 0057cb41  83c40c               add esp, 0xc
// 0057cb44  3bf3                 cmp esi, ebx
// 0057cb46  7cd9                 jl 0x57cb21
// 0057cb48  68d8c08c00           push 0x8cc0d8
// 0057cb4d  ffd7                 call edi
// 0057cb4f  83c404               add esp, 4
// 0057cb52  ff1570e88900         call dword ptr [0x89e870]
// 0057cb58  8bf0                 mov esi, eax
// 0057cb5a  83ee30               sub esi, 0x30
// 0057cb5d  780c                 js 0x57cb6b
// 0057cb5f  3bf3                 cmp esi, ebx
// 0057cb61  7d08                 jge 0x57cb6b
// 0057cb63  56                   push esi
// 0057cb64  68683b8b00           push 0x8b3b68
// 0057cb69  eb95                 jmp 0x57cb00
// 0057cb6b  56                   push esi
// 0057cb6c  68bcc08c00           push 0x8cc0bc
// 0057cb71  eb8d                 jmp 0x57cb00
// 0057cb73  7510                 jne 0x57cb85
// 0057cb75  8b4d00               mov ecx, dword ptr [ebp]
// 0057cb78  51                   push ecx
// 0057cb79  68a0c08c00           push 0x8cc0a0
// 0057cb7e  ffd7                 call edi
// 0057cb80  83c408               add esp, 8
// 0057cb83  eb0a                 jmp 0x57cb8f
// 0057cb85  688cc08c00           push 0x8cc08c
// 0057cb8a  ffd7                 call edi
// 0057cb8c  83c404               add esp, 4
// 0057cb8f  ff1570e88900         call dword ptr [0x89e870]
// 0057cb95  33f6                 xor esi, esi
// 0057cb97  6810c18c00           push 0x8cc110
// 0057cb9c  ffd7                 call edi
// 0057cb9e  83c404               add esp, 4
// 0057cba1  5f                   pop edi
// 0057cba2  8bc6                 mov eax, esi
// 0057cba4  5e                   pop esi
// 0057cba5  5d                   pop ebp
// 0057cba6  5b                   pop ebx
// 0057cba7  c3                   ret 
// library g3d-6.09/G3Dcpp\prompt.cpp (function ?textPrompt@G3D@@YAHPBD0PAPBDH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/prompt.cpp
