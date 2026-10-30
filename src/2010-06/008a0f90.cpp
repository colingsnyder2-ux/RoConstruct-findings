// roc 2010-06 008a0f90  unit: CXTPRibbonGroup  size: 187 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008a0f90
//
// 008a0f90  83ec10               sub esp, 0x10
// 008a0f93  8b8180000000         mov eax, dword ptr [ecx + 0x80]
// 008a0f99  8b08                 mov ecx, dword ptr [eax]
// 008a0f9b  55                   push ebp
// 008a0f9c  56                   push esi
// 008a0f9d  57                   push edi
// 008a0f9e  8b7804               mov edi, dword ptr [eax + 4]
// 008a0fa1  33ed                 xor ebp, ebp
// 008a0fa3  33d2                 xor edx, edx
// 008a0fa5  33f6                 xor esi, esi
// 008a0fa7  897c2410             mov dword ptr [esp + 0x10], edi
// 008a0fab  896c240c             mov dword ptr [esp + 0xc], ebp
// 008a0faf  85ff                 test edi, edi
// 008a0fb1  0f8e89000000         jle 0x8a1040
// 008a0fb7  8b442420             mov eax, dword ptr [esp + 0x20]
// 008a0fbb  53                   push ebx
// 008a0fbc  83c130               add ecx, 0x30
// 008a0fbf  eb04                 jmp 0x8a0fc5
// 008a0fc1  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 008a0fc5  833900               cmp dword ptr [ecx], 0
// 008a0fc8  8b79f4               mov edi, dword ptr [ecx - 0xc]
// 008a0fcb  8b59f0               mov ebx, dword ptr [ecx - 0x10]
// 008a0fce  c741fc00000000       mov dword ptr [ecx - 4], 0
// 008a0fd5  897c241c             mov dword ptr [esp + 0x1c], edi
// 008a0fd9  740b                 je 0x8a0fe6
// 008a0fdb  85f6                 test esi, esi
// 008a0fdd  7e07                 jle 0x8a0fe6
// 008a0fdf  bf01000000           mov edi, 1
// 008a0fe4  eb02                 jmp 0x8a0fe8
// 008a0fe6  33ff                 xor edi, edi
// 008a0fe8  83790400             cmp dword ptr [ecx + 4], 0
// 008a0fec  7414                 je 0x8a1002
// 008a0fee  85f6                 test esi, esi
// 008a0ff0  7e10                 jle 0x8a1002
// 008a0ff2  837c242800           cmp dword ptr [esp + 0x28], 0
// 008a0ff7  742a                 je 0x8a1023
// 008a0ff9  8b6910               mov ebp, dword ptr [ecx + 0x10]
// 008a0ffc  03ea                 add ebp, edx
// 008a0ffe  3be8                 cmp ebp, eax
// 008a1000  7d2e                 jge 0x8a1030
// 008a1002  85ff                 test edi, edi
// 008a1004  7403                 je 0x8a1009
// 008a1006  83c203               add edx, 3
// 008a1009  03d3                 add edx, ebx
// 008a100b  46                   inc esi
// 008a100c  83c144               add ecx, 0x44
// 008a100f  3b742414             cmp esi, dword ptr [esp + 0x14]
// 008a1013  7cac                 jl 0x8a0fc1
// 008a1015  8b442410             mov eax, dword ptr [esp + 0x10]
// 008a1019  5b                   pop ebx
// 008a101a  5f                   pop edi
// 008a101b  5e                   pop esi
// 008a101c  5d                   pop ebp
// 008a101d  83c410               add esp, 0x10
// 008a1020  c20800               ret 8
// 008a1023  85ed                 test ebp, ebp
// 008a1025  75db                 jne 0x8a1002
// 008a1027  8b6910               mov ebp, dword ptr [ecx + 0x10]
// 008a102a  03ea                 add ebp, edx
// 008a102c  3be8                 cmp ebp, eax
// 008a102e  7cd2                 jl 0x8a1002
// 008a1030  bf01000000           mov edi, 1
// 008a1035  017c2410             add dword ptr [esp + 0x10], edi
// 008a1039  8bd3                 mov edx, ebx
// 008a103b  8979fc               mov dword ptr [ecx - 4], edi
// 008a103e  ebcb                 jmp 0x8a100b
// 008a1040  5f                   pop edi
// 008a1041  5e                   pop esi
// 008a1042  8bc5                 mov eax, ebp
// 008a1044  5d                   pop ebp
// 008a1045  83c410               add esp, 0x10
// 008a1048  c20800               ret 8
// library xtp-11.2.2/Source\Ribbon\XTPRibbonGroups.cpp (function ?_WrapSpecialDynamicSize@CXTPRibbonGroup@@AAEHHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonGroups.cpp
