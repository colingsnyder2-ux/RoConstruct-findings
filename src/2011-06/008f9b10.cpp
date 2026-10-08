// roc 2011-06 008f9b10  unit: CXTPRibbonGroup  size: 187 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008f9b10
//
// 008f9b10  83ec10               sub esp, 0x10
// 008f9b13  8b8180000000         mov eax, dword ptr [ecx + 0x80]
// 008f9b19  8b08                 mov ecx, dword ptr [eax]
// 008f9b1b  55                   push ebp
// 008f9b1c  56                   push esi
// 008f9b1d  57                   push edi
// 008f9b1e  8b7804               mov edi, dword ptr [eax + 4]
// 008f9b21  33ed                 xor ebp, ebp
// 008f9b23  33d2                 xor edx, edx
// 008f9b25  33f6                 xor esi, esi
// 008f9b27  897c2410             mov dword ptr [esp + 0x10], edi
// 008f9b2b  896c240c             mov dword ptr [esp + 0xc], ebp
// 008f9b2f  85ff                 test edi, edi
// 008f9b31  0f8e89000000         jle 0x8f9bc0
// 008f9b37  8b442420             mov eax, dword ptr [esp + 0x20]
// 008f9b3b  53                   push ebx
// 008f9b3c  83c130               add ecx, 0x30
// 008f9b3f  eb04                 jmp 0x8f9b45
// 008f9b41  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 008f9b45  833900               cmp dword ptr [ecx], 0
// 008f9b48  8b79f4               mov edi, dword ptr [ecx - 0xc]
// 008f9b4b  8b59f0               mov ebx, dword ptr [ecx - 0x10]
// 008f9b4e  c741fc00000000       mov dword ptr [ecx - 4], 0
// 008f9b55  897c241c             mov dword ptr [esp + 0x1c], edi
// 008f9b59  740b                 je 0x8f9b66
// 008f9b5b  85f6                 test esi, esi
// 008f9b5d  7e07                 jle 0x8f9b66
// 008f9b5f  bf01000000           mov edi, 1
// 008f9b64  eb02                 jmp 0x8f9b68
// 008f9b66  33ff                 xor edi, edi
// 008f9b68  83790400             cmp dword ptr [ecx + 4], 0
// 008f9b6c  7414                 je 0x8f9b82
// 008f9b6e  85f6                 test esi, esi
// 008f9b70  7e10                 jle 0x8f9b82
// 008f9b72  837c242800           cmp dword ptr [esp + 0x28], 0
// 008f9b77  742a                 je 0x8f9ba3
// 008f9b79  8b6910               mov ebp, dword ptr [ecx + 0x10]
// 008f9b7c  03ea                 add ebp, edx
// 008f9b7e  3be8                 cmp ebp, eax
// 008f9b80  7d2e                 jge 0x8f9bb0
// 008f9b82  85ff                 test edi, edi
// 008f9b84  7403                 je 0x8f9b89
// 008f9b86  83c203               add edx, 3
// 008f9b89  03d3                 add edx, ebx
// 008f9b8b  46                   inc esi
// 008f9b8c  83c144               add ecx, 0x44
// 008f9b8f  3b742414             cmp esi, dword ptr [esp + 0x14]
// 008f9b93  7cac                 jl 0x8f9b41
// 008f9b95  8b442410             mov eax, dword ptr [esp + 0x10]
// 008f9b99  5b                   pop ebx
// 008f9b9a  5f                   pop edi
// 008f9b9b  5e                   pop esi
// 008f9b9c  5d                   pop ebp
// 008f9b9d  83c410               add esp, 0x10
// 008f9ba0  c20800               ret 8
// 008f9ba3  85ed                 test ebp, ebp
// 008f9ba5  75db                 jne 0x8f9b82
// 008f9ba7  8b6910               mov ebp, dword ptr [ecx + 0x10]
// 008f9baa  03ea                 add ebp, edx
// 008f9bac  3be8                 cmp ebp, eax
// 008f9bae  7cd2                 jl 0x8f9b82
// 008f9bb0  bf01000000           mov edi, 1
// 008f9bb5  017c2410             add dword ptr [esp + 0x10], edi
// 008f9bb9  8bd3                 mov edx, ebx
// 008f9bbb  8979fc               mov dword ptr [ecx - 4], edi
// 008f9bbe  ebcb                 jmp 0x8f9b8b
// 008f9bc0  5f                   pop edi
// 008f9bc1  5e                   pop esi
// 008f9bc2  8bc5                 mov eax, ebp
// 008f9bc4  5d                   pop ebp
// 008f9bc5  83c410               add esp, 0x10
// 008f9bc8  c20800               ret 8
// library xtp-11.2.2/Source\Ribbon\XTPRibbonGroups.cpp (function ?_WrapSpecialDynamicSize@CXTPRibbonGroup@@AAEHHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonGroups.cpp
