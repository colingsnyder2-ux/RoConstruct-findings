// roc 2011-06 008dfc60  unit: VCEdit::?$CXTMaskEditT  size: 311 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008dfc60
//
// 008dfc60  51                   push ecx
// 008dfc61  53                   push ebx
// 008dfc62  55                   push ebp
// 008dfc63  8be9                 mov ebp, ecx
// 008dfc65  56                   push esi
// 008dfc66  8d9d84000000         lea ebx, [ebp + 0x84]
// 008dfc6c  57                   push edi
// 008dfc6d  8bcb                 mov ecx, ebx
// 008dfc6f  ff15a826a400         call dword ptr [0xa426a8]
// 008dfc75  8b742418             mov esi, dword ptr [esp + 0x18]
// 008dfc79  8b3e                 mov edi, dword ptr [esi]
// 008dfc7b  89442410             mov dword ptr [esp + 0x10], eax
// 008dfc7f  85ff                 test edi, edi
// 008dfc81  7c27                 jl 0x8dfcaa
// 008dfc83  8bcb                 mov ecx, ebx
// 008dfc85  ff15a826a400         call dword ptr [0xa426a8]
// 008dfc8b  3bf8                 cmp edi, eax
// 008dfc8d  7d1b                 jge 0x8dfcaa
// 008dfc8f  57                   push edi
// 008dfc90  8bcb                 mov ecx, ebx
// 008dfc92  ff153c25a400         call dword ptr [0xa4253c]
// 008dfc98  3a456c               cmp al, byte ptr [ebp + 0x6c]
// 008dfc9b  750d                 jne 0x8dfcaa
// 008dfc9d  5f                   pop edi
// 008dfc9e  5e                   pop esi
// 008dfc9f  5d                   pop ebp
// 008dfca0  b801000000           mov eax, 1
// 008dfca5  5b                   pop ebx
// 008dfca6  59                   pop ecx
// 008dfca7  c20800               ret 8
// 008dfcaa  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 008dfcaf  7474                 je 0x8dfd25
// 008dfcb1  8b442410             mov eax, dword ptr [esp + 0x10]
// 008dfcb5  3906                 cmp dword ptr [esi], eax
// 008dfcb7  7d31                 jge 0x8dfcea
// 008dfcb9  8da42400000000       lea esp, [esp]
// 008dfcc0  8b3e                 mov edi, dword ptr [esi]
// 008dfcc2  85ff                 test edi, edi
// 008dfcc4  7c1a                 jl 0x8dfce0
// 008dfcc6  8bcb                 mov ecx, ebx
// 008dfcc8  ff15a826a400         call dword ptr [0xa426a8]
// 008dfcce  3bf8                 cmp edi, eax
// 008dfcd0  7d0e                 jge 0x8dfce0
// 008dfcd2  57                   push edi
// 008dfcd3  8bcb                 mov ecx, ebx
// 008dfcd5  ff153c25a400         call dword ptr [0xa4253c]
// 008dfcdb  3a456c               cmp al, byte ptr [ebp + 0x6c]
// 008dfcde  74bd                 je 0x8dfc9d
// 008dfce0  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008dfce4  ff06                 inc dword ptr [esi]
// 008dfce6  390e                 cmp dword ptr [esi], ecx
// 008dfce8  7cd6                 jl 0x8dfcc0
// 008dfcea  833e00               cmp dword ptr [esi], 0
// 008dfced  0f8c9a000000         jl 0x8dfd8d
// 008dfcf3  8b3e                 mov edi, dword ptr [esi]
// 008dfcf5  83ef01               sub edi, 1
// 008dfcf8  781a                 js 0x8dfd14
// 008dfcfa  8bcb                 mov ecx, ebx
// 008dfcfc  ff15a826a400         call dword ptr [0xa426a8]
// 008dfd02  3bf8                 cmp edi, eax
// 008dfd04  7d0e                 jge 0x8dfd14
// 008dfd06  57                   push edi
// 008dfd07  8bcb                 mov ecx, ebx
// 008dfd09  ff153c25a400         call dword ptr [0xa4253c]
// 008dfd0f  3a456c               cmp al, byte ptr [ebp + 0x6c]
// 008dfd12  7479                 je 0x8dfd8d
// 008dfd14  ff0e                 dec dword ptr [esi]
// 008dfd16  833e00               cmp dword ptr [esi], 0
// 008dfd19  7dd8                 jge 0x8dfcf3
// 008dfd1b  5f                   pop edi
// 008dfd1c  5e                   pop esi
// 008dfd1d  5d                   pop ebp
// 008dfd1e  33c0                 xor eax, eax
// 008dfd20  5b                   pop ebx
// 008dfd21  59                   pop ecx
// 008dfd22  c20800               ret 8
// 008dfd25  833e00               cmp dword ptr [esi], 0
// 008dfd28  7c31                 jl 0x8dfd5b
// 008dfd2a  8d9b00000000         lea ebx, [ebx]
// 008dfd30  8b3e                 mov edi, dword ptr [esi]
// 008dfd32  85ff                 test edi, edi
// 008dfd34  7c1e                 jl 0x8dfd54
// 008dfd36  8bcb                 mov ecx, ebx
// 008dfd38  ff15a826a400         call dword ptr [0xa426a8]
// 008dfd3e  3bf8                 cmp edi, eax
// 008dfd40  7d12                 jge 0x8dfd54
// 008dfd42  57                   push edi
// 008dfd43  8bcb                 mov ecx, ebx
// 008dfd45  ff153c25a400         call dword ptr [0xa4253c]
// 008dfd4b  3a456c               cmp al, byte ptr [ebp + 0x6c]
// 008dfd4e  0f8449ffffff         je 0x8dfc9d
// 008dfd54  ff0e                 dec dword ptr [esi]
// 008dfd56  833e00               cmp dword ptr [esi], 0
// 008dfd59  7dd5                 jge 0x8dfd30
// 008dfd5b  8b542410             mov edx, dword ptr [esp + 0x10]
// 008dfd5f  3916                 cmp dword ptr [esi], edx
// 008dfd61  7d2a                 jge 0x8dfd8d
// 008dfd63  8b3e                 mov edi, dword ptr [esi]
// 008dfd65  85ff                 test edi, edi
// 008dfd67  7c1a                 jl 0x8dfd83
// 008dfd69  8bcb                 mov ecx, ebx
// 008dfd6b  ff15a826a400         call dword ptr [0xa426a8]
// 008dfd71  3bf8                 cmp edi, eax
// 008dfd73  7d0e                 jge 0x8dfd83
// 008dfd75  57                   push edi
// 008dfd76  8bcb                 mov ecx, ebx
// 008dfd78  ff153c25a400         call dword ptr [0xa4253c]
// 008dfd7e  3a456c               cmp al, byte ptr [ebp + 0x6c]
// 008dfd81  740a                 je 0x8dfd8d
// 008dfd83  8b442410             mov eax, dword ptr [esp + 0x10]
// 008dfd87  ff06                 inc dword ptr [esi]
// 008dfd89  3906                 cmp dword ptr [esi], eax
// 008dfd8b  7cd6                 jl 0x8dfd63
// 008dfd8d  5f                   pop edi
// 008dfd8e  5e                   pop esi
// 008dfd8f  5d                   pop ebp
// 008dfd90  33c0                 xor eax, eax
// 008dfd92  5b                   pop ebx
// 008dfd93  59                   pop ecx
// 008dfd94  c20800               ret 8
// copied from an identical function in another client (function ?CorrectPosition@?$CXTMaskEditT@VCEdit@@@@IAEHAAHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTMaskEdit.cpp