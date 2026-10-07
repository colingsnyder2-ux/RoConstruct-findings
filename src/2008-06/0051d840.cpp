// roc 2008-06 0051d840  unit: seg_00510000  size: 301 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0051d840
//
// 0051d840  51                   push ecx
// 0051d841  53                   push ebx
// 0051d842  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0051d846  8b83d8000000         mov eax, dword ptr [ebx + 0xd8]
// 0051d84c  55                   push ebp
// 0051d84d  56                   push esi
// 0051d84e  8b742420             mov esi, dword ptr [esp + 0x20]
// 0051d852  03c6                 add eax, esi
// 0051d854  57                   push edi
// 0051d855  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0051d859  c1e004               shl eax, 4
// 0051d85c  50                   push eax
// 0051d85d  57                   push edi
// 0051d85e  e8cdcc0000           call 0x52a530
// 0051d863  8be8                 mov ebp, eax
// 0051d865  83c408               add esp, 8
// 0051d868  896c2410             mov dword ptr [esp + 0x10], ebp
// 0051d86c  85ed                 test ebp, ebp
// 0051d86e  7514                 jne 0x51d884
// 0051d870  6818938200           push 0x829318
// 0051d875  57                   push edi
// 0051d876  e8d5c10000           call 0x529a50
// 0051d87b  83c408               add esp, 8
// 0051d87e  5f                   pop edi
// 0051d87f  5e                   pop esi
// 0051d880  5d                   pop ebp
// 0051d881  5b                   pop ebx
// 0051d882  59                   pop ecx
// 0051d883  c3                   ret 
// 0051d884  8b8bd8000000         mov ecx, dword ptr [ebx + 0xd8]
// 0051d88a  8b93d4000000         mov edx, dword ptr [ebx + 0xd4]
// 0051d890  c1e104               shl ecx, 4
// 0051d893  51                   push ecx
// 0051d894  52                   push edx
// 0051d895  55                   push ebp
// 0051d896  e8453f1800           call 0x6a17e0
// 0051d89b  8b83d4000000         mov eax, dword ptr [ebx + 0xd4]
// 0051d8a1  50                   push eax
// 0051d8a2  57                   push edi
// 0051d8a3  e858cc0000           call 0x52a500
// 0051d8a8  33c0                 xor eax, eax
// 0051d8aa  83c414               add esp, 0x14
// 0051d8ad  3bf0                 cmp esi, eax
// 0051d8af  8983d4000000         mov dword ptr [ebx + 0xd4], eax
// 0051d8b5  8944241c             mov dword ptr [esp + 0x1c], eax
// 0051d8b9  0f8e8e000000         jle 0x51d94d
// 0051d8bf  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0051d8c3  8bb3d8000000         mov esi, dword ptr [ebx + 0xd8]
// 0051d8c9  0374241c             add esi, dword ptr [esp + 0x1c]
// 0051d8cd  8b07                 mov eax, dword ptr [edi]
// 0051d8cf  c1e604               shl esi, 4
// 0051d8d2  03f5                 add esi, ebp
// 0051d8d4  8d6801               lea ebp, [eax + 1]
// 0051d8d7  8a08                 mov cl, byte ptr [eax]
// 0051d8d9  40                   inc eax
// 0051d8da  84c9                 test cl, cl
// 0051d8dc  75f9                 jne 0x51d8d7
// 0051d8de  2bc5                 sub eax, ebp
// 0051d8e0  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 0051d8e4  40                   inc eax
// 0051d8e5  50                   push eax
// 0051d8e6  55                   push ebp
// 0051d8e7  e8b4cb0000           call 0x52a4a0
// 0051d8ec  8906                 mov dword ptr [esi], eax
// 0051d8ee  8b0f                 mov ecx, dword ptr [edi]
// 0051d8f0  83c408               add esp, 8
// 0051d8f3  8bd0                 mov edx, eax
// 0051d8f5  8a01                 mov al, byte ptr [ecx]
// 0051d8f7  8802                 mov byte ptr [edx], al
// 0051d8f9  41                   inc ecx
// 0051d8fa  42                   inc edx
// 0051d8fb  84c0                 test al, al
// 0051d8fd  75f6                 jne 0x51d8f5
// 0051d8ff  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 0051d902  c1e104               shl ecx, 4
// 0051d905  51                   push ecx
// 0051d906  55                   push ebp
// 0051d907  e894cb0000           call 0x52a4a0
// 0051d90c  894608               mov dword ptr [esi + 8], eax
// 0051d90f  8b570c               mov edx, dword ptr [edi + 0xc]
// 0051d912  8b4f08               mov ecx, dword ptr [edi + 8]
// 0051d915  c1e204               shl edx, 4
// 0051d918  52                   push edx
// 0051d919  51                   push ecx
// 0051d91a  50                   push eax
// 0051d91b  e8c03e1800           call 0x6a17e0
// 0051d920  8b570c               mov edx, dword ptr [edi + 0xc]
// 0051d923  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 0051d927  89560c               mov dword ptr [esi + 0xc], edx
// 0051d92a  8a4704               mov al, byte ptr [edi + 4]
// 0051d92d  884604               mov byte ptr [esi + 4], al
// 0051d930  8b442430             mov eax, dword ptr [esp + 0x30]
// 0051d934  40                   inc eax
// 0051d935  83c414               add esp, 0x14
// 0051d938  83c710               add edi, 0x10
// 0051d93b  3b442424             cmp eax, dword ptr [esp + 0x24]
// 0051d93f  8944241c             mov dword ptr [esp + 0x1c], eax
// 0051d943  0f8c7affffff         jl 0x51d8c3
// 0051d949  8b742424             mov esi, dword ptr [esp + 0x24]
// 0051d94d  01b3d8000000         add dword ptr [ebx + 0xd8], esi
// 0051d953  814b0800200000       or dword ptr [ebx + 8], 0x2000
// 0051d95a  838bb800000020       or dword ptr [ebx + 0xb8], 0x20
// 0051d961  5f                   pop edi
// 0051d962  5e                   pop esi
// 0051d963  89abd4000000         mov dword ptr [ebx + 0xd4], ebp
// 0051d969  5d                   pop ebp
// 0051d96a  5b                   pop ebx
// 0051d96b  59                   pop ecx
// 0051d96c  c3                   ret 
// library libpng-1.2.5/pngset.c (function _png_set_sPLT)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngset.c
