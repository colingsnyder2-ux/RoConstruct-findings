// roc 2008-06 007948d0  unit: CXTPRibbonGroup  size: 187 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007948d0
//
// 007948d0  83ec10               sub esp, 0x10
// 007948d3  8b8180000000         mov eax, dword ptr [ecx + 0x80]
// 007948d9  8b08                 mov ecx, dword ptr [eax]
// 007948db  55                   push ebp
// 007948dc  56                   push esi
// 007948dd  57                   push edi
// 007948de  8b7804               mov edi, dword ptr [eax + 4]
// 007948e1  33ed                 xor ebp, ebp
// 007948e3  33d2                 xor edx, edx
// 007948e5  33f6                 xor esi, esi
// 007948e7  897c2410             mov dword ptr [esp + 0x10], edi
// 007948eb  896c240c             mov dword ptr [esp + 0xc], ebp
// 007948ef  85ff                 test edi, edi
// 007948f1  0f8e89000000         jle 0x794980
// 007948f7  8b442420             mov eax, dword ptr [esp + 0x20]
// 007948fb  53                   push ebx
// 007948fc  83c130               add ecx, 0x30
// 007948ff  eb04                 jmp 0x794905
// 00794901  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 00794905  833900               cmp dword ptr [ecx], 0
// 00794908  8b79f4               mov edi, dword ptr [ecx - 0xc]
// 0079490b  8b59f0               mov ebx, dword ptr [ecx - 0x10]
// 0079490e  c741fc00000000       mov dword ptr [ecx - 4], 0
// 00794915  897c241c             mov dword ptr [esp + 0x1c], edi
// 00794919  740b                 je 0x794926
// 0079491b  85f6                 test esi, esi
// 0079491d  7e07                 jle 0x794926
// 0079491f  bf01000000           mov edi, 1
// 00794924  eb02                 jmp 0x794928
// 00794926  33ff                 xor edi, edi
// 00794928  83790400             cmp dword ptr [ecx + 4], 0
// 0079492c  7414                 je 0x794942
// 0079492e  85f6                 test esi, esi
// 00794930  7e10                 jle 0x794942
// 00794932  837c242800           cmp dword ptr [esp + 0x28], 0
// 00794937  742a                 je 0x794963
// 00794939  8b6910               mov ebp, dword ptr [ecx + 0x10]
// 0079493c  03ea                 add ebp, edx
// 0079493e  3be8                 cmp ebp, eax
// 00794940  7d2e                 jge 0x794970
// 00794942  85ff                 test edi, edi
// 00794944  7403                 je 0x794949
// 00794946  83c203               add edx, 3
// 00794949  03d3                 add edx, ebx
// 0079494b  46                   inc esi
// 0079494c  83c144               add ecx, 0x44
// 0079494f  3b742414             cmp esi, dword ptr [esp + 0x14]
// 00794953  7cac                 jl 0x794901
// 00794955  8b442410             mov eax, dword ptr [esp + 0x10]
// 00794959  5b                   pop ebx
// 0079495a  5f                   pop edi
// 0079495b  5e                   pop esi
// 0079495c  5d                   pop ebp
// 0079495d  83c410               add esp, 0x10
// 00794960  c20800               ret 8
// 00794963  85ed                 test ebp, ebp
// 00794965  75db                 jne 0x794942
// 00794967  8b6910               mov ebp, dword ptr [ecx + 0x10]
// 0079496a  03ea                 add ebp, edx
// 0079496c  3be8                 cmp ebp, eax
// 0079496e  7cd2                 jl 0x794942
// 00794970  bf01000000           mov edi, 1
// 00794975  017c2410             add dword ptr [esp + 0x10], edi
// 00794979  8bd3                 mov edx, ebx
// 0079497b  8979fc               mov dword ptr [ecx - 4], edi
// 0079497e  ebcb                 jmp 0x79494b
// 00794980  5f                   pop edi
// 00794981  5e                   pop esi
// 00794982  8bc5                 mov eax, ebp
// 00794984  5d                   pop ebp
// 00794985  83c410               add esp, 0x10
// 00794988  c20800               ret 8
// library xtp-11.2.2/Source\Ribbon\XTPRibbonGroups.cpp (function ?_WrapSpecialDynamicSize@CXTPRibbonGroup@@AAEHHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonGroups.cpp
