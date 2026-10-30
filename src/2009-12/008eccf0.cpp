// roc 2009-12 008eccf0  unit: CXTPRibbonGroup  size: 187 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008eccf0
//
// 008eccf0  83ec10               sub esp, 0x10
// 008eccf3  8b8180000000         mov eax, dword ptr [ecx + 0x80]
// 008eccf9  8b08                 mov ecx, dword ptr [eax]
// 008eccfb  55                   push ebp
// 008eccfc  56                   push esi
// 008eccfd  57                   push edi
// 008eccfe  8b7804               mov edi, dword ptr [eax + 4]
// 008ecd01  33ed                 xor ebp, ebp
// 008ecd03  33d2                 xor edx, edx
// 008ecd05  33f6                 xor esi, esi
// 008ecd07  897c2410             mov dword ptr [esp + 0x10], edi
// 008ecd0b  896c240c             mov dword ptr [esp + 0xc], ebp
// 008ecd0f  85ff                 test edi, edi
// 008ecd11  0f8e89000000         jle 0x8ecda0
// 008ecd17  8b442420             mov eax, dword ptr [esp + 0x20]
// 008ecd1b  53                   push ebx
// 008ecd1c  83c130               add ecx, 0x30
// 008ecd1f  eb04                 jmp 0x8ecd25
// 008ecd21  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 008ecd25  833900               cmp dword ptr [ecx], 0
// 008ecd28  8b79f4               mov edi, dword ptr [ecx - 0xc]
// 008ecd2b  8b59f0               mov ebx, dword ptr [ecx - 0x10]
// 008ecd2e  c741fc00000000       mov dword ptr [ecx - 4], 0
// 008ecd35  897c241c             mov dword ptr [esp + 0x1c], edi
// 008ecd39  740b                 je 0x8ecd46
// 008ecd3b  85f6                 test esi, esi
// 008ecd3d  7e07                 jle 0x8ecd46
// 008ecd3f  bf01000000           mov edi, 1
// 008ecd44  eb02                 jmp 0x8ecd48
// 008ecd46  33ff                 xor edi, edi
// 008ecd48  83790400             cmp dword ptr [ecx + 4], 0
// 008ecd4c  7414                 je 0x8ecd62
// 008ecd4e  85f6                 test esi, esi
// 008ecd50  7e10                 jle 0x8ecd62
// 008ecd52  837c242800           cmp dword ptr [esp + 0x28], 0
// 008ecd57  742a                 je 0x8ecd83
// 008ecd59  8b6910               mov ebp, dword ptr [ecx + 0x10]
// 008ecd5c  03ea                 add ebp, edx
// 008ecd5e  3be8                 cmp ebp, eax
// 008ecd60  7d2e                 jge 0x8ecd90
// 008ecd62  85ff                 test edi, edi
// 008ecd64  7403                 je 0x8ecd69
// 008ecd66  83c203               add edx, 3
// 008ecd69  03d3                 add edx, ebx
// 008ecd6b  46                   inc esi
// 008ecd6c  83c144               add ecx, 0x44
// 008ecd6f  3b742414             cmp esi, dword ptr [esp + 0x14]
// 008ecd73  7cac                 jl 0x8ecd21
// 008ecd75  8b442410             mov eax, dword ptr [esp + 0x10]
// 008ecd79  5b                   pop ebx
// 008ecd7a  5f                   pop edi
// 008ecd7b  5e                   pop esi
// 008ecd7c  5d                   pop ebp
// 008ecd7d  83c410               add esp, 0x10
// 008ecd80  c20800               ret 8
// 008ecd83  85ed                 test ebp, ebp
// 008ecd85  75db                 jne 0x8ecd62
// 008ecd87  8b6910               mov ebp, dword ptr [ecx + 0x10]
// 008ecd8a  03ea                 add ebp, edx
// 008ecd8c  3be8                 cmp ebp, eax
// 008ecd8e  7cd2                 jl 0x8ecd62
// 008ecd90  bf01000000           mov edi, 1
// 008ecd95  017c2410             add dword ptr [esp + 0x10], edi
// 008ecd99  8bd3                 mov edx, ebx
// 008ecd9b  8979fc               mov dword ptr [ecx - 4], edi
// 008ecd9e  ebcb                 jmp 0x8ecd6b
// 008ecda0  5f                   pop edi
// 008ecda1  5e                   pop esi
// 008ecda2  8bc5                 mov eax, ebp
// 008ecda4  5d                   pop ebp
// 008ecda5  83c410               add esp, 0x10
// 008ecda8  c20800               ret 8
// library xtp-11.2.2/Source\Ribbon\XTPRibbonGroups.cpp (function ?_WrapSpecialDynamicSize@CXTPRibbonGroup@@AAEHHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonGroups.cpp
