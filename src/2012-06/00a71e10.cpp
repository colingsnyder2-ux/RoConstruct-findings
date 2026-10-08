// roc 2012-06 00a71e10  unit: CXTPRibbonGroup  size: 187 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a71e10
//
// 00a71e10  83ec10               sub esp, 0x10
// 00a71e13  8b8180000000         mov eax, dword ptr [ecx + 0x80]
// 00a71e19  8b08                 mov ecx, dword ptr [eax]
// 00a71e1b  55                   push ebp
// 00a71e1c  56                   push esi
// 00a71e1d  57                   push edi
// 00a71e1e  8b7804               mov edi, dword ptr [eax + 4]
// 00a71e21  33ed                 xor ebp, ebp
// 00a71e23  33d2                 xor edx, edx
// 00a71e25  33f6                 xor esi, esi
// 00a71e27  897c2410             mov dword ptr [esp + 0x10], edi
// 00a71e2b  896c240c             mov dword ptr [esp + 0xc], ebp
// 00a71e2f  85ff                 test edi, edi
// 00a71e31  0f8e89000000         jle 0xa71ec0
// 00a71e37  8b442420             mov eax, dword ptr [esp + 0x20]
// 00a71e3b  53                   push ebx
// 00a71e3c  83c130               add ecx, 0x30
// 00a71e3f  eb04                 jmp 0xa71e45
// 00a71e41  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 00a71e45  833900               cmp dword ptr [ecx], 0
// 00a71e48  8b79f4               mov edi, dword ptr [ecx - 0xc]
// 00a71e4b  8b59f0               mov ebx, dword ptr [ecx - 0x10]
// 00a71e4e  c741fc00000000       mov dword ptr [ecx - 4], 0
// 00a71e55  897c241c             mov dword ptr [esp + 0x1c], edi
// 00a71e59  740b                 je 0xa71e66
// 00a71e5b  85f6                 test esi, esi
// 00a71e5d  7e07                 jle 0xa71e66
// 00a71e5f  bf01000000           mov edi, 1
// 00a71e64  eb02                 jmp 0xa71e68
// 00a71e66  33ff                 xor edi, edi
// 00a71e68  83790400             cmp dword ptr [ecx + 4], 0
// 00a71e6c  7414                 je 0xa71e82
// 00a71e6e  85f6                 test esi, esi
// 00a71e70  7e10                 jle 0xa71e82
// 00a71e72  837c242800           cmp dword ptr [esp + 0x28], 0
// 00a71e77  742a                 je 0xa71ea3
// 00a71e79  8b6910               mov ebp, dword ptr [ecx + 0x10]
// 00a71e7c  03ea                 add ebp, edx
// 00a71e7e  3be8                 cmp ebp, eax
// 00a71e80  7d2e                 jge 0xa71eb0
// 00a71e82  85ff                 test edi, edi
// 00a71e84  7403                 je 0xa71e89
// 00a71e86  83c203               add edx, 3
// 00a71e89  03d3                 add edx, ebx
// 00a71e8b  46                   inc esi
// 00a71e8c  83c144               add ecx, 0x44
// 00a71e8f  3b742414             cmp esi, dword ptr [esp + 0x14]
// 00a71e93  7cac                 jl 0xa71e41
// 00a71e95  8b442410             mov eax, dword ptr [esp + 0x10]
// 00a71e99  5b                   pop ebx
// 00a71e9a  5f                   pop edi
// 00a71e9b  5e                   pop esi
// 00a71e9c  5d                   pop ebp
// 00a71e9d  83c410               add esp, 0x10
// 00a71ea0  c20800               ret 8
// 00a71ea3  85ed                 test ebp, ebp
// 00a71ea5  75db                 jne 0xa71e82
// 00a71ea7  8b6910               mov ebp, dword ptr [ecx + 0x10]
// 00a71eaa  03ea                 add ebp, edx
// 00a71eac  3be8                 cmp ebp, eax
// 00a71eae  7cd2                 jl 0xa71e82
// 00a71eb0  bf01000000           mov edi, 1
// 00a71eb5  017c2410             add dword ptr [esp + 0x10], edi
// 00a71eb9  8bd3                 mov edx, ebx
// 00a71ebb  8979fc               mov dword ptr [ecx - 4], edi
// 00a71ebe  ebcb                 jmp 0xa71e8b
// 00a71ec0  5f                   pop edi
// 00a71ec1  5e                   pop esi
// 00a71ec2  8bc5                 mov eax, ebp
// 00a71ec4  5d                   pop ebp
// 00a71ec5  83c410               add esp, 0x10
// 00a71ec8  c20800               ret 8
// library xtp-11.2.2/Source\Ribbon\XTPRibbonGroups.cpp (function ?_WrapSpecialDynamicSize@CXTPRibbonGroup@@AAEHHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonGroups.cpp
