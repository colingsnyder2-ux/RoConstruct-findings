// roc 2007-08 00514a60  unit: G3D::_internal::DialogTemplate  size: 318 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00514a60
//
// 00514a60  51                   push ecx
// 00514a61  53                   push ebx
// 00514a62  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00514a66  8b83d8000000         mov eax, dword ptr [ebx + 0xd8]
// 00514a6c  55                   push ebp
// 00514a6d  56                   push esi
// 00514a6e  8b742420             mov esi, dword ptr [esp + 0x20]
// 00514a72  03c6                 add eax, esi
// 00514a74  57                   push edi
// 00514a75  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00514a79  c1e004               shl eax, 4
// 00514a7c  50                   push eax
// 00514a7d  57                   push edi
// 00514a7e  e87da20000           call 0x51ed00
// 00514a83  8be8                 mov ebp, eax
// 00514a85  83c408               add esp, 8
// 00514a88  85ed                 test ebp, ebp
// 00514a8a  896c2410             mov dword ptr [esp + 0x10], ebp
// 00514a8e  7514                 jne 0x514aa4
// 00514a90  68e8147a00           push 0x7a14e8
// 00514a95  57                   push edi
// 00514a96  e8f59e0000           call 0x51e990
// 00514a9b  83c408               add esp, 8
// 00514a9e  5f                   pop edi
// 00514a9f  5e                   pop esi
// 00514aa0  5d                   pop ebp
// 00514aa1  5b                   pop ebx
// 00514aa2  59                   pop ecx
// 00514aa3  c3                   ret 
// 00514aa4  8b8bd8000000         mov ecx, dword ptr [ebx + 0xd8]
// 00514aaa  8b93d4000000         mov edx, dword ptr [ebx + 0xd4]
// 00514ab0  c1e104               shl ecx, 4
// 00514ab3  51                   push ecx
// 00514ab4  52                   push edx
// 00514ab5  55                   push ebp
// 00514ab6  e891c21100           call 0x630d4c
// 00514abb  8b83d4000000         mov eax, dword ptr [ebx + 0xd4]
// 00514ac1  50                   push eax
// 00514ac2  57                   push edi
// 00514ac3  e808a20000           call 0x51ecd0
// 00514ac8  33c0                 xor eax, eax
// 00514aca  83c414               add esp, 0x14
// 00514acd  3bf0                 cmp esi, eax
// 00514acf  8983d4000000         mov dword ptr [ebx + 0xd4], eax
// 00514ad5  8944241c             mov dword ptr [esp + 0x1c], eax
// 00514ad9  0f8e9f000000         jle 0x514b7e
// 00514adf  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00514ae3  8bb3d8000000         mov esi, dword ptr [ebx + 0xd8]
// 00514ae9  0374241c             add esi, dword ptr [esp + 0x1c]
// 00514aed  8b07                 mov eax, dword ptr [edi]
// 00514aef  c1e604               shl esi, 4
// 00514af2  03f5                 add esi, ebp
// 00514af4  8d6801               lea ebp, [eax + 1]
// 00514af7  8a08                 mov cl, byte ptr [eax]
// 00514af9  83c001               add eax, 1
// 00514afc  84c9                 test cl, cl
// 00514afe  75f7                 jne 0x514af7
// 00514b00  2bc5                 sub eax, ebp
// 00514b02  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 00514b06  83c001               add eax, 1
// 00514b09  50                   push eax
// 00514b0a  55                   push ebp
// 00514b0b  e870a10000           call 0x51ec80
// 00514b10  8906                 mov dword ptr [esi], eax
// 00514b12  8b0f                 mov ecx, dword ptr [edi]
// 00514b14  83c408               add esp, 8
// 00514b17  8bd0                 mov edx, eax
// 00514b19  8da42400000000       lea esp, [esp]
// 00514b20  8a01                 mov al, byte ptr [ecx]
// 00514b22  8802                 mov byte ptr [edx], al
// 00514b24  83c101               add ecx, 1
// 00514b27  83c201               add edx, 1
// 00514b2a  84c0                 test al, al
// 00514b2c  75f2                 jne 0x514b20
// 00514b2e  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 00514b31  c1e104               shl ecx, 4
// 00514b34  51                   push ecx
// 00514b35  55                   push ebp
// 00514b36  e845a10000           call 0x51ec80
// 00514b3b  894608               mov dword ptr [esi + 8], eax
// 00514b3e  8b570c               mov edx, dword ptr [edi + 0xc]
// 00514b41  8b4f08               mov ecx, dword ptr [edi + 8]
// 00514b44  c1e204               shl edx, 4
// 00514b47  52                   push edx
// 00514b48  51                   push ecx
// 00514b49  50                   push eax
// 00514b4a  e8fdc11100           call 0x630d4c
// 00514b4f  8b570c               mov edx, dword ptr [edi + 0xc]
// 00514b52  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 00514b56  89560c               mov dword ptr [esi + 0xc], edx
// 00514b59  8a4704               mov al, byte ptr [edi + 4]
// 00514b5c  884604               mov byte ptr [esi + 4], al
// 00514b5f  8b442430             mov eax, dword ptr [esp + 0x30]
// 00514b63  83c001               add eax, 1
// 00514b66  83c414               add esp, 0x14
// 00514b69  83c710               add edi, 0x10
// 00514b6c  3b442424             cmp eax, dword ptr [esp + 0x24]
// 00514b70  8944241c             mov dword ptr [esp + 0x1c], eax
// 00514b74  0f8c69ffffff         jl 0x514ae3
// 00514b7a  8b742424             mov esi, dword ptr [esp + 0x24]
// 00514b7e  01b3d8000000         add dword ptr [ebx + 0xd8], esi
// 00514b84  814b0800200000       or dword ptr [ebx + 8], 0x2000
// 00514b8b  838bb800000020       or dword ptr [ebx + 0xb8], 0x20
// 00514b92  5f                   pop edi
// 00514b93  5e                   pop esi
// 00514b94  89abd4000000         mov dword ptr [ebx + 0xd4], ebp
// 00514b9a  5d                   pop ebp
// 00514b9b  5b                   pop ebx
// 00514b9c  59                   pop ecx
// 00514b9d  c3                   ret 
// library libpng-1.2.5/pngset.c (function _png_set_sPLT)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngset.c
