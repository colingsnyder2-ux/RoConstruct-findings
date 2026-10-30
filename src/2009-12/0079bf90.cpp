// roc 2009-12 0079bf90  unit: seg_00790000  size: 309 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0079bf90
//
// 0079bf90  81ec10020000         sub esp, 0x210
// 0079bf96  53                   push ebx
// 0079bf97  55                   push ebp
// 0079bf98  56                   push esi
// 0079bf99  8bb42420020000       mov esi, dword ptr [esp + 0x220]
// 0079bfa0  57                   push edi
// 0079bfa1  8d442410             lea eax, [esp + 0x10]
// 0079bfa5  50                   push eax
// 0079bfa6  6856fd9900           push 0x99fd56
// 0079bfab  6a02                 push 2
// 0079bfad  56                   push esi
// 0079bfae  e81de8feff           call 0x78a7d0
// 0079bfb3  6a05                 push 5
// 0079bfb5  6a01                 push 1
// 0079bfb7  56                   push esi
// 0079bfb8  8be8                 mov ebp, eax
// 0079bfba  e831e7feff           call 0x78a6f0
// 0079bfbf  6a01                 push 1
// 0079bfc1  6a03                 push 3
// 0079bfc3  56                   push esi
// 0079bfc4  e857e9feff           call 0x78a920
// 0079bfc9  6a04                 push 4
// 0079bfcb  56                   push esi
// 0079bfcc  8bf8                 mov edi, eax
// 0079bfce  e8bdc9feff           call 0x788990
// 0079bfd3  83c430               add esp, 0x30
// 0079bfd6  85c0                 test eax, eax
// 0079bfd8  7f0a                 jg 0x79bfe4
// 0079bfda  6a01                 push 1
// 0079bfdc  56                   push esi
// 0079bfdd  e82eccfeff           call 0x788c10
// 0079bfe2  eb08                 jmp 0x79bfec
// 0079bfe4  6a04                 push 4
// 0079bfe6  56                   push esi
// 0079bfe7  e8c4e8feff           call 0x78a8b0
// 0079bfec  83c408               add esp, 8
// 0079bfef  8d4c2414             lea ecx, [esp + 0x14]
// 0079bff3  51                   push ecx
// 0079bff4  56                   push esi
// 0079bff5  8bd8                 mov ebx, eax
// 0079bff7  e834e1feff           call 0x78a130
// 0079bffc  83c408               add esp, 8
// 0079bfff  3bfb                 cmp edi, ebx
// 0079c001  7d5c                 jge 0x79c05f
// 0079c003  57                   push edi
// 0079c004  6a01                 push 1
// 0079c006  56                   push esi
// 0079c007  e884d0feff           call 0x789090
// 0079c00c  6aff                 push -1
// 0079c00e  56                   push esi
// 0079c00f  e82ccafeff           call 0x788a40
// 0079c014  83c414               add esp, 0x14
// 0079c017  85c0                 test eax, eax
// 0079c019  7522                 jne 0x79c03d
// 0079c01b  57                   push edi
// 0079c01c  6aff                 push -1
// 0079c01e  56                   push esi
// 0079c01f  e86cc9feff           call 0x788990
// 0079c024  50                   push eax
// 0079c025  56                   push esi
// 0079c026  e885c9feff           call 0x7889b0
// 0079c02b  83c410               add esp, 0x10
// 0079c02e  50                   push eax
// 0079c02f  6844ad9e00           push 0x9ead44
// 0079c034  56                   push esi
// 0079c035  e8b6dcfeff           call 0x789cf0
// 0079c03a  83c410               add esp, 0x10
// 0079c03d  8d542414             lea edx, [esp + 0x14]
// 0079c041  52                   push edx
// 0079c042  e869e0feff           call 0x78a0b0
// 0079c047  8b442414             mov eax, dword ptr [esp + 0x14]
// 0079c04b  50                   push eax
// 0079c04c  8d4c241c             lea ecx, [esp + 0x1c]
// 0079c050  55                   push ebp
// 0079c051  51                   push ecx
// 0079c052  e8b9dffeff           call 0x78a010
// 0079c057  47                   inc edi
// 0079c058  83c410               add esp, 0x10
// 0079c05b  3bfb                 cmp edi, ebx
// 0079c05d  7ca4                 jl 0x79c003
// 0079c05f  7547                 jne 0x79c0a8
// 0079c061  57                   push edi
// 0079c062  6a01                 push 1
// 0079c064  56                   push esi
// 0079c065  e826d0feff           call 0x789090
// 0079c06a  6aff                 push -1
// 0079c06c  56                   push esi
// 0079c06d  e8cec9feff           call 0x788a40
// 0079c072  83c414               add esp, 0x14
// 0079c075  85c0                 test eax, eax
// 0079c077  7522                 jne 0x79c09b
// 0079c079  57                   push edi
// 0079c07a  6aff                 push -1
// 0079c07c  56                   push esi
// 0079c07d  e80ec9feff           call 0x788990
// 0079c082  50                   push eax
// 0079c083  56                   push esi
// 0079c084  e827c9feff           call 0x7889b0
// 0079c089  83c410               add esp, 0x10
// 0079c08c  50                   push eax
// 0079c08d  6844ad9e00           push 0x9ead44
// 0079c092  56                   push esi
// 0079c093  e858dcfeff           call 0x789cf0
// 0079c098  83c410               add esp, 0x10
// 0079c09b  8d542414             lea edx, [esp + 0x14]
// 0079c09f  52                   push edx
// 0079c0a0  e80be0feff           call 0x78a0b0
// 0079c0a5  83c404               add esp, 4
// 0079c0a8  8d442414             lea eax, [esp + 0x14]
// 0079c0ac  50                   push eax
// 0079c0ad  e8bedffeff           call 0x78a070
// 0079c0b2  83c404               add esp, 4
// 0079c0b5  5f                   pop edi
// 0079c0b6  5e                   pop esi
// 0079c0b7  5d                   pop ebp
// 0079c0b8  b801000000           mov eax, 1
// 0079c0bd  5b                   pop ebx
// 0079c0be  81c410020000         add esp, 0x210
// 0079c0c4  c3                   ret 
// library lua-5.1.4/ltablib.c (function _tconcat)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ltablib.c
