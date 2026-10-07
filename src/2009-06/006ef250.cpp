// roc 2009-06 006ef250  unit: seg_006e0000  size: 347 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006ef250
//
// 006ef250  83ec38               sub esp, 0x38
// 006ef253  53                   push ebx
// 006ef254  8b5c2440             mov ebx, dword ptr [esp + 0x40]
// 006ef258  55                   push ebp
// 006ef259  8b6c2448             mov ebp, dword ptr [esp + 0x48]
// 006ef25d  8d4508               lea eax, [ebp + 8]
// 006ef260  89442448             mov dword ptr [esp + 0x48], eax
// 006ef264  8b00                 mov eax, dword ptr [eax]
// 006ef266  83f806               cmp eax, 6
// 006ef269  56                   push esi
// 006ef26a  57                   push edi
// 006ef26b  7c05                 jl 0x6ef272
// 006ef26d  83f809               cmp eax, 9
// 006ef270  7e0e                 jle 0x6ef280
// 006ef272  6898df8e00           push 0x8edf98
// 006ef277  53                   push ebx
// 006ef278  e873200000           call 0x6f12f0
// 006ef27d  83c408               add esp, 8
// 006ef280  8b4310               mov eax, dword ptr [ebx + 0x10]
// 006ef283  83f82c               cmp eax, 0x2c
// 006ef286  755d                 jne 0x6ef2e5
// 006ef288  53                   push ebx
// 006ef289  e852340000           call 0x6f26e0
// 006ef28e  83c404               add esp, 4
// 006ef291  8d7c2430             lea edi, [esp + 0x30]
// 006ef295  8bf3                 mov esi, ebx
// 006ef297  896c2428             mov dword ptr [esp + 0x28], ebp
// 006ef29b  e840f7ffff           call 0x6ee9e0
// 006ef2a0  837c243006           cmp dword ptr [esp + 0x30], 6
// 006ef2a5  7509                 jne 0x6ef2b0
// 006ef2a7  8bc5                 mov eax, ebp
// 006ef2a9  8bcb                 mov ecx, ebx
// 006ef2ab  e840ffffff           call 0x6ef1f0
// 006ef2b0  8b4334               mov eax, dword ptr [ebx + 0x34]
// 006ef2b3  0fb74834             movzx ecx, word ptr [eax + 0x34]
// 006ef2b7  8b7c2454             mov edi, dword ptr [esp + 0x54]
// 006ef2bb  bac8000000           mov edx, 0xc8
// 006ef2c0  2bd1                 sub edx, ecx
// 006ef2c2  3bfa                 cmp edi, edx
// 006ef2c4  7e0d                 jle 0x6ef2d3
// 006ef2c6  8b7330               mov esi, dword ptr [ebx + 0x30]
// 006ef2c9  b980df8e00           mov ecx, 0x8edf80
// 006ef2ce  e86de5ffff           call 0x6ed840
// 006ef2d3  47                   inc edi
// 006ef2d4  57                   push edi
// 006ef2d5  8d54242c             lea edx, [esp + 0x2c]
// 006ef2d9  52                   push edx
// 006ef2da  53                   push ebx
// 006ef2db  e870ffffff           call 0x6ef250
// 006ef2e0  83c40c               add esp, 0xc
// 006ef2e3  eb61                 jmp 0x6ef346
// 006ef2e5  83f83d               cmp eax, 0x3d
// 006ef2e8  7421                 je 0x6ef30b
// 006ef2ea  6a3d                 push 0x3d
// 006ef2ec  53                   push ebx
// 006ef2ed  e8fe1e0000           call 0x6f11f0
// 006ef2f2  50                   push eax
// 006ef2f3  8b4334               mov eax, dword ptr [ebx + 0x34]
// 006ef2f6  68b8dd8e00           push 0x8eddb8
// 006ef2fb  50                   push eax
// 006ef2fc  e89f9dfdff           call 0x6c90a0
// 006ef301  50                   push eax
// 006ef302  53                   push ebx
// 006ef303  e8e81f0000           call 0x6f12f0
// 006ef308  83c41c               add esp, 0x1c
// 006ef30b  53                   push ebx
// 006ef30c  e8cf330000           call 0x6f26e0
// 006ef311  83c404               add esp, 4
// 006ef314  8d7c2410             lea edi, [esp + 0x10]
// 006ef318  8bf3                 mov esi, ebx
// 006ef31a  e8d1f4ffff           call 0x6ee7f0
// 006ef31f  8b742454             mov esi, dword ptr [esp + 0x54]
// 006ef323  8bf8                 mov edi, eax
// 006ef325  3bfe                 cmp edi, esi
// 006ef327  7456                 je 0x6ef37f
// 006ef329  57                   push edi
// 006ef32a  8d4c2414             lea ecx, [esp + 0x14]
// 006ef32e  8bd6                 mov edx, esi
// 006ef330  8bc3                 mov eax, ebx
// 006ef332  e8e9e9ffff           call 0x6edd20
// 006ef337  83c404               add esp, 4
// 006ef33a  3bfe                 cmp edi, esi
// 006ef33c  7e08                 jle 0x6ef346
// 006ef33e  8b4330               mov eax, dword ptr [ebx + 0x30]
// 006ef341  2bf7                 sub esi, edi
// 006ef343  017024               add dword ptr [eax + 0x24], esi
// 006ef346  8b5b30               mov ebx, dword ptr [ebx + 0x30]
// 006ef349  8b4324               mov eax, dword ptr [ebx + 0x24]
// 006ef34c  8b542450             mov edx, dword ptr [esp + 0x50]
// 006ef350  83c9ff               or ecx, 0xffffffff
// 006ef353  894c2420             mov dword ptr [esp + 0x20], ecx
// 006ef357  894c2424             mov dword ptr [esp + 0x24], ecx
// 006ef35b  8d4c2410             lea ecx, [esp + 0x10]
// 006ef35f  51                   push ecx
// 006ef360  52                   push edx
// 006ef361  48                   dec eax
// 006ef362  53                   push ebx
// 006ef363  c744241c0c000000     mov dword ptr [esp + 0x1c], 0xc
// 006ef36b  89442424             mov dword ptr [esp + 0x24], eax
// 006ef36f  e85cb60000           call 0x6fa9d0
// 006ef374  83c40c               add esp, 0xc
// 006ef377  5f                   pop edi
// 006ef378  5e                   pop esi
// 006ef379  5d                   pop ebp
// 006ef37a  5b                   pop ebx
// 006ef37b  83c438               add esp, 0x38
// 006ef37e  c3                   ret 
// 006ef37f  8b4b30               mov ecx, dword ptr [ebx + 0x30]
// 006ef382  8d442410             lea eax, [esp + 0x10]
// 006ef386  50                   push eax
// 006ef387  51                   push ecx
// 006ef388  e8e3ab0000           call 0x6f9f70
// 006ef38d  8b442458             mov eax, dword ptr [esp + 0x58]
// 006ef391  8b4b30               mov ecx, dword ptr [ebx + 0x30]
// 006ef394  8d542418             lea edx, [esp + 0x18]
// 006ef398  52                   push edx
// 006ef399  50                   push eax
// 006ef39a  51                   push ecx
// 006ef39b  e830b60000           call 0x6fa9d0
// 006ef3a0  83c414               add esp, 0x14
// 006ef3a3  5f                   pop edi
// 006ef3a4  5e                   pop esi
// 006ef3a5  5d                   pop ebp
// 006ef3a6  5b                   pop ebx
// 006ef3a7  83c438               add esp, 0x38
// 006ef3aa  c3                   ret 
// library lua-5.1.4/lparser.c (function _assignment)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
