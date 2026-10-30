// roc 2007-03 0054d780  unit: seg_00540000  size: 372 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0054d780
//
// 0054d780  83ec10               sub esp, 0x10
// 0054d783  53                   push ebx
// 0054d784  55                   push ebp
// 0054d785  56                   push esi
// 0054d786  57                   push edi
// 0054d787  8bf9                 mov edi, ecx
// 0054d789  8b07                 mov eax, dword ptr [edi]
// 0054d78b  ba01000000           mov edx, 1
// 0054d790  845024               test byte ptr [eax + 0x24], dl
// 0054d793  7511                 jne 0x54d7a6
// 0054d795  095024               or dword ptr [eax + 0x24], edx
// 0054d798  8b07                 mov eax, dword ptr [edi]
// 0054d79a  8b4814               mov ecx, dword ptr [eax + 0x14]
// 0054d79d  83c014               add eax, 0x14
// 0054d7a0  894808               mov dword ptr [eax + 8], ecx
// 0054d7a3  89480c               mov dword ptr [eax + 0xc], ecx
// 0054d7a6  8b07                 mov eax, dword ptr [edi]
// 0054d7a8  8b7024               mov esi, dword ptr [eax + 0x24]
// 0054d7ab  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 0054d7af  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0054d7b3  c1ee02               shr esi, 2
// 0054d7b6  f7d6                 not esi
// 0054d7b8  23f2                 and esi, edx
// 0054d7ba  896c2410             mov dword ptr [esp + 0x10], ebp
// 0054d7be  03e9                 add ebp, ecx
// 0054d7c0  8d5820               lea ebx, [eax + 0x20]
// 0054d7c3  83ce04               or esi, 4
// 0054d7c6  83c01c               add eax, 0x1c
// 0054d7c9  896c241c             mov dword ptr [esp + 0x1c], ebp
// 0054d7cd  895c2418             mov dword ptr [esp + 0x18], ebx
// 0054d7d1  89442414             mov dword ptr [esp + 0x14], eax
// 0054d7d5  8b542414             mov edx, dword ptr [esp + 0x14]
// 0054d7d9  8b02                 mov eax, dword ptr [edx]
// 0054d7db  8b0b                 mov ecx, dword ptr [ebx]
// 0054d7dd  3bc1                 cmp eax, ecx
// 0054d7df  7505                 jne 0x54d7e6
// 0054d7e1  83fe04               cmp esi, 4
// 0054d7e4  7568                 jne 0x54d84e
// 0054d7e6  8b1f                 mov ebx, dword ptr [edi]
// 0054d7e8  55                   push ebp
// 0054d7e9  89442430             mov dword ptr [esp + 0x30], eax
// 0054d7ed  8d442414             lea eax, [esp + 0x14]
// 0054d7f1  50                   push eax
// 0054d7f2  51                   push ecx
// 0054d7f3  8d4c2438             lea ecx, [esp + 0x38]
// 0054d7f7  51                   push ecx
// 0054d7f8  8bcb                 mov ecx, ebx
// 0054d7fa  e8819f0700           call 0x5c7780
// 0054d7ff  8b1544a67b00         mov edx, dword ptr [0x7ba644]
// 0054d805  52                   push edx
// 0054d806  8bcb                 mov ecx, ebx
// 0054d808  e813a00700           call 0x5c7820
// 0054d80d  8be8                 mov ebp, eax
// 0054d80f  6a00                 push 0
// 0054d811  8d442414             lea eax, [esp + 0x14]
// 0054d815  50                   push eax
// 0054d816  8d4c2434             lea ecx, [esp + 0x34]
// 0054d81a  51                   push ecx
// 0054d81b  8bcb                 mov ecx, ebx
// 0054d81d  e88e9f0700           call 0x5c77b0
// 0054d822  55                   push ebp
// 0054d823  e8a89e0700           call 0x5c76d0
// 0054d828  8b542430             mov edx, dword ptr [esp + 0x30]
// 0054d82c  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0054d830  83c404               add esp, 4
// 0054d833  3b2d24a67b00         cmp ebp, dword ptr [0x7ba624]
// 0054d839  8911                 mov dword ptr [ecx], edx
// 0054d83b  0f94c0               sete al
// 0054d83e  84c0                 test al, al
// 0054d840  0f8585000000         jne 0x54d8cb
// 0054d846  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0054d84a  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 0054d84e  83fe06               cmp esi, 6
// 0054d851  750e                 jne 0x54d861
// 0054d853  8b542414             mov edx, dword ptr [esp + 0x14]
// 0054d857  8b02                 mov eax, dword ptr [edx]
// 0054d859  3b03                 cmp eax, dword ptr [ebx]
// 0054d85b  0f8481000000         je 0x54d8e2
// 0054d861  396c2410             cmp dword ptr [esp + 0x10], ebp
// 0054d865  747b                 je 0x54d8e2
// 0054d867  83fe05               cmp esi, 5
// 0054d86a  0f8565ffffff         jne 0x54d7d5
// 0054d870  8b07                 mov eax, dword ptr [edi]
// 0054d872  8b4818               mov ecx, dword ptr [eax + 0x18]
// 0054d875  8b4014               mov eax, dword ptr [eax + 0x14]
// 0054d878  8b742424             mov esi, dword ptr [esp + 0x24]
// 0054d87c  51                   push ecx
// 0054d87d  50                   push eax
// 0054d87e  8bce                 mov ecx, esi
// 0054d880  ff155ce77700         call dword ptr [0x77e75c]
// 0054d886  85c0                 test eax, eax
// 0054d888  7404                 je 0x54d88e
// 0054d88a  8bd0                 mov edx, eax
// 0054d88c  eb07                 jmp 0x54d895
// 0054d88e  8a563c               mov dl, byte ptr [esi + 0x3c]
// 0054d891  f6da                 neg dl
// 0054d893  1bd2                 sbb edx, edx
// 0054d895  83faff               cmp edx, -1
// 0054d898  8b07                 mov eax, dword ptr [edi]
// 0054d89a  750d                 jne 0x54d8a9
// 0054d89c  be04000000           mov esi, 4
// 0054d8a1  097024               or dword ptr [eax + 0x24], esi
// 0054d8a4  e92cffffff           jmp 0x54d7d5
// 0054d8a9  8b4814               mov ecx, dword ptr [eax + 0x14]
// 0054d8ac  83c014               add eax, 0x14
// 0054d8af  894808               mov dword ptr [eax + 8], ecx
// 0054d8b2  03ca                 add ecx, edx
// 0054d8b4  89480c               mov dword ptr [eax + 0xc], ecx
// 0054d8b7  8b0f                 mov ecx, dword ptr [edi]
// 0054d8b9  33c0                 xor eax, eax
// 0054d8bb  3b5118               cmp edx, dword ptr [ecx + 0x18]
// 0054d8be  0f95c0               setne al
// 0054d8c1  83c005               add eax, 5
// 0054d8c4  8bf0                 mov esi, eax
// 0054d8c6  e90affffff           jmp 0x54d7d5
// 0054d8cb  8b442410             mov eax, dword ptr [esp + 0x10]
// 0054d8cf  2b442428             sub eax, dword ptr [esp + 0x28]
// 0054d8d3  7515                 jne 0x54d8ea
// 0054d8d5  5f                   pop edi
// 0054d8d6  5e                   pop esi
// 0054d8d7  5d                   pop ebp
// 0054d8d8  83c8ff               or eax, 0xffffffff
// 0054d8db  5b                   pop ebx
// 0054d8dc  83c410               add esp, 0x10
// 0054d8df  c20c00               ret 0xc
// 0054d8e2  8b442410             mov eax, dword ptr [esp + 0x10]
// 0054d8e6  2b442428             sub eax, dword ptr [esp + 0x28]
// 0054d8ea  5f                   pop edi
// 0054d8eb  5e                   pop esi
// 0054d8ec  5d                   pop ebp
// 0054d8ed  5b                   pop ebx
// 0054d8ee  83c410               add esp, 0x10
// 0054d8f1  c20c00               ret 0xc
// copied from an identical function in another client (function ??$read@V?$linked_streambuf@DU?$char_traits@D@std@@@detail@iostreams@boost@@@?$symmetric_filter@V?$zlib_decompressor_impl@V?$allocator@D@std@@@detail@iostreams@boost@@V?$allocator@D@std@@@iostreams@boost@@QAEHAAV?$linked_streambuf@DU?$char_traits@D@std@@@detail@12@PADH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1-dll roc_boost_resume_e8ec57138b7c1e28.cpp