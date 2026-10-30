// roc 2009-06 005fe940  unit: RBX::VInstance::?$NonFactoryProduct  size: 272 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005fe940
//
// 005fe940  6aff                 push -1
// 005fe942  64a100000000         mov eax, dword ptr fs:[0]
// 005fe948  8b542408             mov edx, dword ptr [esp + 8]
// 005fe94c  68608a8600           push 0x868a60
// 005fe951  50                   push eax
// 005fe952  64892500000000       mov dword ptr fs:[0], esp
// 005fe959  83ec1c               sub esp, 0x1c
// 005fe95c  53                   push ebx
// 005fe95d  55                   push ebp
// 005fe95e  56                   push esi
// 005fe95f  57                   push edi
// 005fe960  8bf9                 mov edi, ecx
// 005fe962  8b4f18               mov ecx, dword ptr [edi + 0x18]
// 005fe965  8b4104               mov eax, dword ptr [ecx + 4]
// 005fe968  33db                 xor ebx, ebx
// 005fe96a  8be9                 mov ebp, ecx
// 005fe96c  385819               cmp byte ptr [eax + 0x19], bl
// 005fe96f  7515                 jne 0x5fe986
// 005fe971  8b0a                 mov ecx, dword ptr [edx]
// 005fe973  39480c               cmp dword ptr [eax + 0xc], ecx
// 005fe976  7d05                 jge 0x5fe97d
// 005fe978  8b4008               mov eax, dword ptr [eax + 8]
// 005fe97b  eb04                 jmp 0x5fe981
// 005fe97d  8be8                 mov ebp, eax
// 005fe97f  8b00                 mov eax, dword ptr [eax]
// 005fe981  385819               cmp byte ptr [eax + 0x19], bl
// 005fe984  74ed                 je 0x5fe973
// 005fe986  8b37                 mov esi, dword ptr [edi]
// 005fe988  8b4718               mov eax, dword ptr [edi + 0x18]
// 005fe98b  89442414             mov dword ptr [esp + 0x14], eax
// 005fe98f  3bf3                 cmp esi, ebx
// 005fe991  7404                 je 0x5fe997
// 005fe993  3bf6                 cmp esi, esi
// 005fe995  740c                 je 0x5fe9a3
// 005fe997  ff15ace98900         call dword ptr [0x89e9ac]
// 005fe99d  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 005fe9a1  33db                 xor ebx, ebx
// 005fe9a3  3b6c2414             cmp ebp, dword ptr [esp + 0x14]
// 005fe9a7  7407                 je 0x5fe9b0
// 005fe9a9  8b0a                 mov ecx, dword ptr [edx]
// 005fe9ab  3b4d0c               cmp ecx, dword ptr [ebp + 0xc]
// 005fe9ae  7d6d                 jge 0x5fea1d
// 005fe9b0  895c2410             mov dword ptr [esp + 0x10], ebx
// 005fe9b4  895c2414             mov dword ptr [esp + 0x14], ebx
// 005fe9b8  8b12                 mov edx, dword ptr [edx]
// 005fe9ba  895c2434             mov dword ptr [esp + 0x34], ebx
// 005fe9be  89542420             mov dword ptr [esp + 0x20], edx
// 005fe9c2  895c2424             mov dword ptr [esp + 0x24], ebx
// 005fe9c6  895c2428             mov dword ptr [esp + 0x28], ebx
// 005fe9ca  8d442420             lea eax, [esp + 0x20]
// 005fe9ce  50                   push eax
// 005fe9cf  55                   push ebp
// 005fe9d0  56                   push esi
// 005fe9d1  8d4c2424             lea ecx, [esp + 0x24]
// 005fe9d5  51                   push ecx
// 005fe9d6  8bcf                 mov ecx, edi
// 005fe9d8  c644244401           mov byte ptr [esp + 0x44], 1
// 005fe9dd  e89efbffff           call 0x5fe580
// 005fe9e2  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 005fe9e6  8b30                 mov esi, dword ptr [eax]
// 005fe9e8  8b6804               mov ebp, dword ptr [eax + 4]
// 005fe9eb  885c2434             mov byte ptr [esp + 0x34], bl
// 005fe9ef  3bfb                 cmp edi, ebx
// 005fe9f1  742a                 je 0x5fea1d
// 005fe9f3  8d5704               lea edx, [edi + 4]
// 005fe9f6  83c8ff               or eax, 0xffffffff
// 005fe9f9  f00fc102             lock xadd dword ptr [edx], eax
// 005fe9fd  751e                 jne 0x5fea1d
// 005fe9ff  8b17                 mov edx, dword ptr [edi]
// 005fea01  8b4204               mov eax, dword ptr [edx + 4]
// 005fea04  8bcf                 mov ecx, edi
// 005fea06  ffd0                 call eax
// 005fea08  8d4f08               lea ecx, [edi + 8]
// 005fea0b  83caff               or edx, 0xffffffff
// 005fea0e  f00fc111             lock xadd dword ptr [ecx], edx
// 005fea12  7509                 jne 0x5fea1d
// 005fea14  8b07                 mov eax, dword ptr [edi]
// 005fea16  8b5008               mov edx, dword ptr [eax + 8]
// 005fea19  8bcf                 mov ecx, edi
// 005fea1b  ffd2                 call edx
// 005fea1d  3bf3                 cmp esi, ebx
// 005fea1f  752b                 jne 0x5fea4c
// 005fea21  ff15ace98900         call dword ptr [0x89e9ac]
// 005fea27  33f6                 xor esi, esi
// 005fea29  3b6e18               cmp ebp, dword ptr [esi + 0x18]
// 005fea2c  7506                 jne 0x5fea34
// 005fea2e  ff15ace98900         call dword ptr [0x89e9ac]
// 005fea34  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005fea38  5f                   pop edi
// 005fea39  5e                   pop esi
// 005fea3a  8d4510               lea eax, [ebp + 0x10]
// 005fea3d  5d                   pop ebp
// 005fea3e  5b                   pop ebx
// 005fea3f  64890d00000000       mov dword ptr fs:[0], ecx
// 005fea46  83c428               add esp, 0x28
// 005fea49  c20400               ret 4
// 005fea4c  8b36                 mov esi, dword ptr [esi]
// 005fea4e  ebd9                 jmp 0x5fea29
// copied from an identical function in another client (function ??A?$map@HV?$shared_ptr@UT@@@boost@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHV?$shared_ptr@UT@@@boost@@@std@@@4@@std@@QAEAAV?$shared_ptr@UT@@@boost@@ABH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1-dll map_int_sp.cpp